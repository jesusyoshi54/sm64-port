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

#include "levels/bitfs/header.h"
const LevelScript level_bitfs_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bitfs_segment_7SegmentRomStart, _bitfs_segment_7SegmentRomEnd),
LOAD_MIO0(0xA,_cloud_floor_skybox_mio0SegmentRomStart,_cloud_floor_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group4_mio0SegmentRomStart,_group4_mio0SegmentRomEnd),
LOAD_RAW(12,_group4_geoSegmentRomStart,_group4_geoSegmentRomEnd),
LOAD_MIO0(6,_group13_mio0SegmentRomStart,_group13_mio0SegmentRomEnd),
LOAD_RAW(13,_group13_geoSegmentRomStart,_group13_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_5),
JUMP_LINK(script_func_global_14),
JUMP_LINK(local_area_bitfs_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_bitfs_1_[] = {
AREA(1,Geo_bitfs_1_0x19001700),
TERRAIN(col_bitfs_1_0xe01c590),
SET_BACKGROUND_MUSIC(0,0),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_bitfs_1_),
JUMP_LINK(local_warps_bitfs_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_bitfs_1_[] = {
OBJECT_WITH_ACTS(0,1068,-175,-3204,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(22,429,27,2599,0,-154,0,0xa0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(122,1505,1700,2068,0,-153,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(122,-5473,1441,-5129,0,107,0,0x1000000, bhvStar,31),
OBJECT_WITH_ACTS(122,-3224,1653,5950,0,-176,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(137,7610,990,186,0,-49,0,0xc0000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,-3423,156,-867,0,0,0,0x4000000, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(215,3657,260,-6891,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-1866,885,-6980,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,2303,781,-436,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-5370,-938,-3641,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,1136,-313,3760,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-76,-1771,3576,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,836,104,2051,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,6552,-365,-1224,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(207,-686,724,-2831,0,-86,0,0x0, bhvFloorSwitchHiddenObjects,31),
OBJECT_WITH_ACTS(129,815,573,-2834,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,1015,729,-2834,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,1210,885,-2834,0,0,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-4664,990,3259,0,27,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-4580,990,3432,0,27,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-4057,990,4306,0,-57,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(129,-3963,990,4468,0,32,0,0x0, bhvHiddenObject,31),
OBJECT_WITH_ACTS(0,1045,-104,-2356,0,0,0,0x60000, bhvDeathWarp,31),
OBJECT_WITH_ACTS(212,7182,-365,3204,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(223,6961,-468,3057,0,0,0,0x0, bhvChuckya,31),
OBJECT_WITH_ACTS(87,3923,-2455,2505,0,0,0,0x0, bhvWhirlpool,31),
OBJECT_WITH_ACTS(87,-1574,-2455,3052,0,0,0,0x0, bhvWhirlpool,31),
OBJECT_WITH_ACTS(88,-1275,-2455,1307,0,0,0,0x0, bhvClamShell,31),
OBJECT_WITH_ACTS(88,407,-2455,8,0,0,0,0x0, bhvClamShell,31),
OBJECT_WITH_ACTS(88,3290,-2455,4071,0,0,0,0x0, bhvClamShell,31),
OBJECT_WITH_ACTS(105,-3218,-312,2902,0,0,0,0x0, bhvSkeeter,31),
OBJECT_WITH_ACTS(0,-1725,724,-2809,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(0,3234,1196,-2632,0,0,0,0x0, bhvGoombaTripletSpawner,31),
OBJECT_WITH_ACTS(188,-3628,-78,-1820,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(188,-4886,-78,-534,0,0,0,0x0, bhvBobomb,31),
OBJECT_WITH_ACTS(220,3106,1927,-1385,0,0,0,0x0, bhvFlyGuy,31),
OBJECT_WITH_ACTS(180,-4470,-78,-1228,0,0,0,0x0, bhvFireSpitter,31),
OBJECT_WITH_ACTS(137,4030,1563,-2529,0,0,0,0x40000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,1050,0,-4490,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-4264,-625,-5339,90,0,0,0x130000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-4803,104,-2823,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,3030,-1979,2560,0,90,0,0x130000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(129,-5403,-78,1088,0,0,0,0x10000, bhvBreakableBox,31),
RETURN()
};
const LevelScript local_warps_bitfs_1_[] = {
WARP_NODE(10,33,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,31,1,72,0),
WARP_NODE(241,31,1,73,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
