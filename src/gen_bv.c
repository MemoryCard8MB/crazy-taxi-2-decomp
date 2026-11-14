/* Straight-line functions with calls and guards (batch gen_bv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o24_int { char p[0x24]; int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_int { char p[0x30]; int v; };
struct o34_int { char p[0x34]; int v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o3C_int { char p[0x3C]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o8_ushort { char p[0x8]; unsigned short v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int CalcShadow2Matrix(int);
int FUN_0c0100c4(int, int);
int FUN_0c01c4e2(void);
int FUN_0c01e6f0(void);
int FUN_0c01ff48(int, int);
int FUN_0c0200f0(int);
int FUN_0c020176(void);
int FUN_0c020244(void);
int FUN_0c0209b6(void);
int FUN_0c020b54(void);
int FUN_0c027f28(int);
int FUN_0c027fbe(float, float);
int FUN_0c02803a(int, int, int, int);
float FUN_0c02806c(int);
int FUN_0c02842e(int);
int FUN_0c0329ba(int, int, int, int, int, int);
int FUN_0c03346e(int, int, int, int);
int FUN_0c033578(int, int, float, float, float);
int FUN_0c03425e(int, int, int, int);
int FUN_0c034e28(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c03e4d0(int);
int FUN_0c048d70(int);
int FUN_0c056d8e(void);
int FUN_0c058ca6(int, int);
int FUN_0c058f64(int, int, int, int);
int FUN_0c059e6a(int, int, int, int);
int FUN_0c05ab5e(void);
int FUN_0c05be5c(int, float);
int FUN_0c05d1b4(int, int, float);
int FUN_0c05d1bc(int, int);
int FUN_0c05f1b6(int, int);
int FUN_0c05f434(void);
int FUN_0c05f4c8(int);
int FUN_0c05f788(int, int);
int FUN_0c06cbe2(void);
int FUN_0c06cd60(void);
int FUN_0c06f240(void);
int FUN_0c070730(float);
int FUN_0c070890(float);
float FUN_0c070a10(int);
int FUN_0c071920(int);
int FUN_0c072230(int, int);
int FUN_0c072290(int, int);
int FUN_0c072ff0(void);
int FUN_0c073360(void);
int FUN_0c073a30(float, float, float);
int FUN_0c073ab0(void);
float FUN_0c073b40(int, int);
int FUN_0c073c40(int, int, float);
float FUN_0c073c80(int);
int FUN_0c073e10(int);
int FUN_0c074020(void);
int FUN_0c07ada0(int, int);
int FUN_0c07ff00(void);
int FUN_0c07ffac(int);
int FUN_0c07ffbc(int, int, int);
int FUN_0c08bbe4(int, int);
int FUN_0c08f3b8(int);
int FUN_0c08f5d8(int);
int FUN_0c08f824(int, int, int);
extern int FUN_0c08f87c();
int FUN_0c14f3b0(int, int, int, int);
int FUN_0c14fd82(int, int);
int FUN_0c14ff0c(int);
extern int FUN_0c1616ce();
int Voice_ShutUp(int);
extern float _builtin_sqrtf(float);
int adxf_ChkPrmPt(int, int);
int kdGetDevice(int);
int kdGetDeviceInfo(int);
int kdGetStatus(int);
int kdIsChanged(int);
int kdRecognizeChanged(int);
int kmiAddSysConfigFlag(int);
int kmiCopyToPVRMemory(int, int, int);
int kmiFBalloc(int, int);
int kmiGetDisplayData(int, int, int);
int kmiGetSysConfigFlag(void);
int memset(int, int, int);
int mpvvlc_InitMbai(void);
int nlGetAverageVector(int, int, int, float, float);
int nlGetMatrix33on44(int);
int nlInitEvent(void);
int nlInitHeapMemory(int, int);
int nlLocate(int, int);
int nlMakeModelViewProjectMatrix(void);
int nlMultiMatrix(int);
int nlObjPut(int);
int nlObjPutUseViewMatrix(int);
int nlOuterProduct(int, int, int);
int nlPopMatrix(int);
int nlPrintf(int, ...);
int nlProjectScreen(int, int);
int nlPushMatrix(int);
int nlRotateAY(int);
int nlRotateAxe(int, int);
int nlScreenPoint(int, int, int, float, float, float);
int nlSubVector3op(int, int, int);
float nlTan(int);
int nlUnitMatrix(void);
int nl_set_cnv_proj_pers(void);
int pdGetPeripheral(int);
int pfSize(float, float);
int strncpy(int, int, int);
int vmsfb_create(int, int, int);
int vmsfb_init(void);
int vmsfb_sleep(void);
int vmsfs_write_retry(int, int, int);
int vmsio_kd_bank_command(int, int, int, int, int);
int FUN_0c06753c(int a4, int a5);
int FUN_0c05b8ee(int a4, int a5, int a6, float f4);
int FUN_0c036170(int a4);
int FUN_0c01cb08(void);
int FUN_0c027a54(void);
int nlPerspective_L(int a4, float f4, float f5, float f6);
int nlPerspective_L_0c079730(int a4, float f4, float f5, float f6);
int FUN_0c02b1ca(int a4, int a5);
int FUN_0c03fa18(int a4, int a5, int a6, int a7);
int FUN_0c14fa16(int a4, int a5, int a6, int a7);
int kmCreateFrameBufferSurface(int a4, int a5, int a6, int a7, int a8);
int ADX_DecodeInfoWav(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14);
int FUN_0c030cb4(int a4, int a5, int a6, int a7, float f4);
int FUN_0c04f050(void);
int FUN_0c057064(void);
int vmsfs_c_init(int a4);
int FUN_0c027bfa(int a4);
int vmsio_bank_change(int a4, int a5);
int FUN_0c08eee0(int a4, int a5, int a6, int a7);

int FUN_0c06753c(int a4, int a5)
{
    int stk[8];
    register int t1;
    register float u9;
    register float u10;
    register float u11;
    register float u12;
    register int t53;
    register int t32;
    register int t33;
    int t42;
    int t52;
    int R1000;

    R1000 = *(int *)((int)stk + 0);

    R1000 = a5;
    nlPushMatrix((a4 + 0x40));
    t1 = FUN_0c05be5c((a4 + 0x70), 15.0f);
    if (t1 != 0) {
        nlPushMatrix(0x0);
        nlMakeModelViewProjectMatrix();
        nlProjectScreen(0xC10D9BC, (((int)stk + 0) + 0xC));
        FUN_0c073c40((((int)stk + 0) + 0x14), 0xC10D9E0, 20.0f);
        nlProjectScreen((((int)stk + 0) + 0x14), (((int)stk + 0) + 0x4));
        *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) - (*(float *)(((int)stk + 4))));
        u9 = *(float *)(((int)stk + 8));
        u10 = *(float *)(((int)stk + 16));
        *(float *)(((int)stk + 16)) = (u10 - u9);
        u11 = *(float *)(((int)stk + 12));
        u12 = ((u10 - u9) * (u10 - u9));
        u12 = u12 + u11 * u11;
        nlPopMatrix(0x1);
        t32 = 0x0;
        t33 = 0x1;
        if (1600.0f > u12) {
            nlPushMatrix(0x0);
            FUN_0c072ff0();
            FUN_0c073ab0();
            nlRotateAY(0x8000);
            nlObjPut((*(int *)(((((*(int *)((a4 + 0x10))) - 35) << 2) + 0xC13AF20))));
            nlPopMatrix(0x1);
            *(unsigned int *)((a4 + 0x3C)) = ((*(int *)((a4 + 0x3C))) | 0x40000000);
            t32 = 0x1;
            t33 = 0x0;
        }
    } else {
        *(unsigned int *)((a4 + 0x3C)) = ((*(int *)((a4 + 0x3C))) | 0x40000000);
        t32 = 0x0;
        t33 = 0x0;
    }
    FUN_0c05f4c8(a4);
    *(unsigned int *)((a4 + 0x3C)) = ((*(int *)((a4 + 0x3C))) & 0xBFFFFFFF);
    if (((R1000) != 0) && (t42 = *(signed char *)(((a4 + 0x3F) + 0x0)), (t42 & 64) == 0)) {
        CalcShadow2Matrix((0x90 + a4));
        FUN_0c073a30(0.0f, 0.100000001f, 0.0f);
        nlObjPutUseViewMatrix(0xC4F4988);
    }
    nlPopMatrix(0x1);
    if ((t33 != 0) && (t52 = *(signed char *)((a4 + 0xFE)), (t52 & 8) != 0)) {
        t53 = FUN_0c05f434();
        nlPushMatrix((0x80 + t53));
        nlObjPutUseViewMatrix(0xC3BC430);
        nlPopMatrix(0x1);
    }
    return t32;
}

int FUN_0c05b8ee(int a4, int a5, int a6, float f4)
{
    int stk[6];
    register float t2;
    register float t8;
    register int t9;
    register float t12;
    register int t13;
    register float t17;
    register int t18;
    register float t19;
    register int t20;
    register float u6;
    float s1;

    FUN_0c073360();
    nlOuterProduct((a4 + 0x20), (a5 + 0x20), (((int)stk + 0) + 0xC));
    t2 = FUN_0c073c80((((int)stk + 0) + 0xC));
    if (9.99999975e-06f > t2) {
        FUN_0c07ff00();
        u6 = t2;
    } else {
        s1 = _builtin_sqrtf(t2);
        FUN_0c073c40((((int)stk + 0) + 0xC), (((int)stk + 0) + 0xC), (1.0f / s1));
        u6 = s1;
    }
    t8 = FUN_0c073b40((a4 + 0x20), (a5 + 0x20));
    t9 = FUN_0c070730(t8);
    nlOuterProduct((a5 + 0x20), (((int)stk + 0) + 0xC), ((int)stk + 0));
    FUN_0c073e10(((int)stk + 0));
    t12 = FUN_0c073b40((a4 + 0x20), ((int)stk + 0));
    t13 = t9;
    if (0.0f > t12) {
        t13 = (-t9);
    }
    nlRotateAxe((((int)stk + 0) + 0xC), t13);
    FUN_0c072290((a4 + 0x10), ((int)stk + 0));
    t17 = FUN_0c073b40((a5 + 0x10), ((int)stk + 0));
    t18 = FUN_0c070730(t17);
    t19 = FUN_0c073b40(a5, ((int)stk + 0));
    t20 = t18;
    if (0.0f > t19) {
        t20 = (-t18);
    }
    nlUnitMatrix();
    nlRotateAxe((a5 + 0x20), (int)((float)t20 * f4));
    nlRotateAxe((((int)stk + 0) + 0xC), (int)((float)t13 * f4));
    nlMultiMatrix(a4);
    nlGetMatrix33on44(a6);
    nlGetAverageVector((a4 + 0x30), (a5 + 0x30), (a6 + 0x30), (1.0f - f4), f4);
    (((struct o2C_float *)(a6))->v) = 0.0f;
    (((struct o1C_float *)(a6))->v) = 0.0f;
    (((struct oC_float *)(a6))->v) = 0.0f;
    (((struct o3C_float *)(a6))->v) = 1.0f;
    return (nlPopMatrix(0x1));
}

int FUN_0c036170(int a4)
{
    int stk[12];
    register int t2;
    register int t11;
    register int t59;
    register int t21;
    register int t26;
    register int t29;
    register int t54;
    register int t33;
    register int t34;
    register int t35;
    register int t40;
    register float u45;
    register float u46;
    register float u50;
    register float u52;
    register int t53;
    register int t16;
    register int t17;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = (unsigned char)(*(signed char *)0xC28ED9F);
    if ((*(int *)(((int)stk + 4))) != 0) {
        t2 = FUN_0c03425e(0x0, ((int)stk + 0), 0x2, 0x0);
        if (t2 == 1) {
            *(unsigned char *)0xC28ED9F = (*(int *)(((int)stk + 0)));
        }
    }
    t11 = FUN_0c03e4d0(0x0);
    t59 = t11;
    if (t11 == 1) {
        if ((*(int *)(((int)stk + 4))) != 0) {
            t16 = 0x80013;
            t17 = (*(int *)(((int)stk + 0)));
        } else {
            t16 = 0x13;
            t17 = (*(int *)(((int)stk + 0)));
        }
        FUN_0c034e28(t16, 0xC0B574C, 0x2, t17, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        t21 = *(signed char *)0xC28ED9F;
        t26 = 0x7;
        t35 = 0xC0B5510;
        t34 = (((unsigned char)t21 * 0x1C) + 0xC12B7E0);
        t29 = 0xC0B7E14;
        if ((*(int *)0xC2A4FB8) == 1) {
            t26 = 0x6;
            t35 = 0xC0B5644;
            t34 = ((((((unsigned char)t21 << 1) + (unsigned char)t21) << 2) << 1) + 0xC12B818);
            t29 = 0xC0B7E24;
        }
        t54 = (FUN_0c03346e(t29, 0xC2A5808, (-(*(int *)0xC2A5860)), 0x0));
        if ((int)t26 > 0) {
            t33 = 0x0;
            for (;;) {
                FUN_0c033578(0x13, (t35 + 0xC), ((*(float *)((t35 + 0x0))) + (float)(*(int *)0xC2A5860)), ((((struct o4_float *)(t35))->v)), 1.0f);
                t40 = *(int *)((t34 + 0x0));
                t34 = (t34 + 0x4);
                u45 = (((struct o4_float *)((((t40 << 1) * 0x2C) + 0xC0B52A8)))->v);
                u46 = *(float *)(((((t40 << 1) * 0x2C) + 0xC0B52A8) + 0x0));
                FUN_0c033578(0x20, ((((t40 << 1) * 0x2C) + 0xC0B52A8) + 0xC), (((*(float *)((t35 + 0x0))) + u46) + (float)(*(int *)0xC2A5860)), (((((struct o4_float *)(t35))->v)) + u45), 1.0f);
                u50 = (((struct o4_float *)(((((t40 << 1) * 0x2C) + 0xC0B52A8) + 0x2C)))->v);
                u52 = (((struct o2C_float *)((((t40 << 1) * 0x2C) + 0xC0B52A8)))->v);
                t53 = FUN_0c033578(0x20, (((((t40 << 1) * 0x2C) + 0xC0B52A8) + 0x2C) + 0xC), (((*(float *)((t35 + 0x0))) + u52) + (float)(*(int *)0xC2A5860)), (((((struct o4_float *)(t35))->v)) + u50), 1.0f);
                t33 = (t33 + 0x1);
                t35 = (t35 + 0x2C);
                if ((int)t33 >= (int)t26) {
                    break;
                }
            }
            t54 = t53;
        }
        t59 = t54;
    }
    return t59;
}

int FUN_0c01cb08(void)
{
    register float u0;

    *(unsigned int *)0xC11D094 = 0x0;
    if (((((struct o24_int *)0xC1EC71C)->v)) != 0) {
        FUN_0c06f240();
        FUN_0c027f28(0x0);
        FUN_0c02803a(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
        pfSize(1.0f, 1.0f);
        u0 = (-((FUN_0c02806c(0xC0974F0)) * 0.5f));
        FUN_0c027fbe((u0 + 320.0f), 240.0f);
        FUN_0c02842e(0xC097540);
        FUN_0c06f240();
        u0 = (-((FUN_0c02806c(0xC0974F0)) * 0.5f));
        FUN_0c027fbe((u0 + 320.0f), 240.0f);
        FUN_0c02842e(0xC097540);
        *(unsigned int *)0xC11D094 = ((*(int *)0xC11D094) + 0x1);
        FUN_0c01c4e2();
        FUN_0c06f240();
    }
    *(unsigned int *)0xC177EF0 = 0xC177EF4;
    nlInitHeapMemory(0xC177EF4, 0x30000);
    nlInitEvent();
    FUN_0c01e6f0();
    FUN_0c05ab5e();
    if (((((struct o24_int *)0xC1EC71C)->v)) != 0) {
        if (((((struct o0_int *)0xC1EC71C)->v)) == 2) {
            FUN_0c020b54();
        } else {
            FUN_0c0209b6();
        }
        pfSize(1.0f, 1.0f);
        u0 = (-((FUN_0c02806c(0xC0974F0)) * 0.5f));
        FUN_0c027fbe((u0 + 320.0f), 240.0f);
        FUN_0c02842e(0xC097540);
        *(unsigned int *)0xC11D094 = ((*(int *)0xC11D094) + 0x1);
        FUN_0c01c4e2();
        FUN_0c06f240();
    }
    mpvvlc_InitMbai();
    FUN_0c06cd60();
    if ((*(int *)0xC11D048) != ((((struct o0_int *)0xC1EC71C)->v))) {
        *(unsigned int *)0xC11D048 = ((((struct o0_int *)0xC1EC71C)->v));
        FUN_0c01ff48(((((struct o0_int *)0xC1EC71C)->v)), 0x0);
        FUN_0c048d70(((((struct o0_int *)0xC1EC71C)->v)));
    } else {
        FUN_0c020244();
    }
    if (((((struct o24_int *)0xC1EC71C)->v)) != 0) {
        FUN_0c027f28(0x0);
        pfSize(1.0f, 1.0f);
        u0 = (-((FUN_0c02806c(0xC0974F0)) * 0.5f));
        FUN_0c027fbe((u0 + 320.0f), 240.0f);
        FUN_0c02842e(0xC097540);
        *(unsigned int *)0xC11D094 = ((*(int *)0xC11D094) + 0x1);
        FUN_0c01c4e2();
        FUN_0c06f240();
    }
    FUN_0c05f788((*(int *)0xC175C80), 0x0);
    FUN_0c0100c4((*(int *)0xC175C80), 0x1);
    FUN_0c020176();
    return FUN_0c0200f0(((((struct o0_int *)0xC1EC71C)->v)));
}

int FUN_0c027a54(void)
{
    int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;

    FUN_0c059e6a(0x3, 0x1E, 0x15, 0x15);
    nlLocate(0x3, 0x1E);
    nlPrintf(0xC09D9EC);
    nlLocate(0x6, 0x20);
    FUN_0c071920(0xFFFFFF00);
    nlPrintf(0xC09DA04);
    t2 = 0x0;
    for (;;) {
        if (((int)((((struct o8_int *)0xC270D08)->v)) > 0) && (t0 = (((struct o4_int *)0xC270D08)->v), t2 == t0)) {
            t3 = (((struct o8_int *)0xC270D08)->v);
            t4 = ((~(((~(t3 >> 1)) + 0x1) & 0x1)) + 0x1);
            if ((int)(t3 >> 1) >= 0) {
                t4 = ((t3 >> 1) & 0x1);
            }
            t3 = 0xFFFF0000;
            if (t4 != 0) {
                t3 = 0xFFFFFF00;
            }
            FUN_0c071920(t3);
        } else {
            t3 = 0xFF808080;
            if ((*(int *)((((((t2 << 2) + t2) << 2) << 1) + 0xC270BE0))) != 0) {
                t3 = 0xFFFFFFFF;
            }
            FUN_0c071920(t3);
        }
        nlPrintf(0xC09DA0C, (t2));
        t2 = (t2 + 0x1);
        if ((int)t2 >= (int)0x8) {
            break;
        }
    }
    nlPrintf(0xC09D8BC);
    FUN_0c071920(0xFFFFFF00);
    nlPrintf(0xC09DA18);
    t0 = 0x8;
    for (;;) {
        t2 = (((struct o8_int *)0xC270D08)->v);
        if (((int)t2 > 0) && (t1 = (((struct o4_int *)0xC270D08)->v), t0 == t1)) {
            t3 = ((~(((~(t2 >> 1)) + 0x1) & 0x1)) + 0x1);
            if ((int)(t2 >> 1) >= 0) {
                t3 = ((t2 >> 1) & 0x1);
            }
            t2 = 0xFFFF0000;
            if (t3 != 0) {
                t2 = 0xFFFFFF00;
            }
            FUN_0c071920(t2);
        } else {
            t2 = 0xFFFFFFFF;
            if ((*(int *)(((((((t0 - 8) << 2) + (t0 - 8)) << 2) << 1) + 0xC270BE0))) != 0) {
                t2 = 0xFFFF4040;
            }
            FUN_0c071920(t2);
        }
        nlPrintf(0xC09DA0C, (t0 - 8));
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x10) {
            break;
        }
    }
    FUN_0c071920(0xFFFFFFFF);
    t0 = (((struct o0_int *)0xC270D08)->v);
    t1 = (t0 + 0x21);
    if ((int)t0 >= (int)0x8) {
        t1 = (t0 + 0x23);
    }
    nlLocate(0x3, t1);
    return (nlPrintf(0xC09D9E8));
}

int nlPerspective_L(int a4, float f4, float f5, float f6)
{
    int stk[20];
    register int t0;
    register float t2;
    register float u3;
    register int t5;
    register float t6;
    register int t8;
    register int t10;
    register int t21;
    register float t17;
    register float t25;
    register float u26;
    register float u28;
    register float u29;
    register float u32;
    register float u33;
    register float u34;
    register float u36;
    register float u37;
    int R1000;
    float R1008;
    float R1012;

    R1000 = *(int *)((int)stk + 0);
    R1008 = *(float *)((int)stk + 8);
    R1012 = *(float *)((int)stk + 12);

    R1000 = a4;
    R1008 = f4;
    t0 = R1000;
    t2 = nlTan((t0 >> 1));
    u3 = R1008;
    *(float *)(((int)stk + 4)) = (u3 / (1.0f / t2));
    if (((((struct oC_float *)0xC1473C8)->v)) != 0.0f) {
        t5 = FUN_0c070890((u3 / (1.0f / t2)));
        R1000 = t5;
        t6 = nlTan(t5);
        t8 = FUN_0c070890((t6 * (((((struct oC_float *)0xC1473C8)->v)) + 1.0f)));
        R1012 = (1.0f / (FUN_0c070a10(t8)));
    } else {
        t10 = FUN_0c070890((u3 / (1.0f / t2)));
        R1012 = (1.0f / (FUN_0c070a10(t10)));
    }
    t21 = (t0 >> 1);
    if (((((struct o10_float *)0xC1473C8)->v)) != 0.0f) {
        t17 = nlTan((t0 >> 1));
        t21 = (FUN_0c070890((t17 * (((((struct o10_float *)0xC1473C8)->v)) + 1.0f))));
    }
    t25 = FUN_0c070a10(t21);
    (((struct oC_float *)0xC1473C8)->v) = 0.0f;
    (((struct o10_float *)0xC1473C8)->v) = 0.0f;
    u26 = R1008;
    u28 = ((1.0f / t2) * (1.0f / t25));
    u29 = (((1.0f / t2) / u26) * (R1012));
    (((struct o0_float *)0xC1473C8)->v) = (u29 * 0.5f);
    (((struct o4_float *)0xC1473C8)->v) = (u28 * 0.5f);
    (((struct o0_float *)0xC2BFBF0)->v) = (((((struct o14_float *)0xC1473C8)->v)) * ((((struct o0_float *)0xC1473C8)->v)));
    u32 = (((struct o4_float *)0xC1473C8)->v);
    u33 = (((struct o18_float *)0xC1473C8)->v);
    (((struct o4_float *)0xC2BFBF0)->v) = (u33 * u32);
    u34 = (((struct o0_float *)0xC2BFBF0)->v);
    if (u34 > (u33 * u32)) {
        (((struct o8_float *)0xC1473C8)->v) = u34;
    } else {
        (((struct o8_float *)0xC1473C8)->v) = (u33 * u32);
    }
    *(float *)(((int)stk + 16)) = ((1.0f / t2) / u26);
    *(float *)(((int)stk + 20)) = 0.0f;
    *(float *)(((int)stk + 24)) = 0.0f;
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 32)) = 0.0f;
    *(float *)(((int)stk + 36)) = (1.0f / t2);
    *(float *)(((int)stk + 40)) = 0.0f;
    *(float *)(((int)stk + 44)) = 0.0f;
    *(float *)(((int)stk + 48)) = 0.0f;
    *(float *)(((int)stk + 52)) = 0.0f;
    *(float *)(((int)stk + 56)) = ((f5 + f6) / (f5 - f6));
    *(float *)(((int)stk + 60)) = 1.0f;
    *(float *)(((int)stk + 64)) = 0.0f;
    *(float *)(((int)stk + 68)) = 0.0f;
    u36 = (f5 * f6);
    u37 = (u36 * (1.0f + 1.0f));
    u37 = -u37;
    *(float *)(((int)stk + 72)) = (u37 / (f5 - f6));
    *(float *)(((int)stk + 76)) = 0.0f;
    (((struct o0_float *)0xC2C4DBC)->v) = f5;
    (((struct o4_float *)0xC2C4DBC)->v) = f6;
    (((struct o8_float *)0xC2C4DBC)->v) = (1.0f / f5);
    (((struct o18_float *)0xC2BF8BC)->v) = f5;
    (((struct o0_float *)0xC2BF8BC)->v) = (-f5);
    (((struct o1C_float *)0xC2BF8BC)->v) = f6;
    (((struct o14_float *)0xC2BF8BC)->v) = (1.0f / f5);
    nlMultiMatrix((((int)stk + 0) + 0x10));
    return (nl_set_cnv_proj_pers());
}

int nlPerspective_L_0c079730(int a4, float f4, float f5, float f6)
{
    int stk[20];
    register int t0;
    register float t4;
    register int t6;
    register float u14;
    register float u15;
    register float u24;
    register int t16;
    register int t26;
    register float t27;
    register float u28;
    register float u31;
    register float u32;
    register float u33;
    register float u36;
    register float u37;
    register float u38;
    register float u41;
    register float u42;
    float R1000;
    int R1004;
    float R1008;
    float R1012;

    R1000 = *(float *)((int)stk + 0);
    R1004 = *(int *)((int)stk + 4);
    R1008 = *(float *)((int)stk + 8);
    R1012 = *(float *)((int)stk + 12);

    R1004 = a4;
    R1008 = f4;
    t0 = R1004;
    R1000 = (1.0f / (nlTan((t0 >> 1))));
    if (((((struct oC_float *)0xC1473C8)->v)) != 0.0f) {
        t4 = nlTan((t0 >> 1));
        t6 = FUN_0c070890((t4 * (((((struct oC_float *)0xC1473C8)->v)) + 1.0f)));
        R1012 = (1.0f / (FUN_0c070a10(t6)));
    } else {
        R1012 = (1.0f / (FUN_0c070a10((t0 >> 1))));
    }
    u14 = R1000;
    u15 = R1008;
    u24 = (1.0f / (u15 * u14));
    if (((((struct o10_float *)0xC1473C8)->v)) != 0.0f) {
        t16 = FUN_0c070890((1.0f / (u15 * u14)));
        R1004 = t16;
        u24 = ((nlTan(t16)) * (((((struct o10_float *)0xC1473C8)->v)) + 1.0f));
    }
    t26 = FUN_0c070890(u24);
    t27 = FUN_0c070a10(t26);
    (((struct oC_float *)0xC1473C8)->v) = 0.0f;
    (((struct o10_float *)0xC1473C8)->v) = 0.0f;
    u28 = *(float *)0xC074A84;
    u31 = (u15 * u14);
    u32 = ((R1000) * (R1012));
    u33 = (u31 * (1.0f / t27));
    (((struct o0_float *)0xC1473C8)->v) = (u32 * u28);
    (((struct o4_float *)0xC1473C8)->v) = (u33 * u28);
    (((struct o0_float *)0xC2BFBF0)->v) = (((((struct o14_float *)0xC1473C8)->v)) * ((((struct o0_float *)0xC1473C8)->v)));
    u36 = (((struct o4_float *)0xC1473C8)->v);
    u37 = (((struct o18_float *)0xC1473C8)->v);
    (((struct o4_float *)0xC2BFBF0)->v) = (u37 * u36);
    u38 = (((struct o0_float *)0xC2BFBF0)->v);
    if (u38 > (u37 * u36)) {
        (((struct o8_float *)0xC1473C8)->v) = u38;
    } else {
        (((struct o8_float *)0xC1473C8)->v) = (u37 * u36);
    }
    *(float *)(((int)stk + 16)) = (R1000);
    *(float *)(((int)stk + 20)) = 0.0f;
    *(float *)(((int)stk + 24)) = 0.0f;
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 32)) = 0.0f;
    *(float *)(((int)stk + 36)) = (u15 * u14);
    *(float *)(((int)stk + 40)) = 0.0f;
    *(float *)(((int)stk + 44)) = 0.0f;
    *(float *)(((int)stk + 48)) = 0.0f;
    *(float *)(((int)stk + 52)) = 0.0f;
    *(float *)(((int)stk + 56)) = ((f5 + f6) / (f5 - f6));
    *(float *)(((int)stk + 60)) = 1.0f;
    *(float *)(((int)stk + 64)) = 0.0f;
    *(float *)(((int)stk + 68)) = 0.0f;
    u41 = (f5 * f6);
    u42 = (u41 * (1.0f + 1.0f));
    u42 = -u42;
    *(float *)(((int)stk + 72)) = (u42 / (f5 - f6));
    *(float *)(((int)stk + 76)) = 0.0f;
    (((struct o0_float *)0xC2C4DBC)->v) = f5;
    (((struct o4_float *)0xC2C4DBC)->v) = f6;
    (((struct o8_float *)0xC2C4DBC)->v) = (1.0f / f5);
    (((struct o18_float *)0xC2BF8BC)->v) = f5;
    (((struct o0_float *)0xC2BF8BC)->v) = (-f5);
    (((struct o1C_float *)0xC2BF8BC)->v) = f6;
    (((struct o14_float *)0xC2BF8BC)->v) = (1.0f / f5);
    nlMultiMatrix((((int)stk + 0) + 0x10));
    return (nl_set_cnv_proj_pers());
}

int FUN_0c02b1ca(int a4, int a5)
{
    int stk[3];
    register float u0;
    register float u27;
    register float u28;
    register float u30;
    register float u32;
    register float u36;
    register float u40;
    register float u41;
    register float t52;
    register float t53;
    register float u58;
    register float u59;
    register float u61;
    register float u64;

    u0 = (((struct o8_float *)0xC271E34)->v);
    if (u0 == 0.0f) {
        *(float *)((a4 + 0x0)) = ((*(float *)((a4 + 0x0))) + ((((struct o4_float *)(((((((((struct o0_int *)0xC271E34)->v)) << 2) << 2) << 1) + 0xC128DB4)))->v)));
        *(float *)((a5 + 0x0)) = ((*(float *)((a5 + 0x0))) - ((((struct o4_float *)(((((((((struct o4_int *)0xC271E34)->v)) << 2) << 2) << 1) + 0xC128DB4)))->v)));
    } else {
        if (!(((((struct o10_float *)0xC271E34)->v)) > u0)) {
            if (((((struct o14_float *)0xC271E34)->v)) > u0) {
                *(unsigned int *)((a4 + 0x24)) = ((*(int *)((a4 + 0x24))) | ((int)0x1 << (int)((((struct o4_int *)0xC271E34)->v))));
            }
            if (((((struct o18_float *)0xC271E34)->v)) > ((((struct o8_float *)0xC271E34)->v))) {
                *(unsigned int *)((a5 + 0x24)) = ((*(int *)((a5 + 0x24))) | ((int)0x1 << (int)((((struct o0_int *)0xC271E34)->v))));
            }
        } else {
            nlSubVector3op(((int)stk + 0), a5, a4);
            FUN_0c073e10(((int)stk + 0));
            u27 = (((struct o8_float *)0xC271E34)->v);
            u28 = (((struct o10_float *)0xC271E34)->v);
            u30 = (((struct o1C_float *)0xC271E34)->v);
            u32 = (u30 * (u28 - u27));
            *(float *)((a4 + 0x0)) = ((*(float *)((a4 + 0x0))) - (((*(float *)(((int)stk + 0))) * u32)));
            u36 = (u30 * (u28 - u27));
            (((struct o4_float *)(a4))->v) = (((((struct o4_float *)(a4))->v)) - ((((((struct o4_float *)(((int)stk + 0)))->v)) * u36)));
            u40 = (u30 * (u28 - u27));
            u41 = (u30 * (u28 - u27));
            (((struct o8_float *)(a4))->v) = (((((struct o8_float *)(a4))->v)) - ((((((struct o8_float *)(((int)stk + 0)))->v)) * u40)));
            *(float *)((a5 + 0x0)) = ((*(float *)((a5 + 0x0))) - (((*(float *)(((int)stk + 0))) * (u41 - (u28 - u27)))));
            (((struct o4_float *)(a5))->v) = (((((struct o4_float *)(a5))->v)) - ((((((struct o4_float *)(((int)stk + 0)))->v)) * (u41 - (u28 - u27)))));
            (((struct o8_float *)(a5))->v) = (((((struct o8_float *)(a5))->v)) - ((((((struct o8_float *)(((int)stk + 0)))->v)) * (u41 - (u28 - u27)))));
            t52 = FUN_0c073b40(((int)stk + 0), (a4 + 0xC));
            t53 = FUN_0c073b40(((int)stk + 0), (a5 + 0xC));
            if ((t52 - t53) > 0.0f) {
                u58 = (((struct o10_float *)(((((((((struct o4_int *)0xC271E34)->v)) << 2) << 2) << 1) + 0xC128DB4)))->v);
                u59 = (((struct o10_float *)(((((((((struct o0_int *)0xC271E34)->v)) << 2) << 2) << 1) + 0xC128DB4)))->v);
                u61 = ((t52 - t53) * (u59 + u58));
                nlGetAverageVector((a4 + 0xC), ((int)stk + 0), (a4 + 0xC), 1.0f, (-(((((struct o1C_float *)0xC271E34)->v)) * u61)));
                u64 = ((t52 - t53) * (u59 + u58));
                nlGetAverageVector((a5 + 0xC), ((int)stk + 0), (a5 + 0xC), 1.0f, ((1.0f - ((((struct o1C_float *)0xC271E34)->v))) * u64));
            }
            *(unsigned int *)((a4 + 0x20)) = ((*(int *)((a4 + 0x20))) | ((int)0x1 << (int)((((struct o4_int *)0xC271E34)->v))));
            *(unsigned int *)((a5 + 0x20)) = ((*(int *)((a5 + 0x20))) | ((int)0x1 << (int)((((struct o0_int *)0xC271E34)->v))));
        }
    }
    return 0x1;
}

int FUN_0c03fa18(int a4, int a5, int a6, int a7)
{
    int stk[5];
    register int t1;
    register int t3;
    register int t5;
    register int t15;
    register int t16;
    register int t17;
    register int t18;
    register int t19;
    register int t25;
    register int t32;
    register int t34;
    register int t36;
    register int t71;
    register int t72;
    register int t73;
    register int t79;
    register int t86;
    register int t70;
    int R1000;
    int R1004;
    int R1008;
    int R1012;
    int R1016;

    R1000 = *(int *)((int)stk + 0);
    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);
    R1016 = *(int *)((int)stk + 16);

    R1000 = a5;
    R1016 = a7;
    R1008 = 0x0;
    t1 = *(int *)((((a4 << 2) << 1) + 0xC2AA820));
    t3 = FUN_0c07ffac((R1016));
    R1004 = t3;
    R1012 = ((int)t3 >> 5);
    t5 = *(int *)0xC2ADA7C;
    if ((int)(R1016) >= 0) {
        t16 = *(int *)(((*(int *)((((((a4 << 1) + a4) << 2) + t5) + 0x4))) + 0x0));
        if ((int)(R1004) >= 0) {
            t15 = 0x0;
            t17 = a4;
            t18 = a6;
            t19 = t1;
            for (;;) {
                if (((*(int *)((t19 + (((int)(R1000) >> 5) << 2)))) & ((int)0x1 << (int)((R1000) & 0x1F))) != 0) {
                    t25 = t15;
                    if (t15 != 0) {
                        t25 = (((int)(t15 - 1) << (int)(-(R1012))) + 0x1);
                    }
                    R1008 = ((R1008) | ((int)0x1 << (int)t25));
                }
                t32 = R1000;
                R1000 = (t32 + 0x1);
                if ((int)(t32 + 0x1) >= (int)t16) {
                    t34 = ((((t17 << 1) + t17) << 2) + t5);
                    t36 = t17;
                    t17 = t18;
                    t17 = (t17 << 1);
                    t17 = (t17 + ((*(int *)((t34 + 0x8))) + 0x4));
                    t17 = (*(short *)((t17 + 0x0)));
                    t17 = (unsigned short)t17;
                    if (t17 == 0) {
                        t18 = (t18 + 0x1);
                        t17 = t18;
                        t17 = (t17 & 0x1);
                        t17 = (t17 << 1);
                        t17 = (t17 + ((*(int *)((((((t36 << 1) + t36) << 2) + t5) + 0x8))) + 0x4));
                        t17 = (*(short *)((t17 + 0x0)));
                        t17 = (unsigned short)t17;
                    }
                    t16 = t17;
                    t16 = (t16 << 1);
                    t16 = (t16 + t17);
                    t19 = t17;
                    t16 = (t16 << 2);
                    t19 = (t19 << 2);
                    t16 = (t16 + t5);
                    t19 = (t19 << 1);
                    t16 = (*(int *)((t16 + 0x4)));
                    t16 = (*(int *)((t16 + 0x0)));
                    R1000 = 0x0;
                    t19 = (*(int *)((t19 + 0xC2AA820)));
                    if (t19 != 0) {
                        t15 = (t15 + 0x1);
                        if ((int)t15 > (int)(R1004)) {
                            break;
                        }
                        continue;
                    }
                    return (R1008);
                }
                t15 = (t15 + 0x1);
                if ((int)t15 > (int)(R1004)) {
                    break;
                }
            }
        }
    } else {
        if ((int)(R1004) >= 0) {
            t71 = 0x0;
            t72 = a4;
            t73 = t1;
            for (;;) {
                if (((*(int *)((t73 + (((int)(R1000) >> 5) << 2)))) & ((int)0x1 << (int)((R1000) & 0x1F))) != 0) {
                    t79 = t71;
                    if (t71 != 0) {
                        t79 = (((int)(t71 - 1) << (int)(-(R1012))) + 0x1);
                    }
                    R1008 = ((R1008) | ((int)0x1 << (int)t79));
                }
                t86 = R1000;
                R1000 = (t86 - 1);
                if ((int)(t86 - 1) < 0) {
                    t70 = t72;
                    t70 = (t70 << 1);
                    t70 = (t70 + t72);
                    t70 = (t70 << 2);
                    t70 = (t70 + t5);
                    t72 = (unsigned short)(*(short *)(((*(int *)((t70 + 0x8))) + 0x8)));
                    t73 = t72;
                    t70 = (*(int *)((((((t72 << 1) + t72) << 2) + t5) + 0x4)));
                    t73 = (t73 << 2);
                    t73 = (t73 << 1);
                    R1000 = ((*(int *)((t70 + 0x0))) - 1);
                    t73 = (*(int *)((t73 + 0xC2AA820)));
                    if (t73 != 0) {
                        t71 = (t71 + 0x1);
                        if ((int)t71 > (int)(R1004)) {
                            break;
                        }
                        continue;
                    }
                    break;
                }
                t71 = (t71 + 0x1);
                if ((int)t71 > (int)(R1004)) {
                    break;
                }
            }
        }
    }
    return (R1008);
}

int FUN_0c14fa16(int a4, int a5, int a6, int a7)
{
    int stk[12];

    register int R1;
    register int R2;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_10;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    int R1000;
    int R1004;
    int R1008;
    int R1012;
    R1000 = *(int *)((int)stk + 0);
    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);
    v0_8 = a4;
    v0_5 = a5;
    v0_2 = a6;
    v0_3 = a7;
    R1004 = v0_8;
    R1000 = v0_5;
    R1012 = v0_3;
    v0_6 = adxf_ChkPrmPt((R1004), v0_2);
    v0_4 = (v0_6);
    v0_0 = (v0_2);
    v0_1 = (v0_2);
    if (((int)v0_6 >= 0)) goto L_C14FA42;
    L_C14FBA2:;
    v0_0 = (v0_4);
    L_C14FBA4:;
    return v0_0;
    L_C14FA42:;
    v0_4 = FUN_0c14fd82((R1000), 0x0);
    R1008 = v0_4;
    v0_6 = (0xC1616CE);
    if ((v0_4 != 0)) goto L_C14FA5A;
    v0_0 = ((int (*)(int, int, int, int))(FUN_0c1616ce))(0xC170790, v0_5, v0_2, v0_3);
    v0_0 = (0xFFFFFFFF);
    goto L_C14FBA4;
    L_C14FA5A:;
    v0_4 = R1004;
    *(unsigned int *)((v0_0 + 0x0)) = (*(int *)((((v0_4 << 2) + 0xC2D21F4) + 0x0)));
    *(unsigned int *)((((v0_4 << 2) + 0xC2D21F4) + 0x0)) = v0_1;
    strncpy((v0_0 + 0x10), (R1000), 0x28);
    *(unsigned char *)((v0_0 + 0xE)) = 0x1;
    R1004 = (v0_0 + 0x3C);
    (((struct o0_uint *)0xC2D56A8)->v) = 0xC2D3640;
    (((struct o4_uint *)0xC2D56A8)->v) = 0xC2D3640;
    R1000 = 0x0;
    *(unsigned int *)((v0_0 + 0x8)) = 0x0;
    v0_6 = (0x0);
    v0_4 = (0xFFFFFFFF);
    v0_7 = (0x0);
    v0_1 = (0xC2D56AC);
    v0_9 = (0x0);
    L_C14FB76:;
    v0_8 = (0x3);
    if (((int)v0_9 < (int)0x3)) goto L_C14FA9C;
    if ((v0_9 != 3)) goto L_C14FB88;
    v0_1 = ((int (*)(int, int, int, int))(FUN_0c1616ce))(0xC1707E8, v0_5, v0_2, v0_3);
    L_C14FB88:;
    *(unsigned short *)((v0_0 + 0xC)) = (R1000);
    *(unsigned int *)((v0_0 + 0x4)) = (((((unsigned short)(*(short *)((v0_0 + 0xC))) << 2) << 1) + (*(int *)(((*(int *)((v0_0 + 0x0))) + 0x4)))) + 0x3C);
    FUN_0c14ff0c((R1008));
    goto L_C14FBA2;
    L_C14FA9C:;
    v0_8 = (int)(FUN_0c14f3b0((R1008), 0x1, (*(int *)((v0_1 + 0x0))), v0_3)) <= 0;
    if (v0_8) goto L_C14FB74;
    v0_8 = (v0_7);
    if (((*(int *)((v0_0 + 0x8))) != 0)) goto L_C14FB08;
    v0_9 = *(int *)((v0_1 + 0x0));
    v0_8 = (0x10000);
    v0_5 = ((v0_9 + 0x4));
    if (((int)(*(int *)(((v0_9 + 0x4) + 0x0))) <= (int)0x10000)) goto L_C14FACA;
    *(unsigned int *)((v0_5 + 0x0)) = v0_8;
    v0_1 = ((int (*)(int, int, int, int))(FUN_0c1616ce))(0xC1707B8, v0_5, v0_2, v0_3);
    v0_4 = (0xFFFFFFFC);
    v0_1 = (0xC1707B8);
    goto L_C14FB88;
    L_C14FACA:;
    v0_5 = *(int *)(((*(int *)((v0_1 + 0x0))) + 0x4));
    v0_8 = (v0_5);
    if (((int)(R1012) >= (int)v0_5)) goto L_C14FB00;
    v0_5 = ((R1012));
    L_C14FB02:;
    *(unsigned int *)((v0_0 + 0x8)) = v0_5;
    v0_8 = (0x2);
    L_C14FB08:;
    v0_5 = (0x200);
    v0_9 = (0x200);
    if (((int)v0_8 >= (int)0x200)) goto L_C14FB70;
    L_C14FB10:;
    if (((*(int *)(((*(int *)((v0_1 + 0x0))) + (v0_8 << 2)))) != 0)) goto L_C14FB20;
    v0_8 = ((v0_8 + 0x2));
    L_C14FB60:;
    v0_10 = (int)(v0_6 + 0x1) < (int)(*(int *)((v0_0 + 0x8)));
    v0_6 = ((v0_6 + 0x1));
    if (v0_10) goto L_C14FB6C;
    v0_4 = (v0_7);
    goto L_C14FB88;
    L_C14FB6C:;
    if (((int)v0_8 < (int)v0_9)) goto L_C14FB10;
    L_C14FB70:;
    v0_9 = (v0_7);
    goto L_C14FB76;
    L_C14FB20:;
    v0_2 = R1000;
    R1000 = (v0_2 + 0x1);
    v0_3 = R1004;
    *(unsigned short *)(((((((v0_2 + 0x1) - 1) << 2) << 1) + v0_3) + 0x0)) = v0_6;
    *(unsigned int *)(((((((v0_2 + 0x1) - 1) << 2) << 1) + v0_3) + 0x4)) = ((int)((int)((*(int *)(((v0_8 << 2) + (*(int *)((v0_1 + 0x0)))))) + 0x7FF) / (int)0x800));
    *(unsigned short *)(((((((v0_2 + 0x1) - 1) << 2) << 1) + v0_3) + 0x2)) = ((int)((int)((*(int *)((((v0_8 + 0x1) << 2) + (*(int *)((v0_1 + 0x0)))))) + 0x7FF) / (int)0x800));
    v0_8 = (((v0_8 + 0x1) + 0x1));
    v0_5 = ((((((v0_2 + 0x1) - 1) << 2) << 1) + v0_3));
    v0_2 = (0x800);
    v0_3 = (0x7FF);
    goto L_C14FB60;
    L_C14FB00:;
    v0_5 = (v0_8);
    goto L_C14FB02;
    L_C14FB74:;
    v0_9 = ((v0_9 + 0x1));
    goto L_C14FB76;
}

int kmCreateFrameBufferSurface(int a4, int a5, int a6, int a7, int a8)
{
    int stk[647];
    register int t0;
    register int t3;
    register int t4;
    register int t24;
    register int t26;
    register int t60;
    register int t33;
    register int t36;
    register int t72;

    *(unsigned int *)(((int)stk + 0)) = a6;
    t0 = (((struct o4_int *)0xC170E34)->v);
    *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x0)) = ((((struct o0_int *)0xC170E34)->v));
    *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x4)) = t0;
    t3 = (((struct oC_int *)0xC170E34)->v);
    *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x8)) = ((((struct o8_int *)0xC170E34)->v));
    *(unsigned int *)(((((int)stk + 0) + 0x4) + 0xC)) = t3;
    t4 = (((struct o14_int *)0xC170E34)->v);
    *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x10)) = ((((struct o10_int *)0xC170E34)->v));
    *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x14)) = t4;
    *(unsigned int *)((((((*(int *)0xC17409C) << 2) << 2) + 0xC2D0BDC) + 0x0)) = a4;
    *(unsigned int *)((((((*(int *)0xC17409C) << 2) << 2) + 0xC2D0BDC) + 0x4)) = a5;
    *(unsigned int *)((((((*(int *)0xC17409C) << 2) << 2) + 0xC2D0BDC) + 0x8)) = (*(int *)(((int)stk + 0)));
    (((struct o0_uint *)0xC2D0BD8)->v) = a7;
    *(unsigned int *)((((((*(int *)0xC17409C) << 2) << 2) + 0xC2D0BDC) + 0xC)) = a8;
    *(unsigned int *)0xC17409C = (((*(int *)0xC17409C) + 0x1) & 0x1);
    (((struct o10_uint *)0xC3008F4)->v) = a7;
    if (((((struct o3C_int *)0xC2D0BD8)->v)) != 0) {
        kmiGetDisplayData(0xFF, a7, (*(int *)(((int)stk + 0))));
    }
    t24 = kmiGetSysConfigFlag();
    if (t24 == 0x80000000) {
        t26 = kmiFBalloc((*(int *)0xC2D0C20), a4);
        t60 = t26;
        if (t26 == 0) {
            *(unsigned int *)((a4 + 0x0)) = 0x1;
            *(unsigned int *)((a4 + 0x4)) = (*(int *)((((((((struct o0_int *)0xC3008F4)->v)) << 2) + (((int)stk + 0) + 0x4)) + 0x0)));
            *(unsigned int *)((a4 + 0x8)) = ((((struct o0_int *)0xC3008F4)->v));
            *(unsigned int *)((a4 + 0xC)) = ((((struct o30_int *)0xC2D0BD8)->v));
            *(unsigned int *)((a4 + 0x10)) = ((((struct o34_int *)0xC2D0BD8)->v));
            if (a7 == 1) {
                *(unsigned int *)((a4 + 0x18)) = 0x1;
            } else {
                *(unsigned int *)((a4 + 0x18)) = 0x0;
            }
            if (a8 == 1) {
                t33 = (((int)stk + 0) + 0x1C);
                for (;;) {
                    if ((unsigned int)t33 >= (unsigned int)((((int)stk + 0) + 0x1C) + 0xA00)) {
                        break;
                    }
                    *(unsigned int *)((t33 + 0x0)) = 0x0;
                    t33 = (t33 + 0x4);
                }
                if ((unsigned int)0x0 < (unsigned int)(*(int *)((a4 + 0x14)))) {
                    t36 = 0x0;
                    for (;;) {
                        kmiCopyToPVRMemory(((*(int *)((a4 + 0x1C))) + t36), (((int)stk + 0) + 0x1C), 0xA00);
                        t36 = (t36 + 0xA00);
                        if ((unsigned int)t36 >= (unsigned int)(*(int *)((a4 + 0x14)))) {
                            break;
                        }
                    }
                }
            }
            t60 = 0x0;
        }
        t72 = t60;
    } else {
        kmiAddSysConfigFlag(0x200);
        t72 = 0x0;
    }
    return t72;
}

int ADX_DecodeInfoWav(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14)
{
    register int t0;
    register int t1;
    int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    register int t12;

    if ((int)a5 > 0) {
        t3 = 0x0;
        for (;;) {
            t4 = FUN_0c07ffbc((t3 + a4), ((((struct o0_int *)0xC174784)->v)), 0x4);
            if (t4 != 0) {
                t3 = (t3 + 0x1);
                if ((int)t3 >= (int)a5) {
                    break;
                }
                continue;
            }
            break;
        }
        t4 = t3;
    } else {
        t4 = 0x0;
    }
    t3 = 0xFFFFFFFF;
    if (t4 != a5) {
        t5 = ((~(((~t4) + 0x1) & 0x3)) + 0x1);
        if ((int)t4 >= 0) {
            t5 = (t4 & 0x3);
        }
        t6 = 0xFFFFFFFF;
        if (t5 == 0) {
            t5 = 0xFFFFFFFF;
            if ((int)(unsigned short)(*(short *)((((t4 + 0x8) + a4) + 0x0))) <= (int)0x1) {
                if ((int)a5 > 0) {
                    t7 = 0x0;
                    for (;;) {
                        t8 = FUN_0c07ffbc((t7 + a4), ((((struct o8_int *)0xC174784)->v)), 0x4);
                        if (t8 != 0) {
                            t7 = (t7 + 0x1);
                            if ((int)t7 >= (int)a5) {
                                break;
                            }
                            continue;
                        }
                        break;
                    }
                    t8 = t7;
                } else {
                    t8 = 0x0;
                }
                t7 = 0xFFFFFFFF;
                if (t8 != a5) {
                    t9 = *(signed char *)((((t8 + 0x4) + a4) + 0x1));
                    t10 = *(signed char *)((((t8 + 0x4) + a4) + 0x0));
                    t11 = *(signed char *)((((t8 + 0x4) + a4) + 0x2));
                    t12 = *(signed char *)((((t8 + 0x4) + a4) + 0x3));
                    *(unsigned short *)((a6 + 0x0)) = (t8 + 0x8);
                    *(unsigned char *)((a7 + 0x0)) = 0xFFFFFFFF;
                    *(unsigned int *)((a11 + 0x0)) = (((((unsigned char)(*(signed char *)(((((t4 + 0x8) + a4) + 0x4) + 0x1))) << 8) | ((unsigned char)(*(signed char *)(((((t4 + 0x8) + a4) + 0x4) + 0x2))) << 16)) | (((unsigned char)(*(signed char *)(((((t4 + 0x8) + a4) + 0x4) + 0x3))) << 16) << 8)) | (unsigned char)(*(signed char *)(((((t4 + 0x8) + a4) + 0x4) + 0x0))));
                    *(unsigned char *)((a10 + 0x0)) = (*(short *)((((t4 + 0x8) + a4) + 0x2)));
                    *(unsigned char *)((a8 + 0x0)) = (*(short *)((((t4 + 0x8) + a4) + 0xE)));
                    *(unsigned char *)((a9 + 0x0)) = (*(short *)((((t4 + 0x8) + a4) + 0xC)));
                    *(unsigned int *)((a12 + 0x0)) = ((int)((int)(((((unsigned char)t9 << 8) | ((unsigned char)t11 << 16)) | (((unsigned char)t12 << 16) << 8)) | (unsigned char)t10) / (int)(*(signed char *)((a9 + 0x0)))));
                    *(unsigned int *)((a13 + 0x0)) = 0x1;
                    t4 = *(signed char *)((a8 + 0x0));
                    if (t4 == 16) {
                        *(unsigned short *)((a14 + 0x0)) = 0x0;
                    } else {
                        if (t4 == 8) {
                            *(unsigned short *)((a14 + 0x0)) = 0x1;
                        } else {
                            if ((*(signed char *)((a8 + 0x0))) == 4) {
                                *(unsigned char *)((a9 + 0x0)) = ((*(signed char *)((a10 + 0x0))) << 1);
                                *(unsigned int *)((a13 + 0x0)) = 0x4;
                                *(unsigned int *)((a12 + 0x0)) = ((int)((unsigned int)((unsigned int)(((((unsigned char)t9 << 8) | ((unsigned char)t11 << 16)) | (((unsigned char)t12 << 16) << 8)) | (unsigned char)t10) >> 1) / (unsigned int)(*(signed char *)((a10 + 0x0)))));
                                *(unsigned char *)((a8 + 0x0)) = 0x10;
                                *(unsigned short *)((a14 + 0x0)) = 0x2;
                            }
                        }
                    }
                    t4 = 0xFFFFFFFF;
                    if (((*(signed char *)((a8 + 0x0))) != 0) && ((t0 = *(signed char *)((a9 + 0x0)), t0 != 0) && ((t1 = *(signed char *)((a10 + 0x0)), (int)t1 > 0) && (((int)t1 <= (int)0x2) && (t2 = *(int *)((a11 + 0x0)), t2 != 0))))) {
                        t4 = 0x0;
                    }
                    t7 = t4;
                }
                t5 = t7;
            }
            t6 = t5;
        }
        t3 = t6;
    }
    return t3;
}

int FUN_0c030cb4(int a4, int a5, int a6, int a7, float f4)
{
    int stk[12];
    register int t6;
    register int t7;
    register float u17;
    register int t18;
    register float u21;
    register int t22;
    register float u31;
    register float u32;
    register float u33;
    register int t46;
    register int t47;
    register int t48;
    register float u51;
    register float u8;
    register float u50;

    *(unsigned int *)0xC12A4E8 = (*(int *)(((((*(int *)(((((((*(int *)0xC2BF8E4) + 0x68) << 2) << 1) + (*(int *)0xC2BB3E8)) + 0x4))) * 0x3C) + (*(int *)0xC2BF120)) + 0x34)));
    if (a4 != 0) {
        t6 = 0xC030D24;
        t7 = 0xC12A4FC;
        for (;;) {
            if ((unsigned int)t7 >= (unsigned int)0xC12A54C) {
                break;
            }
            t6 = 0x4;
            u8 = (*(float *)((t7 + t6)));
            u8 = (u8 * 0.5f);
            *(float *)((t7 + t6)) = u8;
            t6 = 0x10;
            u8 = (*(float *)((t7 + t6)));
            u8 = (u8 * 0.5f);
            *(float *)((t7 + t6)) = u8;
            t7 = (t7 + 0x14);
        }
    }
    if ((*(int *)0xC1EC734) == 2) {
        u17 = (((struct o0_float *)0xC030E74)->v);
        t18 = 0x0;
        for (;;) {
            (((struct o10_float *)((t18 + 0xC12A4FC)))->v) = (((((struct o10_float *)((t18 + 0xC12A4FC)))->v)) * u17);
            (((struct o10_float *)((t18 + 0xC12A54C)))->v) = (((((struct o10_float *)((t18 + 0xC12A54C)))->v)) * u17);
            u21 = (((struct o10_float *)((t18 + 0xC12A59C)))->v);
            t22 = (t18 + 0xC12A59C);
            t18 = (t18 + 0x14);
            (((struct o10_float *)(t22))->v) = (u21 * u17);
            if ((unsigned int)t18 >= (unsigned int)0x50) {
                break;
            }
        }
    }
    *(float *)((((int)stk + 0) + 0x0)) = 0.0f;
    u31 = (((struct o4_float *)0xC030E74)->v);
    (((struct o4_float *)(((int)stk + 0)))->v) = u31;
    (((struct oC_float *)(((int)stk + 0)))->v) = 0.0f;
    u32 = (((struct o8_float *)0xC030E74)->v);
    (((struct o4_float *)((((int)stk + 0) + 0xC)))->v) = u32;
    u33 = (((struct oC_float *)0xC030E74)->v);
    (((struct o18_float *)(((int)stk + 0)))->v) = u33;
    (((struct o4_float *)((((int)stk + 0) + 0x18)))->v) = u31;
    (((struct o24_float *)(((int)stk + 0)))->v) = u33;
    (((struct o4_float *)((((int)stk + 0) + 0x24)))->v) = u32;
    (((struct o8_float *)((((int)stk + 0) + 0x24)))->v) = -1.0f;
    (((struct o8_float *)((((int)stk + 0) + 0x18)))->v) = -1.0f;
    (((struct o8_float *)((((int)stk + 0) + 0xC)))->v) = -1.0f;
    (((struct o8_float *)(((int)stk + 0)))->v) = -1.0f;
    FUN_0c073360();
    FUN_0c073a30(((((struct o14_float *)0xC030E74)->v)), 0.0f, 0.0f);
    nlRotateAY(0x2400);
    FUN_0c072230(((int)stk + 0), ((int)stk + 0));
    FUN_0c072230((((int)stk + 0) + 0xC), (((int)stk + 0) + 0xC));
    FUN_0c072230((((int)stk + 0) + 0x18), (((int)stk + 0) + 0x18));
    FUN_0c072230((((int)stk + 0) + 0x24), (((int)stk + 0) + 0x24));
    nlUnitMatrix();
    *(volatile float *)0xC030E9C;
    *(volatile float *)0xC030EA0;
    t46 = (FUN_0c074020());
    t47 = 0xC12A4FC;
    t48 = ((int)stk + 0);
    for (;;) {
        if ((unsigned int)t48 >= (unsigned int)(((int)stk + 0) + 0x30)) {
            break;
        }
        t46 = 0x8;
        u51 = *(float *)((t48 + t46));
        t46 = 0x4;
        t46 = (nlScreenPoint(t48, (t48 + 0x4), (t48 + 0x8), (*(float *)((t48 + 0x0))), (*(float *)((t48 + t46))), u51));
        t46 = 0x4;
        u50 = (*(float *)((t48 + 0x0)));
        *(float *)((t47 + 0x0)) = u50;
        *(float *)((t47 + t46)) = ((*(float *)((t48 + t46))));
        t46 = 0x8;
        u50 = (*(float *)((t48 + t46)));
        t48 = (t48 + 0xC);
        *(float *)((t47 + t46)) = u50;
        t47 = (t47 + 0x14);
    }
    return (nlPopMatrix(0x1));
}

int FUN_0c04f050(void)
{
    int stk[6];
    register int t0;
    register int t1;
    register int t3;
    register int t4;
    register int t16;
    register int t17;
    register int t33;
    register int t44;
    register int t61;

    t0 = (((struct o0_int *)0xC2B1D98)->v);
    t1 = (((struct o4_int *)0xC2B1CFC)->v);
    if (t0 != 1) {
        t61 = t0;
        if (t0 == 2) {
            t3 = *(int *)((0xC2B1D1C + ((*(int *)((t1 + 0x0))) << 2)));
            *(float *)(((int)stk + 0)) = (float)t3;
            t4 = FUN_0c06cbe2();
            FUN_0c05d1b4(((*(int *)((((((*(int *)((((((struct o4_int *)0xC2B1CFC)->v)) + 0x0))) << 2) << 2) + 0xC131E60) + 0x8))) + t4), 0x0, (float)t3);
            t61 = (FUN_0c05d1bc((*(int *)((((((*(int *)((((((struct o4_int *)0xC2B1CFC)->v)) + 0x0))) << 2) << 2) + 0xC131E60) + 0xC))), 0x0));
        }
    } else {
        t16 = *(int *)((0xC2B1D1C + ((*(int *)((t1 + 0x0))) << 2)));
        t17 = (((struct oC_int *)0xC2B1D98)->v);
        *(unsigned int *)(((int)stk + 4)) = ((FUN_0c06cbe2()) + (*(int *)((((((*(int *)((((((struct o4_int *)0xC2B1CFC)->v)) + 0x0))) << 2) << 2) + 0xC131E60) + 0x4))));
        *(float *)(((int)stk + 8)) = (float)((((struct o8_int *)0xC2B1D98)->v));
        *(unsigned int *)(((int)stk + 12)) = ((FUN_0c06cbe2()) + (*(int *)((((((*(int *)((((((struct o4_int *)0xC2B1CFC)->v)) + 0x0))) << 2) << 2) + 0xC131E60) + 0x8))));
        *(float *)(((int)stk + 16)) = 0.0f;
        *(float *)(((int)stk + 20)) = ((float)t16 / (float)t17);
        FUN_0c05f1b6(((int)stk + 4), 0x0);
        FUN_0c05d1bc((*(int *)((((((*(int *)((((((struct o4_int *)0xC2B1CFC)->v)) + 0x0))) << 2) << 2) + 0xC131E60) + 0xC))), 0x0);
        t33 = *(int *)((((((struct o4_int *)0xC2B1CFC)->v)) + 0x0));
        t61 = (t33 << 2);
        if ((*(int *)((0xC2B1D1C + (t33 << 2)))) == (((((struct oC_int *)0xC2B1D98)->v)) - 1)) {
            (((struct o0_uint *)0xC2B1D98)->v) = (((((struct o0_int *)0xC2B1D98)->v)) + 0x1);
            *(unsigned int *)((0xC2B1D1C + ((*(int *)((((((struct o4_int *)0xC2B1CFC)->v)) + 0x0))) << 2))) = 0x0;
            (((struct o0_uint *)0xC2B1CFC)->v) = 0x5;
            Voice_ShutUp(0x1);
            FUN_0c058f64((*(int *)((((*(int *)((((((struct o4_int *)0xC2B1CFC)->v)) + 0x0))) << 2) + 0xC131E38))), 0x1, 0x78, 0x0);
            t44 = (((struct o1C_int *)0xC2B1D98)->v);
            if (t44 == 8) {
                t61 = (FUN_0c058ca6(0xA05A9, 0x0));
            } else {
                t61 = t44;
                if (t44 == 16) {
                    t61 = (FUN_0c058ca6(0xC05A9, 0x0));
                }
            }
        }
    }
    return t61;
}

int FUN_0c057064(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = 0xC05712C;
    t1 = 0x0;
    for (;;) {
        if ((int)((((struct o0_int *)0xC2B3278)->v)) > (int)(((t1 << 2) << 1) - t1)) {
            if ((int)((((struct o0_int *)0xC2B3278)->v)) < (int)0x31) {
                t0 = 0x7;
                t0 = ((int)((int)((((struct o0_int *)0xC2B3278)->v)) % (int)t0));
                if (t0 == 0) {
                    t0 = (FUN_0c058ca6(0x5A9, 0x0));
                    (((struct o14_uint *)0xC2B3278)->v) = (((((struct o14_int *)0xC2B3278)->v)) + 0x1);
                    (((struct oC_uint *)0xC2B3164)->v) = 0x1;
                    (((struct o8_ushort *)0xC2B3164)->v) = 0x0;
                    (((struct o4_float *)0xC2B3164)->v) = 0.5f;
                    (((struct o10_float *)0xC2B3164)->v) = 0.0f;
                }
            }
            t0 = 0xC132434;
            (((struct o0_uint *)0xC2B3114)->v) = (*(int *)(((t1 << 2) + t0)));
            if ((int)t1 > (int)0x3) {
                t0 = 0x4;
                *(float *)((0xC2B3114 + t0)) = (float)(((((((t1 - 2) << 2) << 2) << 1) - (((t1 - 3) << 1) + (t1 - 3))) + (t1 << 1)) + 0x8E);
            } else {
                t0 = t1;
                t2 = 0x9C;
                if (t0 == 3) {
                    t2 = 0x92;
                }
                t0 = 0x4;
                *(float *)((0xC2B3114 + t0)) = (float)((((((t1 - 2) << 2) << 2) << 1) + (t1 << 1)) + t2);
            }
            t0 = 0x8;
            (((struct o34_uint *)0xC2B3114)->v) = 0x200A;
            *(float *)((0xC2B3114 + t0)) = (float)(((((struct o0_int *)0xC2B3164)->v)) + 0x18C);
            t0 = 0xC;
            *(float *)((0xC2B3114 + t0)) = 0.150000006f;
            t0 = 0x10;
            *(float *)((0xC2B3114 + t0)) = (((((struct o10_float *)0xC2B3164)->v)) + 1.0f);
            t0 = 0x14;
            *(float *)((0xC2B3114 + t0)) = (((((struct o10_float *)0xC2B3164)->v)) + 1.0f);
            t0 = 0x1C;
            *(float *)((0xC2B3114 + t0)) = 0.0f;
            t0 = 0x24;
            *(float *)((0xC2B3114 + t0)) = 1.0f;
            (((struct o28_uint *)0xC2B3114)->v) = 0x0;
            t0 = (FUN_0c07ada0(0xC2B3114, (t1 << 1)));
        }
        t1 = (t1 + 0x1);
        if ((int)t1 < (int)0x7) continue;
        break;
    }
    t0 = (((struct o0_int *)0xC2B3278)->v);
    if ((int)t0 >= (int)0x31) {
        if (t0 == 49) {
            (((struct o18_uint *)0xC2B3278)->v) = (((((struct o18_int *)0xC2B3278)->v)) + 0x1);
            FUN_0c058ca6(0x105A9, 0x0);
            (((struct oC_uint *)0xC2B3164)->v) = 0x1;
            (((struct o8_ushort *)0xC2B3164)->v) = 0x0;
            (((struct o4_float *)0xC2B3164)->v) = 0.5f;
            (((struct o10_float *)0xC2B3164)->v) = 0.0f;
        }
        FUN_0c056d8e();
    }
    (((struct oC_float *)0xC2B3114)->v) = 0.200000003f;
    (((struct o0_uint *)0xC2B3278)->v) = (((((struct o0_int *)0xC2B3278)->v)) + 0x1);
    return 0xC;
}

int vmsfs_c_init(int a4)
{
    register int t9;

    (((struct o0_uint *)0xC2C68F4)->v) = 0x0;
    (((struct o4_uint *)0xC2C68F4)->v) = 0x0;
    (((struct o8_uint *)0xC2C68F4)->v) = 0x0;
    (((struct oC_uint *)0xC2C68F4)->v) = 0x0;
    (((struct o10_uint *)0xC2C68F4)->v) = 0x0;
    (((struct o14_uint *)0xC2C68F4)->v) = 0x0;
    (((struct o18_uint *)0xC2C68F4)->v) = 0x0;
    (((struct o1C_uint *)0xC2C68F4)->v) = 0x0;
    memset(0xC2C6914, 0x0, 0x400);
    memset(0xC2C6D14, 0x30, 0x400);
    memset(0xC2C7114, 0x31, 0x400);
    memset(0xC2C7514, 0x32, 0x400);
    memset(0xC2C7914, 0x33, 0x400);
    memset(0xC2C7D14, 0x34, 0x400);
    memset(0xC2C8114, 0x35, 0x400);
    memset(0xC2C8514, 0x36, 0x400);
    memset(0xC2C8914, 0x37, 0x400);
    t9 = vmsfb_init();
    if (t9 == 0) {
        return 0xFFFFFFFF;
    }
    if ((a4 & 1) != 0) {
        vmsfb_create(0xC08A196, 0xC2C6D14, 0x400);
    }
    if ((a4 & 2) != 0) {
        vmsfb_create(0xC08A1A8, 0xC2C7114, 0x400);
    }
    if ((a4 & 4) != 0) {
        vmsfb_create(0xC08A1B6, 0xC2C7514, 0x400);
    }
    if ((a4 & 8) != 0) {
        vmsfb_create(0xC08A1C4, 0xC2C7914, 0x400);
    }
    if ((a4 & 16) != 0) {
        vmsfb_create(0xC08A1D2, 0xC2C7D14, 0x400);
    }
    if ((a4 & 32) != 0) {
        vmsfb_create(0xC08A1E0, 0xC2C8114, 0x400);
    }
    if ((a4 & 64) != 0) {
        vmsfb_create(0xC08A1EE, 0xC2C8514, 0x400);
    }
    if ((a4 & 128) != 0) {
        vmsfb_create(0xC08A1FC, 0xC2C8914, 0x400);
    }
    return 0x0;
}

int FUN_0c027bfa(int a4)
{
    register int t60;

    int R0;
    register int R1;
    register int R2;
    register int R3;
    register int R8;
    register int R9;
    register int R10;
    register int R12;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    v0_2 = a4;
    v0_2 = ((((struct oC_int *)0xC270D04)->v)) == 0;
    v0_1 = (0xC270BBC);
    v0_0 = (0xC270D10);
    v0_4 = ((pdGetPeripheral(0x6)));
    if (v0_2) goto L_C027C16;
    L_C027D56:;
    if (((*(int *)((v0_0 + 0x0))) != 38)) goto L_C027D70;
    FUN_0c0329ba(0x0, 0xC09D868, v0_1, 0x140, 0x0, 0x0);
    L_C027D70:;
    if (((int)(*(int *)((v0_0 + 0x0))) <= 0)) goto L_C027D88;
    v0_1 = *(int *)((v0_0 + 0x0));
    *(unsigned int *)((v0_0 + 0x0)) = (v0_1 - 1);
    if (((v0_1 - 1) != 0)) goto L_C027D88;
    (((struct o0_uint *)0xC270D04)->v) = 0x0;
    L_C027D88:;
    return 0x0;
    L_C027C16:;
    v0_2 = (0xC270D08);
    v0_3 = (0x8);
    L_C027C22:;
    if (((int)(*(int *)((v0_2 + 0x0))) >= (int)v0_3)) goto L_C027C3C;
    v0_5 = *(int *)((v0_2 + 0x0));
    if (!(((*(int *)((((((v0_5 << 2) + v0_5) << 2) << 1) + 0xC270BE0))) == 0))) goto L_C027C3C;
    *(unsigned int *)((v0_2 + 0x0)) = ((*(int *)((v0_2 + 0x0))) + 0x1);
    goto L_C027C22;
    L_C027C3C:;
    v0_6 = *(int *)((v0_4 + 0x10));
    R0 = (v0_6);
    v0_5 = (0x10);
    if (((v0_6 & 32) == 0)) goto L_C027C7E;
    v0_4 = *(int *)((v0_2 + 0x0));
    *(unsigned int *)((v0_2 + 0x0)) = (v0_4 + 0x1);
    if (((int)(v0_4 + 0x1) < (int)v0_5)) goto L_C027C5C;
    *(unsigned int *)((v0_2 + 0x0)) = 0x0;
    L_C027C5C:;
    if (((int)(*(int *)((v0_2 + 0x0))) < (int)v0_3)) goto L_C027C66;
    goto L_C027D56;
    L_C027C66:;
    v0_4 = *(int *)((v0_2 + 0x0));
    if (((*(int *)((((((v0_4 << 2) + v0_4) << 2) << 1) + 0xC270BE0))) == 0)) goto L_C027C56;
    goto L_C027D56;
    L_C027C56:;
    *(unsigned int *)((v0_2 + 0x0)) = ((*(int *)((v0_2 + 0x0))) + 0x1);
    goto L_C027C5C;
    L_C027C7E:;
    if (((v0_5 & R0) == 0)) goto L_C027CBE;
    *(unsigned int *)((v0_2 + 0x0)) = ((*(int *)((v0_2 + 0x0))) - 1);
    L_C027C90:;
    if (((int)(*(int *)((v0_2 + 0x0))) < 0)) goto L_C027CB2;
    if (((int)(*(int *)((v0_2 + 0x0))) >= (int)0x8)) goto L_C027CB2;
    v0_3 = *(int *)((v0_2 + 0x0));
    if (!(((*(int *)((0xC270BE0 + ((((v0_3 << 2) + v0_3) << 2) << 1)))) == 0))) goto L_C027CB2;
    *(unsigned int *)((v0_2 + 0x0)) = ((*(int *)((v0_2 + 0x0))) - 1);
    goto L_C027C90;
    L_C027CB2:;
    if (((int)(*(int *)((v0_2 + 0x0))) >= 0)) goto L_C027D56;
    *(unsigned int *)((v0_2 + 0x0)) = 0xF;
    goto L_C027D56;
    L_C027CBE:;
    if ((((*(int *)((v0_4 + 0x10))) & 4) == 0)) goto L_C027D56;
    v0_6 = *(int *)((v0_2 + 0x0));
    v0_4 = (v0_6);
    v0_5 = (0xC270B70);
    if (((int)v0_6 >= (int)v0_3)) goto L_C027D20;
    FUN_0c07ff00();
    FUN_0c07ff00();
    L_C027D4C:;
    *(unsigned int *)((v0_0 + 0x0)) = 0x28;
    (((struct o8_uint *)0xC270D04)->v) = (*(int *)((v0_2 + 0x0)));
    goto L_C027D56;
    L_C027D20:;
    FUN_0c07ff00();
    v0_2 = *(int *)((t60 + 0x0));
    *(unsigned int *)((((((((v0_2 - 8) << 2) + (v0_2 - 8)) << 2) << 1) + v0_1) + 0x24)) = 0x1;
    v0_2 = (t60);
    goto L_C027D4C;
}

int vmsio_bank_change(int a4, int a5)
{
    int stk[9];
    register int t1;
    register int t25;
    register int t27;
    register int t31;
    register int t36;
    register int t40;
    register int t18;
    register int t19;
    register int t20;
    int t21;

    *(unsigned int *)(((int)stk + 32)) = a4;
    *(unsigned int *)(((int)stk + 28)) = a5;
    t1 = *(int *)((((*(int *)(((int)stk + 32))) << 2) + 0xC11833C));
    *(unsigned int *)(((int)stk + 24)) = t1;
    *(unsigned int *)(((int)stk + 16)) = (kdGetDevice(t1));
    *(unsigned int *)(((int)stk + 12)) = (kdGetDeviceInfo((*(int *)(((int)stk + 24)))));
    if ((*(signed char *)(((*(int *)(((int)stk + 16))) + 0x0))) == 0) {
        vmsfb_sleep();
        return 0xFFFFFF01;
    }
    if (((*(int *)(((*(int *)(((int)stk + 12))) + 0x0))) & 2) == 0) {
        vmsfb_sleep();
        return 0xFFFFFF01;
    }
    kdRecognizeChanged((*(int *)(((int)stk + 24))));
    *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 12))) + 0x14);
    if (((*(signed char *)(((*(int *)(((int)stk + 8))) + 0x0))) == 66) && ((t18 = *(int *)(((int)stk + 8)), t19 = *(signed char *)((t18 + 0x1)), t19 == 65) && ((t20 = *(signed char *)((t18 + 0x2)), t20 == 78) && (t21 = *(signed char *)((t18 + 0x3)), t21 == 75)))) {
        for (;;) {
            for (;;) {
                *(unsigned int *)(((int)stk + 16)) = (kdGetDevice((*(int *)(((int)stk + 24)))));
                t25 = (*(int *)(((int)stk + 28)));
                *(int *)((int)stk + 0) = t25;
                t27 = vmsio_kd_bank_command((*(int *)(((int)stk + 24))), 0x0, 0x0, 0x1, t25);
                *(unsigned int *)(((int)stk + 20)) = t27;
                if ((int)t27 >= 0) {
                    break;
                }
                vmsfb_sleep();
            }
            for (;;) {
                *(volatile int *)(((int)stk + 20));
                t31 = kdGetStatus((*(int *)(((int)stk + 24))));
                if (t31 != 0) {
                    break;
                }
                vmsfb_sleep();
            }
            *(unsigned int *)(((int)stk + 16)) = (kdGetDevice((*(int *)(((int)stk + 24)))));
            t36 = kdIsChanged((*(int *)(((int)stk + 24))));
            if (t36 != 0) {
                break;
            }
            *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((*(int *)(((int)stk + 16))) + 0x8))) + 0x8);
            t40 = *(signed char *)(((*(int *)(((int)stk + 16))) + 0x4));
            if ((unsigned char)t40 != 8) {
                if ((unsigned char)t40 != 0xFC) {
                    if ((unsigned char)t40 != 0xFB) {
                        return 0xFFFFFF01;
                    }
                    return 0xFFFFFF22;
                }
                continue;
            }
            *(unsigned int *)(((int)stk + 4)) = (*(signed char *)(((*(int *)(((int)stk + 8))) + 0x3)));
            if ((*(int *)(((int)stk + 4))) != (*(int *)(((int)stk + 28)))) {
                return 0xFFFF0000;
            }
            return 0x0;
        }
        vmsfb_sleep();
        return 0xFFFFFF30;
    }
    return 0x0;
}

int FUN_0c08eee0(int a4, int a5, int a6, int a7)
{
    int stk[11];
    register int t0;
    register int t25;
    register int t36;
    register int t47;
    register int t66;
    register int t68;
    int R1000;
    int R1004;
    int R1008;
    int R1012;
    int R1016;
    int R1024;
    int R1028;
    int R1032;
    int R1036;
    int R1040;

    R1000 = *(int *)((int)stk + 0);
    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);
    R1016 = *(int *)((int)stk + 16);
    R1024 = *(int *)((int)stk + 24);
    R1028 = *(int *)((int)stk + 28);
    R1032 = *(int *)((int)stk + 32);
    R1036 = *(int *)((int)stk + 36);
    R1040 = *(int *)((int)stk + 40);

    R1040 = a4;
    t0 = R1040;
    R1000 = ((t0 * 0x154) + 0xC2C8D2C);
    *(unsigned short *)(((int)stk + 22)) = (*(short *)(((*(int *)((((t0 * 0x154) + 0xC2C8D2C) + 0x1C))) + 0x14)));
    R1008 = (*(int *)(((*(int *)(((R1000) + 0x1C))) + 0x18)));
    R1036 = (unsigned short)(*(short *)(((int)stk + 22)));
    R1004 = 0x0;
    R1016 = 0x0;
    for (;;) {
        if ((int)(R1016) < (int)(R1008)) {
            if ((*(signed char *)(((((R1000) + 0x48) + (R1016)) + 0x0))) == 0) {
                R1032 = (unsigned short)(((int (*)(int, int, int, int))(FUN_0c08f87c))((R1040), (R1036), a6, a7));
                R1028 = (R1036);
                R1036 = (R1032);
                R1016 = ((R1016) + 0x1);
                continue;
            }
            for (;;) {
                t25 = vmsfs_write_retry((R1040), (R1036), ((*(int *)(((R1000) + 0x28))) + (((R1016) << 8) << 1)));
                R1012 = t25;
                if (t25 == 0) {
                    break;
                }
                if ((R1012) == 0xFFFFFF01) {
                    return (R1012);
                }
                R1004 = 0x1;
                R1032 = (unsigned short)(((int (*)(int, int))(FUN_0c08f87c))((R1040), (R1036)));
                FUN_0c08f824((R1040), (R1036), 0xFFFF);
                t36 = FUN_0c08bbe4((R1040), 0xFFFC);
                R1024 = t36;
                if ((int)t36 < 0) {
                    return 0xFFFFFF04;
                }
                FUN_0c08f824((R1040), (R1024), (R1032));
                if ((R1016) == 0) {
                    t47 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC2C8D28) + 0x10)))))((*(int *)(((R1000) + 0x20))), 0x4A, (R1024), a7, R1000, R1004, R1008, R1012, R1016, *(int *)((int)stk + 0 + 20), R1024);
                } else {
                    FUN_0c08f824((R1040), (R1028), (R1024));
                }
                R1028 = (R1036);
                R1036 = (R1024);
            }
            R1032 = (unsigned short)(((int (*)(int, int))(FUN_0c08f87c))((R1040), (R1036)));
            R1028 = (R1036);
            R1036 = (R1032);
            *(unsigned char *)(((((R1000) + 0x48) + (R1016)) + 0x0)) = 0x0;
            R1016 = ((R1016) + 0x1);
            continue;
        }
        if ((R1004) != 0) {
            t66 = FUN_0c08f5d8((R1040));
            R1012 = t66;
            if ((int)t66 < 0) {
                return t66;
            }
            t68 = FUN_0c08f3b8((R1040));
            R1012 = t68;
            if ((int)t68 < 0) {
                return t68;
            }
            return 0x0;
        }
        return 0x0;
    }
}
