/* Straight-line functions with calls and guards (batch gen_ic): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[4]; } Stk4;
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o18_float { char p[0x18]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_int { char p[0x1C]; int v; };
struct o20_float { char p[0x20]; float v; };
struct o20_int { char p[0x20]; int v; };
struct o24_float { char p[0x24]; float v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_int { char p[0x28]; int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_int { char p[0x30]; int v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o36_short { char p[0x36]; short v; };
struct o38_int { char p[0x38]; int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o3C_int { char p[0x3C]; int v; };
struct o3C_short { char p[0x3C]; short v; };
struct o3C_uint { char p[0x3C]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_short { char p[0x84]; short v; };
struct o88_int { char p[0x88]; int v; };
struct o8C_int { char p[0x8C]; int v; };
struct o90_int { char p[0x90]; int v; };
struct o90_uint { char p[0x90]; unsigned int v; };
struct o98_int { char p[0x98]; int v; };
struct o98_uint { char p[0x98]; unsigned int v; };
struct o9C_int { char p[0x9C]; int v; };
struct o9C_uint { char p[0x9C]; unsigned int v; };
struct oA4_int { char p[0xA4]; int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oAC_float { char p[0xAC]; float v; };
struct oB4_float { char p[0xB4]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int BigOneRotate(int, int, int);
int FUN_0c0100c4(int, int);
int FUN_0c014364(void);
int FUN_0c016398(void);
int FUN_0c0166c0(int, int, float);
int FUN_0c016ab8(int);
int FUN_0c019446(void);
int FUN_0c01c4e2(void);
int FUN_0c01ddd6(float);
int FUN_0c01df4a(int, int, int);
int FUN_0c01e000(int);
int FUN_0c01e01e(int);
int FUN_0c01e15a(void);
int FUN_0c01e43c(void);
int FUN_0c01e6f0(void);
int FUN_0c01ec7a(int);
int FUN_0c01edbc(int, int);
int FUN_0c01eeda(int, int, int, int);
int FUN_0c01f5fc(void);
int FUN_0c01f95a(void);
int FUN_0c01ff48(int, int);
int FUN_0c0200f0(int);
int FUN_0c020176(void);
int FUN_0c02022a(void);
int FUN_0c020244(void);
int FUN_0c020772(void);
int FUN_0c0209b6(void);
int FUN_0c020b54(void);
int FUN_0c020d78(int);
int FUN_0c021476(int, int);
int FUN_0c022cc4(void);
int FUN_0c022d30(void);
int FUN_0c026c02(void);
int FUN_0c026d10(void);
int FUN_0c026e56(void);
int FUN_0c0272de(void);
int FUN_0c027f28(int);
int FUN_0c027fbe(float, float);
int FUN_0c02803a(int, int, int, int);
float FUN_0c02806c(int);
int FUN_0c02842e(int);
int FUN_0c028924(void);
int FUN_0c02897a(int);
int FUN_0c0293d4(int);
int FUN_0c0293da(int, int);
int FUN_0c0293ea(int, float);
int FUN_0c0293f2(int);
int FUN_0c029528(void);
int FUN_0c029b12(int, float);
int FUN_0c02a5ca(int);
int FUN_0c02d3ba(void);
int FUN_0c02d3e8(int, int);
int FUN_0c02d694(int, int);
int FUN_0c02d826(int);
int FUN_0c02f096(void);
int FUN_0c02ff06(void);
int FUN_0c030b34(void);
int FUN_0c033430(int);
int FUN_0c03386a(int);
int FUN_0c0339fc(int);
int FUN_0c033b12(int, int);
int FUN_0c03eefe(int);
int FUN_0c03f154(int);
int FUN_0c03f15e(int);
int FUN_0c03f42e(int);
int FUN_0c03ff4a(int);
int FUN_0c040704(int, int);
int FUN_0c0423e6(int);
int FUN_0c046460(int);
int FUN_0c0464f0(int, int, int, int, int);
int FUN_0c0476dc(int);
int FUN_0c047a4a(int);
int FUN_0c047aaa(int);
int FUN_0c047ab0(int, int);
int FUN_0c048262(int);
int FUN_0c048d70(int);
int FUN_0c0491d8(void);
int FUN_0c04d58c(void);
int FUN_0c04fbf0(void);
int FUN_0c04fc7a(void);
int FUN_0c050440(void);
int FUN_0c050552(void);
int FUN_0c050596(void);
int FUN_0c053ff2(void);
int FUN_0c054068(void);
int FUN_0c058be4(int);
int FUN_0c058ca6(int, int);
int FUN_0c058e82(void);
int FUN_0c058f64(int, int, int, int);
int FUN_0c0590a8(void);
int FUN_0c059d88(void);
int FUN_0c059d92(void);
int FUN_0c05ab5e(void);
int FUN_0c05b3ea(void);
int FUN_0c05b3fc(void);
int FUN_0c05b410(float, float, float);
int FUN_0c05bef8(int);
int FUN_0c05befe(void);
int FUN_0c05f788(int, int);
int FUN_0c060104(void);
int FUN_0c06017e(void);
int FUN_0c061e50(int);
int FUN_0c061f7e(int, int);
int FUN_0c061fba(int, int, int);
int FUN_0c062004(int);
int FUN_0c0620ac(int);
int FUN_0c0621e0(int);
int FUN_0c06221c(int, int);
int FUN_0c06b370(void);
int FUN_0c06cc10(void);
int FUN_0c06cd60(void);
int FUN_0c06e700(int, int, float);
int FUN_0c06f240(void);
int FUN_0c06f550(int, int, int);
int FUN_0c070ea0(int);
int FUN_0c072290(int, int);
int FUN_0c072b60(int);
int FUN_0c072ff0(void);
int FUN_0c073360(void);
int FUN_0c073a30(float, float, float);
int FUN_0c073a60(int);
int FUN_0c073ab0(void);
int FUN_0c073c40(int, int, float);
float FUN_0c073e10(int);
int FUN_0c074f20(float);
int FUN_0c075d60(int);
int FUN_0c076230(float, float, float);
int FUN_0c078870(int);
int FUN_0c07ada0(int);
int FUN_0c07ffac(int);
int GS_GuestEject(void);
int Init_Standard(void);
int MakeKyakuTakeArea(int, int, int, float);
int Start_Pass_Judgement(int);
extern int Voice_ShutUp();
int gdc_PlayStreamSong(int);
int gdc_StopStreamVoiceAll(void);
int gdc_VolStreamSong(int);
int mpvvlc_InitMbai(void);
int nlAddVector(int, int);
int nlCloseEvent(int);
int nlInitEvent(void);
int nlInitHeapMemory(int, int);
float nlLength(int, int);
int nlMatrixMode(int);
int nlObjPut(int);
int nlObjPutUseViewMatrix(int);
int nlPerspectiveX(int, float, float, float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlRotateV(int, int);
int nlScale(float, float, float);
int nlSubVector3op(int, int, int);
int nlUnitMatrix(void);
int pfSize(float, float);
int thunk_FUN_0c05995e(void);
int thunk_kmSetCheapShadowMode(int);
int FUN_0c0152f0(int a4);
int FUN_0c067c2c(int a4, int a5, int a6, int a7);
int FUN_0c01cd78(void);
int FUN_0c03dd80(void);
int FUN_0c067f60(int a4, float f4);
int FUN_0c01d4ac(void);
int FUN_0c0529ec(void);
int FUN_0c01cb08(void);
int FUN_0c01f368(int a4, int a5, float f4);
int FUN_0c055990(int a4, int a5, int a6, int a7);
int FUN_0c01c900(void);



int FUN_0c01cd78(void)
{
    int stk[4];
    register int t67;
    register int t76;
    register int t91;

    FUN_0c022d30();
    FUN_0c02a5ca(((((struct o0_int *)0xC175C80)->v)));
    if (((((struct o4_int *)0xC1EC71C)->v)) == 2) {
        FUN_0c022cc4();
        FUN_0c01f95a();
    }
    FUN_0c02022a();
    FUN_0c020d78(((((struct o0_int *)0xC1EC71C)->v)));
    FUN_0c026c02();
    *(unsigned int *)0xC177EF0 = 0xC177EF4;
    nlInitHeapMemory(0xC177EF4, 0x30000);
    nlInitEvent();
    FUN_0c046460(0x3039);
    FUN_0c05bef8(0xD431);
    FUN_0c070ea0(0x3039);
    if (((((struct o24_int *)0xC1EC71C)->v)) != 0) {
        FUN_0c01e43c();
    }
    FUN_0c04fbf0();
    FUN_0c01e15a();
    FUN_0c04fc7a();
    if (((((struct o4_int *)0xC1EC71C)->v)) != 2) {
        FUN_0c029528();
        *(volatile int *)0xC1EC71C;
        FUN_0c0491d8();
    }
    FUN_0c02022a();
    FUN_0c014364();
    FUN_0c016ab8(0x0);
    if (((((struct o4_int *)0xC1EC71C)->v)) != 2) {
        FUN_0c019446();
    }
    FUN_0c02d3ba();
    if ((*(int *)0xC270924) != 0) {
        FUN_0c016398();
    }
    FUN_0c02ff06();
    FUN_0c028924();
    FUN_0c02f096();
    if (((((struct o4_int *)0xC1EC71C)->v)) == 2) {
        FUN_0c060104();
        FUN_0c06017e();
    } else {
        FUN_0c06cc10();
        FUN_0c060104();
    }
    FUN_0c06b370();
    FUN_0c058be4(0x0);
    FUN_0c02022a();
    FUN_0c0423e6(0x0);
    FUN_0c03ff4a(0x0);
    FUN_0c0464f0(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 0));
    FUN_0c048262(0xFFFFFFFE);
    (((struct o0_uint *)0xC2AC2F4)->v) = 0x0;
    FUN_0c0590a8();
    FUN_0c026d10();
    FUN_0c04d58c();
    FUN_0c030b34();
    t67 = (((struct o0_int *)0xC1EC71C)->v);
    switch (t67) {
    case 0:
        t76 = 0x64;
        if (((((struct o4_int *)0xC175C80)->v)) == 1) {
            t76 = 0xA0;
        }
        thunk_kmSetCheapShadowMode(t76);
        break;
    case 1:
        thunk_kmSetCheapShadowMode(0xA0);
        break;
    case 2:
        thunk_kmSetCheapShadowMode(0x8C);
        break;
    }
    if ((int)((((struct o4_int *)0xC1EC71C)->v)) <= (int)0x1) {
        FUN_0c047a4a(0x1);
    } else {
        (((struct o4_uint *)0xC2AC2F4)->v) = 0x0;
    }
    FUN_0c059d88();
    FUN_0c059d92();
    FUN_0c01f5fc();
    t91 = FUN_0c06f550(0xFF3D3D46, 0xFF3D3D46, 0xFF3D3D46);
    (((struct o28_uint *)0xC1EC71C)->v) = (((((struct o28_int *)0xC1EC71C)->v)) + 0x1);
    (((struct o30_uint *)0xC1EC71C)->v) = 0x0;
    return t91;
}

int FUN_0c03dd80(void)
{
    int t0;
    int t1;
    register int t2;
    register int t3;

    *(unsigned int *)0xC177EF0 = 0xC177EF4;
    nlInitHeapMemory(0xC177EF4, 0x30000);
    nlInitEvent();
    FUN_0c020772();
    FUN_0c058e82();
    gdc_StopStreamVoiceAll();
    FUN_0c01e6f0();
    FUN_0c058be4(0x0);
    mpvvlc_InitMbai();
    FUN_0c03f42e(0x3);
    *(unsigned int *)0xC1EC840 = 0x11;
    FUN_0c06f550(0xFFFFC500, 0xFFFFC500, 0xFFFFC500);
    FUN_0c0272de();
    (((struct o0_uint *)0xC2A469C)->v) = 0x2;
    (((struct o4_uint *)0xC2A585C)->v) = 0x280;
    (((struct o0_uint *)0xC2A585C)->v) = 0x280;
    (((struct oC_uint *)0xC2A469C)->v) = 0x0;
    (((struct o38_uint *)0xC2A469C)->v) = 0x0;
    if ((((((struct o0_int *)0xC2A46DC)->v)) != 0xC0B384C) && (t0 = (((struct o0_int *)0xC2A46DC)->v), t0 != 0xC0B3824)) {
        t0 = 0xC2A4680;
    } else {
        FUN_0c0339fc(0x0);
    }
    if ((((((struct o24_int *)0xC2A4F88)->v)) != -2) && (t1 = (((struct o3C_int *)0xC2A469C)->v), t1 != 0xC0B3AA4)) {
        (((struct o3C_uint *)0xC2A469C)->v) = 0xC0B3AA4;
        FUN_0c03f15e(0x0);
    } else {
        t1 = t0;
    }
    FUN_0c033b12(0x0, t1);
    FUN_0c033430(0xC2A5808);
    if (((*(int *)0xC2A464C) == 0) && ((t2 = (((struct o0_int *)0xC2A4F88)->v), t2 != 0) || (t3 = (((struct o4_int *)0xC2A4F88)->v), t3 != 0))) {
        gdc_PlayStreamSong(0x0);
        gdc_VolStreamSong(0x7F);
    }
    if (((((struct o0_int *)0xC2A4F88)->v)) == 0) {
        t0 = (((struct o4_int *)0xC2A4F88)->v);
        if ((t0 != 7) && (t0 != 9)) {
        } else {
            FUN_0c01edbc(0x0, 0x20E);
        }
        FUN_0c03386a(0x0);
    }
    if (((((struct o4_int *)0xC2A46DC)->v)) == 0) {
        FUN_0c03eefe(0x1);
    }
    FUN_0c026e56();
    thunk_FUN_0c05995e();
    FUN_0c0476dc(0x4);
    *(float *)0xC177D9C = ((((struct o0_float *)0xC03E010)->v));
    nlMatrixMode(0x3);
    nlUnitMatrix();
    t0 = nlPerspectiveX(((int)(((((*(float *)0xC177D9C) * ((((struct o1C_float *)0xC03E010)->v))) / ((((struct o20_float *)0xC03E010)->v)))) + ((((struct o24_float *)0xC03E010)->v))) & 0xFFFF), ((((struct o18_float *)0xC03E010)->v)), ((((struct o14_float *)0xC03E010)->v)), ((((struct o10_float *)0xC03E010)->v)));
    *(unsigned int *)0xC1EC744 = ((*(int *)0xC1EC744) + 0x1);
    return t0;
}

int FUN_0c067f60(int a4, float f4)
{
    int stk[4];
    register int t80;
    register int t15;
    register float t36;
    register int t40;
    register float u61;
    register int t1;
    register int t2;
    register int t102;

    { struct mv4 { int w[4]; }; *(struct mv4 *)(((int)stk + 0)) = *(struct mv4 *)(0xC110290); }
    if (((*(int *)0xC177D58) != 0) && ((t1 = *(int *)0xC177D58, t1 != 1) && ((t2 = *(int *)0xC177D58, t2 != 2) && (t102 = *(int *)0xC177D58, t102 != 13)))) {
    } else {
        t80 = *(signed char *)(((a4 + 0x63) + 0x0));
        t102 = t80;
        if ((t80 & 2) == 0) {
        } else {
            if ((*(int *)0xC177CE8) == 0) {
            } else {
                t15 = *(int *)0xC1EC720;
                t80 = t15;
                if (t15 == 2) {
                } else {
                    FUN_0c073360();
                    FUN_0c073a30(((((struct o40_float *)(a4))->v)), (((((struct o44_float *)(a4))->v)) + ((((struct o1C_float *)(a4))->v))), ((((struct o48_float *)(a4))->v)));
                    nlRotateAY((*(int *)((a4 + 0x24))));
                    FUN_0c05b410(((((struct o4C_float *)(a4))->v)), ((((struct o50_float *)(a4))->v)), ((((struct o54_float *)(a4))->v)));
                    nlPushMatrix(0x0);
                    if ((*(int *)0xC17590C) != 0) {
                        nlScale(0.5f, 0.5f, 0.5f);
                        FUN_0c074f20(0.5f);
                    }
                    t36 = nlLength((a4 + 0x40), 0xC177D38);
                    t40 = 0xC3CC208;
                    if (450.0f > t36) {
                    } else {
                        nlObjPutUseViewMatrix(0xC3CCC68);
                        nlRotateAY(0x8000);
                        t40 = 0xC3CCC68;
                    }
                    nlObjPutUseViewMatrix(t40);
                    nlPopMatrix(0x1);
                    FUN_0c072ff0();
                    FUN_0c073ab0();
                    if ((*(int *)0xC17590C) != 0) {
                        nlScale(0.5f, 0.5f, 0.5f);
                        FUN_0c074f20(0.5f);
                    }
                    nlObjPut((*(int *)((((((*(int *)((a4 + 0x4))) - 1) << 2) + ((int)stk + 0)) + 0x0))));
                    FUN_0c05b3fc();
                    nlPopMatrix(0x1);
                    (((struct o1C_float *)(a4))->v) = (((((struct o1C_float *)(a4))->v)) + ((((struct o20_float *)(a4))->v)));
                    u61 = (((struct o0_float *)0xC0681F4)->v);
                    if (u61 > ((((struct o1C_float *)(a4))->v))) {
                        (((struct o1C_float *)(a4))->v) = u61;
                        (((struct o20_float *)(a4))->v) = ((((struct o4_float *)0xC0681F4)->v));
                    }
                    (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) - 0.0250000004f);
                    *(unsigned int *)((a4 + 0x24)) = ((*(int *)((a4 + 0x24))) + 0x100);
                    t80 = 0x20;
                }
            }
            t102 = t80;
        }
    }
    return t102;
}

int FUN_0c01d4ac(void)
{
    int stk[3];
    register int t52;
    register int t61;
    int t38;
    int t43;
    register int t64;

    FUN_0c022d30();
    FUN_0c06f550(0xFF3D3D46, 0xFF3D3D46, 0xFF3D3D46);
    FUN_0c02a5ca(((((struct o0_int *)0xC175C80)->v)));
    FUN_0c020d78(((((struct o0_int *)0xC1EC71C)->v)));
    FUN_0c01f5fc();
    FUN_0c026c02();
    *(unsigned int *)0xC177EF0 = 0xC177EF4;
    nlInitHeapMemory(0xC177EF4, 0x30000);
    nlInitEvent();
    FUN_0c046460(0x3039);
    FUN_0c05bef8(0xD431);
    FUN_0c070ea0(0x3039);
    if (((((struct o24_int *)0xC1EC71C)->v)) != 0) {
        FUN_0c01e43c();
    }
    Init_Standard();
    FUN_0c01e15a();
    if (((((struct o4_int *)0xC1EC71C)->v)) != 2) {
        FUN_0c029528();
        *(volatile int *)0xC1EC71C;
        FUN_0c0491d8();
    }
    FUN_0c014364();
    FUN_0c016ab8(0x0);
    FUN_0c016398();
    FUN_0c02ff06();
    FUN_0c060104();
    FUN_0c06017e();
    FUN_0c06b370();
    FUN_0c058be4(0x0);
    FUN_0c0423e6(0x0);
    FUN_0c03ff4a(0x0);
    if ((((((struct o24_int *)0xC1EC71C)->v)) == 1) && (t38 = *(int *)0xC2AC2F4, t38 == 0)) {
        *(unsigned int *)0xC175908 = 0x1;
    }
    if ((((((struct o24_int *)0xC1EC71C)->v)) != 0) && (t43 = *(int *)0xC2AC2F4, t43 != 1)) {
    } else {
        FUN_0c0464f0(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 0));
    }
    FUN_0c0590a8();
    FUN_0c026d10();
    FUN_0c04d58c();
    FUN_0c030b34();
    t52 = (((struct o0_int *)0xC1EC71C)->v);
    if (t52 != 0) {
        if (t52 != 1) {
            t64 = t52;
            if (t52 != 2) {
            } else {
                t64 = (thunk_kmSetCheapShadowMode(0x8C));
            }
        } else {
            t64 = (thunk_kmSetCheapShadowMode(0xA0));
        }
    } else {
        t61 = 0x64;
        if (((((struct o4_int *)0xC175C80)->v)) == 1) {
            t61 = 0xA0;
        }
        t64 = (thunk_kmSetCheapShadowMode(t61));
    }
    (((struct o30_uint *)0xC1EC71C)->v) = 0x0;
    return t64;
}

int FUN_0c0529ec(void)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;

    if (((((struct o0_int *)0xC2B2AE8)->v)) == 0) {
        FUN_0c058ca6(0x500A9, 0x0);
    }
    if (((((struct o0_int *)0xC2B2AE8)->v)) == 60) {
        Voice_ShutUp(0x0);
        FUN_0c058f64(0xC131FB8, 0x0, 0x78, 0x0);
    }
    FUN_0c06f550(0xFF000000, 0xFF000000, 0xFF000000);
    t0 = 0x0;
    for (;;) {
        (((struct o0_uint *)0xC2B2A98)->v) = (*(int *)(((t0 << 2) + 0xC10C99C)));
        u0 = (((struct o4_float *)0xC2B2AE8)->v);
        if (u0 > 0.996999979f) {
            *(unsigned short *)((((t0 << 1) + 0xC2B2AF0) + 0x0)) = (int)((float)(*(short *)((((t0 << 1) + 0xC2B2AF0) + 0x0))) * 0.5f);
        } else {
            if (u0 > 0.699999988f) {
                if ((int)t0 < (int)0x4) {
                    t1 = ((*(short *)((((t0 << 1) + 0xC2B2AF0) + 0x0))) - (((((t0 << 2) + t0) << 2) << 1) + 0x28));
                } else {
                    t1 = ((*(short *)((((t0 << 1) + 0xC2B2AF0) + 0x0))) + ((((((t0 - 4) << 2) + (t0 - 4)) << 2) << 1) + 0x28));
                }
                *(unsigned short *)((((t0 << 1) + 0xC2B2AF0) + 0x0)) = t1;
            }
        }
        (((struct o28_uint *)0xC2B2A98)->v) = (*(short *)((0xC2B2AF0 + (t0 << 1))));
        if ((int)t0 < (int)0x4) {
            (((struct o34_uint *)0xC2B2A98)->v) = 0x200F;
            u0 = (((struct o4_float *)0xC2B2AE8)->v);
            u1 = (float)((t0 * 0x3C) + 0x78);
            u2 = ((1.0f - u0) * 180.0f);
            (((struct o4_float *)0xC2B2A98)->v) = (((u1 * u0)) - u2);
        } else {
            (((struct o34_uint *)0xC2B2A98)->v) = 0x200D;
            u0 = (float)(((0x7 - t0) * 0x3C) + 0x78);
            u1 = (u0 * ((((struct o4_float *)0xC2B2AE8)->v)));
            (((struct o4_float *)0xC2B2A98)->v) = (((((1.0f - ((((struct o4_float *)0xC2B2AE8)->v))) * 180.0f)) - u1) + ((((struct o0_float *)0xC052C28)->v)));
        }
        FUN_0c07ada0(0xC2B2A98);
        t0 = (t0 + 0x1);
        if ((int)t0 < (int)0x8) continue;
        break;
    }
    (((struct o0_uint *)0xC2B2AE8)->v) = (((((struct o0_int *)0xC2B2AE8)->v)) + 0x1);
    if (((((struct o4_float *)0xC2B2AE8)->v)) > 0.699999988f) {
        u0 = ((((struct o4_float *)0xC2B2AE8)->v));
        u0 = u0 + ((((struct o10_float *)0xC052C28)->v)) * ((1.0f - ((((struct o4_float *)0xC2B2AE8)->v))));
        (((struct o4_float *)0xC2B2AE8)->v) = u0;
        t0 = 0xC052C38;
    } else {
        (((struct o4_float *)0xC2B2AE8)->v) = (((((struct o4_float *)0xC2B2AE8)->v)) + ((((struct o14_float *)0xC052C28)->v)));
        t0 = 0xC052C3C;
    }
    return t0;
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


int FUN_0c055990(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    int t8;
    register int t9;

    if ((*(int *)0xC2B3110) == 0) {
        t9 = ((int (*)(int, int, int, int))(Voice_ShutUp))(0x0, a5, a6, a7);
        FUN_0c058f64(0xC1322EC, 0x0, 0x78, 0x0);
    }
    if (((int)(*(int *)0xC2B3110) >= (int)((((struct o0_int *)0xC2B31C4)->v))) && ((t0 = *(int *)0xC2B3204, t0 == 0) && ((t1 = (((struct o0_int *)0xC2B3248)->v), t1 == 1) && ((t2 = (((struct o4_int *)0xC2B3248)->v), t2 == 1) && ((t3 = (((struct o8_int *)0xC2B3248)->v), t3 == 1) && ((t4 = (((struct oC_int *)0xC2B3248)->v), t4 == 1) && ((t5 = (((struct o10_int *)0xC2B3248)->v), t5 == 1) && ((t6 = (((struct o14_int *)0xC2B3248)->v), t6 == 1) && ((t7 = (((struct o18_int *)0xC2B3248)->v), t7 == 1) && (t8 = (((struct o1C_int *)0xC2B3248)->v), t8 == 1)))))))))) {
        t0 = ((int (*)(int))(Voice_ShutUp))(0x0);
        if (((((struct o38_int *)0xC2B31C4)->v)) == 0) {
            if (((((struct o30_int *)0xC2B31C4)->v)) == 0x3E7) {
                FUN_0c058f64(0xC132304, 0x0, 0x78, 0x0);
            } else {
                t0 = 0xC13231C;
                if (((((struct o30_int *)0xC2B31C4)->v)) == 99) {
                } else {
                    t0 = (*(int *)(((((((struct o30_int *)0xC2B31C4)->v)) << 2) + 0xC1323DC)));
                }
                FUN_0c058f64(t0, 0x0, 0x78, 0x0);
            }
        }
        *(unsigned int *)0xC2B3204 = 0x1;
    }
    t0 = (((struct o30_int *)0xC2B31C4)->v);
    t1 = 0x7;
    if (t0 == 0x3E7) {
    } else {
        t2 = t0;
        if (t0 == 99) {
            t2 = 0x8;
        }
        t1 = t2;
    }
    t0 = (((struct o0_int *)0xC1EC720)->v);
    t2 = t0;
    if (t0 != 2) {
        t0 = FUN_0c03f154(0x1);
        t3 = t0;
        if (t0 != 0) {
            t0 = FUN_0c03f154(0x1);
            t4 = t0;
            if (t0 != 4) {
                if ((*(int *)0xC2B3110) == ((*(int *)(((t1 << 2) + 0xC1323FC))) + ((((struct o0_int *)0xC2B31C4)->v)))) {
                    FUN_0c01ec7a(0x0);
                }
                if ((*(int *)0xC2B3110) == (((*(int *)(((t1 << 2) + 0xC1323FC))) + ((((struct o0_int *)0xC2B31C4)->v))) + 0x3C)) {
                    (((struct o24_uint *)0xC1EC720)->v) = 0x2;
                }
                t4 = 0xC1323FC;
            }
            t3 = t4;
        }
        t2 = t3;
    }
    return t2;
}

int FUN_0c01c900(void)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;

    if (((((struct o24_int *)0xC1EC71C)->v)) != 0) {
        FUN_0c06f240();
        FUN_0c027f28(0x0);
        FUN_0c02803a(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
        pfSize(1.0f, 1.0f);
        u0 = (((struct o4_float *)0xC01CAB0)->v);
        u1 = (-((FUN_0c02806c(0xC0974F0)) * ((((struct o0_float *)0xC01CAB0)->v))));
        FUN_0c027fbe((u1 + u0), ((((struct o8_float *)0xC01CAB0)->v)));
        FUN_0c02842e(0xC0974F0);
        FUN_0c06f240();
        FUN_0c06f240();
    }
    FUN_0c01e6f0();
    if (((((struct o24_int *)0xC1EC71C)->v)) != 0) {
        if (((((struct o0_int *)0xC1EC71C)->v)) == 2) {
            FUN_0c020b54();
        } else {
            FUN_0c0209b6();
        }
    }
    FUN_0c05ab5e();
    if (((((struct o24_int *)0xC1EC71C)->v)) == 0) {
        if ((((int)(*(int *)0xC2AC2F8) >> 4) & 1) == 0) {
            t0 = 0x0;
            for (;;) {
                FUN_0c05f788(t0, 0x0);
                t0 = (t0 + 0x1);
                if ((int)t0 >= (int)0x4) {
                    break;
                }
            }
        } else {
            t0 = 0x4;
            for (;;) {
                FUN_0c05f788(t0, 0x0);
                t0 = (t0 + 0x1);
                if ((int)t0 >= (int)0x8) {
                    break;
                }
            }
        }
        t0 = *(int *)0xC2AC2F8;
        if (((int)t0 >> 5) != 0) {
            if (((int)t0 >> 5) != 1) {
                if (((int)t0 >> 5) != 2) {
                    if ((((int)t0 >> 4) & 0x1) == 0) {
                        t1 = 0x0;
                        for (;;) {
                            FUN_0c0100c4(t1, 0x0);
                            t1 = (t1 + 0x1);
                            if ((int)t1 >= (int)0x4) {
                                break;
                            }
                        }
                    } else {
                        t1 = 0x4;
                        for (;;) {
                            FUN_0c0100c4(t1, 0x0);
                            t1 = (t1 + 0x1);
                            if ((int)t1 >= (int)0x8) {
                                break;
                            }
                        }
                    }
                } else {
                    FUN_0c0100c4(0x10, 0x0);
                }
            } else {
                FUN_0c0100c4(0x8, 0x0);
            }
        } else {
            if ((((int)t0 >> 4) & 0x1) == 0) {
                t0 = 0x0;
                for (;;) {
                    FUN_0c0100c4(t0, 0x0);
                    t0 = (t0 + 0x1);
                    if ((int)t0 >= (int)0x4) {
                        break;
                    }
                }
            } else {
                t0 = 0x4;
                for (;;) {
                    FUN_0c0100c4(t0, 0x0);
                    t0 = (t0 + 0x1);
                    if ((int)t0 >= (int)0x8) {
                        break;
                    }
                }
            }
        }
    } else {
        FUN_0c05f788((*(int *)0xC175C80), 0x0);
        FUN_0c0100c4((*(int *)0xC175C80), 0x1);
    }
    return FUN_0c06cd60();
}
