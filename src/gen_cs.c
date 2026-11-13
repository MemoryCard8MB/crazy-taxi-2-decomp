/* Straight-line functions with calls and guards (batch gen_cs): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o13_uchar { char p[0x13]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_int { char p[0x1C]; int v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o3C_short { char p[0x3C]; short v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o54_int { char p[0x54]; int v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o60_uchar { char p[0x60]; unsigned char v; };
struct o68_int { char p[0x68]; int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_int { char p[0x84]; int v; };
struct o88_int { char p[0x88]; int v; };
struct oAC_int { char p[0xAC]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oE0_int { char p[0xE0]; int v; };
struct oF4_int { char p[0xF4]; int v; };
struct oFE_uchar { char p[0xFE]; unsigned char v; };
struct oFF_uchar { char p[0xFF]; unsigned char v; };
int ChangeColliObj(int, int);
int FUN_0c0148f4(void);
int FUN_0c0164fc(void);
int FUN_0c016cca(int);
int FUN_0c018b00(int);
int FUN_0c018b1c(int);
int FUN_0c018b22(int, int);
int FUN_0c018c18(int);
int FUN_0c018c2a(float, float);
int FUN_0c018c8a(float, float);
int FUN_0c019466(void);
int FUN_0c01d190(void);
int FUN_0c01d4ac(void);
int FUN_0c01e6f0(void);
int FUN_0c01ea8e(void);
int FUN_0c01ead0(int, int);
int FUN_0c01eb14(void);
int FUN_0c02024c(void);
int FUN_0c022cee(void);
int FUN_0c026c02(void);
int FUN_0c026ce6(void);
int FUN_0c026e8a(void);
int FUN_0c0297f4(int, int, float);
int FUN_0c02a798(void);
int FUN_0c02d37c(void);
int FUN_0c02f6e8(int);
int FUN_0c02fe92(void);
int FUN_0c030e54(void);
int FUN_0c030eee(float, float, float);
int FUN_0c0311b4(void);
int FUN_0c03346e(int, int, int, int);
int FUN_0c033e38(int, int, int);
int FUN_0c034320(int, int);
int FUN_0c0343b8(int, int);
int FUN_0c03457c(void);
int FUN_0c034804(int, float, float);
int FUN_0c034928(int, int, int, int, int);
int FUN_0c03b318(int);
int FUN_0c03e154(void);
int FUN_0c03e2a0(int);
int FUN_0c03ed46(int);
int FUN_0c03f03c(void);
int FUN_0c03f154(int);
int FUN_0c03f15e(int);
int FUN_0c03f164(int);
int FUN_0c03ff4a(int);
int FUN_0c0423e6(int);
int FUN_0c0464ae(void);
int FUN_0c0464f0(int, int, int, int, int);
int FUN_0c047624(int);
int FUN_0c048262(int);
int FUN_0c048e6e(void);
int FUN_0c048e74(void);
int FUN_0c0494a4(void);
int FUN_0c04d5fa(void);
int FUN_0c050104(void);
int FUN_0c050958(int, int, int, int);
int FUN_0c0529ec(void);
int FUN_0c053fde(void);
int FUN_0c055318(int);
int FUN_0c0584e2(void);
int FUN_0c058be4(int);
int FUN_0c058f64(int, int, int, int);
int FUN_0c059298(void);
int FUN_0c059d8c(void);
int FUN_0c05b7aa(int, int, int, float);
int FUN_0c05f314(int, int, int);
int FUN_0c05f470(int, int, float, float);
int FUN_0c05f6f8(int, int, int);
int FUN_0c05f6fe(int);
int FUN_0c05f98c(void);
int FUN_0c05fab8(float, float);
int FUN_0c060006(int);
int FUN_0c06017e(void);
int FUN_0c060354(int, int, int);
int FUN_0c060384(void);
int FUN_0c061e50(int);
int FUN_0c061fba(int, int, int);
int FUN_0c0621e0(int);
int FUN_0c062258(int);
int FUN_0c062270(void);
int FUN_0c065170(int);
int FUN_0c0673da(int);
int FUN_0c06753c(int, int);
int FUN_0c067718(int);
int FUN_0c0677c4(int);
int FUN_0c067c2c(int);
int FUN_0c06823e(int, int, int, int);
int FUN_0c069e54(void);
int FUN_0c06a0c0(void);
int FUN_0c06a14e(void);
int FUN_0c06aae4(int, int, int);
int FUN_0c06b3a6(void);
int FUN_0c06e626(void);
int FUN_0c06e700(int, int, float);
int FUN_0c06f550(int, int, int);
int FUN_0c0702f0(void);
int FUN_0c072230(int, int);
int FUN_0c072290(int, int);
int FUN_0c073360(void);
int FUN_0c073a40(int);
int FUN_0c073a60(int);
int FUN_0c073c40(int, int, float);
float FUN_0c073c60(int);
int FUN_0c07ceac(int, int, int);
int FUN_0c07d050(int);
int FUN_0c07fdc8(void);
int FUN_0c07ff00(void);
int FUN_0c160584(int, int);
int FUN_0c1605c0(int, int);
int KillColliObj(int, int, int, int);
int MultiRot4Vec(int);
int Pause_ExecRenderTexture2nd(void);
int SetAdvCamera(int, int);
int SetMotionBlurStrength(float);
int Voice_ShutUp(int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int buGetDiskInfo(int, int);
int camSetTarget(int, int);
int exec_GameSystem(void);
int gdc_FileLoadInit(void);
int malloc(void);
int memset(int, int, int);
int mwlSbGetStreamParam(int, int, int);
int nlCloseEvent(int);
int nlExecuteEvent(void);
int nlGetMatrix(int);
int nlInitEvent(void);
int nlLocate(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlSubVector3op(int, int, int);
int FUN_0c06d6e0(void);
int FUN_0c01d044(int a4, int a5, int a6, int a7);
int FUN_0c03dc5c(void);
int FUN_0c019486(void);
int FUN_0c01db74(int a4, int a5, int a6, int a7);
int FUN_0c06a9f4(int a4, int a5);
int FUN_0c06560e(int a4, int a5);
int FUN_0c0695b8(int a4, int a5, int a6);
int FUN_0c14c9a4(int a4, int a5);
int FUN_0c069bec(int a4, int a5);
int FUN_0c061a96(int a4, int a5, int a6, int a7);
int FUN_0c060d00(int a4);
int FUN_0c065734(int a4);
int FUN_0c061608(int a4, int a5, int a6, int a7);
int FUN_0c069ef2(int a4);
int FUN_0c06088e(int a4);
int FUN_0c01da32(void);
int FUN_0c0318b4(int a4, int a5, int a6);
int FUN_0c0607b2(void);
int FUN_0c03010e(int a4, int a5, int a6, int a7);
int FUN_0c01d2d4(int a4, int a5, int a6, int a7);
int FUN_0c061004(void);
int FUN_0c06118a(void);
int FUN_0c069cd8(int a4, int a5, int a6, int a7);
int FUN_0c06d154(void);
int FUN_0c06d62a(void);
int FUN_0c06dade(void);
int FUN_0c06de3c(void);
int FUN_0c06e060(void);
int FUN_0c06e284(void);
int FUN_0c06e410(void);
int FUN_0c066c3c(int a4);
int FUN_0c16b442(int a4, int a5, int a6, int a7);
int FUN_0c01d22c(void);
int FUN_0c061b68(int a4);
int FUN_0c061110(void);
int FUN_0c064b10(int a4);
int FUN_0c16b4d8(int a4, int a5, int a6, int a7);
float FUN_0c040cbe(int a4, int a5);
int FUN_0c064da4(int a4);
int FUN_0c065974(int a4, int a5);
int FUN_0c16b280(int a4);
int FUN_0c16adf8(void);
int FUN_0c16ae20(void);
int FUN_0c06967e(int a4);
int FUN_0c16b244(int a4);
int FUN_0c0782f0(void);
int FUN_0c03dbf6(void);
int FUN_0c15ca64(void);
int FUN_0c15c858(int a4, int a5);

int FUN_0c06d6e0(void)
{
    int stk[11];
    register int t11;
    register int t12;
    register int t20;
    register int t35;

    FUN_0c07ff00();
    FUN_0c06e700((((int)stk + 0) + 0x14), 0xC17596C, ((((struct o4_float *)0xC112AD4)->v)));
    FUN_0c06e700((((int)stk + 0) + 0x14), 0xC17597C, ((((struct o8_float *)0xC112AD4)->v)));
    FUN_0c06e700((((int)stk + 0) + 0x14), 0xC17598C, ((((struct oC_float *)0xC112AD4)->v)));
    camSetTarget((((int)stk + 0) + 0x14), 0x0);
    *(unsigned int *)(((int)stk + 0)) = ((int)((int)(FUN_0c0464ae()) % (int)((((struct o0_int *)0xC112AD4)->v))));
    t11 = 0xC06D830;
    t12 = 0x0;
    for (;;) {
        if ((int)t12 >= (int)((((struct o0_int *)0xC112AD4)->v))) {
            if (0x0 != 0) {
                *(unsigned int *)0xC2BB3D8 = ((*(int *)0xC2BB3D8) + 0x1);
                return t11;
            }
            *(unsigned int *)0xC2BB3D8 = 0x4;
            return t11;
        }
        t11 = ((((struct o0_int *)0xC112AD4)->v));
        t11 = ((int)((int)((((((struct o0_int *)0xC112AD4)->v)) + t12) + (*(int *)(((int)stk + 0)))) % (int)t11));
        *(unsigned int *)(((int)stk + 4)) = t11;
        t11 = 0xC;
        t11 = (FUN_0c07ff00());
        t20 = *(int *)(((int)stk + 4));
        t11 = (FUN_0c06e700((((int)stk + 0) + 0x20), 0xC17596C, (*(float *)((((((t20 << 1) + t20) << 2) + 0xC112AA4) + 0x0)))));
        t11 = 0x4;
        t11 = (FUN_0c06e700((((int)stk + 0) + 0x20), 0xC17597C, (*(float *)((((((t20 << 1) + t20) << 2) + 0xC112AA4) + t11)))));
        t11 = 0x8;
        t11 = (FUN_0c06e700((((int)stk + 0) + 0x20), 0xC17598C, (*(float *)((((((t20 << 1) + t20) << 2) + 0xC112AA4) + t11)))));
        t11 = (nlSubVector3op((((int)stk + 0) + 0x8), (((int)stk + 0) + 0x20), (((int)stk + 0) + 0x14)));
        t11 = (FUN_0c0297f4((((int)stk + 0) + 0x14), (((int)stk + 0) + 0x8), 0.0f));
        t11 = (*(int *)((t11 + 0x1C)));
        if (t11 == -1) {
            break;
        }
        t12 = (t12 + 0x1);
    }
    FUN_0c018b22((((int)stk + 0) + 0x20), 0x0);
    FUN_0c073c40((((int)stk + 0) + 0x8), 0xC10D9E0, 0.25f);
    FUN_0c018c18((((int)stk + 0) + 0x8));
    t35 = FUN_0c018c2a(0.0f, 1.0f);
    if (0x1 != 0) {
        *(unsigned int *)0xC2BB3D8 = ((*(int *)0xC2BB3D8) + 0x1);
    } else {
        *(unsigned int *)0xC2BB3D8 = 0x4;
    }
    return t35;
}

int FUN_0c01d044(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;

    t0 = FUN_0c03f03c();
    if (t0 != 1) {
        FUN_0c026c02();
        FUN_0c026ce6();
        FUN_0c016cca(0x0);
        exec_GameSystem();
        FUN_0c01eb14();
        FUN_0c0148f4();
        if ((*(int *)0xC270924) != 0) {
            FUN_0c0164fc();
        }
        FUN_0c02fe92();
        FUN_0c02d37c();
        FUN_0c0702f0();
        nlLocate(0x5, 0x1E);
        FUN_0c060384();
        FUN_0c06b3a6();
        FUN_0c0423e6(0x1);
        FUN_0c03ff4a(0x1);
        if (((((struct o0_int *)0xC1EC71C)->v)) != 2) {
            FUN_0c04d5fa();
        }
        if (((((struct o4_int *)0xC1EC71C)->v)) == 2) {
            FUN_0c022cee();
        }
        FUN_0c0494a4();
        FUN_0c059298();
        FUN_0c026e8a();
        nlExecuteEvent();
        FUN_0c02a798();
        FUN_0c059d8c();
        FUN_0c0464f0(0x1, 0x0, 0x0, 0x0, *(int *)((int)stk + 0));
        FUN_0c050104();
        return Pause_ExecRenderTexture2nd();
    }
    return t0;
}

int FUN_0c03dc5c(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c034320(0x0, 0x14);
    if (t0 == 1) {
        (((struct oC_uint *)0xC2A4FB0)->v) = 0x0;
        (((struct o4_uint *)0xC2A4664)->v) = 0x0;
        (((struct o0_uint *)0xC2A4664)->v) = 0x0;
        *(unsigned int *)0xC1EC720 = 0x0;
        *(unsigned int *)0xC175C84 = 0x0;
    }
    t0 = 0x0;
    if (((((struct o0_int *)0xC2A4FB0)->v)) == 0) {
        t0 = 0x40;
    }
    t1 = FUN_0c048e6e();
    t2 = t0;
    if (t1 != 0) {
        t2 = (t0 | 0x80);
    }
    FUN_0c033e38(0x0, 0x9, t2);
    FUN_0c03457c();
    FUN_0c03346e(0xC0B7BF4, 0xC2A5808, ((*(int *)0xC2A585C) + 0x8), 0x18);
    FUN_0c034804(0x0, (float)(-(*(int *)0xC2A585C)), 416.0f);
    FUN_0c034928(0xA13, 0xC0B5E84, 0x9, (*(int *)((((((((struct o1C_int *)0xC2A4664)->v)) << 2) + 0xC2A4684) + 0x0))), (t2));
    t0 = FUN_0c0343b8(0x0, 0x14);
    if (t0 == 1) {
        t1 = FUN_0c03f154(0x0);
        if (t1 == 7) {
            return FUN_0c0584e2();
        }
        return t1;
    }
    return t0;
}

int FUN_0c019486(void)
{
    int stk[6];

    (((struct o0_uint *)0xC177EA8)->v) = 0xFFFFFFFF;
    (((struct o4_uint *)0xC177EA8)->v) = 0x0;
    (((struct o8_float *)0xC177EA8)->v) = -16.0f;
    (((struct oC_float *)0xC177EA8)->v) = 1.0f;
    (((struct o10_float *)0xC177EA8)->v) = 30.0f;
    (((struct o20_float *)0xC177EA8)->v) = 0.200000003f;
    (((struct o24_float *)0xC177EA8)->v) = -0.00999999978f;
    (((struct o28_float *)0xC177EA8)->v) = 0.0f;
    FUN_0c073360();
    FUN_0c073a60(0xC175930);
    MultiRot4Vec(0xC1758E4);
    FUN_0c072230(0xC177EB0, (((int)stk + 0) + 0xC));
    FUN_0c072290(0xC177EC8, ((int)stk + 0));
    FUN_0c018b22((((int)stk + 0) + 0xC), 0x0);
    FUN_0c018c2a(0.0f, 1.0f);
    FUN_0c018c18(((int)stk + 0));
    (((struct o14_float *)0xC177EA8)->v) = 0.0f;
    (((struct o18_float *)0xC177EA8)->v) = 5.0f;
    (((struct o1C_float *)0xC177EA8)->v) = 0.0f;
    FUN_0c072230(0xC177EBC, 0xC177EBC);
    camSetTarget(0xC177EBC, 0x0);
    FUN_0c018b1c(0x1);
    FUN_0c018b00(0x8);
    *(float *)0xC177D9C = 60.0f;
    return (nlPopMatrix(0x1));
}

int FUN_0c01db74(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;

    (((struct o8_uint *)0xC1ECD0C)->v) = (((((struct o8_int *)0xC1ECD0C)->v)) - 1);
    t1 = (((struct o0_int *)0xC1ECCA8)->v);
    if (t1 == 1) {
        (((struct oC_uint *)0xC1ECCA8)->v) = (((((struct oC_int *)0xC1ECCA8)->v)) - 1);
    }
    t2 = (((struct o8_int *)0xC1ECD0C)->v);
    if ((int)t2 <= 0) {
        (((struct o0_uint *)0xC1ECD0C)->v) = (((((struct o0_int *)0xC1ECD0C)->v)) + 0x1);
        return t1;
    }
    FUN_0c050958(t2, a5, a6, a7);
    if ((*(int *)0xC1EC720) != 2) {
        FUN_0c019466();
        if (((((struct o8_int *)0xC1ECD0C)->v)) == 0x14A) {
            FUN_0c053fde();
        }
    } else {
        FUN_0c018b00(0x0);
    }
    t1 = (((struct o8_int *)0xC1ECD0C)->v);
    if (t1 == 45) {
        *(unsigned int *)0xC175908 = 0x1;
        t2 = FUN_0c03f154(0x0);
        if ((t2 == 3) && (t0 = *(int *)0xC1EC720, t0 != 2)) {
            FUN_0c01ead0((*(int *)0xC2A4668), 0x0);
        } else {
            FUN_0c01ea8e();
        }
        (((struct o0_uint *)0xC1ECCA8)->v) = 0x1;
        (((struct oC_uint *)0xC1ECCA8)->v) = (((((struct oC_int *)0xC1ECCA8)->v)) - 1);
        return FUN_0c03b318(0x2);
    }
    return t1;
}

int FUN_0c06a9f4(int a4, int a5)
{
    register int t7;

    (((struct o0_uint *)0xC13BBD4)->v) = (*(int *)(((*(int *)(((a4 << 2) + 0xC13BB8C))) + (((int)((int)(((int (*)(int, int))(FUN_0c069e54))(a4, a5)) % (int)(*(int *)(((a4 << 2) + 0xC111614))))) << 2))));
    Voice_ShutUp(0x2);
    t7 = FUN_0c058f64(0xC13BBD4, 0x2, (*(int *)(((a4 << 2) + 0xC11039C))), 0x0);
    if ((int)a5 > (int)0x1) {
        (((struct o18_uint *)0xC13BBD4)->v) = (*(int *)(((*(int *)(((a4 << 2) + (*(int *)((0xC13BBBC + ((a5 - 2) << 2))))))) + (((int)((int)(((int (*)(void))(FUN_0c069e54))()) % (int)(*(int *)(((a4 << 2) + (*(int *)(((0xC13BBC8 + ((a5 - 2) << 2)) + 0x0)))))))) << 2))));
        Voice_ShutUp(0x3);
        return FUN_0c058f64(0xC13BBEC, 0x3, (*(int *)(((a4 << 2) + 0xC1103AC))), 0x0);
    }
    return t7;
}

int FUN_0c06560e(int a4, int a5)
{
    int stk[20];
    register float u1;
    register int t7;
    register int t20;
    register int t22;

    FUN_0c067718(a5);
    u1 = *(float *)0xC0656E0;
    if (!(u1 > ((((struct o4_float *)(a5))->v)))) {
        (((struct oFE_uchar *)(a5))->v) = ((*(signed char *)(((0xFE + a5) + 0x0))) | 0x1);
    } else {
        FUN_0c073360();
        FUN_0c0673da(((((struct o88_int *)(a5))->v)));
        t7 = *(int *)((a5 + 0x0));
        *(unsigned int *)(((int)stk + 0)) = t7;
        FUN_0c05f314((*(int *)(((int)stk + 0))), (int)(float)((*(int *)((t7 + 0x0))) - 1), (((int)stk + 0) + 0x44));
        *(float *)(((int)stk + 72)) = 0.0f;
        FUN_0c073a40((((int)stk + 0) + 0x44));
        nlGetMatrix((((int)stk + 0) + 0x4));
        FUN_0c05b7aa((a5 + 0x40), (((int)stk + 0) + 0x4), (a5 + 0x40), (((((struct o4_float *)(a5))->v)) / u1));
        nlPopMatrix(0x1);
    }
    t20 = *(signed char *)(((a5 + 0x3F) + 0x0));
    t22 = t20;
    if ((t20 & 16) != 0) {
        (((struct o80_uint *)(a5))->v) = (((((struct o80_int *)(a5))->v)) + 0x1);
        t22 = 0x80;
    }
    return t22;
}

int FUN_0c0695b8(int a4, int a5, int a6)
{
    register int t17;

    (((struct o4_uint *)0xC2BA694)->v) = (((((struct o4_int *)0xC2BA694)->v)) - 1);
    if (((((struct o4_int *)0xC2BA694)->v)) == 25) {
        FUN_0c060354(0x0, a5, a6);
    }
    t17 = 0x170;
    if ((int)((((struct o4_int *)0xC2BA694)->v)) <= 0) {
        (((struct o8_uint *)0xC2BA694)->v) = (((((struct o8_int *)0xC2BA694)->v)) + 0x1);
        if ((int)((((struct o8_int *)0xC2BA694)->v)) >= (int)((((struct oC_int *)0xC2BA694)->v))) {
            (((struct o0_uint *)0xC2BA694)->v) = 0x4;
            FUN_0c05f470(0xC2BA5B0, 0xC889CBC, 0.0f, 0.0f);
        } else {
            (((struct o0_uint *)0xC2BA694)->v) = 0x2;
            (((struct o13_uchar *)0xC2BA694)->v) = ((*(signed char *)0xC2BA6A7) & 0xBF);
            (((struct o13_uchar *)0xC2BA694)->v) = ((*(signed char *)0xC2BA6A7) | 0x10);
            (((struct o13_uchar *)0xC2BA694)->v) = ((*(signed char *)0xC2BA6A7) | 0x8);
            FUN_0c05f470(0xC2BA5B0, 0xC889200, 0.0f, 0.0f);
        }
        *(float *)0xC2BA5B8 = 1.0f;
        t17 = 0x90;
    }
    return t17;
}

int FUN_0c14c9a4(int a4, int a5)
{
    int stk[1];
    register int t1;
    register int t2;
    register int t6;
    register int t3;
    register int t4;
    register int t7;
    register int t8;
    register int t11;

    *(unsigned short *)(((int)stk + 0)) = (_builtin_get_imask());
    _builtin_set_imask(0xF);
    t1 = *(short *)(((int)stk + 0));
    t2 = malloc();
    if (t2 != 0) {
        t6 = 0x0;
        if ((unsigned int)0x0 < (unsigned int)(a5 * a4)) {
            t3 = 0x0;
            for (;;) {
                t4 = (t2 + t3);
                t3 = (t3 + 0x4);
                *(unsigned int *)((t4 + 0x0)) = 0x0;
                if ((unsigned int)t3 >= (unsigned int)(a5 * a4)) {
                    break;
                }
            }
            t6 = t3;
        }
        if ((unsigned int)(t6 - 4) < (unsigned int)((a5 * a4) & 0x3)) {
            t7 = (t6 - 4);
            t8 = (t2 + (t6 - 4));
            for (;;) {
                t7 = (t7 + 0x1);
                *(unsigned char *)((t8 + 0x0)) = 0x0;
                t8 = (t8 + 0x1);
                if ((unsigned int)t7 >= (unsigned int)((a5 * a4) & 0x3)) {
                    break;
                }
            }
        }
        _builtin_set_imask(((unsigned int)((((unsigned short)t1 & 0xF) << 2) << 2) >> 4));
        t11 = t2;
    } else {
        _builtin_set_imask(((unsigned int)((((unsigned short)t1 & 0xF) << 2) << 2) >> 4));
        t11 = 0x0;
    }
    return t11;
}

int FUN_0c069bec(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    t0 = (((struct o3C_short *)0xC175A14)->v);
    (((struct o80_uint *)(a4))->v) = (((((struct o80_int *)(a4))->v)) + 0x1);
    t1 = 0x80;
    if ((int)((((struct o80_int *)(a4))->v)) > (int)0xB4) {
        u0 = (((struct o0_float *)0xC175A14)->v);
        t2 = 0xC069CD0;
        u1 = _builtin_fabsf(u0);
        if (!(_builtin_fabsf(u0) > 0.150000006f) && ((int)t0 > (int)0xFFFFFFF0)) {
            t3 = 0x10;
            u2 = _builtin_fabsf(u0);
            if ((int)t0 < (int)0x10) {
                t0 = *(int *)0xC175C7C;
                t4 = 0x3C8;
                u3 = _builtin_fabsf(u0);
                if (t0 != 0) {
                    t0 = 0x3C8;
                    t5 = 0x0;
                    for (;;) {
                        if ((int)t5 >= (int)(*(int *)((a4 + 0x18)))) {
                            if (0x1 != 0) {
                                t0 = 0x54;
                                t5 = a4;
                                *(unsigned int *)((0xC1758B4 + t0)) = 0x0;
                                t5 = (t5 + 0x14);
                                t0 = (FUN_0c061fba(t5, 0x2, 0x0));
                                t0 = 0x7C;
                                *(unsigned int *)((a4 + t0)) = ((*(int *)((a4 + t0))) + 0x1);
                                return t0;
                            }
                            return t0;
                        }
                        t0 = 0xFF;
                        t0 = (*(signed char *)((((t5 << 8) + (*(int *)((a4 + 0x14)))) + t0)));
                        if ((t0 & 32) != 0) {
                            break;
                        }
                        t5 = (t5 + 0x1);
                    }
                    if (0x0 != 0) {
                        *(unsigned int *)0xC175908 = 0x0;
                        FUN_0c061fba((a4 + 0x14), 0x2, 0x0);
                        (((struct o7C_uint *)(a4))->v) = (((((struct o7C_int *)(a4))->v)) + 0x1);
                        t5 = 0x7C;
                    } else {
                        t5 = t0;
                        u4 = _builtin_fabsf(u0);
                    }
                    t4 = t5;
                    u3 = u4;
                }
                t3 = t4;
                u2 = u3;
            }
            t2 = t3;
            u1 = u2;
        }
        t1 = t2;
    }
    return t1;
}

int FUN_0c061a96(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = (((struct o0_int *)0xC2B9CA0)->v);
    if (((int)t0 >= 0) && ((int)t0 < (int)0x3)) {
        t1 = ((int (*)(int, int, int, int))((*(int *)(((t0 << 2) + 0xC10E964)))))(((((struct o4_int *)0xC2B9CA0)->v)), a5, a6, a7);
    }
    t0 = (((struct o4_int *)0xC2B9CA0)->v);
    if (t0 != 0) {
        t1 = FUN_0c0621e0(t0);
        if (t1 == 0) {
        } else {
            FUN_0c06017e();
        }
    } else {
        if ((*(int *)0xC2AC2F4) == 0) {
            FUN_0c06017e();
        }
    }
    return FUN_0c05fab8(1.0f, 1.0f);
}

int FUN_0c060d00(int a4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;

    u0 = (((struct o0_float *)0xC060E04)->v);
    u1 = (((struct o4_float *)0xC060E04)->v);
    if (a4 != 0) {
        t0 = *(int *)(((*(int *)((0xC13AFFC + ((*(int *)((a4 + 0x14))) << 2)))) + ((FUN_0c060006(((*(int *)((a4 + 0x0))) + 0x70))) << 2)));
        FUN_0c05f470(0xC2B9C1C, t0, 0.0f, u0);
        (((struct o0_float *)0xC2B9C24)->v) = u1;
        (((struct o4_uint *)0xC2B9C24)->v) = 0x0;
        *(unsigned int *)0xC2B9CA0 = ((*(int *)0xC2B9CA0) + 0x1);
        t0 = 0xC2B9CA0;
    } else {
        t1 = *(int *)((0xC10E8D4 + ((FUN_0c060006(0xC177D38)) << 2)));
        FUN_0c05f470(0xC2B9C1C, t1, 0.0f, u0);
        (((struct o0_float *)0xC2B9C24)->v) = u1;
        (((struct o4_uint *)0xC2B9C24)->v) = 0x0;
        *(unsigned int *)0xC2B9CA0 = 0xA;
        t0 = 0xA;
    }
    return t0;
}

int FUN_0c065734(int a4)
{
    register int t0;
    register int t1;

    (((struct oFF_uchar *)(a4))->v) = ((*(signed char *)(((0xFF + a4) + 0x0))) & 0xFD);
    t0 = 0x0;
    if ((int)(*(int *)((((((struct oAC_int *)(a4))->v)) + 0x8))) > (int)0x1) {
        t0 = 0x1;
    }
    if (t0 != 0) {
        t0 = (*(int *)((0xC13B048 + (((((struct o84_int *)(a4))->v)) << 2))));
        t1 = (((((struct oF4_int *)(a4))->v)) << 2);
    } else {
        t0 = 0xC10EB94;
        t1 = (((((struct oF4_int *)(a4))->v)) << 2);
    }
    FUN_0c05f470(a4, (*(int *)((t1 + t0))), 0.0f, 0.0f);
    t0 = (((struct oF4_int *)(a4))->v);
    FUN_0c05f6f8(a4, (*(int *)(((t0 << 2) + 0xC13B008))), (*(int *)(((t0 << 2) + 0xC13B028))));
    (((struct o80_uint *)(a4))->v) = (((((struct o80_int *)(a4))->v)) + 0x1);
    return 0x80;
}

int FUN_0c061608(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = (((struct o0_int *)0xC2B9CA0)->v);
    if (((int)t0 >= 0) && ((int)t0 < (int)0x3)) {
        t1 = ((int (*)(int, int, int, int))((*(int *)(((t0 << 2) + 0xC10E948)))))(((((struct o4_int *)0xC2B9CA0)->v)), a5, a6, a7);
    }
    t0 = (((struct o4_int *)0xC2B9CA0)->v);
    if (t0 != 0) {
        t1 = FUN_0c0621e0(t0);
        if (t1 == 0) {
        } else {
            FUN_0c06017e();
        }
    } else {
        if ((*(int *)0xC2AC2F4) == 0) {
            FUN_0c06017e();
        }
    }
    return FUN_0c05f98c();
}

int FUN_0c069ef2(int a4)
{
    register int t0;
    register int t2;

    t0 = *(int *)0xC1ECCA8;
    if (t0 == 1) {
        t2 = *(int *)0xC2B9C2C;
        if (a4 != 0) {
            *(unsigned int *)0xC13B438 = (*(int *)(((*(int *)((((t2 - 1) << 2) + 0xC13B3F8))) + (((int)((int)(FUN_0c069e54()) % (int)(*(int *)((((t2 - 1) << 2) + 0xC1105C4))))) << 2))));
        } else {
            *(unsigned int *)0xC13B438 = (*(int *)(((*(int *)((((t2 - 1) << 2) + 0xC13B418))) + (((int)((int)(FUN_0c069e54()) % (int)(*(int *)((((t2 - 1) << 2) + 0xC110644))))) << 2))));
        }
        Voice_ShutUp(0x1);
        return FUN_0c058f64(0xC13B438, 0x1, (*(int *)((((t2 - 1) << 2) + 0xC11037C))), 0x0);
    }
    return t0;
}

int FUN_0c06088e(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    if (a4 != 0) {
        t0 = *(int *)((a4 + 0xC));
        if (t0 == 3) {
            FUN_0c05f6f8(0xC2B9C1C, 0xC10E68C, 0xC10E68C);
            t1 = FUN_0c062258(a4);
            if (t1 != 0) {
                *(unsigned int *)0xC2B9CA0 = 0x1;
            } else {
                *(unsigned int *)0xC2B9CA0 = 0x7;
            }
            t1 = *(int *)((a4 + 0x4));
            t2 = 0x2;
            if (((*(signed char *)(((a4 + 0x63) + 0x0))) & 32) != 0) {
            } else {
                t2 = (*(int *)((a4 + 0x14)));
            }
            return FUN_0c06aae4((*(int *)(((*(int *)((a4 + 0x0))) + 0x10))), t2, t1);
        }
        return t0;
    }
    FUN_0c05f6f8(0xC2B9C1C, 0xC10E68C, 0xC10E68C);
    *(unsigned int *)0xC2B9CA0 = 0x7;
    return 0x84;
}

int FUN_0c01da32(void)
{
    int stk[3];
    register int t12;

    FUN_0c058be4(0x0);
    FUN_0c01e6f0();
    FUN_0c06f550(0x0, 0x0, 0x0);
    *(unsigned int *)0xC2AC2F4 = 0x1;
    FUN_0c048262(0xFFFFFFFF);
    *(unsigned int *)(((int)stk + 0)) = 0xC01D4AC;
    FUN_0c01d4ac();
    FUN_0c047624(0x3);
    SetAdvCamera(0xC177D38, 0x1);
    FUN_0c030e54();
    FUN_0c030e54();
    SetMotionBlurStrength((*(float *)0xC01DB48));
    FUN_0c030eee(1.0f, 1.0f, 1.0f);
    t12 = FUN_0c0311b4();
    (((struct o0_uint *)0xC1EC744)->v) = (((((struct o0_int *)0xC1EC744)->v)) + 0x1);
    (((struct o8_uint *)0xC1EC744)->v) = 0x0;
    return t12;
}

int FUN_0c0318b4(int a4, int a5, int a6)
{
    register int t4;

    if (a5 != 1) {
        if (a5 != 2) {
            *(unsigned int *)((((a4 * 0x4C) + 0xC2952EC) + 0x4)) = a6;
            buGetDiskInfo(a4, (((a4 * 0x4C) + 0xC2952EC) + 0x14));
        } else {
            *(unsigned short *)((((a4 * 0x4C) + 0xC2952EC) + 0x0)) = 0x0;
            *(unsigned short *)((((a4 * 0x4C) + 0xC2952EC) + 0x2)) = 0x0;
            *(unsigned int *)((((a4 * 0x4C) + 0xC2952EC) + 0x8)) = 0x0;
            *(unsigned int *)((((a4 * 0x4C) + 0xC2952EC) + 0xC)) = 0x0;
            *(unsigned int *)((((a4 * 0x4C) + 0xC2952EC) + 0x10)) = 0x0;
            memset((((a4 * 0x4C) + 0xC2952EC) + 0x14), 0x0, 0x38);
        }
    } else {
        if (a6 == 0) {
            *(unsigned short *)((((a4 * 0x4C) + 0xC2952EC) + 0x0)) = 0x1;
            t4 = buGetDiskInfo(a4, (((a4 * 0x4C) + 0xC2952EC) + 0x14));
            if (t4 == 0) {
                *(unsigned short *)((((a4 * 0x4C) + 0xC2952EC) + 0x2)) = 0x1;
            }
            *(unsigned int *)((((a4 * 0x4C) + 0xC2952EC) + 0x4)) = 0x0;
        }
    }
    *(unsigned int *)((((a4 * 0x4C) + 0xC2952EC) + 0x10)) = 0x0;
    return 0x0;
}

int FUN_0c0607b2(void)
{
    int stk[2];

    FUN_0c07fdc8();
    if (((((struct o0_int *)0xC2B9CA0)->v)) == 0) {
        FUN_0c05f6fe(0xC2B9C1C);
        FUN_0c05f470(0xC2B9C1C, (*(int *)((((((((struct o10_int *)0xC2B9CA0)->v)) << 2) + ((int)stk + 0)) + 0x0))), 0.0f, 5.0f);
        (((struct o0_float *)0xC2B9C24)->v) = 1.0f;
        (((struct o4_uint *)0xC2B9C24)->v) = 0x0;
        FUN_0c06a14e();
        (((struct o0_uint *)0xC2B9CA0)->v) = (((((struct o0_int *)0xC2B9CA0)->v)) + 0x1);
    }
    if (((*(signed char *)0xC2B9C5B) & 16) != 0) {
        FUN_0c06017e();
    }
    return (FUN_0c05f98c());
}

int FUN_0c03010e(int a4, int a5, int a6, int a7)
{
    register float t4;

    if (((((struct o18_float *)((a4 + 0x14)))->v)) > 1800.0f) {
        KillColliObj((a4 + 0x14), a5, a6, a7);
        return nlCloseEvent(a4);
    }
    if (((((struct o68_int *)((a4 + 0x14)))->v)) == 5) {
        t4 = FUN_0c073c60(((a4 + 0x14) + 0x48));
        if (0.0199999996f > t4) {
            ChangeColliObj((a4 + 0x14), 0x1A);
        }
    }
    return FUN_0c02f6e8((a4 + 0x14));
}

int FUN_0c01d2d4(int a4, int a5, int a6, int a7)
{
    register int t0;

    (((struct o4_uint *)0xC1EC740)->v) = (((((struct o4_int *)0xC1EC740)->v)) + 0x1);
    (((struct oC_uint *)0xC1EC740)->v) = 0x0;
    nlInitEvent();
    FUN_0c01d190();
    t0 = FUN_0c03f154(0x0);
    if (t0 == 3) {
        t0 = FUN_0c03f154(0x1);
        if (t0 == 0) {
            return FUN_0c03e154();
        }
        (((struct o0_uint *)0xC1EC740)->v) = 0x3;
        (((struct o4_uint *)0xC1EC740)->v) = 0x0;
        return t0;
    }
    FUN_0c055318((*(int *)0xC175C80));
    FUN_0c02024c();
    return gdc_FileLoadInit();
}

int FUN_0c061004(void)
{
    int t3;
    register float u8;

    FUN_0c05f6f8(0xC2B9C1C, 0xC10E68C, 0xC10E68C);
    FUN_0c05f470(0xC2B9C1C, ((((struct o10_int *)0xC2B9CA0)->v)), 0.0f, 15.0f);
    t3 = (((struct o10_int *)0xC2B9CA0)->v);
    u8 = 1.79999995f;
    if ((t3 != 0xC8CA2EC) && (t3 != 0xC8CACF8)) {
        u8 = (*(float *)0xC13B004);
    }
    (((struct o0_float *)0xC2B9C24)->v) = u8;
    (((struct o4_uint *)0xC2B9C24)->v) = 0x0;
    (((struct o0_uint *)0xC2B9CA0)->v) = (((((struct o0_int *)0xC2B9CA0)->v)) + 0x1);
    return 0x84;
}

int FUN_0c06118a(void)
{
    register int t0;
    register int t6;

    t0 = (((struct o10_int *)0xC2B9CA0)->v);
    t6 = 0x94;
    if (((int)t0 >= 0) && ((int)t0 < (int)0x2)) {
        FUN_0c05f6f8(0xC2B9C1C, 0xC10E68C, 0xC10E68C);
        FUN_0c05f470(0xC2B9C1C, (*(int *)(((((((struct o10_int *)0xC2B9CA0)->v)) << 2) + 0xC10E930))), 20.0f, 20.0f);
        (((struct o0_float *)0xC2B9C24)->v) = 1.0f;
        (((struct o4_uint *)0xC2B9C24)->v) = 0x0;
        (((struct o0_uint *)0xC2B9CA0)->v) = (((((struct o0_int *)0xC2B9CA0)->v)) + 0x1);
        t6 = 0x84;
    }
    return t6;
}

int FUN_0c069cd8(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;

    t1 = *(int *)(((a4 + 0x14) + 0x0));
    t2 = 0x80;
    t3 = 0x1;
    if ((((*(signed char *)((t1 + 0xFE))) & 64) != 0) && (t0 = (((struct o80_int *)(t1))->v), (int)t0 >= (int)0x2)) {
    } else {
        t0 = *(int *)(((a4 + 0x14) + 0xC));
        t2 = t0;
        t3 = 0x0;
        if (t0 == 11) {
            t0 = 0x0;
            if ((int)((((struct o80_int *)((*(int *)(((a4 + 0x14) + 0x0)))))->v)) >= (int)0x8) {
                t0 = 0x1;
            }
            t2 = 0x80;
            t3 = t0;
        }
    }
    if (t3 != 0) {
        FUN_0c061e50((a4 + 0x14));
        return nlCloseEvent(a4);
    }
    return t2;
}

int FUN_0c06d154(void)
{
    register int t0;
    register int t1;
    register float u0;

    FUN_0c018b1c(0x1);
    FUN_0c018b22(0xC2BB3B0, 0x2);
    u0 = *(float *)0xC06D244;
    FUN_0c018c2a(u0, 0.0f);
    camSetTarget(0xC2BB3BC, 0x2);
    FUN_0c018c8a(u0, 0.0f);
    t0 = FUN_0c0621e0((*(int *)0xC13C358));
    t1 = t0;
    if (t0 != 0) {
        t0 = FUN_0c06e626();
        *(unsigned int *)0xC13C358 = 0x0;
        t1 = t0;
    }
    return t1;
}

int FUN_0c06d62a(void)
{
    register int t0;
    register int t1;

    FUN_0c018b1c(0x1);
    FUN_0c018b22(0xC2BB3B0, 0x2);
    FUN_0c018c2a(0.075000003f, 0.0f);
    camSetTarget(0xC2BB3BC, 0x2);
    FUN_0c018c8a(0.075000003f, 0.0f);
    t0 = FUN_0c0621e0((*(int *)0xC13C358));
    t1 = t0;
    if (t0 != 0) {
        t0 = FUN_0c06e626();
        *(unsigned int *)0xC13C358 = 0x0;
        t1 = t0;
    }
    return t1;
}

int FUN_0c06dade(void)
{
    register int t0;
    register int t1;
    register float u0;

    FUN_0c018b1c(0x1);
    FUN_0c018b22(0xC2BB3B0, 0x2);
    u0 = *(float *)0xC06DB98;
    FUN_0c018c2a(u0, 0.0f);
    camSetTarget(0xC2BB3BC, 0x2);
    FUN_0c018c8a(u0, 0.0f);
    t0 = FUN_0c0621e0((*(int *)0xC13C358));
    t1 = t0;
    if (t0 != 0) {
        t0 = FUN_0c06e626();
        *(unsigned int *)0xC13C358 = 0x0;
        t1 = t0;
    }
    return t1;
}

int FUN_0c06de3c(void)
{
    register int t0;
    register int t1;
    register float u0;

    FUN_0c018b1c(0x1);
    FUN_0c018b22(0xC2BB3B0, 0x2);
    u0 = *(float *)0xC06DF04;
    FUN_0c018c2a(u0, 0.0f);
    camSetTarget(0xC2BB3BC, 0x2);
    FUN_0c018c8a(u0, 0.0f);
    t0 = FUN_0c0621e0((*(int *)0xC13C358));
    t1 = t0;
    if (t0 != 0) {
        t0 = FUN_0c06e626();
        *(unsigned int *)0xC13C358 = 0x0;
        t1 = t0;
    }
    return t1;
}

int FUN_0c06e060(void)
{
    register int t0;
    register int t1;
    register float u0;

    FUN_0c018b1c(0x1);
    FUN_0c018b22(0xC2BB3B0, 0x2);
    u0 = *(float *)0xC06E11C;
    FUN_0c018c2a(u0, 0.0f);
    camSetTarget(0xC2BB3BC, 0x2);
    FUN_0c018c8a(u0, 0.0f);
    t0 = FUN_0c0621e0((*(int *)0xC13C358));
    t1 = t0;
    if (t0 != 0) {
        t0 = FUN_0c06e626();
        *(unsigned int *)0xC13C358 = 0x0;
        t1 = t0;
    }
    return t1;
}

int FUN_0c06e284(void)
{
    register int t0;
    register int t1;
    register float u0;

    FUN_0c018b1c(0x1);
    FUN_0c018b22(0xC2BB3B0, 0x2);
    u0 = *(float *)0xC06E3AC;
    FUN_0c018c2a(u0, 0.0f);
    camSetTarget(0xC2BB3BC, 0x2);
    FUN_0c018c8a(u0, 0.0f);
    t0 = FUN_0c0621e0((*(int *)0xC13C358));
    t1 = t0;
    if (t0 != 0) {
        t0 = FUN_0c06e626();
        *(unsigned int *)0xC13C358 = 0x0;
        t1 = t0;
    }
    return t1;
}

int FUN_0c06e410(void)
{
    register int t0;
    register int t1;
    register float u0;

    FUN_0c018b1c(0x1);
    FUN_0c018b22(0xC2BB3B0, 0x2);
    u0 = *(float *)0xC06E4F4;
    FUN_0c018c2a(u0, 0.0f);
    camSetTarget(0xC2BB3BC, 0x2);
    FUN_0c018c8a(u0, 0.0f);
    t0 = FUN_0c0621e0((*(int *)0xC13C358));
    t1 = t0;
    if (t0 != 0) {
        t0 = FUN_0c06e626();
        *(unsigned int *)0xC13C358 = 0x0;
        t1 = t0;
    }
    return t1;
}

int FUN_0c066c3c(int a4)
{
    register int t3;

    if ((int)((((struct o54_int *)(a4))->v)) < 0) {
        (((struct o54_uint *)(a4))->v) = (((((struct o54_int *)(a4))->v)) + 0x1);
        return 0x54;
    }
    nlPushMatrix((a4 + 0x14));
    t3 = FUN_0c067c2c((a4 + 0x54));
    if (t3 != 0) {
        nlCloseEvent(a4);
    }
    return nlPopMatrix(0x1);
}

int FUN_0c16b442(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t15;

    t0 = mwlSbGetStreamParam(a4, 0x5, 0x0);
    t15 = 0xFFFFFC41;
    if ((int)t0 <= 0) {
    } else {
        t15 = 0x0;
        if ((int)t0 >= (int)0x7F) {
        } else {
            t15 = ((int)((int)(0x80 - ((((int)((unsigned int)((int)((unsigned int)(0x7F - t0) + (unsigned int)0x0)) + ((((int)0x0 > (int)(0x7F - t0))) ? 1u : 0u))) >> 1) * 0x3BF)) / (int)0xFF));
        }
    }
    *(unsigned int *)((a4 + 0x3C)) = t15;
    return t15;
}

int FUN_0c01d22c(void)
{
    register int t1;

    (((struct oC_uint *)0xC1EC740)->v) = (((((struct oC_int *)0xC1EC740)->v)) + 0x1);
    t1 = FUN_0c0529ec();
    if ((int)((((struct oC_int *)0xC1EC740)->v)) > (int)0x78) {
        (((struct o0_uint *)0xC1EC740)->v) = 0x3;
        (((struct o4_uint *)0xC1EC740)->v) = 0x0;
        FUN_0c03f15e(0x0);
        FUN_0c03ed46(0xC2A4660);
        return FUN_0c03e2a0(0x1);
    }
    return t1;
}

int FUN_0c061b68(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    if (a4 != 0) {
        t0 = *(int *)((a4 + 0xC));
        if (t0 == 3) {
            t1 = *(int *)((a4 + 0x4));
            t2 = 0x2;
            if (((*(signed char *)(((a4 + 0x63) + 0x0))) & 32) != 0) {
            } else {
                t2 = (*(int *)((a4 + 0x14)));
            }
            FUN_0c06aae4((*(int *)(((*(int *)((a4 + 0x0))) + 0x10))), t2, t1);
            *(unsigned int *)0xC2B9CA0 = 0x2;
            t1 = 0x2;
        } else {
            t2 = t0;
            if ((int)(*(int *)((a4 + 0xC))) > (int)0x3) {
                *(unsigned int *)0xC2B9CA0 = 0x2;
                t2 = 0x2;
            }
            t1 = t2;
        }
        t0 = t1;
    } else {
        *(unsigned int *)0xC2B9CA0 = 0x2;
        t0 = 0x2;
    }
    return t0;
}

int FUN_0c061110(void)
{
    register int t4;

    FUN_0c05f6f8(0xC2B9C1C, 0xC10E68C, 0xC10E68C);
    FUN_0c05f470(0xC2B9C1C, 0xC8C3240, 0.0f, ((((struct o0_float *)0xC061204)->v)));
    (((struct o0_float *)0xC2B9C24)->v) = ((((struct oC_float *)0xC061204)->v));
    (((struct o4_uint *)0xC2B9C24)->v) = 0x0;
    t4 = FUN_0c06a0c0();
    *(unsigned int *)0xC2B9CA0 = ((*(int *)0xC2B9CA0) + 0x1);
    return t4;
}

int FUN_0c064b10(int a4)
{
    register int t3;
    register int t4;

    FUN_0c06823e(a4, 0xC175930, 0x1, 0x14);
    FUN_0c06753c(a4, 0x1);
    FUN_0c065170(a4);
    t3 = *(signed char *)(((a4 + 0x3F) + 0x0));
    t4 = t3;
    if ((t3 & 16) != 0) {
        (((struct o80_uint *)(a4))->v) = 0x4;
        t4 = 0x80;
    }
    return t4;
}

int FUN_0c16b4d8(int a4, int a5, int a6, int a7)
{
    *(unsigned int *)((((a5 << 2) + (a4 + 0x40)) + 0x0)) = (mwlSbGetStreamParam(a4, 0x6, a5));
    return (*(int *)(((a5 << 2) + (a4 + 0x40))));
}

float FUN_0c040cbe(int a4, int a5)
{
    register float u2;
    register float u3;

    u2 = *(float *)((((a5 & 0x3) << 2) + 0xC0C0AE0));
    u3 = (*(float *)((0xC0C0AD4 + ((a5 & 0x3) << 2))));
    u3 = u3 + u2 * (float)(FUN_0c062270());
    *(float *)0xC2AB7E0 = ((*(float *)0xC2AB7E0) + u3);
    return u2;
}

int FUN_0c064da4(int a4)
{
    register int t2;
    register int t4;

    FUN_0c06823e(a4, 0xC175930, 0x1, 0x14);
    FUN_0c06753c(a4, 0x1);
    t2 = *(signed char *)(((a4 + 0x3F) + 0x0));
    t4 = t2;
    if ((t2 & 32) == 0) {
        (((struct o80_uint *)(a4))->v) = (((((struct o80_int *)(a4))->v)) + 0x1);
        t4 = 0x80;
    }
    return t4;
}

int FUN_0c065974(int a4, int a5)
{
    FUN_0c05f470(a5, ((((struct oE0_int *)(a5))->v)), 0.0f, 0.0f);
    FUN_0c0677c4(a5);
    (((struct o80_uint *)(a5))->v) = (((((struct o80_int *)(a5))->v)) + 0x1);
    return 0x80;
}

int FUN_0c16b280(int a4)
{
    int stk[1];

    *(unsigned int *)((a4 + 0x20)) = (FUN_0c07ceac((*(short *)((a4 + 0x6))), 0x0, ((int)stk + 0)));
    *(unsigned int *)((a4 + 0x28)) = (*(int *)(((int)stk + 0)));
    return ((((int)((int)(*(int *)(((int)stk + 0))) / (int)(*(int *)((a4 + 0x10))))) << 2) << 1);
}

int FUN_0c16adf8(void)
{
    *(volatile int *)0xC174410;
    memset(0xC308B20, 0x0, 0x800);
    memset(0xC309320, 0x0, 0x40);
    return (memset(0xC3087E0, 0x0, 0x340));
}

int FUN_0c16ae20(void)
{
    memset(0xC308B20, 0x0, 0x800);
    memset(0xC309320, 0x0, 0x40);
    return (memset(0xC3087E0, 0x0, 0x340));
}

int FUN_0c06967e(int a4)
{
    FUN_0c05f470(a4, 0xC889200, 0.0f, 0.0f);
    (((struct o8_float *)(a4))->v) = 0.0f;
    return 0x8;
}

int FUN_0c16b244(int a4)
{
    FUN_0c07d050((*(short *)((a4 + 0x6))));
    (((struct o60_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x5)));
    *(unsigned char *)((a4 + 0x5)) = 0x0;
    *(unsigned int *)((a4 + 0x18)) = 0x0;
    return 0x0;
}

int FUN_0c0782f0(void)
{
    register int t0;
    register int t1;

    *(unsigned int *)0xC2C3D98 = 0x0;
    t0 = *(int *)0xC2C3D30;
    if (t0 != 0) {
        t1 = ((int (*)(void))(t0))();
    }
    return 0x0;
}

int FUN_0c03dbf6(void)
{
    register int t0;

    t0 = FUN_0c048e74();
    if (t0 == -1) {
        return FUN_0c03f164(0x1);
    }
    return t0;
}

int FUN_0c15ca64(void)
{
    return (FUN_0c160584(0x18, 0x0));
}

int FUN_0c15c858(int a4, int a5)
{
    FUN_0c1605c0(a4, a5);
    return 0x1;
}
