/* Library code: C that behaves like this game's own bytes. */
/* NAOMI library and Katana glue, small functions (batch a). */

extern float _builtin_sqrtf(float);

extern void kmGetFreeTextureMem(int *a, int *b);
extern void nlInitPalette(int a, int b);
extern void kmSetPaletteMode(int m);
extern void nlFogTableSet(float *t);   /* the NAOMI library's stub that jumps to kmSetFogTable */
extern void nlPushMatrix(int a);
extern void nlInvLightVector(int a);
extern void nlMultiMatrixRevOrder8(void *a);
extern void nlobjput_sub(void *a);
extern int nlSpriteFreeTextureOnce_Sub(void *a, int b, int c, int d);
extern void nlstripSetVertexContext(void *a);
extern void nldispstripSub(void *a, int b, void *c);
extern int nlstripSetVertexContextTex(void *a, void *b);
extern void nldispstripTexOfsSub(void *a, void *b);

extern char gPaletteMode;
extern int gPaletteModeTable[];
extern short g_0c2b7bc4;
extern int g_0c2b7bd8;
extern unsigned int g_0c2af118;
extern char g_0c2b34a8[];
extern int g_0c2b75b8[];
extern char g_0c14aab4[];
extern char g_0c14ab2c[];


void nlOuterProduct(float *a, float *b, float *out)
{
    out[2] = a[0] * b[1] - a[1] * b[0];
    out[1] = a[2] * b[0] - a[0] * b[2];
    out[0] = a[1] * b[2] - a[2] * b[1];
}
