/* Straight-line functions with calls and guards (batch gen_bb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o12C_float { char p[0x12C]; float v; };
struct o130_float { char p[0x130]; float v; };
struct o134_float { char p[0x134]; float v; };
struct o138_float { char p[0x138]; float v; };
struct o13C_float { char p[0x13C]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o148_float { char p[0x148]; float v; };
struct o160_float { char p[0x160]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o198_float { char p[0x198]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_int { char p[0x1C]; int v; };
struct o20_float { char p[0x20]; float v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o28_int { char p[0x28]; int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o30_int { char p[0x30]; int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o40_ushort { char p[0x40]; unsigned short v; };
struct o42_ushort { char p[0x42]; unsigned short v; };
struct o44_int { char p[0x44]; int v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o44_ushort { char p[0x44]; unsigned short v; };
struct o46_ushort { char p[0x46]; unsigned short v; };
struct o48_int { char p[0x48]; int v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o4C_short { char p[0x4C]; short v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o4E_short { char p[0x4E]; short v; };
struct o50_int { char p[0x50]; int v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o54_int { char p[0x54]; int v; };
struct o54_short { char p[0x54]; short v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o58_int { char p[0x58]; int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o5C_int { char p[0x5C]; int v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o70_uint { char p[0x70]; unsigned int v; };
struct o74_uint { char p[0x74]; unsigned int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o8A_short { char p[0x8A]; short v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oF0_uint { char p[0xF0]; unsigned int v; };
struct oF4_int { char p[0xF4]; int v; };
struct oF4_uint { char p[0xF4]; unsigned int v; };
struct oF8_uint { char p[0xF8]; unsigned int v; };
int FUN_0c026ce6(void);
int FUN_0c03332c(int, int, int, int);
int FUN_0c03346e(int, int, int, int);
int FUN_0c033578(int, int, float, float, float);
int FUN_0c03378c(int, int, int, int, float);
int FUN_0c03425e(int, int, int, int);
int FUN_0c034e28(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0350a6(int, int, int, int, int, float, float);
int FUN_0c0353a2(int, int, float, float);
int FUN_0c035a5e(int, int, float, float);
int FUN_0c03f154(int);
int FUN_0c057aec(int, int, int);
float FUN_0c072140(int);
float FUN_0c072148(int);
int FUN_0c072290(int, int);
int FUN_0c073c40(int, int, float);
float FUN_0c073c60(int);
int FUN_0c076230(float, float, float);
int FUN_0c078890(float);
int FUN_0c07ada0(int);
int FUN_0c07ff00(void);
int FUN_0c165fa0(void);
typedef struct { int w[63]; } Stk63;
int FUN_0c1675c0(Stk63 s);
int buCalcCRC(int, int);
int kmiCreateRegionArray(int, int, int, int, int, int);
int kmiDMAHazardReset(void);
int kmiStartNextRender(void);
int kmiUpdateRenderStatus(void);
int memcpy(int, int, int);
int memset(int, int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAY(int);
int nlSubVector3op(int, int, int);
int FUN_0c03bc10(int a4, int a5, int a6, int a7, int a8, int a9, float f4, float f5, float f6, float f7, float f8);
int FUN_0c0119a0(int a4, float f4, float f5);
int FUN_0c03b72e(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10);
int FUN_0c035b30(int a4, int a5);
int FUN_0c055e84(void);
int FUN_0c1664c0(void);
int buMakeBackupFileImage(int a4, int a5);
int kmiInitPAL(void);

int FUN_0c03bc10(int a4, int a5, int a6, int a7, int a8, int a9, float f4, float f5, float f6, float f7, float f8)
{
    int stk[17];
    register float u2;
    register int t7;
    register int t9;
    register int t10;
    register int t11;
    register int t12;
    register int t13;
    register int t15;
    register int t16;
    register int t21;
    register int t24;
    register int t25;
    register int t36;
    register int t47;
    register int t54;
    register int t63;
    register int t65;
    register int t66;
    register int t67;
    register int t68;
    register int t84;
    register float u93;
    register float u94;
    register int t95;
    register float u99;
    register float u90;
    register float u58;
    register float u59;
    register float u60;
    int R1000;
    float R1004;
    int R1008;
    float R1012;
    int R1016;
    int R1020;
    float R1024;
    float R1028;
    int R1032;
    float R1036;
    int R1040;

    R1000 = *(int *)((int)stk + 0);
    R1004 = *(float *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(float *)((int)stk + 12);
    R1016 = *(int *)((int)stk + 16);
    R1020 = *(int *)((int)stk + 20);
    R1024 = *(float *)((int)stk + 24);
    R1028 = *(float *)((int)stk + 28);
    R1032 = *(int *)((int)stk + 32);
    R1036 = *(float *)((int)stk + 36);
    R1040 = *(int *)((int)stk + 40);

    R1008 = a4;
    R1012 = f5;
    R1004 = f6;
    R1020 = a5;
    R1032 = a6;
    R1016 = a7;
    R1036 = (*(float *)0xC2A5858);
    R1040 = 0x2A0;
    R1024 = ((R1004) + 0.0500000007f);
    u2 = R1012;
    R1028 = ((R1004) + -0.0500000007f);
    if ((int)(R1008) > (int)0x1) {
        *(float *)0xC2A5858 = (R1024);
        t7 = ((int (*)(int, int, int, int, float, float, float, float, float))(FUN_0c03346e))(0xC0B7ABC, 0xC2A5808, (int)f4, (int)u2, f4, f5, f6, f7, f8);
        *(float *)0xC2A5858 = (R1028);
        t9 = ((int (*)(int, int, int, int))(FUN_0c03346e))(0xC0B7ADC, 0xC2A5808, (int)(f4 + 64.0f), (int)u2);
        t10 = ((int (*)(int, int, int, int))(FUN_0c03346e))(0xC0B7ADC, 0xC2A5808, (int)(f4 + 120.0f), (int)u2);
        t11 = ((int (*)(int, int, int, int))(FUN_0c03346e))(0xC0B7ADC, 0xC2A5808, (int)(f4 + 192.0f), (int)u2);
        t12 = R1008;
        if (t12 != 3) {
            if (t12 != 2) {
                t13 = ((int (*)(int, int, int, int))(FUN_0c03346e))(0xC0B7B1C, 0xC2A5808, (int)(f4 + 24.0f), (int)u2);
            } else {
                if ((*(int *)0xC2AC2F0) == 1) {
                    t15 = ((int (*)(int, int, int, int))(FUN_0c03346e))(0xC0B7AEC, 0xC2A5808, (int)(f4 + 24.0f), (int)u2);
                } else {
                    t16 = ((int (*)(int, int, int, int))(FUN_0c03346e))(0xC0B7AFC, 0xC2A5808, (int)(f4 + 24.0f), (int)u2);
                }
            }
        } else {
            t21 = ((int (*)(int, int, int, int))(FUN_0c03346e))(0xC0B7B0C, 0xC2A5808, (int)(f4 + 40.0f), (int)u2);
            if (((*(int *)0xC1EC83C) & 16) == 0) {
                if ((*(int *)0xC2AC2F0) == 1) {
                    t24 = ((int (*)(int, int, int, int))(FUN_0c03346e))(0xC0B7AEC, 0xC2A5808, (int)(f4 + 24.0f), (int)u2);
                } else {
                    t25 = ((int (*)(int, int, int, int))(FUN_0c03346e))(0xC0B7AFC, 0xC2A5808, (int)(f4 + 24.0f), (int)u2);
                }
            }
        }
        *(float *)0xC2A5858 = (R1004);
        t36 = 0x260;
        if ((*(signed char *)(((a9 + 0x9) + 0x0))) == 68) {
            t36 = 0x280;
        }
        FUN_0c033578(t36, (a9 + 0x9), (f4 + 101.0f), (u2 + 9.0f), 1.0f);
        FUN_0c033578(0x260, (((((R1020) << 2) << 2) << 1) + 0xC0B6110), (f4 + 164.0f), (u2 + 9.0f), 1.0f);
        R1000 = 0xA;
        FUN_0c0350a6(0x260, (R1016), 0x8, 0x6, 0xA, (f4 + 262.0f), (u2 + 9.0f));
        u90 = 312.0f;
    } else {
        t47 = 0x260;
        t54 = 0x280;
        if ((R1008) == 0) {
            R1040 = 0x3A0;
            FUN_0c076230(0.5f, 0.5f, 0.5f);
            t47 = 0x360;
            t54 = 0x380;
        } else {
            u58 = f4;
            u59 = f5;
            u60 = f6;
        }
        *(float *)0xC2A5858 = (R1024);
        t63 = ((int (*)(int, int, int, int, float, float, float))(FUN_0c03346e))(0xC0B7A9C, 0xC2A5808, (int)f4, (int)u2, u58, u59, u60);
        *(float *)0xC2A5858 = (R1028);
        t65 = ((int (*)(int, int, int, int))(FUN_0c03346e))(0xC0B7ADC, 0xC2A5808, (int)(f4 + 44.0f), (int)u2);
        t66 = ((int (*)(int, int, int, int))(FUN_0c03346e))(0xC0B7ADC, 0xC2A5808, (int)(f4 + 108.0f), (int)u2);
        t67 = ((int (*)(int, int, int, int))(FUN_0c03346e))(0xC0B7ADC, 0xC2A5808, (int)(f4 + 212.0f), (int)u2);
        t68 = ((int (*)(int, int, int, int))(FUN_0c03346e))(0xC0B7ADC, 0xC2A5808, (int)(f4 + 328.0f), (int)u2);
        FUN_0c026ce6();
        *(float *)0xC2A5858 = (R1004);
        if ((*(signed char *)(((a9 + 0x9) + 0x0))) == 82) {
            FUN_0c033578(t47, (a9 + 0x9), (f4 + 30.0f), (u2 + 9.0f), 1.0f);
        } else {
            FUN_0c033578((R1040), (a9 + 0x9), (f4 + 30.0f), (u2 + 9.0f), 1.0f);
        }
        FUN_0c033578(t47, (((((R1020) << 2) << 2) << 1) + 0xC0B6110), (f4 + 84.0f), (u2 + 9.0f), 1.0f);
        FUN_0c0353a2(t47, (R1032), (f4 + 168.0f), (u2 + 9.0f));
        R1000 = 0xA;
        FUN_0c0350a6(t47, (R1016), 0x8, 0x6, 0xA, (f4 + 278.0f), (u2 + 9.0f));
        t84 = FUN_0c03332c(0xC2A5868, 0x3, 0x0, a8);
        FUN_0c033578(t54, t84, (f4 + 350.0f), (u2 + 9.0f), 1.0f);
        u90 = 360.0f;
    }
    *(float *)(((int)stk + 44)) = (f4 + u90);
    FUN_0c078890(1.0f);
    *(float *)(((int)stk + 56)) = (f4 + 16.0f);
    u93 = R1012;
    *(float *)(((int)stk + 48)) = (u93 + 13.0f);
    *(float *)(((int)stk + 60)) = (u93 + 13.0f);
    u94 = R1004;
    t95 = 0x4;
    for (;;) {
        FUN_0c03378c((((int)stk + 4) + 0x34), (((int)stk + 4) + 0x28), ((int)(((((*(float *)0xC177D9C) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF), 0xFF000000, (u94 + -0.0199999996f));
        u99 = *(float *)(((int)stk + 60));
        t95 = (t95 - 0x1);
        *(float *)(((int)stk + 48)) = (u99 + (1.0f + 1.0f));
        *(float *)(((int)stk + 60)) = (u99 + (1.0f + 1.0f));
        if (t95 == 0) {
            break;
        }
    }
    *(float *)0xC2A5858 = (R1036);
    return 0x20;
}



int FUN_0c035b30(int a4, int a5)
{
    int stk[13];
    register int t0;
    register int t1;
    register int t3;
    register int t4;
    register int t7;
    int t10;
    register int t27;
    register int t28;
    register int t37;
    register int t39;
    register int t40;
    int t41;
    register int t45;
    register int t46;
    register int t47;
    register int t49;
    register int t50;
    register int t55;
    register int t56;
    register int t61;
    register int t125;
    register int t76;
    register int t115;
    register int t78;
    register int t106;
    register int t83;
    register int t84;
    register int t88;
    register int t89;
    register int t90;
    register int t94;
    register int t95;
    register int t96;
    register float u97;
    register int t36;
    register float u73;
    int R1000;

    R1000 = *(int *)((int)stk + 0);

    R1000 = a5;
    t0 = FUN_0c03f154(0x0);
    t1 = 0xC0B456C;
    if (t0 == 2) {
        t1 = 0xC0B414C;
    }
    t3 = *(short *)0xC28ED98;
    t4 = 0x0;
    if ((0x4 & (unsigned short)t3) == 0) {
        t4 = 0xFF00;
    }
    t7 = t4;
    if ((0x8 & (unsigned short)t3) == 0) {
        t7 = (t4 | 0xFF0000);
    }
    t10 = t7;
    if (((unsigned short)t3 & 0x20) == 0) {
        t10 = (t7 | 0xF0F0F0);
    }
    if (a4 == 0) {
        if ((((int)0x1 << (int)(*(int *)0xC2A4FBC)) & t10) != 0) {
            FUN_0c03425e(0x0, 0xC2A4FBC, 0x18, t10);
        }
    } else {
        FUN_0c03425e(0x0, 0xC2A4FBC, 0x18, t10);
    }
    if ((int)0x17 >= 0) {
        t27 = 0x17;
        t28 = 0x18;
        for (;;) {
            if ((((int)0x1 << (int)t27) & t10) != 0) {
                t27 = (t27 - 1);
                t28 = (t28 - 1);
                if ((int)t27 < 0) {
                    break;
                }
                continue;
            }
            break;
        }
        t36 = t28;
    } else {
        t36 = 0x18;
    }
    t37 = 0x213;
    if (a4 != 0) {
        t37 = 0x80213;
    }
    t39 = FUN_0c03f154(0x0);
    t40 = *(int *)0xC2A4FBC;
    t41 = t37;
    if (t39 != 2) {
        t41 = (t37 | 0x40000);
    }
    t45 = *(int *)0xC2A4FBC;
    t46 = *(int *)0xC2A5860;
    t125 = (FUN_0c034e28(t41, t1, t36, t40, R1000, *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28)));
    if ((int)t45 >= (int)0x8) {
        t47 = t46;
        if ((0x40000 & (t41 & 0xFFF7FFFF)) != 0) {
            t47 = (-t46);
        }
        t49 = *(int *)0xC2A4FBC;
        t50 = ((~(((~t49) + 0x1) & 0x7)) + 0x1);
        if ((int)t49 >= 0) {
            t50 = (t49 & 0x7);
        }
        FUN_0c033578((t41 & 0xFFF7FFFF), ((t50 * 0x2C) + 0xC0B4158), (((*(float *)((t1 + 0x0))) + (float)t47) + -16.0f), (((((struct o4_float *)(t1))->v)) + -5.0f), 0.800000012f);
        t55 = *(int *)0xC2A4FBC;
        t56 = t55;
        if ((int)t55 < 0) {
            t56 = (t55 + 0x7);
        }
        t61 = 0xC0C0224;
        if ((((t56 >> 1) >> 1) >> 1) == 1) {
            t61 = 0xC0C0218;
        }
        t125 = (FUN_0c033578((t41 & 0xFFF7FFFF), t61, (((*(float *)((t1 + 0x0))) + (float)t47) + 8.0f), (((((struct o4_float *)(t1))->v)) + 8.0f), 0.800000012f));
        u73 = (float)t47;
    }
    if (a4 == 0) {
    } else {
        t76 = FUN_0c03f154(0x0);
        t115 = t76;
        if (t76 != 2) {
        } else {
            t78 = FUN_0c035a5e(0x0, 0x0, (float)((*(int *)0xC2A5860) + 0x1D8), 184.0f);
            t106 = t78;
            if (t78 == 2) {
                FUN_0c033578(0x40023, (((((R1000) << 2) << 2) << 1) + 0xC0B6450), (float)((*(int *)0xC2A5860) + 0x148), 120.0f, 1.0f);
                t83 = *(int *)0xC2A4FBC;
                t84 = ((~(((~t83) + 0x1) & 0x7)) + 0x1);
                if ((int)t83 >= 0) {
                    t84 = (t83 & 0x7);
                }
                FUN_0c033578(0x40020, ((t84 * 0x2C) + 0xC0B4158), (float)((*(int *)0xC2A5860) + 0x148), 140.0f, 1.0f);
                t88 = *(int *)0xC2A4FBC;
                t89 = *(int *)0xC2A5860;
                t90 = ((~(((~t88) + 0x1) & 0x7)) + 0x1);
                if ((int)t88 >= 0) {
                    t90 = (t88 & 0x7);
                }
                t94 = FUN_0c03346e((*(int *)(((t90 << 2) + 0xC12B9BC))), 0xC2A5808, (t89 + 0x23C), 0xC8);
                R1000 = 0xC0B67B0;
                t95 = 0x9E;
                t96 = 0x0;
                u97 = u73;
                for (;;) {
                    if ((unsigned int)t96 >= (unsigned int)0xA0) {
                        break;
                    }
                    u97 = (float)t95;
                    t94 = (FUN_0c033578(0x40020, ((R1000) + t96), (float)((*(int *)0xC2A5860) + 0x158), (float)t95, 1.0f));
                    t94 = (*(int *)0xC2A4FBC);
                    if ((int)t94 >= 0) {
                        t94 = (t94 & 0x7);
                    } else {
                        t94 = (~t94);
                        t94 = (t94 + 0x1);
                        t94 = (t94 & 0x7);
                        t94 = (~t94);
                        t94 = (t94 + 0x1);
                    }
                    t94 = (FUN_0c033578(0x40020, ((((((((t94 + 0x1) << 2) + (t94 + 0x1)) << 2) << 2) << 1) + 0xC0B67B0) + t96), (float)((*(int *)0xC2A5860) + 0x1BC), u97, 1.0f));
                    t96 = (t96 + 0x20);
                    t95 = (t95 + 0x12);
                }
                t106 = t94;
            }
            t115 = t106;
        }
        t125 = t115;
    }
    *(unsigned int *)0xC175C80 = (*(int *)0xC2A4FBC);
    return t125;
}

int FUN_0c055e84(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register float u0;

    t0 = 0xC055F60;
    if (((((struct o0_int *)0xC2B326C)->v)) != (*(int *)0xC177CF0)) {
        t1 = (((struct o4_int *)0xC2B326C)->v);
        (((struct o4_uint *)0xC2B326C)->v) = (t1 + 0x1);
        t0 = (t1 + 0x1);
    }
    t1 = t0;
    if ((int)((((struct o0_int *)0xC2B3110)->v)) <= (int)0x2A) {
    } else {
        t0 = *(int *)0xC177CF0;
        if (((((struct o0_int *)0xC2B326C)->v)) != t0) {
            if ((*(int *)0xC2B31FC) == 0) {
                t2 = (((struct o4_int *)0xC2B326C)->v);
                if ((int)((((struct o0_int *)0xC2B326C)->v)) < (int)0xF) {
                    if ((int)t2 >= (int)(0x10 - ((((struct o0_int *)0xC2B326C)->v)))) {
                        (((struct o0_uint *)0xC2B326C)->v) = (((((struct o0_int *)0xC2B326C)->v)) + 0x1);
                        (((struct o4_uint *)0xC2B326C)->v) = 0x0;
                    }
                } else {
                    if ((int)t2 >= (int)0x1) {
                        if ((int)((((struct o0_int *)0xC2B326C)->v)) < (int)0x33) {
                            (((struct o0_uint *)0xC2B326C)->v) = (((((struct o0_int *)0xC2B326C)->v)) + 0x1);
                        } else {
                            t2 = (((struct o0_int *)0xC2B326C)->v);
                            (((struct o0_uint *)0xC2B326C)->v) = (t2 + 0x3);
                            if ((int)(t2 + 0x3) > (int)(*(int *)0xC177CF0)) {
                                (((struct o0_uint *)0xC2B326C)->v) = (*(int *)0xC177CF0);
                            }
                        }
                        (((struct o4_uint *)0xC2B326C)->v) = 0x0;
                    }
                }
                t2 = ((int)((int)((((struct o0_int *)0xC2B326C)->v)) % (int)0xA));
                t3 = ((int)((int)((((struct o0_int *)0xC2B326C)->v)) / (int)0x64));
                t4 = ((int)((int)((int)((int)((((struct o0_int *)0xC2B326C)->v)) / (int)0xA)) % (int)0xA));
            } else {
                t2 = ((int)((int)t0 % (int)0xA));
                t3 = ((int)((int)t0 / (int)0x64));
                t4 = ((int)((int)((int)((int)t0 / (int)0xA)) % (int)0xA));
            }
            t5 = t2;
            t2 = t3;
            t3 = t4;
        } else {
            t5 = ((int)((int)t0 % (int)0xA));
            t2 = ((int)((int)t0 / (int)0x64));
            t3 = ((int)((int)((int)((int)t0 / (int)0xA)) % (int)0xA));
        }
        (((struct o38_uint *)0xC2B3110)->v) = 0xE;
        (((struct o14_float *)0xC2B3110)->v) = (((((struct o10_float *)0xC2B3164)->v)) + 1.0f);
        (((struct o18_float *)0xC2B3110)->v) = (((((struct o10_float *)0xC2B3164)->v)) + 1.0f);
        (((struct o20_float *)0xC2B3110)->v) = 0.0f;
        (((struct o28_float *)0xC2B3110)->v) = 1.0f;
        (((struct o2C_uint *)0xC2B3110)->v) = 0x38E;
        if (t2 != 0) {
            (((struct o4_uint *)0xC2B3110)->v) = (*(int *)((0xC132214 + (t2 << 2))));
            (((struct oC_float *)0xC2B3110)->v) = ((float)(((((struct o0_int *)0xC2B3164)->v)) + 0x77) - (((FUN_0c072140(0x38E)) * 290.0f)));
            u0 = 50.0f;
            u0 = u0 + 290.0f * (FUN_0c072148(0x38E));
            (((struct o8_float *)0xC2B3110)->v) = u0;
            FUN_0c07ada0(0xC2B3114);
            (((struct o4_uint *)0xC2B3110)->v) = (*(int *)(((t3 << 2) + 0xC132214)));
            (((struct oC_float *)0xC2B3110)->v) = ((float)(((((struct o0_int *)0xC2B3164)->v)) + 0x77) - (((FUN_0c072140(0x38E)) * 338.0f)));
            u0 = 50.0f;
            u0 = u0 + 338.0f * (FUN_0c072148(0x38E));
            (((struct o8_float *)0xC2B3110)->v) = u0;
            FUN_0c07ada0(0xC2B3114);
            (((struct o4_uint *)0xC2B3110)->v) = (*(int *)(((t5 << 2) + 0xC132214)));
            (((struct oC_float *)0xC2B3110)->v) = ((float)(((((struct o0_int *)0xC2B3164)->v)) + 0x77) - (((FUN_0c072140(0x38E)) * 386.0f)));
            u0 = 50.0f;
            u0 = u0 + 386.0f * (FUN_0c072148(0x38E));
            (((struct o8_float *)0xC2B3110)->v) = u0;
        } else {
            if (t3 != 0) {
                (((struct o4_uint *)0xC2B3110)->v) = (*(int *)((0xC132214 + (t3 << 2))));
                (((struct oC_float *)0xC2B3110)->v) = ((float)(((((struct o0_int *)0xC2B3164)->v)) + 0x77) - (((FUN_0c072140(0x38E)) * 314.0f)));
                u0 = 50.0f;
                u0 = u0 + 314.0f * (FUN_0c072148(0x38E));
                (((struct o8_float *)0xC2B3110)->v) = u0;
                FUN_0c07ada0(0xC2B3114);
                (((struct o4_uint *)0xC2B3110)->v) = (*(int *)(((t5 << 2) + 0xC132214)));
                (((struct oC_float *)0xC2B3110)->v) = ((float)(((((struct o0_int *)0xC2B3164)->v)) + 0x77) - (((FUN_0c072140(0x38E)) * 362.0f)));
                u0 = 50.0f;
                u0 = u0 + 362.0f * (FUN_0c072148(0x38E));
                (((struct o8_float *)0xC2B3110)->v) = u0;
            } else {
                (((struct o4_uint *)0xC2B3110)->v) = (*(int *)((0xC132214 + (t5 << 2))));
                (((struct oC_float *)0xC2B3110)->v) = ((float)(((((struct o0_int *)0xC2B3164)->v)) + 0x77) - (((FUN_0c072140(0x38E)) * 338.0f)));
                u0 = 50.0f;
                u0 = u0 + 338.0f * (FUN_0c072148(0x38E));
                (((struct o8_float *)0xC2B3110)->v) = u0;
            }
        }
        FUN_0c07ada0(0xC2B3114);
        (((struct o4_uint *)0xC2B3110)->v) = 0x160;
        (((struct oC_float *)0xC2B3110)->v) = ((float)(((((struct o0_int *)0xC2B3164)->v)) + 0x83) - (((FUN_0c072140(0x38E)) * 346.0f)));
        (((struct o18_float *)0xC2B3110)->v) = (((((struct o10_float *)0xC2B3164)->v)) + 1.0f);
        (((struct o2C_uint *)0xC2B3110)->v) = 0x38E;
        (((struct o20_float *)0xC2B3110)->v) = 0.0f;
        (((struct o28_float *)0xC2B3110)->v) = 1.0f;
        if ((int)((((struct o0_int *)0xC2B326C)->v)) >= (int)0x2) {
            u0 = 50.0f;
            u0 = u0 + 350.0f * (FUN_0c072148(0x38E));
            (((struct o8_float *)0xC2B3110)->v) = u0;
            (((struct o1C_float *)0xC2B3110)->v) = 0.0f;
            (((struct o24_float *)0xC2B3110)->v) = 1.0f;
        } else {
            (((struct o1C_float *)0xC2B3110)->v) = 0.0f;
            (((struct o24_float *)0xC2B3110)->v) = 0.735000014f;
            u0 = 50.0f;
            u0 = u0 + 342.0f * (FUN_0c072148(0x38E));
            (((struct o8_float *)0xC2B3110)->v) = u0;
            (((struct o14_float *)0xC2B3110)->v) = (((((struct o10_float *)0xC2B3164)->v)) + 0.735000014f);
        }
        FUN_0c07ada0(0xC2B3114);
        (((struct o1C_float *)0xC2B3110)->v) = 0.0f;
        (((struct o24_float *)0xC2B3110)->v) = 1.0f;
        t1 = 0x20;
    }
    return t1;
}

int FUN_0c1664c0(void)
{
    int stk[9];

    register int R1;
    register int R2;
    register int R3;
    register int R6;
    register int R7;
    int R12;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    int R1016;
    int R1020;
    int R1024;
    int R1028;
    int R1032;
    R1016 = *(int *)((int)stk + 16);
    R1020 = *(int *)((int)stk + 20);
    R1024 = *(int *)((int)stk + 24);
    R1028 = *(int *)((int)stk + 28);
    R1032 = *(int *)((int)stk + 32);
    *(unsigned int *)0xA05F6900 = 0x8;
    (((struct o0_uint *)0xC300B80)->v) = (((((struct o0_int *)0xC300B80)->v)) | 0x2);
    (((struct o0_uint *)0xC300C40)->v) = (((((struct o0_int *)0xC300C40)->v)) + 0x1);
    v0_2 = (0xC306E44);
    if (((((((struct o0_int *)0xC3008D4)->v)) & 2) == 0)) goto L_C166500;
    v0_5 = (((unsigned int)((unsigned int)((*(int *)0xA05F810C) & 0x400) >> 8) >> 2));
    L_C16650C:;
    *(unsigned int *)((v0_2 + 0x0)) = v0_5;
    R12 = (0x1);
    v0_0 = (0x0);
    v0_1 = (0xC306DE8);
    if (((((((struct o1C_int *)0xC3008D4)->v)) & 0x4) != 4)) goto L_C16652A;
    if (((*(int *)((v0_2 + 0x0))) != 1)) goto L_C16652A;
    v0_2 = (R12);
    L_C1665B0:;
    if (!((v0_2 == 0))) goto L_C166808;
    R1032 = v0_0;
    if ((((((struct oC_int *)0xC300C40)->v)) == 0)) goto L_C1665C6;
    v0_2 = (R12);
    goto L_C1667EC;
    L_C166808:;
    v0_5 = (0x0);
    L_C16680A:;
    return v0_5;
    L_C1667EC:;
    if ((v0_2 != 0)) goto L_C166808;
    kmiUpdateRenderStatus();
    v0_1 = (FUN_0c165fa0()) != 0;
    if (v0_1) goto L_C166800;
    v0_5 = (0x1);
    goto L_C16680A;
    L_C166800:;
    kmiStartNextRender();
    (((struct o4_uint *)0xC300C40)->v) = v0_0;
    goto L_C166808;
    L_C1665C6:;
    v0_2 = (0xC306DEC);
    if ((((((struct o8_int *)0xC300C40)->v)) == 0)) goto L_C16660A;
    v0_1 = *(int *)((v0_2 + 0x18));
    *(unsigned int *)((v0_2 + 0x18)) = (v0_1 + 0x1);
    if (((unsigned int)(v0_1 + 0x1) <= (unsigned int)0x10)) goto L_C166606;
    (((struct o0_uint *)0xA05F8048)->v) = ((((struct o1C_int *)0xC300B80)->v));
    (((struct o4_uint *)0xA05F8048)->v) = ((((struct o14_int *)0xC300B80)->v));
    (((struct o20_uint *)0xA05F8048)->v) = ((((struct o4_int *)0xC300B80)->v));
    (((struct o24_uint *)0xA05F8048)->v) = ((((struct o8_int *)0xC300B80)->v));
    (((struct o28_uint *)0xC300AB0)->v) = v0_0;
    *(unsigned int *)((v0_2 + 0x18)) = v0_0;
    L_C166606:;
    v0_2 = (R12);
    goto L_C1667EC;
    L_C16660A:;
    R1016 = v0_0;
    R1028 = v0_0;
    R1020 = v0_0;
    R1024 = v0_0;
    v0_3 = (0xA05F8008);
    v0_4 = (0xA05F8044);
    L_C1667D4:;
    if (((int)(R1016) >= (int)0x4)) goto L_C1667E0;
    v0_6 = R1016;
    v0_5 = (0xC300C1C);
    v0_7 = ((v0_6 << 2));
    if (!(((int)(*(int *)(((v0_6 << 2) + 0xC300C1C))) >= 0))) goto L_C1667BC;
    if ((((*(int *)((v0_7 + v0_5))) & R12) == 0)) goto L_C166634;
    goto L_C1667BC;
    L_C1667BC:;
    R1016 = ((R1016) + 0x1);
    R1028 = ((R1028) + 0x4);
    R1020 = ((R1020) + 0x4);
    R1024 = ((R1024) + 0x4);
    goto L_C1667D4;
    L_C166634:;
    if ((((((struct o0_int *)0xC300AF4)->v)) != 0)) goto L_C166700;
    if (((*(int *)((v0_7 + v0_5))) != 4)) goto L_C166662;
    *(unsigned int *)((v0_7 + 0xC300C1C)) = 0x5;
    if ((((((struct o28_int *)0xC300AB0)->v)) == 0)) goto L_C166656;
    *(unsigned int *)((v0_2 + 0x8)) = ((*(int *)((v0_2 + 0x8))) + 0x1);
    L_C166656:;
    (((struct o28_uint *)0xC300AB0)->v) = v0_0;
    *(unsigned int *)((v0_3 + 0x0)) = 0x2;
    *(unsigned int *)((v0_3 + 0x0)) = v0_0;
    goto L_C1667BC;
    L_C166662:;
    *(unsigned int *)((v0_1 + 0x0)) = R12;
    R1032 = R12;
    if (((*(int *)((v0_7 + 0xC300C1C))) == 2)) goto L_C166672;
    goto L_C1667BC;
    L_C166672:;
    *(unsigned int *)((v0_2 + 0x4)) = ((*(int *)((v0_2 + 0x4))) + 0x1);
    if (((unsigned int)(*(int *)((v0_2 + 0x4))) > (unsigned int)((((struct o4_int *)0xC300AF4)->v)))) goto L_C166686;
    goto L_C1667BC;
    L_C166686:;
    *(unsigned int *)((v0_2 + 0xC)) = ((*(int *)((v0_2 + 0xC))) + 0x1);
    kmiDMAHazardReset();
    *(unsigned int *)((v0_7 + 0xC300C1C)) = 0xFFFFFFFF;
    (((struct o2C_uint *)0xC300AB0)->v) = v0_0;
    *(unsigned int *)((v0_2 + 0x4)) = v0_0;
    goto L_C1667BC;
    L_C166700:;
    *(unsigned int *)((v0_1 + 0x0)) = R12;
    R1032 = R12;
    if (((*(int *)((v0_7 + 0xC300C1C))) != 4)) goto L_C16678A;
    *(unsigned int *)((v0_2 + 0x0)) = ((*(int *)((v0_2 + 0x0))) + 0x1);
    if (((unsigned int)(*(int *)((v0_2 + 0x0))) <= (unsigned int)((((struct o0_int *)0xC300AF4)->v)))) goto L_C16678A;
    *(unsigned int *)((v0_2 + 0x8)) = ((*(int *)((v0_2 + 0x8))) + 0x1);
    *(unsigned int *)((v0_4 + 0x0)) = (((((struct o18_int *)0xC300B80)->v)) & 0xFFFFFFFE);
    *(unsigned int *)((v0_3 + 0x0)) = 0x6;
    *(unsigned int *)((v0_3 + 0x0)) = v0_0;
    *(unsigned int *)((v0_4 + 0x0)) = ((((struct o18_int *)0xC300B80)->v));
    v0_5 = *(int *)0xC300938;
    *(int *)((int)stk + 12) = ((~v0_5) & R12);
    v0_6 = v0_0;
    *(int *)((int)stk + 8) = v0_6;
    kmiCreateRegionArray(((((struct o0_int *)0xC300D2C)->v)), ((((struct o4_int *)0xC300D2C)->v)), 0x0, 0x1, v0_6, ((~v0_5) & R12));
    v0_5 = *(int *)0xC300938;
    *(int *)((int)stk + 4) = ((~v0_5) & R12);
    *(int *)((int)stk + 0) = 0x1;
    kmiCreateRegionArray(((((struct o0_int *)0xC300D2C)->v)), ((((struct o4_int *)0xC300D2C)->v)), 0x0, 0x1, 0x1, ((~v0_5) & R12));
    *(unsigned int *)(((R1024) + 0xC300C1C)) = 0x5;
    (((struct o28_uint *)0xC300AB0)->v) = v0_0;
    *(unsigned int *)0xC306E3C = ((*(int *)0xC306E3C) + 0x1);
    *(unsigned int *)((v0_2 + 0x0)) = v0_0;
    L_C16678A:;
    if (((*(int *)(((R1020) + 0xC300C1C))) != 2)) goto L_C1667BC;
    v0_5 = *(int *)((v0_2 + 0x4));
    *(unsigned int *)((v0_2 + 0x4)) = (v0_5 + 0x1);
    if (((unsigned int)(v0_5 + 0x1) <= (unsigned int)((((struct o4_int *)0xC300AF4)->v)))) goto L_C1667BC;
    *(unsigned int *)((v0_2 + 0xC)) = ((*(int *)((v0_2 + 0xC))) + 0x1);
    kmiDMAHazardReset();
    *(unsigned int *)(((R1028) + 0xC300C1C)) = 0xFFFFFFFF;
    (((struct o2C_uint *)0xC300AB0)->v) = v0_0;
    *(unsigned int *)((v0_2 + 0x4)) = v0_0;
    goto L_C1667BC;
    L_C1667E0:;
    v0_1 = (((struct o28_int *)0xC300AB0)->v);
    v0_2 = R1032;
    R1032 = (v0_2 | v0_1);
    v0_2 = ((v0_2 | v0_1));
    goto L_C1667EC;
    L_C16652A:;
    (((struct o0_uint *)0xC300AB0)->v) = (((((struct o0_int *)0xC300AB0)->v)) - 1);
    if (((int)((((struct o0_int *)0xC300AB0)->v)) < 0)) goto L_C1665A4;
    if (((*(int *)((v0_1 + 0x0))) == 0)) goto L_C1665A0;
    *(unsigned int *)((v0_1 + 0x0)) = v0_0;
    v0_2 = (v0_0);
    L_C1665AE:;
    v0_2 = (v0_2);
    goto L_C1665B0;
    L_C1665A0:;
    v0_2 = (R12);
    goto L_C1665AE;
    L_C1665A4:;
    (((struct o0_uint *)0xC300AB0)->v) = ((((struct o4_int *)0xC300AB0)->v));
    v0_2 = (v0_0);
    goto L_C1665AE;
    L_C166500:;
    v0_0 = *(int *)0xC1743E4;
    *(unsigned int *)0xC1743E4 = ((v0_0 + 0x1) & 0x1);
    v0_5 = (((v0_0 + 0x1) & 0x1));
    goto L_C16650C;
}

int buMakeBackupFileImage(int a4, int a5)
{
    int stk[13];

    register int R1;
    register int R2;
    register int R6;
    register int R8;
    register int v0_0;
    register int v0_1;
    int R1000;
    int R1004;
    int R1008;
    int R1012;
    int R1016;
    int R1020;
    int R1024;
    int R1028;
    int R1032;
    int R1036;
    int R1040;
    int R1044;
    int R1048;
    R1000 = *(int *)((int)stk + 0);
    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);
    R1016 = *(int *)((int)stk + 16);
    R1020 = *(int *)((int)stk + 20);
    R1024 = *(int *)((int)stk + 24);
    R1028 = *(int *)((int)stk + 28);
    R1032 = *(int *)((int)stk + 32);
    R1036 = *(int *)((int)stk + 36);
    R1040 = *(int *)((int)stk + 40);
    R1044 = *(int *)((int)stk + 44);
    R1048 = *(int *)((int)stk + 48);
    v0_0 = a4;
    v0_1 = a5;
    R1048 = v0_0;
    R1044 = v0_1;
    if ((((((struct o4C_short *)((R1044)))->v)) != 0)) goto L_C077C38;
    return 0xFFFFFF00;
    L_C077C38:;
    if (((int)(unsigned short)((((struct o4C_short *)((R1044)))->v)) <= (int)0x3)) goto L_C077C52;
    return 0xFFFFFF00;
    L_C077C52:;
    if (((int)(unsigned short)((((struct o54_short *)((R1044)))->v)) <= (int)0x3)) goto L_C077C6C;
    return 0xFFFFFF00;
    L_C077C6C:;
    if ((((((struct o44_int *)((R1044)))->v)) != 0)) goto L_C077C82;
    return 0xFFFFFF00;
    L_C077C82:;
    if ((((((struct o48_int *)((R1044)))->v)) != 0)) goto L_C077C9A;
    return 0xFFFFFF00;
    L_C077C9A:;
    if ((((((struct o54_short *)((R1044)))->v)) == 0)) goto L_C077CBA;
    if ((((((struct o50_int *)((R1044)))->v)) != 0)) goto L_C077CBA;
    return 0xFFFFFF00;
    L_C077CBA:;
    R1040 = (R1048);
    memset((R1040), 0x0, 0x60);
    memset((R1040), 0x20, 0x10);
    memset(((R1040) + 0x10), 0x20, 0x20);
    memset(((R1040) + 0x30), 0x0, 0x10);
    R1032 = (R1040);
    R1028 = (R1044);
    R1036 = 0x0;
    L_C077D32:;
    if (!(((int)(R1036) < (int)0x10))) goto L_C077D3A;
    if (((*(signed char *)(((R1028) + 0x0))) != 0)) goto L_C077D18;
    goto L_C077D3A;
    L_C077D3A:;
    R1032 = ((R1040) + 0x10);
    R1028 = ((R1044) + 0x12);
    R1036 = 0x0;
    L_C077D78:;
    if (!(((int)(R1036) < (int)0x20))) goto L_C077D80;
    if (((*(signed char *)(((R1028) + 0x0))) != 0)) goto L_C077D5E;
    goto L_C077D80;
    L_C077D80:;
    R1032 = ((R1040) + 0x30);
    R1028 = ((R1044) + 0x34);
    R1036 = 0x0;
    L_C077DBE:;
    if (!(((int)(R1036) < (int)0x10))) goto L_C077DC6;
    if (((*(signed char *)(((R1028) + 0x0))) != 0)) goto L_C077DA4;
    goto L_C077DC6;
    L_C077DC6:;
    R1024 = (*(int *)((0xC147534 + (((unsigned short)((((struct o4C_short *)((R1044)))->v)) & 0x3) << 2))));
    R1020 = (*(int *)((0xC147544 + (((unsigned short)((((struct o54_short *)((R1044)))->v)) & 0x3) << 2))));
    R1016 = ((((R1024) + (R1020)) + ((((struct o5C_int *)((R1044)))->v))) + 0x80);
    (((struct o42_ushort *)((R1040)))->v) = ((((struct o4E_short *)((R1044)))->v));
    (((struct o40_ushort *)((R1040)))->v) = ((((struct o4C_short *)((R1044)))->v));
    R1008 = 0x60;
    R1012 = 0x80;
    if ((((((struct o54_short *)((R1044)))->v)) == 0)) goto L_C077E32;
    if (!((((((struct o50_int *)((R1044)))->v)) != 0))) goto L_C077E32;
    (((struct o44_ushort *)((R1040)))->v) = ((((struct o54_short *)((R1044)))->v));
    R1004 = ((R1024) + 0x80);
    goto L_C077E64;
    L_C077E32:;
    (((struct o44_ushort *)((R1040)))->v) = 0x0;
    R1004 = 0x0;
    L_C077E64:;
    if ((((((struct o5C_int *)((R1044)))->v)) == 0)) goto L_C077E78;
    if (!((((((struct o58_int *)((R1044)))->v)) != 0))) goto L_C077E78;
    (((struct o48_uint *)((R1040)))->v) = ((((struct o5C_int *)((R1044)))->v));
    R1000 = (((R1024) + (R1020)) + 0x80);
    goto L_C077EA2;
    L_C077E78:;
    (((struct o48_uint *)((R1040)))->v) = 0x0;
    R1000 = 0x0;
    L_C077EA2:;
    if (((R1024) == 0)) goto L_C077ED0;
    memcpy(((R1048) + (R1008)), ((((struct o44_int *)((R1044)))->v)), 0x20);
    memcpy(((R1048) + (R1012)), ((((struct o48_int *)((R1044)))->v)), (R1024));
    L_C077ED0:;
    if (((R1020) == 0)) goto L_C077EEA;
    memcpy(((R1048) + (R1004)), ((((struct o50_int *)((R1044)))->v)), (R1020));
    L_C077EEA:;
    if ((((((struct o5C_int *)((R1044)))->v)) == 0)) goto L_C077F0C;
    memcpy(((R1048) + (R1000)), ((((struct o58_int *)((R1044)))->v)), ((((struct o5C_int *)((R1044)))->v)));
    L_C077F0C:;
    v0_0 = (0x1FF);
    v0_1 = (((((R1016) & 0x1FF) == 0)));
    if ((v0_1)) goto L_C077F38;
    memset(((R1048) + (R1016)), 0x0, (0x200 - (v0_0 & (R1016))));
    L_C077F38:;
    (((struct o46_ushort *)((R1040)))->v) = (buCalcCRC((R1048), (R1016)));
    if ((((R1016) & 0x1FF) == 0)) goto L_C077F56;
    v0_0 = (0x1);
    L_C077F58:;
    return (v0_0 + ((unsigned int)((unsigned int)(R1016) >> 8) >> 1));
    L_C077F56:;
    v0_0 = (0x0);
    goto L_C077F58;
    L_C077DA4:;
    v0_0 = R1032;
    R1032 = (v0_0 + 0x1);
    v0_1 = R1028;
    R1028 = (v0_1 + 0x1);
    *(unsigned char *)((((v0_0 + 0x1) - 1) + 0x0)) = (*(signed char *)((((v0_1 + 0x1) - 1) + 0x0)));
    R1036 = ((R1036) + 0x1);
    goto L_C077DBE;
    L_C077D5E:;
    v0_0 = R1032;
    R1032 = (v0_0 + 0x1);
    v0_1 = R1028;
    R1028 = (v0_1 + 0x1);
    *(unsigned char *)((((v0_0 + 0x1) - 1) + 0x0)) = (*(signed char *)((((v0_1 + 0x1) - 1) + 0x0)));
    R1036 = ((R1036) + 0x1);
    goto L_C077D78;
    L_C077D18:;
    v0_0 = R1032;
    R1032 = (v0_0 + 0x1);
    v0_1 = R1028;
    R1028 = (v0_1 + 0x1);
    *(unsigned char *)((((v0_0 + 0x1) - 1) + 0x0)) = (*(signed char *)((((v0_1 + 0x1) - 1) + 0x0)));
    R1036 = ((R1036) + 0x1);
    goto L_C077D32;
}

int kmiInitPAL(void)
{
    int stk[131];
    register int t64;
    register int t66;
    register int t70;
    register int t75;
    register int t77;
    register int t92;
    register int t99;
    register int t100;
    register int t101;
    register int t1;
    register int t12;
    register int t21;
    register int t33;
    register int t36;
    register int t39;
    register int t72;
    register int t83;
    register int t102;

    *(unsigned int *)(((((int)stk + 252) + 0x14) + 0x8)) = 0x35F;
    *(unsigned int *)(((((int)stk + 252) + 0x14) + 0x0)) = 0x8D;
    *(unsigned int *)(((((int)stk + 252) + 0x14) + 0x4)) = 0x34B;
    *(unsigned int *)(((((int)stk + 252) + 0x14) + 0x18)) = 0x3F;
    if (((((((struct o20_int *)0xC3008D0)->v)) & 0x1) != 1) && ((t1 = (((struct o20_int *)0xC3008D0)->v), (t1 & 44) != 0) && (0x1 != 0))) {
        *(unsigned int *)(((((int)stk + 252) + 0x14) + 0x14)) = 0x270;
    } else {
        *(unsigned int *)(((((int)stk + 252) + 0x14) + 0x14)) = 0x138;
    }
    if ((((((struct o20_int *)0xC3008D0)->v)) & 0x42) == 66) {
        if (((((((struct o20_int *)0xC3008D0)->v)) & 0x1) != 1) && ((t12 = (((struct o20_int *)0xC3008D0)->v), (t12 & 44) != 0) && (0x1 != 0))) {
            *(unsigned int *)(((((int)stk + 252) + 0x14) + 0xC)) = 0x2C;
            *(unsigned int *)(((((int)stk + 252) + 0x14) + 0x10)) = 0x26C;
        } else {
            *(unsigned int *)(((((int)stk + 252) + 0x14) + 0xC)) = 0x16;
            *(unsigned int *)(((((int)stk + 252) + 0x14) + 0x10)) = 0x134;
        }
        if ((((((struct o20_int *)0xC3008D0)->v)) & 32) != 0) {
            (((struct o74_uint *)((((int)stk + 252) + 0x14)))->v) = 0x134;
        } else {
            (((struct o74_uint *)((((int)stk + 252) + 0x14)))->v) = 0x136;
        }
    } else {
        if (((((((struct o20_int *)0xC3008D0)->v)) & 0x1) != 1) && ((t21 = (((struct o20_int *)0xC3008D0)->v), (t21 & 44) != 0) && (0x1 != 0))) {
            *(unsigned int *)(((((int)stk + 252) + 0x14) + 0xC)) = 0x2C;
            *(unsigned int *)(((((int)stk + 252) + 0x14) + 0x10)) = 0x26C;
        } else {
            *(unsigned int *)(((((int)stk + 252) + 0x14) + 0xC)) = 0x16;
            *(unsigned int *)(((((int)stk + 252) + 0x14) + 0x10)) = 0x134;
        }
        if ((((((struct o20_int *)0xC3008D0)->v)) & 32) != 0) {
            (((struct o74_uint *)((((int)stk + 252) + 0x14)))->v) = 0x134;
        } else {
            (((struct o74_uint *)((((int)stk + 252) + 0x14)))->v) = 0x136;
        }
    }
    (((struct o78_uint *)((((int)stk + 252) + 0x14)))->v) = 0x15;
    if (((((((struct o20_int *)0xC3008D0)->v)) & 0x1) != 1) && ((t33 = (((struct o20_int *)0xC3008D0)->v), (t33 & 44) != 0) && (0x1 != 0))) {
        *(unsigned int *)(((((int)stk + 252) + 0x14) + 0x20)) = 0x16A;
        *(unsigned int *)(((((int)stk + 252) + 0x14) + 0x24)) = 0x1F;
        t36 = 0x5;
    } else {
        *(unsigned int *)(((((int)stk + 252) + 0x14) + 0x20)) = 0x31F;
        *(unsigned int *)(((((int)stk + 252) + 0x14) + 0x24)) = 0xF;
        t36 = 0x3;
    }
    *(unsigned int *)(((((int)stk + 252) + 0x14) + 0x1C)) = t36;
    if (((((((struct o20_int *)0xC3008D0)->v)) & 0x1) != 1) && ((t39 = (((struct o20_int *)0xC3008D0)->v), (t39 & 44) != 0) && (0x1 != 0))) {
        *(unsigned int *)(((((int)stk + 252) + 0x14) + 0x30)) = 0x1;
    } else {
        *(unsigned int *)(((((int)stk + 252) + 0x14) + 0x30)) = 0x0;
    }
    *(unsigned int *)(((((int)stk + 252) + 0x14) + 0x34)) = 0x0;
    *(unsigned int *)(((((int)stk + 252) + 0x14) + 0x38)) = 0x0;
    *(unsigned int *)(((((int)stk + 252) + 0x14) + 0x3C)) = 0x0;
    (((struct o40_uint *)((((int)stk + 252) + 0x14)))->v) = 0x0;
    if ((((((struct o20_int *)0xC3008D0)->v)) & 0x1) == 1) {
        if (0x0 != 0) {
            (((struct o44_uint *)((((int)stk + 252) + 0x14)))->v) = 0x0;
        } else {
            (((struct o44_uint *)((((int)stk + 252) + 0x14)))->v) = 0x2;
        }
    } else {
        if ((((((struct o20_int *)0xC3008D0)->v)) & 44) != 0) {
            if (0x1 != 0) {
                (((struct o44_uint *)((((int)stk + 252) + 0x14)))->v) = 0x0;
            } else {
                (((struct o44_uint *)((((int)stk + 252) + 0x14)))->v) = 0x2;
            }
        } else {
            if (0x0 != 0) {
                (((struct o44_uint *)((((int)stk + 252) + 0x14)))->v) = 0x0;
            } else {
                (((struct o44_uint *)((((int)stk + 252) + 0x14)))->v) = 0x2;
            }
        }
    }
    if (((((struct o0_int *)0xC3008D0)->v)) == 6) {
        (((struct o70_uint *)((((int)stk + 252) + 0x14)))->v) = 0x16;
    } else {
        (((struct o70_uint *)((((int)stk + 252) + 0x14)))->v) = 0x3F;
    }
    if ((((((struct o20_int *)0xC3008D0)->v)) & 16) != 0) {
        (((struct o6C_uint *)((((int)stk + 252) + 0x14)))->v) = 0x0;
    } else {
        (((struct o6C_uint *)((((int)stk + 252) + 0x14)))->v) = 0x1;
    }
    *(unsigned int *)(((((int)stk + 252) + 0x14) + 0x28)) = 0x0;
    *(unsigned int *)(((((int)stk + 252) + 0x14) + 0x2C)) = 0x1;
    (((struct o48_uint *)((((int)stk + 252) + 0x14)))->v) = 0x1;
    (((struct o4C_uint *)((((int)stk + 252) + 0x14)))->v) = 0x0;
    (((struct o50_uint *)((((int)stk + 252) + 0x14)))->v) = 0x0;
    (((struct o54_uint *)((((int)stk + 252) + 0x14)))->v) = 0x0;
    (((struct o58_uint *)((((int)stk + 252) + 0x14)))->v) = 0x0;
    (((struct o5C_uint *)((((int)stk + 252) + 0x14)))->v) = 0x0;
    (((struct o68_uint *)((((int)stk + 252) + 0x14)))->v) = 0x0;
    (((struct o60_uint *)((((int)stk + 252) + 0x14)))->v) = 0x0;
    (((struct o64_uint *)((((int)stk + 252) + 0x14)))->v) = 0xF0;
    (((struct oF8_uint *)((((int)stk + 252) + 0x14)))->v) = 0xAE;
    if ((((((struct o20_int *)0xC3008D0)->v)) & 0x42) == 66) {
        t64 = (((struct o4_int *)0xC1719C8)->v);
        *(unsigned int *)((((int)stk + 252) + 0x0)) = ((((struct o0_int *)0xC1719C8)->v));
        *(unsigned int *)((((int)stk + 252) + 0x4)) = t64;
        t66 = (((struct oC_int *)0xC1719C8)->v);
        *(unsigned int *)((((int)stk + 252) + 0x8)) = ((((struct o8_int *)0xC1719C8)->v));
        *(unsigned int *)((((int)stk + 252) + 0xC)) = t66;
        *(unsigned int *)((((int)stk + 252) + 0x10)) = ((((struct o10_int *)0xC1719C8)->v));
        (((struct oF4_uint *)((((int)stk + 252) + 0x14)))->v) = (*(int *)((((int)stk + 252) + (((((struct o30_int *)0xC3008D0)->v)) << 2))));
        t70 = (((struct oF4_int *)((((int)stk + 252) + 0x14)))->v);
        t75 = t70;
        if (((((((struct o20_int *)0xC3008D0)->v)) & 0x1) != 1) && ((t72 = (((struct o20_int *)0xC3008D0)->v), (t72 & 44) != 0) && (0x1 != 0))) {
            t75 = (t70 - 1);
        }
        (((struct oF0_uint *)((((int)stk + 252) + 0x14)))->v) = t75;
        t77 = *(int *)(((((((struct o30_int *)0xC3008D0)->v)) << 2) + 0xC300DA8));
        (((struct o8_uint *)0xC300BE8)->v) = (((int)((unsigned int)((int)((unsigned int)t77 + (unsigned int)0x0)) + ((((int)0x0 > (int)t77)) ? 1u : 0u))) >> 1);
    } else {
        if (((((((struct o20_int *)0xC3008D0)->v)) & 0x1) != 1) && ((t83 = (((struct o20_int *)0xC3008D0)->v), (t83 & 44) != 0) && (0x1 != 0))) {
            (((struct oF0_uint *)((((int)stk + 252) + 0x14)))->v) = 0x2D;
        } else {
            (((struct oF0_uint *)((((int)stk + 252) + 0x14)))->v) = 0x2E;
        }
        (((struct oF4_uint *)((((int)stk + 252) + 0x14)))->v) = 0x2E;
        (((struct o8_uint *)0xC300BE8)->v) = 0xF0;
    }
    t92 = *(int *)(((((int)stk + 252) + 0x14) + 0xC));
    (((struct o0_uint *)0xC300BE8)->v) = ((((int)((unsigned int)((int)((unsigned int)t92 + (unsigned int)0x0)) + ((((int)0x0 > (int)t92)) ? 1u : 0u))) >> 1) + ((((struct o8_int *)0xC300BE8)->v)));
    (((struct o4_uint *)0xC300BE8)->v) = (*(int *)(((((int)stk + 252) + 0x14) + 0xC)));
    /* manual: the original copies the 63-word block at stk+272 to the outgoing argument area (_quick_mvn) and passes it by value */
    return (FUN_0c1675c0(*(Stk63 *)(((int)stk + 252) + 0x14)));
}
