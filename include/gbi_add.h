#ifndef _GBI_ADD_H_
#define	_GBI_ADD_H_

#define	G_CC_BLENDRGBFADEA          TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT
#define	G_CC_DECALFADE              0, 0, 0, TEXEL0, 0, 0, 0, ENVIRONMENT
#define	G_CC_DECALFADEA             0, 0, 0, TEXEL0, TEXEL0, 0, ENVIRONMENT, 0
#define	G_CC_MODULATEFADE           TEXEL0, 0, SHADE, 0, ENVIRONMENT, 0, TEXEL0, 0
#define	G_CC_MODULATEIFADE          TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT
#define	G_CC_MODULATERGBFADE        G_CC_MODULATEIFADE
#define	G_CC_MODULATEIFADEA         TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0
#define	G_CC_MODULATERGBFADEA       G_CC_MODULATEIFADEA
#define G_CC_SHADEFADEA             0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT

#define	G_CC_FADE                   SHADE, 0, ENVIRONMENT, 0, SHADE, 0, ENVIRONMENT, 0
#define	G_CC_FADEA                  TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, ENVIRONMENT, 0

/* Custom version of RM_AA_ZB_XLU_SURF with Z_UPD */
#define RM_CUSTOM_AA_ZB_XLU_SURF(clk)				\
	RM_AA_ZB_XLU_SURF(clk) | Z_UPD

#define G_RM_CUSTOM_AA_ZB_XLU_SURF	RM_CUSTOM_AA_ZB_XLU_SURF(1)
#define G_RM_CUSTOM_AA_ZB_XLU_SURF2	RM_CUSTOM_AA_ZB_XLU_SURF(2)

#ifdef	F3DEX_GBI_2
#define gsSPGeometryModeSetFirst(c, s)	gsSPGeometryMode(c, s)
#else	/* F3DEX_GBI_2 */
#define gsSPGeometryMode(c, s)						\
	gsSPClearGeometryMode(c),					\
	gsSPSetGeometryMode(s)
#define gsSPGeometryModeSetFirst(c, s)					\
	gsSPSetGeometryMode(s),						\
	gsSPClearGeometryMode(c)
#endif	/* F3DEX_GBI_2 */

#endif //_GBI_ADD_H_