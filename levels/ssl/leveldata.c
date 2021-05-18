#include <PR/ultratypes.h>
#include <PR/gbi.h>
#include <gbi_add.h>

#include "dialog_ids.h"
#include "level_misc_macros.h"
#include "macros.h"
#include "macro_preset_names.h"
#include "moving_texture_macros.h"
#include "special_preset_names.h"
#include "surface_terrains.h"
#include "textures.h"
#include "types.h"

#include "make_const_nonconst.h"
// LEVEL DATA
#include "levels/ssl/texture.inc.c"
// This is an oddity, but it is assumed this because of the likelyhood SSL's
// course used to be smaller in a prototype build and that moving areas around
// caused this discrepency. (See the 3 Star Course theory)
#include "levels/ssl/areas/2/4/model.inc.c"
#include "levels/ssl/areas/1/1/model.inc.c"
#include "levels/ssl/areas/1/2/model.inc.c"
#include "levels/ssl/areas/1/3/model.inc.c"
#include "levels/ssl/areas/1/4/model.inc.c"
#include "levels/ssl/pyramid_top/model.inc.c"
#include "levels/ssl/tox_box/model.inc.c"
#include "levels/ssl/areas/1/collision.inc.c"
#include "levels/ssl/areas/1/macro.inc.c"
#include "levels/ssl/pyramid_top/collision.inc.c"
#include "levels/ssl/tox_box/collision.inc.c"
#include "levels/ssl/areas/1/movtext.inc.c"
#include "levels/ssl/areas/2/1/model.inc.c"
#include "levels/ssl/areas/2/2/model.inc.c"
#include "levels/ssl/areas/2/3/model.inc.c"
#include "levels/ssl/areas/3/1/model.inc.c"
#include "levels/ssl/areas/3/2/model.inc.c"
#include "levels/ssl/grindel/model.inc.c"
#include "levels/ssl/spindel/model.inc.c"
#include "levels/ssl/moving_pyramid_wall/model.inc.c"
#include "levels/ssl/pyramid_elevator/model.inc.c"
#include "levels/ssl/eyerok_col/model.inc.c" // Blank file
#include "levels/ssl/areas/2/collision.inc.c"
#include "levels/ssl/areas/3/collision.inc.c"
#include "levels/ssl/areas/2/macro.inc.c"
#include "levels/ssl/areas/3/macro.inc.c"
#include "levels/ssl/grindel/collision.inc.c"
#include "levels/ssl/spindel/collision.inc.c"
#include "levels/ssl/moving_pyramid_wall/collision.inc.c"
#include "levels/ssl/pyramid_elevator/collision.inc.c"
#include "levels/ssl/eyerok_col/collision.inc.c"
#include "levels/ssl/areas/2/movtext.inc.c"
