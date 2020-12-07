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

#include "levels/sa/header.h"
const LevelScript level_sa_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _sa_segment_7SegmentRomStart, _sa_segment_7SegmentRomEnd),
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
JUMP_LINK(local_area_sa_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_sa_1_[] = {
AREA(1,Geo_sa_1_0x19001700),
TERRAIN(col_sa_1_0xe00a898),
SET_BACKGROUND_MUSIC(0,0),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_sa_1_),
JUMP_LINK(local_warps_sa_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_sa_1_[] = {
OBJECT_WITH_ACTS(0,51,-1480,-639,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(122,107,2163,-1995,0,-154,0,0x0, bhvStar,31),
OBJECT_WITH_ACTS(124,-667,-246,-212,0,49,0,0x60000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(124,1800,1205,-2105,0,315,0,0x70000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(212,599,-188,166,0,-151,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(0,-572,0,40,0,-49,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,0,-1563,104,0,0,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-2195,431,-1573,0,0,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,-371,1319,1059,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,1950,497,1687,90,0,0,0x130000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(129,1843,-1657,1818,0,0,0,0x10000, bhvBreakableBox,31),
OBJECT_WITH_ACTS(137,-562,416,-1242,0,0,0,0x70000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(122,52,-3906,-922,0,0,0,0x2000000, bhvStar,31),
OBJECT_WITH_ACTS(22,0,-4375,781,0,0,0,0xb0000, bhvWarpPipe,31),
RETURN()
};
const LevelScript local_warps_sa_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,16,1,2,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,6,1,66,0),
WARP_NODE(241,6,1,67,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};
