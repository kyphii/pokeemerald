#include "global.h"
#include "dynamic_palettes.h"
#include "list_menu.h"
#include "menu.h"
#include "palette.h"
#include "script.h"
#include "sound.h"
#include "sprite.h"
#include "task.h"
#include "text.h"
#include "text_window.h"
#include "window.h"
#include "constants/rgb.h"
#include "constants/songs.h"
#include "constants/trainers.h"

// Define all dynamic palettes here and in dynamic_palettes.h
EWRAM_DATA u16 sDynPalPlayerOverworld[16] = {0};
EWRAM_DATA u16 sDynPalPlayerReflection[16] = {0};
EWRAM_DATA u16 sDynPalPlayerUnderwater[16] = {0};
EWRAM_DATA u16 sDynPalPlayerBattleFront[16] = {0};
EWRAM_DATA u16 sDynPalPlayerBattleBack[16] = {0};

// Define palette colors from files
const u16 sDynPal_Base[] = INCBIN_U16("graphics/dynpal/player_dynpal_base.gbapal");
const u16 sDynPal_Part_Skin_Light[] = INCBIN_U16("graphics/dynpal/player_dynpal_skin_light.gbapal");
const u16 sDynPal_Part_Skin_Dark[] = INCBIN_U16("graphics/dynpal/player_dynpal_skin_dark.gbapal");
const u16 sDynPal_Part_Skin_Medium[] = INCBIN_U16("graphics/dynpal/player_dynpal_skin_medium.gbapal");
const u16 sDynPal_Part_Skin_Pale[] = INCBIN_U16("graphics/dynpal/player_dynpal_skin_pale.gbapal");
const u16 sDynPal_Part_Hair_Black[] = INCBIN_U16("graphics/dynpal/player_dynpal_hair_black.gbapal");
const u16 sDynPal_Part_Hair_DarkBrown[] = INCBIN_U16("graphics/dynpal/player_dynpal_hair_darkbrown.gbapal");
const u16 sDynPal_Part_Hair_LightBrown[] = INCBIN_U16("graphics/dynpal/player_dynpal_hair_lightbrown.gbapal");
const u16 sDynPal_Part_Hair_Blonde[] = INCBIN_U16("graphics/dynpal/player_dynpal_hair_blonde.gbapal");
const u16 sDynPal_Part_Hair_Red[] = INCBIN_U16("graphics/dynpal/player_dynpal_hair_red.gbapal");
const u16 sDynPal_Part_Hair_White[] = INCBIN_U16("graphics/dynpal/player_dynpal_hair_white.gbapal");
const u16 sDynPal_Part_Hair_Pink[] = INCBIN_U16("graphics/dynpal/player_dynpal_hair_pink.gbapal");
const u16 sDynPal_Part_Hair_Blue[] = INCBIN_U16("graphics/dynpal/player_dynpal_hair_blue.gbapal");
const u16 sDynPal_Part_Clothes_Red[] = INCBIN_U16("graphics/dynpal/player_dynpal_clothes_red.gbapal");
const u16 sDynPal_Part_Clothes_Green[] = INCBIN_U16("graphics/dynpal/player_dynpal_clothes_green.gbapal");
const u16 sDynPal_Part_Clothes_Orange[] = INCBIN_U16("graphics/dynpal/player_dynpal_clothes_orange.gbapal");
const u16 sDynPal_Part_Clothes_Cyan[] = INCBIN_U16("graphics/dynpal/player_dynpal_clothes_cyan.gbapal");
const u16 sDynPal_Part_Clothes_Yellow[] = INCBIN_U16("graphics/dynpal/player_dynpal_clothes_yellow.gbapal");
const u16 sDynPal_Part_Clothes_Blue[] = INCBIN_U16("graphics/dynpal/player_dynpal_clothes_blue.gbapal");
const u16 sDynPal_Part_Clothes_Purple[] = INCBIN_U16("graphics/dynpal/player_dynpal_clothes_purple.gbapal");
const u16 sDynPal_Part_Clothes_Pink[] = INCBIN_U16("graphics/dynpal/player_dynpal_clothes_pink.gbapal");
const u16 sDynPal_Part_Clothes_Black[] = INCBIN_U16("graphics/dynpal/player_dynpal_clothes_black.gbapal");
const u16 sDynPal_Part_Clothes_Silver[] = INCBIN_U16("graphics/dynpal/player_dynpal_clothes_silver.gbapal");

// Text definitions for intro / menus
const u8 sText_DynPal_Skin_Light[] = _("SKIN TONE 1");
const u8 sText_DynPal_Skin_Dark[] = _("SKIN TONE 2");
const u8 sText_DynPal_Skin_Medium[] = _("SKIN TONE 3");
const u8 sText_DynPal_Skin_Pale[] = _("SKIN TONE 4");
const u8 sText_DynPal_Hair_Black[] = _("BLACK");
const u8 sText_DynPal_Hair_DarkBrown[] = _("DARK BROWN");
const u8 sText_DynPal_Hair_LightBrown[] = _("LIGHT BROWN");
const u8 sText_DynPal_Hair_Blonde[] = _("BLOND");
const u8 sText_DynPal_Hair_Red[] = _("GINGER");
const u8 sText_DynPal_Hair_White[] = _("WHITE");
const u8 sText_DynPal_Hair_Pink[] = _("PINK");
const u8 sText_DynPal_Hair_Blue[] = _("BLUE");
const u8 sText_DynPal_Clothes_Red[] = _("RED");
const u8 sText_DynPal_Clothes_Green[] = _("GREEN");
const u8 sText_DynPal_Clothes_Orange[] = _("ORANGE");
const u8 sText_DynPal_Clothes_Cyan[] = _("CYAN");
const u8 sText_DynPal_Clothes_Yellow[] = _("YELLOW");
const u8 sText_DynPal_Clothes_Blue[] = _("BLUE");
const u8 sText_DynPal_Clothes_Purple[] = _("PURPLE");
const u8 sText_DynPal_Clothes_Pink[] = _("PINK");
const u8 sText_DynPal_Clothes_Black[] = _("BLACK");
const u8 sText_DynPal_Clothes_Silver[] = _("SILVER");

static const struct SpritePalette sDynPalSkinPresets[] = {
    {sDynPal_Part_Skin_Light,       0x1301},
    {sDynPal_Part_Skin_Dark,        0x1302},
    {sDynPal_Part_Skin_Medium,      0x1303},
    {sDynPal_Part_Skin_Pale,        0x1304},
};
#define COUNT_SKIN_TONES 4

static const struct SpritePalette sDynPalHairPresets[] = {
    {sDynPal_Part_Hair_Black,       0x1305},
    {sDynPal_Part_Hair_DarkBrown,   0x1306},
    {sDynPal_Part_Hair_LightBrown,  0x1307},
    {sDynPal_Part_Hair_Blonde,      0x1308},
    {sDynPal_Part_Hair_Red,         0x1309},
    {sDynPal_Part_Hair_White,       0x130A},
    {sDynPal_Part_Hair_Pink,        0x130B},
    {sDynPal_Part_Hair_Blue,        0x130C},
};
#define COUNT_HAIR_TONES 8

static const struct SpritePalette sDynPalClothesPresets[] = {
    {sDynPal_Part_Clothes_Red,      0x130D},
    {sDynPal_Part_Clothes_Green,    0x130E},
    {sDynPal_Part_Clothes_Orange,   0x130F},
    {sDynPal_Part_Clothes_Cyan,     0x1310},
    {sDynPal_Part_Clothes_Yellow,   0x1311},
    {sDynPal_Part_Clothes_Blue,     0x1312},
    {sDynPal_Part_Clothes_Purple,   0x1313},
    {sDynPal_Part_Clothes_Pink,     0x1314},
    {sDynPal_Part_Clothes_Black,    0x1315},
    {sDynPal_Part_Clothes_Silver,   0x1316},
};
#define COUNT_CLOTHES_TONES 10

static const struct ListMenuItem sListItems_DynPal_SkinTones[] = {
    {sText_DynPal_Skin_Light,       0},
    {sText_DynPal_Skin_Dark,        1},
    {sText_DynPal_Skin_Medium,      2},
    {sText_DynPal_Skin_Pale,        3}
};
static const struct ListMenuItem sListItems_DynPal_HairTones[] = {
    {sText_DynPal_Hair_Black,       0},
    {sText_DynPal_Hair_DarkBrown,   1},
    {sText_DynPal_Hair_LightBrown,  2},
    {sText_DynPal_Hair_Blonde,      3},
    {sText_DynPal_Hair_Red,         4},
    {sText_DynPal_Hair_White,       5},
    {sText_DynPal_Hair_Pink,        6},
    {sText_DynPal_Hair_Blue,        7}
};
static const struct ListMenuItem sListItems_DynPal_ClothesTones[] = {
    {sText_DynPal_Clothes_Red,      0},
    {sText_DynPal_Clothes_Green,    1},
    {sText_DynPal_Clothes_Orange,   2},
    {sText_DynPal_Clothes_Cyan,     3},
    {sText_DynPal_Clothes_Yellow,   4},
    {sText_DynPal_Clothes_Blue,     5},
    {sText_DynPal_Clothes_Purple,   6},
    {sText_DynPal_Clothes_Pink,     7},
    {sText_DynPal_Clothes_Black,    8},
    {sText_DynPal_Clothes_Silver,   9}
};

// Dynamic palette definitions are split into 3 groups of 5, starting from palette index 1.
#define DYNPAL_COLOR_GROUP_NORMAL 0
#define DYNPAL_COLOR_GROUP_REFLECTION 5
#define DYNPAL_COLOR_GROUP_UNDERWATER 10

static void DynPal_InitOverworld(u16* dest, const u16* skinPalData, const u16* hairPalData, const u16* clothesPalData, int groupOffset);
static void DynPal_InitBattleFront(u16* dest, const u16* skinPalData, const u16* hairPalData, const u16* clothesPalData, int groupOffset);
static void DynPal_InitBattleBack(u16* dest, const u16* skinPalData, const u16* hairPalData, const u16* clothesPalData, int groupOffset);

static void DynPal_CopySection(const u16* src, u16* dest, int srcInd, int destInd, int groupOffset, int numberOfColors);
static void DynPal_SetToneIndices(u8 skinTone, u8 hairTone, u8 clothesTone);

static void Task_DynPal_MenuOne(u8 taskId);
static void Task_DynPal_MenuSequence(u8 taskId);
static void Task_DynPal_MenuFinish(u8 taskId);
static void Task_DynPal_MenuCancel(u8 taskId);
static void Task_HandleDynPalMultichoiceInput(u8 taskId);

static void DynPal_MenuInit();
static void DynPal_MenuShow(u8 taskId);
static void DynPal_MenuCursorMoved(s32 itemIndex, bool8 onInit, struct ListMenu* list);
static void DynPal_MenuSaveToneIndex(int dynPalType, int tone);
static void DynPal_ReloadToneForMenuByType(int dynPalType, int tone);
static void DynPal_ReloadPlayerPaletteForMenu(u16 paletteTag, u8 skinTone, u8 hairTone, u8 clothesTone);

// *MODIFY*
// Fill all dynamic palettes with data according to indices in Save Block
void DynPal_InitAllDynamicPalettes()
{
    const u16* skinPalData = sDynPalSkinPresets[min(gSaveBlock2Ptr->dynPalSkinPreset, COUNT_SKIN_TONES)].data;
    const u16* hairPalData = sDynPalHairPresets[min(gSaveBlock2Ptr->dynPalHairPreset, COUNT_HAIR_TONES)].data;
    const u16* clothesPalData = sDynPalClothesPresets[min(gSaveBlock2Ptr->dynPalClothesPreset, COUNT_CLOTHES_TONES)].data;

    // Player Normal
    DynPal_InitOverworld(sDynPalPlayerOverworld, skinPalData, hairPalData, clothesPalData, DYNPAL_COLOR_GROUP_NORMAL);
    // Player Reflection
    DynPal_InitOverworld(sDynPalPlayerReflection, skinPalData, hairPalData, clothesPalData, DYNPAL_COLOR_GROUP_REFLECTION);
    // Player Underwater
    DynPal_InitOverworld(sDynPalPlayerUnderwater, skinPalData, hairPalData, clothesPalData, DYNPAL_COLOR_GROUP_UNDERWATER);
    // Player Battle Front
    DynPal_InitBattleFront(sDynPalPlayerBattleFront, skinPalData, hairPalData, clothesPalData, DYNPAL_COLOR_GROUP_NORMAL);
    // Player Battle Back
    DynPal_InitBattleBack(sDynPalPlayerBattleBack, skinPalData, hairPalData, clothesPalData, DYNPAL_COLOR_GROUP_NORMAL);
}

// Load each section of the palette. Your implementation will differ depending on how the sprite palette is arranged.
// For any sections of the palette that should remain constant regardless of parts, use sDynPal_Base as <src>
static void DynPal_InitOverworld(u16* dest, const u16* skinPalData, const u16* hairPalData, const u16* clothesPalData, int groupOffset)
{
    //0 transparent
    //1-4 skin
    DynPal_CopySection(skinPalData, dest, 1, 1, groupOffset, 4);
    //5-6 hair 1
    DynPal_CopySection(hairPalData, dest, 1, 5, groupOffset, 2);
    //7 hair 2
    DynPal_CopySection(hairPalData, dest, 4, 7, groupOffset, 1);
    //8-9 shirt
    DynPal_CopySection(clothesPalData, dest, 1, 8, groupOffset, 2);
    //10-11 bag
    DynPal_CopySection(clothesPalData, dest, 4, 10, groupOffset, 2);
    //12-15 greyscale
    DynPal_CopySection(sDynPal_Base, dest, 1, 12, groupOffset, 4);
}

// *MODIFY*
// Derive battle front sprite palette - first load the overworld palette, then make modifications. Your specific implementation may differ.
static void DynPal_InitBattleFront(u16* dest, const u16* skinPalData, const u16* hairPalData, const u16* clothesPalData, int groupOffset)
{
    DynPal_InitOverworld(dest, skinPalData, hairPalData, clothesPalData, groupOffset);
    // red for poke ball
    DynPal_CopySection(sDynPal_Base, dest, 5, 2, groupOffset, 1);
}

static void DynPal_InitBattleBack(u16* dest, const u16* skinPalData, const u16* hairPalData, const u16* clothesPalData, int groupOffset)
{
    //0 transparent
    //1-1 skin
    DynPal_CopySection(skinPalData, dest, 1, 1, groupOffset, 1);
    //2-3 skin
    DynPal_CopySection(skinPalData, dest, 3, 2, groupOffset, 2);
    //5-6 hair 1
    DynPal_CopySection(hairPalData, dest, 1, 4, groupOffset, 2);
    //7 hair 2
    DynPal_CopySection(hairPalData, dest, 4, 6, groupOffset, 1);
    //8-9 shirt
    DynPal_CopySection(clothesPalData, dest, 1, 7, groupOffset, 3);
    //10-11 bag
    DynPal_CopySection(clothesPalData, dest, 4, 10, groupOffset, 2);
    //12-15 greyscale
    DynPal_CopySection(sDynPal_Base, dest, 1, 12, groupOffset, 4);
}

void DynPal_LoadIntroToneIndices()
{
    DynPal_ReloadPlayerPaletteForMenu(TRAINER_PIC_FRONT_PROTAG_M, 0, 4, 1);
    DynPal_ReloadPlayerPaletteForMenu(TRAINER_PIC_FRONT_PROTAG_F, 0, 4, 1);
}

// Copies <numberOfColors> values from the ROM palette <src>, to dynamic palette <dest>
static void DynPal_CopySection(const u16* src, u16* dest, int srcInd, int destInd, int groupOffset, int numberOfColors)
{
    CpuCopy16(&src[srcInd + groupOffset], &dest[destInd], numberOfColors * 2);
}

// Load the palette to active palettes using a known offset
void DynPal_LoadPaletteByOffset(u16* paletteData, u16 paletteOffset)
{
    // Standard palette loading expects the palette to be in ROM (const). Circumvent that
    memcpy(&gPlttBufferFaded[paletteOffset], paletteData, PLTT_SIZE_4BPP);
    memcpy(&gPlttBufferUnfaded[paletteOffset], paletteData, PLTT_SIZE_4BPP);
}

// Load the palette to active palettes using a known sprite tag
void DynPal_LoadPaletteByTag(u16* paletteData, u16 paletteTag)
{
    struct SpritePalette dest;

    // Free the palette tag if it is already initialized
    FreeSpritePaletteByTag(paletteTag);
    // Could just memcpy but nominally doing this the 'right' way for no particular reason
    dest.data = paletteData;
    dest.tag = paletteTag;
    LoadSpritePalette(&dest);
}

// Write palette indices to save block (can send 0xFF to exclude that tone list)
static void DynPal_SetToneIndices(u8 skinTone, u8 hairTone, u8 clothesTone)
{
    if (skinTone != 0xFF)
    {
        gSaveBlock2Ptr->dynPalSkinPreset = skinTone % COUNT_SKIN_TONES;
    }
    if (hairTone != 0xFF)
    {
        gSaveBlock2Ptr->dynPalHairPreset = hairTone % COUNT_HAIR_TONES;
    }
    if (clothesTone != 0xFF)
    {
        gSaveBlock2Ptr->dynPalClothesPreset = clothesTone % COUNT_CLOTHES_TONES;
    }
}

// LIST HANDLER DATA

#define DYNPAL_MENU_ID_CANCEL -1
#define DYNPAL_MENU_ID_PART_SKIN 0
#define DYNPAL_MENU_ID_PART_HAIR 1
#define DYNPAL_MENU_ID_PART_CLOTHES 2
#define DYNPAL_MENU_ID_FINISH 3

// Dynpal list menu template
static const struct ListMenuTemplate sListTemplate_DynPal =
{
    .moveCursorFunc = DynPal_MenuCursorMoved,
    .itemPrintFunc = NULL,
    .header_X = 0,
    .item_X = 8,
    .cursor_X = 0,
    .upText_Y = 1,
    .cursorPal = 2,
    .fillValue = 1,
    .cursorShadowPal = 3,
    .lettersSpacing = 1,
    .itemVerticalPadding = 0,
    .scrollMultiple = LIST_NO_MULTIPLE_SCROLL,
    .fontId = FONT_NORMAL,
    .cursorKind = CURSOR_BLACK_ARROW
};

// Dynpal list flow extra data
static EWRAM_DATA struct {
    s16 menuSeq;
    bool8 isActive;
    bool8 isOverworld;
    TaskFunc funcCancel;
    TaskFunc funcFinish;
    u8 skinTone;
    u8 hairTone;
    u8 clothesTone;
    u16 scrollOffset;
} sDynPalMenu = {0};

// Task data
#define tDynpalListMenuTask data[0]
#define tDynpalWindowId     data[1]
#define tDynpalNumItems     data[2]
#define tDynpalMaxItems     data[3]
#define tDynpalScrollArrows data[4]
#define tDynpalParentTask   data[5]

// Show just a single menu. Use this if you want text or whatever in between menus
void DynPal_ShowMenuSingleton(s16 dynPalType, u8 taskId, TaskFunc nFuncFinish, TaskFunc nFuncCancel, bool8 isOverworld)
{
    sDynPalMenu.menuSeq = dynPalType;
    sDynPalMenu.funcCancel = nFuncCancel;
    sDynPalMenu.funcFinish = nFuncFinish;
    sDynPalMenu.isOverworld = isOverworld;
    DynPal_MenuInit();
    gTasks[taskId].func = Task_DynPal_MenuOne;
}

// Show all three menus in sequence with nothing in between
void DynPal_ShowMenuSequence(u8 taskId, TaskFunc nFuncFinish, TaskFunc nFuncCancel, bool8 isOverworld)
{
    sDynPalMenu.menuSeq = DYNPAL_MENU_ID_PART_SKIN;
    sDynPalMenu.funcCancel = nFuncCancel;
    sDynPalMenu.funcFinish = nFuncFinish;
    sDynPalMenu.isOverworld = isOverworld;
    DynPal_MenuInit();
    gTasks[taskId].func = Task_DynPal_MenuSequence;
}

// Manager task for singleton dynpal menu
static void Task_DynPal_MenuOne(u8 taskId)
{
    if (!sDynPalMenu.isActive)
    {
        DynPal_MenuShow(taskId);
        gTasks[taskId].func = Task_DynPal_MenuFinish;
    }
}

// Manager task for full sequence dynpal menu
static void Task_DynPal_MenuSequence(u8 taskId)
{
    if (!sDynPalMenu.isActive)
    {
        switch (sDynPalMenu.menuSeq)
        {
        case DYNPAL_MENU_ID_FINISH:
            gTasks[taskId].func = Task_DynPal_MenuFinish;
            break;
        case DYNPAL_MENU_ID_CANCEL:
            gTasks[taskId].func = Task_DynPal_MenuCancel;
            break;
        default:
            DynPal_MenuShow(taskId);
            break;
        }
    }
}

// Set tone indices, init palettes, and exit dynpal menu flow
static void Task_DynPal_MenuFinish(u8 taskId)
{
    // For singleton case, only continue after menu is deactivated again
    if (!sDynPalMenu.isActive)
    {
        DynPal_SetToneIndices(sDynPalMenu.skinTone, sDynPalMenu.hairTone, sDynPalMenu.clothesTone);
        DynPal_InitAllDynamicPalettes();

        // For overworld use case, reload player palette.
        // This code assumes fixed IDs for player palette, so you may need to change this.
        if (sDynPalMenu.isOverworld)
        {
            DynPal_LoadPaletteByOffset(sDynPalPlayerOverworld, OBJ_PLTT_ID(1));
            DynPal_LoadPaletteByOffset(sDynPalPlayerReflection, OBJ_PLTT_ID(2));
            ScriptContext_Enable();
        }

        if (sDynPalMenu.funcFinish != NULL)
        {
            gTasks[taskId].func = sDynPalMenu.funcFinish;
        }
        else
        {
            DestroyTask(taskId);
        }
    }
}

// Identical to above, minus setting the tone indices from the temp vars
static void Task_DynPal_MenuCancel(u8 taskId)
{
    if (!sDynPalMenu.isActive)
    {
        DynPal_InitAllDynamicPalettes();

        if (sDynPalMenu.isOverworld)
        {
            DynPal_LoadPaletteByOffset(sDynPalPlayerOverworld, OBJ_PLTT_ID(0));
            DynPal_LoadPaletteByOffset(sDynPalPlayerReflection, OBJ_PLTT_ID(1));
            ScriptContext_Enable();
        }

        if (sDynPalMenu.funcFinish != NULL)
        {
            gTasks[taskId].func = sDynPalMenu.funcCancel;
        }
        else
        {
            DestroyTask(taskId);
        }
    }
}


static void DynPal_MenuInit()
{
    sDynPalMenu.isActive = FALSE;
    sDynPalMenu.skinTone = 0xFF;
    sDynPalMenu.hairTone = 0xFF;
    sDynPalMenu.clothesTone = 0xFF;
    sDynPalMenu.scrollOffset = 0;
}

// Shows the color menu corresponding to the value in sDynPalMenu.menuSeq
static void DynPal_MenuShow(u8 taskId)
{
    LockPlayerFieldControls();
    const struct ListMenuItem* menuItems;
    struct WindowTemplate windowTemplate;
    u8 numItems, maxShownItems, listTaskId, windowId;
    switch (sDynPalMenu.menuSeq)
    {
    case DYNPAL_MENU_ID_PART_SKIN:
        menuItems = sListItems_DynPal_SkinTones;
        numItems = COUNT_SKIN_TONES;
        break;
    case DYNPAL_MENU_ID_PART_HAIR:
        menuItems = sListItems_DynPal_HairTones;
        numItems = COUNT_HAIR_TONES;
        break;
    default: // prevent compiler from being sad
    case DYNPAL_MENU_ID_PART_CLOTHES:
        menuItems = sListItems_DynPal_ClothesTones;
        numItems = COUNT_CLOTHES_TONES;
        break;
    }
    // If the menu has no values, skip past it. If you don't want to use one of the part groups this should handle it
    if (numItems == 0)
    {
        ++sDynPalMenu.menuSeq;
        return;
    }

    maxShownItems = min(5, numItems);

    // Create window and menu templates
    windowTemplate = CreateWindowTemplate(0, 2, 2, 10, maxShownItems * 2, 15, 0x80);
    windowId = AddWindow(&windowTemplate);
    LoadUserWindowBorderGfx_(windowId, 0xF3, BG_PLTT_ID(2));
    DrawTextBorderOuter(windowId, 0xF3, 2);

    gMultiuseListMenuTemplate = sListTemplate_DynPal;
    gMultiuseListMenuTemplate.items = menuItems;
    gMultiuseListMenuTemplate.totalItems = numItems;
    gMultiuseListMenuTemplate.maxShowed = maxShownItems;
    gMultiuseListMenuTemplate.windowId = windowId;

    listTaskId = CreateTask(Task_HandleDynPalMultichoiceInput, 0);
    gTasks[listTaskId].tDynpalListMenuTask = ListMenuInit(&gMultiuseListMenuTemplate, 0, 0);
    gTasks[listTaskId].tDynpalWindowId = windowId;
    gTasks[listTaskId].tDynpalNumItems = numItems;
    gTasks[listTaskId].tDynpalMaxItems = maxShownItems;
    gTasks[listTaskId].tDynpalParentTask = taskId;

    sDynPalMenu.scrollOffset = 0;
    sDynPalMenu.isActive = TRUE;

    if (numItems > maxShownItems)
    {
        gTasks[listTaskId].tDynpalScrollArrows = AddScrollIndicatorArrowPairParameterized(
            SCROLL_ARROW_UP, 56, 12, 100, numItems - 1, 2000, 100, &(sDynPalMenu.scrollOffset));
    }
    else
    {
        gTasks[listTaskId].tDynpalScrollArrows = -1;
    }

    CopyWindowToVram(windowId, COPYWIN_MAP);
}

// Handler for scrollable list input
static void Task_HandleDynPalMultichoiceInput(u8 taskId)
{
    bool32 done = FALSE;
    s32 input = ListMenu_ProcessInput(gTasks[taskId].tDynpalListMenuTask);
    switch (input)
    {
    case LIST_HEADER:
    case LIST_NOTHING_CHOSEN:
        break;
    case LIST_CANCEL:
        // Return to previous list in sequence, or exit to fallback func
        --sDynPalMenu.menuSeq;
        done = TRUE;
        break;
    default:
        // Selection made
        done = TRUE;

        PlaySE(SE_SELECT);

        DynPal_ReloadToneForMenuByType(sDynPalMenu.menuSeq, input);
        DynPal_MenuSaveToneIndex(sDynPalMenu.menuSeq, input);
        // Prepare for next menu in sequence
        ++sDynPalMenu.menuSeq;
        break;
    }

    if (done)
    {
        // Cleanup
        sDynPalMenu.isActive = FALSE;
        // Make sure these were actually initialized before continuing
        if (gTasks[taskId].tDynpalScrollArrows != -1)
        {
            RemoveScrollIndicatorArrowPair(gTasks[taskId].tDynpalScrollArrows);
        }
        DestroyListMenuTask(gTasks[taskId].tDynpalListMenuTask, NULL, NULL);
        ClearStdWindowAndFrame(gTasks[taskId].tDynpalWindowId, TRUE);
        RemoveWindow(gTasks[taskId].tDynpalWindowId);
        DestroyTask(taskId);
        UnlockPlayerFieldControls();
    }
}

// Hot reload displayed player palette on cursor move 
static void DynPal_MenuCursorMoved(s32 itemIndex, bool8 onInit, struct ListMenu* list)
{
    sDynPalMenu.scrollOffset = itemIndex;
    DynPal_ReloadToneForMenuByType(sDynPalMenu.menuSeq, itemIndex);
}

// Write selected tones to temp vars. The vars in save block are not written until end of menu sequence, so backing out will cancel any changes
static void DynPal_MenuSaveToneIndex(int dynPalType, int tone)
{
    switch (dynPalType)
    {
    case DYNPAL_MENU_ID_PART_SKIN:
        sDynPalMenu.skinTone = tone;
        break;
    case DYNPAL_MENU_ID_PART_HAIR:
        sDynPalMenu.hairTone = tone;
        break;
    case DYNPAL_MENU_ID_PART_CLOTHES:
        sDynPalMenu.clothesTone = tone;
        break;
    }
}

// Helper for hot reloading player palette in intro menu
static void DynPal_ReloadToneForMenuByType(int dynPalType, int tone)
{
    switch (dynPalType)
    {
        case DYNPAL_MENU_ID_PART_SKIN:
            DynPal_ReloadPlayerPaletteForMenu(PlayerGenderToFrontTrainerPicId(gSaveBlock2Ptr->playerGender), tone, 0xFF, 0xFF);
            break;
        case DYNPAL_MENU_ID_PART_HAIR:
            DynPal_ReloadPlayerPaletteForMenu(PlayerGenderToFrontTrainerPicId(gSaveBlock2Ptr->playerGender), 0xFF, tone, 0xFF);
            break;
        case DYNPAL_MENU_ID_PART_CLOTHES:
            DynPal_ReloadPlayerPaletteForMenu(PlayerGenderToFrontTrainerPicId(gSaveBlock2Ptr->playerGender), 0xFF, 0xFF, tone);
            break;
    }
}

// *MODIFY*
// Hot reload player palette - Main section should be identical to DynPal_InitOverworld, but split up between each tone
static void DynPal_ReloadPlayerPaletteForMenu(u16 paletteTag, u8 skinTone, u8 hairTone, u8 clothesTone)
{
    u16 offset;
    if (sDynPalMenu.isOverworld)
    {
        offset = OBJ_PLTT_ID(1);
    }
    else
    {
        offset = OBJ_PLTT_ID(IndexOfSpritePaletteTag(paletteTag));
    }

    if (skinTone != 0xFF)
    {
        const u16* skinPalData = sDynPalSkinPresets[min(skinTone, COUNT_SKIN_TONES)].data;
        DynPal_CopySection(skinPalData, &gPlttBufferUnfaded[offset], 1, 1, DYNPAL_COLOR_GROUP_NORMAL, 4);
    }
    if (hairTone != 0xFF)
    {
        const u16* hairPalData = sDynPalHairPresets[min(hairTone, COUNT_HAIR_TONES)].data;
        DynPal_CopySection(hairPalData, &gPlttBufferUnfaded[offset], 1, 5, DYNPAL_COLOR_GROUP_NORMAL, 2);
        DynPal_CopySection(hairPalData, &gPlttBufferUnfaded[offset], 4, 7, DYNPAL_COLOR_GROUP_NORMAL, 1);
    }
    if (clothesTone != 0xFF)
    {
        const u16* clothesPalData = sDynPalClothesPresets[min(clothesTone, COUNT_CLOTHES_TONES)].data;
        DynPal_CopySection(clothesPalData, &gPlttBufferUnfaded[offset], 1, 8, DYNPAL_COLOR_GROUP_NORMAL, 2);
        DynPal_CopySection(clothesPalData, &gPlttBufferUnfaded[offset], 4, 10, DYNPAL_COLOR_GROUP_NORMAL, 2);
    }

    if (!sDynPalMenu.isOverworld)
    {
        DynPal_CopySection(sDynPal_Base, &gPlttBufferUnfaded[offset], 5, 2, DYNPAL_COLOR_GROUP_NORMAL, 1);
    }

    memcpy(&gPlttBufferFaded[offset], &gPlttBufferUnfaded[offset], PLTT_SIZE_4BPP);
}

// SCRIPT SPECIAL WRAPPERS
void DynPal_ShowFullToneMenu(void)
{
    DynPal_ShowMenuSequence(CreateTask(NULL, 0), NULL, NULL, TRUE);
}

void DynPal_ShowSkinToneMenu(void)
{
    DynPal_ShowMenuSingleton(DYNPAL_MENU_ID_PART_SKIN, CreateTask(NULL, 0), NULL, NULL, TRUE);
}

void DynPal_ShowHairToneMenu(void)
{
    DynPal_ShowMenuSingleton(DYNPAL_MENU_ID_PART_HAIR, CreateTask(NULL, 0), NULL, NULL, TRUE);
}

void DynPal_ShowClothesToneMenu(void)
{
    DynPal_ShowMenuSingleton(DYNPAL_MENU_ID_PART_CLOTHES, CreateTask(NULL, 0), NULL, NULL, TRUE);
}

#undef DYNPAL_MENU_ID_CANCEL
#undef DYNPAL_MENU_ID_PART_SKIN
#undef DYNPAL_MENU_ID_PART_HAIR
#undef DYNPAL_MENU_ID_PART_CLOTHES
#undef DYNPAL_MENU_ID_FINISH
#undef tDynpalListMenuTask
#undef tDynpalWindowId
#undef tDynpalNumItems
#undef tDynpalMaxItems
#undef tDynpalScrollArrows
#undef tDynpalParentTask
