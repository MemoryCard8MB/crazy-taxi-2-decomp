/* Library code: C that behaves like this game's own bytes. */
/* Small SDK (nl*, km glue, libc) functions, batch e. */

extern float nlAbsSqrt(float x);
extern int vsprintf(void *buf, char *fmt, void *args);
extern int nlPuts(void *buf);
extern int nlLoadMatrix8(void *m);
extern int nlCopyMatrix(int n, void *m);
extern int nlSpriteLoadTextureOnce_Sub(void *p, void *name, int i, int z);
extern int nlstripSetVertexContextTex(void *a, int b);
extern int nldispstripTexSub(int a, int b);
extern int kmSetPaletteData(void *p);
extern int kmDiscardVertexBuffer(void *p);

extern char gPaletteDirty[];
extern char gPaletteData[];
extern short g_0c2aecc8[];
extern char g_0c2af368[];
extern float g_0c14a7bc;
extern char g_0c2b31dc[];
extern float g_0c14a958[];
extern int g_0c2b356c;
extern int g_0c2b77dc[];
extern int g_0c2b76fc;
extern int g_0c2b7940;
extern char g_0c14ab18[];


void nlInitPalette(char *table, int count)
{
    char *p;
    short *q;
    unsigned int n;

    *(char **)(gPaletteDirty + 24) = table;
    *(short *)(gPaletteDirty + 4) = count;
    p = table;
    n = count;
    while (n != 0) {
        *(short *)(p + 6) = -1;
        *(short *)p = -1;
        *(char *)(p + 2) = -1;
        *(short *)(p + 4) = 0;
        *(char *)(p + 3) = 0;
        p += 8;
        n--;
    }
    for (q = g_0c2aecc8; q < g_0c2aecc8 + 4; q++)
        *q = 0;
}


void paletteUpload(void)
{
    if (gPaletteDirty[0] != 0) {
        gPaletteDirty[0] = 0;
        kmSetPaletteData(gPaletteData);
    }
}


int nlGetPushedMatrix(int n)
{
    char *m;

    m = *(char **)(g_0c2b31dc + 8) - 64;
    if (n == 0)
        return nlLoadMatrix8(m);
    return nlCopyMatrix(n, m);
}


void nlGetAverageVector(float *a, float *b, float *out, float w1, float w2)
{
    float x, y, z;

    x = a[0] * w1;
    y = a[1] * w1;
    z = a[2] * w1;
    out[0] = x + w2 * b[0];
    out[1] = y + w2 * b[1];
    out[2] = z + w2 * b[2];
}


char *strncpy(char *dst, char *src, unsigned int n)
{
    char *d;
    unsigned int i;

    d = dst;
    i = 0;
    while (i < n && *src != 0) {
        *d++ = *src++;
        i++;
    }
    while (i < n) {
        *d++ = 0;
        i++;
    }
    return dst;
}
