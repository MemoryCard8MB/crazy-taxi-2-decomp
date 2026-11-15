/* Straight-line functions with calls and guards (batch gen_as): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o20_int { char p[0x20]; int v; };
struct o20_short { char p[0x20]; short v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o24_float { char p[0x24]; float v; };
struct o24_int { char p[0x24]; int v; };
struct o28_float { char p[0x28]; float v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o3C_short { char p[0x3C]; short v; };
struct o3C_ushort { char p[0x3C]; unsigned short v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int CheckAreaGrid(int, int);
int FUN_0c010184(int);
int FUN_0c010454(int);
int FUN_0c0106f4(int);
int FUN_0c0108fe(int);
int FUN_0c010fd4(int);
int FUN_0c011522(int);
int FUN_0c0120cc(int);
int FUN_0c0128ec(int);
int FUN_0c012ac4(int);
int FUN_0c012e78(int);
int FUN_0c013a30(int);
int FUN_0c013b2c(int);
int FUN_0c01b81c(int, int, int, float);
extern int FUN_0c01b87a();
int FUN_0c01b920(int, float, float);
int FUN_0c01e13c(float);
int FUN_0c020e6c(int, int, int, int, int);
int FUN_0c027f28(int);
int FUN_0c027fbe(float, float);
int FUN_0c02803a(int, int, int, int);
float FUN_0c02806c(int);
int FUN_0c028196(void);
int FUN_0c0281b6(int);
int FUN_0c0281d4(int, int);
int FUN_0c02842e(int);
void FUN_0c02e7a6(int, int);
int FUN_0c02f208(void);
int FUN_0c072150(int, int, int);
float FUN_0c073c60(int);
extern float _builtin_sqrtf(float);
int carFlipTravelDir(int);
int getAreaFromPos(int, int);
float nlLength(int, int);
int nlSubVector3op(int, int, int);
int nlUnitMatrix(void);
int pfSize(float, float);
int FUN_0c0148f4(void);

int FUN_0c0148f4(void)
{
    int stk[15];
    register int t2;
    register float u10;
    register float u11;
    register float u15;
    register float u13;
    register float u17;
    register float u21;
    register float u19;
    int t51;
    register float t81;
    register float u99;
    register float u100;
    register float u101;
    register float u102;
    register int t110;
    register float u117;
    register float u119;
    register float u112;
    register int t130;
    register float u198;
    register float u199;
    register float u231;
    int t238;
    register int t253;
    register float u278;
    register float u279;
    register float t283;
    register float t297;
    int t82;
    float u95;
    int t254;
    int t300;
    float s1;
    float s2;

    nlUnitMatrix();
    FUN_0c013b2c(0xC1758B4);
    t2 = (((struct o18_int *)0xC175C68)->v);
    if ((int)t2 < (int)0x8) {
        FUN_0c010184(0x0);
    } else {
        if ((int)t2 < (int)0x10) {
            FUN_0c010454(0x0);
        } else {
            FUN_0c0106f4(0x0);
        }
    }
    u10 = (((struct o3C_float *)0xC1EC7C4)->v);
    if (u10 > 0.0f) {
        u11 = (0.0399999991f - u10);
        if ((0.0399999991f - u10) > 0.0f) {
            u11 = 0.0f;
        }
        u15 = u11;
        if (u11 > -0.0599999987f) {
            u13 = (u11 * u11);
            u15 = (-(u13 * 16.6666679f));
        }
        (((struct o20_ushort *)0xC1759AC)->v) = (int)(u15 * 4500.0f);
    } else {
        if (0.0f > u10) {
            u17 = (-0.0399999991f - u10);
            if (0.0f > (-0.0399999991f - u10)) {
                u17 = 0.0f;
            }
            u21 = u17;
            if (0.0599999987f > u17) {
                u19 = (u17 * u17);
                u21 = (u19 * 16.6666679f);
            }
            (((struct o20_ushort *)0xC1759AC)->v) = (int)(u21 * 4500.0f);
        } else {
            (((struct o20_ushort *)0xC1759AC)->v) = 0x0;
        }
    }
    if ((int)((((struct o20_short *)0xC1759AC)->v)) > (int)0x1100) {
        (((struct o20_ushort *)0xC1759AC)->v) = 0x1100;
    }
    if ((int)((((struct o20_short *)0xC1759AC)->v)) < (int)0xFFFFEF00) {
        (((struct o20_ushort *)0xC1759AC)->v) = 0xFFFFEF00;
    }
    (((struct o24_float *)0xC1759AC)->v) = ((((struct o0_float *)0xC1EC804)->v));
    (((struct o24_float *)0xC1759AC)->v) = (((((struct o24_float *)0xC1759AC)->v)) * 1.20000005f);
    (((struct o24_float *)0xC1759AC)->v) = (((((struct o24_float *)0xC1759AC)->v)) - 0.200000003f);
    if (0.0f > ((((struct o24_float *)0xC1759AC)->v))) {
        (((struct o24_float *)0xC1759AC)->v) = 0.0f;
    }
    if (((((struct o24_float *)0xC1759AC)->v)) > 1.0f) {
        (((struct o24_float *)0xC1759AC)->v) = 1.0f;
    }
    (((struct o28_float *)0xC1759AC)->v) = ((((struct o4_float *)0xC1EC804)->v));
    (((struct o28_float *)0xC1759AC)->v) = (((((struct o28_float *)0xC1759AC)->v)) * 1.29999995f);
    (((struct o28_float *)0xC1759AC)->v) = (((((struct o28_float *)0xC1759AC)->v)) - 0.300000012f);
    if (0.0f > ((((struct o28_float *)0xC1759AC)->v))) {
        (((struct o28_float *)0xC1759AC)->v) = 0.0f;
    }
    if (((((struct o28_float *)0xC1759AC)->v)) > 1.0f) {
        (((struct o28_float *)0xC1759AC)->v) = 1.0f;
    }
    t51 = (((struct oC_int *)0xC1758FC)->v);
    if ((t51 != 0) && (t51 != 3)) {
        if (((((struct oC_int *)0xC1758FC)->v)) == 1) {
            (((struct o30_uint *)0xC1759AC)->v) = 0x1;
            (((struct oC_uint *)0xC1758FC)->v) = 0x2;
        }
    } else {
        (((struct o30_uint *)0xC1759AC)->v) = 0x0;
    }
    FUN_0c0108fe(0xC1758B4);
    if (((((struct oC_int *)0xC1758FC)->v)) == 0) {
        (((struct o24_float *)0xC1759AC)->v) = (((((struct o24_float *)0xC1759AC)->v)) * 0.00999999978f);
    }
    if (((((struct o0_int *)0xC1EC71C)->v)) != 2) {
        (((struct o20_uint *)0xC1758FC)->v) = (getAreaFromPos(0xC175930, ((((struct o20_int *)0xC1758FC)->v))));
        if ((int)((((struct o20_int *)0xC1758FC)->v)) < 0) {
            (((struct o20_uint *)0xC1758FC)->v) = 0x0;
        }
    } else {
        (((struct o20_uint *)0xC1758FC)->v) = (CheckAreaGrid(0xC175930, ((((struct o20_int *)0xC1758FC)->v))));
    }
    if ((((((struct o20_int *)0xC1758B4)->v)) & 0x80CFFFFE) == 0) {
        *(unsigned int *)0xC118700 = 0x0;
    } else {
        t81 = nlLength(0xC175930, 0xC1758B4);
        if ((t81 > 17.5f) && (t82 = *(int *)0xC118700, (int)t82 < (int)0x4)) {
            (((struct o0_float *)0xC175A14)->v) = (((((struct o0_float *)0xC175A14)->v)) * 0.850000024f);
            (((struct oC_float *)0xC1759AC)->v) = (((((struct oC_float *)0xC1759AC)->v)) * 0.850000024f);
            FUN_0c072150((unsigned short)((((struct o0_short *)0xC1759AC)->v)), 0xC1759B4, 0xC1759BC);
            (((struct o8_float *)0xC1759AC)->v) = (((((struct o8_float *)0xC1759AC)->v)) * ((((struct o0_float *)0xC175A14)->v)));
            (((struct o10_float *)0xC1759AC)->v) = (((((struct o10_float *)0xC1759AC)->v)) * ((((struct o0_float *)0xC175A14)->v)));
            *(unsigned int *)0xC118700 = ((*(int *)0xC118700) + 0x1);
        } else {
            (((struct o34_float *)0xC1758FC)->v) = ((((struct o0_float *)0xC1758B4)->v));
            (((struct o3C_float *)0xC1758FC)->v) = ((((struct o8_float *)0xC1758B4)->v));
            if ((((((struct oC_float *)0xC1758B4)->v)) == 0.0f) && (u95 = (((struct o14_float *)0xC1758B4)->v), u95 == 0.0f)) {
                (((struct o0_float *)0xC175A14)->v) = 0.0f;
            } else {
                FUN_0c01b920(((int)stk + 4), (-((((struct oC_float *)0xC1758B4)->v))), ((((struct o14_float *)0xC1758B4)->v)));
                u99 = (((struct oC_float *)0xC1758B4)->v);
                u100 = (((struct o14_float *)0xC1758B4)->v);
                u101 = (u100 * u100);
                u101 = u101 + u99 * u99;
                s1 = _builtin_sqrtf(u101);
                u102 = (s1 * 0.970000029f);
                if ((s1 * 0.970000029f) > 13.0f) {
                    u102 = 13.0f;
                }
                if ((((((struct o20_int *)0xC1758B4)->v)) & 0xFFFFE) != 0) {
                    (((struct o0_float *)0xC175A14)->v) = u102;
                    (((struct o0_ushort *)0xC1759AC)->v) = (*(short *)(((int)stk + 4)));
                    (((struct o3C_ushort *)0xC175A14)->v) = (((int (*)(int, int, float, float))(FUN_0c01b87a))(((((struct o0_short *)0xC1759AC)->v)), (*(short *)0xC17593E), 0.00999999978f, u99));
                } else {
                    t110 = (((struct o20_int *)0xC1758B4)->v);
                    u117 = u102;
                    u119 = s1;
                    if ((t110 & 0x80000000) != 0) {
                        u112 = 0.800000012f;
                        if (u102 > 6.0f) {
                            u112 = 0.600000024f;
                        }
                        (((struct oC_float *)0xC1759AC)->v) = (((((struct oC_float *)0xC1759AC)->v)) * 0.899999976f);
                        u117 = (u102 * u112);
                        u119 = 0.899999976f;
                    }
                    (((struct o3C_ushort *)0xC175A14)->v) = (int)(((((struct o4_float *)0xC1758FC)->v)) * 8344.18262f);
                    if (_builtin_fabsf(((((struct o0_float *)0xC175A14)->v))) > (1.0f + 1.0f)) {
                        (((struct o0_float *)0xC175A14)->v) = u117;
                        (((struct o0_ushort *)0xC1759AC)->v) = (*(short *)(((int)stk + 4)));
                        (((struct o3C_ushort *)0xC175A14)->v) = (((((struct o3C_short *)0xC175A14)->v)) + (((int (*)(int, int, float, float))(FUN_0c01b87a))(((((struct o0_short *)0xC1759AC)->v)), (*(short *)0xC17593E), 0.0199999996f, u99)));
                    } else {
                        t130 = ((int (*)(int, int, float, float))(FUN_0c01b87a))(((((struct o0_short *)0xC1759AC)->v)), (*(short *)(((int)stk + 4))), 1.0f, u99);
                        if (((((struct o0_float *)0xC175A14)->v)) > 0.0f) {
                            if (((int)(unsigned short)t130 >= (int)0x4000) && ((int)(unsigned short)t130 <= (int)0xC000)) {
                            } else {
                                (((struct o0_float *)0xC175A14)->v) = u117;
                                (((struct o0_ushort *)0xC1759AC)->v) = (*(short *)(((int)stk + 4)));
                                (((struct o3C_ushort *)0xC175A14)->v) = (((((struct o3C_short *)0xC175A14)->v)) + (((int (*)(int, int, float))(FUN_0c01b87a))(((((struct o0_short *)0xC1759AC)->v)), (*(short *)0xC17593E), 0.0149999997f)));
                            }
                        } else {
                            if (((int)(unsigned short)t130 > (int)0x4000) && ((int)(unsigned short)t130 < (int)0xC000)) {
                                (((struct o0_float *)0xC175A14)->v) = (-u117);
                                (((struct o0_ushort *)0xC1759AC)->v) = ((*(short *)(((int)stk + 4))) + 0x8000);
                                (((struct o3C_ushort *)0xC175A14)->v) = (((((struct o3C_short *)0xC175A14)->v)) + (((int (*)(int, int, float))(FUN_0c01b87a))(((((struct o0_short *)0xC1759AC)->v)), (*(short *)0xC17593E), 0.0149999997f)));
                            }
                        }
                    }
                }
            }
            u198 = (1.0f / (((((struct o38_float *)0xC1759AC)->v)) * 6.28299999f));
            u199 = (((((struct o0_float *)0xC175A14)->v)) * u198);
            (((struct o4_float *)0xC175A14)->v) = (u199 * 3600.0f);
            if ((((((struct o20_int *)0xC1758B4)->v)) & 0x808FFFFE) != 0) {
                (((struct o0_uint *)0xC175C68)->v) = 0x0;
            }
            FUN_0c072150((unsigned short)((((struct o0_short *)0xC1759AC)->v)), 0xC1759B4, 0xC1759BC);
            (((struct o8_float *)0xC1759AC)->v) = (((((struct o8_float *)0xC1759AC)->v)) * ((((struct o0_float *)0xC175A14)->v)));
            (((struct o10_float *)0xC1759AC)->v) = (((((struct o10_float *)0xC1759AC)->v)) * ((((struct o0_float *)0xC175A14)->v)));
        }
    }
    carFlipTravelDir(0xC1758B4);
    FUN_0c0128ec(0xC1758B4);
    carFlipTravelDir(0xC1758B4);
    FUN_0c011522(0xC1758B4);
    FUN_0c0120cc(0xC1758B4);
    FUN_0c012ac4(0xC1758B4);
    u231 = (((struct o0_float *)0xC175A14)->v);
    s2 = _builtin_fabsf(u231);
    if (!(s2 > 0.25f)) {
        FUN_0c01b81c((*(short *)0xC17593E), 0xC1759AC, 0x1800, 0.270000011f);
    } else {
        s2;
    }
    t238 = (((struct oC_int *)0xC1758FC)->v);
    if ((t238 != 0) && (t238 != 3)) {
        FUN_0c072150((unsigned short)((((struct o0_short *)0xC1759AC)->v)), 0xC1759B4, 0xC1759BC);
        (((struct o8_float *)0xC1759AC)->v) = (((((struct o8_float *)0xC1759AC)->v)) * ((((struct o0_float *)0xC175A14)->v)));
        (((struct o10_float *)0xC1759AC)->v) = (((((struct o10_float *)0xC1759AC)->v)) * ((((struct o0_float *)0xC175A14)->v)));
    } else {
        (((struct o0_float *)0xC175A14)->v) = 0.0f;
        (((struct o10_float *)0xC1759AC)->v) = 0.0f;
        (((struct o8_float *)0xC1759AC)->v) = 0.0f;
        (((struct o4_float *)0xC175A14)->v) = 0.0f;
        (((struct o10_float *)0xC175A14)->v) = 0.0f;
        (((struct oC_float *)0xC175A14)->v) = 0.0f;
        (((struct oC_uint *)0xC175C68)->v) = 0x0;
    }
    FUN_0c012e78(0xC1758B4);
    FUN_0c013a30(0xC1758B4);
    t253 = *(int *)0xC11875C;
    if ((((((struct o24_int *)0xC1EC71C)->v)) == 1) && (t254 = *(int *)0xC11CE4C, t254 != 0)) {
        if ((((((struct o0_int *)0xC1EC7C4)->v)) & 16) != 0) {
            if ((int)t253 < (int)0x5) {
                *(unsigned int *)0xC11875C = ((*(int *)0xC11875C) + 0x1);
            } else {
                if (1) {
                    *(unsigned int *)0xC11875C = ((*(int *)0xC11875C) - 1);
                }
            }
        }
    }
    if ((int)(*(int *)0xC11875C) >= (int)0x5) {
        FUN_0c027f28(0x0);
        pfSize(1.20000005f, 1.20000005f);
        FUN_0c028196();
        u278 = (((((struct o4_float *)0xC175A14)->v)) * ((((struct o38_float *)0xC1759AC)->v)));
        u279 = _builtin_fabsf((u278 * 0.0376980007f));
        FUN_0c0281d4((int)(u279 * 0.800000012f), 0x0);
        FUN_0c0281b6(0xC097020);
        t283 = FUN_0c02806c((*(int *)0xC09DA20));
        FUN_0c027fbe(((-t283) + 540.0f), 425.0f);
        FUN_0c02803a(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
        FUN_0c02842e((*(int *)0xC09DA20));
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC1758B4) = *(struct mv3 *)(0xC175930); }
    nlSubVector3op(0xC1758C0, 0xC175930, 0xC175944);
    (((struct o8_float *)0xC1758FC)->v) = 0.0f;
    (((struct o0_float *)0xC1758FC)->v) = 0.0f;
    { struct mv5 { int w[5]; }; *(struct mv5 *)(0xC175944) = *(struct mv5 *)(0xC175930); }
    t297 = FUN_0c073c60(0xC1758C0);
    FUN_0c01e13c(t297);
    if ((((((struct o24_int *)0xC1EC71C)->v)) == 1) && (t300 = *(int *)0xC2AC2F4, t300 == 0)) {
        FUN_0c010fd4(0xC1758B4);
    }
    FUN_0c02e7a6(0xC175A58, 0xC1759B4);
    FUN_0c02f208();
    *(int *)((int)stk + 0) = 0x1;
    return (FUN_0c020e6c(0xC175930, (((int)stk + 0) + 0x8), 0xC175914, 0xC175918, 0x1));
}
