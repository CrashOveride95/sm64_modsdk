#include <ultra64.h>
#include <gbi_add.h>
#include "sm64.h"
#include "surface_terrains.h"
#include "moving_texture_macros.h"
#include "level_misc_macros.h"
#include "macro_preset_names.h"
#include "special_preset_names.h"
#include "textures.h"
#include "dialog_ids.h"

#include "make_const_nonconst.h"
#include "levels/wdw/texture.inc.c"
#include "levels/wdw/areas/1/1/model.inc.c"
#include "levels/wdw/areas/1/2/model.inc.c"
#include "levels/wdw/areas/2/1/model.inc.c"
#include "levels/wdw/areas/2/2/model.inc.c"
#include "levels/wdw/areas/1/3/model.inc.c"
#include "levels/wdw/double_arrows/model.inc.c" // This is weird, but the only instance of a shared area object in a level. So we're treating it as a seperate model. It does not have collision anyway so it may have been combined in both areas by some sort of optimizer at compile time.
#include "levels/wdw/square_floating_platform/model.inc.c"
#include "levels/wdw/arrow_lift/model.inc.c"
#include "levels/wdw/water_level_diamond/model.inc.c"
#include "levels/wdw/hidden_platform/model.inc.c"
#include "levels/wdw/express_elevator/model.inc.c"
#include "levels/wdw/rectangular_floating_platform/model.inc.c"
#include "levels/wdw/rotating_platform/model.inc.c"
#include "levels/wdw/areas/1/collision.inc.c"
#include "levels/wdw/areas/1/macro.inc.c"
#include "levels/wdw/areas/2/collision.inc.c"
#include "levels/wdw/areas/2/macro.inc.c"
#include "levels/wdw/square_floating_platform/collision.inc.c"
#include "levels/wdw/arrow_lift/collision.inc.c"
#include "levels/wdw/water_level_diamond/collision.inc.c" // Unused
#include "levels/wdw/hidden_platform/collision.inc.c"
#include "levels/wdw/express_elevator/collision.inc.c"
#include "levels/wdw/rectangular_floating_platform/collision.inc.c"
#include "levels/wdw/rotating_platform/collision.inc.c"
#include "levels/wdw/areas/1/movtext.inc.c"
#include "levels/wdw/areas/2/movtext.inc.c"
