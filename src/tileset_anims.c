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
static void TilesetAnim_EverGrande(u16);
static void TilesetAnim_Pacifidlog(u16);
static void TilesetAnim_Sootopolis(u16);
static void TilesetAnim_BattleFrontierOutsideWest(u16);
static void TilesetAnim_BattleFrontierOutsideEast(u16);
static void TilesetAnim_Underwater(u16);
static void TilesetAnim_SootopolisGym(u16);
static void TilesetAnim_Cave(u16);
static void TilesetAnim_EliteFour(u16);
static void TilesetAnim_MauvilleGym(u16);
static void TilesetAnim_BikeShop(u16);
static void TilesetAnim_BattlePyramid(u16);
static void TilesetAnim_BattleDome(u16);
static void QueueAnimTiles_General_Flower(u16);
static void QueueAnimTiles_General_Water(u16);
static void QueueAnimTiles_General_SandWaterEdge(u16);
static void QueueAnimTiles_General_Waterfall(u16);
static void QueueAnimTiles_General_LandWaterEdge(u16);
static void QueueAnimTiles_Building_TVTurnedOn(u16);
static void QueueAnimTiles_Rustboro_WindyWater(u16, u8);
static void QueueAnimTiles_Rustboro_Fountain(u16);
static void QueueAnimTiles_Dewford_Flag(u16);
static void QueueAnimTiles_Slateport_Balloons(u16);
static void QueueAnimTiles_Mauville_Flowers(u16, u8);
static void QueueAnimTiles_BikeShop_BlinkingLights(u16);
static void QueueAnimTiles_BattlePyramid_Torch(u16);
static void QueueAnimTiles_BattlePyramid_StatueShadow(u16);
static void BlendAnimPalette_BattleDome_FloorLights(u16);
static void BlendAnimPalette_BattleDome_FloorLightsNoBlend(u16);
static void QueueAnimTiles_Lavaridge_Steam(u8);
static void QueueAnimTiles_Lavaridge_Lava(u16);
static void QueueAnimTiles_EverGrande_Flowers(u16, u8);
static void QueueAnimTiles_Pacifidlog_LogBridges(u8);
static void QueueAnimTiles_Pacifidlog_WaterCurrents(u8);
static void QueueAnimTiles_Sootopolis_StormyWater(u16);
static void QueueAnimTiles_Underwater_Seaweed(u8);
static void QueueAnimTiles_Cave_Lava(u16);
static void QueueAnimTiles_BattleFrontierOutsideWest_Flag(u16);
static void QueueAnimTiles_BattleFrontierOutsideEast_Flag(u16);
static void QueueAnimTiles_MauvilleGym_ElectricGates(u16);
static void QueueAnimTiles_SootopolisGym_Waterfalls(u16);
static void QueueAnimTiles_EliteFour_GroundLights(u16);
static void QueueAnimTiles_EliteFour_WallLights(u16);

const u16 gTilesetAnims_General_Flower_Frame1[] = INCGFX_U16("data/tilesets/primary/general/anim/flower/1.png", ".4bpp");
const u16 gTilesetAnims_General_Flower_Frame0[] = INCGFX_U16("data/tilesets/primary/general/anim/flower/0.png", ".4bpp");
const u16 gTilesetAnims_General_Flower_Frame2[] = INCGFX_U16("data/tilesets/primary/general/anim/flower/2.png", ".4bpp");
const u16 tileset_anims_space_0[16] = {};

const u16 *const gTilesetAnims_General_Flower[] = {
    gTilesetAnims_General_Flower_Frame0,
    gTilesetAnims_General_Flower_Frame1,
    gTilesetAnims_General_Flower_Frame0,
    gTilesetAnims_General_Flower_Frame2
};

const u16 gTilesetAnims_General_Water_Frame0[] = INCGFX_U16("data/tilesets/primary/general/anim/water/0.png", ".4bpp");
const u16 gTilesetAnims_General_Water_Frame1[] = INCGFX_U16("data/tilesets/primary/general/anim/water/1.png", ".4bpp");
const u16 gTilesetAnims_General_Water_Frame2[] = INCGFX_U16("data/tilesets/primary/general/anim/water/2.png", ".4bpp");
const u16 gTilesetAnims_General_Water_Frame3[] = INCGFX_U16("data/tilesets/primary/general/anim/water/3.png", ".4bpp");
const u16 gTilesetAnims_General_Water_Frame4[] = INCGFX_U16("data/tilesets/primary/general/anim/water/4.png", ".4bpp");
const u16 gTilesetAnims_General_Water_Frame5[] = INCGFX_U16("data/tilesets/primary/general/anim/water/5.png", ".4bpp");
const u16 gTilesetAnims_General_Water_Frame6[] = INCGFX_U16("data/tilesets/primary/general/anim/water/6.png", ".4bpp");
const u16 gTilesetAnims_General_Water_Frame7[] = INCGFX_U16("data/tilesets/primary/general/anim/water/7.png", ".4bpp");

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

const u16 gTilesetAnims_General_SandWaterEdge_Frame0[] = INCGFX_U16("data/tilesets/primary/general/anim/sand_water_edge/0.png", ".4bpp");
const u16 gTilesetAnims_General_SandWaterEdge_Frame1[] = INCGFX_U16("data/tilesets/primary/general/anim/sand_water_edge/1.png", ".4bpp");
const u16 gTilesetAnims_General_SandWaterEdge_Frame2[] = INCGFX_U16("data/tilesets/primary/general/anim/sand_water_edge/2.png", ".4bpp");
const u16 gTilesetAnims_General_SandWaterEdge_Frame3[] = INCGFX_U16("data/tilesets/primary/general/anim/sand_water_edge/3.png", ".4bpp");
const u16 gTilesetAnims_General_SandWaterEdge_Frame4[] = INCGFX_U16("data/tilesets/primary/general/anim/sand_water_edge/4.png", ".4bpp");
const u16 gTilesetAnims_General_SandWaterEdge_Frame5[] = INCGFX_U16("data/tilesets/primary/general/anim/sand_water_edge/5.png", ".4bpp");
const u16 gTilesetAnims_General_SandWaterEdge_Frame6[] = INCGFX_U16("data/tilesets/primary/general/anim/sand_water_edge/6.png", ".4bpp");

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

const u16 gTilesetAnims_General_Waterfall_Frame0[] = INCGFX_U16("data/tilesets/primary/general/anim/waterfall/0.png", ".4bpp");
const u16 gTilesetAnims_General_Waterfall_Frame1[] = INCGFX_U16("data/tilesets/primary/general/anim/waterfall/1.png", ".4bpp");
const u16 gTilesetAnims_General_Waterfall_Frame2[] = INCGFX_U16("data/tilesets/primary/general/anim/waterfall/2.png", ".4bpp");
const u16 gTilesetAnims_General_Waterfall_Frame3[] = INCGFX_U16("data/tilesets/primary/general/anim/waterfall/3.png", ".4bpp");

const u16 *const gTilesetAnims_General_Waterfall[] = {
    gTilesetAnims_General_Waterfall_Frame0,
    gTilesetAnims_General_Waterfall_Frame1,
    gTilesetAnims_General_Waterfall_Frame2,
    gTilesetAnims_General_Waterfall_Frame3
};

const u16 gTilesetAnims_General_LandWaterEdge_Frame0[] = INCGFX_U16("data/tilesets/primary/general/anim/land_water_edge/0.png", ".4bpp");
const u16 gTilesetAnims_General_LandWaterEdge_Frame1[] = INCGFX_U16("data/tilesets/primary/general/anim/land_water_edge/1.png", ".4bpp");
const u16 gTilesetAnims_General_LandWaterEdge_Frame2[] = INCGFX_U16("data/tilesets/primary/general/anim/land_water_edge/2.png", ".4bpp");
const u16 gTilesetAnims_General_LandWaterEdge_Frame3[] = INCGFX_U16("data/tilesets/primary/general/anim/land_water_edge/3.png", ".4bpp");

const u16 *const gTilesetAnims_General_LandWaterEdge[] = {
    gTilesetAnims_General_LandWaterEdge_Frame0,
    gTilesetAnims_General_LandWaterEdge_Frame1,
    gTilesetAnims_General_LandWaterEdge_Frame2,
    gTilesetAnims_General_LandWaterEdge_Frame3
};

const u16 gTilesetAnims_Lavaridge_Steam_Frame0[] = INCGFX_U16("data/tilesets/secondary/lavaridge/anim/steam/0.png", ".4bpp");
const u16 gTilesetAnims_Lavaridge_Steam_Frame1[] = INCGFX_U16("data/tilesets/secondary/lavaridge/anim/steam/1.png", ".4bpp");
const u16 gTilesetAnims_Lavaridge_Steam_Frame2[] = INCGFX_U16("data/tilesets/secondary/lavaridge/anim/steam/2.png", ".4bpp");
const u16 gTilesetAnims_Lavaridge_Steam_Frame3[] = INCGFX_U16("data/tilesets/secondary/lavaridge/anim/steam/3.png", ".4bpp");

const u16 *const gTilesetAnims_Lavaridge_Steam[] = {
    gTilesetAnims_Lavaridge_Steam_Frame0,
    gTilesetAnims_Lavaridge_Steam_Frame1,
    gTilesetAnims_Lavaridge_Steam_Frame2,
    gTilesetAnims_Lavaridge_Steam_Frame3
};

const u16 gTilesetAnims_Pacifidlog_LogBridges_Frame0[] = INCGFX_U16("data/tilesets/secondary/pacifidlog/anim/log_bridges/0.png", ".4bpp");
const u16 gTilesetAnims_Pacifidlog_LogBridges_Frame1[] = INCGFX_U16("data/tilesets/secondary/pacifidlog/anim/log_bridges/1.png", ".4bpp");
const u16 gTilesetAnims_Pacifidlog_LogBridges_Frame2[] = INCGFX_U16("data/tilesets/secondary/pacifidlog/anim/log_bridges/2.png", ".4bpp");

const u16 *const gTilesetAnims_Pacifidlog_LogBridges[] = {
    gTilesetAnims_Pacifidlog_LogBridges_Frame0,
    gTilesetAnims_Pacifidlog_LogBridges_Frame1,
    gTilesetAnims_Pacifidlog_LogBridges_Frame2,
    gTilesetAnims_Pacifidlog_LogBridges_Frame1
};

const u16 gTilesetAnims_Underwater_Seaweed_Frame0[] = INCGFX_U16("data/tilesets/secondary/underwater/anim/seaweed/0.png", ".4bpp");
const u16 gTilesetAnims_Underwater_Seaweed_Frame1[] = INCGFX_U16("data/tilesets/secondary/underwater/anim/seaweed/1.png", ".4bpp");
const u16 gTilesetAnims_Underwater_Seaweed_Frame2[] = INCGFX_U16("data/tilesets/secondary/underwater/anim/seaweed/2.png", ".4bpp");
const u16 gTilesetAnims_Underwater_Seaweed_Frame3[] = INCGFX_U16("data/tilesets/secondary/underwater/anim/seaweed/3.png", ".4bpp");

const u16 *const gTilesetAnims_Underwater_Seaweed[] = {
    gTilesetAnims_Underwater_Seaweed_Frame0,
    gTilesetAnims_Underwater_Seaweed_Frame1,
    gTilesetAnims_Underwater_Seaweed_Frame2,
    gTilesetAnims_Underwater_Seaweed_Frame3
};

const u16 gTilesetAnims_Pacifidlog_WaterCurrents_Frame0[] = INCGFX_U16("data/tilesets/secondary/pacifidlog/anim/water_currents/0.png", ".4bpp");
const u16 gTilesetAnims_Pacifidlog_WaterCurrents_Frame1[] = INCGFX_U16("data/tilesets/secondary/pacifidlog/anim/water_currents/1.png", ".4bpp");
const u16 gTilesetAnims_Pacifidlog_WaterCurrents_Frame2[] = INCGFX_U16("data/tilesets/secondary/pacifidlog/anim/water_currents/2.png", ".4bpp");
const u16 gTilesetAnims_Pacifidlog_WaterCurrents_Frame3[] = INCGFX_U16("data/tilesets/secondary/pacifidlog/anim/water_currents/3.png", ".4bpp");
const u16 gTilesetAnims_Pacifidlog_WaterCurrents_Frame4[] = INCGFX_U16("data/tilesets/secondary/pacifidlog/anim/water_currents/4.png", ".4bpp");
const u16 gTilesetAnims_Pacifidlog_WaterCurrents_Frame5[] = INCGFX_U16("data/tilesets/secondary/pacifidlog/anim/water_currents/5.png", ".4bpp");
const u16 gTilesetAnims_Pacifidlog_WaterCurrents_Frame6[] = INCGFX_U16("data/tilesets/secondary/pacifidlog/anim/water_currents/6.png", ".4bpp");
const u16 gTilesetAnims_Pacifidlog_WaterCurrents_Frame7[] = INCGFX_U16("data/tilesets/secondary/pacifidlog/anim/water_currents/7.png", ".4bpp");

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

const u16 gTilesetAnims_Mauville_Flower1_Frame0[] = INCGFX_U16("data/tilesets/secondary/mauville/anim/flower_1/0.png", ".4bpp");
const u16 gTilesetAnims_Mauville_Flower1_Frame1[] = INCGFX_U16("data/tilesets/secondary/mauville/anim/flower_1/1.png", ".4bpp");
const u16 gTilesetAnims_Mauville_Flower1_Frame2[] = INCGFX_U16("data/tilesets/secondary/mauville/anim/flower_1/2.png", ".4bpp");
const u16 gTilesetAnims_Mauville_Flower1_Frame3[] = INCGFX_U16("data/tilesets/secondary/mauville/anim/flower_1/3.png", ".4bpp");
const u16 gTilesetAnims_Mauville_Flower1_Frame4[] = INCGFX_U16("data/tilesets/secondary/mauville/anim/flower_1/4.png", ".4bpp");
const u16 gTilesetAnims_Mauville_Flower2_Frame0[] = INCGFX_U16("data/tilesets/secondary/mauville/anim/flower_2/0.png", ".4bpp");
const u16 gTilesetAnims_Mauville_Flower2_Frame1[] = INCGFX_U16("data/tilesets/secondary/mauville/anim/flower_2/1.png", ".4bpp");
const u16 gTilesetAnims_Mauville_Flower2_Frame2[] = INCGFX_U16("data/tilesets/secondary/mauville/anim/flower_2/2.png", ".4bpp");
const u16 gTilesetAnims_Mauville_Flower2_Frame3[] = INCGFX_U16("data/tilesets/secondary/mauville/anim/flower_2/3.png", ".4bpp");
const u16 gTilesetAnims_Mauville_Flower2_Frame4[] = INCGFX_U16("data/tilesets/secondary/mauville/anim/flower_2/4.png", ".4bpp");
const u16 tileset_anims_space_1[16] = {};

u16 *const gTilesetAnims_Mauville_Flower1_VDests[] = {
    (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 96)),
    (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 100)),
    (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 104)),
    (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 108)),
    (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 112)),
    (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 116)),
    (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 120)),
    (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 124))
};

u16 *const gTilesetAnims_Mauville_Flower2_VDests[] = {
    (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 128)),
    (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 132)),
    (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 136)),
    (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 140)),
    (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 144)),
    (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 148)),
    (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 152)),
    (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 156))
};

const u16 *const gTilesetAnims_Mauville_Flower1[] = {
    gTilesetAnims_Mauville_Flower1_Frame0,
    gTilesetAnims_Mauville_Flower1_Frame0,
    gTilesetAnims_Mauville_Flower1_Frame1,
    gTilesetAnims_Mauville_Flower1_Frame2,
    gTilesetAnims_Mauville_Flower1_Frame3,
    gTilesetAnims_Mauville_Flower1_Frame3,
    gTilesetAnims_Mauville_Flower1_Frame3,
    gTilesetAnims_Mauville_Flower1_Frame3,
    gTilesetAnims_Mauville_Flower1_Frame3,
    gTilesetAnims_Mauville_Flower1_Frame3,
    gTilesetAnims_Mauville_Flower1_Frame2,
    gTilesetAnims_Mauville_Flower1_Frame1
};

const u16 *const gTilesetAnims_Mauville_Flower2[] = {
    gTilesetAnims_Mauville_Flower2_Frame0,
    gTilesetAnims_Mauville_Flower2_Frame0,
    gTilesetAnims_Mauville_Flower2_Frame1,
    gTilesetAnims_Mauville_Flower2_Frame2,
    gTilesetAnims_Mauville_Flower2_Frame3,
    gTilesetAnims_Mauville_Flower2_Frame3,
    gTilesetAnims_Mauville_Flower2_Frame3,
    gTilesetAnims_Mauville_Flower2_Frame3,
    gTilesetAnims_Mauville_Flower2_Frame3,
    gTilesetAnims_Mauville_Flower2_Frame3,
    gTilesetAnims_Mauville_Flower2_Frame2,
    gTilesetAnims_Mauville_Flower2_Frame1
};

const u16 *const gTilesetAnims_Mauville_Flower1_B[] = {
    gTilesetAnims_Mauville_Flower1_Frame0,
    gTilesetAnims_Mauville_Flower1_Frame0,
    gTilesetAnims_Mauville_Flower1_Frame4,
    gTilesetAnims_Mauville_Flower1_Frame4
};

const u16 *const gTilesetAnims_Mauville_Flower2_B[] = {
    gTilesetAnims_Mauville_Flower2_Frame0,
    gTilesetAnims_Mauville_Flower2_Frame0,
    gTilesetAnims_Mauville_Flower2_Frame4,
    gTilesetAnims_Mauville_Flower2_Frame4
};

const u16 gTilesetAnims_Rustboro_WindyWater_Frame0[] = INCGFX_U16("data/tilesets/secondary/rustboro/anim/windy_water/0.png", ".4bpp");
const u16 gTilesetAnims_Rustboro_WindyWater_Frame1[] = INCGFX_U16("data/tilesets/secondary/rustboro/anim/windy_water/1.png", ".4bpp");
const u16 gTilesetAnims_Rustboro_WindyWater_Frame2[] = INCGFX_U16("data/tilesets/secondary/rustboro/anim/windy_water/2.png", ".4bpp");
const u16 gTilesetAnims_Rustboro_WindyWater_Frame3[] = INCGFX_U16("data/tilesets/secondary/rustboro/anim/windy_water/3.png", ".4bpp");
const u16 gTilesetAnims_Rustboro_WindyWater_Frame4[] = INCGFX_U16("data/tilesets/secondary/rustboro/anim/windy_water/4.png", ".4bpp");
const u16 gTilesetAnims_Rustboro_WindyWater_Frame5[] = INCGFX_U16("data/tilesets/secondary/rustboro/anim/windy_water/5.png", ".4bpp");
const u16 gTilesetAnims_Rustboro_WindyWater_Frame6[] = INCGFX_U16("data/tilesets/secondary/rustboro/anim/windy_water/6.png", ".4bpp");
const u16 gTilesetAnims_Rustboro_WindyWater_Frame7[] = INCGFX_U16("data/tilesets/secondary/rustboro/anim/windy_water/7.png", ".4bpp");

u16 *const gTilesetAnims_Rustboro_WindyWater_VDests[] = {
    (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 128)),
    (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 132)),
    (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 136)),
    (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 140)),
    (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 144)),
    (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 148)),
    (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 152)),
    (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 156))
};

const u16 *const gTilesetAnims_Rustboro_WindyWater[] = {
    gTilesetAnims_Rustboro_WindyWater_Frame0,
    gTilesetAnims_Rustboro_WindyWater_Frame1,
    gTilesetAnims_Rustboro_WindyWater_Frame2,
    gTilesetAnims_Rustboro_WindyWater_Frame3,
    gTilesetAnims_Rustboro_WindyWater_Frame4,
    gTilesetAnims_Rustboro_WindyWater_Frame5,
    gTilesetAnims_Rustboro_WindyWater_Frame6,
    gTilesetAnims_Rustboro_WindyWater_Frame7
};

const u16 gTilesetAnims_Rustboro_Fountain_Frame0[] = INCGFX_U16("data/tilesets/secondary/rustboro/anim/fountain/0.png", ".4bpp");
const u16 gTilesetAnims_Rustboro_Fountain_Frame1[] = INCGFX_U16("data/tilesets/secondary/rustboro/anim/fountain/1.png", ".4bpp");
const u16 tileset_anims_space_2[16] = {};

const u16 *const gTilesetAnims_Rustboro_Fountain[] = {
    gTilesetAnims_Rustboro_Fountain_Frame0,
    gTilesetAnims_Rustboro_Fountain_Frame1
};

const u16 gTilesetAnims_Lavaridge_Cave_Lava_Frame0[] = INCGFX_U16("data/tilesets/secondary/cave/anim/lava/0.png", ".4bpp");
const u16 gTilesetAnims_Lavaridge_Cave_Lava_Frame1[] = INCGFX_U16("data/tilesets/secondary/cave/anim/lava/1.png", ".4bpp");
const u16 gTilesetAnims_Lavaridge_Cave_Lava_Frame2[] = INCGFX_U16("data/tilesets/secondary/cave/anim/lava/2.png", ".4bpp");
const u16 gTilesetAnims_Lavaridge_Cave_Lava_Frame3[] = INCGFX_U16("data/tilesets/secondary/cave/anim/lava/3.png", ".4bpp");
const u16 gTilesetAnims_Lavaridge_Cave_Lava_Frame4[] = INCGFX_U16("data/tilesets/secondary/cave/anim/lava/4.png", ".4bpp");
const u16 gTilesetAnims_Lavaridge_Cave_Lava_Frame5[] = INCGFX_U16("data/tilesets/secondary/cave/anim/lava/5.png", ".4bpp");
const u16 gTilesetAnims_Lavaridge_Cave_Lava_Frame6[] = INCGFX_U16("data/tilesets/secondary/cave/anim/lava/6.png", ".4bpp");
const u16 gTilesetAnims_Lavaridge_Cave_Lava_Frame7[] = INCGFX_U16("data/tilesets/secondary/cave/anim/lava/7.png", ".4bpp");
const u16 tileset_anims_space_3[16] = {};

const u16 *const gTilesetAnims_Lavaridge_Cave_Lava[] = {
    gTilesetAnims_Lavaridge_Cave_Lava_Frame0,
    gTilesetAnims_Lavaridge_Cave_Lava_Frame1,
    gTilesetAnims_Lavaridge_Cave_Lava_Frame2,
    gTilesetAnims_Lavaridge_Cave_Lava_Frame3
};

const u16 gTilesetAnims_EverGrande_Flowers_Frame0[] = INCGFX_U16("data/tilesets/secondary/ever_grande/anim/flowers/0.png", ".4bpp");
const u16 gTilesetAnims_EverGrande_Flowers_Frame1[] = INCGFX_U16("data/tilesets/secondary/ever_grande/anim/flowers/1.png", ".4bpp");
const u16 gTilesetAnims_EverGrande_Flowers_Frame2[] = INCGFX_U16("data/tilesets/secondary/ever_grande/anim/flowers/2.png", ".4bpp");
const u16 gTilesetAnims_EverGrande_Flowers_Frame3[] = INCGFX_U16("data/tilesets/secondary/ever_grande/anim/flowers/3.png", ".4bpp");
const u16 gTilesetAnims_EverGrande_Flowers_Frame4[] = INCGFX_U16("data/tilesets/secondary/ever_grande/anim/flowers/4.png", ".4bpp");
const u16 gTilesetAnims_EverGrande_Flowers_Frame5[] = INCGFX_U16("data/tilesets/secondary/ever_grande/anim/flowers/5.png", ".4bpp");
const u16 gTilesetAnims_EverGrande_Flowers_Frame6[] = INCGFX_U16("data/tilesets/secondary/ever_grande/anim/flowers/6.png", ".4bpp");
const u16 gTilesetAnims_EverGrande_Flowers_Frame7[] = INCGFX_U16("data/tilesets/secondary/ever_grande/anim/flowers/7.png", ".4bpp");
const u16 tileset_anims_space_4[16] = {};

u16 *const gTilesetAnims_EverGrande_VDests[] = {
    (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 224)),
    (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 228)),
    (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 232)),
    (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 236)),
    (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 240)),
    (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 244)),
    (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 248)),
    (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 252))
};

const u16 *const gTilesetAnims_EverGrande_Flowers[] = {
    gTilesetAnims_EverGrande_Flowers_Frame0,
    gTilesetAnims_EverGrande_Flowers_Frame1,
    gTilesetAnims_EverGrande_Flowers_Frame2,
    gTilesetAnims_EverGrande_Flowers_Frame3,
    gTilesetAnims_EverGrande_Flowers_Frame4,
    gTilesetAnims_EverGrande_Flowers_Frame5,
    gTilesetAnims_EverGrande_Flowers_Frame6,
    gTilesetAnims_EverGrande_Flowers_Frame7
};

const u16 gTilesetAnims_Dewford_Flag_Frame0[] = INCGFX_U16("data/tilesets/secondary/dewford/anim/flag/0.png", ".4bpp");
const u16 gTilesetAnims_Dewford_Flag_Frame1[] = INCGFX_U16("data/tilesets/secondary/dewford/anim/flag/1.png", ".4bpp");
const u16 gTilesetAnims_Dewford_Flag_Frame2[] = INCGFX_U16("data/tilesets/secondary/dewford/anim/flag/2.png", ".4bpp");
const u16 gTilesetAnims_Dewford_Flag_Frame3[] = INCGFX_U16("data/tilesets/secondary/dewford/anim/flag/3.png", ".4bpp");

const u16 *const gTilesetAnims_Dewford_Flag[] = {
    gTilesetAnims_Dewford_Flag_Frame0,
    gTilesetAnims_Dewford_Flag_Frame1,
    gTilesetAnims_Dewford_Flag_Frame2,
    gTilesetAnims_Dewford_Flag_Frame3
};

const u16 gTilesetAnims_BattleFrontierOutsideWest_Flag_Frame0[] = INCGFX_U16("data/tilesets/secondary/battle_frontier_outside_west/anim/flag/0.png", ".4bpp");
const u16 gTilesetAnims_BattleFrontierOutsideWest_Flag_Frame1[] = INCGFX_U16("data/tilesets/secondary/battle_frontier_outside_west/anim/flag/1.png", ".4bpp");
const u16 gTilesetAnims_BattleFrontierOutsideWest_Flag_Frame2[] = INCGFX_U16("data/tilesets/secondary/battle_frontier_outside_west/anim/flag/2.png", ".4bpp");
const u16 gTilesetAnims_BattleFrontierOutsideWest_Flag_Frame3[] = INCGFX_U16("data/tilesets/secondary/battle_frontier_outside_west/anim/flag/3.png", ".4bpp");

const u16 *const gTilesetAnims_BattleFrontierOutsideWest_Flag[] = {
    gTilesetAnims_BattleFrontierOutsideWest_Flag_Frame0,
    gTilesetAnims_BattleFrontierOutsideWest_Flag_Frame1,
    gTilesetAnims_BattleFrontierOutsideWest_Flag_Frame2,
    gTilesetAnims_BattleFrontierOutsideWest_Flag_Frame3
};

const u16 gTilesetAnims_BattleFrontierOutsideEast_Flag_Frame0[] = INCGFX_U16("data/tilesets/secondary/battle_frontier_outside_east/anim/flag/0.png", ".4bpp");
const u16 gTilesetAnims_BattleFrontierOutsideEast_Flag_Frame1[] = INCGFX_U16("data/tilesets/secondary/battle_frontier_outside_east/anim/flag/1.png", ".4bpp");
const u16 gTilesetAnims_BattleFrontierOutsideEast_Flag_Frame2[] = INCGFX_U16("data/tilesets/secondary/battle_frontier_outside_east/anim/flag/2.png", ".4bpp");
const u16 gTilesetAnims_BattleFrontierOutsideEast_Flag_Frame3[] = INCGFX_U16("data/tilesets/secondary/battle_frontier_outside_east/anim/flag/3.png", ".4bpp");

const u16 *const gTilesetAnims_BattleFrontierOutsideEast_Flag[] = {
    gTilesetAnims_BattleFrontierOutsideEast_Flag_Frame0,
    gTilesetAnims_BattleFrontierOutsideEast_Flag_Frame1,
    gTilesetAnims_BattleFrontierOutsideEast_Flag_Frame2,
    gTilesetAnims_BattleFrontierOutsideEast_Flag_Frame3
};

const u16 gTilesetAnims_Slateport_Balloons_Frame0[] = INCGFX_U16("data/tilesets/secondary/slateport/anim/balloons/0.png", ".4bpp");
const u16 gTilesetAnims_Slateport_Balloons_Frame1[] = INCGFX_U16("data/tilesets/secondary/slateport/anim/balloons/1.png", ".4bpp");
const u16 gTilesetAnims_Slateport_Balloons_Frame2[] = INCGFX_U16("data/tilesets/secondary/slateport/anim/balloons/2.png", ".4bpp");
const u16 gTilesetAnims_Slateport_Balloons_Frame3[] = INCGFX_U16("data/tilesets/secondary/slateport/anim/balloons/3.png", ".4bpp");

const u16 *const gTilesetAnims_Slateport_Balloons[] = {
    gTilesetAnims_Slateport_Balloons_Frame0,
    gTilesetAnims_Slateport_Balloons_Frame1,
    gTilesetAnims_Slateport_Balloons_Frame2,
    gTilesetAnims_Slateport_Balloons_Frame3
};

const u16 gTilesetAnims_Building_TvTurnedOn_Frame0[] = INCGFX_U16("data/tilesets/primary/building/anim/tv_turned_on/0.png", ".4bpp");
const u16 gTilesetAnims_Building_TvTurnedOn_Frame1[] = INCGFX_U16("data/tilesets/primary/building/anim/tv_turned_on/1.png", ".4bpp");

const u16 *const gTilesetAnims_Building_TvTurnedOn[] = {
    gTilesetAnims_Building_TvTurnedOn_Frame0,
    gTilesetAnims_Building_TvTurnedOn_Frame1
};

const u16 gTilesetAnims_SootopolisGym_SideWaterfall_Frame0[] = INCGFX_U16("data/tilesets/secondary/sootopolis_gym/anim/side_waterfall/0.png", ".4bpp");
const u16 gTilesetAnims_SootopolisGym_SideWaterfall_Frame1[] = INCGFX_U16("data/tilesets/secondary/sootopolis_gym/anim/side_waterfall/1.png", ".4bpp");
const u16 gTilesetAnims_SootopolisGym_SideWaterfall_Frame2[] = INCGFX_U16("data/tilesets/secondary/sootopolis_gym/anim/side_waterfall/2.png", ".4bpp");
const u16 gTilesetAnims_SootopolisGym_FrontWaterfall_Frame0[] = INCGFX_U16("data/tilesets/secondary/sootopolis_gym/anim/front_waterfall/0.png", ".4bpp");
const u16 gTilesetAnims_SootopolisGym_FrontWaterfall_Frame1[] = INCGFX_U16("data/tilesets/secondary/sootopolis_gym/anim/front_waterfall/1.png", ".4bpp");
const u16 gTilesetAnims_SootopolisGym_FrontWaterfall_Frame2[] = INCGFX_U16("data/tilesets/secondary/sootopolis_gym/anim/front_waterfall/2.png", ".4bpp");

const u16 *const gTilesetAnims_SootopolisGym_SideWaterfall[] = {
    gTilesetAnims_SootopolisGym_SideWaterfall_Frame0,
    gTilesetAnims_SootopolisGym_SideWaterfall_Frame1,
    gTilesetAnims_SootopolisGym_SideWaterfall_Frame2
};

const u16 *const gTilesetAnims_SootopolisGym_FrontWaterfall[] = {
    gTilesetAnims_SootopolisGym_FrontWaterfall_Frame0,
    gTilesetAnims_SootopolisGym_FrontWaterfall_Frame1,
    gTilesetAnims_SootopolisGym_FrontWaterfall_Frame2
};

const u16 gTilesetAnims_EliteFour_FloorLight_Frame0[] = INCGFX_U16("data/tilesets/secondary/elite_four/anim/floor_light/0.png", ".4bpp");
const u16 gTilesetAnims_EliteFour_FloorLight_Frame1[] = INCGFX_U16("data/tilesets/secondary/elite_four/anim/floor_light/1.png", ".4bpp");
const u16 gTilesetAnims_EliteFour_WallLights_Frame0[] = INCGFX_U16("data/tilesets/secondary/elite_four/anim/wall_lights/0.png", ".4bpp");
const u16 gTilesetAnims_EliteFour_WallLights_Frame1[] = INCGFX_U16("data/tilesets/secondary/elite_four/anim/wall_lights/1.png", ".4bpp");
const u16 gTilesetAnims_EliteFour_WallLights_Frame2[] = INCGFX_U16("data/tilesets/secondary/elite_four/anim/wall_lights/2.png", ".4bpp");
const u16 gTilesetAnims_EliteFour_WallLights_Frame3[] = INCGFX_U16("data/tilesets/secondary/elite_four/anim/wall_lights/3.png", ".4bpp");
const u16 tileset_anims_space_5[16] = {};

const u16 *const gTilesetAnims_EliteFour_WallLights[] = {
    gTilesetAnims_EliteFour_WallLights_Frame0,
    gTilesetAnims_EliteFour_WallLights_Frame1,
    gTilesetAnims_EliteFour_WallLights_Frame2,
    gTilesetAnims_EliteFour_WallLights_Frame3
};

const u16 *const gTilesetAnims_EliteFour_FloorLight[] = {
    gTilesetAnims_EliteFour_FloorLight_Frame0,
    gTilesetAnims_EliteFour_FloorLight_Frame1
};

const u16 gTilesetAnims_MauvilleGym_ElectricGates_Frame0[] = INCGFX_U16("data/tilesets/secondary/mauville_gym/anim/electric_gates/0.png", ".4bpp");
const u16 gTilesetAnims_MauvilleGym_ElectricGates_Frame1[] = INCGFX_U16("data/tilesets/secondary/mauville_gym/anim/electric_gates/1.png", ".4bpp");
const u16 tileset_anims_space_6[16] = {};

const u16 *const gTilesetAnims_MauvilleGym_ElectricGates[] = {
    gTilesetAnims_MauvilleGym_ElectricGates_Frame0,
    gTilesetAnims_MauvilleGym_ElectricGates_Frame1
};

const u16 gTilesetAnims_BikeShop_BlinkingLights_Frame0[] = INCGFX_U16("data/tilesets/secondary/bike_shop/anim/blinking_lights/0.png", ".4bpp");
const u16 gTilesetAnims_BikeShop_BlinkingLights_Frame1[] = INCGFX_U16("data/tilesets/secondary/bike_shop/anim/blinking_lights/1.png", ".4bpp");
const u16 tileset_anims_space_7[16] = {};

const u16 *const gTilesetAnims_BikeShop_BlinkingLights[] = {
    gTilesetAnims_BikeShop_BlinkingLights_Frame0,
    gTilesetAnims_BikeShop_BlinkingLights_Frame1
};

const u16 gTilesetAnims_Sootopolis_StormyWater_Frame0[] = INCBIN_U16("data/tilesets/secondary/sootopolis/anim/stormy_water/0_kyogre.4bpp", "data/tilesets/secondary/sootopolis/anim/stormy_water/0_groudon.4bpp");
const u16 gTilesetAnims_Sootopolis_StormyWater_Frame1[] = INCBIN_U16("data/tilesets/secondary/sootopolis/anim/stormy_water/1_kyogre.4bpp", "data/tilesets/secondary/sootopolis/anim/stormy_water/1_groudon.4bpp");
const u16 gTilesetAnims_Sootopolis_StormyWater_Frame2[] = INCBIN_U16("data/tilesets/secondary/sootopolis/anim/stormy_water/2_kyogre.4bpp", "data/tilesets/secondary/sootopolis/anim/stormy_water/2_groudon.4bpp");
const u16 gTilesetAnims_Sootopolis_StormyWater_Frame3[] = INCBIN_U16("data/tilesets/secondary/sootopolis/anim/stormy_water/3_kyogre.4bpp", "data/tilesets/secondary/sootopolis/anim/stormy_water/3_groudon.4bpp");
const u16 gTilesetAnims_Sootopolis_StormyWater_Frame4[] = INCBIN_U16("data/tilesets/secondary/sootopolis/anim/stormy_water/4_kyogre.4bpp", "data/tilesets/secondary/sootopolis/anim/stormy_water/4_groudon.4bpp");
const u16 gTilesetAnims_Sootopolis_StormyWater_Frame5[] = INCBIN_U16("data/tilesets/secondary/sootopolis/anim/stormy_water/5_kyogre.4bpp", "data/tilesets/secondary/sootopolis/anim/stormy_water/5_groudon.4bpp");
const u16 gTilesetAnims_Sootopolis_StormyWater_Frame6[] = INCBIN_U16("data/tilesets/secondary/sootopolis/anim/stormy_water/6_kyogre.4bpp", "data/tilesets/secondary/sootopolis/anim/stormy_water/6_groudon.4bpp");
const u16 gTilesetAnims_Sootopolis_StormyWater_Frame7[] = INCBIN_U16("data/tilesets/secondary/sootopolis/anim/stormy_water/7_kyogre.4bpp", "data/tilesets/secondary/sootopolis/anim/stormy_water/7_groudon.4bpp");
const u16 tileset_anims_space_8[16] = {};

const u16 gTilesetAnims_Unused1_Frame0[] = INCGFX_U16("data/tilesets/secondary/unused_1/0.png", ".4bpp");
const u16 gTilesetAnims_Unused1_Frame1[] = INCGFX_U16("data/tilesets/secondary/unused_1/1.png", ".4bpp");
const u16 gTilesetAnims_Unused1_Frame2[] = INCGFX_U16("data/tilesets/secondary/unused_1/2.png", ".4bpp");
const u16 gTilesetAnims_Unused1_Frame3[] = INCGFX_U16("data/tilesets/secondary/unused_1/3.png", ".4bpp");

const u16 *const gTilesetAnims_Sootopolis_StormyWater[] = {
    gTilesetAnims_Sootopolis_StormyWater_Frame0,
    gTilesetAnims_Sootopolis_StormyWater_Frame1,
    gTilesetAnims_Sootopolis_StormyWater_Frame2,
    gTilesetAnims_Sootopolis_StormyWater_Frame3,
    gTilesetAnims_Sootopolis_StormyWater_Frame4,
    gTilesetAnims_Sootopolis_StormyWater_Frame5,
    gTilesetAnims_Sootopolis_StormyWater_Frame6,
    gTilesetAnims_Sootopolis_StormyWater_Frame7
};

const u16 gTilesetAnims_BattlePyramid_Torch_Frame0[] = INCGFX_U16("data/tilesets/secondary/battle_pyramid/anim/torch/0.png", ".4bpp");
const u16 gTilesetAnims_BattlePyramid_Torch_Frame1[] = INCGFX_U16("data/tilesets/secondary/battle_pyramid/anim/torch/1.png", ".4bpp");
const u16 gTilesetAnims_BattlePyramid_Torch_Frame2[] = INCGFX_U16("data/tilesets/secondary/battle_pyramid/anim/torch/2.png", ".4bpp");
const u16 tileset_anims_space_9[16] = {};

const u16 gTilesetAnims_BattlePyramid_StatueShadow_Frame0[] = INCGFX_U16("data/tilesets/secondary/battle_pyramid/anim/statue_shadow/0.png", ".4bpp");
const u16 gTilesetAnims_BattlePyramid_StatueShadow_Frame1[] = INCGFX_U16("data/tilesets/secondary/battle_pyramid/anim/statue_shadow/1.png", ".4bpp");
const u16 gTilesetAnims_BattlePyramid_StatueShadow_Frame2[] = INCGFX_U16("data/tilesets/secondary/battle_pyramid/anim/statue_shadow/2.png", ".4bpp");
const u16 tileset_anims_space_10[7808] = {};

const u16 gTilesetAnims_Unused2_Frame0[] = INCGFX_U16("data/tilesets/secondary/unused_2/0.png", ".4bpp");
const u16 tileset_anims_space_11[224] = {};

const u16 gTilesetAnims_Unused2_Frame1[] = INCGFX_U16("data/tilesets/secondary/unused_2/1.png", ".4bpp");

const u16 *const gTilesetAnims_BattlePyramid_Torch[] = {
    gTilesetAnims_BattlePyramid_Torch_Frame0,
    gTilesetAnims_BattlePyramid_Torch_Frame1,
    gTilesetAnims_BattlePyramid_Torch_Frame2
};

const u16 *const gTilesetAnims_BattlePyramid_StatueShadow[] = {
    gTilesetAnims_BattlePyramid_StatueShadow_Frame0,
    gTilesetAnims_BattlePyramid_StatueShadow_Frame1,
    gTilesetAnims_BattlePyramid_StatueShadow_Frame2
};

static const u16 *const sTilesetAnims_BattleDomeFloorLightPals[] = {
    gTilesetAnims_BattleDomePals0_0,
    gTilesetAnims_BattleDomePals0_1,
    gTilesetAnims_BattleDomePals0_2,
    gTilesetAnims_BattleDomePals0_3,
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

void InitTilesetAnim_EverGrande(void)
{
    sSecondaryTilesetAnimCounter = 0;
    sSecondaryTilesetAnimCounterMax = sPrimaryTilesetAnimCounterMax;
    sSecondaryTilesetAnimCallback = TilesetAnim_EverGrande;
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

void InitTilesetAnim_BattleFrontierOutsideWest(void)
{
    sSecondaryTilesetAnimCounter = 0;
    sSecondaryTilesetAnimCounterMax = sPrimaryTilesetAnimCounterMax;
    sSecondaryTilesetAnimCallback = TilesetAnim_BattleFrontierOutsideWest;
}

void InitTilesetAnim_BattleFrontierOutsideEast(void)
{
    sSecondaryTilesetAnimCounter = 0;
    sSecondaryTilesetAnimCounterMax = sPrimaryTilesetAnimCounterMax;
    sSecondaryTilesetAnimCallback = TilesetAnim_BattleFrontierOutsideEast;
}

void InitTilesetAnim_Underwater(void)
{
    sSecondaryTilesetAnimCounter = 0;
    sSecondaryTilesetAnimCounterMax = 128;
    sSecondaryTilesetAnimCallback = TilesetAnim_Underwater;
}

void InitTilesetAnim_SootopolisGym(void)
{
    sSecondaryTilesetAnimCounter = 0;
    sSecondaryTilesetAnimCounterMax = 240;
    sSecondaryTilesetAnimCallback = TilesetAnim_SootopolisGym;
}

void InitTilesetAnim_Cave(void)
{
    sSecondaryTilesetAnimCounter = 0;
    sSecondaryTilesetAnimCounterMax = sPrimaryTilesetAnimCounterMax;
    sSecondaryTilesetAnimCallback = TilesetAnim_Cave;
}

void InitTilesetAnim_EliteFour(void)
{
    sSecondaryTilesetAnimCounter = 0;
    sSecondaryTilesetAnimCounterMax = 128;
    sSecondaryTilesetAnimCallback = TilesetAnim_EliteFour;
}

void InitTilesetAnim_MauvilleGym(void)
{
    sSecondaryTilesetAnimCounter = 0;
    sSecondaryTilesetAnimCounterMax = sPrimaryTilesetAnimCounterMax;
    sSecondaryTilesetAnimCallback = TilesetAnim_MauvilleGym;
}

void InitTilesetAnim_BikeShop(void)
{
    sSecondaryTilesetAnimCounter = 0;
    sSecondaryTilesetAnimCounterMax = sPrimaryTilesetAnimCounterMax;
    sSecondaryTilesetAnimCallback = TilesetAnim_BikeShop;
}

void InitTilesetAnim_BattlePyramid(void)
{
    sSecondaryTilesetAnimCounter = 0;
    sSecondaryTilesetAnimCounterMax = sPrimaryTilesetAnimCounterMax;
    sSecondaryTilesetAnimCallback = TilesetAnim_BattlePyramid;
}

void InitTilesetAnim_BattleDome(void)
{
    sSecondaryTilesetAnimCounter = 0;
    sSecondaryTilesetAnimCounterMax = sPrimaryTilesetAnimCounterMax;
    sSecondaryTilesetAnimCallback = TilesetAnim_BattleDome;
}

static void TilesetAnim_Rustboro(u16 timer)
{
    if (timer % 8 == 0)
    {
        QueueAnimTiles_Rustboro_WindyWater(timer / 8, 0);
        QueueAnimTiles_Rustboro_Fountain(timer / 8);
    }
    if (timer % 8 == 1)
        QueueAnimTiles_Rustboro_WindyWater(timer / 8, 1);
    if (timer % 8 == 2)
        QueueAnimTiles_Rustboro_WindyWater(timer / 8, 2);
    if (timer % 8 == 3)
        QueueAnimTiles_Rustboro_WindyWater(timer / 8, 3);
    if (timer % 8 == 4)
        QueueAnimTiles_Rustboro_WindyWater(timer / 8, 4);
    if (timer % 8 == 5)
        QueueAnimTiles_Rustboro_WindyWater(timer / 8, 5);
    if (timer % 8 == 6)
        QueueAnimTiles_Rustboro_WindyWater(timer / 8, 6);
    if (timer % 8 == 7)
        QueueAnimTiles_Rustboro_WindyWater(timer / 8, 7);
}

static void TilesetAnim_Dewford(u16 timer)
{
    if (timer % 8 == 0)
        QueueAnimTiles_Dewford_Flag(timer / 8);
}

static void TilesetAnim_Slateport(u16 timer)
{
    if (timer % 16 == 0)
        QueueAnimTiles_Slateport_Balloons(timer / 16);
}

static void TilesetAnim_Mauville(u16 timer)
{
    if (timer % 8 == 0)
        QueueAnimTiles_Mauville_Flowers(timer / 8, 0);
    if (timer % 8 == 1)
        QueueAnimTiles_Mauville_Flowers(timer / 8, 1);
    if (timer % 8 == 2)
        QueueAnimTiles_Mauville_Flowers(timer / 8, 2);
    if (timer % 8 == 3)
        QueueAnimTiles_Mauville_Flowers(timer / 8, 3);
    if (timer % 8 == 4)
        QueueAnimTiles_Mauville_Flowers(timer / 8, 4);
    if (timer % 8 == 5)
        QueueAnimTiles_Mauville_Flowers(timer / 8, 5);
    if (timer % 8 == 6)
        QueueAnimTiles_Mauville_Flowers(timer / 8, 6);
    if (timer % 8 == 7)
        QueueAnimTiles_Mauville_Flowers(timer / 8, 7);
}

static void TilesetAnim_Lavaridge(u16 timer)
{
    if (timer % 16 == 0)
        QueueAnimTiles_Lavaridge_Steam(timer / 16);
    if (timer % 16 == 1)
        QueueAnimTiles_Lavaridge_Lava(timer / 16);
}

static void TilesetAnim_EverGrande(u16 timer)
{
    if (timer % 8 == 0)
        QueueAnimTiles_EverGrande_Flowers(timer / 8, 0);
    if (timer % 8 == 1)
        QueueAnimTiles_EverGrande_Flowers(timer / 8, 1);
    if (timer % 8 == 2)
        QueueAnimTiles_EverGrande_Flowers(timer / 8, 2);
    if (timer % 8 == 3)
        QueueAnimTiles_EverGrande_Flowers(timer / 8, 3);
    if (timer % 8 == 4)
        QueueAnimTiles_EverGrande_Flowers(timer / 8, 4);
    if (timer % 8 == 5)
        QueueAnimTiles_EverGrande_Flowers(timer / 8, 5);
    if (timer % 8 == 6)
        QueueAnimTiles_EverGrande_Flowers(timer / 8, 6);
    if (timer % 8 == 7)
        QueueAnimTiles_EverGrande_Flowers(timer / 8, 7);
}

static void TilesetAnim_Pacifidlog(u16 timer)
{
    if (timer % 16 == 0)
        QueueAnimTiles_Pacifidlog_LogBridges(timer / 16);
    if (timer % 16 == 1)
        QueueAnimTiles_Pacifidlog_WaterCurrents(timer / 16);
}

static void TilesetAnim_Sootopolis(u16 timer)
{
    if (timer % 16 == 0)
        QueueAnimTiles_Sootopolis_StormyWater(timer / 16);
}

static void TilesetAnim_Underwater(u16 timer)
{
    if (timer % 16 == 0)
        QueueAnimTiles_Underwater_Seaweed(timer / 16);
}

static void TilesetAnim_Cave(u16 timer)
{
    if (timer % 16 == 1)
        QueueAnimTiles_Cave_Lava(timer / 16);
}

static void TilesetAnim_BattleFrontierOutsideWest(u16 timer)
{
    if (timer % 8 == 0)
        QueueAnimTiles_BattleFrontierOutsideWest_Flag(timer / 8);
}

static void TilesetAnim_BattleFrontierOutsideEast(u16 timer)
{
    if (timer % 8 == 0)
        QueueAnimTiles_BattleFrontierOutsideEast_Flag(timer / 8);
}

static void QueueAnimTiles_General_LandWaterEdge(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_General_LandWaterEdge);
    AppendTilesetAnimToBuffer(gTilesetAnims_General_LandWaterEdge[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(480)), 10 * TILE_SIZE_4BPP);
}

static void QueueAnimTiles_Lavaridge_Steam(u8 timer)
{
    u8 i = timer % ARRAY_COUNT(gTilesetAnims_Lavaridge_Steam);
    AppendTilesetAnimToBuffer(gTilesetAnims_Lavaridge_Steam[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 288)), 4 * TILE_SIZE_4BPP);

    i = (timer + 2) % (int)ARRAY_COUNT(gTilesetAnims_Lavaridge_Steam);
    AppendTilesetAnimToBuffer(gTilesetAnims_Lavaridge_Steam[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 292)), 4 * TILE_SIZE_4BPP);
}

static void QueueAnimTiles_Pacifidlog_LogBridges(u8 timer)
{
    u8 i = timer % ARRAY_COUNT(gTilesetAnims_Pacifidlog_LogBridges);
    AppendTilesetAnimToBuffer(gTilesetAnims_Pacifidlog_LogBridges[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 464)), 30 * TILE_SIZE_4BPP);
}

static void QueueAnimTiles_Underwater_Seaweed(u8 timer)
{
    u8 i = timer % ARRAY_COUNT(gTilesetAnims_Underwater_Seaweed);
    AppendTilesetAnimToBuffer(gTilesetAnims_Underwater_Seaweed[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 496)), 4 * TILE_SIZE_4BPP);
}

static void QueueAnimTiles_Pacifidlog_WaterCurrents(u8 timer)
{
    u8 i = timer % ARRAY_COUNT(gTilesetAnims_Pacifidlog_WaterCurrents);
    AppendTilesetAnimToBuffer(gTilesetAnims_Pacifidlog_WaterCurrents[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 496)), 8 * TILE_SIZE_4BPP);
}

static void QueueAnimTiles_Mauville_Flowers(u16 timer_div, u8 timer_mod)
{
    timer_div -= timer_mod;
    if (timer_div < min(ARRAY_COUNT(gTilesetAnims_Mauville_Flower1), ARRAY_COUNT(gTilesetAnims_Mauville_Flower2)))
    {
        timer_div %= min(ARRAY_COUNT(gTilesetAnims_Mauville_Flower1), ARRAY_COUNT(gTilesetAnims_Mauville_Flower2));
        AppendTilesetAnimToBuffer(gTilesetAnims_Mauville_Flower1[timer_div], gTilesetAnims_Mauville_Flower1_VDests[timer_mod], 4 * TILE_SIZE_4BPP);
        AppendTilesetAnimToBuffer(gTilesetAnims_Mauville_Flower2[timer_div], gTilesetAnims_Mauville_Flower2_VDests[timer_mod], 4 * TILE_SIZE_4BPP);
    }
    else
    {
        timer_div %= min(ARRAY_COUNT(gTilesetAnims_Mauville_Flower1_B), ARRAY_COUNT(gTilesetAnims_Mauville_Flower2_B));
        AppendTilesetAnimToBuffer(gTilesetAnims_Mauville_Flower1_B[timer_div], gTilesetAnims_Mauville_Flower1_VDests[timer_mod], 4 * TILE_SIZE_4BPP);
        AppendTilesetAnimToBuffer(gTilesetAnims_Mauville_Flower2_B[timer_div], gTilesetAnims_Mauville_Flower2_VDests[timer_mod], 4 * TILE_SIZE_4BPP);
    }
}

static void QueueAnimTiles_Rustboro_WindyWater(u16 timer_div, u8 timer_mod)
{
    timer_div -= timer_mod;
    timer_div %= ARRAY_COUNT(gTilesetAnims_Rustboro_WindyWater);
    if (gTilesetAnims_Rustboro_WindyWater[timer_div])
        AppendTilesetAnimToBuffer(gTilesetAnims_Rustboro_WindyWater[timer_div], gTilesetAnims_Rustboro_WindyWater_VDests[timer_mod], 4 * TILE_SIZE_4BPP);
}

static void QueueAnimTiles_Rustboro_Fountain(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_Rustboro_Fountain);
    AppendTilesetAnimToBuffer(gTilesetAnims_Rustboro_Fountain[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 448)), 4 * TILE_SIZE_4BPP);
}

static void QueueAnimTiles_Lavaridge_Lava(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_Lavaridge_Cave_Lava);
    AppendTilesetAnimToBuffer(gTilesetAnims_Lavaridge_Cave_Lava[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 160)), 4 * TILE_SIZE_4BPP);
}

static void QueueAnimTiles_EverGrande_Flowers(u16 timer_div, u8 timer_mod)
{
    timer_div -= timer_mod;
    timer_div %= ARRAY_COUNT(gTilesetAnims_EverGrande_Flowers);

    AppendTilesetAnimToBuffer(gTilesetAnims_EverGrande_Flowers[timer_div], gTilesetAnims_EverGrande_VDests[timer_mod], 4 * TILE_SIZE_4BPP);
}

static void QueueAnimTiles_Cave_Lava(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_Lavaridge_Cave_Lava);
    AppendTilesetAnimToBuffer(gTilesetAnims_Lavaridge_Cave_Lava[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 416)), 4 * TILE_SIZE_4BPP);
}

static void QueueAnimTiles_Dewford_Flag(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_Dewford_Flag);
    AppendTilesetAnimToBuffer(gTilesetAnims_Dewford_Flag[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 170)), 6 * TILE_SIZE_4BPP);
}

static void QueueAnimTiles_BattleFrontierOutsideWest_Flag(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_BattleFrontierOutsideWest_Flag);
    AppendTilesetAnimToBuffer(gTilesetAnims_BattleFrontierOutsideWest_Flag[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 218)), 6 * TILE_SIZE_4BPP);
}

static void QueueAnimTiles_BattleFrontierOutsideEast_Flag(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_BattleFrontierOutsideEast_Flag);
    AppendTilesetAnimToBuffer(gTilesetAnims_BattleFrontierOutsideEast_Flag[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 218)), 6 * TILE_SIZE_4BPP);
}

static void QueueAnimTiles_Slateport_Balloons(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_Slateport_Balloons);
    AppendTilesetAnimToBuffer(gTilesetAnims_Slateport_Balloons[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 224)), 4 * TILE_SIZE_4BPP);
}

static void TilesetAnim_MauvilleGym(u16 timer)
{
    if (timer % 2 == 0)
        QueueAnimTiles_MauvilleGym_ElectricGates(timer / 2);
}

static void TilesetAnim_SootopolisGym(u16 timer)
{
    if (timer % 8 == 0)
        QueueAnimTiles_SootopolisGym_Waterfalls(timer / 8);
}

static void TilesetAnim_EliteFour(u16 timer)
{
    if (timer % 64 == 1)
        QueueAnimTiles_EliteFour_GroundLights(timer / 64);
    if (timer % 8 == 1)
        QueueAnimTiles_EliteFour_WallLights(timer / 8);
}

static void TilesetAnim_BikeShop(u16 timer)
{
    if (timer % 4 == 0)
        QueueAnimTiles_BikeShop_BlinkingLights(timer / 4);
}

static void TilesetAnim_BattlePyramid(u16 timer)
{
    if (timer % 8 == 0)
    {
        QueueAnimTiles_BattlePyramid_Torch(timer / 8);
        QueueAnimTiles_BattlePyramid_StatueShadow(timer / 8);
    }
}

static void TilesetAnim_BattleDome(u16 timer)
{
    if (timer % 4 == 0)
        BlendAnimPalette_BattleDome_FloorLights(timer / 4);
}

static void TilesetAnim_BattleDome2(u16 timer)
{
    if (timer % 4 == 0)
        BlendAnimPalette_BattleDome_FloorLightsNoBlend(timer / 4);
}

static void QueueAnimTiles_Building_TVTurnedOn(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_Building_TvTurnedOn);
    AppendTilesetAnimToBuffer(gTilesetAnims_Building_TvTurnedOn[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(496)), 4 * TILE_SIZE_4BPP);
}

static void QueueAnimTiles_SootopolisGym_Waterfalls(u16 timer)
{
    u16 i = timer % min(ARRAY_COUNT(gTilesetAnims_SootopolisGym_SideWaterfall), ARRAY_COUNT(gTilesetAnims_SootopolisGym_FrontWaterfall));
    AppendTilesetAnimToBuffer(gTilesetAnims_SootopolisGym_SideWaterfall[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 496)), 12 * TILE_SIZE_4BPP);
    AppendTilesetAnimToBuffer(gTilesetAnims_SootopolisGym_FrontWaterfall[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 464)), 20 * TILE_SIZE_4BPP);
}

static void QueueAnimTiles_EliteFour_WallLights(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_EliteFour_WallLights);
    AppendTilesetAnimToBuffer(gTilesetAnims_EliteFour_WallLights[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 504)), 1 * TILE_SIZE_4BPP);
}

static void QueueAnimTiles_EliteFour_GroundLights(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_EliteFour_FloorLight);
    AppendTilesetAnimToBuffer(gTilesetAnims_EliteFour_FloorLight[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 480)), 4 * TILE_SIZE_4BPP);
}

static void QueueAnimTiles_MauvilleGym_ElectricGates(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_MauvilleGym_ElectricGates);
    AppendTilesetAnimToBuffer(gTilesetAnims_MauvilleGym_ElectricGates[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 144)), 16 * TILE_SIZE_4BPP);
}

static void QueueAnimTiles_BikeShop_BlinkingLights(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_BikeShop_BlinkingLights);
    AppendTilesetAnimToBuffer(gTilesetAnims_BikeShop_BlinkingLights[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 496)), 9 * TILE_SIZE_4BPP);
}

static void QueueAnimTiles_Sootopolis_StormyWater(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_Sootopolis_StormyWater);
    AppendTilesetAnimToBuffer(gTilesetAnims_Sootopolis_StormyWater[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 240)), 96 * TILE_SIZE_4BPP);
}

static void QueueAnimTiles_BattlePyramid_Torch(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_BattlePyramid_Torch);
    AppendTilesetAnimToBuffer(gTilesetAnims_BattlePyramid_Torch[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 151)), 8 * TILE_SIZE_4BPP);
}

static void QueueAnimTiles_BattlePyramid_StatueShadow(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_BattlePyramid_StatueShadow);
    AppendTilesetAnimToBuffer(gTilesetAnims_BattlePyramid_StatueShadow[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 135)), 8 * TILE_SIZE_4BPP);
}

static void BlendAnimPalette_BattleDome_FloorLights(u16 timer)
{
    CpuCopy16(sTilesetAnims_BattleDomeFloorLightPals[timer % ARRAY_COUNT(sTilesetAnims_BattleDomeFloorLightPals)], &gPlttBufferUnfaded[BG_PLTT_ID(8)], PLTT_SIZE_4BPP);
    BlendPalette(BG_PLTT_ID(8), 16, gPaletteFade.y, gPaletteFade.blendColor & 0x7FFF);
    if ((u8)FindTaskIdByFunc(Task_BattleTransition_Intro) != TASK_NONE)
    {
        sSecondaryTilesetAnimCallback = TilesetAnim_BattleDome2;
        sSecondaryTilesetAnimCounterMax = 32;
    }
}

static void BlendAnimPalette_BattleDome_FloorLightsNoBlend(u16 timer)
{
    CpuCopy16(sTilesetAnims_BattleDomeFloorLightPals[timer % ARRAY_COUNT(sTilesetAnims_BattleDomeFloorLightPals)], &gPlttBufferUnfaded[BG_PLTT_ID(8)], PLTT_SIZE_4BPP);
    if ((u8)FindTaskIdByFunc(Task_BattleTransition_Intro) == TASK_NONE)
    {
        BlendPalette(BG_PLTT_ID(8), 16, gPaletteFade.y, gPaletteFade.blendColor & 0x7FFF);
        if (!--sSecondaryTilesetAnimCounterMax)
            sSecondaryTilesetAnimCallback = NULL;
    }
}

// BEGIN AUTO-GENERATED NARANJA TILESETS: animations
// Auto-generated by tools/import_naranja_rom.py from NaranjaB2.gba.

static const u16 sNaranjaAnimGeneralFlowerFrame0[] = INCBIN_U16("data/tilesets/primary/naranja_00/anim/flower/0.4bpp");
static const u16 sNaranjaAnimGeneralFlowerFrame1[] = INCBIN_U16("data/tilesets/primary/naranja_00/anim/flower/1.4bpp");
static const u16 sNaranjaAnimGeneralFlowerFrame2[] = INCBIN_U16("data/tilesets/primary/naranja_00/anim/flower/2.4bpp");
static const u16 *const sNaranjaAnimGeneralFlower[] =
{
    sNaranjaAnimGeneralFlowerFrame0,
    sNaranjaAnimGeneralFlowerFrame1,
    sNaranjaAnimGeneralFlowerFrame0,
    sNaranjaAnimGeneralFlowerFrame2,
};

static const u16 sNaranjaAnimGeneralWaterFrame0[] = INCBIN_U16("data/tilesets/primary/naranja_00/anim/water/0.4bpp");
static const u16 sNaranjaAnimGeneralWaterFrame1[] = INCBIN_U16("data/tilesets/primary/naranja_00/anim/water/1.4bpp");
static const u16 sNaranjaAnimGeneralWaterFrame2[] = INCBIN_U16("data/tilesets/primary/naranja_00/anim/water/2.4bpp");
static const u16 sNaranjaAnimGeneralWaterFrame3[] = INCBIN_U16("data/tilesets/primary/naranja_00/anim/water/3.4bpp");
static const u16 sNaranjaAnimGeneralWaterFrame4[] = INCBIN_U16("data/tilesets/primary/naranja_00/anim/water/4.4bpp");
static const u16 sNaranjaAnimGeneralWaterFrame5[] = INCBIN_U16("data/tilesets/primary/naranja_00/anim/water/5.4bpp");
static const u16 sNaranjaAnimGeneralWaterFrame6[] = INCBIN_U16("data/tilesets/primary/naranja_00/anim/water/6.4bpp");
static const u16 sNaranjaAnimGeneralWaterFrame7[] = INCBIN_U16("data/tilesets/primary/naranja_00/anim/water/7.4bpp");
static const u16 *const sNaranjaAnimGeneralWater[] =
{
    sNaranjaAnimGeneralWaterFrame0,
    sNaranjaAnimGeneralWaterFrame1,
    sNaranjaAnimGeneralWaterFrame2,
    sNaranjaAnimGeneralWaterFrame3,
    sNaranjaAnimGeneralWaterFrame4,
    sNaranjaAnimGeneralWaterFrame5,
    sNaranjaAnimGeneralWaterFrame6,
    sNaranjaAnimGeneralWaterFrame7,
};

static const u16 sNaranjaAnimGeneralSandWaterEdgeFrame0[] = INCBIN_U16("data/tilesets/primary/naranja_00/anim/sand_water_edge/0.4bpp");
static const u16 sNaranjaAnimGeneralSandWaterEdgeFrame1[] = INCBIN_U16("data/tilesets/primary/naranja_00/anim/sand_water_edge/1.4bpp");
static const u16 sNaranjaAnimGeneralSandWaterEdgeFrame2[] = INCBIN_U16("data/tilesets/primary/naranja_00/anim/sand_water_edge/2.4bpp");
static const u16 sNaranjaAnimGeneralSandWaterEdgeFrame3[] = INCBIN_U16("data/tilesets/primary/naranja_00/anim/sand_water_edge/3.4bpp");
static const u16 sNaranjaAnimGeneralSandWaterEdgeFrame4[] = INCBIN_U16("data/tilesets/primary/naranja_00/anim/sand_water_edge/4.4bpp");
static const u16 sNaranjaAnimGeneralSandWaterEdgeFrame5[] = INCBIN_U16("data/tilesets/primary/naranja_00/anim/sand_water_edge/5.4bpp");
static const u16 sNaranjaAnimGeneralSandWaterEdgeFrame6[] = INCBIN_U16("data/tilesets/primary/naranja_00/anim/sand_water_edge/6.4bpp");
static const u16 *const sNaranjaAnimGeneralSandWaterEdge[] =
{
    sNaranjaAnimGeneralSandWaterEdgeFrame0,
    sNaranjaAnimGeneralSandWaterEdgeFrame1,
    sNaranjaAnimGeneralSandWaterEdgeFrame2,
    sNaranjaAnimGeneralSandWaterEdgeFrame3,
    sNaranjaAnimGeneralSandWaterEdgeFrame4,
    sNaranjaAnimGeneralSandWaterEdgeFrame5,
    sNaranjaAnimGeneralSandWaterEdgeFrame6,
    sNaranjaAnimGeneralSandWaterEdgeFrame0,
};

static const u16 sNaranjaAnimGeneralWaterfallFrame0[] = INCBIN_U16("data/tilesets/primary/naranja_00/anim/waterfall/0.4bpp");
static const u16 sNaranjaAnimGeneralWaterfallFrame1[] = INCBIN_U16("data/tilesets/primary/naranja_00/anim/waterfall/1.4bpp");
static const u16 sNaranjaAnimGeneralWaterfallFrame2[] = INCBIN_U16("data/tilesets/primary/naranja_00/anim/waterfall/2.4bpp");
static const u16 sNaranjaAnimGeneralWaterfallFrame3[] = INCBIN_U16("data/tilesets/primary/naranja_00/anim/waterfall/3.4bpp");
static const u16 *const sNaranjaAnimGeneralWaterfall[] =
{
    sNaranjaAnimGeneralWaterfallFrame0,
    sNaranjaAnimGeneralWaterfallFrame1,
    sNaranjaAnimGeneralWaterfallFrame2,
    sNaranjaAnimGeneralWaterfallFrame3,
};

static const u16 sNaranjaAnimGeneralLandWaterEdgeFrame0[] = INCBIN_U16("data/tilesets/primary/naranja_00/anim/land_water_edge/0.4bpp");
static const u16 sNaranjaAnimGeneralLandWaterEdgeFrame1[] = INCBIN_U16("data/tilesets/primary/naranja_00/anim/land_water_edge/1.4bpp");
static const u16 sNaranjaAnimGeneralLandWaterEdgeFrame2[] = INCBIN_U16("data/tilesets/primary/naranja_00/anim/land_water_edge/2.4bpp");
static const u16 sNaranjaAnimGeneralLandWaterEdgeFrame3[] = INCBIN_U16("data/tilesets/primary/naranja_00/anim/land_water_edge/3.4bpp");
static const u16 *const sNaranjaAnimGeneralLandWaterEdge[] =
{
    sNaranjaAnimGeneralLandWaterEdgeFrame0,
    sNaranjaAnimGeneralLandWaterEdgeFrame1,
    sNaranjaAnimGeneralLandWaterEdgeFrame2,
    sNaranjaAnimGeneralLandWaterEdgeFrame3,
};

static const u16 sNaranjaAnimBuildingTvFrame0[] = INCBIN_U16("data/tilesets/primary/naranja_01/anim/tv/0.4bpp");
static const u16 sNaranjaAnimBuildingTvFrame1[] = INCBIN_U16("data/tilesets/primary/naranja_01/anim/tv/1.4bpp");
static const u16 *const sNaranjaAnimBuildingTv[] =
{
    sNaranjaAnimBuildingTvFrame0,
    sNaranjaAnimBuildingTvFrame1,
};

static const u16 sNaranjaAnimLavaridgeSteamFrame0[] = INCBIN_U16("data/tilesets/secondary/naranja_09/anim/steam/0.4bpp");
static const u16 sNaranjaAnimLavaridgeSteamFrame1[] = INCBIN_U16("data/tilesets/secondary/naranja_09/anim/steam/1.4bpp");
static const u16 sNaranjaAnimLavaridgeSteamFrame2[] = INCBIN_U16("data/tilesets/secondary/naranja_09/anim/steam/2.4bpp");
static const u16 sNaranjaAnimLavaridgeSteamFrame3[] = INCBIN_U16("data/tilesets/secondary/naranja_09/anim/steam/3.4bpp");
static const u16 *const sNaranjaAnimLavaridgeSteam[] =
{
    sNaranjaAnimLavaridgeSteamFrame0,
    sNaranjaAnimLavaridgeSteamFrame1,
    sNaranjaAnimLavaridgeSteamFrame2,
    sNaranjaAnimLavaridgeSteamFrame3,
};

static const u16 sNaranjaAnimPacifidlogLogBridgesFrame0[] = INCBIN_U16("data/tilesets/secondary/naranja_11/anim/log_bridges/0.4bpp");
static const u16 sNaranjaAnimPacifidlogLogBridgesFrame1[] = INCBIN_U16("data/tilesets/secondary/naranja_11/anim/log_bridges/1.4bpp");
static const u16 sNaranjaAnimPacifidlogLogBridgesFrame2[] = INCBIN_U16("data/tilesets/secondary/naranja_11/anim/log_bridges/2.4bpp");
static const u16 *const sNaranjaAnimPacifidlogLogBridges[] =
{
    sNaranjaAnimPacifidlogLogBridgesFrame0,
    sNaranjaAnimPacifidlogLogBridgesFrame1,
    sNaranjaAnimPacifidlogLogBridgesFrame2,
    sNaranjaAnimPacifidlogLogBridgesFrame1,
};

static const u16 sNaranjaAnimUnderwaterSeaweedFrame0[] = INCBIN_U16("data/tilesets/secondary/naranja_14/anim/seaweed/0.4bpp");
static const u16 sNaranjaAnimUnderwaterSeaweedFrame1[] = INCBIN_U16("data/tilesets/secondary/naranja_14/anim/seaweed/1.4bpp");
static const u16 sNaranjaAnimUnderwaterSeaweedFrame2[] = INCBIN_U16("data/tilesets/secondary/naranja_14/anim/seaweed/2.4bpp");
static const u16 sNaranjaAnimUnderwaterSeaweedFrame3[] = INCBIN_U16("data/tilesets/secondary/naranja_14/anim/seaweed/3.4bpp");
static const u16 *const sNaranjaAnimUnderwaterSeaweed[] =
{
    sNaranjaAnimUnderwaterSeaweedFrame0,
    sNaranjaAnimUnderwaterSeaweedFrame1,
    sNaranjaAnimUnderwaterSeaweedFrame2,
    sNaranjaAnimUnderwaterSeaweedFrame3,
};

static const u16 sNaranjaAnimPacifidlogWaterCurrentsFrame0[] = INCBIN_U16("data/tilesets/secondary/naranja_11/anim/water_currents/0.4bpp");
static const u16 sNaranjaAnimPacifidlogWaterCurrentsFrame1[] = INCBIN_U16("data/tilesets/secondary/naranja_11/anim/water_currents/1.4bpp");
static const u16 sNaranjaAnimPacifidlogWaterCurrentsFrame2[] = INCBIN_U16("data/tilesets/secondary/naranja_11/anim/water_currents/2.4bpp");
static const u16 sNaranjaAnimPacifidlogWaterCurrentsFrame3[] = INCBIN_U16("data/tilesets/secondary/naranja_11/anim/water_currents/3.4bpp");
static const u16 sNaranjaAnimPacifidlogWaterCurrentsFrame4[] = INCBIN_U16("data/tilesets/secondary/naranja_11/anim/water_currents/4.4bpp");
static const u16 sNaranjaAnimPacifidlogWaterCurrentsFrame5[] = INCBIN_U16("data/tilesets/secondary/naranja_11/anim/water_currents/5.4bpp");
static const u16 sNaranjaAnimPacifidlogWaterCurrentsFrame6[] = INCBIN_U16("data/tilesets/secondary/naranja_11/anim/water_currents/6.4bpp");
static const u16 sNaranjaAnimPacifidlogWaterCurrentsFrame7[] = INCBIN_U16("data/tilesets/secondary/naranja_11/anim/water_currents/7.4bpp");
static const u16 *const sNaranjaAnimPacifidlogWaterCurrents[] =
{
    sNaranjaAnimPacifidlogWaterCurrentsFrame0,
    sNaranjaAnimPacifidlogWaterCurrentsFrame1,
    sNaranjaAnimPacifidlogWaterCurrentsFrame2,
    sNaranjaAnimPacifidlogWaterCurrentsFrame3,
    sNaranjaAnimPacifidlogWaterCurrentsFrame4,
    sNaranjaAnimPacifidlogWaterCurrentsFrame5,
    sNaranjaAnimPacifidlogWaterCurrentsFrame6,
    sNaranjaAnimPacifidlogWaterCurrentsFrame7,
};

static const u16 sNaranjaAnimMauvilleFlower1Frame0[] = INCBIN_U16("data/tilesets/secondary/naranja_12/anim/flower_1/0.4bpp");
static const u16 sNaranjaAnimMauvilleFlower1Frame1[] = INCBIN_U16("data/tilesets/secondary/naranja_12/anim/flower_1/1.4bpp");
static const u16 sNaranjaAnimMauvilleFlower1Frame2[] = INCBIN_U16("data/tilesets/secondary/naranja_12/anim/flower_1/2.4bpp");
static const u16 sNaranjaAnimMauvilleFlower1Frame3[] = INCBIN_U16("data/tilesets/secondary/naranja_12/anim/flower_1/3.4bpp");
static const u16 *const sNaranjaAnimMauvilleFlower1[] =
{
    sNaranjaAnimMauvilleFlower1Frame0,
    sNaranjaAnimMauvilleFlower1Frame0,
    sNaranjaAnimMauvilleFlower1Frame1,
    sNaranjaAnimMauvilleFlower1Frame2,
    sNaranjaAnimMauvilleFlower1Frame3,
    sNaranjaAnimMauvilleFlower1Frame3,
    sNaranjaAnimMauvilleFlower1Frame3,
    sNaranjaAnimMauvilleFlower1Frame3,
    sNaranjaAnimMauvilleFlower1Frame3,
    sNaranjaAnimMauvilleFlower1Frame3,
    sNaranjaAnimMauvilleFlower1Frame2,
    sNaranjaAnimMauvilleFlower1Frame1,
};

static const u16 sNaranjaAnimMauvilleFlower2Frame0[] = INCBIN_U16("data/tilesets/secondary/naranja_12/anim/flower_2/0.4bpp");
static const u16 sNaranjaAnimMauvilleFlower2Frame1[] = INCBIN_U16("data/tilesets/secondary/naranja_12/anim/flower_2/1.4bpp");
static const u16 sNaranjaAnimMauvilleFlower2Frame2[] = INCBIN_U16("data/tilesets/secondary/naranja_12/anim/flower_2/2.4bpp");
static const u16 sNaranjaAnimMauvilleFlower2Frame3[] = INCBIN_U16("data/tilesets/secondary/naranja_12/anim/flower_2/3.4bpp");
static const u16 *const sNaranjaAnimMauvilleFlower2[] =
{
    sNaranjaAnimMauvilleFlower2Frame0,
    sNaranjaAnimMauvilleFlower2Frame0,
    sNaranjaAnimMauvilleFlower2Frame1,
    sNaranjaAnimMauvilleFlower2Frame2,
    sNaranjaAnimMauvilleFlower2Frame3,
    sNaranjaAnimMauvilleFlower2Frame3,
    sNaranjaAnimMauvilleFlower2Frame3,
    sNaranjaAnimMauvilleFlower2Frame3,
    sNaranjaAnimMauvilleFlower2Frame3,
    sNaranjaAnimMauvilleFlower2Frame3,
    sNaranjaAnimMauvilleFlower2Frame2,
    sNaranjaAnimMauvilleFlower2Frame1,
};

static const u16 sNaranjaAnimMauvilleFlower1AltFrame0[] = INCBIN_U16("data/tilesets/secondary/naranja_12/anim/flower_1_alt/0.4bpp");
static const u16 sNaranjaAnimMauvilleFlower1AltFrame1[] = INCBIN_U16("data/tilesets/secondary/naranja_12/anim/flower_1_alt/1.4bpp");
static const u16 *const sNaranjaAnimMauvilleFlower1Alt[] =
{
    sNaranjaAnimMauvilleFlower1AltFrame0,
    sNaranjaAnimMauvilleFlower1AltFrame0,
    sNaranjaAnimMauvilleFlower1AltFrame1,
    sNaranjaAnimMauvilleFlower1AltFrame1,
};

static const u16 sNaranjaAnimMauvilleFlower2AltFrame0[] = INCBIN_U16("data/tilesets/secondary/naranja_12/anim/flower_2_alt/0.4bpp");
static const u16 sNaranjaAnimMauvilleFlower2AltFrame1[] = INCBIN_U16("data/tilesets/secondary/naranja_12/anim/flower_2_alt/1.4bpp");
static const u16 *const sNaranjaAnimMauvilleFlower2Alt[] =
{
    sNaranjaAnimMauvilleFlower2AltFrame0,
    sNaranjaAnimMauvilleFlower2AltFrame0,
    sNaranjaAnimMauvilleFlower2AltFrame1,
    sNaranjaAnimMauvilleFlower2AltFrame1,
};

static const u16 sNaranjaAnimRustboroWindyWaterFrame0[] = INCBIN_U16("data/tilesets/secondary/naranja_02/anim/windy_water/0.4bpp");
static const u16 sNaranjaAnimRustboroWindyWaterFrame1[] = INCBIN_U16("data/tilesets/secondary/naranja_02/anim/windy_water/1.4bpp");
static const u16 sNaranjaAnimRustboroWindyWaterFrame2[] = INCBIN_U16("data/tilesets/secondary/naranja_02/anim/windy_water/2.4bpp");
static const u16 sNaranjaAnimRustboroWindyWaterFrame3[] = INCBIN_U16("data/tilesets/secondary/naranja_02/anim/windy_water/3.4bpp");
static const u16 sNaranjaAnimRustboroWindyWaterFrame4[] = INCBIN_U16("data/tilesets/secondary/naranja_02/anim/windy_water/4.4bpp");
static const u16 sNaranjaAnimRustboroWindyWaterFrame5[] = INCBIN_U16("data/tilesets/secondary/naranja_02/anim/windy_water/5.4bpp");
static const u16 sNaranjaAnimRustboroWindyWaterFrame6[] = INCBIN_U16("data/tilesets/secondary/naranja_02/anim/windy_water/6.4bpp");
static const u16 sNaranjaAnimRustboroWindyWaterFrame7[] = INCBIN_U16("data/tilesets/secondary/naranja_02/anim/windy_water/7.4bpp");
static const u16 *const sNaranjaAnimRustboroWindyWater[] =
{
    sNaranjaAnimRustboroWindyWaterFrame0,
    sNaranjaAnimRustboroWindyWaterFrame1,
    sNaranjaAnimRustboroWindyWaterFrame2,
    sNaranjaAnimRustboroWindyWaterFrame3,
    sNaranjaAnimRustboroWindyWaterFrame4,
    sNaranjaAnimRustboroWindyWaterFrame5,
    sNaranjaAnimRustboroWindyWaterFrame6,
    sNaranjaAnimRustboroWindyWaterFrame7,
};

static const u16 sNaranjaAnimRustboroFountainFrame0[] = INCBIN_U16("data/tilesets/secondary/naranja_02/anim/fountain/0.4bpp");
static const u16 sNaranjaAnimRustboroFountainFrame1[] = INCBIN_U16("data/tilesets/secondary/naranja_02/anim/fountain/1.4bpp");
static const u16 *const sNaranjaAnimRustboroFountain[] =
{
    sNaranjaAnimRustboroFountainFrame0,
    sNaranjaAnimRustboroFountainFrame1,
};

static const u16 sNaranjaAnimCaveLavaFrame0[] = INCBIN_U16("data/tilesets/secondary/naranja_13/anim/lava/0.4bpp");
static const u16 sNaranjaAnimCaveLavaFrame1[] = INCBIN_U16("data/tilesets/secondary/naranja_13/anim/lava/1.4bpp");
static const u16 sNaranjaAnimCaveLavaFrame2[] = INCBIN_U16("data/tilesets/secondary/naranja_13/anim/lava/2.4bpp");
static const u16 sNaranjaAnimCaveLavaFrame3[] = INCBIN_U16("data/tilesets/secondary/naranja_13/anim/lava/3.4bpp");
static const u16 *const sNaranjaAnimCaveLava[] =
{
    sNaranjaAnimCaveLavaFrame0,
    sNaranjaAnimCaveLavaFrame1,
    sNaranjaAnimCaveLavaFrame2,
    sNaranjaAnimCaveLavaFrame3,
};

static const u16 sNaranjaAnimEverGrandeFlowersFrame0[] = INCBIN_U16("data/tilesets/secondary/naranja_06/anim/flowers/0.4bpp");
static const u16 sNaranjaAnimEverGrandeFlowersFrame1[] = INCBIN_U16("data/tilesets/secondary/naranja_06/anim/flowers/1.4bpp");
static const u16 sNaranjaAnimEverGrandeFlowersFrame2[] = INCBIN_U16("data/tilesets/secondary/naranja_06/anim/flowers/2.4bpp");
static const u16 sNaranjaAnimEverGrandeFlowersFrame3[] = INCBIN_U16("data/tilesets/secondary/naranja_06/anim/flowers/3.4bpp");
static const u16 sNaranjaAnimEverGrandeFlowersFrame4[] = INCBIN_U16("data/tilesets/secondary/naranja_06/anim/flowers/4.4bpp");
static const u16 sNaranjaAnimEverGrandeFlowersFrame5[] = INCBIN_U16("data/tilesets/secondary/naranja_06/anim/flowers/5.4bpp");
static const u16 sNaranjaAnimEverGrandeFlowersFrame6[] = INCBIN_U16("data/tilesets/secondary/naranja_06/anim/flowers/6.4bpp");
static const u16 sNaranjaAnimEverGrandeFlowersFrame7[] = INCBIN_U16("data/tilesets/secondary/naranja_06/anim/flowers/7.4bpp");
static const u16 *const sNaranjaAnimEverGrandeFlowers[] =
{
    sNaranjaAnimEverGrandeFlowersFrame0,
    sNaranjaAnimEverGrandeFlowersFrame1,
    sNaranjaAnimEverGrandeFlowersFrame2,
    sNaranjaAnimEverGrandeFlowersFrame3,
    sNaranjaAnimEverGrandeFlowersFrame4,
    sNaranjaAnimEverGrandeFlowersFrame5,
    sNaranjaAnimEverGrandeFlowersFrame6,
    sNaranjaAnimEverGrandeFlowersFrame7,
};

static const u16 sNaranjaAnimSootopolisGymSideWaterfallFrame0[] = INCBIN_U16("data/tilesets/secondary/naranja_36/anim/side_waterfall/0.4bpp");
static const u16 sNaranjaAnimSootopolisGymSideWaterfallFrame1[] = INCBIN_U16("data/tilesets/secondary/naranja_36/anim/side_waterfall/1.4bpp");
static const u16 sNaranjaAnimSootopolisGymSideWaterfallFrame2[] = INCBIN_U16("data/tilesets/secondary/naranja_36/anim/side_waterfall/2.4bpp");
static const u16 *const sNaranjaAnimSootopolisGymSideWaterfall[] =
{
    sNaranjaAnimSootopolisGymSideWaterfallFrame0,
    sNaranjaAnimSootopolisGymSideWaterfallFrame1,
    sNaranjaAnimSootopolisGymSideWaterfallFrame2,
};

static const u16 sNaranjaAnimSootopolisGymFrontWaterfallFrame0[] = INCBIN_U16("data/tilesets/secondary/naranja_36/anim/front_waterfall/0.4bpp");
static const u16 sNaranjaAnimSootopolisGymFrontWaterfallFrame1[] = INCBIN_U16("data/tilesets/secondary/naranja_36/anim/front_waterfall/1.4bpp");
static const u16 sNaranjaAnimSootopolisGymFrontWaterfallFrame2[] = INCBIN_U16("data/tilesets/secondary/naranja_36/anim/front_waterfall/2.4bpp");
static const u16 *const sNaranjaAnimSootopolisGymFrontWaterfall[] =
{
    sNaranjaAnimSootopolisGymFrontWaterfallFrame0,
    sNaranjaAnimSootopolisGymFrontWaterfallFrame1,
    sNaranjaAnimSootopolisGymFrontWaterfallFrame2,
};

static const u16 sNaranjaAnimEliteFourWallLightsFrame0[] = INCBIN_U16("data/tilesets/secondary/naranja_37/anim/wall_lights/0.4bpp");
static const u16 sNaranjaAnimEliteFourWallLightsFrame1[] = INCBIN_U16("data/tilesets/secondary/naranja_37/anim/wall_lights/1.4bpp");
static const u16 sNaranjaAnimEliteFourWallLightsFrame2[] = INCBIN_U16("data/tilesets/secondary/naranja_37/anim/wall_lights/2.4bpp");
static const u16 sNaranjaAnimEliteFourWallLightsFrame3[] = INCBIN_U16("data/tilesets/secondary/naranja_37/anim/wall_lights/3.4bpp");
static const u16 *const sNaranjaAnimEliteFourWallLights[] =
{
    sNaranjaAnimEliteFourWallLightsFrame0,
    sNaranjaAnimEliteFourWallLightsFrame1,
    sNaranjaAnimEliteFourWallLightsFrame2,
    sNaranjaAnimEliteFourWallLightsFrame3,
};

static const u16 sNaranjaAnimEliteFourFloorLightsFrame0[] = INCBIN_U16("data/tilesets/secondary/naranja_37/anim/floor_lights/0.4bpp");
static const u16 sNaranjaAnimEliteFourFloorLightsFrame1[] = INCBIN_U16("data/tilesets/secondary/naranja_37/anim/floor_lights/1.4bpp");
static const u16 *const sNaranjaAnimEliteFourFloorLights[] =
{
    sNaranjaAnimEliteFourFloorLightsFrame0,
    sNaranjaAnimEliteFourFloorLightsFrame1,
};

static const u16 sNaranjaAnimMauvilleGymElectricGatesFrame0[] = INCBIN_U16("data/tilesets/secondary/naranja_28/anim/electric_gates/0.4bpp");
static const u16 sNaranjaAnimMauvilleGymElectricGatesFrame1[] = INCBIN_U16("data/tilesets/secondary/naranja_28/anim/electric_gates/1.4bpp");
static const u16 *const sNaranjaAnimMauvilleGymElectricGates[] =
{
    sNaranjaAnimMauvilleGymElectricGatesFrame0,
    sNaranjaAnimMauvilleGymElectricGatesFrame1,
};

static const u16 sNaranjaAnimBikeShopBlinkingLightsFrame0[] = INCBIN_U16("data/tilesets/secondary/naranja_25/anim/blinking_lights/0.4bpp");
static const u16 sNaranjaAnimBikeShopBlinkingLightsFrame1[] = INCBIN_U16("data/tilesets/secondary/naranja_25/anim/blinking_lights/1.4bpp");
static const u16 *const sNaranjaAnimBikeShopBlinkingLights[] =
{
    sNaranjaAnimBikeShopBlinkingLightsFrame0,
    sNaranjaAnimBikeShopBlinkingLightsFrame1,
};

static void QueueNaranjaTilesetAnim(const u16 *const *frames, u16 frameCount, u16 timer, u16 tile, u16 size)
{
    AppendTilesetAnimToBuffer(frames[timer % frameCount], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(tile)), size);
}

static void TilesetAnim_NaranjaPrimary00(u16 timer)
{
    switch (timer % 16)
    {
    case 0:
        QueueNaranjaTilesetAnim(sNaranjaAnimGeneralFlower, ARRAY_COUNT(sNaranjaAnimGeneralFlower), timer / 16, 508, 4 * TILE_SIZE_4BPP);
        break;
    case 1:
        QueueNaranjaTilesetAnim(sNaranjaAnimGeneralWater, ARRAY_COUNT(sNaranjaAnimGeneralWater), timer / 16, 432, 30 * TILE_SIZE_4BPP);
        break;
    case 2:
        QueueNaranjaTilesetAnim(sNaranjaAnimGeneralSandWaterEdge, ARRAY_COUNT(sNaranjaAnimGeneralSandWaterEdge), timer / 16, 464, 10 * TILE_SIZE_4BPP);
        break;
    case 3:
        QueueNaranjaTilesetAnim(sNaranjaAnimGeneralWaterfall, ARRAY_COUNT(sNaranjaAnimGeneralWaterfall), timer / 16, 496, 6 * TILE_SIZE_4BPP);
        break;
    case 4:
        QueueNaranjaTilesetAnim(sNaranjaAnimGeneralLandWaterEdge, ARRAY_COUNT(sNaranjaAnimGeneralLandWaterEdge), timer / 16, 480, 10 * TILE_SIZE_4BPP);
        break;
    }
}

static void TilesetAnim_NaranjaPrimary01(u16 timer)
{
    if (timer % 8 == 0)
        QueueNaranjaTilesetAnim(sNaranjaAnimBuildingTv, ARRAY_COUNT(sNaranjaAnimBuildingTv), timer / 8, 496, 4 * TILE_SIZE_4BPP);
}

static void QueueNaranjaRustboroWindyWater(u16 timer, u8 phase)
{
    timer -= phase;
    QueueNaranjaTilesetAnim(sNaranjaAnimRustboroWindyWater, ARRAY_COUNT(sNaranjaAnimRustboroWindyWater), timer,
                           NUM_TILES_IN_PRIMARY + 128 + phase * 4, 4 * TILE_SIZE_4BPP);
}

static void TilesetAnim_NaranjaSecondary02(u16 timer)
{
    u8 phase = timer % 8;
    QueueNaranjaRustboroWindyWater(timer / 8, phase);
    if (phase == 0)
        QueueNaranjaTilesetAnim(sNaranjaAnimRustboroFountain, ARRAY_COUNT(sNaranjaAnimRustboroFountain), timer / 8,
                               NUM_TILES_IN_PRIMARY + 448, 4 * TILE_SIZE_4BPP);
}

static void QueueNaranjaMauvilleFlowers(u16 timer, u8 phase)
{
    timer -= phase;
    if (timer < ARRAY_COUNT(sNaranjaAnimMauvilleFlower1))
    {
        QueueNaranjaTilesetAnim(sNaranjaAnimMauvilleFlower1, ARRAY_COUNT(sNaranjaAnimMauvilleFlower1), timer,
                               NUM_TILES_IN_PRIMARY + 96 + phase * 4, 4 * TILE_SIZE_4BPP);
        QueueNaranjaTilesetAnim(sNaranjaAnimMauvilleFlower2, ARRAY_COUNT(sNaranjaAnimMauvilleFlower2), timer,
                               NUM_TILES_IN_PRIMARY + 128 + phase * 4, 4 * TILE_SIZE_4BPP);
    }
    else
    {
        QueueNaranjaTilesetAnim(sNaranjaAnimMauvilleFlower1Alt, ARRAY_COUNT(sNaranjaAnimMauvilleFlower1Alt), timer,
                               NUM_TILES_IN_PRIMARY + 96 + phase * 4, 4 * TILE_SIZE_4BPP);
        QueueNaranjaTilesetAnim(sNaranjaAnimMauvilleFlower2Alt, ARRAY_COUNT(sNaranjaAnimMauvilleFlower2Alt), timer,
                               NUM_TILES_IN_PRIMARY + 128 + phase * 4, 4 * TILE_SIZE_4BPP);
    }
}

static void TilesetAnim_NaranjaSecondary12(u16 timer)
{
    QueueNaranjaMauvilleFlowers(timer / 8, timer % 8);
}

static void TilesetAnim_NaranjaSecondary09(u16 timer)
{
    if (timer % 16 == 0)
    {
        u16 frame = timer / 16;
        QueueNaranjaTilesetAnim(sNaranjaAnimLavaridgeSteam, ARRAY_COUNT(sNaranjaAnimLavaridgeSteam), frame,
                               NUM_TILES_IN_PRIMARY + 288, 4 * TILE_SIZE_4BPP);
        QueueNaranjaTilesetAnim(sNaranjaAnimLavaridgeSteam, ARRAY_COUNT(sNaranjaAnimLavaridgeSteam), frame + 2,
                               NUM_TILES_IN_PRIMARY + 292, 4 * TILE_SIZE_4BPP);
    }
    if (timer % 16 == 1)
        QueueNaranjaTilesetAnim(sNaranjaAnimCaveLava, ARRAY_COUNT(sNaranjaAnimCaveLava), timer / 16,
                               NUM_TILES_IN_PRIMARY + 160, 4 * TILE_SIZE_4BPP);
}

static void TilesetAnim_NaranjaSecondary06(u16 timer)
{
    u8 phase = timer % 8;
    timer = timer / 8 - phase;
    QueueNaranjaTilesetAnim(sNaranjaAnimEverGrandeFlowers, ARRAY_COUNT(sNaranjaAnimEverGrandeFlowers), timer,
                           NUM_TILES_IN_PRIMARY + 224 + phase * 4, 4 * TILE_SIZE_4BPP);
}

static void TilesetAnim_NaranjaSecondary11(u16 timer)
{
    if (timer % 16 == 0)
        QueueNaranjaTilesetAnim(sNaranjaAnimPacifidlogLogBridges, ARRAY_COUNT(sNaranjaAnimPacifidlogLogBridges), timer / 16,
                               NUM_TILES_IN_PRIMARY + 464, 30 * TILE_SIZE_4BPP);
    if (timer % 16 == 1)
        QueueNaranjaTilesetAnim(sNaranjaAnimPacifidlogWaterCurrents, ARRAY_COUNT(sNaranjaAnimPacifidlogWaterCurrents), timer / 16,
                               NUM_TILES_IN_PRIMARY + 496, 8 * TILE_SIZE_4BPP);
}

static void TilesetAnim_NaranjaSecondary14(u16 timer)
{
    if (timer % 16 == 0)
        QueueNaranjaTilesetAnim(sNaranjaAnimUnderwaterSeaweed, ARRAY_COUNT(sNaranjaAnimUnderwaterSeaweed), timer / 16,
                               NUM_TILES_IN_PRIMARY + 496, 4 * TILE_SIZE_4BPP);
}

static void TilesetAnim_NaranjaSecondary36(u16 timer)
{
    if (timer % 8 == 0)
    {
        QueueNaranjaTilesetAnim(sNaranjaAnimSootopolisGymSideWaterfall, ARRAY_COUNT(sNaranjaAnimSootopolisGymSideWaterfall), timer / 8,
                               NUM_TILES_IN_PRIMARY + 496, 12 * TILE_SIZE_4BPP);
        QueueNaranjaTilesetAnim(sNaranjaAnimSootopolisGymFrontWaterfall, ARRAY_COUNT(sNaranjaAnimSootopolisGymFrontWaterfall), timer / 8,
                               NUM_TILES_IN_PRIMARY + 464, 20 * TILE_SIZE_4BPP);
    }
}

static void TilesetAnim_NaranjaSecondary13(u16 timer)
{
    if (timer % 16 == 1)
        QueueNaranjaTilesetAnim(sNaranjaAnimCaveLava, ARRAY_COUNT(sNaranjaAnimCaveLava), timer / 16,
                               NUM_TILES_IN_PRIMARY + 416, 4 * TILE_SIZE_4BPP);
}

static void TilesetAnim_NaranjaSecondary37(u16 timer)
{
    if (timer % 64 == 0)
        QueueNaranjaTilesetAnim(sNaranjaAnimEliteFourFloorLights, ARRAY_COUNT(sNaranjaAnimEliteFourFloorLights), timer / 64,
                               NUM_TILES_IN_PRIMARY + 480, 4 * TILE_SIZE_4BPP);
    if (timer % 8 == 1)
        QueueNaranjaTilesetAnim(sNaranjaAnimEliteFourWallLights, ARRAY_COUNT(sNaranjaAnimEliteFourWallLights), timer / 8,
                               NUM_TILES_IN_PRIMARY + 504, TILE_SIZE_4BPP);
}

static void TilesetAnim_NaranjaSecondary28(u16 timer)
{
    if (timer % 2 == 0)
        QueueNaranjaTilesetAnim(sNaranjaAnimMauvilleGymElectricGates, ARRAY_COUNT(sNaranjaAnimMauvilleGymElectricGates), timer / 2,
                               NUM_TILES_IN_PRIMARY + 144, 16 * TILE_SIZE_4BPP);
}

static void TilesetAnim_NaranjaSecondary25(u16 timer)
{
    if (timer % 4 == 0)
        QueueNaranjaTilesetAnim(sNaranjaAnimBikeShopBlinkingLights, ARRAY_COUNT(sNaranjaAnimBikeShopBlinkingLights), timer / 4,
                               NUM_TILES_IN_PRIMARY + 496, 9 * TILE_SIZE_4BPP);
}

void InitTilesetAnim_NaranjaPrimary00(void)
{
    sPrimaryTilesetAnimCounter = 0;
    sPrimaryTilesetAnimCounterMax = 256;
    sPrimaryTilesetAnimCallback = TilesetAnim_NaranjaPrimary00;
}

void InitTilesetAnim_NaranjaPrimary01(void)
{
    sPrimaryTilesetAnimCounter = 0;
    sPrimaryTilesetAnimCounterMax = 256;
    sPrimaryTilesetAnimCallback = TilesetAnim_NaranjaPrimary01;
}

#define INIT_NARANJA_SECONDARY(name, max)       \
void InitTilesetAnim_NaranjaSecondary##name(void) \
{                                                 \
    sSecondaryTilesetAnimCounter = 0;             \
    sSecondaryTilesetAnimCounterMax = (max);      \
    sSecondaryTilesetAnimCallback = TilesetAnim_NaranjaSecondary##name; \
}

INIT_NARANJA_SECONDARY(02, sPrimaryTilesetAnimCounterMax)
INIT_NARANJA_SECONDARY(06, sPrimaryTilesetAnimCounterMax)
INIT_NARANJA_SECONDARY(09, sPrimaryTilesetAnimCounterMax)
INIT_NARANJA_SECONDARY(11, sPrimaryTilesetAnimCounterMax)
INIT_NARANJA_SECONDARY(12, sPrimaryTilesetAnimCounterMax)
INIT_NARANJA_SECONDARY(13, sPrimaryTilesetAnimCounterMax)
INIT_NARANJA_SECONDARY(14, 128)
INIT_NARANJA_SECONDARY(25, sPrimaryTilesetAnimCounterMax)
INIT_NARANJA_SECONDARY(28, sPrimaryTilesetAnimCounterMax)
INIT_NARANJA_SECONDARY(36, 240)
INIT_NARANJA_SECONDARY(37, 128)

#undef INIT_NARANJA_SECONDARY
// END AUTO-GENERATED NARANJA TILESETS: animations
