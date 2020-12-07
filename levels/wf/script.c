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

#include "levels/wf/header.h"
const LevelScript level_wf_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _wf_segment_7SegmentRomStart, _wf_segment_7SegmentRomEnd),
LOAD_MIO0(0xA,_water_skybox_mio0SegmentRomStart,_water_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group1_mio0SegmentRomStart,_group1_mio0SegmentRomEnd),
LOAD_RAW(12,_group1_geoSegmentRomStart,_group1_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_2),
JUMP_LINK(script_func_global_15),
JUMP_LINK(local_area_wf_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_wf_1_[] = {
AREA(1,Geo_wf_1_0x19001700),
TERRAIN(col_wf_1_0xe011c68),
SET_BACKGROUND_MUSIC(0,0),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_wf_1_),
JUMP_LINK(local_warps_wf_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_wf_1_[] = {
OBJECT_WITH_ACTS(0,-2457,-1581,-1593,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(124,-1498,-3174,-2099,0,-94,0,0x200000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(0,1680,3835,-5523,0,-153,0,0xc0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,-6612,1024,-3351,0,107,0,0xd0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,1980,768,6618,0,-151,0,0xe0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(122,3876,3334,-790,0,0,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(0,3279,0,522,0,0,0,0x1000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(137,-5151,3906,1266,0,0,0,0xb0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(122,5083,-156,-5859,0,0,0,0x3000000, bhvStar,31),
OBJECT_WITH_ACTS(137,5221,781,1786,0,0,0,0xd0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(122,-4789,365,808,0,0,0,0x5000000, bhvStar,31),
OBJECT_WITH_ACTS(215,-2401,-3073,48,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,4644,0,-872,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-977,2188,882,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1889,-208,2428,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-3727,781,1481,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-4562,2188,837,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-547,-468,611,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,2313,-2083,-2763,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(207,5075,-2314,-4530,0,0,0,0x0, bhvFloorSwitchHiddenObjects,31),
OBJECT_WITH_ACTS(129,5566,-1927,-4931,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,5064,-1510,-4932,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,4600,-1146,-4943,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(140,-321,525,3024,0,0,0,0x0, bhvBlueCoinSwitch,31),
OBJECT_WITH_ACTS(118,109,629,3792,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,1689,417,3878,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,3207,469,3875,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,5187,468,3844,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,5234,469,2992,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(223,1581,-534,1239,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(220,131,729,1184,0,0,0,0x0, bhvFlyGuy,31),
OBJECT_WITH_ACTS(220,-4275,1667,520,0,0,0,0x0, bhvFlyGuy,31),
OBJECT_WITH_ACTS(180,-1912,675,693,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(180,-3203,675,1028,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(0,166,-2950,-1955,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,3,-3074,-1854,90,0,0,0x130000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,4974,-625,-5554,90,0,0,0x130000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-4320,1041,830,0,90,0,0x130000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(212,-3730,833,184,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(0,-2629,871,827,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,3069,0,-870,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,3078,989,-880,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,3067,1823,-898,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,447,-312,2178,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-1003,-157,355,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(137,2163,0,-2365,0,0,0,0x50000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(212,391,-3125,-3444,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(116,-5102,2969,378,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(88,-991,1666,870,0,0,0,0x0, bhvThwomp,31),
OBJECT_WITH_ACTS(103,3099,-534,1230,0,-90,0,0x0, bhvSmallWhomp,31),
OBJECT_WITH_ACTS(116,4367,-157,2692,0,0,0,0x0, bhvOneCoin,31),
RETURN()
};
const LevelScript local_warps_wf_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,26,1,42,0),
WARP_NODE(241,26,1,43,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
