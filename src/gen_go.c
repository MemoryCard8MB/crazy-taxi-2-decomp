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
void FUN_0c02be68(int, float);
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
void FUN_0c02f6e8(int a4);
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

void FUN_0c02f6e8(int a4)
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
    return;
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


