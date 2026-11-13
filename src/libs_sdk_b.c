/* Library code: C that behaves like this game's own bytes. */
/* Small SDK (nl library) functions: texture surface tables, triangle/object put attributes, matrix helpers,
   sprite and sound stream setup, memset. */

extern int *g_0c2b29c0;
extern int g_0c2b29c4;
extern int g_0c2b317c;
extern int g_0c2b3184;
extern int g_0c2af364;
extern int g_0c14a7b8;
extern char g_0c2b3390[];
extern float g_0c14a910;
extern float g_0c2b316c;
extern void (*g_0c14a9a8[])(int);
extern float g_0c2b76cc[2];
extern float g_0c2b76d4[2];
extern char g_0c0d68d9[];
extern int g_0c2b783c[];
extern char g_0c14aadc[];
extern char *g_0c2b7bd8;

extern int nlPushMatrix(void *m);
extern void nlUnitMatrix();
extern void nlPopMatrix(int n);
extern float nlFloor(float x);
extern float nlLog(float x);
extern float nlScalor(float *v);
extern void nlCalcPoint(int a, int b);
extern void nlstripSetVertexContext(void *ctx);
extern void nldispstripSub(int a, int b, int c);
extern void kmRender();
extern void kmFlipFrameBuffer();
extern void kmSetFogDensity(int w);


void nlScaleUnitVector(float *dst, float *src, float s)
{
    float k = s / nlScalor(src);

    dst[0] = src[0] * k;
    dst[1] = src[1] * k;
    dst[2] = src[2] * k;
}


void nlTriPutSetClipping(char *p, float x0, float y0, float x1, float y1)
{
    float *q = (float *)(p + 24);

    q[4] = x0;
    q[5] = y0;
    q[6] = x1;
    q[7] = y1;
    ((float *)p)[2] = x0;
    ((float *)p)[3] = y0;
    ((float *)p)[4] = x1;
    ((float *)p)[5] = y1;
}


void *memset(void *dst, int val, unsigned int n)
{
    unsigned int i;
    char *p = (char *)dst;

    for (i = 0; i < n; i++)
        *p++ = (char)val;
    return dst;
}
