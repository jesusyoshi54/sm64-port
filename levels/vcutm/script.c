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

#include "levels/vcutm/header.h"
const LevelScript level_vcutm_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _vcutm_segment_7SegmentRomStart, _vcutm_segment_7SegmentRomEnd),
LOAD_MIO0(0xA,_bits_skybox_mio0SegmentRomStart,_bits_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group8_mio0SegmentRomStart,_group8_mio0SegmentRomEnd),
LOAD_RAW(12,_group8_geoSegmentRomStart,_group8_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_9),
JUMP_LINK(script_func_global_15),
JUMP_LINK(local_area_vcutm_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_vcutm_1_[] = {
AREA(1,Geo_vcutm_1_0x19001700),
TERRAIN(col_vcutm_1_0xe026e48),
SET_BACKGROUND_MUSIC(0,0),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_vcutm_1_),
JUMP_LINK(local_warps_vcutm_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_vcutm_1_[] = {
OBJECT_WITH_ACTS(0,-6187,-852,-914,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(85,5269,-1394,-762,0,-154,0,0x20000, bhvCapSwitch,31),
OBJECT_WITH_ACTS(0,1680,3835,-5523,0,-153,0,0xc0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(122,-6567,-2830,-865,0,107,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(122,1878,-1211,-7266,0,-151,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(0,-273,-729,-1040,0,0,0,0x2000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(122,1510,365,4751,0,0,0,0x3000000, bhvStar,31),
OBJECT_WITH_ACTS(122,2551,2917,4340,0,0,0,0x4000000, bhvStar,31),
OBJECT_WITH_ACTS(122,-1444,4063,-1091,0,0,0,0x5000000, bhvStar,31),
OBJECT_WITH_ACTS(215,5208,-1302,-2500,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,2448,-1302,2396,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-6250,-1198,-1667,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-2763,-1146,5052,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1579,564,3452,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1354,885,6198,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-1912,-1302,3863,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-377,2344,5519,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(212,3049,-1302,1561,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(137,1652,-1041,5024,0,0,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(137,-616,2969,896,0,0,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,-214,-885,750,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-365,1406,5052,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-417,2656,938,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(103,-105,-1402,2708,0,0,0,0x0, bhvSmallWhomp,31),
OBJECT_WITH_ACTS(207,-2083,-1402,4740,0,0,0,0x0, bhvFloorSwitchHiddenObjects,31),
OBJECT_WITH_ACTS(129,-237,-318,3593,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-237,-318,3781,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,919,-313,3641,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,919,-313,3825,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(223,-3346,-1402,4655,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(220,-470,0,-5769,0,0,0,0x0, bhvFlyGuy,31),
OBJECT_WITH_ACTS(180,-3399,-1316,-1454,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(223,-233,-1394,-3441,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(220,1051,3333,1690,0,0,0,0x0, bhvFlyGuy,31),
OBJECT_WITH_ACTS(129,990,2344,998,0,0,0,0x0, bhvBreakableBox,31),
OBJECT_WITH_ACTS(129,990,2344,834,0,0,0,0x0, bhvBreakableBox,31),
OBJECT_WITH_ACTS(129,2708,2344,2604,0,0,0,0x0, bhvBreakableBox,31),
OBJECT_WITH_ACTS(129,2708,2344,2423,0,0,0,0x0, bhvBreakableBox,31),
RETURN()
};
const LevelScript local_warps_vcutm_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,31,1,66,0),
WARP_NODE(241,31,1,67,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
