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

#include "levels/ttm/header.h"
const LevelScript level_ttm_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _ttm_segment_7SegmentRomStart, _ttm_segment_7SegmentRomEnd),
LOAD_MIO0(0xA,_water_skybox_mio0SegmentRomStart,_water_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group9_mio0SegmentRomStart,_group9_mio0SegmentRomEnd),
LOAD_RAW(12,_group9_geoSegmentRomStart,_group9_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_10),
JUMP_LINK(script_func_global_15),
JUMP_LINK(local_area_ttm_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_ttm_1_[] = {
AREA(1,Geo_ttm_1_0x19001700),
TERRAIN(col_ttm_1_0xe02ff50),
SET_BACKGROUND_MUSIC(0,0),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_ttm_1_),
JUMP_LINK(local_warps_ttm_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_ttm_1_[] = {
OBJECT_WITH_ACTS(0,110,-2197,-2909,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(84,151,2941,-275,0,0,0,0x0, bhvBalconyBigBoo,31),
OBJECT_WITH_ACTS(137,-2487,-189,-3492,0,0,0,0xa0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,-977,-1832,1005,0,0,0,0x2000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(122,3490,-1107,3285,0,0,0,0x3000000, bhvStar,31),
OBJECT_WITH_ACTS(122,-1210,-156,1826,0,0,0,0x4000000, bhvStar,31),
OBJECT_WITH_ACTS(122,4896,1563,1250,0,0,0,0x5000000, bhvStar,31),
OBJECT_WITH_ACTS(215,1190,-2154,987,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-3735,-2135,-1692,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-4740,-469,2760,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,5260,-469,1458,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-2446,2969,-618,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,2708,2969,-646,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,3490,990,-2813,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,3489,-2135,472,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(84,-3386,-365,-968,0,0,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(84,-4115,-365,-729,0,0,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(84,3108,1354,-134,0,0,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(84,3906,1354,-156,0,0,0,0x0, bhvBoo,31),
OBJECT_WITH_ACTS(100,-551,-2197,-26,0,0,0,0x0, bhvPiranhaPlant,31),
OBJECT_WITH_ACTS(100,749,-2197,-61,0,0,0,0x0, bhvPiranhaPlant,31),
OBJECT_WITH_ACTS(100,2235,-2197,-1024,0,0,0,0x0, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(100,-1959,-2197,-1086,0,0,0,0x0, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(100,-31,1222,-911,0,0,0,0x10000, bhvFirePiranhaPlant,31),
OBJECT_WITH_ACTS(192,-2368,1222,-241,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,-2453,1222,129,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(144,-839,-501,1083,0,0,0,0x0, bhvFlame,31),
OBJECT_WITH_ACTS(129,-930,-501,1222,0,-27,0,0x0, bhvBreakableBox,31),
OBJECT_WITH_ACTS(137,3594,1510,-625,0,0,0,0x20000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,104,-2197,-1458,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,156,2840,156,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-4115,-417,1510,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,4375,-417,833,0,25,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,3490,-2135,1667,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,52,-2083,1412,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,30,1302,1410,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-3815,-2031,2884,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(124,-408,-2197,1064,0,164,0,0x310000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(212,-3750,-417,-2708,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(140,636,2840,950,0,18,0,0x0, bhvBlueCoinSwitch,31),
OBJECT_WITH_ACTS(118,118,2917,779,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,142,2892,-836,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,110,493,-1534,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,106,1274,-1551,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,132,1642,-1146,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,133,2756,-1130,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,156,-2197,-365,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,156,-2197,0,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(144,-782,-501,990,0,0,0,0x0, bhvFlame,31),
RETURN()
};
const LevelScript local_warps_ttm_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,6,1,64,0),
WARP_NODE(241,6,1,65,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
