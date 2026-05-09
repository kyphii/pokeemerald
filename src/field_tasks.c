#include "global.h"
#include "bike.h"
#include "clock.h"
#include "event_data.h"
#include "field_camera.h"
#include "field_effect_helpers.h"
#include "field_player_avatar.h"
#include "field_special_scene.h"
#include "field_tasks.h"
#include "fieldmap.h"
#include "item.h"
#include "main.h"
#include "metatile_behavior.h"
#include "overworld.h"
#include "script.h"
#include "secret_base.h"
#include "sound.h"
#include "task.h"
#include "constants/field_tasks.h"
#include "constants/items.h"
#include "constants/songs.h"
#include "constants/metatile_labels.h"

/*  This file handles some persistent tasks that run in the overworld.
 *  - Task_RunTimeBasedEvents: Periodically updates local time and RTC events. Also triggers ambient cries.
 *  - Task_MuddySlope: Handles the metatile animation when the player steps on muddy slopes.
 *  - Task_RunPerStepCallback: Calls one of the functions in sPerStepCallbacks, listed below...
 *      . DummyPerStepCallback: Default, does nothing
 *      . AshGrassPerStepCallback: Removes the ash from ash-covered grass that the player steps on.
 *      . FortreeBridgePerStepCallback: Depresses Fortree log bridges that the player steps on.
 *      . PacifidlogBridgePerStepCallback: Submerges Pacifidlog log bridges that the player steps on.
 *      . SootopolisGymIcePerStepCallback: Cracks/breaks ice in Sootopolis Gym that the player steps on.
 *      . EndTruckSequence: Sets the moving truck boxes to their final position when the truck sequence ends.
 *      . SecretBasePerStepCallback: Records the decorations in a friend's secret base that the player steps on.
 *      . CrackedFloorPerStepCallback: Breaks cracked floors that the player steps on.
 *
 *  NOTE: "PerStep" is perhaps misleading. One function in sPerStepCallbacks is called
 *        every frame while in the overworld by Task_RunPerStepCallback regardless of
 *        whether or not steps are being taken. However, nearly all of the functions in
 *        the table check if the player has moved from their previous position before
 *        doing anything else.
 */

struct PacifidlogMetatileOffsets
{
    s8 x;
    s8 y;
    u16 metatileId;
};

static void DummyPerStepCallback(u8);
static void AshGrassPerStepCallback(u8);

static const TaskFunc sPerStepCallbacks[] =
{
    [STEP_CB_DUMMY]             = DummyPerStepCallback,
    [STEP_CB_ASH]               = AshGrassPerStepCallback,
    [STEP_CB_TRUCK]             = EndTruckSequence,
    [STEP_CB_SECRET_BASE]       = SecretBasePerStepCallback
};

#define tCallbackId data[0]

static void Task_RunPerStepCallback(u8 taskId)
{
    int idx = gTasks[taskId].tCallbackId;
    sPerStepCallbacks[idx](taskId);
}

#define tState           data[0]
#define tAmbientCryState data[1]
#define tAmbientCryDelay data[2]

#define TIME_UPDATE_INTERVAL (1 << 12)

static void RunTimeBasedEvents(s16 *data)
{
    switch (tState)
    {
    case 0:
        if (gMain.vblankCounter1 & TIME_UPDATE_INTERVAL)
        {
            DoTimeBasedEvents();
            tState++;
        }
        break;
    case 1:
        if (!(gMain.vblankCounter1 & TIME_UPDATE_INTERVAL))
            tState--;
        break;
    }
}

static void Task_RunTimeBasedEvents(u8 taskId)
{
    s16 *data = gTasks[taskId].data;

    if (!ArePlayerFieldControlsLocked())
    {
        RunTimeBasedEvents(data);
        UpdateAmbientCry(&tAmbientCryState, (u16*) &tAmbientCryDelay);
    }
}

#undef tState

void SetUpFieldTasks(void)
{
    if (!FuncIsActiveTask(Task_RunPerStepCallback))
    {
        u8 taskId = CreateTask(Task_RunPerStepCallback, 80);
        gTasks[taskId].tCallbackId = STEP_CB_DUMMY;
    }

    if (!FuncIsActiveTask(Task_RunTimeBasedEvents))
        CreateTask(Task_RunTimeBasedEvents, 80);
}

void ActivatePerStepCallback(u8 callbackId)
{
    u8 taskId = FindTaskIdByFunc(Task_RunPerStepCallback);
    if (taskId != TASK_NONE)
    {
        s32 i;
        s16 *data = gTasks[taskId].data;

        for (i = 0; i < NUM_TASK_DATA; i++)
            data[i] = 0;

        if (callbackId >= ARRAY_COUNT(sPerStepCallbacks))
            tCallbackId = STEP_CB_DUMMY;
        else
            tCallbackId = callbackId;
    }
}

void ResetFieldTasksArgs(void)
{
    u8 taskId;
    s16 *data;

    taskId = FindTaskIdByFunc(Task_RunPerStepCallback);
    if (taskId != TASK_NONE)
        data = gTasks[taskId].data;

    taskId = FindTaskIdByFunc(Task_RunTimeBasedEvents);
    if (taskId != TASK_NONE)
    {
        data = gTasks[taskId].data;
        tAmbientCryState = 0;
        tAmbientCryDelay = 0;
    }
}

#undef tAmbientCryState
#undef tAmbientCryDelay

static void DummyPerStepCallback(u8 taskId)
{

}

#define tPrevX data[1]
#define tPrevY data[2]

static void AshGrassPerStepCallback(u8 taskId)
{
    s16 x, y;
    s16 *data = gTasks[taskId].data;
    PlayerGetDestCoords(&x, &y);

    // End if player hasn't moved
    if (x == tPrevX && y == tPrevY)
        return;

    tPrevX = x;
    tPrevY = y;
    if (MetatileBehavior_IsAshGrass(MapGridGetMetatileBehaviorAt(x, y)))
    {
        u16 resultLabel = 0;
        switch (MapGridGetMetatileIdAt(x, y)) {
            //Mt Briar & Snowrie Tilesets use the same values
            case METATILE_MountBriar_TallGrass_Snowy:
                resultLabel = METATILE_MountBriar_TallGrass_Clear;
                break;
            case METATILE_MountBriar_TallGrass_Snowy_TreeLeft:
                resultLabel = METATILE_MountBriar_TallGrass_Clear_TreeLeft;
                break;
            case METATILE_MountBriar_TallGrass_Snowy_TreeRight:
                resultLabel = METATILE_MountBriar_TallGrass_Clear_TreeRight;
                break;
        }
        if (resultLabel != 0) {
            StartAshFieldEffect(x, y, resultLabel, 4);
        }
    }
}

#undef tPrevX
#undef tPrevY
