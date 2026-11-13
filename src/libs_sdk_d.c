/* Library code: C that behaves like this game's own bytes. */
/* Small SDK (nl library) functions: texture and font settings, tri-put attributes, vector helpers, string compare. */

extern int g_0c2aec8c[];
extern int g_0c14a7c0;
extern int g_0c2af0c8;
extern int g_0c2af0cc;
extern float g_0c14a948[];
extern unsigned int g_0c14aa70;
extern unsigned int *g_0c2b76c4;
extern int g_0c14a834[];
extern int g_0c14a644;
extern short g_0c2b7bc4;
extern char g_0c2aedd8[];
extern char g_0c14ab04[];

void nlReloadPalette(int index);
int kmfGetInternalSystemMetrics(char *p);
float nlSinf(float x);
void nlRenderTextureSet_Sub(int a, int b, int c, int d, int e);
void nlTranslate(float x, float y, float z);
void nlObjPutLoadTexture(int *p, int tex);
void kmSetCheapShadowMode(int mode);
void nlFreePalette(int index);
int nlstripSetVertexContextTex(char *a, int b);
void nldispstripTexSub(int a, int b);
int _slow_strcmp1(char *a, char *b);



void nlSubVector(float *a, float *b)
{
    a[0] = a[0] - b[0];
    a[1] = a[1] - b[1];
    a[2] = a[2] - b[2];
}


void nlTriPutTextureInit(int *p, int v, int tex)
{
    int i;
    for (i = 0; i < 54; i++)
        p[i] = g_0c14a834[i];
    p[14] = v;
    nlObjPutLoadTexture(p, tex);
}


void nlLineBlendFunc(unsigned int src, unsigned int dst)
{
    g_0c14aa70 &= 0x1FFFFFFF;
    g_0c14aa70 &= 0xE3FFFFFF;
    g_0c14aa70 |= ((src & 7) << 29) | ((dst & 7) << 26);
}
