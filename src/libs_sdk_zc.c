/* Library code: C that behaves like this game's own bytes. */
/* Wrappers that pass a fifth or sixth argument on the stack. Where the original leaves r6/r7 as they
   came in, the C takes them as parameters and passes them on. */

extern int kdSetDriverMode(int mode, int a, int b, int c);
extern int mpdrv_setcmd(int port, int cmd, void *p, int n, int e, int f);
extern int syG2Write(void *src, unsigned int dst, int size, int n, int e, int f);
extern int kmSetFogTableColor(int a, int b, int c, int d, int e);
extern int kmSetFogVertexColor(int a, int b, int c, int d, int e);
extern void mwRnaErrCallFunc(int *h, int b, int c, int d, char *msg);

extern void Voice_ShutUp(int ch);
extern void Voice_Request(int voice, int ch, int a, int b);


int pdGunSetFlashColor(int color, int b, int c, int d)
{
    return kdSetDriverMode(9, color, c, d);
}


int pdSetMode(int mode, int b, int c, int d)
{
    return kdSetDriverMode(5, mode, c, d);
}


int pdSetOptimize(int on, int b, int c, int d)
{
    return kdSetDriverMode(0, on, c, d);
}


int mpdrv_set_dreq_ns(int port)
{
    return mpdrv_setcmd(port, 1, 0, 0, 0, 0);
}


int mpdrv_set_allstatreq_ns(int port)
{
    return mpdrv_setcmd(port, 2, 0, 0, 0, 0);
}


int mpdrv_set_dreset_ns(int port)
{
    return mpdrv_setcmd(port, 3, 0, 0, 0, 0);
}


int mpdrv_set_dkill_ns(int port)
{
    return mpdrv_setcmd(port, 4, 0, 0, 0, 0);
}


int mpdrv_set_transagain_ns(int port)
{
    return mpdrv_setcmd(port, 252, 0, 0, 0, 0);
}


/* AR control: a two-word parameter block {32, value}. */
int mpdrv_set_arctrl_ns(int port, int value)
{
    int p[2];

    p[0] = 32;
    p[1] = value;
    return mpdrv_setcmd(port, 16, p, 1, value, 1);
}


/* The AICA real-time clock registers (date low / high word, write enable) through syG2Write. */
int syRtcAicaSetWriteFlag(void)
{
    short v = 1;

    syG2Write(&v, 0xA0710008, 4, 1, 0, 0);
    return 0;
}


/* Block read request: {block, (a << 24) | (b << 16) | c}, two words. */
int mpdrv_set_bread_ns(int port, int block, int a, int b, int c)
{
    int p[2];

    p[0] = block;
    p[1] = (a << 24) | (b << 16) | c;
    return mpdrv_setcmd(port, 11, p, 2, 0, 0);
}
