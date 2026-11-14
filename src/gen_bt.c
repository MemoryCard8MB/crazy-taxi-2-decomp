/* Straight-line functions with calls and guards (batch gen_bt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o104_float { char p[0x104]; float v; };
struct o110_uint { char p[0x110]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_float { char p[0x20]; float v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o28_int { char p[0x28]; int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2C_int { char p[0x2C]; int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o30_float { char p[0x30]; float v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o34_float { char p[0x34]; float v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o38_float { char p[0x38]; float v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o3C_int { char p[0x3C]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o48_int { char p[0x48]; int v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o50_int { char p[0x50]; int v; };
struct o50_uchar { char p[0x50]; unsigned char v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o54_uint { char p[0x54]; unsigned int v; };
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
struct o90_float { char p[0x90]; float v; };
struct oA4_uchar { char p[0xA4]; unsigned char v; };
struct oA6_short { char p[0xA6]; short v; };
struct oA6_ushort { char p[0xA6]; unsigned short v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oC8_float { char p[0xC8]; float v; };
struct oD4_int { char p[0xD4]; int v; };
struct oD4_uint { char p[0xD4]; unsigned int v; };
int ADXF_OpenAfs(int, int);
int ETD_EntryRecvFunc(int, int);
int FUN_0c018b1c(int);
int FUN_0c018b22(int, int);
int FUN_0c018c2a(float, float);
int FUN_0c018c8a(float, float);
int FUN_0c026ce6(void);
int FUN_0c027f28(int);
int FUN_0c02803a(int, int, int, int);
int FUN_0c0297f4(int, int, float);
int FUN_0c029b12(int, float);
int FUN_0c03386a(int);
int FUN_0c0339c0(int);
int FUN_0c034320(int, int);
int FUN_0c0343b8(int, int);
int FUN_0c0345ec(int, int, int, float, float, float);
int FUN_0c035a20(int);
int FUN_0c035a5e(int, int, float, float);
int FUN_0c03f154(int);
int FUN_0c03f9d0(int, int);
int FUN_0c041a44(int, int);
int FUN_0c0435e2(int, int);
int FUN_0c0438c0(int);
int FUN_0c046466(void);
int FUN_0c058ca6(int, int);
int FUN_0c058f64(int, int, int, int);
int FUN_0c059e6a(int, int, int, int);
int FUN_0c06e990(int);
int FUN_0c06f550(int, int, int);
int FUN_0c071920(int);
int FUN_0c072230(int, int);
int FUN_0c072290(int, int);
int FUN_0c073360(void);
float FUN_0c073b40(int, int);
int FUN_0c073c40(int, int, float);
int FUN_0c076230(float, float, float);
int FUN_0c07ada0(int);
int FUN_0c07ff00(void);
int FUN_0c07ffac(int);
int FUN_0c14f7a8(int, int, int, int);
int FUN_0c14f8ac(int);
int FUN_0c14ff0c(int);
int FUN_0c1500d2(int, int, int);
int FUN_0c150460(int);
int InsertRankRecord(int, int, int, int);
int Voice_ShutUp(int);
int camSetTarget(int, int);
int kmiAddSysConfigFlag(int);
int kmiAllocSysConfig(int);
int kmiBGPlaneCountWords(int);
int kmiBGPlaneSetPCW(int, int, int);
int kmiGetSysConfigFlag(void);
int kmiSetSysConfigFlag(int);
int kmiWriteRegister(int, int);
int memcpy(int, int, int, int);
int memset(int, int, int);
int nlAddVector(int, int);
int nlCloseEvent(int);
float nlLength(int, int);
int nlLocate(int, int);
int nlPopMatrix(int);
int nlPrintf(int, ...);
int nlPushMatrix(int);
int nlRotateAY(int);
int nlSetEventNext(int, int, int);
int nlSubVector3op(int, int, int);
int pfSize(float, float);
int pfTextCenterPut(int, int, int);
int set_event(int, int);
int syRtcGetDate(int);
int texLoadIndexed(int, int);
int FUN_0c03ea54(int a4, int a5, int a6, int a7);
int FUN_0c043ccc(int a4, int a5, int a6);
int FUN_0c038012(void);
int FUN_0c01f9ca(int a4);
float getNearCoursePoint(int a4, int a5, int a6, int a7, float f4);
int FUN_0c075740(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
int FUN_0c022de2(int a4, int a5, int a6);
int kmiProcessVertex_01(int a4);
int kmActivateFrameBuffer(int a4, int a5, int a6, int a7);
int FUN_0c045bac(int a4, int a5);
int FUN_0c0529ec(void);
int FUN_0c06d1c4(int a4);
int FUN_0c03ed46(int a4);
int FUN_0c05a15c(int a4, int a5, int a6, int a7);
int FUN_0c029962(int a4, int a5, int a6);

int FUN_0c03ea54(int a4, int a5, int a6, int a7)
{
    int stk[31];

    register int R1;
    register int R2;
    register int R3;
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
    v0_0 = a7;
    R1000 = 0x0;
    v0_1 = (0xC28DD0C);
    v0_2 = (0xC2A4FE0);
    v0_3 = (0x0);
    v0_4 = (0xC0800B0);
    v0_4 = (0x78);
    L_C03EA74:;
    v0_5 = R1000;
    memset(((v0_2 + 0x8) + (v0_5 * 0x78)), 0xFFFFFFFF, 0x78);
    v0_6 = ((v0_5 * 0x78));
    v0_5 = (0x0);
    L_C03EA8A:;
    FUN_0c07ff00();
    if (((*(int *)(((int)stk + 76))) == -1)) goto L_C03EABE;
    *(unsigned char *)(((int)stk + 85)) = v0_3;
    InsertRankRecord(0x1, (((int)stk + 0) + 0x4C), ((v0_2 + 0x8) + v0_6), 0xA);
    v0_7 = (unsigned int)(v0_5 + 0xC) < (unsigned int)v0_4;
    v0_5 = ((v0_5 + 0xC));
    if (v0_7) goto L_C03EA8A;
    L_C03EABE:;
    v0_5 = R1000;
    R1000 = (v0_5 + 0x1);
    if (((int)(v0_5 + 0x1) < (int)0x4)) goto L_C03EA74;
    R1000 = v0_3;
    L_C03EACC:;
    v0_5 = R1000;
    memset(((0x1E8 + v0_2) + (v0_5 * 0x78)), 0xFFFFFFFF, 0x78);
    v0_6 = ((v0_5 * 0x78));
    v0_5 = (0x0);
    L_C03EAE2:;
    FUN_0c07ff00();
    if (((*(int *)(((int)stk + 76))) == -1)) goto L_C03EB16;
    *(unsigned char *)(((int)stk + 85)) = v0_3;
    InsertRankRecord(0x1, (((int)stk + 0) + 0x4C), ((0x1E8 + v0_2) + v0_6), 0xA);
    v0_7 = (unsigned int)(v0_5 + 0xC) < (unsigned int)v0_4;
    v0_5 = ((v0_5 + 0xC));
    if (v0_7) goto L_C03EAE2;
    L_C03EB16:;
    v0_5 = R1000;
    R1000 = (v0_5 + 0x1);
    if (((int)(v0_5 + 0x1) < (int)0x4)) goto L_C03EACC;
    R1000 = v0_3;
    R1004 = ((((int)stk + 0) + 0x10) + 0x24);
    R1012 = (((int)stk + 0) + 0x10);
    v0_5 = ((((int)stk + 0) + 0x10));
    L_C03EB32:;
    v0_4 = R1000;
    memset(((0x3C8 + v0_2) + (v0_4 * 0x3C)), 0xFFFFFFFF, 0x3C);
    memset(v0_5, 0xFFFFFFFF, 0x3C);
    v0_8 = R1000;
    v0_7 = ((R1012));
    v0_6 = ((0xC09C834 + (((v0_8 << 1) + v0_8) << 2)));
    v0_8 = ((((v0_8 << 1) + v0_8) << 2));
    v0_4 = ((v0_4 * 0x3C));
    L_C03EB82:;
    if (((unsigned int)v0_7 < (unsigned int)(R1004))) goto L_C03EB7C;
    R1008 = (*(int *)((v0_8 + 0xC09C8FC)));
    v0_6 = (v0_3);
    L_C03EB90:;
    FUN_0c07ff00();
    if (((*(int *)(((int)stk + 76))) == -1)) goto L_C03EBC2;
    *(unsigned char *)(((int)stk + 85)) = v0_3;
    InsertRankRecord((R1008), (((int)stk + 0) + 0x4C), v0_5, 0x5);
    v0_7 = (unsigned int)(v0_6 + 0xC) < (unsigned int)0x3C;
    v0_6 = ((v0_6 + 0xC));
    if (v0_7) goto L_C03EB90;
    L_C03EBC2:;
    v0_9 = ((memcpy(((0x3C8 + v0_2) + v0_4), v0_5, 0x3C, v0_0)));
    v0_8 = (0x0);
    L_C03EC0E:;
    if (!(((unsigned int)v0_8 < (unsigned int)0x3C))) goto L_C03EC14;
    *(unsigned char *)(((((0x1464 + v0_1) + v0_4) + v0_8) + 0x9)) = 0xFFFFFFFF;
    v0_7 = *(int *)(((((0x1464 + v0_1) + v0_4) + v0_8) + 0x0));
    v0_9 = (v0_7);
    v0_6 = ((((0x1464 + v0_1) + v0_4) + v0_8));
    if ((v0_7 == -1)) goto L_C03EC14;
    v0_7 = (v0_3);
    goto L_C03EBE8;
    L_C03EC14:;
    v0_4 = R1000;
    R1000 = (v0_4 + 0x1);
    if (((int)(v0_4 + 0x1) < (int)0x10)) goto L_C03EB32;
    return v0_9;
    L_C03EBE8:;
    if (((*(int *)((v0_6 + 0x0))) != (*(int *)((((((v0_7 << 1) + v0_7) << 2) + v0_5) + 0x0))))) goto L_C03EC04;
    *(unsigned char *)((v0_6 + 0x9)) = (v0_7 + 0x1);
    v0_9 = ((v0_7 + 0x1));
    L_C03EC0C:;
    v0_8 = ((v0_8 + 0xC));
    goto L_C03EC0E;
    L_C03EC04:;
    v0_10 = (int)(v0_7 + 0x1) < (int)0x5;
    v0_7 = ((v0_7 + 0x1));
    if (v0_10) goto L_C03EBE8;
    goto L_C03EC0C;
    L_C03EB7C:;
    *(unsigned int *)((v0_7 + 0x0)) = (*(int *)((v0_6 + 0x0)));
    v0_7 = ((v0_7 + 0xC));
    v0_6 = ((v0_6 + 0x4));
    goto L_C03EB82;
}

int FUN_0c043ccc(int a4, int a5, int a6)
{
    int stk[6];
    register int t0;
    register int t53;
    register int t1;
    register int t6;
    register int t25;
    int t35;
    register float u38;
    int t26;
    register int t37;

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 0)) = a6;
    t0 = set_event(0x12C, 0xC0443AC);
    t53 = t0;
    if (t0 != 0) {
        t1 = *(int *)0xC2A59C0;
        *(unsigned int *)0xC2A59C0 = (t1 + 0x1);
        (((struct o74_uint *)(t0))->v) = ((t1 + 0x1) - 1);
        *(unsigned int *)0xC2AB7EC = ((*(int *)0xC2AB7EC) + 0x1);
        (((struct o78_uint *)(t0))->v) = (*(int *)(((int)stk + 8)));
        (((struct o80_uint *)(t0))->v) = (*(int *)(((int)stk + 4)));
        if ((*(int *)(((int)stk + 0))) == 0) {
            t6 = (((struct o80_int *)(t0))->v);
            *(volatile int *)((((((t6 << 1) + t6) << 2) + (*(int *)0xC2ADA7C)) + 0x0));
            FUN_0c07ff00();
        } else {
            *(volatile int *)(((int)stk + 0));
            FUN_0c07ff00();
        }
        FUN_0c0438c0(t0);
        (((struct o84_uint *)(t0))->v) = (((((struct o84_int *)(t0))->v)) | 0x10);
        FUN_0c07ff00();
        *(float *)(((int)stk + 12)) = -50.0f;
        FUN_0c073360();
        nlRotateAY((unsigned short)((((struct oA6_short *)(t0))->v)));
        FUN_0c072230((((int)stk + 0) + 0xC), (((int)stk + 0) + 0xC));
        nlAddVector((0x8C + t0), (((int)stk + 0) + 0xC));
        nlAddVector((0xE0 + t0), (((int)stk + 0) + 0xC));
        nlPopMatrix(0x1);
        t25 = FUN_0c046466();
        if (((t25 & 3) != 0) && (t26 = (((struct o78_int *)(t0))->v), (int)t26 < (int)0xC)) {
            (((struct oA6_ushort *)(t0))->v) = (((((struct oA6_short *)(t0))->v)) + 0x2000);
        } else {
            (((struct o84_uint *)(t0))->v) = (((((struct o84_int *)(t0))->v)) | 0xC00);
        }
        (((struct oC8_float *)(t0))->v) = ((((struct o0_float *)0xC043EDC)->v));
        t35 = *(int *)(((FUN_0c029b12((0x8C + t0), ((((struct o4_float *)0xC043EDC)->v)))) + 0x1C));
        if ((t35 != -1) && (t35 != 12)) {
            FUN_0c07ff00();
            (((struct o110_uint *)(t0))->v) = 0xA;
            u38 = (((struct o18_float *)(t37))->v);
            (((struct o104_float *)(t0))->v) = u38;
            (((struct o90_float *)(t0))->v) = u38;
            FUN_0c07ff00();
            FUN_0c041a44(t0, (((int)stk + 0) + 0xC));
            (((struct oA4_uchar *)(t0))->v) = (*(signed char *)(((0x108 + t0) + 0x0)));
            *(unsigned char *)(((0xA4 + t0) + 0x1)) = (*(signed char *)(((0x108 + t0) + 0x1)));
            *(unsigned char *)(((0xA4 + t0) + 0x2)) = (*(signed char *)(((0x108 + t0) + 0x2)));
            *(unsigned char *)(((0xA4 + t0) + 0x3)) = (*(signed char *)(((0x108 + t0) + 0x3)));
            *(unsigned char *)(((0xA4 + t0) + 0x4)) = (*(signed char *)(((0x108 + t0) + 0x4)));
            *(unsigned char *)(((0xA4 + t0) + 0x5)) = (*(signed char *)(((0x108 + t0) + 0x5)));
            t53 = (FUN_0c0435e2(t0, ((((struct o84_int *)(t0))->v))));
        } else {
            t53 = nlCloseEvent(t0);
            *(unsigned int *)0xC2AB7EC = ((*(int *)0xC2AB7EC) - 1);
        }
    }
    return t53;
}

int FUN_0c038012(void)
{
    int stk[1];
    register int t0;
    register int t11;
    register int t15;
    register int t40;
    register int t41;
    register int t45;
    register int t46;
    register int t48;
    register float u49;
    register float u60;
    register int t61;
    register int t54;
    int R1000;

    R1000 = *(int *)((int)stk + 0);

    t0 = FUN_0c034320(0x1, 0x14);
    if (t0 == 1) {
        FUN_0c03386a(0x6);
        FUN_0c035a20(0x4);
    }
    if ((((((struct o0_int *)0xC2A46C8)->v)) & 4) != 0) {
        if (((((struct o1C_int *)0xC2A46C8)->v)) == 1) {
            (((struct o1C_uint *)0xC2A46C8)->v) = 0x2;
            (((struct o0_uint *)0xC2A46C8)->v) = (((((struct o0_int *)0xC2A46C8)->v)) | 0x9);
            t11 = (((struct o2C_int *)0xC2A4F80)->v);
            if ((int)t11 >= 0) {
                (((struct o28_uint *)0xC2A4F80)->v) = t11;
            }
            t15 = 0x6;
            if (((((struct o0_int *)0xC2A4F80)->v)) == 0) {
                t15 = 0x5;
            }
            FUN_0c0339c0(t15);
        } else {
            if (((*(int *)0xC2A4670) & 0x1) != 0) {
                (((struct o0_uint *)0xC2A46C8)->v) = (((((struct o0_int *)0xC2A46C8)->v)) | 0x9);
                FUN_0c03386a(0x4);
                FUN_0c0339c0(0x0);
            }
        }
    }
    t40 = FUN_0c0343b8(0x1, 0x14);
    if (t40 == 0) {
        t41 = FUN_0c035a5e(0x4, 0x0, 320.0f, 240.0f);
        if (t41 == 2) {
            FUN_0c0345ec(0x224, 0x2A, 0x0, 320.0f, 174.0f, (*(float *)0xC2A5858));
            R1000 = 0x0;
            t45 = 0x0;
            t46 = 0x0;
            for (;;) {
                if ((((int)0x1 << (int)t46) & ((((struct o20_int *)0xC2A4F80)->v))) != 0) {
                    t48 = R1000;
                    u49 = *(float *)0xC2A5858;
                    R1000 = (t48 + 0x1);
                    t45 = 0x34;
                    FUN_0c0345ec(t45, (t46 + 0x2B), 0x0, 320.0f, (float)((((t48 + 0x1) - 1) * 0x16) + 0xC4), u49);
                } else {
                    t54 = t45;
                }
                t46 = (t46 + 0x1);
                t45 = t54;
                if ((int)t46 >= (int)0x3) {
                    break;
                }
            }
            FUN_0c0345ec(0x224, 0x2E, 0x0, 320.0f, 262.0f, (*(float *)0xC2A5858));
            u60 = *(float *)0xC2A5858;
            t61 = 0x33;
            if (((((struct o10_int *)0xC2A46C8)->v)) == 0xC0B38AC) {
                t61 = 0x32;
            }
            return FUN_0c0345ec(0x224, t61, 0x0, 320.0f, 284.0f, u60);
        }
        return t41;
    }
    return FUN_0c035a5e(0x4, 0x1, 320.0f, 240.0f);
}

int FUN_0c01f9ca(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    *(unsigned int *)0xC123E5C = 0x0;
    t0 = *(int *)0xC175C84;
    if (a4 == 0) {
        if (t0 == 1) {
            FUN_0c14f7a8(0x3, 0xC09AEA0, 0x0, 0xC2707F0);
            t1 = 0x0;
            for (;;) {
                t2 = FUN_0c14f8ac(0x3);
                if (t2 == 4) {
                    t1 = (t1 + 0x1);
                    if ((int)t1 > (int)0xA) {
                        *(unsigned int *)0xC1EC718 = ((*(int *)0xC1EC718) + 0x1);
                    }
                }
                if (t2 == 3) {
                    break;
                }
            }
        } else {
            FUN_0c14f7a8(0x3, 0xC09AEB0, 0x0, 0xC2707F0);
            t1 = 0x0;
            for (;;) {
                t2 = FUN_0c14f8ac(0x3);
                if (t2 == 4) {
                    t1 = (t1 + 0x1);
                    if ((int)t1 > (int)0xA) {
                        *(unsigned int *)0xC1EC718 = ((*(int *)0xC1EC718) + 0x1);
                    }
                }
                if (t2 != 3) continue;
                break;
            }
        }
    } else {
        if (t0 == 1) {
            FUN_0c14f7a8(0x3, 0xC09AEBC, 0x0, 0xC2707F0);
            t0 = 0x0;
            for (;;) {
                t1 = FUN_0c14f8ac(0x3);
                if (t1 == 4) {
                    t0 = (t0 + 0x1);
                    if ((int)t0 > (int)0xA) {
                        *(unsigned int *)0xC1EC718 = ((*(int *)0xC1EC718) + 0x1);
                    }
                }
                if (t1 != 3) continue;
                break;
            }
        } else {
            FUN_0c14f7a8(0x3, 0xC09AECC, 0x0, 0xC2707F0);
            t0 = 0x0;
            for (;;) {
                t1 = FUN_0c14f8ac(0x3);
                if (t1 == 4) {
                    t0 = (t0 + 0x1);
                    if ((int)t0 > (int)0xA) {
                        *(unsigned int *)0xC1EC718 = ((*(int *)0xC1EC718) + 0x1);
                    }
                }
                if (t1 == 3) {
                    break;
                }
            }
        }
    }
    for (;;) {
        t0 = ADXF_OpenAfs(0x3, 0x0);
        (((struct o0_uint *)0xC2708B4)->v) = t0;
        if (t0 != 0) {
            break;
        }
    }
    FUN_0c1500d2(t0, 0x10, 0xCE98000);
    for (;;) {
        t0 = FUN_0c150460(((((struct o0_int *)0xC2708B4)->v)));
        if (t0 == 3) {
            break;
        }
    }
    FUN_0c14ff0c(((((struct o0_int *)0xC2708B4)->v)));
    FUN_0c06e990(0x0);
    texLoadIndexed(0x6A, 0xCE98000);
    (((struct o0_uint *)0xC1ECD48)->v) = 0x0;
    (((struct o4_uint *)0xC1ECD48)->v) = 0x0;
    (((struct o8_uint *)0xC2708B4)->v) = 0x0;
    (((struct o4_uint *)0xC2708B4)->v) = 0x0;
    return 0xC1ECD4C;
}

float getNearCoursePoint(int a4, int a5, int a6, int a7, float f4)
{
    int stk[2];
    register int t1;
    register int t3;
    register int t4;
    register int t14;
    register float u23;
    register int t6;
    register int t7;
    register float u8;
    register float t10;
    register int t27;
    register int t28;
    register float u29;
    register float t32;
    register int t34;
    register int t50;
    register int t51;
    register float u52;
    register float t55;
    register int t57;
    register int t60;
    register int t61;
    register float u62;
    register float t65;
    register int t67;
    register int t82;
    register int t85;
    register float u86;
    register int t87;
    register float u91;
    register float t108;
    register int t109;
    register float u110;
    register float u114;
    register int t117;
    register float u118;
    register int t119;
    register float u123;
    register float u126;
    register int t130;
    register float u140;
    register int t94;
    register float u103;
    register int t70;
    register float u79;
    register int t37;
    register float u46;
    int R1000;
    int R1004;

    R1000 = *(int *)((int)stk + 0);
    R1004 = *(int *)((int)stk + 4);

    R1004 = a6;
    t1 = *(int *)0xC2ADA7C;
    t3 = *(int *)((((((a5 << 1) + a5) << 2) + t1) + 0x0));
    t4 = *(int *)(((*(int *)((((((a5 << 1) + a5) << 2) + t1) + 0x4))) + 0x0));
    if (a4 != 2) {
        if (a4 != 1) {
            if (a4 != 4) {
                if (a4 != 3) {
                    t14 = 0x0;
                    u23 = 3.40282347e+38f;
                    if ((int)t4 > 0) {
                        t6 = 0x0;
                        t7 = 0x0;
                        u8 = 3.40282347e+38f;
                        for (;;) {
                            t10 = nlLength(a7, ((((t6 << 1) + t6) << 2) + t3));
                            if (u8 > t10) {
                                t7 = t6;
                                u8 = t10;
                            }
                            t6 = (t6 + 0x1);
                            if ((int)t6 >= (int)t4) {
                                break;
                            }
                        }
                        t14 = t7;
                        u23 = u8;
                    }
                    t37 = t14;
                    u46 = u23;
                } else {
                    R1000 = 0x0;
                    t27 = (*(int *)(((R1004) + 0x0)));
                    t28 = 0x0;
                    u29 = 3.40282347e+38f;
                    for (;;) {
                        if ((int)t27 >= (int)t4) {
                            t27 = (t27 - t4);
                        }
                        t32 = nlLength(a7, ((((t27 << 1) + t27) << 2) + t3));
                        if (u29 > t32) {
                            t28 = t27;
                            u29 = t32;
                        }
                        t34 = R1000;
                        R1000 = (t34 + 0x1);
                        t27 = (t27 + 0x1);
                        if ((int)(t34 + 0x1) >= (int)0x7) {
                            break;
                        }
                    }
                    t37 = t28;
                    u46 = u29;
                }
                t70 = t37;
                u79 = u46;
            } else {
                R1000 = 0x0;
                t50 = (*(int *)(((R1004) + 0x0)));
                t51 = 0x0;
                u52 = 3.40282347e+38f;
                for (;;) {
                    if ((int)t50 < 0) {
                        t50 = (t50 + t4);
                    }
                    t55 = nlLength(a7, ((((t50 << 1) + t50) << 2) + t3));
                    if (u52 > t55) {
                        t51 = t50;
                        u52 = t55;
                    }
                    t57 = R1000;
                    R1000 = (t57 + 0x1);
                    t50 = (t50 - 1);
                    if ((int)(t57 + 0x1) >= (int)0x7) {
                        break;
                    }
                }
                R1000 = 0x0;
                t60 = (*(int *)(((R1004) + 0x0)));
                t61 = t51;
                u62 = u52;
                for (;;) {
                    if ((int)t60 >= (int)t4) {
                        t60 = (t60 - t4);
                    }
                    t65 = nlLength(a7, ((((t60 << 1) + t60) << 2) + t3));
                    if (u62 > t65) {
                        t61 = t60;
                        u62 = t65;
                    }
                    t67 = R1000;
                    R1000 = (t67 + 0x1);
                    t60 = (t60 + 0x1);
                    if ((int)(t67 + 0x1) >= (int)0x7) {
                        break;
                    }
                }
                t70 = t61;
                u79 = u62;
            }
            t94 = t70;
            u103 = u79;
        } else {
            t82 = *(int *)(((R1004) + 0x0));
            t85 = t82;
            u86 = (nlLength(a7, ((((t82 << 1) + t82) << 2) + t3)));
            for (;;) {
                t87 = t85;
                t85 = (t85 + 0x1);
                if ((int)t85 >= (int)t4) {
                    t85 = 0x0;
                }
                u91 = u86;
                u86 = (nlLength(a7, ((((t85 << 1) + t85) << 2) + t3)));
                if (!(u91 > u86)) {
                    break;
                }
            }
            t94 = t87;
            u103 = u91;
        }
        t130 = t94;
        u140 = u103;
    } else {
        t109 = *(int *)(((R1004) + 0x0));
        t108 = nlLength(a7, ((((t109 << 1) + t109) << 2) + t3));
        u110 = t108;
        for (;;) {
            R1000 = t109;
            t109 = (t109 - 1);
            if ((int)t109 < 0) {
                t109 = (t4 - 1);
            }
            u114 = u110;
            u110 = (nlLength(a7, ((((t109 << 1) + t109) << 2) + t3)));
            if (!(u114 > u110)) {
                break;
            }
        }
        t117 = (*(int *)(((R1004) + 0x0)));
        u118 = t108;
        for (;;) {
            t119 = t117;
            t117 = (t117 + 0x1);
            if ((int)t117 >= (int)t4) {
                t117 = 0x0;
            }
            u123 = u118;
            u118 = (nlLength(a7, ((((t117 << 1) + t117) << 2) + t3)));
            if (!(u123 > u118)) {
                break;
            }
        }
        t130 = t119;
        u126 = u123;
        if (u123 > u114) {
            t130 = (R1000);
            u126 = u114;
        }
        u140 = u126;
    }
    *(unsigned int *)(((R1004) + 0x0)) = t130;
    return u140;
}

int FUN_0c075740(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    register int t0;
    register int t1;

    if (a12 == 0) {
        (((struct o54_uint *)((a4 + 0x18)))->v) = a13;
        (((struct o50_uchar *)((a4 + 0x18)))->v) = ((*(signed char *)((((a4 + 0x18) + 0x50) + 0x0))) | 0x10);
        t0 = ((*(signed char *)((((a4 + 0x18) + 0x50) + 0x0))) & 0xF7);
    } else {
        (((struct o54_uint *)((a4 + 0x18)))->v) = ((int)((int)a13 / (int)0x3));
        (((struct o50_uchar *)((a4 + 0x18)))->v) = ((*(signed char *)((((a4 + 0x18) + 0x50) + 0x0))) & 0xEF);
        t0 = ((*(signed char *)((((a4 + 0x18) + 0x50) + 0x0))) | 0x8);
    }
    (((struct o50_uchar *)((a4 + 0x18)))->v) = t0;
    t0 = (((a13 << 2) << 2) << 1);
    if ((int)(((a13 << 2) << 2) << 1) < 0) {
        t0 = ((((a13 << 2) << 2) << 1) + 0x3);
    }
    *(unsigned int *)((((((t0 >> 1) >> 1) << 2) + ((a4 + 0x18) + 0x58)) + 0x0)) = 0x0;
    *(unsigned int *)(((((a4 + 0x18) + 0x58) + (((t0 >> 1) >> 1) << 2)) + 0x4)) = a13;
    (((struct o4C_uint *)((a4 + 0x18)))->v) = ((((a13 << 2) << 2) << 1) + 0x8);
    (((struct o50_uint *)((a4 + 0x18)))->v) = ((((((struct o50_int *)((a4 + 0x18)))->v)) & 0xFFFFFFBF) | ((unsigned int)((int)((unsigned int)a6 & 0x1)) << 6));
    (((struct o50_uint *)((a4 + 0x18)))->v) = ((((((struct o50_int *)((a4 + 0x18)))->v)) & 0xFFFFFFFC) | ((unsigned int)((int)((unsigned int)a5 & 0x3)) << 0));
    (((struct o28_float *)((a4 + 0x18)))->v) = f4;
    *(unsigned int *)(((a4 + 0x18) + 0x24)) = a7;
    (((struct o2C_float *)((a4 + 0x18)))->v) = f5;
    (((struct o30_float *)((a4 + 0x18)))->v) = f6;
    (((struct o34_float *)((a4 + 0x18)))->v) = f7;
    (((struct o38_float *)((a4 + 0x18)))->v) = f8;
    (((struct o40_float *)((a4 + 0x18)))->v) = f9;
    (((struct o44_float *)((a4 + 0x18)))->v) = f10;
    (((struct o48_float *)((a4 + 0x18)))->v) = f11;
    *(unsigned int *)(((a4 + 0x18) + 0x8)) = ((((*(int *)(((a4 + 0x18) + 0x8))) & 0x1FFFFFFF) | 0x20000000) & 0xE3FFFFFF);
    *(unsigned int *)(((a4 + 0x18) + 0x0)) = ((*(int *)(((a4 + 0x18) + 0x0))) & 0xF8FFFFFF);
    *(unsigned int *)(((a4 + 0x18) + 0x8)) = (((*(int *)(((a4 + 0x18) + 0x8))) & 0xFFEFFFFF) | 0x80000);
    if ((1.0f > f5) || (a8 != 0)) {
        *(unsigned int *)(((a4 + 0x18) + 0x0)) = ((*(int *)(((a4 + 0x18) + 0x0))) | 0x2000000);
        *(unsigned int *)(((a4 + 0x18) + 0x8)) = (((((*(int *)(((a4 + 0x18) + 0x8))) & 0x1FFFFFFF) | 0x80000000) | 0x14000000) | 0xC0);
    }
    if (1.0f > f5) {
        *(unsigned int *)(((a4 + 0x18) + 0x8)) = ((*(int *)(((a4 + 0x18) + 0x8))) | 0x100000);
    }
    if (a8 != 0) {
        *(unsigned int *)(((a4 + 0x18) + 0x8)) = ((*(int *)(((a4 + 0x18) + 0x8))) & 0xFFF7FFFF);
    }
    *(unsigned int *)(((a4 + 0x18) + 0x8)) = ((*(int *)(((a4 + 0x18) + 0x8))) & 0xFFFF9FFF);
    if (a11 != 0) {
        *(unsigned int *)(((a4 + 0x18) + 0x8)) = ((*(int *)(((a4 + 0x18) + 0x8))) | 0x2000);
    }
    t0 = *(int *)(((a4 + 0x18) + 0x8));
    *(unsigned int *)(((a4 + 0x18) + 0x8)) = (t0 & 0xFFF9FFFF);
    if (a9 != 0) {
        *(unsigned int *)(((a4 + 0x18) + 0x8)) = ((*(int *)(((a4 + 0x18) + 0x8))) | 0x40000);
    }
    t1 = (t0 & 0xFFF9FFFF);
    if (a10 != 0) {
        t0 = *(int *)(((a4 + 0x18) + 0x8));
        *(unsigned int *)(((a4 + 0x18) + 0x8)) = (t0 | 0x20000);
        t1 = (t0 | 0x20000);
    }
    return t1;
}

int FUN_0c022de2(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;
    register float u2;

    if ((int)a4 < (int)((((struct o0_int *)0xC270A10)->v))) {
        (((struct o0_uint *)0xC270A10)->v) = a4;
        (((struct o4_uint *)0xC270A10)->v) = 0xB4;
    }
    if ((int)((((struct o4_int *)0xC270A10)->v)) >= 0) {
        (((struct o4_uint *)0xC270A10)->v) = (((((struct o4_int *)0xC270A10)->v)) - 1);
    }
    if (((((struct o4_int *)0xC270A10)->v)) == 0) {
        if (a4 != 25) {
            if (a4 != 20) {
                if (a4 != 15) {
                    if (a4 != 10) {
                        if (a4 != 5) {
                            if (a4 != 4) {
                                if (a4 != 3) {
                                    if (a4 != 2) {
                                        t0 = a4;
                                        if (a4 != 1) {
                                        } else {
                                            t0 = (FUN_0c058f64(0xC1240B0, 0x0, 0x78, 0x0));
                                        }
                                        t1 = t0;
                                    } else {
                                        t1 = (FUN_0c058f64(0xC124098, 0x0, 0x78, 0x0));
                                    }
                                    t0 = t1;
                                } else {
                                    t0 = (FUN_0c058f64(0xC124080, 0x0, 0x78, 0x0));
                                }
                                t1 = t0;
                            } else {
                                t1 = (FUN_0c058f64(0xC124068, 0x0, 0x78, 0x0));
                            }
                            t0 = t1;
                        } else {
                            t0 = (FUN_0c058f64(0xC124050, 0x0, 0x78, 0x0));
                        }
                        t1 = t0;
                    } else {
                        t1 = (FUN_0c058f64(0xC124038, 0x0, 0x78, 0x0));
                    }
                    t0 = t1;
                } else {
                    t0 = (FUN_0c058f64(0xC124020, 0x0, 0x78, 0x0));
                }
                t1 = t0;
            } else {
                t1 = (FUN_0c058f64(0xC124008, 0x0, 0x78, 0x0));
            }
            t0 = t1;
        } else {
            t0 = (FUN_0c058f64(0xC123FF0, 0x0, 0x78, 0x0));
        }
        t1 = t0;
    }
    if (a6 != 0) {
        FUN_0c027f28(0x0);
        pfSize(1.20000005f, 1.20000005f);
        FUN_0c02803a(0xFFFFFF00, 0xFFFFFF00, 0xFFFFFF00, 0xFFFFFF00);
        pfTextCenterPut(0x1FE, 0x20, 0xC09CA74);
        (((struct o0_uint *)0xC2709C0)->v) = 0x276;
        if ((int)a5 > 0) {
            t0 = 0x0;
            for (;;) {
                u0 = 0.5f;
                u1 = 0.5f;
                u2 = 0.5f;
                if ((int)t0 < (int)a4) {
                    u0 = 1.0f;
                    u1 = 1.0f;
                    u2 = 1.0f;
                }
                FUN_0c076230(u0, u1, u2);
                t2 = ((~(((~t0) + 0x1) & 0x3)) + 0x1);
                if ((int)t0 >= 0) {
                    t2 = (t0 & 0x3);
                }
                (((struct o4_float *)0xC2709C0)->v) = (600.0f - (((float)t2 * 36.0f)));
                (((struct o8_float *)0xC2709C0)->v) = 68.0f;
                FUN_0c07ada0(0xC2709C0);
                t0 = (t0 + 0x1);
                if ((int)t0 >= (int)a5) {
                    break;
                }
            }
        }
        return FUN_0c026ce6();
    }
    return t1;
}

int kmiProcessVertex_01(int a4)
{
    int stk[4];
    register int t3;
    register int t5;
    register int t13;
    register int t24;
    register int t35;
    register int t40;
    int R1000;
    int R1004;
    int R1008;
    int R1012;

    R1000 = *(int *)((int)stk + 0);
    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);

    R1004 = (*(int *)((a4 + 0x0)));
    R1008 = (*(int *)((a4 + 0x4)));
    R1012 = (*(int *)((a4 + 0x8)));
    t3 = (((struct o4_int *)0xC300A6C)->v);
    R1000 = ((((struct o8_int *)0xC300A6C)->v));
    t5 = (((struct oC_int *)0xC300A6C)->v);
    (((struct o0_uint *)0xC300974)->v) = t3;
    (((struct o4_uint *)0xC300974)->v) = (R1000);
    (((struct o8_uint *)0xC300974)->v) = t5;
    (((struct oC_uint *)0xC300974)->v) = (*(int *)(((R1004) + 0x4)));
    (((struct o10_uint *)0xC300974)->v) = (*(int *)(((R1004) + 0x8)));
    (((struct o14_uint *)0xC300974)->v) = (*(int *)(((R1004) + 0xC)));
    t13 = R1004;
    (((struct o18_uint *)0xC300974)->v) = ((((((int)(((((struct o10_float *)(t13))->v)) * 255.0f) << 16) << 8) | ((int)(((((struct o14_float *)(t13))->v)) * 255.0f) << 16)) | ((int)(((((struct o18_float *)(t13))->v)) * 255.0f) << 8)) | (int)(((((struct o1C_float *)(t13))->v)) * 255.0f));
    (((struct o1C_uint *)0xC300974)->v) = (*(int *)(((R1008) + 0x4)));
    (((struct o20_uint *)0xC300974)->v) = (*(int *)(((R1008) + 0x8)));
    (((struct o24_uint *)0xC300974)->v) = (*(int *)(((R1008) + 0xC)));
    t24 = R1008;
    (((struct o28_uint *)0xC300974)->v) = ((((((int)(((((struct o10_float *)(t24))->v)) * 255.0f) << 16) << 8) | ((int)(((((struct o14_float *)(t24))->v)) * 255.0f) << 16)) | ((int)(((((struct o18_float *)(t24))->v)) * 255.0f) << 8)) | (int)(((((struct o1C_float *)(t24))->v)) * 255.0f));
    (((struct o2C_uint *)0xC300974)->v) = (*(int *)(((R1012) + 0x4)));
    (((struct o30_uint *)0xC300974)->v) = (*(int *)(((R1012) + 0x8)));
    (((struct o34_uint *)0xC300974)->v) = (*(int *)(((R1012) + 0xC)));
    t35 = R1012;
    (((struct o38_uint *)0xC300974)->v) = ((((((int)(((((struct o10_float *)(t35))->v)) * 255.0f) << 16) << 8) | ((int)(((((struct o14_float *)(t35))->v)) * 255.0f) << 16)) | ((int)(((((struct o18_float *)(t35))->v)) * 255.0f) << 8)) | (int)(((((struct o1C_float *)(t35))->v)) * 255.0f));
    (((struct o0_uint *)0xC300A6C)->v) = 0x3C;
    t40 = kmiBGPlaneCountWords(t3);
    kmiBGPlaneSetPCW(t40, 0x0, 0x0);
    (((struct o14_uint *)0xC300A6C)->v) = (*(int *)(((R1004) + 0xC)));
    return 0x0;
}

int kmActivateFrameBuffer(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t2;
    register int t4;

    t0 = 0xE;
    if ((a4 != 0) && (a5 != 0)) {
        (((struct o24_uint *)0xC2D0BD8)->v) = a4;
        (((struct o28_uint *)0xC2D0BD8)->v) = a5;
        (((struct o2C_uint *)0xC2D0BD8)->v) = a7;
        (((struct o0_uint *)0xC2D0BD8)->v) = a6;
        *(unsigned int *)0xC300904 = a6;
        t0 = kmiGetSysConfigFlag();
        if (t0 != 0x80000000) {
            t0 = kmiAddSysConfigFlag(0x800);
            t2 = 0x0;
            if (t0 == 0xB00) {
                kmiSetSysConfigFlag(0x80000000);
                t2 = (kmiAllocSysConfig(((((struct o3C_int *)0xC2D0BD8)->v))));
            }
            t0 = t2;
        } else {
            t2 = 0xF;
            if ((*(int *)((a4 + 0x18))) != (*(int *)((a5 + 0x18)))) {
            } else {
                t2 = 0x10;
                if ((*(int *)((a4 + 0x14))) != (*(int *)((a5 + 0x14)))) {
                } else {
                    (((struct o0_uint *)0xC300C04)->v) = (*(int *)((a4 + 0x1C)));
                    (((struct o8_uint *)0xC300C04)->v) = 0x0;
                    (((struct o4_uint *)0xC300C04)->v) = (*(int *)((a5 + 0x1C)));
                    (((struct oC_uint *)0xC300C04)->v) = 0x0;
                    kmiWriteRegister(0x50, ((((struct o28_int *)0xC300B78)->v)));
                    kmiWriteRegister(0x54, ((((struct o28_int *)0xC300B78)->v)));
                    kmiWriteRegister(0x60, ((((struct o0_int *)0xC300C04)->v)));
                    kmiWriteRegister(0x64, ((((struct o4_int *)0xC300C04)->v)));
                    (((struct o28_uint *)0xC300B78)->v) = ((((struct o0_int *)0xC300C04)->v));
                    (((struct o2C_uint *)0xC300B78)->v) = ((((struct o4_int *)0xC300C04)->v));
                    if (a6 == 1) {
                        (((struct o30_uint *)0xC300AB8)->v) = 0x0;
                        (((struct o34_uint *)0xC300AB8)->v) = 0x0;
                        kmiWriteRegister(0x50, ((((struct o28_int *)0xC300B78)->v)));
                        t4 = ((((struct o2C_int *)0xC300B78)->v));
                    } else {
                        kmiWriteRegister(0x50, ((((struct o28_int *)0xC300B78)->v)));
                        t4 = ((((struct o28_int *)0xC300B78)->v));
                    }
                    kmiWriteRegister(0x54, t4);
                    (((struct o0_uint *)0xC300B78)->v) = 0x1;
                    (((struct o0_uint *)0xC300AB8)->v) = a7;
                    t2 = 0x0;
                }
            }
            t0 = t2;
        }
    }
    return t0;
}

int FUN_0c045bac(int a4, int a5)
{
    int stk[4];
    register int t0;
    register int t60;
    register int t1;
    register int t6;
    register int t25;
    register int t31;
    register int t34;
    register float u15;
    int R1000;

    R1000 = *(int *)((int)stk + 0);

    R1000 = a5;
    t0 = nlSetEventNext(0x12C, 0xC045D66, a4);
    t60 = t0;
    if (t0 == 0) {
    } else {
        t1 = *(int *)0xC2A59C0;
        *(unsigned int *)0xC2A59C0 = (t1 + 0x1);
        (((struct o74_uint *)(t0))->v) = ((t1 + 0x1) - 1);
        *(unsigned int *)0xC2AB7EC = ((*(int *)0xC2AB7EC) + 0x1);
        (((struct o80_uint *)(t0))->v) = ((((struct o80_int *)(a4))->v));
        FUN_0c07ff00();
        (((struct oD4_uint *)(t0))->v) = ((((struct oD4_int *)(a4))->v));
        t6 = R1000;
        if (((((struct o78_int *)(a4))->v)) == 19) {
            (((struct o78_uint *)(t0))->v) = ((((FUN_0c046466()) & 0x1) + ((((struct o78_int *)(a4))->v))) + 0x1);
            u15 = 132.0f;
        } else {
            (((struct o78_uint *)(t0))->v) = (((((struct o78_int *)(a4))->v)) + 0x1);
            u15 = 127.0f;
        }
        *(float *)(((int)stk + 12)) = (-((float)t6 * u15));
        *(float *)(((int)stk + 8)) = 0.0f;
        *(float *)(((int)stk + 4)) = 0.0f;
        FUN_0c073360();
        nlRotateAY((unsigned short)((((struct oA6_short *)(a4))->v)));
        FUN_0c072290((((int)stk + 0) + 0x4), (((int)stk + 0) + 0x4));
        nlAddVector((0x8C + t0), (((int)stk + 0) + 0x4));
        nlPopMatrix(0x1);
        FUN_0c0438c0(t0);
        if (((((struct o80_int *)(t0))->v)) == 0) {
            t25 = FUN_0c029b12((0x8C + t0), 30.0f);
            if ((*(int *)((t25 + 0x1C))) != -1) {
                (((struct o90_float *)(t0))->v) = (((((struct o18_float *)(t25))->v)) + 1.0f);
            }
        } else {
            t31 = (((struct o80_int *)(t0))->v);
            t34 = (((struct oD4_int *)(t0))->v);
            (((struct o90_float *)(t0))->v) = (((((struct o4_float *)(((*(int *)((((((t31 << 1) + t31) << 2) + (*(int *)0xC2ADA7C)) + 0x0))) + (((t34 << 1) + t34) << 2))))->v)) + 1.0f);
        }
        FUN_0c07ff00();
        (((struct oA4_uchar *)(t0))->v) = (*(signed char *)(((0xA4 + a4) + 0x0)));
        *(unsigned char *)(((0xA4 + t0) + 0x1)) = (*(signed char *)(((0xA4 + a4) + 0x1)));
        *(unsigned char *)(((0xA4 + t0) + 0x2)) = (*(signed char *)(((0xA4 + a4) + 0x2)));
        *(unsigned char *)(((0xA4 + t0) + 0x3)) = (*(signed char *)(((0xA4 + a4) + 0x3)));
        *(unsigned char *)(((0xA4 + t0) + 0x4)) = (*(signed char *)(((0xA4 + a4) + 0x4)));
        *(unsigned char *)(((0xA4 + t0) + 0x5)) = (*(signed char *)(((0xA4 + a4) + 0x5)));
        FUN_0c03f9d0(((((struct o80_int *)(t0))->v)), ((((struct oD4_int *)(t0))->v)));
        FUN_0c03f9d0(((((struct o80_int *)(t0))->v)), (((((struct oD4_int *)(t0))->v)) + 0x1));
        t60 = (FUN_0c0435e2(t0, ((((struct o84_int *)(t0))->v))));
    }
    return t60;
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

int FUN_0c06d1c4(int a4)
{
    int stk[9];
    register int t43;
    register float t8;
    register float u12;
    register int t20;
    register int t34;

    t43 = 0x80;
    if ((int)((((struct o80_int *)((*(int *)(((*(int *)0xC13C358) + 0x0)))))->v)) <= 0) {
    } else {
        FUN_0c018b1c(0x1);
        nlPushMatrix(0xC17596C);
        nlSubVector3op((((int)stk + 0) + 0x18), ((*(int *)(((*(int *)0xC13C358) + 0x0))) + 0xE8), 0xC17599C);
        t8 = FUN_0c073b40((((int)stk + 0) + 0x18), 0xC17596C);
        if (t8 > 0.0f) {
            (((struct oC_uint *)0xC2BB3D8)->v) = 0x1;
            FUN_0c07ff00();
        } else {
            (((struct oC_uint *)0xC2BB3D8)->v) = 0x0;
            FUN_0c07ff00();
            u12 = (*(float *)(((int)stk + 24)));
            u12 *= -1.0f;
            *(float *)(((int)stk + 24)) = u12;
        }
        FUN_0c072230((((int)stk + 0) + 0x18), (((int)stk + 0) + 0x18));
        FUN_0c07ff00();
        t20 = 0x0;
        for (;;) {
            if ((int)t20 >= (int)(*(int *)(((*(int *)0xC13C358) + 0x4)))) {
                break;
            }
            nlAddVector((((int)stk + 0) + 0xC), (((*(int *)(((*(int *)0xC13C358) + 0x0))) + (t20 << 8)) + 0xE8));
            t20 = (t20 + 0x1);
        }
        FUN_0c073c40((((int)stk + 0) + 0xC), (((int)stk + 0) + 0xC), (1.0f / (float)(*(int *)(((*(int *)0xC13C358) + 0x4)))));
        *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) + 15.0f);
        camSetTarget((((int)stk + 0) + 0xC), 0x2);
        FUN_0c018c8a(0.075000003f, 0.0f);
        nlSubVector3op(((int)stk + 0), (((int)stk + 0) + 0x18), (((int)stk + 0) + 0xC));
        t34 = *(int *)(((FUN_0c0297f4((((int)stk + 0) + 0xC), ((int)stk + 0), 0.0f)) + 0x1C));
        if (t34 != -1) {
            FUN_0c07ff00();
        }
        FUN_0c018b22((((int)stk + 0) + 0x18), 0x2);
        FUN_0c018c2a(0.0500000007f, 0.0f);
        t43 = nlPopMatrix(0x1);
        (((struct o0_uint *)0xC2BB3D8)->v) = (((((struct o0_int *)0xC2BB3D8)->v)) + 0x1);
    }
    return t43;
}

int FUN_0c03ed46(int a4)
{
    int stk[13];
    register int t75;
    register int t3;
    register int t15;
    register int t17;
    register int t22;
    register int t26;
    register int t27;
    register int t44;
    register int t49;
    register int t60;
    register int t65;

    *(unsigned int *)(((int)stk + 8)) = a4;
    t75 = 0xFFFFFFFF;
    if ((*(int *)0xC2AC2F0) == 1) {
    } else {
        *(unsigned int *)0xC2AC5E4 = (*(int *)(((*(int *)(((int)stk + 8))) + 0x0)));
        t3 = *(int *)0xC2A465C;
        syRtcGetDate((((int)stk + 8) + 0x4));
        *(unsigned char *)(((int)stk + 33)) = 0xFFFFFFFF;
        *(unsigned int *)(((int)stk + 24)) = (*(int *)(((*(int *)(((int)stk + 8))) + 0x0)));
        *(unsigned char *)(((int)stk + 32)) = (*(signed char *)0xC175C80);
        *(unsigned int *)(((int)stk + 28)) = ((((((((FUN_0c07ffac((0xFFFFF85A + (unsigned short)(*(short *)(((int)stk + 12)))))) << 16) << 8) | ((((unsigned char)(*(signed char *)(((int)stk + 14))) << 16) << 2) << 2)) | ((unsigned char)(*(signed char *)(((int)stk + 15))) << 15)) | (((unsigned char)(*(signed char *)(((int)stk + 16))) << 8) << 2)) | (((unsigned char)(*(signed char *)(((int)stk + 17))) << 2) << 2)) | ((unsigned int)(unsigned char)(*(signed char *)(((int)stk + 18))) >> 2));
        t15 = FUN_0c03f154(0x0);
        switch (t15) {
        case 0:
            *(unsigned char *)(((int)stk + 33)) = (*(signed char *)0xC1EC860);
            t60 = FUN_0c03f154(0x1);
            t65 = 0xC28FF84;
            if (t60 != 4) {
                t65 = (((FUN_0c03f154(0x1)) * 0x78) + (((t3 * 0x788) + 0xC28EDA8) + 0x8));
            }
            t75 = (InsertRankRecord(0x1, (((int)stk + 8) + 0x10), t65, 0xA));
            break;
        case 1:
            *(unsigned char *)(((int)stk + 33)) = (*(signed char *)0xC1EC860);
            t44 = FUN_0c03f154(0x1);
            t49 = 0xC2906B4;
            if (t44 != 4) {
                t49 = (((FUN_0c03f154(0x1)) * 0x78) + (0x1E8 + ((t3 * 0x788) + 0xC28EDA8)));
            }
            t75 = (InsertRankRecord(0x1, (((int)stk + 8) + 0x10), t49, 0xA));
            break;
        case 2:
            t26 = FUN_0c03f154(0x1);
            *(int *)((int)stk + 4) = (((t26 - 1) * 0x3C) + (0x3C8 + ((t3 * 0x788) + 0xC28EDA8)));
            *(int *)((int)stk + 0) = (((int)stk + 4) + 0x14);
            t27 = FUN_0c03f154(0x1);
            t75 = InsertRankRecord((*(int *)((0xC09C8FC + ((((t27 - 1) << 1) + (t27 - 1)) << 2)))), (((int)stk + 4) + 0x14), (((t26 - 1) * 0x3C) + (0x3C8 + ((t3 * 0x788) + 0xC28EDA8))), 0x5);
            if ((int)t75 >= 0) {
                *(unsigned int *)((((t3 * 0x788) + 0xC28EDA8) + 0x4)) = ((*(int *)((((t3 * 0x788) + 0xC28EDA8) + 0x4))) | ((int)0x1 << (int)((FUN_0c03f154(0x1)) - 1)));
            }
            break;
        default:
            *(unsigned char *)(((int)stk + 33)) = (*(signed char *)0xC1EC860);
            t17 = FUN_0c03f154(0x1);
            t22 = 0xC28FF84;
            if (t17 != 4) {
                t22 = (((FUN_0c03f154(0x1)) * 0x78) + (((t3 * 0x788) + 0xC28EDA8) + 0x8));
            }
            t75 = (InsertRankRecord(0x1, (((int)stk + 8) + 0x10), t22, 0xA));
            break;
        }
    }
    return t75;
}

int FUN_0c05a15c(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;

    if ((int)(*(int *)((a4 + 0x18))) > (int)0x1) {
        FUN_0c059e6a(0x14, 0x1C, 0x28, 0x4);
        nlLocate(0x13, 0x1C);
        ETD_EntryRecvFunc(0x10, 0x10);
        nlPrintf(0xC10D4AC);
        nlPrintf(0xC10D4C0);
        return (ETD_EntryRecvFunc(0x8, 0x8));
    }
    t0 = *(int *)((a4 + 0x1C));
    if ((t0 != 0) && (t0 != 2)) {
        t1 = *(int *)((a4 + 0x1C));
        if (t1 == 1) {
            t2 = *(int *)((a4 + 0x20));
            if ((*(int *)((((((t2 << 2) + t2) << 2) + (*(int *)((a4 + 0x28)))) + 0x8))) != 0) {
                t2 = *(int *)((a4 + 0x20));
                t3 = *(int *)((((((t2 << 2) + t2) << 2) + (*(int *)((a4 + 0x28)))) + 0x8));
                return ((int (*)(int, int, int, int))(t3))(t0, a5, a6, a7);
            }
            return t1;
        }
        FUN_0c059e6a(0x13, 0x1C, 0x28, 0x4);
        nlLocate(0x14, 0x1C);
        ETD_EntryRecvFunc(0x10, 0x10);
        nlPrintf(0xC10D4E0);
        nlPrintf(0xC10D4C0);
        return (ETD_EntryRecvFunc(0x8, 0x8));
    }
    FUN_0c059e6a((*(int *)((a4 + 0x0))), (*(int *)((a4 + 0x4))), (*(int *)((a4 + 0x8))), (*(int *)((a4 + 0xC))));
    ETD_EntryRecvFunc(0x8, 0x8);
    t0 = 0xFFFFFFFF;
    if ((*(int *)((a4 + 0x1C))) == 2) {
        t0 = 0xFF808080;
    }
    FUN_0c071920(t0);
    nlLocate(((*(int *)((a4 + 0x0))) + 0x1), (*(int *)((a4 + 0x4))));
    nlPrintf(0xC10D4D4, ((*(int *)((a4 + 0x24)))));
    nlLocate(((*(int *)((a4 + 0x0))) + 0x4), ((*(int *)((a4 + 0x4))) + 0x2));
    if ((*(int *)((a4 + 0x1C))) == 2) {
        t0 = 0x0;
        for (;;) {
            if ((int)t0 > (int)(*(int *)((a4 + 0x10)))) {
                break;
            }
            if (t0 == (*(int *)((a4 + 0x20)))) {
                FUN_0c071920(0xFFFFFFFF);
            }
            nlPrintf(0xC10D4D8, ((*(int *)((((((t0 << 2) + t0) << 2) + (*(int *)((a4 + 0x28)))) + 0x0)))));
            if (t0 == (*(int *)((a4 + 0x20)))) {
                FUN_0c071920(0xFF808080);
            }
            t0 = (t0 + 0x1);
        }
    } else {
        t0 = 0x0;
        for (;;) {
            if ((int)t0 > (int)(*(int *)((a4 + 0x10)))) {
                break;
            }
            nlPrintf(0xC10D4D8, ((*(int *)((((((t0 << 2) + t0) << 2) + (*(int *)((a4 + 0x28)))) + 0x0)))));
            t0 = (t0 + 0x1);
        }
    }
    nlLocate((*(int *)((a4 + 0x0))), (((*(int *)((a4 + 0x4))) + (*(int *)((a4 + 0x20)))) + 0x2));
    nlPrintf(0xC10D4DC);
    t0 = *(int *)((a4 + 0x1C));
    if (t0 == 2) {
        t1 = FUN_0c071920(0xFFFFFFFF);
        t2 = *(int *)((a4 + 0x20));
        if ((*(int *)((((((t2 << 2) + t2) << 2) + (*(int *)((a4 + 0x28)))) + 0x8))) != 0) {
            t2 = *(int *)((a4 + 0x20));
            t3 = *(int *)((((((t2 << 2) + t2) << 2) + (*(int *)((a4 + 0x28)))) + 0x8));
            return ((int (*)(void))(t3))();
        }
        return t1;
    }
    return t0;
}

int FUN_0c029962(int a4, int a5, int a6)
{
    int stk[9];

    register int R2;
    register int R3;
    register int R8;
    register int R9;
    register float F2;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    register float w0_5;
    register float w0_6;
    v0_0 = a4;
    v0_2 = a5;
    v0_1 = a6;
    w0_0 = FUN_0c073b40((v0_0 + 0xC), v0_2);
    v0_3 = (v0_2);
    v0_1 = (v0_1);
    v0_0 = (v0_0);
    v0_2 = (v0_2);
    w0_2 = (w0_0);
    w0_1 = (w0_0);
    if ((0.0f > w0_0)) goto L_C02998E;
    L_C029AFC:;
    v0_0 = (0x0);
    L_C029AFE:;
    return v0_0;
    L_C02998E:;
    w0_3 = FUN_0c073b40(v0_3, v0_0);
    w0_4 = (((struct oC_float *)(v0_2))->v);
    w0_5 = (((struct o18_float *)(v0_0))->v);
    w0_2 = ((((-w0_3) - w0_4) + w0_5));
    w0_0 = (((((-w0_3) - w0_4) + w0_5) / w0_1));
    w0_2 = (w0_5);
    if ((((((struct o8_float *)(v0_1))->v)) > ((((-w0_3) - w0_4) + w0_5) / w0_1))) goto L_C0299B4;
    goto L_C029AFC;
    L_C0299B4:;
    if ((!((w0_2 / w0_1) > w0_0))) goto L_C0299BE;
    goto L_C029AFC;
    L_C0299BE:;
    FUN_0c072230((v0_2 + 0x14), (((int)stk + 0) + 0x18));
    w0_5 = *(float *)(((int)stk + 24));
    w0_6 = *(float *)(((int)stk + 28));
    w0_3 = (((struct o10_float *)(v0_2))->v);
    w0_4 = (w0_6 * w0_6);
    w0_4 = w0_4 + w0_5 * w0_5;
    v0_3 = (0xC072230);
    v0_3 = ((v0_2 + 0x14));
    w0_2 = (w0_5);
    w0_2 = (w0_6);
    w0_2 = (w0_3);
    w0_2 = (w0_5);
    if ((!(w0_4 > (w0_3 * w0_3)))) goto L_C0299EC;
    goto L_C029AFC;
    L_C0299EC:;
    FUN_0c072230((v0_3 + 0xC), (((int)stk + 0) + 0xC));
    v0_3 = ((v0_3 + 0xC));
    if ((((((struct o48_int *)(v0_2))->v)) == 3)) goto L_C029A6C;
    w0_2 = *(float *)(((int)stk + 12));
    w0_4 = *(float *)(((int)stk + 28));
    w0_3 = (w0_4 * w0_2);
    w0_2 = ((w0_4 * w0_2));
    if ((!(((((*(float *)(((int)stk + 24))) * (*(float *)(((int)stk + 16))))) - w0_3) > 0.0f))) goto L_C029A7C;
    goto L_C029AFC;
    L_C029A7C:;
    FUN_0c072230((v0_3 + 0xC), ((int)stk + 0));
    w0_2 = *(float *)(((int)stk + 16));
    w0_4 = *(float *)(((int)stk + 0));
    w0_3 = (w0_2 * w0_4);
    v0_3 = ((v0_3 + 0xC));
    w0_2 = ((w0_2 * w0_4));
    if ((((((*(float *)(((int)stk + 12))) * (*(float *)(((int)stk + 4))))) - w0_3) > 0.0f)) goto L_C029AFC;
    FUN_0c072230((v0_3 + 0xC), (((int)stk + 0) + 0xC));
    w0_2 = *(float *)(((int)stk + 12));
    w0_4 = *(float *)(((int)stk + 4));
    w0_3 = (w0_4 * w0_2);
    w0_2 = ((w0_4 * w0_2));
    if ((((((*(float *)(((int)stk + 0))) * (*(float *)(((int)stk + 16))))) - w0_3) > 0.0f)) goto L_C029AFC;
    w0_2 = *(float *)(((int)stk + 24));
    w0_4 = *(float *)(((int)stk + 16));
    w0_3 = (w0_4 * w0_2);
    w0_2 = ((w0_4 * w0_2));
    if ((((((*(float *)(((int)stk + 12))) * (*(float *)(((int)stk + 28))))) - w0_3) > 0.0f)) goto L_C029AFC;
    (((struct o8_float *)(v0_1))->v) = w0_0;
    *(unsigned int *)((v0_1 + 0x0)) = v0_2;
    (((struct o4_float *)(v0_1))->v) = w0_1;
    w0_1 = (((struct o1C_float *)(v0_0))->v);
    w0_2 = ((((struct o18_float *)(v0_0))->v));
    w0_2 = w0_2 + w0_0 * w0_1;
    (((struct o20_float *)(v0_0))->v) = w0_2;
    v0_0 = (0x1);
    w0_2 = (w0_0);
    w0_2 = (w0_1);
    goto L_C029AFE;
    L_C029A6C:;
    *(float *)(((int)stk + 24)) = (*(float *)(((int)stk + 12)));
    *(float *)(((int)stk + 28)) = (*(float *)(((int)stk + 16)));
    goto L_C029A7C;
}
