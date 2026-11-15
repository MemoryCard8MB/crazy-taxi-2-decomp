/* Straight-line functions with calls and guards (batch gen_gv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o104_float { char p[0x104]; float v; };
struct o110_uint { char p[0x110]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o2_short { char p[0x2]; short v; };
struct o20_float { char p[0x20]; float v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o28_int { char p[0x28]; int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o34_int { char p[0x34]; int v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o38_int { char p[0x38]; int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o44_int { char p[0x44]; int v; };
struct o74_uint { char p[0x74]; unsigned int v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_int { char p[0x84]; int v; };
struct o84_uint { char p[0x84]; unsigned int v; };
struct o8A_short { char p[0x8A]; short v; };
struct o90_float { char p[0x90]; float v; };
struct oA4_uchar { char p[0xA4]; unsigned char v; };
struct oA6_ushort { char p[0xA6]; unsigned short v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oC8_float { char p[0xC8]; float v; };
struct oD8_uint { char p[0xD8]; unsigned int v; };
struct oFE_uchar { char p[0xFE]; unsigned char v; };
int CheckColliWallPole(int, int);
int CheckColliWallSegment(int, int);
int FUN_0c018b1c(int);
int FUN_0c018b22(int, int, Stk3);
int FUN_0c018c2a(float, float);
int FUN_0c018c8a(float, float);
int FUN_0c026c02(void);
int FUN_0c026ce6(void);
int FUN_0c02708a(void);
int FUN_0c027096(void);
int FUN_0c027228(void);
int FUN_0c0272a6(int);
int FUN_0c027f28(int);
int FUN_0c027fbe(float, float);
int FUN_0c02803a(int, int, int, int);
int FUN_0c028196(void);
int FUN_0c0281d4(int, int);
int FUN_0c02842e(int);
int FUN_0c0297f4(int, int, float);
int FUN_0c029866(int, int, int, float);
int FUN_0c029b12(int, float);
int FUN_0c02e42a(int, int, int);
int FUN_0c03fbd8(int, int);
int FUN_0c0401d8(int);
int FUN_0c04027a(int, int, float);
int FUN_0c040bec(int, int);
int FUN_0c041a44(int, int);
int FUN_0c0435e2(int, int);
int FUN_0c0438c0(int);
int FUN_0c044940(int, int);
int FUN_0c044964(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c045bac(int, int);
int FUN_0c046466(void);
int FUN_0c0464de(int);
int FUN_0c052d5c(int, int, int, int);
int FUN_0c05d0d8(float);
int FUN_0c05f470(int, int, float, float);
int FUN_0c06753c(int, int);
int FUN_0c06823e(int, int, int, int);
int FUN_0c06a2a0(int);
int FUN_0c072230(int, int);
int FUN_0c072290(int, int);
int FUN_0c073360(void);
int FUN_0c0739a0(int);
float FUN_0c073b40(int, int);
int FUN_0c073c40(int, int, float);
float FUN_0c073c60(int);
int FUN_0c073e10(int);
int FUN_0c075ba0(int);
int FUN_0c07ada0(int, int);
int camSetTarget(int, int, Stk3);
int nlAddVector(int, int);
float nlFloor(float);
float nlLength(int, int);
int nlOuterProduct(int, int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlSubVector(int, int, Stk3);
int nlSubVector3op(int, int, int);
int pfSize(float, float);
int set_event(int, int);
void FUN_0c04739a(int a4);
int FUN_0c03ff4a(int a4);
int FUN_0c064b46(int a4, float f4);
int FUN_0c06cef0(void);
int FUN_0c026e8a(void);
int FUN_0c05074c(int a4, int a5, int a6, int a7, float f4);
float FUN_0c02be68(int a4, float f4);
int FUN_0c04c354(void);
int FUN_0c043e98(int a4, int a5, int a6, int a7, int a8);
int FUN_0c0295c0(int a4, int a5, float f4, float f5);

void FUN_0c04739a(int a4)
{
    int stk[6];
    int t1;
    register int t6;
    register int t14;
    int t21;
    register int t24;
    register int t29;
    register float u34;
    int t35;
    register int t38;
    register int t45;
    register float u50;
    float u22;
    float u27;
    float u36;
    float u42;

    if (a4 == 0) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC2ADA6C) = *(struct mv3 *)(0xC0C3670); }
        (((struct oC_float *)0xC2ADA6C)->v) = 0.0f;
    } else {
        t1 = *(int *)0xC1EC758;
        t6 = 0x0;
        if ((0x80 & t1) != 0) {
            t6 = 0x0;
            if (((((struct o4_float *)0xC2ADA6C)->v)) > -0.0799999982f) {
                t6 = 0x1;
            }
        }
        t14 = 0x0;
        if ((0x40 & t1) != 0) {
            t14 = 0x0;
            if (0.0799999982f > ((((struct o4_float *)0xC2ADA6C)->v))) {
                t14 = 0x1;
            }
        }
        (((struct o4_float *)0xC2ADA6C)->v) = (((((struct o4_float *)0xC2ADA6C)->v)) - (((float)(t6 - t14) * 0.00400000019f)));
        (((struct o4_float *)0xC2ADA6C)->v) = (((((struct o4_float *)0xC2ADA6C)->v)) * 0.800000012f);
        t21 = *(int *)0xC1EC758;
        t24 = 0x0;
        if (((0x20 & t21) != 0) && (u22 = (((struct o0_float *)0xC2ADA6C)->v), 0.0599999987f > u22)) {
            t24 = 0x1;
        }
        t29 = 0x0;
        if (((0x10 & t21) != 0) && (u27 = (((struct o0_float *)0xC2ADA6C)->v), u27 > -0.0599999987f)) {
            t29 = 0x1;
        }
        u34 = ((((struct o0_float *)0xC2ADA6C)->v));
        u34 = u34 + 0.00400000019f * ((float)(t24 - t29));
        (((struct o0_float *)0xC2ADA6C)->v) = (u34 * 0.800000012f);
        t35 = *(int *)0xC1EC758;
        t38 = 0x0;
        if (((0x4 & t35) != 0) && (u36 = (((struct oC_float *)0xC2ADA6C)->v), 8.0f > u36)) {
            t38 = 0x1;
        }
        t45 = 0x0;
        if (((0x2 & t35) != 0) && (u42 = (((struct oC_float *)0xC2ADA6C)->v), u42 > -8.0f)) {
            t45 = 0x1;
        }
        u50 = ((((struct oC_float *)0xC2ADA6C)->v));
        u50 = u50 + 0.400000006f * ((float)(t38 - t45));
        (((struct oC_float *)0xC2ADA6C)->v) = (u50 * 0.800000012f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(0xC2ADA38); }
        nlSubVector(((int)stk + 0), 0xC177D38, *(Stk3 *)(((int)stk + 0)));
        FUN_0c073360();
        nlRotateAY(((unsigned short)((((struct o2_short *)0xC177D50)->v)) + ((int)((((((((struct o4_float *)0xC2ADA6C)->v)) * 65536.0f) / 6.28318548f)) + 0.5f) & 0xFFFF)));
        nlRotateAX(((unsigned short)((((struct o0_short *)0xC177D50)->v)) + ((int)((((((((struct o0_float *)0xC2ADA6C)->v)) * 65536.0f) / 6.28318548f)) + 0.5f) & 0xFFFF)));
        *(float *)(((int)stk + 16)) = 0.0f;
        *(float *)(((int)stk + 12)) = 0.0f;
        *(float *)(((int)stk + 20)) = (-((((struct oC_float *)0xC2ADA6C)->v)));
        FUN_0c072290((((int)stk + 0) + 0xC), (((int)stk + 0) + 0xC));
        nlAddVector(0xC177D38, (((int)stk + 0) + 0xC));
        *(float *)(((int)stk + 16)) = 0.0f;
        *(float *)(((int)stk + 12)) = 0.0f;
        *(float *)(((int)stk + 20)) = (-(FUN_0c073c60(((int)stk + 0))));
        FUN_0c072290((((int)stk + 0) + 0xC), (((int)stk + 0) + 0xC));
        nlAddVector((((int)stk + 0) + 0xC), 0xC177D38);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC2ADA38) = *(struct mv3 *)((((int)stk + 0) + 0xC)); }
        nlPopMatrix(0x1);
    }
}

int FUN_0c03ff4a(int a4)
{
    int stk[9];
    register int t11;
    register int t12;
    register int t13;
    register int t17;
    register int t50;
    register int t67;
    register int t88;
    int t68;

    if (a4 == 0) {
        (((struct o4_uint *)0xC2A59BC)->v) = 0x0;
        (((struct o8_uint *)0xC2A59BC)->v) = 0x0;
        (((struct oC_uint *)0xC2A59BC)->v) = 0x0;
        *(unsigned int *)0xC2AB7F4 = 0x4;
        (((struct o4_uint *)0xC2A5A18)->v) = 0x0;
        if (((((struct o0_int *)0xC1EC71C)->v)) == 2) {
            if (((((struct o8_int *)0xC1EC71C)->v)) != 8) {
                (((struct o0_float *)0xC2A59BC)->v) = 4000.0f;
            } else {
                (((struct o0_float *)0xC2A59BC)->v) = 1300.0f;
            }
        } else {
            (((struct o0_float *)0xC2A59BC)->v) = 1300.0f;
        }
        (((struct o18_uint *)0xC2A59BC)->v) = 0xC1758B4;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC2A59D8) = *(struct mv3 *)(0xC175930); }
        (((struct o28_uint *)0xC2A59BC)->v) = 0x0;
        t11 = (((struct o4_int *)0xC1EC71C)->v);
        t12 = (((struct o8_int *)0xC1EC71C)->v);
        t13 = *(int *)(((((t11 + t12) << 2) + 0xC0F34E8) + 0x0));
        (((struct o10_uint *)0xC2A59BC)->v) = (*(int *)((((((t13 << 1) + t13) << 2) + (*(int *)0xC2ADA7C)) + 0x0)));
        t17 = *(int *)(((((t11 + t12) << 2) + 0xC0F34E8) + 0x0));
        (((struct o14_uint *)0xC2A59BC)->v) = (*(int *)(((*(int *)((((((t17 << 1) + t17) << 2) + (*(int *)0xC2ADA7C)) + 0x4))) + 0x0)));
        FUN_0c0401d8(0x0);
        FUN_0c04027a(0x0, 0x0, 0.0f);
        if (((((struct o0_int *)0xC1EC71C)->v)) == 1) {
            FUN_0c044964(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        }
        FUN_0c03fbd8(0x0, 0xC2A59D8);
        FUN_0c075ba0(0x50);
        FUN_0c044940(0x0, 0x0);
        t88 = (FUN_0c040bec(0x0, 0x0));
    } else {
        if ((*(int *)0xC2AC2F0) == 0) {
            *(unsigned int *)0xC2AC5E0 = ((((struct o0_int *)0xC2A5A18)->v));
        }
        t50 = 0x1;
        if (((((struct o0_int *)0xC1EC71C)->v)) == 1) {
            if (((((struct o4_int *)0xC2ADEC0)->v)) == 47) {
                (((struct o0_float *)0xC2A59BC)->v) = 800.0f;
                t50 = 0x0;
            } else {
                (((struct o0_float *)0xC2A59BC)->v) = 1300.0f;
                t50 = 0x1;
            }
            if (((((struct o0_int *)0xC2ADEC0)->v)) == 2) {
                t50 = 0x0;
            }
        }
        if (t50 == 1) {
            FUN_0c0401d8(0x1);
        }
        if (((((struct o4_int *)0xC2A5A18)->v)) != 0) {
            (((struct o4_uint *)0xC2A5A18)->v) = (((((struct o4_int *)0xC2A5A18)->v)) - 1);
        }
        t67 = FUN_0c0464de(0x2);
        if ((t67 == 1) && (t68 = (((struct o0_int *)0xC2ADEC0)->v), t68 != 2)) {
            FUN_0c04027a(0x1, 0xC2A59D8, ((((struct o0_float *)0xC2A59BC)->v)));
        }
        if (((((struct o0_int *)0xC1EC71C)->v)) == 1) {
            FUN_0c044964(0x1, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        }
        FUN_0c03fbd8(0x1, 0xC2A59D8);
        FUN_0c044940(0x1, 0xC177D38);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(0xC0C3670); }
        *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + (*(float *)0xC0401B4));
        nlPushMatrix(0x0);
        FUN_0c0739a0((((((struct o18_int *)0xC2A59BC)->v)) + 0x7C));
        nlRotateAY((unsigned short)((((struct o8A_short *)(((((struct o18_int *)0xC2A59BC)->v))))->v)));
        FUN_0c072230(((int)stk + 0), 0xC2A59D8);
        t88 = (nlPopMatrix(0x1));
    }
    return t88;
}

int FUN_0c064b46(int a4, float f4)
{
    int stk[19];
    register int t2;
    register int t3;
    register float u5;
    register float u6;
    register float t12;
    register float t21;
    register float t28;
    register int t33;
    register int t35;
    register int t41;
    register int t45;

    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x40)) = *(struct mv3 *)(0xC10FADC); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x34)) = *(struct mv3 *)(0xC10FAE8); }
    *(unsigned int *)(((int)stk + 4)) = 0x3;
    *(unsigned int *)(((int)stk + 48)) = ((((struct o0_int *)0xC10FAF4)->v));
    *(unsigned int *)(((int)stk + 44)) = ((((struct o4_int *)0xC10FAF4)->v));
    t2 = 0x0;
    t3 = 0x0;
    u5 = f4;
    u6 = 2.99999989e+30f;
    for (;;) {
        if ((int)t3 >= (int)0x22) {
            break;
        }
        u5 = ((nlLength((a4 + 0x70), ((((t3 << 1) + t3) << 2) + 0xC2B9D24))));
        if (u6 > u5) {
            t2 = t3;
            u6 = u5;
        }
        t3 = (t3 + 0x1);
    }
    *(unsigned int *)(((int)stk + 0)) = ((((t2 << 1) + t2) << 2) + 0xC2B9D24);
    nlSubVector3op((((int)stk + 0) + 0x20), (((((t2 << 1) + t2) << 2) + 0xC2B9D24) + 0xC), ((((t2 << 1) + t2) << 2) + 0xC2B9D24));
    t12 = FUN_0c073c60((((int)stk + 0) + 0x20));
    if (t12 > 9.99999975e-05f) {
        FUN_0c073c40((((int)stk + 0) + 0x20), (((int)stk + 0) + 0x20), (1.0f / t12));
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x20)) = *(struct mv3 *)(0xC17598C); }
    }
    nlOuterProduct(0xC10D9E0, (((int)stk + 0) + 0x20), (((int)stk + 0) + 0x14));
    nlSubVector3op((((int)stk + 0) + 0x8), (a4 + 0x70), 0xC175930);
    t21 = FUN_0c073b40((((int)stk + 0) + 0x14), (((int)stk + 0) + 0x8));
    if (t21 > 0.0f) {
        (((struct oFE_uchar *)(a4))->v) = ((*(signed char *)(((0xFE + a4) + 0x0))) & 0xFD);
    } else {
        (((struct oFE_uchar *)(a4))->v) = ((*(signed char *)(((0xFE + a4) + 0x0))) | 0x2);
    }
    t28 = nlLength((a4 + 0x70), 0xC175930);
    if (t28 > 90.0f) {
        t33 = (int)((int)(((int (*)(void))((*(int *)((((*(int *)0xC1EC740) << 2) + 0xC110374)))))()) % (int)(*(int *)(((int)stk + 4))));
        t35 = (((int)stk + 0) + 0x34);
        if (((*(signed char *)((a4 + 0xFE))) & 2) != 0) {
            t35 = (((int)stk + 0) + 0x40);
        }
        FUN_0c05f470(a4, (*(int *)((((t33 << 2) + t35) + 0x0))), 20.0f, 5.0f);
    } else {
        t41 = ((int (*)(void))((*(int *)((((*(int *)0xC1EC740) << 2) + 0xC110374)))))();
        if (((*(signed char *)((a4 + 0xFE))) & 2) != 0) {
            t45 = (*(int *)(((int)stk + 48)));
        } else {
            t45 = (*(int *)(((int)stk + 44)));
        }
        FUN_0c05f470(a4, t45, 20.0f, 5.0f);
    }
    *(unsigned int *)((a4 + 0xC)) = 0x1;
    (((struct oFE_uchar *)(a4))->v) = ((*(signed char *)(((0xFE + a4) + 0x0))) | 0x4);
    FUN_0c06a2a0((*(int *)((a4 + 0x10))));
    FUN_0c06823e(a4, 0xC175930, 0x1, 0x14);
    FUN_0c06753c(a4, 0x1);
    (((struct o80_uint *)(a4))->v) = (((((struct o80_int *)(a4))->v)) + 0x1);
    return 0x80;
}

int FUN_0c06cef0(void)
{
    int stk[9];
    register float t5;
    register int t6;
    register float u7;
    register int t15;
    register float u23;
    register float u17;
    register float u18;
    register float u36;
    register float u37;
    register float u41;
    register int t44;
    register int t54;

    FUN_0c018b1c(0x1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x18)) = *(struct mv3 *)(((*(int *)(((*(int *)0xC13C358) + 0x0))) + 0x70)); }
    *(float *)(((int)stk + 28)) = 0.0f;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0xC)) = *(struct mv3 *)(((*(int *)(((*(int *)0xC13C358) + 0x0))) + 0xE8)); }
    *(float *)(((int)stk + 16)) = 0.0f;
    t5 = nlLength((((int)stk + 0) + 0x18), (((int)stk + 0) + 0xC));
    t6 = FUN_0c05d0d8(((t5 * 30.0f) / 80.0f));
    u7 = 0.0f;
    if ((t6 == 0) && !(0.0f > ((t5 * 30.0f) / 80.0f))) {
        u7 = ((t5 * 30.0f) / 80.0f);
    }
    nlSubVector3op((((int)stk + 0) + 0x18), 0xC17599C, ((*(int *)(((*(int *)0xC13C358) + 0x0))) + 0x70));
    *(float *)(((int)stk + 28)) = 0.0f;
    FUN_0c073e10((((int)stk + 0) + 0x18));
    FUN_0c073c40((((int)stk + 0) + 0x18), (((int)stk + 0) + 0x18), 25.0f);
    nlAddVector((((int)stk + 0) + 0x18), 0xC17599C);
    t15 = FUN_0c029b12((((int)stk + 0) + 0x18), 10.0f);
    u23 = 3.40282347e+38f;
    if ((*(int *)((t15 + 0x1C))) != -1) {
        u17 = (((struct o4_float *)(t15))->v);
        u18 = *(float *)0xC177D3C;
        _builtin_fabsf((u18 - u17));
        u23 = _builtin_fabsf((u18 - u17));
    }
    if (20.0f > u23) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x18)) = *(struct mv3 *)(t15); }
    } else {
        *(float *)(((int)stk + 28)) = ((*(float *)0xC1759A0) + ((((struct o0_float *)0xC06D124)->v)));
    }
    *(float *)(((int)stk + 28)) = ((*(float *)(((int)stk + 28))) + (u7 + 12.5f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((((int)stk + 0) + 0x18)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x18)) = *(struct mv3 *)(((*(int *)(((*(int *)0xC13C358) + 0x0))) + 0x70)); }
    u36 = (((struct o8_float *)0xC06D124)->v);
    u37 = ((u7 + 12.5f) * u36);
    if (10.0f > ((u7 + 12.5f) * u36)) {
        u37 = 10.0f;
    }
    *(float *)(((int)stk + 28)) = ((*(float *)(((int)stk + 28))) + u37);
    camSetTarget((((int)stk + 0) + 0x18), 0x2, *(Stk3 *)(((int)stk + 0)));
    u41 = (((struct o10_float *)0xC06D124)->v);
    FUN_0c018c8a(u41, 0.0f);
    nlSubVector3op((((int)stk + 0) + 0xC), ((int)stk + 0), (((int)stk + 0) + 0x18));
    t44 = FUN_0c0297f4((((int)stk + 0) + 0x18), (((int)stk + 0) + 0xC), 0.0f);
    if ((*(int *)((t44 + 0x1C))) != -1) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(t44); }
    }
    FUN_0c018b22(((int)stk + 0), 0x2, *(Stk3 *)(((int)stk + 0)));
    FUN_0c018c2a(u41, 0.0f);
    t54 = (((struct o80_int *)((*(int *)(((*(int *)0xC13C358) + 0x0)))))->v);
    if ((int)t54 >= (int)0x2) {
        (((struct o8_uint *)0xC2BB3D8)->v) = 0x0;
        (((struct o0_uint *)0xC2BB3D8)->v) = (((((struct o0_int *)0xC2BB3D8)->v)) + 0x1);
    }
    return t54;
}

int FUN_0c026e8a(void)
{
    register int t0;
    register float u0;

    { struct mv9 { int w[9]; }; *(struct mv9 *)(0xC270B38) = *(struct mv9 *)(0xC270B94); }
    t0 = *(int *)0xC1EC71C;
    switch (t0) {
    case 0:
        FUN_0c02708a();
        break;
    case 1:
        FUN_0c027096();
        break;
    case 2:
        FUN_0c027228();
        break;
    }
    t0 = (((struct o8_int *)0xC270B04)->v);
    if (!(((((struct o4_float *)0xC270B04)->v)) > 0.0f)) {
        if (((((struct o24_int *)0xC270B44)->v)) == 0x101) {
            FUN_0c0272a6(t0);
            (((struct o24_uint *)0xC270B44)->v) = ((((struct oC_int *)0xC270B04)->v));
        }
    } else {
        (((struct o34_uint *)0xC270B04)->v) = (int)((float)((((struct o34_int *)0xC270B04)->v)) + (((float)((unsigned short)(((*(int *)((t0 + 0x0))) - ((((struct o34_int *)0xC270B04)->v))) + 0x8000) - 32768) * ((((struct o0_float *)0xC270B04)->v)))));
        (((struct o38_uint *)0xC270B04)->v) = (int)((float)((((struct o38_int *)0xC270B04)->v)) + (((float)((unsigned short)(((*(int *)((((((struct o8_int *)0xC270B04)->v)) + 0x4))) - ((((struct o38_int *)0xC270B04)->v))) + 0x8000) - 32768) * ((((struct o0_float *)0xC270B04)->v)))));
        u0 = ((((struct o3C_float *)0xC270B04)->v));
        u0 = u0 + ((((struct o0_float *)0xC270B04)->v)) * ((((((struct o8_float *)(((((struct o8_int *)0xC270B04)->v))))->v)) - ((((struct o3C_float *)0xC270B04)->v))));
        (((struct o3C_float *)0xC270B04)->v) = u0;
        u0 = ((((struct o0_float *)0xC270B44)->v));
        u0 = u0 + ((((struct o0_float *)0xC270B04)->v)) * ((((((struct oC_float *)(((((struct o8_int *)0xC270B04)->v))))->v)) - ((((struct o0_float *)0xC270B44)->v))));
        (((struct o0_float *)0xC270B44)->v) = u0;
        u0 = ((((struct o4_float *)0xC270B44)->v));
        u0 = u0 + ((((struct o0_float *)0xC270B04)->v)) * ((((((struct o10_float *)(((((struct o8_int *)0xC270B04)->v))))->v)) - ((((struct o4_float *)0xC270B44)->v))));
        (((struct o4_float *)0xC270B44)->v) = u0;
        u0 = ((((struct o8_float *)0xC270B44)->v));
        u0 = u0 + ((((struct o0_float *)0xC270B04)->v)) * ((((((struct o14_float *)(((((struct o8_int *)0xC270B04)->v))))->v)) - ((((struct o8_float *)0xC270B44)->v))));
        (((struct o8_float *)0xC270B44)->v) = u0;
        u0 = ((((struct oC_float *)0xC270B44)->v));
        u0 = u0 + ((((struct o0_float *)0xC270B04)->v)) * ((((((struct o18_float *)(((((struct o8_int *)0xC270B04)->v))))->v)) - ((((struct oC_float *)0xC270B44)->v))));
        (((struct oC_float *)0xC270B44)->v) = u0;
        u0 = ((((struct o10_float *)0xC270B44)->v));
        u0 = u0 + ((((struct o0_float *)0xC270B04)->v)) * ((((((struct o1C_float *)(((((struct o8_int *)0xC270B04)->v))))->v)) - ((((struct o10_float *)0xC270B44)->v))));
        (((struct o10_float *)0xC270B44)->v) = u0;
        u0 = ((((struct o14_float *)0xC270B44)->v));
        u0 = u0 + ((((struct o0_float *)0xC270B04)->v)) * ((((((struct o20_float *)(((((struct o8_int *)0xC270B04)->v))))->v)) - ((((struct o14_float *)0xC270B44)->v))));
        (((struct o14_float *)0xC270B44)->v) = u0;
        (((struct o4_float *)0xC270B04)->v) = (((((struct o4_float *)0xC270B04)->v)) - 1.0f);
    }
    if (((((struct o24_int *)0xC270B44)->v)) == 0) {
        if ((*(int *)0xC1EC71C) == 1) {
            { struct mv9 { int w[9]; }; *(struct mv9 *)(0xC270B38) = *(struct mv9 *)(0xC270B14); }
        }
    }
    { struct mv9 { int w[9]; }; *(struct mv9 *)(0xC270B94) = *(struct mv9 *)(0xC270B38); }
    if (((((struct o28_int *)0xC270B44)->v)) != 0) {
        FUN_0c0272a6(0xC270B70);
    } else {
        FUN_0c026c02();
        FUN_0c026ce6();
    }
    FUN_0c026c02();
    return FUN_0c026ce6();
}

int FUN_0c05074c(int a4, int a5, int a6, int a7, float f4)
{
    int stk[3];
    register int t6;
    register int t14;
    int t9;
    register int t65;
    register int t47;
    register int t48;
    register float u49;
    register float u50;
    register float u51;

    *(unsigned int *)(((int)stk + 0)) = a4;
    { struct mv2 { int w[2]; }; *(struct mv2 *)((((int)stk + 0) + 0x4)) = *(struct mv2 *)(0xC10CA18); }
    FUN_0c052d5c((((int)stk + 0) + 0x4), ((int)((int)(*(int *)(((*(int *)0xC2B2950) + 0x0))) / (int)0x3C)), 0x2, a7);
    t6 = (int)((int)(*(int *)(((*(int *)0xC2B2950) + 0x0))) % (int)0x3C);
    (((struct o4_float *)0xC2B26D0)->v) = 590.0f;
    (((struct o8_float *)0xC2B26D0)->v) = 430.0f;
    if (((int)(*(int *)(((*(int *)0xC2B2950) + 0x0))) >= (int)0x3C) && (t9 = *(int *)(((int)stk + 0)), t9 != 0)) {
        if ((int)t6 >= (int)0x1E) {
            (((struct o10_float *)0xC2B26D0)->v) = 1.0f;
            (((struct o0_uint *)0xC2B26D0)->v) = (*(int *)((0xC10CBB4 + ((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) << 2))));
            t47 = 0x1E;
            u49 = 430.0f;
        } else {
            t14 = (int)((int)(*(int *)(((*(int *)0xC2B2950) + 0x0))) % (int)0x1E);
            (((struct o10_float *)0xC2B26D0)->v) = (_builtin_fabsf((float)((int)(float)t14 - 15)) / 15.0f);
            if (15.0f > (float)t14) {
                if ((int)(*(int *)(((((int)stk + 0) + 0x4) + 0x0))) > 0) {
                    (((struct o0_uint *)0xC2B26D0)->v) = (*(int *)((0xC10CBB4 + (((int)((int)((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) - 1) % (int)0xA)) << 2))));
                } else {
                    (((struct o0_uint *)0xC2B26D0)->v) = (*(int *)0xC10CBB4);
                }
            } else {
                if ((int)(*(int *)(((((int)stk + 0) + 0x4) + 0x0))) > 0) {
                    (((struct o0_uint *)0xC2B26D0)->v) = (*(int *)((0xC10CBB4 + (((int)((int)(*(int *)(((((int)stk + 0) + 0x4) + 0x0))) % (int)0xA)) << 2))));
                } else {
                    (((struct o0_uint *)0xC2B26D0)->v) = (*(int *)0xC10CBB4);
                }
            }
            t47 = 0xC10CBB4;
            t48 = 0xA;
            u49 = (_builtin_fabsf((float)((int)(float)t14 - 15)) / 15.0f);
            u50 = (float)t14;
            u51 = 15.0f;
        }
        (((struct o28_uint *)0xC2B26D0)->v) = 0x0;
        t65 = (FUN_0c07ada0(0xC2B26D0, t47));
    } else {
        FUN_0c028196();
        FUN_0c027f28(0x1);
        FUN_0c02803a(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
        pfSize(1.0f, 1.0f);
        FUN_0c0281d4(((int)((int)(*(int *)(((*(int *)0xC2B2950) + 0x0))) / (int)0x3C)), 0x1);
        FUN_0c027fbe(574.0f, 414.0f);
        t65 = (FUN_0c02842e((*(int *)0xC09DA20)));
    }
    return t65;
}

float FUN_0c02be68(int a4, float f4)
{
    int stk[14];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register float F2;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    register float w0_5;
    register float w0_6;
    v0_1 = a4;
    w0_1 = f4;
    w0_5 = nlFloor(((*(float *)((v0_1 + 0x0))) / ((((struct o20_float *)0xC273810)->v))));
    w0_6 = nlFloor((((((struct o8_float *)(v0_1))->v)) / ((((struct o20_float *)0xC273810)->v))));
    v0_2 = (((struct o4_int *)0xC273810)->v);
    v0_4 = (((struct o8_int *)0xC273810)->v);
    v0_5 = (((struct o14_int *)0xC273810)->v);
    v0_3 = (0xC273814);
    v0_0 = (v0_1);
    v0_1 = (((v0_5 * ((int)w0_6 - v0_4)) + ((int)w0_5 - v0_2)));
    w0_0 = (w0_6);
    w0_3 = (w0_1);
    w0_4 = (-3.40282347e+38f);
    w0_1 = (3.40282347e+38f);
    w0_2 = (3.40282347e+38f);
    FPUL_ = ((int)w0_6);
    if (((int)((v0_5 * ((int)w0_6 - v0_4)) + ((int)w0_5 - v0_2)) >= 0)) goto L_C02BED0;
    L_C02C030:;
    return w0_0;
    L_C02BED0:;
    if (((int)v0_1 < (int)(*(int *)((v0_3 + 0x18))))) goto L_C02BEDA;
    goto L_C02C030;
    L_C02BEDA:;
    v0_2 = (((struct o0_int *)0xC273810)->v);
    v0_6 = (v0_2);
    if (((*(int *)(((v0_1 << 2) + v0_2))) != 0)) goto L_C02BEEC;
    goto L_C02C030;
    L_C02BEEC:;
    *(unsigned int *)(((int)stk + 0)) = (v0_1 << 2);
    v0_1 = *(int *)((((((struct o0_int *)0xC273810)->v)) + (v0_1 << 2)));
    *(unsigned int *)(((int)stk + 28)) = v0_0;
    *(float *)(((int)stk + 48)) = w0_3;
    *(float *)(((int)stk + 52)) = w0_3;
    v0_4 = ((((int)stk + 0) + 0x4));
    v0_5 = ((((int)stk + 0) + 0x14));
    v0_1 = ((v0_1 + 0x4));
    v0_3 = ((*(short *)(((*(int *)((((((struct o0_int *)0xC273810)->v)) + (*(int *)(((int)stk + 0)))))) + 0x0))));
    v0_2 = (0xC273810);
    v0_7 = ((((int)stk + 0) + 0xC));
    L_C02BF88:;
    if ((v0_3 != 0)) goto L_C02BF1A;
    if ((!(w0_4 > 0.0f))) goto L_C02BFAC;
    w0_0 = (*(float *)((v0_0 + 0x0)));
    w0_0 = w0_0 + w0_4 * (*(float *)((v0_5 + 0x0)));
    *(float *)((v0_0 + 0x0)) = w0_0;
    w0_1 = ((((struct o8_float *)(v0_0))->v));
    w0_1 = w0_1 + w0_4 * ((((struct o4_float *)(v0_5))->v));
    (((struct o8_float *)(v0_0))->v) = w0_1;
    w0_0 = (w0_4);
    w0_4 = (w0_1);
    L_C02BFEE:;
    v0_2 = *(short *)(((*(int *)(((*(int *)((v0_2 + 0x0))) + (*(int *)(((int)stk + 0)))))) + 0x2));
    v0_6 = (v0_2);
    v0_3 = (v0_2);
    L_C02C02C:;
    if ((v0_3 != 0)) goto L_C02BFFA;
    goto L_C02C030;
    L_C02BFFA:;
    v0_2 = CheckColliWallPole((((int)stk + 0) + 0x1C), (*(int *)((v0_1 + 0x0))));
    v0_6 = (v0_2);
    v0_1 = ((v0_1 + 0x4));
    if ((v0_2 == 0)) goto L_C02C02A;
    w0_0 = (*(float *)((v0_0 + 0x0)));
    w0_0 = w0_0 + (*(float *)(((int)stk + 40))) * (*(float *)(((int)stk + 32)));
    *(float *)((v0_0 + 0x0)) = w0_0;
    w0_0 = (((struct o28_float *)(((int)stk + 0)))->v);
    w0_1 = ((((struct o8_float *)(v0_0))->v));
    w0_1 = w0_1 + w0_0 * ((((struct o24_float *)(((int)stk + 0)))->v));
    (((struct o8_float *)(v0_0))->v) = w0_1;
    v0_6 = (0x8);
    w0_0 = (w0_0);
    goto L_C02C030;
    L_C02C02A:;
    v0_3 = ((v0_3 - 1));
    goto L_C02C02C;
    L_C02BFAC:;
    w0_4 = ((w0_3 * (1.0f + 1.0f)));
    if ((!((w0_3 * (1.0f + 1.0f)) > w0_2))) goto L_C02BFD2;
    w0_0 = (*(float *)((v0_0 + 0x0)));
    w0_0 = w0_0 + w0_2 * (*(float *)((v0_7 + 0x0)));
    *(float *)((v0_0 + 0x0)) = w0_0;
    w0_1 = (((struct o4_float *)(v0_7))->v);
    w0_0 = ((((struct o8_float *)(v0_0))->v));
    w0_0 = w0_0 + w0_2 * w0_1;
    (((struct o8_float *)(v0_0))->v) = w0_0;
    w0_0 = (w0_2);
    w0_4 = (w0_1);
    goto L_C02BFEE;
    L_C02BFD2:;
    if ((!(w0_3 > w0_1))) goto L_C02BFEE;
    w0_0 = (*(float *)((v0_0 + 0x0)));
    w0_0 = w0_0 + w0_1 * (*(float *)((v0_4 + 0x0)));
    *(float *)((v0_0 + 0x0)) = w0_0;
    w0_2 = (((struct o4_float *)(v0_4))->v);
    w0_0 = ((((struct o8_float *)(v0_0))->v));
    w0_0 = w0_0 + w0_1 * w0_2;
    (((struct o8_float *)(v0_0))->v) = w0_0;
    w0_0 = (w0_1);
    w0_4 = (w0_2);
    goto L_C02BFEE;
    L_C02BF1A:;
    v0_8 = CheckColliWallSegment((((int)stk + 0) + 0x1C), (*(int *)((v0_1 + 0x0))));
    v0_6 = (v0_8);
    v0_1 = ((v0_1 + 0x4));
    if ((v0_8 == 1)) goto L_C02BF2E;
    if (!((v0_6 == 2))) goto L_C02BF86;
    if ((!(w0_1 > (*(float *)(((int)stk + 40)))))) goto L_C02BF86;
    w0_1 = *(float *)(((int)stk + 40));
    { struct mv2 { int w[2]; }; *(struct mv2 *)(v0_4) = *(struct mv2 *)((((int)stk + 0) + 0x20)); }
    w0_1 = (w0_1);
    goto L_C02BF86;
    L_C02BF86:;
    v0_3 = ((v0_3 - 1));
    goto L_C02BF88;
    L_C02BF2E:;
    if ((!((*(float *)(((int)stk + 40))) > w0_3))) goto L_C02BF52;
    if ((!(w0_2 > (*(float *)(((int)stk + 40)))))) goto L_C02BF86;
    w0_2 = *(float *)(((int)stk + 40));
    { struct mv2 { int w[2]; }; *(struct mv2 *)(v0_7) = *(struct mv2 *)((((int)stk + 0) + 0x20)); }
    w0_2 = (w0_2);
    goto L_C02BF86;
    L_C02BF52:;
    if ((!((*(float *)(((int)stk + 40))) > w0_4))) goto L_C02BF86;
    w0_4 = *(float *)(((int)stk + 40));
    { struct mv2 { int w[2]; }; *(struct mv2 *)(v0_5) = *(struct mv2 *)((((int)stk + 0) + 0x20)); }
    w0_4 = (w0_4);
    goto L_C02BF86;
}

int FUN_0c04c354(void)
{
    int stk[7];
    register int t7;
    register int t60;
    register int t8;
    register int t10;
    register int t33;
    register int t48;
    register int t34;
    register int t35;
    register int t46;
    int t1;

    if (((*(int *)0xC175C74) == 4) && (t1 = *(int *)0xC2ADF74, t1 == 0)) {
        *(unsigned int *)0xC2ADF74 = 0x1;
    }
    t60 = *(int *)0xC175C74;
    if (t60 != 4) {
        *(unsigned int *)0xC2ADF74 = 0x0;
    }
    t7 = *(int *)0xC2ADF74;
    if ((int)t7 > 0) {
        if ((int)t7 < (int)0x4) {
            t8 = ((~(((~t7) + 0x1) & 0x1)) + 0x1);
            if ((int)t7 >= 0) {
                t8 = (t7 & 0x1);
            }
            if (t8 == 1) {
                t10 = 0xC175A58;
                for (;;) {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x10)) = *(struct mv3 *)((t10 + 0x5C)); }
                    *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) - (1.0f + 1.0f));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x4)) = *(struct mv3 *)(0xC1759B4); }
                    FUN_0c073c40((((int)stk + 0) + 0x4), (((int)stk + 0) + 0x4), 0.200000003f);
                    FUN_0c02e42a((((int)stk + 0) + 0x10), (((int)stk + 0) + 0x4), 0x4);
                    FUN_0c026ce6();
                    t10 = (t10 + 0x84);
                    if ((unsigned int)t10 >= (unsigned int)0xC175C68) {
                        break;
                    }
                }
            }
        }
        t33 = *(int *)0xC2ADF74;
        t48 = t33;
        if (t33 == 1) {
            *(unsigned int *)(((int)stk + 0)) = 0x4;
            t34 = 0x0;
            for (;;) {
                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x10)) = *(struct mv3 *)(0xC10C608); }
                t35 = ((~(((~t34) + 0x1) & 0x1)) + 0x1);
                if ((int)t34 >= 0) {
                    t35 = (t34 & 0x1);
                }
                if (t35 != 0) {
                    *(float *)(((int)stk + 16)) = -0.800000012f;
                } else {
                    *(float *)(((int)stk + 16)) = 0.800000012f;
                }
                FUN_0c073360();
                nlRotateAY((unsigned short)(*(short *)0xC17593E));
                FUN_0c072230((((int)stk + 0) + 0x10), (((int)stk + 0) + 0x10));
                nlPopMatrix(0x1);
                *(float *)(((int)stk + 20)) = -1.0f;
                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x4)) = *(struct mv3 *)((((((((t34 << 2) << 2) << 1) + t34) << 2) + 0xC175A58) + 0x5C)); }
                *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + 5.0f);
                FUN_0c02e42a((((int)stk + 0) + 0x4), (((int)stk + 0) + 0x10), 0x3);
                t46 = FUN_0c026ce6();
                t34 = (t34 + 0x1);
                if ((int)t34 >= (int)(*(int *)(((int)stk + 0)))) {
                    break;
                }
            }
            t48 = t46;
        }
        *(unsigned int *)0xC2ADF74 = ((*(int *)0xC2ADF74) + 0x1);
        t60 = t48;
    }
    return t60;
}

int FUN_0c043e98(int a4, int a5, int a6, int a7, int a8)
{
    int stk[7];
    register int t0;
    register int t1;
    register int t56;
    register int t2;
    int t6;
    register int t14;
    register int t31;
    register int t34;
    register float u36;
    int t52;
    int t9;

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 12)) = a5;
    *(unsigned int *)(((int)stk + 0)) = a6;
    *(unsigned int *)(((int)stk + 4)) = a7;
    t0 = FUN_0c046466();
    t1 = set_event(0x12C, 0xC044664);
    t56 = 0x0;
    if (t1 != 0) {
        t2 = *(int *)0xC2A59C0;
        *(unsigned int *)0xC2A59C0 = (t2 + 0x1);
        (((struct o74_uint *)(t1))->v) = ((t2 + 0x1) - 1);
        *(unsigned int *)0xC2AB7EC = ((*(int *)0xC2AB7EC) + 0x1);
        (((struct o78_uint *)(t1))->v) = (*(int *)(((int)stk + 8)));
        (((struct o80_uint *)(t1))->v) = 0x0;
        t6 = ((t0 << 2) << 2);
        if ((int)(*(int *)(((int)stk + 8))) >= (int)0x11) {
            t6 = (((t0 << 2) << 2) & 0xFFFF7FFF);
        }
        if (((0x8000 & t6) == 0) && (t9 = *(int *)(((int)stk + 0)), t9 != 0)) {
            (((struct o80_uint *)(t1))->v) = (*(int *)(((int)stk + 0)));
        }
        if ((*(int *)(((int)stk + 4))) == 0) {
            t14 = (((struct o80_int *)(t1))->v);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x8C + t1)) = *(struct mv3 *)((*(int *)((((((t14 << 1) + t14) << 2) + (*(int *)0xC2ADA7C)) + 0x0)))); }
        } else {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x8C + t1)) = *(struct mv3 *)((*(int *)(((int)stk + 4)))); }
        }
        FUN_0c0438c0(t1);
        (((struct o84_uint *)(t1))->v) = (((((struct o84_int *)(t1))->v)) | 0x10);
        if (((((struct o78_int *)(t1))->v)) == 0) {
            (((struct o84_uint *)(t1))->v) = (((((struct o84_int *)(t1))->v)) | 0x2);
        }
        (((struct oD8_uint *)(t1))->v) = (*(int *)(((int)stk + 12)));
        (((struct oC8_float *)(t1))->v) = 0.00999999978f;
        t31 = (t6 & 0x83FF);
        if ((0x80000000 & a8) != 0) {
            t31 = (t6 & 0x3FF);
        }
        (((struct oA6_ushort *)(t1))->v) = (t31 + a8);
        t34 = FUN_0c029b12((0x8C + t1), 30.0f);
        if ((*(int *)((t34 + 0x1C))) != -1) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0xEC + t1)) = *(struct mv3 *)((t34 + 0xC)); }
            (((struct o110_uint *)(t1))->v) = 0xA;
            u36 = (((struct o18_float *)(t34))->v);
            (((struct o104_float *)(t1))->v) = u36;
            (((struct o90_float *)(t1))->v) = u36;
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x10)) = *(struct mv3 *)(0xC0C3670); }
        FUN_0c041a44(t1, (((int)stk + 0) + 0x10));
        (((struct oA4_uchar *)(t1))->v) = (*(signed char *)(((0x108 + t1) + 0x0)));
        *(unsigned char *)(((0xA4 + t1) + 0x1)) = (*(signed char *)(((0x108 + t1) + 0x1)));
        *(unsigned char *)(((0xA4 + t1) + 0x2)) = (*(signed char *)(((0x108 + t1) + 0x2)));
        *(unsigned char *)(((0xA4 + t1) + 0x3)) = (*(signed char *)(((0x108 + t1) + 0x3)));
        *(unsigned char *)(((0xA4 + t1) + 0x4)) = (*(signed char *)(((0x108 + t1) + 0x4)));
        *(unsigned char *)(((0xA4 + t1) + 0x5)) = (*(signed char *)(((0x108 + t1) + 0x5)));
        FUN_0c0435e2(t1, ((((struct o84_int *)(t1))->v)));
        t52 = (((struct o78_int *)(t1))->v);
        if ((t52 != 19) && (t52 != 17)) {
        } else {
            FUN_0c045bac(t1, 0x1);
        }
        t56 = t1;
    }
    return t56;
}

int FUN_0c0295c0(int a4, int a5, float f4, float f5)
{
    int stk[11];
    register int t1;
    register int t2;
    register float u3;
    register int t4;
    register float u6;
    register int t7;
    register int t10;
    register float u11;
    register float u14;
    register float u17;
    register float u20;
    register float u21;
    register float u22;
    register float u25;
    register float u26;
    register float u29;
    register float u30;
    register float u33;
    register float u34;
    register int t46;
    register float u47;
    register float u50;
    register float u53;
    register float u56;
    register float u57;
    register float u58;
    register float u61;
    register float u62;
    register float u65;
    register float u66;
    register float u69;
    register float u70;
    register float u80;
    register float u86;
    register float u89;
    register float u92;
    register float u97;
    register float u100;
    register float u103;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x8)) = *(struct mv3 *)(a5); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x14)) = *(struct mv3 *)((*(int *)(((int)stk + 0)))); }
    *(float *)(((int)stk + 40)) = 1.0f;
    (((struct o8_uint *)0xC270F90)->v) = 0x32;
    t1 = 0x0;
    t2 = 0x0;
    u3 = 1.0f;
    for (;;) {
        t4 = FUN_0c029866((((int)stk + 0) + 0x14), (((int)stk + 0) + 0x8), (((int)stk + 0) + 0x20), f5);
        if (t4 != 0) {
            u6 = *(float *)(((int)stk + 40));
            if (u6 == 0.0f) {
                t7 = (((struct o8_int *)0xC270F90)->v);
                (((struct o8_uint *)0xC270F90)->v) = (t7 - 1);
                if ((int)(t7 - 1) <= 0) {
                    break;
                }
                t10 = *(int *)(((int)stk + 32));
                u11 = (*(float *)(((int)stk + 20)));
                u11 = u11 + u6 * (*(float *)(((int)stk + 8)));
                *(float *)(((int)stk + 20)) = u11;
                u14 = (*(float *)(((int)stk + 24)));
                u14 = u14 + u6 * (*(float *)(((int)stk + 12)));
                *(float *)(((int)stk + 24)) = u14;
                u17 = (*(float *)(((int)stk + 28)));
                u17 = u17 + u6 * (*(float *)(((int)stk + 16)));
                *(float *)(((int)stk + 28)) = u17;
                u20 = *(float *)((((((((struct o44_int *)(t10))->v)) * 0x1C) + ((((struct o0_int *)0xC270F50)->v))) + 0x0));
                u21 = 1.0f;
                u21 = u21 + u20 * f4;
                u22 = *(float *)(((int)stk + 36));
                u25 = (-(u22 * u21));
                u26 = (*(float *)(((int)stk + 8)));
                u26 = u26 + u25 * (*(float *)((t10 + 0x0)));
                *(float *)(((int)stk + 8)) = u26;
                u29 = (-(u22 * u21));
                u30 = (*(float *)(((int)stk + 12)));
                u30 = u30 + u29 * ((((struct o4_float *)(t10))->v));
                *(float *)(((int)stk + 12)) = u30;
                u33 = (-(u22 * u21));
                u34 = (*(float *)(((int)stk + 16)));
                u34 = u34 + u33 * ((((struct o8_float *)(t10))->v));
                *(float *)(((int)stk + 16)) = u34;
                if (t2 == 0) {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC270F54) = *(struct mv3 *)((((int)stk + 0) + 0x14)); }
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC270F60) = *(struct mv3 *)(t10); }
                    (((struct o1C_float *)0xC270F50)->v) = u6;
                    (((struct o20_uint *)0xC270F50)->v) = ((((struct o44_int *)(t10))->v));
                }
                u3 = (u3 - u6);
                *(float *)(((int)stk + 40)) = u3;
                t1 = (t1 | ((int)0x1 << (int)((((struct o44_int *)((*(int *)(((int)stk + 32)))))->v))));
                t2 = (t2 + 0x1);
                continue;
            }
            t46 = *(int *)(((int)stk + 32));
            u47 = (*(float *)(((int)stk + 20)));
            u47 = u47 + u6 * (*(float *)(((int)stk + 8)));
            *(float *)(((int)stk + 20)) = u47;
            u50 = (*(float *)(((int)stk + 24)));
            u50 = u50 + u6 * (*(float *)(((int)stk + 12)));
            *(float *)(((int)stk + 24)) = u50;
            u53 = (*(float *)(((int)stk + 28)));
            u53 = u53 + u6 * (*(float *)(((int)stk + 16)));
            *(float *)(((int)stk + 28)) = u53;
            u56 = *(float *)((((((((struct o44_int *)(t46))->v)) * 0x1C) + ((((struct o0_int *)0xC270F50)->v))) + 0x0));
            u57 = 1.0f;
            u57 = u57 + u56 * f4;
            u58 = *(float *)(((int)stk + 36));
            u61 = (-(u58 * u57));
            u62 = (*(float *)(((int)stk + 8)));
            u62 = u62 + u61 * (*(float *)((t46 + 0x0)));
            *(float *)(((int)stk + 8)) = u62;
            u65 = (-(u58 * u57));
            u66 = (*(float *)(((int)stk + 12)));
            u66 = u66 + u65 * ((((struct o4_float *)(t46))->v));
            *(float *)(((int)stk + 12)) = u66;
            u69 = (-(u58 * u57));
            u70 = (*(float *)(((int)stk + 16)));
            u70 = u70 + u69 * ((((struct o8_float *)(t46))->v));
            *(float *)(((int)stk + 16)) = u70;
            if (t2 == 0) {
                { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC270F54) = *(struct mv3 *)((((int)stk + 0) + 0x14)); }
                { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC270F60) = *(struct mv3 *)(t46); }
                (((struct o1C_float *)0xC270F50)->v) = u6;
                (((struct o20_uint *)0xC270F50)->v) = ((((struct o44_int *)(t46))->v));
            }
            u3 = (u3 - u6);
            *(float *)(((int)stk + 40)) = u3;
            t1 = (t1 | ((int)0x1 << (int)((((struct o44_int *)((*(int *)(((int)stk + 32)))))->v))));
            t2 = (t2 + 0x1);
            continue;
        }
        if (t2 != 0) {
            u80 = *(float *)(((int)stk + 40));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC270F74) = *(struct mv3 *)((((int)stk + 0) + 0x14)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC270F80) = *(struct mv3 *)((*(int *)(((int)stk + 32)))); }
            (((struct o3C_float *)0xC270F50)->v) = u80;
            (((struct o0_uint *)0xC270F90)->v) = ((((struct o44_int *)((*(int *)(((int)stk + 32)))))->v));
            u86 = (*(float *)(((int)stk + 20)));
            u86 = u86 + u80 * (*(float *)(((int)stk + 8)));
            *(float *)(((int)stk + 20)) = u86;
            u89 = (*(float *)(((int)stk + 24)));
            u89 = u89 + u80 * (*(float *)(((int)stk + 12)));
            *(float *)(((int)stk + 24)) = u89;
            u92 = (*(float *)(((int)stk + 28)));
            u92 = u92 + u80 * (*(float *)(((int)stk + 16)));
            *(float *)(((int)stk + 28)) = u92;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((*(int *)(((int)stk + 0)))) = *(struct mv3 *)((((int)stk + 0) + 0x14)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((*(int *)(((int)stk + 4)))) = *(struct mv3 *)((((int)stk + 0) + 0x8)); }
            (((struct o4_uint *)0xC270F90)->v) = t1;
            return 0xC270F54;
        }
        (((struct o0_uint *)0xC270F90)->v) = 0xFFFFFFFF;
        (((struct o20_uint *)0xC270F50)->v) = 0xFFFFFFFF;
        u97 = (*(float *)(((int)stk + 20)));
        u97 = u97 + 1.0f * (*(float *)(((int)stk + 8)));
        *(float *)(((int)stk + 20)) = u97;
        u100 = (*(float *)(((int)stk + 24)));
        u100 = u100 + 1.0f * (*(float *)(((int)stk + 12)));
        *(float *)(((int)stk + 24)) = u100;
        u103 = (*(float *)(((int)stk + 28)));
        u103 = u103 + 1.0f * (*(float *)(((int)stk + 16)));
        *(float *)(((int)stk + 28)) = u103;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((*(int *)(((int)stk + 0)))) = *(struct mv3 *)((((int)stk + 0) + 0x14)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((*(int *)(((int)stk + 4)))) = *(struct mv3 *)((((int)stk + 0) + 0x8)); }
        (((struct o4_uint *)0xC270F90)->v) = t1;
        return 0xC270F54;
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((*(int *)(((int)stk + 0)))) = *(struct mv3 *)((((int)stk + 0) + 0x14)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((*(int *)(((int)stk + 4)))) = *(struct mv3 *)((((int)stk + 0) + 0x8)); }
    (((struct o4_uint *)0xC270F90)->v) = t1;
    return 0xC270F54;
}
