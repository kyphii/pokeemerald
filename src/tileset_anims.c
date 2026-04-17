#include "global.h"
#include "graphics.h"
#include "palette.h"
#include "util.h"
#include "battle_transition.h"
#include "task.h"
#include "battle_transition.h"
#include "fieldmap.h"

static EWRAM_DATA struct {
    const u16 *src;
    u16 *dest;
    u16 size;
} sTilesetDMA3TransferBuffer[20] = {0};

static u8 sTilesetDMA3TransferBufferSize;
static u16 sPrimaryTilesetAnimCounter;
static u16 sPrimaryTilesetAnimCounterMax;
static u16 sSecondaryTilesetAnimCounter;
static u16 sSecondaryTilesetAnimCounterMax;
static void (*sPrimaryTilesetAnimCallback)(u16);
static void (*sSecondaryTilesetAnimCallback)(u16);

static void _InitPrimaryTilesetAnimation(void);
static void _InitSecondaryTilesetAnimation(void);
static void TilesetAnim_General(u16);
static void TilesetAnim_Building(u16);
static void TilesetAnim_Rustboro(u16);
static void TilesetAnim_Dewford(u16);
static void TilesetAnim_Slateport(u16);
static void TilesetAnim_Mauville(u16);
static void TilesetAnim_Lavaridge(u16);
static void TilesetAnim_Pacifidlog(u16);
static void TilesetAnim_Sootopolis(u16);
static void TilesetAnim_Underwater(u16);
static void QueueAnimTiles_General_Flower(u16);
static void QueueAnimTiles_General_Water(u16);
static void QueueAnimTiles_General_SandWaterEdge(u16);
static void QueueAnimTiles_General_Waterfall(u16);
static void QueueAnimTiles_General_LandWaterEdge(u16);
static void QueueAnimTiles_Building_TVTurnedOn(u16);
static void QueueAnimTiles_Rustboro_Fountain(u16);
static void QueueAnimTiles_Pacifidlog_WaterCurrents(u8);
static void QueueAnimTiles_Underwater_Seaweed(u8);

const u16 gTilesetAnims_General_Flower_Frame1[] = INCBIN_U16("data/tilesets/primary/overworld/anim/flower/1.4bpp");
const u16 gTilesetAnims_General_Flower_Frame0[] = INCBIN_U16("data/tilesets/primary/overworld/anim/flower/0.4bpp");
const u16 gTilesetAnims_General_Flower_Frame2[] = INCBIN_U16("data/tilesets/primary/overworld/anim/flower/2.4bpp");
const u16 tileset_anims_space_0[16] = {};

const u16 *const gTilesetAnims_General_Flower[] = {
    gTilesetAnims_General_Flower_Frame0,
    gTilesetAnims_General_Flower_Frame1,
    gTilesetAnims_General_Flower_Frame0,
    gTilesetAnims_General_Flower_Frame2
};

const u16 gTilesetAnims_General_Water_Frame0[] = INCBIN_U16("data/tilesets/primary/overworld/anim/water/0.4bpp");
const u16 gTilesetAnims_General_Water_Frame1[] = INCBIN_U16("data/tilesets/primary/overworld/anim/water/1.4bpp");
const u16 gTilesetAnims_General_Water_Frame2[] = INCBIN_U16("data/tilesets/primary/overworld/anim/water/2.4bpp");
const u16 gTilesetAnims_General_Water_Frame3[] = INCBIN_U16("data/tilesets/primary/overworld/anim/water/3.4bpp");
const u16 gTilesetAnims_General_Water_Frame4[] = INCBIN_U16("data/tilesets/primary/overworld/anim/water/4.4bpp");
const u16 gTilesetAnims_General_Water_Frame5[] = INCBIN_U16("data/tilesets/primary/overworld/anim/water/5.4bpp");
const u16 gTilesetAnims_General_Water_Frame6[] = INCBIN_U16("data/tilesets/primary/overworld/anim/water/6.4bpp");
const u16 gTilesetAnims_General_Water_Frame7[] = INCBIN_U16("data/tilesets/primary/overworld/anim/water/7.4bpp");

const u16 *const gTilesetAnims_General_Water[] = {
    gTilesetAnims_General_Water_Frame0,
    gTilesetAnims_General_Water_Frame1,
    gTilesetAnims_General_Water_Frame2,
    gTilesetAnims_General_Water_Frame3,
    gTilesetAnims_General_Water_Frame4,
    gTilesetAnims_General_Water_Frame5,
    gTilesetAnims_General_Water_Frame6,
    gTilesetAnims_General_Water_Frame7
};

const u16 gTilesetAnims_General_SandWaterEdge_Frame0[] = INCBIN_U16("data/tilesets/primary/overworld/anim/sand_water_edge/0.4bpp");
const u16 gTilesetAnims_General_SandWaterEdge_Frame1[] = INCBIN_U16("data/tilesets/primary/overworld/anim/sand_water_edge/1.4bpp");
const u16 gTilesetAnims_General_SandWaterEdge_Frame2[] = INCBIN_U16("data/tilesets/primary/overworld/anim/sand_water_edge/2.4bpp");
const u16 gTilesetAnims_General_SandWaterEdge_Frame3[] = INCBIN_U16("data/tilesets/primary/overworld/anim/sand_water_edge/3.4bpp");
const u16 gTilesetAnims_General_SandWaterEdge_Frame4[] = INCBIN_U16("data/tilesets/primary/overworld/anim/sand_water_edge/4.4bpp");
const u16 gTilesetAnims_General_SandWaterEdge_Frame5[] = INCBIN_U16("data/tilesets/primary/overworld/anim/sand_water_edge/5.4bpp");
const u16 gTilesetAnims_General_SandWaterEdge_Frame6[] = INCBIN_U16("data/tilesets/primary/overworld/anim/sand_water_edge/6.4bpp");

const u16 *const gTilesetAnims_General_SandWaterEdge[] = {
    gTilesetAnims_General_SandWaterEdge_Frame0,
    gTilesetAnims_General_SandWaterEdge_Frame1,
    gTilesetAnims_General_SandWaterEdge_Frame2,
    gTilesetAnims_General_SandWaterEdge_Frame3,
    gTilesetAnims_General_SandWaterEdge_Frame4,
    gTilesetAnims_General_SandWaterEdge_Frame5,
    gTilesetAnims_General_SandWaterEdge_Frame6,
    gTilesetAnims_General_SandWaterEdge_Frame0
};

const u16 gTilesetAnims_General_Waterfall_Frame0[] = INCBIN_U16("data/tilesets/primary/overworld/anim/waterfall/0.4bpp");
const u16 gTilesetAnims_General_Waterfall_Frame1[] = INCBIN_U16("data/tilesets/primary/overworld/anim/waterfall/1.4bpp");
const u16 gTilesetAnims_General_Waterfall_Frame2[] = INCBIN_U16("data/tilesets/primary/overworld/anim/waterfall/2.4bpp");
const u16 gTilesetAnims_General_Waterfall_Frame3[] = INCBIN_U16("data/tilesets/primary/overworld/anim/waterfall/3.4bpp");

const u16 *const gTilesetAnims_General_Waterfall[] = {
    gTilesetAnims_General_Waterfall_Frame0,
    gTilesetAnims_General_Waterfall_Frame1,
    gTilesetAnims_General_Waterfall_Frame2,
    gTilesetAnims_General_Waterfall_Frame3
};

const u16 gTilesetAnims_General_LandWaterEdge_Frame0[] = INCBIN_U16("data/tilesets/primary/overworld/anim/land_water_edge/0.4bpp");
const u16 gTilesetAnims_General_LandWaterEdge_Frame1[] = INCBIN_U16("data/tilesets/primary/overworld/anim/land_water_edge/1.4bpp");
const u16 gTilesetAnims_General_LandWaterEdge_Frame2[] = INCBIN_U16("data/tilesets/primary/overworld/anim/land_water_edge/2.4bpp");
const u16 gTilesetAnims_General_LandWaterEdge_Frame3[] = INCBIN_U16("data/tilesets/primary/overworld/anim/land_water_edge/3.4bpp");

const u16 *const gTilesetAnims_General_LandWaterEdge[] = {
    gTilesetAnims_General_LandWaterEdge_Frame0,
    gTilesetAnims_General_LandWaterEdge_Frame1,
    gTilesetAnims_General_LandWaterEdge_Frame2,
    gTilesetAnims_General_LandWaterEdge_Frame3
};

const u16 gTilesetAnims_Underwater_Seaweed_Frame0[] = INCBIN_U16("data/tilesets/secondary/underwater/anim/seaweed/0.4bpp");
const u16 gTilesetAnims_Underwater_Seaweed_Frame1[] = INCBIN_U16("data/tilesets/secondary/underwater/anim/seaweed/1.4bpp");
const u16 gTilesetAnims_Underwater_Seaweed_Frame2[] = INCBIN_U16("data/tilesets/secondary/underwater/anim/seaweed/2.4bpp");
const u16 gTilesetAnims_Underwater_Seaweed_Frame3[] = INCBIN_U16("data/tilesets/secondary/underwater/anim/seaweed/3.4bpp");

const u16 *const gTilesetAnims_Underwater_Seaweed[] = {
    gTilesetAnims_Underwater_Seaweed_Frame0,
    gTilesetAnims_Underwater_Seaweed_Frame1,
    gTilesetAnims_Underwater_Seaweed_Frame2,
    gTilesetAnims_Underwater_Seaweed_Frame3
};

const u16 gTilesetAnims_Pacifidlog_WaterCurrents_Frame0[] = INCBIN_U16("data/tilesets/secondary/abalove/anim/water_currents/0.4bpp");
const u16 gTilesetAnims_Pacifidlog_WaterCurrents_Frame1[] = INCBIN_U16("data/tilesets/secondary/abalove/anim/water_currents/1.4bpp");
const u16 gTilesetAnims_Pacifidlog_WaterCurrents_Frame2[] = INCBIN_U16("data/tilesets/secondary/abalove/anim/water_currents/2.4bpp");
const u16 gTilesetAnims_Pacifidlog_WaterCurrents_Frame3[] = INCBIN_U16("data/tilesets/secondary/abalove/anim/water_currents/3.4bpp");
const u16 gTilesetAnims_Pacifidlog_WaterCurrents_Frame4[] = INCBIN_U16("data/tilesets/secondary/abalove/anim/water_currents/4.4bpp");
const u16 gTilesetAnims_Pacifidlog_WaterCurrents_Frame5[] = INCBIN_U16("data/tilesets/secondary/abalove/anim/water_currents/5.4bpp");
const u16 gTilesetAnims_Pacifidlog_WaterCurrents_Frame6[] = INCBIN_U16("data/tilesets/secondary/abalove/anim/water_currents/6.4bpp");
const u16 gTilesetAnims_Pacifidlog_WaterCurrents_Frame7[] = INCBIN_U16("data/tilesets/secondary/abalove/anim/water_currents/7.4bpp");

const u16 *const gTilesetAnims_Pacifidlog_WaterCurrents[] = {
    gTilesetAnims_Pacifidlog_WaterCurrents_Frame0,
    gTilesetAnims_Pacifidlog_WaterCurrents_Frame1,
    gTilesetAnims_Pacifidlog_WaterCurrents_Frame2,
    gTilesetAnims_Pacifidlog_WaterCurrents_Frame3,
    gTilesetAnims_Pacifidlog_WaterCurrents_Frame4,
    gTilesetAnims_Pacifidlog_WaterCurrents_Frame5,
    gTilesetAnims_Pacifidlog_WaterCurrents_Frame6,
    gTilesetAnims_Pacifidlog_WaterCurrents_Frame7
};

const u16 gTilesetAnims_Rustboro_Fountain_Frame0[] = INCBIN_U16("data/tilesets/secondary/whelchord/anim/fountain/0.4bpp");
const u16 gTilesetAnims_Rustboro_Fountain_Frame1[] = INCBIN_U16("data/tilesets/secondary/whelchord/anim/fountain/1.4bpp");
const u16 tileset_anims_space_2[16] = {};

const u16 *const gTilesetAnims_Rustboro_Fountain[] = {
    gTilesetAnims_Rustboro_Fountain_Frame0,
    gTilesetAnims_Rustboro_Fountain_Frame1
};

const u16 gTilesetAnims_Lavaridge_Cave_Lava_Frame0[] = INCBIN_U16("data/tilesets/secondary/cave/anim/lava/0.4bpp");
const u16 gTilesetAnims_Lavaridge_Cave_Lava_Frame1[] = INCBIN_U16("data/tilesets/secondary/cave/anim/lava/1.4bpp");
const u16 gTilesetAnims_Lavaridge_Cave_Lava_Frame2[] = INCBIN_U16("data/tilesets/secondary/cave/anim/lava/2.4bpp");
const u16 gTilesetAnims_Lavaridge_Cave_Lava_Frame3[] = INCBIN_U16("data/tilesets/secondary/cave/anim/lava/3.4bpp");
const u16 gTilesetAnims_Lavaridge_Cave_Lava_Frame4[] = INCBIN_U16("data/tilesets/secondary/cave/anim/lava/4.4bpp");
const u16 gTilesetAnims_Lavaridge_Cave_Lava_Frame5[] = INCBIN_U16("data/tilesets/secondary/cave/anim/lava/5.4bpp");
const u16 gTilesetAnims_Lavaridge_Cave_Lava_Frame6[] = INCBIN_U16("data/tilesets/secondary/cave/anim/lava/6.4bpp");
const u16 gTilesetAnims_Lavaridge_Cave_Lava_Frame7[] = INCBIN_U16("data/tilesets/secondary/cave/anim/lava/7.4bpp");
const u16 tileset_anims_space_3[16] = {};

const u16 *const gTilesetAnims_Lavaridge_Cave_Lava[] = {
    gTilesetAnims_Lavaridge_Cave_Lava_Frame0,
    gTilesetAnims_Lavaridge_Cave_Lava_Frame1,
    gTilesetAnims_Lavaridge_Cave_Lava_Frame2,
    gTilesetAnims_Lavaridge_Cave_Lava_Frame3
};

const u16 gTilesetAnims_Building_TvTurnedOn_Frame0[] = INCBIN_U16("data/tilesets/primary/building/anim/tv_turned_on/0.4bpp");
const u16 gTilesetAnims_Building_TvTurnedOn_Frame1[] = INCBIN_U16("data/tilesets/primary/building/anim/tv_turned_on/1.4bpp");

const u16 *const gTilesetAnims_Building_TvTurnedOn[] = {
    gTilesetAnims_Building_TvTurnedOn_Frame0,
    gTilesetAnims_Building_TvTurnedOn_Frame1
};

static void ResetTilesetAnimBuffer(void)
{
    sTilesetDMA3TransferBufferSize = 0;
    CpuFill32(0, sTilesetDMA3TransferBuffer, sizeof sTilesetDMA3TransferBuffer);
}

static void AppendTilesetAnimToBuffer(const u16 *src, u16 *dest, u16 size)
{
    if (sTilesetDMA3TransferBufferSize < 20)
    {
        sTilesetDMA3TransferBuffer[sTilesetDMA3TransferBufferSize].src = src;
        sTilesetDMA3TransferBuffer[sTilesetDMA3TransferBufferSize].dest = dest;
        sTilesetDMA3TransferBuffer[sTilesetDMA3TransferBufferSize].size = size;
        sTilesetDMA3TransferBufferSize ++;
    }
}

void TransferTilesetAnimsBuffer(void)
{
    int i;

    for (i = 0; i < sTilesetDMA3TransferBufferSize; i ++)
        DmaCopy16(3, sTilesetDMA3TransferBuffer[i].src, sTilesetDMA3TransferBuffer[i].dest, sTilesetDMA3TransferBuffer[i].size);

    sTilesetDMA3TransferBufferSize = 0;
}

void InitTilesetAnimations(void)
{
    ResetTilesetAnimBuffer();
    _InitPrimaryTilesetAnimation();
    _InitSecondaryTilesetAnimation();
}

void InitSecondaryTilesetAnimation(void)
{
    _InitSecondaryTilesetAnimation();
}

void UpdateTilesetAnimations(void)
{
    ResetTilesetAnimBuffer();
    if (++sPrimaryTilesetAnimCounter >= sPrimaryTilesetAnimCounterMax)
        sPrimaryTilesetAnimCounter = 0;
    if (++sSecondaryTilesetAnimCounter >= sSecondaryTilesetAnimCounterMax)
        sSecondaryTilesetAnimCounter = 0;

    if (sPrimaryTilesetAnimCallback)
        sPrimaryTilesetAnimCallback(sPrimaryTilesetAnimCounter);
    if (sSecondaryTilesetAnimCallback)
        sSecondaryTilesetAnimCallback(sSecondaryTilesetAnimCounter);
}

static void _InitPrimaryTilesetAnimation(void)
{
    sPrimaryTilesetAnimCounter = 0;
    sPrimaryTilesetAnimCounterMax = 0;
    sPrimaryTilesetAnimCallback = NULL;
    if (gMapHeader.mapLayout->primaryTileset && gMapHeader.mapLayout->primaryTileset->callback)
        gMapHeader.mapLayout->primaryTileset->callback();
}

static void _InitSecondaryTilesetAnimation(void)
{
    sSecondaryTilesetAnimCounter = 0;
    sSecondaryTilesetAnimCounterMax = 0;
    sSecondaryTilesetAnimCallback = NULL;
    if (gMapHeader.mapLayout->secondaryTileset && gMapHeader.mapLayout->secondaryTileset->callback)
        gMapHeader.mapLayout->secondaryTileset->callback();
}

void InitTilesetAnim_General(void)
{
    sPrimaryTilesetAnimCounter = 0;
    sPrimaryTilesetAnimCounterMax = 256;
    sPrimaryTilesetAnimCallback = TilesetAnim_General;
}

void InitTilesetAnim_Building(void)
{
    sPrimaryTilesetAnimCounter = 0;
    sPrimaryTilesetAnimCounterMax = 256;
    sPrimaryTilesetAnimCallback = TilesetAnim_Building;
}

static void TilesetAnim_General(u16 timer)
{
    if (timer % 16 == 0)
        QueueAnimTiles_General_Flower(timer / 16);
    if (timer % 16 == 1)
        QueueAnimTiles_General_Water(timer / 16);
    if (timer % 16 == 2)
        QueueAnimTiles_General_SandWaterEdge(timer / 16);
    if (timer % 16 == 3)
        QueueAnimTiles_General_Waterfall(timer / 16);
    if (timer % 16 == 4)
        QueueAnimTiles_General_LandWaterEdge(timer / 16);
}

static void TilesetAnim_Building(u16 timer)
{
    if (timer % 8 == 0)
        QueueAnimTiles_Building_TVTurnedOn(timer / 8);
}

static void QueueAnimTiles_General_Flower(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_General_Flower);
    AppendTilesetAnimToBuffer(gTilesetAnims_General_Flower[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(508)), 4 * TILE_SIZE_4BPP);
}

static void QueueAnimTiles_General_Water(u16 timer)
{
    u8 i = timer % ARRAY_COUNT(gTilesetAnims_General_Water);
    AppendTilesetAnimToBuffer(gTilesetAnims_General_Water[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(432)), 30 * TILE_SIZE_4BPP);
}

static void QueueAnimTiles_General_SandWaterEdge(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_General_SandWaterEdge);
    AppendTilesetAnimToBuffer(gTilesetAnims_General_SandWaterEdge[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(464)), 10 * TILE_SIZE_4BPP);
}

static void QueueAnimTiles_General_Waterfall(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_General_Waterfall);
    AppendTilesetAnimToBuffer(gTilesetAnims_General_Waterfall[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(496)), 6 * TILE_SIZE_4BPP);
}

void InitTilesetAnim_Petalburg(void)
{
    sSecondaryTilesetAnimCounter = 0;
    sSecondaryTilesetAnimCounterMax = sPrimaryTilesetAnimCounterMax;
    sSecondaryTilesetAnimCallback = NULL;
}

void InitTilesetAnim_Rustboro(void)
{
    sSecondaryTilesetAnimCounter = 0;
    sSecondaryTilesetAnimCounterMax = sPrimaryTilesetAnimCounterMax;
    sSecondaryTilesetAnimCallback = TilesetAnim_Rustboro;
}

void InitTilesetAnim_Dewford(void)
{
    sSecondaryTilesetAnimCounter = 0;
    sSecondaryTilesetAnimCounterMax = sPrimaryTilesetAnimCounterMax;
    sSecondaryTilesetAnimCallback = TilesetAnim_Dewford;
}

void InitTilesetAnim_Slateport(void)
{
    sSecondaryTilesetAnimCounter = 0;
    sSecondaryTilesetAnimCounterMax = sPrimaryTilesetAnimCounterMax;
    sSecondaryTilesetAnimCallback = TilesetAnim_Slateport;
}

void InitTilesetAnim_Mauville(void)
{
    sSecondaryTilesetAnimCounter = sPrimaryTilesetAnimCounter;
    sSecondaryTilesetAnimCounterMax = sPrimaryTilesetAnimCounterMax;
    sSecondaryTilesetAnimCallback = TilesetAnim_Mauville;
}

void InitTilesetAnim_Lavaridge(void)
{
    sSecondaryTilesetAnimCounter = 0;
    sSecondaryTilesetAnimCounterMax = sPrimaryTilesetAnimCounterMax;
    sSecondaryTilesetAnimCallback = TilesetAnim_Lavaridge;
}

void InitTilesetAnim_Fallarbor(void)
{
    sSecondaryTilesetAnimCounter = 0;
    sSecondaryTilesetAnimCounterMax = sPrimaryTilesetAnimCounterMax;
    sSecondaryTilesetAnimCallback = NULL;
}

void InitTilesetAnim_Fortree(void)
{
    sSecondaryTilesetAnimCounter = 0;
    sSecondaryTilesetAnimCounterMax = sPrimaryTilesetAnimCounterMax;
    sSecondaryTilesetAnimCallback = NULL;
}

void InitTilesetAnim_Lilycove(void)
{
    sSecondaryTilesetAnimCounter = 0;
    sSecondaryTilesetAnimCounterMax = sPrimaryTilesetAnimCounterMax;
    sSecondaryTilesetAnimCallback = NULL;
}

void InitTilesetAnim_Mossdeep(void)
{
    sSecondaryTilesetAnimCounter = 0;
    sSecondaryTilesetAnimCounterMax = sPrimaryTilesetAnimCounterMax;
    sSecondaryTilesetAnimCallback = NULL;
}

void InitTilesetAnim_Pacifidlog(void)
{
    sSecondaryTilesetAnimCounter = sPrimaryTilesetAnimCounter;
    sSecondaryTilesetAnimCounterMax = sPrimaryTilesetAnimCounterMax;
    sSecondaryTilesetAnimCallback = TilesetAnim_Pacifidlog;
}

void InitTilesetAnim_Sootopolis(void)
{
    sSecondaryTilesetAnimCounter = 0;
    sSecondaryTilesetAnimCounterMax = sPrimaryTilesetAnimCounterMax;
    sSecondaryTilesetAnimCallback = TilesetAnim_Sootopolis;
}

void InitTilesetAnim_Underwater(void)
{
    sSecondaryTilesetAnimCounter = 0;
    sSecondaryTilesetAnimCounterMax = 128;
    sSecondaryTilesetAnimCallback = TilesetAnim_Underwater;
}

static void TilesetAnim_Rustboro(u16 timer)
{
}

static void TilesetAnim_Dewford(u16 timer)
{
}

static void TilesetAnim_Slateport(u16 timer)
{
}

static void TilesetAnim_Mauville(u16 timer)
{
}

static void TilesetAnim_Lavaridge(u16 timer)
{
}

static void TilesetAnim_Pacifidlog(u16 timer)
{
    if (timer % 16 == 1)
        QueueAnimTiles_Pacifidlog_WaterCurrents(timer / 16);
}

static void TilesetAnim_Sootopolis(u16 timer)
{
    if (timer % 8 == 0)
    {
        QueueAnimTiles_Rustboro_Fountain(timer / 8);
    }
}

static void TilesetAnim_Underwater(u16 timer)
{
    if (timer % 16 == 0)
        QueueAnimTiles_Underwater_Seaweed(timer / 16);
}

static void QueueAnimTiles_General_LandWaterEdge(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_General_LandWaterEdge);
    AppendTilesetAnimToBuffer(gTilesetAnims_General_LandWaterEdge[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(480)), 10 * TILE_SIZE_4BPP);
}

static void QueueAnimTiles_Underwater_Seaweed(u8 timer)
{
    u8 i = timer % ARRAY_COUNT(gTilesetAnims_Underwater_Seaweed);
    AppendTilesetAnimToBuffer(gTilesetAnims_Underwater_Seaweed[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 496)), 4 * TILE_SIZE_4BPP);
}

static void QueueAnimTiles_Pacifidlog_WaterCurrents(u8 timer)
{
    u8 i = timer % ARRAY_COUNT(gTilesetAnims_Pacifidlog_WaterCurrents);
    AppendTilesetAnimToBuffer(gTilesetAnims_Pacifidlog_WaterCurrents[i], (u16*)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 496)), 8 * TILE_SIZE_4BPP);
}

static void QueueAnimTiles_Rustboro_Fountain(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_Rustboro_Fountain);
    AppendTilesetAnimToBuffer(gTilesetAnims_Rustboro_Fountain[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 160)), 4 * TILE_SIZE_4BPP);
}

static void QueueAnimTiles_Building_TVTurnedOn(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_Building_TvTurnedOn);
    AppendTilesetAnimToBuffer(gTilesetAnims_Building_TvTurnedOn[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(496)), 4 * TILE_SIZE_4BPP);
}
