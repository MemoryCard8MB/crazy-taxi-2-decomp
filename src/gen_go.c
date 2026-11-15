/* Straight-line functions with calls and guards (batch gen_go): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[5]; } Stk5;
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_int { char p[0x1C]; int v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_int { char p[0x28]; int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2C_int { char p[0x2C]; int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o34_int { char p[0x34]; int v; };
struct o38_int { char p[0x38]; int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o50_int { char p[0x50]; int v; };
struct o54_int { char p[0x54]; int v; };
struct o64_int { char p[0x64]; int v; };
struct o68_int { char p[0x68]; int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o78_float { char p[0x78]; float v; };
struct o7C_float { char p[0x7C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int CheckColliPoleEdge(int, int, int, float);
int CheckColliWallEdge(int, int);
int CheckColliWallPole(int, int);
int CheckColliWallSegment(int, int);
int ETD_EntryRecvFunc(int, int);
int FUN_0c018b1c(int);
int FUN_0c018b22(int, int);
int FUN_0c0297f4(int, int, float);
int FUN_0c029b12(int, float);
int FUN_0c02be68(int, float);
int FUN_0c0503b4(int);
int FUN_0c0503e6(float, float);
extern int FUN_0c0503f0();
int FUN_0c0503fa(float, float, float);
int FUN_0c058ca6(int, int);
int FUN_0c05b586(int);
int FUN_0c05b7aa(int, int, int, float);
int FUN_0c05c878(int, int, float);
int FUN_0c05c984(int, int, float);
int FUN_0c05ca24(float, float, float);
int FUN_0c05cac6(float);
int FUN_0c05cad0(float);
int FUN_0c05d1f4(int, int, int, int);
int FUN_0c05d254(int);
int FUN_0c05d858(int, int);
int FUN_0c05d8a6(int, int, int);
int FUN_0c06e700(int, int, float);
int FUN_0c071920(int);
float FUN_0c072140(int);
int FUN_0c072230(int, int);
int FUN_0c072290(int, int);
int FUN_0c072600(int);
int FUN_0c072b60(int);
int FUN_0c073360(void);
int FUN_0c073a30(float, float, float);
int FUN_0c073a60(int);
float FUN_0c073b40(int, int);
int FUN_0c073c40(int, int, float);
float FUN_0c073c60(int);
float FUN_0c073c80(int);
int FUN_0c078810(int, int, int);
int FUN_0c078850(int);
int FUN_0c078890(float);
int GetRotVec(int, float);
int GetRotVec4Ang(int, int, int, int);
int MultiRot4Vec(int);
int PutCollisionEffect(int, int, int);
int ReflectColliWallBox(int, int, int, int);
int SetColliObj(int, int);
extern float _builtin_sqrtf(float);
int camSetTarget(int, int);
int nlAddVector(int, int);
int nlAddVector3op(int, int, int);
float nlFloor(float);
int nlGetMatrix(int);
int nlGetPushedMatrix(int);
int nlLocate(int, int);
int nlMakeModelViewProjectMatrix(void);
int nlMultiMatrix(int);
int nlObjPutUseViewMatrix(int);
int nlOuterProduct(int, int, int);
int nlPopMatrix(int);
int nlPrintf(int, ...);
int nlProjectScreen(int, int);
int nlPushMatrix(int);
int nlQuickInvertMatrix(void);
int nlRotate(int, int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlScaleUnitVector(int, int, float);
int nlSubVector(int, int);
int nlSubVector3op(int, int, int);
int nlUnitMatrix(void);
int pdGetPeripheral(int);
int FUN_0c05c2cc(int a4);
int FUN_0c05de0c(int a4, float f4, float f5, float f6, float f7, float f8);
int FUN_0c02c068(int a4, int a5, float f4);
int FUN_0c05a3f8(int a4);
float FUN_0c02f6e8(int a4);
int FUN_0c04c5da(void);
int FUN_0c068794(int a4);

int FUN_0c05c2cc(int a4)
{
    int stk[16];
    register int t2;
    register int t31;
    register int t210;
    register int t98;
    register float u108;
    register float u109;
    register int t111;
    register float u114;
    register float u115;
    register int t119;
    register float u130;
    register float u131;
    register float u135;
    register float u136;
    register float u142;
    register float t166;
    register float t177;
    register float t188;
    register int t195;

    if (a4 != 0) {
        (((struct o0_uint *)0xC136CB0)->v) = 0x0;
    }
    t2 = pdGetPeripheral(0xC);
    if (((*(int *)((t2 + 0x10))) & 16) != 0) {
        if (((((struct o0_int *)0xC136CB0)->v)) != 1) {
            (((struct o0_uint *)0xC136CB0)->v) = 0x1;
        } else {
            (((struct o0_uint *)0xC136CB0)->v) = 0x4;
        }
    }
    if (((*(int *)((t2 + 0x10))) & 32) != 0) {
        if (((((struct o0_int *)0xC136CB0)->v)) != 2) {
            (((struct o0_uint *)0xC136CB0)->v) = 0x2;
        } else {
            (((struct o0_uint *)0xC136CB0)->v) = 0x5;
        }
    }
    if (((*(int *)((t2 + 0x10))) & 64) != 0) {
        (((struct o0_uint *)0xC136CB0)->v) = 0x3;
    }
    if (((*(int *)((t2 + 0x10))) & 128) != 0) {
        (((struct o4_uint *)0xC136CB0)->v) = (((((((struct o4_int *)0xC136CB0)->v)) == 0)) ? 1 : 0);
    }
    t31 = (((struct o0_int *)0xC136CB0)->v);
    if (t31 != 0) {
        if (t31 != 1) {
            if (t31 != 2) {
                if (t31 != 3) {
                    if (t31 != 4) {
                        t210 = t31;
                        if (t31 == 5) {
                            t210 = (FUN_0c05cad0((((float)((unsigned short)(*(short *)((t2 + 0x1A))) - (unsigned short)(*(short *)((t2 + 0x18)))) * 0.5f) / 128.0f)));
                        }
                    } else {
                        t210 = (FUN_0c05cac6((((float)((unsigned short)(*(short *)((t2 + 0x1A))) - (unsigned short)(*(short *)((t2 + 0x18)))) * 0.5f) / 128.0f)));
                    }
                } else {
                    t210 = (FUN_0c05ca24((((float)(*(short *)((t2 + 0x1C))) * 0.5f) / 128.0f), ((-((float)(*(short *)((t2 + 0x1E))) * 0.5f)) / 128.0f), (((float)((unsigned short)(*(short *)((t2 + 0x1A))) - (unsigned short)(*(short *)((t2 + 0x18)))) * 0.5f) / 128.0f)));
                }
            } else {
                t210 = (FUN_0c05c984((*(short *)((t2 + 0x1E))), (-(*(short *)((t2 + 0x1C)))), (((float)((unsigned short)(*(short *)((t2 + 0x1A))) - (unsigned short)(*(short *)((t2 + 0x18)))) * 0.5f) / 128.0f)));
            }
        } else {
            t210 = (FUN_0c05c878(((*(short *)((t2 + 0x1E))) << 1), ((*(short *)((t2 + 0x1C))) << 1), (((float)((unsigned short)(*(short *)((t2 + 0x18))) - (unsigned short)(*(short *)((t2 + 0x1A)))) * 0.5f) / 128.0f)));
        }
    } else {
        FUN_0c018b1c(0x1);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 48) + 0x4)) = *(struct mv3 *)(0xC175930); }
        FUN_0c06e700((((int)stk + 48) + 0x4), 0xC17598C, -50.0f);
        FUN_0c018b22((((int)stk + 48) + 0x4), 0x0);
        t210 = camSetTarget(0xC175930, 0x0);
        (((struct o0_uint *)0xC136CB0)->v) = 0x1;
    }
    if (((((struct o4_int *)0xC136CB0)->v)) == 0) {
    } else {
        nlLocate(0x3C, 0xF);
        FUN_0c071920(0xFF00FF00);
        *(int *)((int)stk + 44) = 0xC10DA28;
        nlPrintf(0xC10DA28);
        FUN_0c071920(0xFFFFFFFF);
        ETD_EntryRecvFunc(0x10, 0x10);
        t98 = (*(int *)(((((((struct o0_int *)0xC136CB0)->v)) << 2) + 0xC136CB8)));
        *(int *)((int)stk + 40) = t98;
        *(int *)((int)stk + 36) = 0xC10DA38;
        nlPrintf(0xC10DA38, t98);
        ETD_EntryRecvFunc(0x8, 0x8);
        FUN_0c071920(0xFF00FF00);
        *(int *)((int)stk + 32) = 0xC10DA3C;
        nlPrintf(0xC10DA3C);
        FUN_0c071920(0xFFFFFFFF);
        *(float *)(((int)stk + 28)) = ((((struct o14_float *)0xC177D38)->v));
        *(float *)(((int)stk + 24)) = ((((struct o10_float *)0xC177D38)->v));
        *(float *)(((int)stk + 20)) = ((((struct oC_float *)0xC177D38)->v));
        *(float *)(((int)stk + 16)) = ((((struct o8_float *)0xC177D38)->v));
        u108 = (((struct o4_float *)0xC177D38)->v);
        *(float *)(((int)stk + 12)) = u108;
        u109 = (((struct o0_float *)0xC177D38)->v);
        *(float *)(((int)stk + 8)) = u109;
        *(int *)((int)stk + 4) = 0xC10DA4C;
        nlPrintf(0xC10DA4C, u109, u108);
        t111 = FUN_0c029b12(0xC177D44, 100.0f);
        if ((*(int *)((t111 + 0x1C))) != -1) {
            *(float *)(((int)stk + 44)) = ((((struct o8_float *)(t111))->v));
            u114 = (((struct o4_float *)(t111))->v);
            *(float *)(((int)stk + 40)) = u114;
            u115 = *(float *)((t111 + 0x0));
            *(float *)(((int)stk + 36)) = u115;
            *(int *)((int)stk + 32) = 0xC10DA90;
            nlPrintf(0xC10DA90, u115, u114);
            t119 = (*(int *)((((*(int *)((t111 + 0x1C))) << 2) + 0xC136D0C)));
            *(int *)((int)stk + 28) = t119;
            *(int *)((int)stk + 24) = 0xC10DAB4;
            nlPrintf(0xC10DAB4, t119);
        }
        FUN_0c071920(0xFF00FF00);
        *(int *)((int)stk + 44) = 0xC10DAC0;
        nlPrintf(0xC10DAC0);
        FUN_0c071920(0xFFFFFFFF);
        nlPushMatrix(0xC17596C);
        nlQuickInvertMatrix();
        FUN_0c072230(0xC177D38, (((int)stk + 44) + 0x8));
        *(float *)(((int)stk + 40)) = (*(float *)(((int)stk + 60)));
        u130 = *(float *)(((int)stk + 56));
        *(float *)(((int)stk + 36)) = u130;
        u131 = *(float *)(((int)stk + 52));
        *(float *)(((int)stk + 32)) = u131;
        *(int *)((int)stk + 28) = 0xC10DAD4;
        nlPrintf(0xC10DAD4, u131, u130);
        FUN_0c072230(0xC177D44, (((int)stk + 28) + 0x18));
        *(float *)(((int)stk + 24)) = (*(float *)(((int)stk + 60)));
        u135 = *(float *)(((int)stk + 56));
        *(float *)(((int)stk + 20)) = u135;
        u136 = *(float *)(((int)stk + 52));
        *(float *)(((int)stk + 16)) = u136;
        *(int *)((int)stk + 12) = 0xC10DAF8;
        nlPrintf(0xC10DAF8, u136, u135);
        nlPopMatrix(0x1);
        FUN_0c071920(0xFF00FF00);
        *(int *)((int)stk + 8) = 0xC10DB1C;
        nlPrintf(0xC10DB1C);
        FUN_0c071920(0xFFFFFFFF);
        u142 = *(float *)0xC177D9C;
        *(float *)(((int)stk + 4)) = u142;
        *(int *)((int)stk + 0) = 0xC10DB34;
        nlPrintf(0xC10DB34, u142);
        FUN_0c073360();
        FUN_0c073a60(0xC177D44);
        nlPushMatrix(0x0);
        nlScale((1.0f + 1.0f), (1.0f + 1.0f), (1.0f + 1.0f));
        FUN_0c078890(3.0f);
        FUN_0c078810(0xC10D9BC, 0xC10D9C8, 0xFFFF0000);
        FUN_0c078810(0xC10D9BC, 0xC10D9E0, 0xFF00FF00);
        FUN_0c078810(0xC10D9BC, 0xC10D9F8, 0xFF0000FF);
        nlGetPushedMatrix(0x0);
        nlScale(5.0f, 5.0f, 5.0f);
        FUN_0c078890(1.0f);
        FUN_0c078810(0xC10D9BC, 0xC10D9D4, 0xFFFF8080);
        FUN_0c078810(0xC10D9BC, 0xC10D9EC, 0xFF80FF80);
        FUN_0c078810(0xC10D9BC, 0xC10DA04, 0xFF8080FF);
        nlGetPushedMatrix(0x0);
        FUN_0c078890(3.0f);
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 48)) = 0xC136CD4;
        (((struct o24_uint *)0xC136CB0)->v) = 0xFFFF0000;
        nlRotateAX(((((*(int *)0xC1EC83C) << 8) << 2) << 1));
        t166 = FUN_0c072140(((((*(int *)0xC1EC83C) << 8) << 2) << 1));
        FUN_0c073a30((t166 * 0.5f), 0.0f, 0.0f);
        FUN_0c078850(0xC136CD0);
        nlGetPushedMatrix(0x0);
        *(unsigned int *)(((*(int *)(((int)stk + 48))) + 0x0)) = 0xFF00FF00;
        nlRotateAZ(0x4000);
        nlRotateAX(((((*(int *)0xC1EC83C) << 8) << 2) << 1));
        t177 = FUN_0c072140(((((*(int *)0xC1EC83C) << 8) << 2) << 1));
        FUN_0c073a30((t177 * 0.5f), 0.0f, 0.0f);
        FUN_0c078850(0xC136CD0);
        nlGetPushedMatrix(0x0);
        *(unsigned int *)(((*(int *)(((int)stk + 48))) + 0x0)) = 0xFF0000FF;
        nlRotateAY(0xC000);
        nlRotateAX(((((*(int *)0xC1EC83C) << 8) << 2) << 1));
        t188 = FUN_0c072140(((((*(int *)0xC1EC83C) << 8) << 2) << 1));
        FUN_0c073a30((t188 * 0.5f), 0.0f, 0.0f);
        FUN_0c078850(0xC136CD0);
        nlPopMatrix(0x1);
        FUN_0c078890(1.0f);
        nlPopMatrix(0x1);
        nlPopMatrix(0x1);
        t195 = *(int *)((t111 + 0x1C));
        t210 = t195;
        if (t195 != -1) {
            FUN_0c073360();
            FUN_0c073a30((*(float *)((t111 + 0x0))), (((((struct o4_float *)(t111))->v)) + (*(float *)0xC05C928)), ((((struct o8_float *)(t111))->v)));
            nlRotateAZ(0xC000);
            nlRotateAX(((((*(int *)0xC1EC83C) << 8) << 2) << 1));
            (((struct o24_uint *)0xC136CB0)->v) = 0xFFFFFF00;
            FUN_0c078850(0xC136CD0);
            t210 = (nlPopMatrix(0x1));
        }
    }
    return t210;
}

int FUN_0c05de0c(int a4, float f4, float f5, float f6, float f7, float f8)
{
    int stk[18];
    register int t0;
    register float u8;
    register float u37;
    register float u156;
    register float u157;
    register int t197;
    register int t201;
    register float u205;
    register int t216;

    t0 = *(int *)(((a4 << 2) + 0xC13AC90));
    if ((*(int *)((0xC13ADD8 + (a4 << 2)))) != 0) {
        if ((*(int *)(((*(int *)0xC136D80) + 0x4))) == 57) {
            u8 = (((struct o0_float *)0xC2B980C)->v);
            if ((u8 > 0.899999976f) && (1.10000002f > u8)) {
                *(unsigned int *)(((*(int *)((0xC13AC90 + (a4 << 2)))) + 0x28)) = (*(int *)(((*(int *)((0xC13ADD8 + (a4 << 2)))) + 0x0)));
            } else {
                if ((u8 > 1.89999998f) && (2.0999999f > u8)) {
                    *(unsigned int *)(((*(int *)((0xC13AC90 + (a4 << 2)))) + 0x28)) = (*(int *)(((*(int *)((0xC13ADD8 + (a4 << 2)))) + 0x4)));
                } else {
                    if ((u8 > 2.9000001f) && (3.0999999f > u8)) {
                        *(unsigned int *)(((*(int *)((0xC13AC90 + (a4 << 2)))) + 0x28)) = (*(int *)(((*(int *)((0xC13ADD8 + (a4 << 2)))) + 0x8)));
                    } else {
                        if ((u8 > 3.9000001f) && (4.0999999f > u8)) {
                            *(unsigned int *)(((*(int *)((0xC13AC90 + (a4 << 2)))) + 0x28)) = (*(int *)(((*(int *)((0xC13ADD8 + (a4 << 2)))) + 0xC)));
                        }
                    }
                }
            }
            u37 = (((struct oC_float *)0xC2B980C)->v);
            if ((u37 > 0.899999976f) && (1.10000002f > u37)) {
                (((struct o40_uint *)((*(int *)((0xC13AC90 + (a4 << 2))))))->v) = (*(int *)(((*(int *)((0xC13ADD8 + (a4 << 2)))) + 0x10)));
            } else {
                if ((u37 > 1.89999998f) && (2.0999999f > u37)) {
                    (((struct o40_uint *)((*(int *)((0xC13AC90 + (a4 << 2))))))->v) = (*(int *)(((*(int *)((0xC13ADD8 + (a4 << 2)))) + 0x14)));
                } else {
                    if ((u37 > 2.9000001f) && (3.0999999f > u37)) {
                        (((struct o40_uint *)((*(int *)((0xC13AC90 + (a4 << 2))))))->v) = (*(int *)(((*(int *)((0xC13ADD8 + (a4 << 2)))) + 0x18)));
                    } else {
                        if ((u37 > 3.9000001f) && (4.0999999f > u37)) {
                            (((struct o40_uint *)((*(int *)((0xC13AC90 + (a4 << 2))))))->v) = (*(int *)(((*(int *)((0xC13ADD8 + (a4 << 2)))) + 0x1C)));
                        }
                    }
                }
            }
        }
    }
    nlPushMatrix(0x0);
    FUN_0c072600(0xC136D90);
    FUN_0c072230(0xC2B9774, 0xC136F68);
    FUN_0c072230(0xC2B9798, 0xC136F8C);
    FUN_0c072230(0xC2B97C8, 0xC136FB0);
    FUN_0c072230(0xC2B97EC, 0xC136FD4);
    FUN_0c073a60(0xC2B9738);
    FUN_0c05b586(0xC2B9744);
    FUN_0c05d1f4(t0, 0x0, 0x0, 0x0);
    nlGetMatrix(0xC2B981C);
    nlPushMatrix(0x0);
    FUN_0c05b586(0xC2B9750);
    nlGetMatrix(0xC2B985C);
    nlPushMatrix(0x0);
    FUN_0c073a30(4.4849f, 0.0f, 0.0f);
    FUN_0c05b586(0xC2B975C);
    FUN_0c05d1f4((t0 + 0x10), 0x0, 0x0, 0x0);
    nlGetMatrix(0xC2B989C);
    nlGetPushedMatrix(0x0);
    FUN_0c073a30(3.66109991f, 0.0560000017f, -1.78760004f);
    FUN_0c05b586(0xC2B9768);
    FUN_0c05d254(0xC136F68);
    nlRotateAZ(((((struct o10_int *)0xC136F74)->v)));
    FUN_0c05d1f4(((t0 + 0x10) + 0x8), 0x0, 0x0, 0x0);
    nlGetMatrix(0xC2B98DC);
    FUN_0c073a30(((((struct o0_float *)0xC136F74)->v)), 0.0f, 0.0f);
    nlRotateAZ(((((struct o14_int *)0xC136F74)->v)));
    FUN_0c05d1f4((((t0 + 0x10) + 0x8) + 0x8), 0x0, 0x0, 0x0);
    nlGetMatrix(0xC2B991C);
    FUN_0c073a30(((((struct o8_float *)0xC136F74)->v)), 0.0f, 0.0f);
    FUN_0c05b586(0xC2B9780);
    FUN_0c05d1f4(((((t0 + 0x10) + 0x8) + 0x8) + 0x8), 0x0, 0x0, 0x0);
    nlGetMatrix(0xC2B995C);
    nlGetPushedMatrix(0x0);
    FUN_0c073a30(3.66109991f, 0.0560000017f, 1.78760004f);
    FUN_0c05b586(0xC2B978C);
    FUN_0c05d254(0xC136F8C);
    nlRotateAZ(((((struct o34_int *)0xC136F74)->v)));
    FUN_0c05d1f4((((((t0 + 0x10) + 0x8) + 0x8) + 0x8) + 0x8), 0x0, 0x0, 0x0);
    nlGetMatrix(0xC2B999C);
    FUN_0c073a30(((((struct o24_float *)0xC136F74)->v)), 0.0f, 0.0f);
    nlRotateAZ(((((struct o38_int *)0xC136F74)->v)));
    FUN_0c05d1f4(((((((t0 + 0x10) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8), 0x0, 0x0, 0x0);
    nlGetMatrix(0xC2B99DC);
    FUN_0c073a30(((((struct o2C_float *)0xC136F74)->v)), 0.0f, 0.0f);
    FUN_0c05b586(0xC2B97A4);
    FUN_0c05d1f4((((((((t0 + 0x10) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8), 0x0, 0x0, 0x0);
    nlGetMatrix(0xC2B9A1C);
    nlPopMatrix(0x1);
    nlGetPushedMatrix(0x0);
    FUN_0c05b586(0xC2B97B0);
    FUN_0c05d1f4(((((((((t0 + 0x10) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8), 0x0, 0x0, 0x0);
    nlGetMatrix(0xC2B9A5C);
    nlPushMatrix(0x0);
    u156 = (((struct o0_float *)0xC05E3A0)->v);
    u157 = (((struct o4_float *)0xC05E3A0)->v);
    FUN_0c073a30(u156, u157, ((((struct o8_float *)0xC05E3A0)->v)));
    FUN_0c05b586(0xC2B97BC);
    FUN_0c05d254(0xC136FB0);
    nlRotateAZ(((((struct o10_int *)0xC136FBC)->v)));
    nlGetMatrix(0xC2B9A9C);
    FUN_0c073a30(((((struct o0_float *)0xC136FBC)->v)), 0.0f, 0.0f);
    nlRotateAZ(((((struct o14_int *)0xC136FBC)->v)));
    FUN_0c05d1f4((((((((((t0 + 0x10) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x10), 0x0, 0x0, 0x0);
    nlGetMatrix(0xC2B9ADC);
    FUN_0c073a30(((((struct o8_float *)0xC136FBC)->v)), 0.0f, 0.0f);
    FUN_0c05b586(0xC2B97D4);
    FUN_0c05d1f4(((((((((((t0 + 0x10) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x10) + 0x8), 0x0, 0x0, 0x0);
    nlGetMatrix(0xC2B9B1C);
    nlGetPushedMatrix(0x0);
    FUN_0c073a30(u156, u157, ((((struct o20_float *)0xC05E3A0)->v)));
    FUN_0c05b586(0xC2B97E0);
    FUN_0c05d254(0xC136FD4);
    nlRotateAZ(((((struct o34_int *)0xC136FBC)->v)));
    nlGetMatrix(0xC2B9B5C);
    FUN_0c073a30(((((struct o24_float *)0xC136FBC)->v)), 0.0f, 0.0f);
    nlRotateAZ(((((struct o38_int *)0xC136FBC)->v)));
    FUN_0c05d1f4((((((((((((t0 + 0x10) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x10) + 0x8) + 0x10), 0x0, 0x0, 0x0);
    nlGetMatrix(0xC2B9B9C);
    FUN_0c073a30(((((struct o2C_float *)0xC136FBC)->v)), 0.0f, 0.0f);
    FUN_0c05b586(0xC2B97F8);
    FUN_0c05d1f4(((((((((((((t0 + 0x10) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x10) + 0x8) + 0x10) + 0x8), 0x0, 0x0, 0x0);
    nlGetMatrix(0xC2B9BDC);
    nlPopMatrix(0x3);
    nlPushMatrix(0xC2B985C);
    t197 = *(int *)(((0xC13AC90 + (a4 << 2)) + 0x0));
    FUN_0c05d8a6((*(int *)(((t197 + 0x8) + 0x0))), 0xC2B9A5C, 0xC10E260);
    FUN_0c05d1f4((t197 + 0x8), 0x0, 0x0, 0x0);
    t201 = *(int *)(((0xC13AC90 + (a4 << 2)) + 0x0));
    *(unsigned int *)(((int)stk + 4)) = 0xC2B9A9C;
    FUN_0c072b60(0xC2B9A9C);
    nlPushMatrix(0x0);
    nlQuickInvertMatrix();
    u205 = *(float *)0xC05E3F8;
    *(unsigned int *)(((int)stk + 0)) = 0xC2B9ADC;
    FUN_0c05b7aa((*(int *)(((int)stk + 4))), 0xC2B9ADC, (((int)stk + 0) + 0x8), u205);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x38)) = *(struct mv3 *)(((*(int *)(((int)stk + 0))) + 0x30)); }
    nlMultiMatrix((((int)stk + 0) + 0x8));
    FUN_0c073a30((-((((struct o0_float *)0xC136FBC)->v))), 0.0f, 0.0f);
    FUN_0c05d858(((((struct o50_int *)(t201))->v)), 0xC10E344);
    nlPopMatrix(0x1);
    FUN_0c05d1f4((t201 + 0x50), 0x0, 0x0, 0x0);
    t216 = *(int *)(((0xC13AC90 + (a4 << 2)) + 0x0));
    *(unsigned int *)(((int)stk + 4)) = 0xC2B9B5C;
    FUN_0c072b60(0xC2B9B5C);
    nlPushMatrix(0x0);
    nlQuickInvertMatrix();
    *(unsigned int *)(((int)stk + 0)) = 0xC2B9B9C;
    FUN_0c05b7aa((*(int *)(((int)stk + 4))), 0xC2B9B9C, (((int)stk + 0) + 0x8), u205);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x38)) = *(struct mv3 *)(((*(int *)(((int)stk + 0))) + 0x30)); }
    nlMultiMatrix((((int)stk + 0) + 0x8));
    FUN_0c073a30((-((((struct o24_float *)0xC136FBC)->v))), 0.0f, 0.0f);
    FUN_0c05d858(((((struct o68_int *)(t216))->v)), 0xC10E3F0);
    nlPopMatrix(0x1);
    FUN_0c05d1f4((t216 + 0x68), 0x0, 0x0, 0x0);
    return (nlPopMatrix(0x1));
}

int FUN_0c02c068(int a4, int a5, float f4)
{
    int stk[36];
    register float t2;
    register float t5;
    register int t6;
    register int t7;
    register int t8;
    register int t288;
    register float u14;
    register int t16;
    register int t18;
    register int t19;
    register int t20;
    register int t21;
    register int t22;
    register int t23;
    register int t24;
    register int t25;
    register float u27;
    register int t61;
    register int t64;
    register int t81;
    register int t95;
    register float u97;
    register int t99;
    register int t105;
    register float u107;
    register int t130;
    register float u159;
    register float u163;
    register int t164;
    register float u169;
    register int t171;
    register float u175;
    register int t206;
    register int t210;
    register int t211;
    register float u213;
    register int t215;
    register int t221;
    register float u223;
    register int t246;
    register int t9;
    int t10;
    register float u26;
    register int t30;
    register float u31;
    register int t32;
    register int t33;
    register int t34;
    float u96;
    register float u118;
    register float u114;
    register int t280;
    float u212;
    register float u234;
    register float u230;

    *(float *)(((int)stk + 24)) = f4;
    t2 = nlFloor(((*(float *)((a4 + 0x0))) / ((((struct o20_float *)0xC273810)->v))));
    t5 = nlFloor((((((struct o8_float *)(a4))->v)) / ((((struct o20_float *)0xC273810)->v))));
    t6 = (((struct o4_int *)0xC273810)->v);
    t7 = (((struct o8_int *)0xC273810)->v);
    t8 = (((struct o14_int *)0xC273810)->v);
    t288 = 0x0;
    if (((int)((t8 * ((int)t5 - t7)) + ((int)t2 - t6)) >= 0) && ((t9 = (((struct o1C_int *)0xC273810)->v), (int)((t8 * ((int)t5 - t7)) + ((int)t2 - t6)) < (int)t9) && (t10 = (((struct o0_int *)0xC273810)->v), t19 = *(int *)(((((t8 * ((int)t5 - t7)) + ((int)t2 - t6)) << 2) + t10)), t19 != 0))) {
        *(unsigned int *)(((int)stk + 32)) = 0x0;
        *(unsigned int *)(((int)stk + 112)) = a4;
        *(float *)(((int)stk + 132)) = (*(float *)(((int)stk + 24)));
        u14 = *(float *)(((((a5 << 2) << 2) << 1) + 0xC128DBC));
        *(float *)(((int)stk + 136)) = u14;
        *(unsigned int *)(((int)stk + 0)) = (((t8 * ((int)t5 - t7)) + ((int)t2 - t6)) << 2);
        t18 = (((struct o0_int *)0xC273810)->v);
        t16 = *(int *)(((((t8 * ((int)t5 - t7)) + ((int)t2 - t6)) << 2) + t18));
        t20 = 0xC273810;
        t21 = ((t8 * ((int)t5 - t7)) + ((int)t2 - t6));
        t22 = (*(short *)((t16 + 0x0)));
        t23 = 0x0;
        t24 = 0x0;
        t25 = (t16 + 0x4);
        u27 = u14;
        for (;;) {
            if (t22 == 0) {
                break;
            }
            t21 = ((int)stk + 0);
            t21 = (t21 + 0x70);
            t18 = (CheckColliWallSegment(t21, (*(int *)((t25 + 0x0)))));
            if ((t18 != 0) && ((t30 = (t18 == 0), t18 = 0x80, u27 = 0.0f, u31 = *(float *)((((int)stk + 0) + t18)), u26 = u31, !(u27 > u26)) || (t32 = *(int *)((t25 + 0x0)), t33 = (t18 == 0), t18 = t32, t34 = *(int *)((t18 + 0x14)), t18 = t34, (t18 & 1) == 0))) {
                if (t24 != 0) {
                    t18 = 0x80;
                    u27 = 0.0f;
                    u26 = (*(float *)((((int)stk + 0) + t18)));
                    if (u27 > u26) {
                        t22 = (t22 - 1);
                        t25 = (t25 + 0x4);
                        continue;
                    }
                    t20 = (*(int *)((t25 + 0x0)));
                    t19 = t23;
                    t18 = 0xC274004;
                    t21 = 0xF;
                    t23 = (t23 + 0x1);
                    t19 = (t19 << 2);
                    *(unsigned int *)((t19 + t18)) = t20;
                    if ((int)t23 <= (int)t21) {
                        t22 = (t22 - 1);
                        t25 = (t25 + 0x4);
                        continue;
                    }
                    break;
                }
                t18 = 0x80;
                u27 = 0.0f;
                u26 = (*(float *)((((int)stk + 0) + t18)));
                if (!(u27 > u26)) {
                    t23 = 0x0;
                    t24 = 0x1;
                }
                t20 = (*(int *)((t25 + 0x0)));
                t19 = t23;
                t18 = 0xC274004;
                t21 = 0xF;
                t23 = (t23 + 0x1);
                t19 = (t19 << 2);
                *(unsigned int *)((t19 + t18)) = t20;
                if ((int)t23 <= (int)t21) {
                    t22 = (t22 - 1);
                    t25 = (t25 + 0x4);
                    continue;
                }
                break;
            }
            t22 = (t22 - 1);
            t25 = (t25 + 0x4);
        }
        *(unsigned int *)(((int)stk + 8)) = (*(short *)(((*(int *)((((((struct o0_int *)0xC273810)->v)) + (*(int *)(((int)stk + 0)))))) + 0x2)));
        *(unsigned int *)(((int)stk + 0)) = ((a5 * 0x1C) + 0xC273DD4);
        *(unsigned int *)(((int)stk + 12)) = (((int)stk + 0) + 0x58);
        *(unsigned int *)(((int)stk + 16)) = (((int)stk + 0) + 0x64);
        t61 = t25;
        for (;;) {
            if ((*(int *)(((int)stk + 8))) != 0) {
                t64 = CheckColliWallPole((((int)stk + 0) + 0x70), (*(int *)((t61 + 0x0))));
                if (t64 == 0) {
                    t61 = (t61 + 0x4);
                    *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) - 1);
                    continue;
                }
                *(unsigned int *)(((int)stk + 4)) = (*(int *)((a4 + 0x28)));
                FUN_0c073360();
                FUN_0c073a60(a4);
                MultiRot4Vec((*(int *)(((int)stk + 4))));
                FUN_0c072230((*(int *)(((int)stk + 0))), (*(int *)(((int)stk + 12))));
                FUN_0c072230(((*(int *)(((int)stk + 0))) + 0xC), (*(int *)(((int)stk + 16))));
                nlPopMatrix(0x1);
                t81 = CheckColliPoleEdge((((int)stk + 0) + 0x70), (*(int *)((t61 + 0x0))), (((int)stk + 0) + 0x58), ((((struct o18_float *)((*(int *)(((int)stk + 0)))))->v)));
                if (t81 != 0) {
                    break;
                }
                t61 = (t61 + 0x4);
                *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) - 1);
                continue;
            }
            if (t23 == 0) {
                return (*(int *)(((int)stk + 32)));
            }
            *(unsigned int *)(((int)stk + 20)) = (*(int *)((a4 + 0x28)));
            FUN_0c073360();
            FUN_0c073a60(a4);
            MultiRot4Vec((*(int *)(((int)stk + 20))));
            t61 = 0x0;
            *(unsigned int *)(((int)stk + 0)) = (0xC273834 + (((((a5 << 2) << 1) + a5) << 2) << 1));
            for (;;) {
                if ((unsigned int)t61 >= (unsigned int)0x30) {
                    break;
                }
                FUN_0c072230(((*(int *)(((int)stk + 0))) + t61), ((((int)stk + 0) + 0x40) + t61));
                t61 = (t61 + 0xC);
            }
            nlPopMatrix(0x1);
            *(unsigned int *)(((int)stk + 4)) = 0x0;
            *(unsigned int *)(((int)stk + 12)) = 0xC274004;
            t95 = 0xC274004;
            u97 = 3.40282347e+38f;
            for (;;) {
                if ((int)(*(int *)(((int)stk + 4))) >= (int)0x4) {
                    break;
                }
                t99 = *(int *)(((int)stk + 4));
                t95 = t99;
                *(unsigned int *)(((int)stk + 112)) = ((((t99 << 1) + t95) << 2) + (((int)stk + 0) + 0x40));
                *(unsigned int *)(((int)stk + 8)) = 0x0;
                t95 = (*(int *)(((int)stk + 12)));
                *(unsigned int *)(((int)stk + 0)) = t95;
                t61 = (*(int *)(((int)stk + 12)));
                if ((int)t23 > 0) {
                    for (;;) {
                        t105 = CheckColliWallEdge((((int)stk + 0) + 0x70), (*(int *)((t61 + 0x0))));
                        if (t105 != 0) {
                            u107 = *(float *)(((int)stk + 128));
                            if ((u97 > u107) && (u96 = 0.0f, u96 > u107)) {
                                t95 = 0xC07FDC8;
                                u97 = u107;
                                { struct mv2 { int w[2]; }; *(struct mv2 *)((((int)stk + 0) + 0x38)) = *(struct mv2 *)((((int)stk + 0) + 0x74)); }
                                *(unsigned int *)(((int)stk + 16)) = (*(int *)(((int)stk + 4)));
                                t95 = (*(int *)(((int)stk + 0)));
                                *(unsigned int *)(((int)stk + 28)) = (*(int *)((t95 + 0x0)));
                                u114 = u96;
                            }
                            u118 = u114;
                        }
                        u96 = u118;
                        t95 = (*(int *)(((int)stk + 8)));
                        t95 = (t95 + 0x1);
                        *(unsigned int *)(((int)stk + 8)) = t95;
                        *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + 0x4);
                        t61 = (t61 + 0x4);
                        if ((int)t95 >= (int)t23) {
                            break;
                        }
                    }
                }
                t95 = (*(int *)(((int)stk + 4)));
                t95 = (t95 + 0x1);
                *(unsigned int *)(((int)stk + 4)) = t95;
            }
            if (0.0f > u97) {
                *(float *)((a4 + 0x0)) = ((*(float *)((a4 + 0x0))) - (((*(float *)(((int)stk + 56))) * u97)));
                (((struct o8_float *)(a4))->v) = (((((struct o8_float *)(a4))->v)) - ((((((struct o3C_float *)(((int)stk + 0)))->v)) * u97)));
                t130 = *(int *)(((int)stk + 16));
                *(float *)(((int)stk + 48)) = ((*(float *)((((((t130 << 1) + t130) << 2) + (((int)stk + 0) + 0x40)) + 0x0))) - (*(float *)((a4 + 0x0))));
                *(float *)(((int)stk + 52)) = (((((struct o8_float *)(((((t130 << 1) + t130) << 2) + (((int)stk + 0) + 0x40))))->v)) - ((((struct o8_float *)(a4))->v)));
                ReflectColliWallBox(a4, (((int)stk + 0) + 0x30), (((int)stk + 0) + 0x38), a5);
                if (a5 == 0) {
                    *(float *)(((int)stk + 36)) = ((*(float *)(((int)stk + 48))) + (*(float *)((a4 + 0x0))));
                    *(float *)(((int)stk + 40)) = ((((struct o4_float *)(a4))->v));
                    *(float *)(((int)stk + 44)) = ((*(float *)(((int)stk + 52))) + ((((struct o8_float *)(a4))->v)));
                    FUN_0c073360();
                    FUN_0c073a60(a4);
                    MultiRot4Vec((*(int *)(((int)stk + 20))));
                    nlPushMatrix(0x0);
                    nlQuickInvertMatrix();
                    FUN_0c072230((((int)stk + 0) + 0x24), (((int)stk + 0) + 0x24));
                    nlPopMatrix(0x1);
                    *(float *)(((int)stk + 40)) = 5.0f;
                    FUN_0c072230((((int)stk + 0) + 0x24), (((int)stk + 0) + 0x24));
                    nlPopMatrix(0x1);
                    PutCollisionEffect((((int)stk + 0) + 0x24), (a4 + 0xC), ((*(int *)(((*(int *)(((int)stk + 28))) + 0x18))) & 0x1));
                    return 0x1;
                }
                return 0x1;
            }
            return (*(int *)(((int)stk + 32)));
        }
        u159 = (*(float *)((a4 + 0x0)));
        u159 = u159 + (*(float *)(((int)stk + 124))) * (*(float *)(((int)stk + 116)));
        *(float *)((a4 + 0x0)) = u159;
        u163 = ((((struct o8_float *)(a4))->v));
        u163 = u163 + ((((struct o7C_float *)(((int)stk + 0)))->v)) * ((((struct o78_float *)(((int)stk + 0)))->v));
        (((struct o8_float *)(a4))->v) = u163;
        t164 = *(int *)((t61 + 0x0));
        u169 = (((((struct o8_float *)(t164))->v)) - (*(float *)((a4 + 0x0))));
        u169 = u169 + ((((struct o10_float *)(t164))->v)) * (*(float *)(((int)stk + 116)));
        *(float *)(((int)stk + 80)) = u169;
        t171 = *(int *)((t61 + 0x0));
        u175 = (((((struct oC_float *)(t171))->v)) - ((((struct o8_float *)(a4))->v)));
        u175 = u175 + ((((struct o10_float *)(t171))->v)) * (*(float *)(((int)stk + 120)));
        *(float *)(((int)stk + 84)) = u175;
        ReflectColliWallBox(a4, (((int)stk + 0) + 0x50), (((int)stk + 0) + 0x74), a5);
        if (a5 == 0) {
            *(float *)(((int)stk + 68)) = ((*(float *)(((int)stk + 80))) + (*(float *)((a4 + 0x0))));
            *(float *)(((int)stk + 72)) = ((((struct o4_float *)(a4))->v));
            *(float *)(((int)stk + 76)) = ((*(float *)(((int)stk + 84))) + ((((struct o8_float *)(a4))->v)));
            FUN_0c073360();
            FUN_0c073a60(a4);
            MultiRot4Vec((*(int *)(((int)stk + 4))));
            nlPushMatrix(0x0);
            nlQuickInvertMatrix();
            FUN_0c072230((((int)stk + 0) + 0x44), (((int)stk + 0) + 0x44));
            nlPopMatrix(0x1);
            *(float *)(((int)stk + 72)) = 5.0f;
            FUN_0c072230((((int)stk + 0) + 0x44), (((int)stk + 0) + 0x44));
            nlPopMatrix(0x1);
            PutCollisionEffect((((int)stk + 0) + 0x44), (a4 + 0xC), ((*(int *)(((*(int *)((t61 + 0x0))) + 0x18))) & 0x1));
        }
        *(unsigned int *)(((int)stk + 32)) = 0x1;
        if (t23 == 0) {
            t280 = (*(int *)(((int)stk + 32)));
        } else {
            *(unsigned int *)(((int)stk + 20)) = (*(int *)((a4 + 0x28)));
            FUN_0c073360();
            FUN_0c073a60(a4);
            MultiRot4Vec((*(int *)(((int)stk + 20))));
            *(unsigned int *)(((int)stk + 0)) = (0xC273834 + (((((a5 << 2) << 1) + a5) << 2) << 1));
            t206 = 0x0;
            for (;;) {
                if ((unsigned int)t206 >= (unsigned int)0x30) {
                    break;
                }
                FUN_0c072230(((*(int *)(((int)stk + 0))) + t206), ((((int)stk + 0) + 0x40) + t206));
                t206 = (t206 + 0xC);
            }
            nlPopMatrix(0x1);
            *(unsigned int *)(((int)stk + 4)) = 0x0;
            *(unsigned int *)(((int)stk + 12)) = 0xC274004;
            t210 = 0xC274004;
            t211 = t206;
            u213 = 3.40282347e+38f;
            for (;;) {
                if ((int)(*(int *)(((int)stk + 4))) >= (int)0x4) {
                    break;
                }
                t215 = *(int *)(((int)stk + 4));
                t210 = t215;
                *(unsigned int *)(((int)stk + 112)) = ((((t215 << 1) + t210) << 2) + (((int)stk + 0) + 0x40));
                *(unsigned int *)(((int)stk + 8)) = 0x0;
                t210 = (*(int *)(((int)stk + 12)));
                *(unsigned int *)(((int)stk + 0)) = t210;
                t211 = (*(int *)(((int)stk + 12)));
                if ((int)t23 > 0) {
                    for (;;) {
                        t221 = CheckColliWallEdge((((int)stk + 0) + 0x70), (*(int *)((t211 + 0x0))));
                        if (t221 != 0) {
                            u223 = *(float *)(((int)stk + 128));
                            if ((u213 > u223) && (u212 = 0.0f, u212 > u223)) {
                                u213 = u223;
                                { struct mv2 { int w[2]; }; *(struct mv2 *)((((int)stk + 0) + 0x38)) = *(struct mv2 *)((((int)stk + 0) + 0x74)); }
                                *(unsigned int *)(((int)stk + 16)) = (*(int *)(((int)stk + 4)));
                                t210 = (*(int *)(((int)stk + 0)));
                                *(unsigned int *)(((int)stk + 28)) = (*(int *)((t210 + 0x0)));
                                u230 = u212;
                            }
                            u234 = u230;
                        }
                        u212 = u234;
                        t210 = (*(int *)(((int)stk + 8)));
                        t210 = (t210 + 0x1);
                        *(unsigned int *)(((int)stk + 8)) = t210;
                        *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + 0x4);
                        t211 = (t211 + 0x4);
                        if ((int)t210 >= (int)t23) {
                            break;
                        }
                    }
                }
                t210 = (*(int *)(((int)stk + 4)));
                t210 = (t210 + 0x1);
                *(unsigned int *)(((int)stk + 4)) = t210;
            }
            if (0.0f > u213) {
                *(float *)((a4 + 0x0)) = ((*(float *)((a4 + 0x0))) - (((*(float *)(((int)stk + 56))) * u213)));
                (((struct o8_float *)(a4))->v) = (((((struct o8_float *)(a4))->v)) - ((((((struct o3C_float *)(((int)stk + 0)))->v)) * u213)));
                t246 = *(int *)(((int)stk + 16));
                *(float *)(((int)stk + 48)) = ((*(float *)((((((t246 << 1) + t246) << 2) + (((int)stk + 0) + 0x40)) + 0x0))) - (*(float *)((a4 + 0x0))));
                *(float *)(((int)stk + 52)) = (((((struct o8_float *)(((((t246 << 1) + t246) << 2) + (((int)stk + 0) + 0x40))))->v)) - ((((struct o8_float *)(a4))->v)));
                ReflectColliWallBox(a4, (((int)stk + 0) + 0x30), (((int)stk + 0) + 0x38), a5);
                if (a5 == 0) {
                    *(float *)(((int)stk + 36)) = ((*(float *)(((int)stk + 48))) + (*(float *)((a4 + 0x0))));
                    *(float *)(((int)stk + 40)) = ((((struct o4_float *)(a4))->v));
                    *(float *)(((int)stk + 44)) = ((*(float *)(((int)stk + 52))) + ((((struct o8_float *)(a4))->v)));
                    FUN_0c073360();
                    FUN_0c073a60(a4);
                    MultiRot4Vec((*(int *)(((int)stk + 20))));
                    nlPushMatrix(0x0);
                    nlQuickInvertMatrix();
                    FUN_0c072230((((int)stk + 0) + 0x24), (((int)stk + 0) + 0x24));
                    nlPopMatrix(0x1);
                    *(float *)(((int)stk + 40)) = 5.0f;
                    FUN_0c072230((((int)stk + 0) + 0x24), (((int)stk + 0) + 0x24));
                    nlPopMatrix(0x1);
                    PutCollisionEffect((((int)stk + 0) + 0x24), (a4 + 0xC), ((*(int *)(((*(int *)(((int)stk + 28))) + 0x18))) & 0x1));
                }
                t280 = 0x1;
            } else {
                t280 = (*(int *)(((int)stk + 32)));
            }
        }
        t288 = t280;
    }
    return t288;
}

int FUN_0c05a3f8(int a4)
{
    int stk[14];
    register int t1;
    register int t6;
    register int t7;
    register int t21;
    register int t22;
    register int t30;
    register float u32;
    register float u33;
    register int t44;
    register int t45;
    register int t55;
    register int t56;
    register int t63;
    register float u65;
    register float u66;
    register float u73;
    register float u75;
    register float u77;
    register int t92;
    register float u99;
    register float u102;
    register float u103;
    register float u106;
    register float u107;
    register float u110;
    register float u111;
    register float u114;
    register float u115;
    register float u118;
    register float u119;
    register float u122;
    int t2;
    register float u37;
    register float u71;

    if (a4 != 0) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC2B8A84) = *(struct mv3 *)(0xC175930); }
        (((struct o28_uint *)0xC2B8A84)->v) = 0x0;
        FUN_0c073360();
        { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC2B8A84) = *(struct mv3 *)(0xC10D574); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC2B8A90) = *(struct mv3 *)(0xC10D574); }
        t1 = *(int *)0xC132EA0;
        *(unsigned int *)0xC132EA0 = (-t1);
        if (((-t1) != 1) && (t2 = *(int *)0xC132EA0, t2 != -1)) {
            *(unsigned int *)0xC132EA0 = 0x1;
        }
        (((struct o24_float *)0xC2B8A84)->v) = 10.0f;
        FUN_0c073a60(0xC175930);
        t6 = (((struct o28_int *)0xC2B8A84)->v);
        t7 = *(int *)0xC132EA0;
        nlRotateAY((unsigned short)((int)((int)(((t6 * t7) << 16) - (t6 * t7)) / (int)0x12C)));
        FUN_0c072230(0xC2B8A90, 0xC2B8A90);
        FUN_0c073a30(0.0f, 10.0f, -10.0f);
        FUN_0c072230(0xC2B8A84, 0xC2B8A84);
        nlPopMatrix(0x1);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC2B8A9C) = *(struct mv3 *)(0xC10D574); }
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x20)) = *(struct mv3 *)(0xC175930); }
    *(float *)(((int)stk + 36)) = ((*(float *)(((int)stk + 36))) + 10.0f);
    FUN_0c073360();
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x2C)) = *(struct mv3 *)(0xC10D574); }
    FUN_0c073a60(0xC175930);
    t21 = (((struct o28_int *)0xC2B8A84)->v);
    t22 = *(int *)0xC132EA0;
    nlRotateAY((unsigned short)((int)((int)(((t21 * t22) << 16) - (t21 * t22)) / (int)0x258)));
    FUN_0c073a30(0.0f, 20.0f, -100.0f);
    FUN_0c072230((((int)stk + 0) + 0x2C), (((int)stk + 0) + 0x2C));
    nlPopMatrix(0x1);
    nlSubVector3op((((int)stk + 0) + 0x14), (((int)stk + 0) + 0x2C), (((int)stk + 0) + 0x20));
    *(float *)(((int)stk + 4)) = (FUN_0c073c60((((int)stk + 0) + 0x14)));
    t30 = FUN_0c0297f4((((int)stk + 0) + 0x20), (((int)stk + 0) + 0x14), 5.0f);
    if ((*(int *)((t30 + 0x1C))) != -1) {
        u32 = (((struct o18_float *)(t30))->v);
        u33 = (u32 + -2.0f);
        if (5.0f > (u32 + -2.0f)) {
            u33 = 5.0f;
        }
        u37 = u33;
    } else {
        u37 = (*(float *)(((int)stk + 4)));
    }
    FUN_0c073360();
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x20)) = *(struct mv3 *)(0xC10D574); }
    FUN_0c073a60(0xC175930);
    t44 = (nlRotateAY((unsigned short)(*(short *)0xC1759AC)));
    t45 = 0x4;
    for (;;) {
        *(unsigned int *)(((int)stk + 0)) = t45;
        if (t45 == 0) {
            break;
        }
        t44 = 0x160;
        t44 = (FUN_0c073a30(0.0f, 0.0f, (*(float *)((0xC1758B4 + t44)))));
        t44 = 0x19C;
        t44 = (nlRotateAY((*(short *)((0xC1758B4 + t44)))));
        t45 = (*(int *)(((int)stk + 0)));
        t45 = (t45 - 1);
    }
    FUN_0c072230((((int)stk + 0) + 0x20), (((int)stk + 0) + 0x20));
    nlUnitMatrix();
    FUN_0c073a60((((int)stk + 0) + 0x20));
    *(float *)(((int)stk + 36)) = ((*(float *)(((int)stk + 36))) + 10.0f);
    t55 = (((struct o28_int *)0xC2B8A84)->v);
    t56 = *(int *)0xC132EA0;
    nlRotateAY((unsigned short)((int)((int)((((t55 + 0x4) * t56) << 16) - ((t55 + 0x4) * t56)) / (int)0x258)));
    FUN_0c073a30(0.0f, 20.0f, -100.0f);
    FUN_0c072230((((int)stk + 0) + 0x8), (((int)stk + 0) + 0x8));
    nlPopMatrix(0x1);
    nlSubVector3op((((int)stk + 0) + 0x14), (((int)stk + 0) + 0x8), (((int)stk + 0) + 0x20));
    t63 = FUN_0c0297f4((((int)stk + 0) + 0x20), (((int)stk + 0) + 0x14), 5.0f);
    if ((*(int *)((t63 + 0x1C))) != -1) {
        u65 = (((struct o18_float *)(t63))->v);
        u66 = (u65 + -2.0f);
        if (5.0f > (u65 + -2.0f)) {
            u66 = 5.0f;
        }
        u71 = u66;
    } else {
        u71 = (*(float *)(((int)stk + 4)));
    }
    u73 = (((struct o24_float *)0xC2B8A84)->v);
    if (u71 > u37) {
        u75 = u73;
        u75 = u75 + 0.100000001f * ((u37 - u73));
        (((struct o24_float *)0xC2B8A84)->v) = u75;
    } else {
        u77 = u73;
        u77 = u77 + 0.100000001f * ((u71 - u73));
        (((struct o24_float *)0xC2B8A84)->v) = u77;
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x8)) = *(struct mv3 *)(0xC175930); }
    *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) + _builtin_sqrtf(10400.0f));
    nlSubVector3op((((int)stk + 0) + 0x14), (((int)stk + 0) + 0x2C), (((int)stk + 0) + 0x8));
    FUN_0c073c40((((int)stk + 0) + 0x14), (((int)stk + 0) + 0x14), (((((struct o24_float *)0xC2B8A84)->v)) / (*(float *)(((int)stk + 4)))));
    nlAddVector3op((((int)stk + 0) + 0x2C), (((int)stk + 0) + 0x8), (((int)stk + 0) + 0x14));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x8)) = *(struct mv3 *)((((int)stk + 0) + 0x2C)); }
    *(float *)(((int)stk + 12)) = (*(float *)0xC175934);
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 20)) = 0.0f;
    *(float *)(((int)stk + 24)) = ((*(float *)(((int)stk + 48))) - (*(float *)(((int)stk + 12))));
    t92 = FUN_0c0297f4((((int)stk + 0) + 0x2C), (((int)stk + 0) + 0x14), 5.0f);
    if ((*(int *)((t92 + 0x1C))) == 22) {
        *(float *)(((int)stk + 48)) = (((((struct o4_float *)(t92))->v)) + -10.0f);
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x20)) = *(struct mv3 *)(0xC175930); }
    u99 = (((struct o0_float *)0xC2B8A84)->v);
    u102 = u99;
    u102 = u102 + 0.600000024f * (((*(float *)(((int)stk + 44))) - u99));
    (((struct o0_float *)0xC2B8A84)->v) = u102;
    u103 = (((struct o4_float *)0xC2B8A84)->v);
    u106 = u103;
    u106 = u106 + 0.5f * (((*(float *)(((int)stk + 48))) - u103));
    (((struct o4_float *)0xC2B8A84)->v) = u106;
    u107 = (((struct o8_float *)0xC2B8A84)->v);
    u110 = u107;
    u110 = u110 + 0.600000024f * (((*(float *)(((int)stk + 52))) - u107));
    (((struct o8_float *)0xC2B8A84)->v) = u110;
    u111 = (((struct oC_float *)0xC2B8A84)->v);
    u114 = u111;
    u114 = u114 + 0.600000024f * (((*(float *)(((int)stk + 32))) - u111));
    (((struct oC_float *)0xC2B8A84)->v) = u114;
    u115 = (((struct o10_float *)0xC2B8A84)->v);
    u118 = u115;
    u118 = u118 + 0.5f * (((*(float *)(((int)stk + 36))) - u115));
    (((struct o10_float *)0xC2B8A84)->v) = u118;
    u119 = (((struct o14_float *)0xC2B8A84)->v);
    u122 = u119;
    u122 = u122 + 0.600000024f * (((*(float *)(((int)stk + 40))) - u119));
    (((struct o14_float *)0xC2B8A84)->v) = u122;
    (((struct o28_uint *)0xC2B8A84)->v) = (((((struct o28_int *)0xC2B8A84)->v)) + 0x1);
    FUN_0c018b1c(0x1);
    FUN_0c018b22(0xC2B8A84, 0x0);
    camSetTarget(0xC2B8A90, 0x0);
    *(float *)0xC177D9C = 60.0f;
    return 0xC05A8BC;
}

float FUN_0c02f6e8(int a4)
{
    int stk[17];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R7;
    register float F1;
    register float F2;
    register float F3;
    register float F4;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    register float w0_5;
    register float w0_6;
    register float w0_7;
    v0_4 = a4;
    v0_0 = (v0_4);
    w0_1 = (0.00999999978f);
    if (((*(int *)((v0_4 + 0x20))) == 0)) goto L_C02F738;
    (((struct o68_uint *)(v0_0))->v) = 0x1;
    if ((((*(int *)((v0_0 + 0x20))) & 1) == 0)) goto L_C02F738;
    if ((((((struct o64_int *)(v0_0))->v)) == 0xC446108)) goto L_C02F738;
    if ((!(((((struct o1C_float *)(v0_0))->v)) > w0_1))) goto L_C02F738;
    FUN_0c058ca6((*(int *)((((((struct o54_int *)(v0_0))->v)) + 0x14))), 0x1);
    L_C02F738:;
    w0_4 = FUN_0c073c60((v0_0 + 0x48));
    w0_0 = (w0_4);
    w0_3 = (0.00100000005f);
    w0_2 = (w0_4);
    if ((w0_4 > 0.00100000005f)) goto L_C02F778;
    v0_1 = (((struct o68_int *)(v0_0))->v);
    v0_2 = (v0_1);
    if ((v0_1 != 5)) goto L_C02F778;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x58)) = *(struct mv3 *)(0xC0A2D08); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0xC)) = *(struct mv3 *)(0xC0A2D08); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x48)) = *(struct mv3 *)(0xC0A2D08); }
    (((struct o68_uint *)(v0_0))->v) = 0x0;
    L_C02F778:;
    if ((((((struct o68_int *)(v0_0))->v)) != 0)) goto L_C02F790;
    v0_2 = (0x18);
    if ((1000.0f > ((((struct o18_float *)(v0_0))->v)))) goto L_C02F790;
    L_C02FB48:;
    return w0_0;
    L_C02F790:;
    FUN_0c073360();
    FUN_0c073a60(v0_0);
    if ((!(w0_2 > w0_3))) goto L_C02F7C4;
    nlRotate((v0_0 + 0x48), ((int)((((w0_2 * 65536.0f) / 6.28318548f)) + 0.5f) & 0xFFFF));
    L_C02F7C4:;
    MultiRot4Vec((v0_0 + 0x30));
    if ((!(1000.0f > ((((struct o18_float *)(v0_0))->v))))) goto L_C02F7E0;
    nlObjPutUseViewMatrix(((((struct o64_int *)(v0_0))->v)));
    L_C02F7E0:;
    if ((((((struct o68_int *)(v0_0))->v)) != 0)) goto L_C02F7F2;
    v0_2 = ((nlPopMatrix(0x1)));
    goto L_C02FB48;
    L_C02F7F2:;
    GetRotVec((v0_0 + 0x30), F4);
    FUN_0c073c40((v0_0 + 0xC), (v0_0 + 0xC), 0.980000019f);
    FUN_0c073c40((v0_0 + 0x48), (v0_0 + 0x48), 0.959999979f);
    (((struct o10_float *)(v0_0))->v) = (((((struct o10_float *)(v0_0))->v)) - 0.166666672f);
    nlAddVector(v0_0, (v0_0 + 0xC));
    FUN_0c02be68(v0_0, ((((struct o1C_float *)(((((struct o54_int *)(v0_0))->v))))->v)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x38)) = *(struct mv3 *)(0xC0A2D08); }
    v0_2 = (((struct o54_int *)(v0_0))->v);
    v0_1 = *(int *)((v0_2 + 0x4));
    v0_3 = *(int *)((v0_2 + 0x0));
    *(unsigned int *)(((int)stk + 0)) = (*(int *)((v0_2 + 0x8)));
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    v0_4 = (0xC073C40);
    v0_1 = (v0_1);
    v0_4 = (0xC073AD0);
    v0_4 = (v0_2);
    v0_2 = (0x0);
    v0_3 = (v0_3);
    w0_2 = (0.0f);
    L_C02F984:;
    v0_4 = (0xC073B80);
    w0_3 = (10.0f);
    if (((*(int *)(((int)stk + 0))) == 0)) goto L_C02F994;
    if ((!(0.0f > ((((struct o4_float *)(v0_1))->v))))) goto L_C02F918;
    FUN_0c072230(v0_3, (((int)stk + 0) + 0x2C));
    nlOuterProduct((v0_0 + 0x3C), 0xC0A2D5C, (((int)stk + 0) + 0x20));
    nlOuterProduct((v0_0 + 0x3C), (((int)stk + 0) + 0x20), (((int)stk + 0) + 0x20));
    nlScaleUnitVector((((int)stk + 0) + 0x20), (((int)stk + 0) + 0x20), (-((((struct o4_float *)(v0_1))->v))));
    R5 = ((((int)stk + 0) + 0x20));
    v0_3 = ((v0_3 + 0xC));
    L_C02F93A:;
    nlAddVector((((int)stk + 0) + 0x2C), R5);
    v0_5 = FUN_0c029b12((((int)stk + 0) + 0x2C), w0_3);
    v0_4 = (v0_5);
    if (((*(int *)((v0_5 + 0x1C))) == -1)) goto L_C02F97C;
    w0_4 = (((struct o18_float *)(v0_4))->v);
    w0_5 = *(float *)(((int)stk + 48));
    w0_3 = ((w0_5 - w0_4));
    if ((!(0.0f > (w0_5 - w0_4)))) goto L_C02F97C;
    nlAddVector((((int)stk + 0) + 0x38), (((int)stk + 0) + 0x2C));
    v0_2 = ((v0_2 + 0x1));
    if ((!(w0_2 > w0_3))) goto L_C02F974;
    w0_2 = (w0_3);
    L_C02F974:;
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + (*(int *)((v0_1 + 0x0))));
    L_C02F97C:;
    *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) - 1);
    v0_1 = ((v0_1 + 0x8));
    goto L_C02F984;
    L_C02F918:;
    FUN_0c072290(v0_3, (((int)stk + 0) + 0x2C));
    w0_4 = (((struct o4_float *)(v0_1))->v);
    w0_5 = *(float *)(((int)stk + 48));
    *(float *)(((int)stk + 48)) = (w0_5 - w0_4);
    v0_3 = ((v0_3 + 0xC));
    if (((w0_5 - w0_4) > 0.0f)) goto L_C02F97C;
    R5 = (v0_0);
    goto L_C02F93A;
    L_C02F994:;
    if (!((v0_2 != 0))) goto L_C02FB30;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x8)) = *(struct mv3 *)(((FUN_0c029b12((((int)stk + 0) + 0x2C), w0_3)) + 0xC)); }
    FUN_0c073c40((((int)stk + 0) + 0x38), (((int)stk + 0) + 0x38), (1.0f / (float)v0_2));
    nlSubVector((((int)stk + 0) + 0x38), v0_0);
    (((struct o4_float *)(v0_0))->v) = (((((struct o4_float *)(v0_0))->v)) - w0_2);
    nlOuterProduct((v0_0 + 0x48), (((int)stk + 0) + 0x38), (((int)stk + 0) + 0x20));
    nlAddVector((((int)stk + 0) + 0x20), (v0_0 + 0xC));
    w0_4 = FUN_0c073b40((((int)stk + 0) + 0x20), (((int)stk + 0) + 0x8));
    v0_1 = (0xC073C90);
    w0_3 = (1.0f);
    w0_2 = ((-w0_4));
    if (((-w0_4) > 0.0f)) goto L_C02FA0E;
    (((struct o68_uint *)(v0_0))->v) = 0x1;
    goto L_C02FB30;
    L_C02FB30:;
    nlPopMatrix(0x1);
    v0_2 = (0x54);
    if (((*(int *)((((((struct o54_int *)(v0_0))->v)) + 0x10))) == 0)) goto L_C02FB48;
    v0_2 = ((((int (*)(int, int, int, int, float))((*(int *)(((*(int *)((v0_0 + v0_2))) + 0x10)))))(v0_0, R5, R6, R7, F4)));
    goto L_C02FB48;
    L_C02FA0E:;
    if (((int)((((struct o68_int *)(v0_0))->v)) >= (int)0x3)) goto L_C02FAD2;
    w0_5 = FUN_0c073b40((((int)stk + 0) + 0x8), (((int)stk + 0) + 0x38));
    w0_4 = FUN_0c073c80((((int)stk + 0) + 0x38));
    w0_5 = (w0_5 * (-w0_5));
    w0_6 = (((struct o20_float *)(((((struct o54_int *)(v0_0))->v))))->v);
    FUN_0c073c40((((int)stk + 0) + 0x14), (((int)stk + 0) + 0x8), w0_2);
    nlAddVector((((int)stk + 0) + 0x14), (((int)stk + 0) + 0x20));
    FUN_0c073c40((((int)stk + 0) + 0x14), (((int)stk + 0) + 0x14), w0_1);
    w0_1 = (_builtin_sqrtf((w0_5 + w0_4)) * w0_6);
    w0_7 = (w0_2 * 1.60000002f);
    FUN_0c073c40((((int)stk + 0) + 0x20), (((int)stk + 0) + 0x8), ((w0_3 - w0_1) * w0_7));
    nlSubVector((((int)stk + 0) + 0x20), (((int)stk + 0) + 0x14));
    nlAddVector((v0_0 + 0xC), (((int)stk + 0) + 0x20));
    w0_1 = (w0_2 * 1.60000002f);
    w0_2 = (_builtin_sqrtf((w0_5 + w0_4)) * w0_6);
    FUN_0c073c40((((int)stk + 0) + 0x20), (((int)stk + 0) + 0x8), ((w0_1 * w0_2) / ((((struct o18_float *)(((((struct o54_int *)(v0_0))->v))))->v))));
    nlSubVector((((int)stk + 0) + 0x20), (((int)stk + 0) + 0x14));
    nlOuterProduct((((int)stk + 0) + 0x38), (((int)stk + 0) + 0x20), (((int)stk + 0) + 0x20));
    nlAddVector((v0_0 + 0x48), (((int)stk + 0) + 0x20));
    (((struct o68_uint *)(v0_0))->v) = (((((struct o68_int *)(v0_0))->v)) + 0x1);
    goto L_C02FB30;
    L_C02FAD2:;
    nlSubVector((v0_0 + 0xC), (((int)stk + 0) + 0x20));
    FUN_0c073c40((((int)stk + 0) + 0x20), (((int)stk + 0) + 0x20), (-0.333333313f / ((((struct o18_float *)(((((struct o54_int *)(v0_0))->v))))->v))));
    nlOuterProduct((((int)stk + 0) + 0x38), (((int)stk + 0) + 0x20), (((int)stk + 0) + 0x20));
    nlAddVector((v0_0 + 0x48), (((int)stk + 0) + 0x20));
    if (((int)(*(int *)(((int)stk + 4))) <= (int)0x2)) goto L_C02FB30;
    FUN_0c073c40((v0_0 + 0x48), (v0_0 + 0x48), 0.899999976f);
    (((struct o68_uint *)(v0_0))->v) = 0x5;
    goto L_C02FB30;
}

int FUN_0c04c5da(void)
{
    int stk[3];
    register float t1;
    register int t6;
    register float t2;
    register float t12;
    register int t25;
    register int t31;
    register int t37;
    register int t43;
    register int t48;
    register int t61;
    register int t66;
    register float t84;
    register float t87;
    register float t90;
    register float u91;
    register int t94;
    register int t105;
    register int t134;
    register int t164;
    int t10;

    nlSubVector3op(((int)stk + 0), 0xC175930, 0xC2ADFB8);
    *(float *)(((int)stk + 4)) = 0.0f;
    t1 = FUN_0c073c80(((int)stk + 0));
    t6 = 0x0;
    if (t1 > 36000000.0f) {
    } else {
        t2 = FUN_0c073c80(((int)stk + 0));
        t6 = 0x2;
        if (t2 > 16000000.0f) {
            t6 = 0x1;
        }
    }
    if ((t6 == 0) && (t10 = (((struct o28_int *)0xC2ADFBC)->v), (int)t10 > (int)0x2A30)) {
        nlSubVector3op(((int)stk + 0), 0xC175930, 0xC10C724);
        *(float *)(((int)stk + 4)) = 0.0f;
        t12 = FUN_0c073c80(((int)stk + 0));
        if (t12 > 36000000.0f) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC2ADFB8) = *(struct mv3 *)(0xC10C724); }
            (((struct o8_uint *)0xC2ADFBC)->v) = 0x0;
            (((struct oC_uint *)0xC2ADFBC)->v) = (*(int *)0xC10C730);
            (((struct o10_uint *)0xC2ADFBC)->v) = 0x0;
            { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC2ADFD0) = *(struct mv3 *)(0xC10C734); }
            (((struct o20_float *)0xC2ADFBC)->v) = 0.0f;
            (((struct o24_float *)0xC2ADFBC)->v) = 0.0f;
            (((struct o28_uint *)0xC2ADFBC)->v) = 0x0;
        }
    }
    t25 = (((struct o28_int *)0xC2ADFBC)->v);
    if (((int)t25 > (int)0xE10) && ((int)t25 < (int)0xF3C)) {
        (((struct o14_float *)0xC2ADFBC)->v) = (((((struct o14_float *)0xC2ADFBC)->v)) - 0.00200000009f);
    }
    t31 = (((struct o28_int *)0xC2ADFBC)->v);
    if (((int)t31 > (int)0xE4C) && ((int)t31 < (int)0x1068)) {
        (((struct o1C_float *)0xC2ADFBC)->v) = (((((struct o1C_float *)0xC2ADFBC)->v)) + 0.00100000005f);
    }
    t37 = (((struct o28_int *)0xC2ADFBC)->v);
    if (((int)t37 > (int)0xE88) && ((int)t37 < (int)0xF00)) {
        (((struct o20_float *)0xC2ADFBC)->v) = (((((struct o20_float *)0xC2ADFBC)->v)) - 0.0799999982f);
    }
    t43 = (((struct o28_int *)0xC2ADFBC)->v);
    if (((int)t43 > (int)0xF00) && ((int)t43 < (int)0x1194)) {
        (((struct o20_float *)0xC2ADFBC)->v) = (((((struct o20_float *)0xC2ADFBC)->v)) - 0.129999995f);
    }
    t48 = (((struct o28_int *)0xC2ADFBC)->v);
    if (((int)t48 > (int)0x1194) && ((int)t48 < (int)0x12C0)) {
        (((struct o1C_float *)0xC2ADFBC)->v) = (((((struct o1C_float *)0xC2ADFBC)->v)) + 0.00400000019f);
    }
    if ((int)((((struct o28_int *)0xC2ADFBC)->v)) > (int)0x12C0) {
        (((struct o1C_float *)0xC2ADFBC)->v) = (((((struct o1C_float *)0xC2ADFBC)->v)) + 0.00899999961f);
    }
    t61 = (((struct o28_int *)0xC2ADFBC)->v);
    if (((int)t61 > (int)0x189C) && ((int)t61 < (int)0x1C20)) {
        (((struct o20_float *)0xC2ADFBC)->v) = (((((struct o20_float *)0xC2ADFBC)->v)) + 0.129999995f);
    }
    t66 = (((struct o28_int *)0xC2ADFBC)->v);
    if (((int)t66 > (int)0x1E00) && ((int)t66 < (int)0x21FC)) {
        (((struct o20_float *)0xC2ADFBC)->v) = (((((struct o20_float *)0xC2ADFBC)->v)) - 0.129999995f);
    }
    (((struct o20_float *)0xC2ADFBC)->v) = (((((struct o20_float *)0xC2ADFBC)->v)) * 0.99000001f);
    FUN_0c073c40(0xC2ADFD0, 0xC2ADFD0, 0.99000001f);
    (((struct o24_float *)0xC2ADFBC)->v) = (FUN_0c073c60(0xC2ADFD0));
    (((struct oC_uint *)0xC2ADFBC)->v) = (int)((float)((((struct oC_int *)0xC2ADFBC)->v)) + ((((struct o20_float *)0xC2ADFBC)->v)));
    FUN_0c073360();
    nlRotateAY(((((struct oC_int *)0xC2ADFBC)->v)));
    FUN_0c072230(0xC2ADFD0, ((int)stk + 0));
    nlAddVector(0xC2ADFB8, ((int)stk + 0));
    nlPopMatrix(0x1);
    t84 = FUN_0c072140((int)(((float)((int)((int)((((struct o0_int *)0xC2ADEB4)->v)) % (int)0x1F4)) / 500.0f) * 65535.0f));
    (((struct o8_uint *)0xC2ADFBC)->v) = (int)(t84 * 32.0f);
    t87 = FUN_0c072140((int)(((float)((int)((int)(((((struct o0_int *)0xC2ADEB4)->v)) + 0x57) % (int)0x208)) / 520.0f) * 65535.0f));
    (((struct o10_uint *)0xC2ADFBC)->v) = (int)(t87 * 96.0f);
    t90 = FUN_0c072140((int)(((float)((int)((int)(((((struct o0_int *)0xC2ADEB4)->v)) + 0x36) % (int)0x1FE)) / 510.0f) * 65535.0f));
    u91 = -40.0f;
    u91 = u91 + 1.0f * t90;
    (((struct o0_float *)0xC2ADFBC)->v) = u91;
    (((struct o28_uint *)0xC2ADFBC)->v) = (((((struct o28_int *)0xC2ADFBC)->v)) + 0x1);
    if ((int)t6 > 0) {
        t94 = (((struct o10_int *)0xC2ADEB4)->v);
        if ((int)t94 >= (int)0x4F) {
            if ((int)t94 > (int)0x63) {
                if (((int)t94 >= (int)0xD0) && ((int)t94 <= (int)0xD6)) {
                    nlPushMatrix(0x0);
                    FUN_0c073a60(0xC2ADFB8);
                    nlRotateAY(((((struct oC_int *)0xC2ADFBC)->v)));
                    nlRotateAX(((((struct o8_int *)0xC2ADFBC)->v)));
                    nlRotateAZ(((((struct o10_int *)0xC2ADFBC)->v)));
                    nlObjPutUseViewMatrix(0xC3A3510);
                    nlPopMatrix(0x1);
                    t105 = (((struct o28_int *)0xC2ADFBC)->v);
                    if ((int)t105 > (int)0x708) {
                        if (((int)((int)t105 % (int)0x3E8)) == 0) {
                            FUN_0c058ca6(0x508A9, 0x0);
                        }
                    }
                }
            } else {
                nlPushMatrix(0x0);
                FUN_0c073a60(0xC2ADFB8);
                nlRotateAY(((((struct oC_int *)0xC2ADFBC)->v)));
                nlRotateAX(((((struct o8_int *)0xC2ADFBC)->v)));
                nlRotateAZ(((((struct o10_int *)0xC2ADFBC)->v)));
                nlObjPutUseViewMatrix(0xC3A3510);
                nlPopMatrix(0x1);
                t134 = (((struct o28_int *)0xC2ADFBC)->v);
                if ((int)t134 > (int)0x708) {
                    if (((int)((int)t134 % (int)0x3E8)) == 0) {
                        FUN_0c058ca6(0x508A9, 0x0);
                    }
                }
            }
        } else {
            if (((int)t94 >= (int)0xD0) && ((int)t94 <= (int)0xD6)) {
                nlPushMatrix(0x0);
                FUN_0c073a60(0xC2ADFB8);
                nlRotateAY(((((struct oC_int *)0xC2ADFBC)->v)));
                nlRotateAX(((((struct o8_int *)0xC2ADFBC)->v)));
                nlRotateAZ(((((struct o10_int *)0xC2ADFBC)->v)));
                nlObjPutUseViewMatrix(0xC3A3510);
                nlPopMatrix(0x1);
                t164 = (((struct o28_int *)0xC2ADFBC)->v);
                if ((int)t164 > (int)0x708) {
                    if (((int)((int)t164 % (int)0x3E8)) == 0) {
                        FUN_0c058ca6(0x508A9, 0x0);
                    }
                }
            }
        }
    }
    if (((((struct o2C_int *)0xC2ADFBC)->v)) == 0) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC2ADFB8) = *(struct mv3 *)(0xC10C724); }
        (((struct o8_uint *)0xC2ADFBC)->v) = 0x0;
        (((struct oC_uint *)0xC2ADFBC)->v) = (*(int *)0xC10C730);
        (((struct o10_uint *)0xC2ADFBC)->v) = 0x0;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC2ADFD0) = *(struct mv3 *)(0xC10C734); }
        (((struct o20_float *)0xC2ADFBC)->v) = 0.0f;
        (((struct o24_float *)0xC2ADFBC)->v) = 0.0f;
        (((struct o28_uint *)0xC2ADFBC)->v) = 0x0;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC2ADFEC) = *(struct mv3 *)(0xC2ADFB8); }
        (((struct o0_uint *)0xC2AE014)->v) = 0xC2AE01C;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC2ADFF8) = *(struct mv3 *)(0xC10C734); }
        GetRotVec4Ang(0xC2AE01C, ((((struct o8_int *)0xC2ADFBC)->v)), ((((struct oC_int *)0xC2ADFBC)->v)), ((((struct o10_int *)0xC2ADFBC)->v)));
        (((struct o4_uint *)0xC2AE014)->v) = 0x0;
        SetColliObj(0xC2ADFEC, 0x13);
        (((struct o2C_uint *)0xC2ADFBC)->v) = 0x1;
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC2ADFEC) = *(struct mv3 *)(0xC2ADFB8); }
    (((struct o0_uint *)0xC2AE014)->v) = 0xC2AE01C;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC2ADFF8) = *(struct mv3 *)(0xC10C734); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC2AE034) = *(struct mv3 *)(0xC10C734); }
    return (GetRotVec4Ang(0xC2AE01C, ((((struct o8_int *)0xC2ADFBC)->v)), ((((struct oC_int *)0xC2ADFBC)->v)), ((((struct o10_int *)0xC2ADFBC)->v))));
}

int FUN_0c068794(int a4)
{
    int stk[7];
    register int t2;
    register float u14;
    register float u21;
    register float u43;
    register float u50;
    register int t57;
    register int t60;
    register int t63;
    register int t72;
    register float u123;
    register float u124;
    register float u125;
    register float u126;
    register float u129;
    register float u131;
    register float u132;
    register float u133;
    register float u134;
    register float u135;
    register float u136;
    register float u161;
    register float u168;
    register float u189;
    register int t192;
    register int t209;
    register float u146;
    register float u148;
    float s1;

    if ((*(int *)0xC2AC2F0) == 1) {
        t209 = (((int (*)(float, float))(FUN_0c0503f0))(0.0f, 0.0f));
    } else {
        t2 = (((struct o0_int *)0xC2BA504)->v);
        if (t2 != 0) {
            if (t2 != 1) {
                if (t2 != 2) {
                    if (t2 == 3) {
                        FUN_0c073360();
                        nlMakeModelViewProjectMatrix();
                        nlProjectScreen((a4 + 0x28), (((int)stk + 0) + 0x14));
                        nlPopMatrix(0x1);
                        *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) + 28.0f);
                        *(float *)(((int)stk + 24)) = ((*(float *)(((int)stk + 24))) + -28.0f);
                        u14 = ((((struct o10_float *)0xC2BA504)->v));
                        u14 = u14 + 0.180000007f * (((((((struct o14_float *)(((int)stk + 0)))->v)) - ((((struct o8_float *)0xC2BA504)->v))) - ((((struct o10_float *)0xC2BA504)->v))));
                        (((struct o10_float *)0xC2BA504)->v) = u14;
                        (((struct o8_float *)0xC2BA504)->v) = (((((struct o8_float *)0xC2BA504)->v)) + ((((struct o10_float *)0xC2BA504)->v)));
                        u21 = ((((struct oC_float *)0xC2BA504)->v));
                        u21 = u21 + 0.25f * ((((((struct o18_float *)(((int)stk + 0)))->v)) - ((((struct oC_float *)0xC2BA504)->v))));
                        (((struct oC_float *)0xC2BA504)->v) = u21;
                        FUN_0c0503e6(((((struct o8_float *)0xC2BA504)->v)), u21);
                        t209 = 0x44;
                        if ((int)((((struct o0_int *)0xC1ECCEC)->v)) > (int)((((struct o8_int *)0xC1ECCEC)->v))) {
                        } else {
                            t209 = FUN_0c0503fa(1.0f, 0.330000013f, 0.0f);
                            (((struct o0_uint *)0xC2BA504)->v) = (((((struct o0_int *)0xC2BA504)->v)) + 0x1);
                        }
                    } else {
                        if (t2 == 4) {
                            FUN_0c073360();
                            nlMakeModelViewProjectMatrix();
                            nlProjectScreen((a4 + 0x28), (((int)stk + 0) + 0x14));
                            nlPopMatrix(0x1);
                            *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) + 28.0f);
                            *(float *)(((int)stk + 24)) = ((*(float *)(((int)stk + 24))) + -28.0f);
                            u43 = ((((struct o10_float *)0xC2BA504)->v));
                            u43 = u43 + 0.180000007f * (((((((struct o14_float *)(((int)stk + 0)))->v)) - ((((struct o8_float *)0xC2BA504)->v))) - ((((struct o10_float *)0xC2BA504)->v))));
                            (((struct o10_float *)0xC2BA504)->v) = u43;
                            (((struct o8_float *)0xC2BA504)->v) = (((((struct o8_float *)0xC2BA504)->v)) + ((((struct o10_float *)0xC2BA504)->v)));
                            u50 = ((((struct oC_float *)0xC2BA504)->v));
                            u50 = u50 + 0.25f * ((((((struct o18_float *)(((int)stk + 0)))->v)) - ((((struct oC_float *)0xC2BA504)->v))));
                            (((struct oC_float *)0xC2BA504)->v) = u50;
                            FUN_0c0503e6(((((struct o8_float *)0xC2BA504)->v)), u50);
                            if ((int)((((struct o0_int *)0xC1ECCEC)->v)) <= 0) {
                                (((struct o0_uint *)0xC2BA504)->v) = (((((struct o0_int *)0xC2BA504)->v)) + 0x1);
                            }
                            t57 = (((struct o0_int *)0xC1ECCEC)->v);
                            if ((int)t57 < (int)0xB4) {
                                { struct mv5 { int w[5]; }; *(struct mv5 *)(((int)stk + 0)) = *(struct mv5 *)(0xC1102D0); }
                                t60 = (int)((int)((int)((int)((((struct o0_int *)0xC1ECCEC)->v)) % (int)0x1E)) % (int)0x5);
                                (((struct o18_float *)0xC2BA504)->v) = ((*(float *)((((t60 << 2) + ((int)stk + 0)) + 0x0))) + 0.5f);
                                (((struct o1C_float *)0xC2BA504)->v) = ((*(float *)((((t60 << 2) + ((int)stk + 0)) + 0x0))) + 0.5f);
                            } else {
                                t63 = (int)((int)t57 % (int)0x3C);
                                if ((int)t63 < (int)0x1E) {
                                    (((struct o18_float *)0xC2BA504)->v) = (((((struct o18_float *)0xC2BA504)->v)) + 0.00999999978f);
                                    (((struct o1C_float *)0xC2BA504)->v) = (((((struct o1C_float *)0xC2BA504)->v)) + 0.00999999978f);
                                } else {
                                    if ((int)t63 < (int)0x2D) {
                                        (((struct o18_float *)0xC2BA504)->v) = (((((struct o18_float *)0xC2BA504)->v)) - (((((((struct o18_float *)0xC2BA504)->v)) + -0.5f) * 0.00999999978f)));
                                        (((struct o1C_float *)0xC2BA504)->v) = (((((struct o1C_float *)0xC2BA504)->v)) - (((((((struct o1C_float *)0xC2BA504)->v)) + -0.5f) * 0.00999999978f)));
                                    } else {
                                        { struct mv5 { int w[5]; }; *(struct mv5 *)(((int)stk + 0)) = *(struct mv5 *)(0xC1102E4); }
                                        t72 = (int)((int)t63 % (int)0x5);
                                        (((struct o18_float *)0xC2BA504)->v) = ((*(float *)((((t72 << 2) + ((int)stk + 0)) + 0x0))) + 0.5f);
                                        (((struct o1C_float *)0xC2BA504)->v) = ((*(float *)((((t72 << 2) + ((int)stk + 0)) + 0x0))) + 0.5f);
                                    }
                                }
                            }
                            t209 = (((int (*)(Stk5, float, float))(FUN_0c0503f0))(*(Stk5 *)(((int)stk + 0)), ((((struct o18_float *)0xC2BA504)->v)), ((((struct o1C_float *)0xC2BA504)->v))));
                        } else {
                            t209 = t2;
                        }
                    }
                } else {
                    FUN_0c073360();
                    nlMakeModelViewProjectMatrix();
                    nlProjectScreen((a4 + 0x28), (((int)stk + 0) + 0x14));
                    nlPopMatrix(0x1);
                    *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) + 28.0f);
                    *(float *)(((int)stk + 24)) = ((*(float *)(((int)stk + 24))) + -28.0f);
                    u123 = (((struct o8_float *)0xC2BA504)->v);
                    u124 = *(float *)(((int)stk + 20));
                    u125 = (((struct oC_float *)0xC2BA504)->v);
                    u126 = *(float *)(((int)stk + 24));
                    u129 = ((u126 - u125) * (u126 - u125));
                    u129 = u129 + ((u124 - u123)) * ((u124 - u123));
                    s1 = _builtin_sqrtf(u129);
                    if (5.0f > s1) {
                        (((struct o14_float *)0xC2BA504)->v) = 1.0f;
                        (((struct o10_float *)0xC2BA504)->v) = 1.0f;
                        (((struct o0_uint *)0xC2BA504)->v) = (((((struct o0_int *)0xC2BA504)->v)) + 0x1);
                        u146 = (u124 - u123);
                        u148 = s1;
                    } else {
                        u131 = (((struct o20_float *)0xC2BA504)->v);
                        u132 = (((struct o8_float *)0xC2BA504)->v);
                        u133 = ((u124 - u123) / s1);
                        u134 = (u131 * ((u126 - u125) / s1));
                        u134 = u134 + 0.899999976f * u133;
                        (((struct o8_float *)0xC2BA504)->v) = (u132 + u134);
                        u135 = (((struct o20_float *)0xC2BA504)->v);
                        u136 = (((u126 - u125) / s1) * 0.899999976f);
                        (((struct oC_float *)0xC2BA504)->v) = (((((struct oC_float *)0xC2BA504)->v)) + (u136 - ((u135 * ((u124 - u123) / s1)))));
                        (((struct o20_float *)0xC2BA504)->v) = (((((struct o20_float *)0xC2BA504)->v)) * 0.939999998f);
                        u146 = ((u124 - u123) / s1);
                        u148 = 0.899999976f;
                    }
                    FUN_0c073360();
                    nlMakeModelViewProjectMatrix();
                    nlProjectScreen((a4 + 0x28), (((int)stk + 0) + 0x14));
                    nlPopMatrix(0x1);
                    *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) + 28.0f);
                    *(float *)(((int)stk + 24)) = ((*(float *)(((int)stk + 24))) + -28.0f);
                    u161 = ((((struct o10_float *)0xC2BA504)->v));
                    u161 = u161 + 0.180000007f * (((((((struct o14_float *)(((int)stk + 0)))->v)) - ((((struct o8_float *)0xC2BA504)->v))) - ((((struct o10_float *)0xC2BA504)->v))));
                    (((struct o10_float *)0xC2BA504)->v) = u161;
                    (((struct o8_float *)0xC2BA504)->v) = (((((struct o8_float *)0xC2BA504)->v)) + ((((struct o10_float *)0xC2BA504)->v)));
                    u168 = ((((struct oC_float *)0xC2BA504)->v));
                    u168 = u168 + 0.25f * ((((((struct o18_float *)(((int)stk + 0)))->v)) - ((((struct oC_float *)0xC2BA504)->v))));
                    (((struct oC_float *)0xC2BA504)->v) = u168;
                    FUN_0c0503e6(((((struct o8_float *)0xC2BA504)->v)), u168);
                    t209 = 0x44;
                    if ((int)((((struct o0_int *)0xC1ECCEC)->v)) > (int)((((struct o8_int *)0xC1ECCEC)->v))) {
                    } else {
                        t209 = FUN_0c0503fa(1.0f, 0.330000013f, 0.0f);
                        (((struct o0_uint *)0xC2BA504)->v) = (((((struct o0_int *)0xC2BA504)->v)) + 0x1);
                    }
                }
            } else {
                FUN_0c073360();
                nlMakeModelViewProjectMatrix();
                nlProjectScreen((a4 + 0x34), (((int)stk + 0) + 0x14));
                nlPopMatrix(0x1);
                (((struct o8_float *)0xC2BA504)->v) = (*(float *)(((int)stk + 20)));
                u189 = *(float *)(((int)stk + 24));
                (((struct oC_float *)0xC2BA504)->v) = u189;
                FUN_0c0503e6(((((struct o8_float *)0xC2BA504)->v)), u189);
                t192 = *(int *)0xC1EC720;
                t209 = t192;
                if (t192 == 2) {
                } else {
                    t209 = (FUN_0c0503b4(0xC1ECCEC));
                }
                (((struct o0_uint *)0xC2BA504)->v) = (((((struct o0_int *)0xC2BA504)->v)) + 0x1);
            }
        } else {
            (((struct o0_uint *)0xC2BA504)->v) = (((((struct o0_int *)0xC2BA504)->v)) + 0x1);
            t209 = t2;
        }
    }
    return t209;
}
