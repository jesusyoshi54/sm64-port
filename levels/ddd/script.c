#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"
#include "game/level_update.h"
#include "levels/scripts.h"
#include "actors/common1.h"
#include "make_const_nonconst.h"

#include "levels/ddd/header.h"
const LevelScript level_ddd_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _ddd_segment_7SegmentRomStart, _ddd_segment_7SegmentRomEnd),
LOAD_MIO0(0xA,_water_skybox_mio0SegmentRomStart,_water_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group3_mio0SegmentRomStart,_group3_mio0SegmentRomEnd),
LOAD_RAW(12,_group3_geoSegmentRomStart,_group3_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_4),
JUMP_LINK(script_func_global_15),
JUMP_LINK(local_area_ddd_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_ddd_1_[] = {
AREA(1,Geo_ddd_1_0x19001700),
TERRAIN(col_ddd_1_0xe0315b0),
SET_BACKGROUND_MUSIC(0,0),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_ddd_1_),
JUMP_LINK(local_warps_ddd_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_ddd_1_[] = {
OBJECT_WITH_ACTS(0,-3155,-3352,-5047,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(86,4423,-58,5607,0,-154,0,0x0, bhvKingBobomb,31),
OBJECT_WITH_ACTS(0,-437,-540,2033,0,-153,0,0x1000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(122,-4049,2430,2247,0,107,0,0x3000000, bhvStar,31),
OBJECT_WITH_ACTS(122,-3962,2383,-4319,0,-151,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(122,3482,2292,-2454,0,0,0,0x4000000, bhvStar,31),
OBJECT_WITH_ACTS(137,144,-417,6214,0,0,0,0xe0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(215,-919,-1510,-4165,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-3247,-4115,-3594,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,3361,-625,-3375,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1535,52,5030,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1756,-723,-2229,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,4601,-534,6074,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,4073,-856,1411,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-5181,-856,2244,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(23,958,-856,-1105,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,-2431,-856,6482,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,-4014,-856,6666,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,-1209,-3635,-2763,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,-4583,-3635,-5041,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(180,4386,-58,5920,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(124,-102,-856,-907,0,207,0,0x120000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(100,-4935,-856,368,0,0,0,0x0, bhvPiranhaPlant,31),
OBJECT_WITH_ACTS(100,-2504,-856,4198,0,0,0,0x0, bhvPiranhaPlant,31),
OBJECT_WITH_ACTS(100,4640,-723,-1841,0,0,0,0x0, bhvPiranhaPlant,31),
OBJECT_WITH_ACTS(100,2504,-856,1326,0,0,0,0x0, bhvPiranhaPlant,31),
OBJECT_WITH_ACTS(100,2946,-534,5672,0,0,0,0x0, bhvPiranhaPlant,31),
OBJECT_WITH_ACTS(140,3651,2260,-3702,0,-8,0,0x0, bhvBlueCoinSwitch,31),
OBJECT_WITH_ACTS(188,5230,-534,4745,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,5065,-534,6440,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(220,-3697,1927,3009,0,-22,0,0x0, bhvFlyGuy,31),
OBJECT_WITH_ACTS(220,-1343,1823,2966,0,0,0,0x0, bhvFlyGuy,31),
OBJECT_WITH_ACTS(220,-4029,1667,-360,0,0,0,0x0, bhvFlyGuy,31),
OBJECT_WITH_ACTS(0,3070,-723,-5097,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-2862,-3635,-2250,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,-5319,-856,-973,90,0,0,0x130000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(129,-2150,-856,5745,0,0,0,0x10000, bhvBreakableBox,31),
OBJECT_WITH_ACTS(118,3335,2083,-3523,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,3538,2292,-3185,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,3863,2292,-3487,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,3641,2392,-3758,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(0,3593,3959,-3512,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(223,-4083,1354,2036,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(107,5289,-856,-601,0,0,0,0x0, bhvWoodenPost,31),
OBJECT_WITH_ACTS(104,444,-856,1982,0,0,0,0x0, bhvKoopa,31),
OBJECT_WITH_ACTS(212,1001,0,-1115,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,-413,521,6154,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(137,-5375,-3177,-4498,0,-29,0,0x40000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-5579,-3125,-4017,0,-19,0,0x50000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(124,3594,3698,-3333,0,180,0,0x20000, bhvMessagePanel,31),
RETURN()
};
const LevelScript local_warps_ddd_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,31,1,70,0),
WARP_NODE(241,31,1,71,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
