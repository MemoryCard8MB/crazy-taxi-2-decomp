/* Straight-line functions with calls and guards (batch gen_do): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[4]; } Stk4;
typedef struct { int w[1]; } Stk1;    /* one stack word: kmiSetTAEnvironment reads @(32,r15) only, its fifth argument */
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o34_int { char p[0x34]; int v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o38_int { char p[0x38]; int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o3C_uint { char p[0x3C]; unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
extern void _builtin_ftrv(float *, float *);
extern void _builtin_prefetch(void *);
int kmiCalcTABufferSize(int);
int kmiCreateRegionArray(int, int, int, int, int, int);
int kmiFBreset(void);
int kmiGetProfileInt(int, int, int);
int kmiWriteRegister(int, int);
int kmytex_FBAllocEntry(void);
int kmiSetTAEnvironment(Stk1 s);
int kmSetUserClipLevelAdjust(int a4, int a5);
int kmiFBinit(void);
float FUN_0c083770(int a4, int a5, int a6);

int kmiSetTAEnvironment(Stk1 s)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;

    *(unsigned int *)0xC300938 = s.w[0];
    t0 = 0x1;
    if ((s.w[0] & 0x1) != 0) {
        t0 = 0x0;
    }
    (((struct o0_uint *)0xC300D7C)->v) = ((unsigned int)(0x10000 & s.w[0]) >> 16);
    (((struct o4_uint *)0xC300D7C)->v) = ((unsigned int)((unsigned int)(0x60000 & s.w[0]) >> 16) >> 1);
    (((struct o8_uint *)0xC300D7C)->v) = ((unsigned int)((unsigned int)((unsigned int)(0x180000 & s.w[0]) >> 16) >> 2) >> 1);
    (((struct oC_uint *)0xC300D7C)->v) = ((unsigned int)(0x600000 & s.w[0]) >> 21);
    (((struct o10_uint *)0xC300D7C)->v) = ((unsigned int)(0x1800000 & s.w[0]) >> 23);
    (((struct o14_uint *)0xC300D7C)->v) = ((unsigned int)((unsigned int)((unsigned int)(s.w[0] & 0x6000000) >> 16) >> 8) >> 1);
    t1 = (((struct oC_int *)0xC300D1C)->v);
    (((struct o0_uint *)0xC300D1C)->v) = ((((unsigned int)t1 >> 2) << 1) + ((unsigned int)t1 >> 2));
    t1 = kmiCalcTABufferSize((((((struct o10_int *)0xC300D1C)->v)) * ((((struct o14_int *)0xC300D1C)->v))));
    t2 = 0x0;
    t3 = 0x0;
    t4 = 0x0;
    t5 = 0x0;
    for (;;) {
        *(unsigned int *)(((((t5 << 2) << 2) << 1) + 0xC300D40)) = ((*(int *)(((((t5 << 2) << 2) << 1) + 0xC300D3C))) + ((((struct oC_int *)0xC300D1C)->v)));
        if (((*(int *)0xC3008D4) & 32) != 0) {
            if (((((struct o18_int *)0xC300D1C)->v)) != 0) {
                *(unsigned int *)(((((t5 << 2) << 2) << 1) + 0xC300D40)) = ((*(int *)(((((t5 << 2) << 2) << 1) + 0xC300D40))) - 68);
                t6 = (((struct o14_int *)0xC300D1C)->v);
                t7 = (((struct o10_int *)0xC300D1C)->v);
                t8 = ((*(int *)(((((t5 << 2) << 2) << 1) + 0xC300D40))) - ((((((t7 * t6) << 1) + (t7 * t6)) << 2) << 2) << 1));
            } else {
                t6 = (((struct o14_int *)0xC300D1C)->v);
                t7 = (((struct o10_int *)0xC300D1C)->v);
                t8 = ((*(int *)(((((t5 << 2) << 2) << 1) + 0xC300D40))) - (((((t7 * t6) << 1) + (t7 * t6)) << 2) << 2));
            }
            *(unsigned int *)(((((t5 << 2) << 2) << 1) + 0xC300D40)) = t8;
        } else {
            t6 = (((struct o14_int *)0xC300D1C)->v);
            t7 = (((struct o10_int *)0xC300D1C)->v);
            *(unsigned int *)(((((t5 << 2) << 2) << 1) + 0xC300D40)) = ((*(int *)(((((t5 << 2) << 2) << 1) + 0xC300D40))) - (((((t7 * t6) << 1) + (t7 * t6)) << 2) << 1));
        }
        if (((*(int *)0xC3008D4) & 128) != 0) {
            *(unsigned int *)(((((t5 << 2) << 2) << 1) + 0xC300D40)) = ((*(int *)(((((t5 << 2) << 2) << 1) + 0xC300D40))) - 24);
        }
        if (((((struct o0_int *)0xC300D7C)->v)) == 0) {
            *(unsigned int *)(((0xC300D48 + t2) + 0x0)) = (((*(int *)((t2 + 0xC300D3C))) + ((((struct o0_int *)0xC300D1C)->v))) & 0xFFFFFFE0);
            *(unsigned int *)((t2 + 0xC300D4C)) = (((*(int *)((t2 + 0xC300D40))) - t1) & 0xFFFFFF80);
            *(unsigned int *)((t2 + 0xC300D50)) = ((*(int *)((t2 + 0xC300D48))) + t1);
        } else {
            *(unsigned int *)((t3 + 0xC300D48)) = (((*(int *)((t3 + 0xC300D40))) - t1) & 0xFFFFFF80);
            *(unsigned int *)((t3 + 0xC300D4C)) = (((*(int *)((t3 + 0xC300D3C))) + ((((struct o0_int *)0xC300D1C)->v))) & 0xFFFFFFE0);
            *(unsigned int *)((t3 + 0xC300D50)) = (*(int *)((t3 + 0xC300D48)));
        }
        *(unsigned int *)((t4 + 0xC300D54)) = (*(int *)((t4 + 0xC300D3C)));
        *(unsigned int *)((t4 + 0xC300D58)) = (((*(int *)((t4 + 0xC300D3C))) + ((((struct o0_int *)0xC300D1C)->v))) - 256);
        t5 = (t5 + 0x1);
        t4 = (t4 + 0x20);
        t3 = (t3 + 0x20);
        t2 = (t2 + 0x20);
        if ((int)t5 < (int)0x2) continue;
        break;
    }
    kmiCreateRegionArray(((((struct o10_int *)0xC300D1C)->v)), ((((struct o14_int *)0xC300D1C)->v)), 0x0, 0x1, 0x0, (t0));
    return (kmiCreateRegionArray(((((struct o10_int *)0xC300D1C)->v)), ((((struct o14_int *)0xC300D1C)->v)), 0x0, 0x1, 0x1, (t0)));
}

int kmSetUserClipLevelAdjust(int a4, int a5)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;

    if (((((struct o18_int *)0xC3008F0)->v)) == 1) {
        t1 = (((struct o4_int *)0xC300B90)->v);
        t2 = (((struct o1C_int *)0xC3008F0)->v);
        (((struct o0_uint *)0xC300AE8)->v) = (((((struct o0_int *)0xC300AE8)->v)) - (((t2 * t1) << 2) << 1));
        (((struct o4_uint *)0xC300AE8)->v) = (((((struct o4_int *)0xC300AE8)->v)) - (((t2 * t1) << 2) << 1));
    }
    if (a4 != 0) {
        if (a4 != 1) {
        } else {
            t1 = 0x0;
            if ((((((struct o0_int *)0xC3008F0)->v)) & 0x1) == 1) {
                t1 = 0x1;
            }
            if ((t1 != 1) && (t0 = (((struct o0_int *)0xC3008F0)->v), (t0 & 32) == 0)) {
                (((struct o1C_uint *)0xC3008F0)->v) = 0x8;
            } else {
                (((struct o1C_uint *)0xC3008F0)->v) = 0x10;
            }
            t0 = (((struct o4_int *)0xC300B90)->v);
            t1 = (((struct o1C_int *)0xC3008F0)->v);
            (((struct o0_uint *)0xC300AE8)->v) = (((((struct o0_int *)0xC300AE8)->v)) + (((t1 * t0) << 2) << 1));
            (((struct o4_uint *)0xC300AE8)->v) = ((((t1 * t0) << 2) << 1) + ((((struct o4_int *)0xC300AE8)->v)));
        }
    } else {
        (((struct o1C_uint *)0xC3008F0)->v) = 0x0;
    }
    t0 = (((struct o0_int *)0xC300B90)->v);
    t1 = (((struct o24_int *)0xC3008F0)->v);
    t2 = 0xC30090C;
    if ((int)((((struct o1C_int *)0xC3008F0)->v)) < (int)((((struct o34_int *)0xC3008F0)->v))) {
        t2 = 0xC300924;
    }
    t3 = *(int *)((t2 + 0x0));
    t2 = (t1 - t3);
    if ((unsigned int)(((((struct o34_int *)0xC3008F0)->v)) + (t1 - t3)) > (unsigned int)((((struct o24_int *)0xC3008F0)->v))) {
        t2 = (((((struct o24_int *)0xC3008F0)->v)) - ((((struct o1C_int *)0xC3008F0)->v)));
    }
    if ((unsigned int)((((struct o24_int *)0xC3008F0)->v)) < (unsigned int)t2) {
        (((struct o24_uint *)0xC3008F0)->v) = t2;
    }
    (((struct o0_uint *)0xC300B90)->v) = ((((t2 & 0x3FF) << 8) << 2) | (t0 & 0xFFF003FF));
    kmiWriteRegister(0x44, 0x0);
    kmiWriteRegister(0x5C, ((((struct o0_int *)0xC300B90)->v)));
    kmiWriteRegister(0x44, ((((struct o8_int *)0xC300B90)->v)));
    (((struct o18_uint *)0xC3008F0)->v) = a4;
    if (a5 != 0) {
        *(unsigned int *)((a5 + 0x0)) = ((((struct o1C_int *)0xC3008F0)->v));
    }
    return 0x0;
}

int kmiFBinit(void)
{
    register int t0;
    register int t1;

    if (((((struct o0_int *)0xC173DD4)->v)) == 1) {
        t0 = kmiGetProfileInt(0xC170CC0, 0xC170CCC, 0x0);
        if (t0 == 1) {
            *(unsigned int *)0xC3008E4 = 0x1000000;
            (((struct o4_uint *)0xC173DD4)->v) = 0x1000000;
            (((struct o8_uint *)0xC173DD4)->v) = 0x0;
            (((struct oC_uint *)0xC173DD4)->v) = 0x1000000;
            (((struct o10_uint *)0xC173DD4)->v) = 0x1000000;
            (((struct o14_uint *)0xC173DD4)->v) = 0x0;
            kmiWriteRegister(0xE4, 0x0);
        } else {
            *(unsigned int *)0xC3008E4 = 0x800000;
            (((struct o4_uint *)0xC173DD4)->v) = 0x800000;
            (((struct o8_uint *)0xC173DD4)->v) = 0x0;
            (((struct oC_uint *)0xC173DD4)->v) = 0x800000;
            (((struct o10_uint *)0xC173DD4)->v) = 0x800000;
            (((struct o14_uint *)0xC173DD4)->v) = 0x0;
            kmiWriteRegister(0xE4, 0x0);
        }
        kmiFBreset();
        (((struct o28_uint *)0xC173DD4)->v) = ((((struct oC_int *)0xC173DD4)->v));
        (((struct o3C_uint *)0xC173DD4)->v) = ((((struct o14_int *)0xC173DD4)->v));
        t0 = kmytex_FBAllocEntry();
        t1 = 0x3;
        if (t0 == 0) {
        } else {
            *(unsigned int *)((t0 + 0xC)) = ((((struct o8_int *)0xC173DD4)->v));
            *(unsigned int *)((t0 + 0x10)) = ((((struct oC_int *)0xC173DD4)->v));
            *(unsigned int *)((t0 + 0x8)) = ((((struct o20_int *)0xC173DD4)->v));
            (((struct o20_uint *)0xC173DD4)->v) = t0;
            *(unsigned int *)((t0 + 0x4)) = ((((struct o24_int *)0xC173DD4)->v));
            (((struct o24_uint *)0xC173DD4)->v) = t0;
            t1 = 0x0;
        }
        t0 = t1;
    } else {
        t1 = kmiGetProfileInt(0xC170CC0, 0xC170CCC, 0x0);
        if (t1 == 1) {
            *(unsigned int *)0xC3008E4 = 0x1000000;
            (((struct o4_uint *)0xC173DD4)->v) = 0x800000;
            (((struct o8_uint *)0xC173DD4)->v) = 0x0;
            (((struct oC_uint *)0xC173DD4)->v) = 0x800000;
            (((struct o10_uint *)0xC173DD4)->v) = 0x800000;
            (((struct o14_uint *)0xC173DD4)->v) = 0x800000;
            kmiWriteRegister(0xE4, 0x0);
        } else {
            *(unsigned int *)0xC3008E4 = 0x800000;
            (((struct o4_uint *)0xC173DD4)->v) = 0x400000;
            (((struct o8_uint *)0xC173DD4)->v) = 0x0;
            (((struct oC_uint *)0xC173DD4)->v) = 0x400000;
            (((struct o10_uint *)0xC173DD4)->v) = 0x400000;
            (((struct o14_uint *)0xC173DD4)->v) = 0x400000;
            kmiWriteRegister(0xE4, 0x0);
        }
        kmiFBreset();
        (((struct o28_uint *)0xC173DD4)->v) = ((((struct oC_int *)0xC173DD4)->v));
        (((struct o3C_uint *)0xC173DD4)->v) = ((((struct o14_int *)0xC173DD4)->v));
        t1 = kmytex_FBAllocEntry();
        t0 = 0x3;
        if (t1 != 0) {
            *(unsigned int *)((t1 + 0xC)) = ((((struct o8_int *)0xC173DD4)->v));
            *(unsigned int *)((t1 + 0x10)) = ((((struct oC_int *)0xC173DD4)->v));
            *(unsigned int *)((t1 + 0x8)) = ((((struct o20_int *)0xC173DD4)->v));
            (((struct o20_uint *)0xC173DD4)->v) = t1;
            *(unsigned int *)((t1 + 0x4)) = ((((struct o24_int *)0xC173DD4)->v));
            (((struct o24_uint *)0xC173DD4)->v) = t1;
            t1 = kmytex_FBAllocEntry();
            t0 = 0x3;
            if (t1 == 0) {
            } else {
                *(unsigned int *)((t1 + 0xC)) = ((((struct o10_int *)0xC173DD4)->v));
                *(unsigned int *)((t1 + 0x10)) = ((((struct o14_int *)0xC173DD4)->v));
                *(unsigned int *)((t1 + 0x8)) = ((((struct o34_int *)0xC173DD4)->v));
                (((struct o34_uint *)0xC173DD4)->v) = t1;
                *(unsigned int *)((t1 + 0x4)) = ((((struct o38_int *)0xC173DD4)->v));
                (((struct o38_uint *)0xC173DD4)->v) = t1;
                t0 = 0x0;
            }
        }
    }
    return t0;
}

float FUN_0c083770(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u7;
    register float u8;
    register float u9;
    float u14[4];
    register float u163;
    register float u164;
    register float u165;
    register float u166;
    register int t35;
    float u44[4];
    register int t56;
    float u66[4];
    register int t79;
    float u89[4];
    register int t102;
    float u111[4];
    register int t123;
    float u133[4];
    register int t146;
    float u156[4];

    t0 = *(int *)((a4 + 0x0));
    t1 = (a4 + 0x4);
    t2 = ((a4 + 0x4) + 0x20);
    if (((*(int *)(((a4 + 0x4) + 0x0))) & 1) == 0) {
        t1 = ((*(int *)(((a4 + 0x4) + 0x4))) + (((a4 + 0x4) + 0x20) - 24));
        t2 = (((a4 + 0x4) + 0x20) - 24);
    }
    u0 = *(float *)((t1 + 0x0));
    u1 = *(float *)(((t1 + 0x0) + 4));
    *(volatile float *)(((t1 + 0x8) + 0x0));
    u2 = (((struct o8_float *)((t1 + 0x8)))->v);
    u3 = *(float *)(((((t1 + 0x8) + 0x8) + 0x0) + 4));
    u4 = (((struct o8_float *)(((t1 + 0x8) + 0x8)))->v);
    u5 = *(float *)((((((t1 + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    u14[0] = u1;
    u14[1] = u0;
    u14[2] = (*(float *)((((t1 + 0x8) + 0x0) + 4)));
    u14[3] = 1.0f;
    _builtin_ftrv(u14, u14);
    t1 = t0;
    t0 = t2;
    t2 = a5;
    t3 = (a6 + 0x20);
    u0 = u5;
    u1 = u4;
    u4 = u3;
    u3 = u2;
    u2 = u14[0];
    u5 = u14[1];
    u6 = u14[2];
    for (;;) {
        *(float *)(((t3 - 0x8) + 0x0)) = u3;
        *(float *)((((t3 - 0x8) + 0x0) + 4)) = u4;
        t3 = (t3 - 0x8);
        t1 = (t1 - 0x1);
        t4 = *(int *)((t0 + 0x0));
        t0 = (t0 + 0x4);
        t5 = *(int *)((t0 + 0x0));
        t0 = (t0 + 0x4);
        if (t1 != 0) {
            if ((t4 & 1) != 0) {
                t6 = t0;
                t0 = (t0 + 0x18);
                t35 = (t6 - 8);
            } else {
                t35 = (t5 + t0);
            }
            t0 = (t0 + 0x20);
            u7 = *(float *)((t35 + 0x0));
            u8 = *(float *)(((t35 + 0x0) + 4));
            _builtin_prefetch((void *)t0);
            *(volatile float *)(((t35 + 0x8) + 0x0));
            u9 = *(float *)((((t35 + 0x8) + 0x0) + 4));
            u6 = (u6 * (1.0f / u2));
            u4 = (*(float *)(((((t35 + 0x8) + 0x8) + 0x0) + 4)));
            u3 = ((((struct o8_float *)((t35 + 0x8)))->v));
            u5 = (u5 * (1.0f / u2));
            *(float *)(((t3 - 0x8) + 0x0)) = u1;
            *(float *)((((t3 - 0x8) + 0x0) + 4)) = u0;
            t6 = t3;
            t3 = (t3 - 0x8);
            u44[0] = u8;
            u44[1] = u7;
            u44[2] = u9;
            u44[3] = 1.0f;
            _builtin_ftrv(u44, u44);
            *(float *)(((t3 - 0x8) + 0x0)) = (1.0f / u2);
            *(float *)((((t3 - 0x8) + 0x0) + 4)) = u6;
            t3 = (t3 - 0x8);
            t0 = (t0 - 32);
            *(float *)(((t3 - 0x8) + 0x0)) = u5;
            *(float *)((((t3 - 0x8) + 0x0) + 4)) = u2;
            t3 = (t3 - 0x8);
            *(unsigned int *)((t3 + 0x0)) = t6;
            u0 = (*(float *)((((((t35 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
            u1 = ((((struct o8_float *)(((t35 + 0x8) + 0x8)))->v));
            t1 = (t1 - 0x1);
            _builtin_prefetch((void *)t3);
            t3 = (t3 + 0x40);
            *(float *)(((t3 - 0x8) + 0x0)) = u3;
            *(float *)((((t3 - 0x8) + 0x0) + 4)) = u4;
            t3 = (t3 - 0x8);
            t6 = *(int *)((t0 + 0x0));
            t0 = (t0 + 0x4);
            t7 = *(int *)((t0 + 0x0));
            t0 = (t0 + 0x4);
            if (t1 != 0) {
                if ((t6 & 1) != 0) {
                    t8 = t0;
                    t0 = (t0 + 0x18);
                    t56 = (t8 - 8);
                } else {
                    t56 = (t7 + t0);
                }
                t0 = (t0 + 0x20);
                u2 = (*(float *)(((t56 + 0x0) + 4)));
                u5 = (*(float *)((t56 + 0x0)));
                _builtin_prefetch((void *)t0);
                *(volatile float *)(((t56 + 0x8) + 0x0));
                u6 = (*(float *)((((t56 + 0x8) + 0x0) + 4)));
                u4 = (*(float *)(((((t56 + 0x8) + 0x8) + 0x0) + 4)));
                u3 = ((((struct o8_float *)((t56 + 0x8)))->v));
                *(float *)(((t3 - 0x8) + 0x0)) = u1;
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = u0;
                t8 = t3;
                t3 = (t3 - 0x8);
                u66[0] = u2;
                u66[1] = u5;
                u66[2] = u6;
                u66[3] = 1.0f;
                _builtin_ftrv(u66, u66);
                u2 = u66[0];
                u5 = u66[1];
                u6 = u66[2];
                *(float *)(((t3 - 0x8) + 0x0)) = (1.0f / u44[0]);
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = (u44[2] * (1.0f / u44[0]));
                t3 = (t3 - 0x8);
                t0 = (t0 - 32);
                *(float *)(((t3 - 0x8) + 0x0)) = (u44[1] * (1.0f / u44[0]));
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = u44[0];
                t3 = (t3 - 0x8);
                t2 = (t2 + 0x40);
                *(unsigned int *)((t3 + 0x0)) = t8;
                u0 = (*(float *)((((((t56 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
                u1 = ((((struct o8_float *)(((t56 + 0x8) + 0x8)))->v));
                _builtin_prefetch((void *)t3);
                t3 = (t3 + 0x40);
                continue;
            }
            t1 = t7;
            if (((int)t6 > 0) && ((t6 & 128) != 0)) {
                t6 = *(int *)((t0 + 0x0));
                t0 = (t0 + 0x4);
                t7 = *(int *)((t0 + 0x0));
                t0 = (t0 + 0x4);
                if ((t6 & 1) != 0) {
                    t6 = t0;
                    t0 = (t0 + 0x18);
                    t79 = (t6 - 8);
                } else {
                    t79 = (t7 + t0);
                }
                t0 = (t0 + 0x20);
                u2 = (*(float *)(((t79 + 0x0) + 4)));
                u5 = (*(float *)((t79 + 0x0)));
                _builtin_prefetch((void *)t0);
                *(volatile float *)(((t79 + 0x8) + 0x0));
                u6 = (*(float *)((((t79 + 0x8) + 0x0) + 4)));
                u4 = (*(float *)(((((t79 + 0x8) + 0x8) + 0x0) + 4)));
                u3 = ((((struct o8_float *)((t79 + 0x8)))->v));
                *(float *)(((t3 - 0x8) + 0x0)) = u1;
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = u0;
                t6 = (t3 >> 1);
                t3 = (t3 - 0x8);
                u89[0] = u2;
                u89[1] = u5;
                u89[2] = u6;
                u89[3] = 1.0f;
                _builtin_ftrv(u89, u89);
                u2 = u89[0];
                u5 = u89[1];
                u6 = u89[2];
                *(float *)(((t3 - 0x8) + 0x0)) = (1.0f / u44[0]);
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = (u44[2] * (1.0f / u44[0]));
                t3 = (t3 - 0x8);
                t0 = (t0 - 32);
                *(float *)(((t3 - 0x8) + 0x0)) = (u44[1] * (1.0f / u44[0]));
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = u44[0];
                t3 = (t3 - 0x8);
                t2 = (t2 + 0x40);
                *(unsigned int *)((t3 + 0x0)) = t6;
                u0 = (*(float *)((((((t79 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
                u1 = ((((struct o8_float *)(((t79 + 0x8) + 0x8)))->v));
                _builtin_prefetch((void *)t3);
                t3 = (t3 + 0x40);
                continue;
            }
            u163 = u44[2]; u164 = (1.0f / u44[0]); u165 = u44[0]; u166 = u44[1]; break;
        }
        t1 = t5;
        if (((int)t4 > 0) && ((t4 & 128) != 0)) {
            t4 = *(int *)((t0 + 0x0));
            t0 = (t0 + 0x4);
            t5 = *(int *)((t0 + 0x0));
            t0 = (t0 + 0x4);
            if ((t4 & 1) != 0) {
                t4 = t0;
                t0 = (t0 + 0x18);
                t102 = (t4 - 8);
            } else {
                t102 = (t5 + t0);
            }
            t0 = (t0 + 0x20);
            u7 = *(float *)((t102 + 0x0));
            u8 = *(float *)(((t102 + 0x0) + 4));
            _builtin_prefetch((void *)t0);
            *(volatile float *)(((t102 + 0x8) + 0x0));
            u9 = *(float *)((((t102 + 0x8) + 0x0) + 4));
            u6 = (u6 * (1.0f / u2));
            u4 = (*(float *)(((((t102 + 0x8) + 0x8) + 0x0) + 4)));
            u3 = ((((struct o8_float *)((t102 + 0x8)))->v));
            u5 = (u5 * (1.0f / u2));
            *(float *)(((t3 - 0x8) + 0x0)) = u1;
            *(float *)((((t3 - 0x8) + 0x0) + 4)) = u0;
            t4 = (t3 >> 1);
            t3 = (t3 - 0x8);
            u111[0] = u8;
            u111[1] = u7;
            u111[2] = u9;
            u111[3] = 1.0f;
            _builtin_ftrv(u111, u111);
            *(float *)(((t3 - 0x8) + 0x0)) = (1.0f / u2);
            *(float *)((((t3 - 0x8) + 0x0) + 4)) = u6;
            t3 = (t3 - 0x8);
            t0 = (t0 - 32);
            *(float *)(((t3 - 0x8) + 0x0)) = u5;
            *(float *)((((t3 - 0x8) + 0x0) + 4)) = u2;
            t3 = (t3 - 0x8);
            *(unsigned int *)((t3 + 0x0)) = t4;
            u0 = (*(float *)((((((t102 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
            u1 = ((((struct o8_float *)(((t102 + 0x8) + 0x8)))->v));
            t1 = (t1 - 0x1);
            _builtin_prefetch((void *)t3);
            t3 = (t3 + 0x40);
            *(float *)(((t3 - 0x8) + 0x0)) = u3;
            *(float *)((((t3 - 0x8) + 0x0) + 4)) = u4;
            t3 = (t3 - 0x8);
            t4 = *(int *)((t0 + 0x0));
            t0 = (t0 + 0x4);
            t5 = *(int *)((t0 + 0x0));
            t0 = (t0 + 0x4);
            if (t1 != 0) {
                if ((t4 & 1) != 0) {
                    t6 = t0;
                    t0 = (t0 + 0x18);
                    t123 = (t6 - 8);
                } else {
                    t123 = (t5 + t0);
                }
                t0 = (t0 + 0x20);
                u2 = (*(float *)(((t123 + 0x0) + 4)));
                u5 = (*(float *)((t123 + 0x0)));
                _builtin_prefetch((void *)t0);
                *(volatile float *)(((t123 + 0x8) + 0x0));
                u6 = (*(float *)((((t123 + 0x8) + 0x0) + 4)));
                u4 = (*(float *)(((((t123 + 0x8) + 0x8) + 0x0) + 4)));
                u3 = ((((struct o8_float *)((t123 + 0x8)))->v));
                *(float *)(((t3 - 0x8) + 0x0)) = u1;
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = u0;
                t6 = t3;
                t3 = (t3 - 0x8);
                u133[0] = u2;
                u133[1] = u5;
                u133[2] = u6;
                u133[3] = 1.0f;
                _builtin_ftrv(u133, u133);
                u2 = u133[0];
                u5 = u133[1];
                u6 = u133[2];
                *(float *)(((t3 - 0x8) + 0x0)) = (1.0f / u111[0]);
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = (u111[2] * (1.0f / u111[0]));
                t3 = (t3 - 0x8);
                t0 = (t0 - 32);
                *(float *)(((t3 - 0x8) + 0x0)) = (u111[1] * (1.0f / u111[0]));
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = u111[0];
                t3 = (t3 - 0x8);
                t2 = (t2 + 0x40);
                *(unsigned int *)((t3 + 0x0)) = t6;
                u0 = (*(float *)((((((t123 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
                u1 = ((((struct o8_float *)(((t123 + 0x8) + 0x8)))->v));
                _builtin_prefetch((void *)t3);
                t3 = (t3 + 0x40);
                continue;
            }
            t1 = t5;
            if (((int)t4 > 0) && ((t4 & 128) != 0)) {
                t4 = *(int *)((t0 + 0x0));
                t0 = (t0 + 0x4);
                t5 = *(int *)((t0 + 0x0));
                t0 = (t0 + 0x4);
                if ((t4 & 1) != 0) {
                    t4 = t0;
                    t0 = (t0 + 0x18);
                    t146 = (t4 - 8);
                } else {
                    t146 = (t5 + t0);
                }
                t0 = (t0 + 0x20);
                u2 = (*(float *)(((t146 + 0x0) + 4)));
                u5 = (*(float *)((t146 + 0x0)));
                _builtin_prefetch((void *)t0);
                *(volatile float *)(((t146 + 0x8) + 0x0));
                u6 = (*(float *)((((t146 + 0x8) + 0x0) + 4)));
                u4 = (*(float *)(((((t146 + 0x8) + 0x8) + 0x0) + 4)));
                u3 = ((((struct o8_float *)((t146 + 0x8)))->v));
                *(float *)(((t3 - 0x8) + 0x0)) = u1;
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = u0;
                t4 = (t3 >> 1);
                t3 = (t3 - 0x8);
                u156[0] = u2;
                u156[1] = u5;
                u156[2] = u6;
                u156[3] = 1.0f;
                _builtin_ftrv(u156, u156);
                u2 = u156[0];
                u5 = u156[1];
                u6 = u156[2];
                *(float *)(((t3 - 0x8) + 0x0)) = (1.0f / u111[0]);
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = (u111[2] * (1.0f / u111[0]));
                t3 = (t3 - 0x8);
                t0 = (t0 - 32);
                *(float *)(((t3 - 0x8) + 0x0)) = (u111[1] * (1.0f / u111[0]));
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = u111[0];
                t3 = (t3 - 0x8);
                t2 = (t2 + 0x40);
                *(unsigned int *)((t3 + 0x0)) = t4;
                u0 = (*(float *)((((((t146 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
                u1 = ((((struct o8_float *)(((t146 + 0x8) + 0x8)))->v));
                _builtin_prefetch((void *)t3);
                t3 = (t3 + 0x40);
                continue;
            }
            u163 = u111[2]; u164 = (1.0f / u111[0]); u165 = u111[0]; u166 = u111[1]; break;
        }
        u6 = (u6 * (1.0f / u2));
        u5 = (u5 * (1.0f / u2));
        *(float *)(((t3 - 0x8) + 0x0)) = u1;
        *(float *)((((t3 - 0x8) + 0x0) + 4)) = u0;
        t4 = (t3 >> 1);
        t3 = (t3 - 0x8);
        t0 = (t0 - 8);
        *(float *)(((t3 - 0x8) + 0x0)) = (1.0f / u2);
        *(float *)((((t3 - 0x8) + 0x0) + 4)) = u6;
        t3 = (t3 - 0x8);
        t2 = (t2 + 0x20);
        *(float *)(((t3 - 0x8) + 0x0)) = u5;
        *(float *)((((t3 - 0x8) + 0x0) + 4)) = u2;
        t3 = (t3 - 0x8);
        *(unsigned int *)((t3 + 0x0)) = t4;
        _builtin_prefetch((void *)t3);
        t3 = (t3 + 0x20);
        return u0;
    }
    *(float *)(((t3 - 0x8) + 0x0)) = u1;
    *(float *)((((t3 - 0x8) + 0x0) + 4)) = u0;
    *(float *)((((t3 - 0x8) - 0x8) + 0x0)) = u164;
    *(float *)(((((t3 - 0x8) - 0x8) + 0x0) + 4)) = (u163 * u164);
    *(float *)(((((t3 - 0x8) - 0x8) - 0x8) + 0x0)) = (u166 * u164);
    *(float *)((((((t3 - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = u165;
    *(unsigned int *)(((((t3 - 0x8) - 0x8) - 0x8) + 0x0)) = (t3 >> 1);
    _builtin_prefetch((void *)(((t3 - 0x8) - 0x8) - 0x8));
    return u0;
}
