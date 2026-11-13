/* Straight-line functions with calls and guards (batch gen_al): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uint { unsigned int v; };
struct o10E8_int { char p[0x10E8]; int v; };
struct o2_short { char p[0x2]; short v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
int FUN_0c16f6d4(void);
int FUN_0c16f726(void);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int kdRecvFrame(void);
int kmCreateTextureSurface(int, int, int, int);
int kmLoadTexture(int, int, int, int);
int nlCreateTextureParamA(int);
int nlLoadDummyTexture(void);
void ADXCRS_Lock(int a4, int a5);
int FUN_0c16d896(void);
int FUN_0c16d810(void);

int nlLoadDummyTexture(void)
{
    kmCreateTextureSurface(0xC2BB3F0, ((((struct o0_short *)0xC113898)->v)), ((((struct o2_short *)0xC113898)->v)), ((((struct o4_int *)0xC113898)->v)));
    kmLoadTexture(0xC2BB3F0, ((((struct o8_int *)0xC113898)->v)), 0x0, 0x0);
    return nlCreateTextureParamA(0xC2BB3F0);
}

void ADXCRS_Lock(int a4, int a5)
{
    register int t1;

    if (((((struct o0_int *)0xC1742F8)->v)) == 0) {
        t1 = _builtin_get_imask();
        _builtin_set_imask(0xF);
        (((struct o4_uint *)0xC1742F8)->v) = t1;
    }
    (((struct o0_uint *)0xC1742F8)->v) = (((((struct o0_int *)0xC1742F8)->v)) + 0x1);
}

int FUN_0c16d896(void)
{
    register int t0;

    t0 = FUN_0c16f726();
    if (((((struct o10E8_int *)((*(int *)0xC30817C)))->v)) != 0) {
        kdRecvFrame();
    }
    return t0;
}

int FUN_0c16d810(void)
{
    register int t0;

    t0 = FUN_0c16f6d4();
    if (((((struct o10E8_int *)((*(int *)0xC30817C)))->v)) != 0) {
        kdRecvFrame();
    }
    return t0;
}
