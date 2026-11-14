/* Straight-line functions with calls and guards (batch gen_dv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_float { char p[0x20]; float v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int FUN_0c022794(int);
int FUN_0c0227a0(int, int, int, int, float, float, float, float, float);
int FUN_0c0228cc(void);
int FUN_0c027f28(int);
int FUN_0c027fbe(float, float);
int FUN_0c02803a(int, int, int, int);
float FUN_0c02806c(int);
int FUN_0c028196(void);
int FUN_0c0281b6(int);
int FUN_0c0281d4(int, int);
int FUN_0c02842e(int);
int FUN_0c058974(int, int, int);
int FUN_0c05f470(int, int, float, float);
int FUN_0c06017e(void);
float nlRoundOff(float);
int pfSize(float, float);
int FUN_0c053456(int a4, int a5, int a6);
int FUN_0c02303a(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8);
int FUN_0c022d9c(int a4, int a5, float f4, float f5);
int FUN_0c06105a(float f4);

int FUN_0c053456(int a4, int a5, int a6)
{
    register int t0;
    register int t2;
    register int t4;
    register float u22;
    register float u23;
    register float t24;

    t0 = a4;
    if ((int)a4 > (int)0x63) {
        t0 = 0x63;
    }
    t2 = a5;
    if ((int)a5 > (int)0x9) {
        t2 = 0x9;
    }
    t4 = a6;
    if ((int)a6 > (int)0x9) {
        t4 = 0x9;
    }
    FUN_0c028196();
    FUN_0c027f28(0x1);
    FUN_0c02803a(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
    pfSize(1.0f, 1.0f);
    FUN_0c0281b6(0xC10CB9C);
    if ((t0 != 0) || (t2 == 0)) {
        FUN_0c0281d4(t0, 0x0);
    }
    if (t2 != 0) {
        FUN_0c0281b6(0xC10CBA8);
        FUN_0c0281d4(t2, 0x0);
        FUN_0c0281b6(0xC10CBAC);
        FUN_0c0281d4(t4, 0x0);
    }
    u22 = (((struct o4_float *)0xC053610)->v);
    u23 = ((FUN_0c02806c((*(int *)0xC09DA20))) * ((((struct o0_float *)0xC053610)->v)));
    t24 = nlRoundOff((u22 - u23));
    FUN_0c027fbe(t24, ((((struct oC_float *)0xC053610)->v)));
    return FUN_0c02842e((*(int *)0xC09DA20));
}

int FUN_0c02303a(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8)
{
    register int t0;
    register int t27;

    t0 = (((struct o0_int *)0xC2709A8)->v);
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return t0;
                }
                return ((int (*)(void))(0xC023150))();
            }
            return FUN_0c0227a0(0x0, a5, a6, a7, f4, f5, f6, f7, f8);
        }
        if (((((struct o0_int *)0xC1ECCA8)->v)) == 1) {
            (((struct oC_uint *)0xC2709A8)->v) = (((((struct oC_int *)0xC2709A8)->v)) + 0x1);
            FUN_0c027f28(0x2);
            pfSize(1.0f, 1.0f);
            FUN_0c02803a(0xFFFFFF00, 0xFFFFFF00, 0xFFFFFF00, 0xFFFFFF00);
            FUN_0c058974(0x140, 0xE8, ((((struct oC_int *)0xC2709A8)->v)));
        }
        if (-4000.0f > ((((struct o30_float *)0xC175908)->v))) {
            FUN_0c0228cc();
            (((struct o0_uint *)0xC175908)->v) = 0x0;
            (((struct o0_uint *)0xC2709A8)->v) = 0x3;
            t27 = 0x54;
        } else {
            t27 = 0x84;
            if ((int)((((struct oC_int *)0xC1ECCA8)->v)) <= 0) {
                FUN_0c022794(0x1);
                (((struct o0_uint *)0xC175908)->v) = 0x0;
                (((struct o0_uint *)0xC2709A8)->v) = 0x2;
                t27 = 0x54;
            }
        }
        return t27;
    }
    (((struct o0_uint *)0xC2709A8)->v) = (((((struct o0_int *)0xC2709A8)->v)) + 0x1);
    (((struct oC_uint *)0xC2709A8)->v) = 0x0;
    return t0;
}

int FUN_0c022d9c(int a4, int a5, float f4, float f5)
{
    register int t1;

    if (a5 != 0) {
        (((struct o0_float *)0xC2709CC)->v) = (*(float *)0xC022E80);
        (((struct o4_float *)0xC2709CC)->v) = 1.0f;
        (((struct o8_float *)0xC2709CC)->v) = 1.0f;
        (((struct oC_float *)0xC2709CC)->v) = 0.0f;
        (((struct o10_float *)0xC2709CC)->v) = 0.0f;
        (((struct o14_float *)0xC2709CC)->v) = 1.0f;
        (((struct o18_float *)0xC2709CC)->v) = 1.0f;
        (((struct o1C_uint *)0xC2709CC)->v) = 0x0;
        (((struct o28_uint *)0xC2709CC)->v) = 0x200A;
        (((struct o20_float *)0xC2709CC)->v) = 1.0f;
        (((struct o24_uint *)0xC2709CC)->v) = 0x2;
        t1 = 0x2C;
    }
    (((struct o0_uint *)0xC270A10)->v) = a4;
    (((struct o4_uint *)0xC270A10)->v) = 0xFFFFFFFF;
    return t1;
}

int FUN_0c06105a(float f4)
{
    register int t0;
    register int t2;
    register float u3;

    t0 = *(signed char *)0xC2B9C5B;
    if ((t0 & 16) != 0) {
        t2 = (((struct o14_int *)0xC2B9CA0)->v);
        if (t2 != 0) {
            u3 = *(float *)0xC0610E8;
            FUN_0c05f470(0xC2B9C1C, t2, u3, u3);
            *(float *)0xC2B9C24 = 1.0f;
            (((struct o0_uint *)0xC2B9CA0)->v) = (((((struct o0_int *)0xC2B9CA0)->v)) + 0x1);
            return 0x8;
        }
        return FUN_0c06017e();
    }
    return t0;
}
