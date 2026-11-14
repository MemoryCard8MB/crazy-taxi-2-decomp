/* Straight-line functions with calls and guards (batch gen_ci): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[2]; } Stk2;
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o104_float { char p[0x104]; float v; };
struct o108C_short { char p[0x108C]; short v; };
struct o108C_ushort { char p[0x108C]; unsigned short v; };
struct o10B4_int { char p[0x10B4]; int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o204_int { char p[0x204]; int v; };
struct o204_uint { char p[0x204]; unsigned int v; };
struct o208_int { char p[0x208]; int v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o24_ushort { char p[0x24]; unsigned short v; };
struct o26_ushort { char p[0x26]; unsigned short v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o3A_ushort { char p[0x3A]; unsigned short v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_int { char p[0x40]; int v; };
struct o44_int { char p[0x44]; int v; };
struct o48_int { char p[0x48]; int v; };
struct o48_short { char p[0x48]; short v; };
struct o48_ushort { char p[0x48]; unsigned short v; };
struct o4A_short { char p[0x4A]; short v; };
struct o4A_ushort { char p[0x4A]; unsigned short v; };
struct o50_ushort { char p[0x50]; unsigned short v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o63_uchar { char p[0x63]; unsigned char v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o72_uchar { char p[0x72]; unsigned char v; };
struct o77_uchar { char p[0x77]; unsigned char v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o7C_ushort { char p[0x7C]; unsigned short v; };
struct o7E_ushort { char p[0x7E]; unsigned short v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_uint { char p[0x84]; unsigned int v; };
struct o8C_uint { char p[0x8C]; unsigned int v; };
struct o98_uint { char p[0x98]; unsigned int v; };
struct o9C_uint { char p[0x9C]; unsigned int v; };
struct o9DC_int { char p[0x9DC]; int v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct oA8_ushort { char p[0xA8]; unsigned short v; };
struct oAA_ushort { char p[0xAA]; unsigned short v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oD78_uint { char p[0xD78]; unsigned int v; };
struct oFF_uchar { char p[0xFF]; unsigned char v; };
int ADX_DecodeInfoAiff(int, int, int, int, int, int, int, int, int, int);
int FUN_0c01f368(int, int, float);
int FUN_0c01f4ca(int, int, float);
int FUN_0c026bd6(int);
int FUN_0c027f28(int);
int FUN_0c027fbe(float, float);
int FUN_0c027fdc(float);
int FUN_0c02803a(int, int, int, int);
float FUN_0c02806c(int);
int FUN_0c02842e(int);
int FUN_0c0286c6(int);
int FUN_0c02877a(int);
int FUN_0c029962(int, int, int);
int FUN_0c02deca(int, int);
int FUN_0c02e42a(int, int, int);
extern int FUN_0c03346e();
int FUN_0c0345ec(int, int, int, float, float, float);
int FUN_0c03f154(int);
int FUN_0c04707e(int, int, int);
int FUN_0c058ca6(int, int);
int FUN_0c05f470(int, int, float, float);
int FUN_0c05f6fe(int);
int FUN_0c05f72a(int);
int FUN_0c05ff5c(int);
int FUN_0c06017e(void);
int FUN_0c061bcc(int, int);
int FUN_0c0673da(int);
int FUN_0c072290(int, int);
int FUN_0c072b60(int);
int FUN_0c073360(void);
int FUN_0c073a40(int);
float FUN_0c073c60(int);
int FUN_0c075d50(void);
int FUN_0c07c8be(int);
int FUN_0c07e3d0(int);
int FUN_0c07e57c(int);
int FUN_0c07e63e(int, int);
int FUN_0c07ff00(void);
int FUN_0c07ffac(int);
int FUN_0c08ec98(int);
int FUN_0c08f37a(int);
int FUN_0c08f3f8(int);
int FUN_0c09431e(int, int);
int FUN_0c14e916(int);
int FUN_0c16a4bc(int, int, int);
int FUN_0c16a4d0(int, int, int);
int MakeCollisionCellList(int, int);
int SJ_SplitChunk(int, int, int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
extern float _builtin_sqrtf(float);
int fmMngClearBuf(int, int);
int fmMngReadSctAllData(int);
int gdFsGetDirEnt(int, int, int, int);
int gdFsLockDir(int);
int gdFsReopenHn(int, int, int, int);
int gdFsSearchName(int, int, int);
int gdFsSearchPath(int, int, int, int);
int gdFsSearchPath_dds(int, int, int, int, int);
int kdSetSetCondition(void);
int kmiBGPlaneCountWords(int);
int kmiBGPlaneSetPCW(int, int, int);
int longjmp(int, int);
int memcpy(int, int, int);
int memset(int, int, int);
int mpdrv_make_exdevicedata(int, int, int, int, int);
int mpdrv_make_rootdevicedata(int, int, int, int);
int mwRnaAdjustBuf(int);
int mwRnaGetTime(void);
int mwRnaSetPlaySw(void);
int nlGetMatrix(int);
float nlLength(int, int);
int nlObjPutSetLightDirectionV(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateV(int, int);
int nlSubVector3op(int, int, int);
int nlUnitMatrix(void);
int nlUnitVectorsd(int, int);
int pdVibIsReady(int);
int pfSize(float, float);
int set_event(int, int);
int setjmp(int, int, int, int, float, float, float, float, float, float, float, float);
int thunk_FUN_0c0765b0(void);
int thunk_FUN_0c1606d4(int, int, int);
int vmsfs_isformat(int);
int FUN_0c068c94(int a4);
int FUN_0c04b32c(void);
int gdc_CoursePointLoadReq(Stk2 s, float f4);
int gdFsLoadDirG(int a4, int a5);
int kmiProcessVertex_00(int a4);
int fmMngInit(int a4, int a5, int a6);
int FUN_0c034804(int a4, float f4, float f5, float f6, float f7, float f8);
int getRootDistance(int a4, int a5, int a6, int a7, int a8, int a9, int a10);
int ADX_DecodeMonoFloat(int a4, int a5, int a6, int a7, int a8, int a9, float f4, float f5, float f6, float f7, float f8, float f9, float f10);
int FUN_0c033578(int a4, int a5, float f4, float f5, float f6);
int FUN_0c038b04(int a4, int a5, float f4, float f5, float f6);
int kmSetFramebufferTexture(int a4);
int FUN_0c03ec48(int a4, int a5, int a6);
int FUN_0c03ef3e(void);
int mpdrv_make_devicedata(int a4, int a5);
int ADXB_DecodeHeaderAiff(int a4, int a5, int a6);
int FUN_0c029866(int a4, int a5, int a6, float f4);
int FUN_0c060d86(int a4, float f4);
int FUN_0c08f8c0(int a4);
int pdVibStart(int a4, int a5, int a6);
int FUN_0c14ee68(int a4, int a5);
void FUN_0c0390d8(int a4, int a5, float f4, float f5, float f6, float f7);
int FUN_0c07f6d8(int a4, int a5, int a6);
int FUN_0c14f130(int a4, int a5, int a6, int a7);
int FUN_0c16137e(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13);
int FUN_0c04ba86(float f4);
int FUN_0c07f7d2(int a4, int a5, int a6);
int gdFsDaPlaySctG(int a4, int a5, int a6, int a7);
int FUN_0c018b22(int a4, int a5);
int buFbrExecFiberServer(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
int FUN_0c029c96(int a4, int a5, int a6);

int FUN_0c068c94(int a4)
{
    int stk[5];
    register int t0;
    register int t35;
    register int t6;
    register int t9;
    register int t21;
    register int t24;
    register int t7;
    register int t8;

    t0 = set_event(0x88, 0xC068DDC);
    t35 = t0;
    if (t0 != 0) {
        *(unsigned int *)(((int)stk + 0)) = (*(int *)((a4 + 0x0)));
        *(unsigned int *)(((int)stk + 4)) = (*(int *)((a4 + 0x4)));
        *(unsigned int *)(((int)stk + 8)) = 0xC10D9BC;
        *(float *)(((int)stk + 12)) = 0.0f;
        *(unsigned int *)(((int)stk + 16)) = 0x1;
        FUN_0c061bcc((t0 + 0x14), ((int)stk + 0));
        (((struct o77_uchar *)(t0))->v) = ((*(signed char *)(((t0 + 0x77) + 0x0))) | 0x1);
        t6 = (nlPushMatrix(0x0));
        t9 = 0x0;
        for (;;) {
            if ((int)t9 >= (int)(*(int *)((t0 + 0x18)))) {
                break;
            }
            t8 = (*(int *)((t0 + 0x14)));
            t7 = t9;
            t6 = 0x80;
            t7 = (t7 << 8);
            t8 = (t8 + t7);
            *(unsigned int *)((t8 + t6)) = 0x0;
            t6 = (FUN_0c05f72a(t8));
            t6 = (FUN_0c05f6fe(t8));
            t6 = (nlUnitMatrix());
            t6 = (FUN_0c0673da(t9));
            t6 = (nlGetMatrix((((*(int *)((t0 + 0x14))) + t7) + 0x40)));
            t9 = (t9 + 0x1);
        }
        nlPopMatrix(0x1);
        *(unsigned int *)(((t0 + 0x14) + 0x10)) = 0x6;
        (((struct o63_uchar *)((t0 + 0x14)))->v) = ((*(signed char *)((((t0 + 0x14) + 0x63) + 0x0))) | 0x80);
        if ((*(int *)((t0 + 0x18))) == 2) {
            t21 = *(int *)((t0 + 0x14));
            (((struct oFF_uchar *)(t21))->v) = ((*(signed char *)(((0xFF + t21) + 0x0))) | 0x20);
            (((struct o8C_uint *)((*(int *)((t0 + 0x14)))))->v) = 0x5;
            t24 = *(int *)((t0 + 0x14));
            (((struct oFF_uchar *)((t24 + 0x100)))->v) = ((*(signed char *)(((0xFF + (t24 + 0x100)) + 0x0))) | 0x20);
            (((struct o8C_uint *)((0x100 + (*(int *)((t0 + 0x14))))))->v) = 0x4;
        }
        (((struct o78_uint *)(t0))->v) = 0x0;
        (((struct o7C_uint *)(t0))->v) = (*(int *)((a4 + 0x8)));
        (((struct o80_uint *)(t0))->v) = (*(int *)((a4 + 0xC)));
        (((struct o84_uint *)(t0))->v) = (*(int *)((a4 + 0x10)));
        *(unsigned int *)0xC2B9CA4 = (t0 + 0x14);
        t35 = 0x84;
    }
    return t35;
}

int FUN_0c04b32c(void)
{
    int stk[6];
    register int t8;
    register int t10;
    register int t11;
    register int t13;
    register int t23;
    register int t26;
    register float u27;
    register int t28;
    register int t29;
    register int t30;
    register int t31;
    register float u33;
    register float u34;
    register float u35;
    register float u38;
    register float u14;

    nlPushMatrix(0x0);
    nlUnitMatrix();
    FUN_0c072b60(0xC177D5C);
    FUN_0c026bd6(((int)stk + 0));
    FUN_0c072290(((int)stk + 0), ((int)stk + 0));
    nlObjPutSetLightDirectionV(((int)stk + 0));
    thunk_FUN_0c0765b0();
    FUN_0c075d50();
    t8 = *(int *)0xC2ADEB8;
    t10 = *(int *)((((((t8 << 1) + t8) << 2) + 0xC10B6F8) + 0x0));
    t11 = *(int *)((((((t8 << 1) + t8) << 2) + 0xC10B6F8) + 0x4));
    *(volatile int *)(((0x8 + ((((t8 << 1) + t8) << 2) + 0xC10B6F8)) + 0x0));
    if ((int)t10 < (int)(t11 + t10)) {
        t13 = t10;
        for (;;) {
            FUN_0c01f368(t13, 0x0, _builtin_sqrtf(u14));
            t13 = (t13 + 0x1);
            if ((int)t13 >= (int)(t11 + t10)) {
                break;
            }
        }
    }
    t23 = *(int *)0xC2ADEB8;
    if ((*(int *)((((((t23 << 1) + t23) << 2) + 0xC10B7A0) + 0x0))) != -1) {
        t26 = *(int *)((((((t23 << 1) + t23) << 2) + 0xC10B7A0) + 0x0));
        u27 = (((struct o8_float *)(((((t23 << 1) + t23) << 2) + 0xC10B7A0)))->v);
        t28 = *(int *)((((((t23 << 1) + t23) << 2) + 0xC10B7A0) + 0x4));
        t29 = *(int *)0xC1ECD44;
        if ((int)t26 < (int)(t28 + t26)) {
            t30 = (t29 + (((t26 << 2) + t26) << 2));
            t31 = t26;
            for (;;) {
                nlSubVector3op((((int)stk + 0) + 0xC), (t30 + 0x4), 0xC175930);
                u33 = *(float *)(((int)stk + 12));
                u34 = *(float *)(((int)stk + 20));
                u35 = (u34 * u34);
                u35 = u35 + u33 * u33;
                u38 = u35;
                if ((u27 * u27) > u35) {
                    FUN_0c01f368(t31, 0x1, _builtin_sqrtf(u35));
                    u38 = _builtin_sqrtf(u35);
                }
                t31 = (t31 + 0x1);
                t30 = (t30 + 0x14);
                if ((int)t31 >= (int)(t28 + t26)) {
                    break;
                }
            }
        }
    }
    return (nlPopMatrix(0x1));
}


int gdFsLoadDirG(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t11;

    t4 = *(int *)0xC1737EC;
    t5 = a5;
    if (a5 == 0) {
        t5 = (*(int *)((t4 + 0x10)));
    }
    t6 = *(signed char *)((a4 + 0x0));
    t7 = *(int *)0xC2D0CF4;
    if ((t6 != 47) && (t6 != 92)) {
        t6 = gdFsSearchName(a4, (*(int *)((t4 + 0x10))), 0x0);
        t8 = 0xFFFFFFF8;
        if (t6 != 0) {
            t9 = *(int *)(((*(int *)0xC1737EC) + 0x10));
            t8 = 0xFFFFFFF5;
            if (((unsigned char)(*(signed char *)((((t9 + 0x10) + ((t6 - 1) * 0x2C)) + 0x8))) & 2) == 0) {
            } else {
                t11 = *(int *)((((t9 + 0x10) + ((t6 - 1) * 0x2C)) + 0x0));
                t8 = gdFsGetDirEnt(((*(int *)0xC1737EC) + 0x40), (t11 + 0x96), t5, (*(int *)((((t9 + 0x10) + ((t6 - 1) * 0x2C)) + 0x4))));
                if (((*(short *)(((*(int *)0xC2D0CF4) + 0x0))) == 1) && ((t0 = *(int *)0xC2D0CF4, t1 = *(int *)((t0 + 0x4)), t1 == (t11 + 0x96)) && ((t8 == 0) || (t8 == -12)))) {
                    gdFsLockDir(t5);
                }
            }
        }
        t0 = t8;
    } else {
        if ((*(short *)((t7 + 0x0))) == 1) {
            t1 = (gdFsSearchPath_dds(((t4 + 0x40) + 0x40), (*(int *)((t4 + 0x4))), (*(int *)((t4 + 0x8))), a4, (0x8 + t7)));
        } else {
            t1 = (gdFsSearchPath(((t4 + 0x40) + 0x40), (*(int *)((t4 + 0x4))), (*(int *)((t4 + 0x8))), a4));
        }
        t4 = 0xFFFFFFF8;
        if (t1 != 0) {
            t6 = gdFsGetDirEnt(((*(int *)0xC1737EC) + 0x40), (0x96 + t1), t5, 0x800);
            if (((*(short *)(((*(int *)0xC2D0CF4) + 0x0))) == 1) && ((t2 = *(int *)0xC2D0CF4, t3 = *(int *)((t2 + 0x4)), t3 == (0x96 + t1)) && ((t6 == 0) || (t6 == -12)))) {
                gdFsLockDir(t5);
            }
            t4 = t6;
        }
        t0 = t4;
    }
    return t0;
}

int kmiProcessVertex_00(int a4)
{
    int stk[4];
    register int t3;
    register int t5;
    register int t31;
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
    (((struct o18_uint *)0xC300974)->v) = (*(int *)(((R1004) + 0x18)));
    (((struct o1C_uint *)0xC300974)->v) = (*(int *)(((R1008) + 0x4)));
    (((struct o20_uint *)0xC300974)->v) = (*(int *)(((R1008) + 0x8)));
    (((struct o24_uint *)0xC300974)->v) = (*(int *)(((R1008) + 0xC)));
    (((struct o28_uint *)0xC300974)->v) = (*(int *)(((R1008) + 0x18)));
    (((struct o2C_uint *)0xC300974)->v) = (*(int *)(((R1012) + 0x4)));
    (((struct o30_uint *)0xC300974)->v) = (*(int *)(((R1012) + 0x8)));
    (((struct o34_uint *)0xC300974)->v) = (*(int *)(((R1012) + 0xC)));
    (((struct o38_uint *)0xC300974)->v) = (*(int *)(((R1012) + 0x18)));
    (((struct o0_uint *)0xC300A6C)->v) = 0x3C;
    t31 = kmiBGPlaneCountWords(t3);
    kmiBGPlaneSetPCW(t31, 0x0, 0x0);
    (((struct o14_uint *)0xC300A6C)->v) = (*(int *)(((R1004) + 0xC)));
    return 0x0;
}

int fmMngInit(int a4, int a5, int a6)
{
    int stk[3];
    register int t51;
    register int t6;
    register int t8;
    register int t19;
    register int t20;
    register int t21;
    int t27;
    register int t34;
    int t22;
    register int t23;
    register int t24;

    *(unsigned int *)(((int)stk + 0)) = a5;
    t51 = 0xFFFFFFF9;
    if (((int)a4 >= (int)0x1) && ((int)a4 < (int)0x5)) {
        *(unsigned int *)0xC1742EC = 0xC3027AC;
        FUN_0c16a4bc(a4, (((int)stk + 0) + 0x4), a6);
        *(unsigned short *)(((*(int *)0xC1742EC) + 0x0)) = a4;
        *(unsigned int *)(((*(int *)0xC1742EC) + 0x4)) = (*(int *)(((int)stk + 4)));
        *(unsigned int *)(((*(int *)0xC1742EC) + 0x8)) = (*(int *)(((int)stk + 8)));
        t6 = *(int *)0xC1742EC;
        *(unsigned int *)((t6 + 0x18)) = ((int)((*(int *)((t6 + 0x8))) + 0x7FFF) >> 15);
        t8 = *(int *)0xC1742EC;
        *(unsigned int *)((t8 + 0x14)) = ((((int)(*(int *)((t8 + 0x8))) >> 6) - (*(int *)((t8 + 0x18)))) - 1);
        *(unsigned int *)(((*(int *)0xC1742EC) + 0xC)) = (*(int *)(((int)stk + 0)));
        *(unsigned int *)(((*(int *)0xC1742EC) + 0x1C)) = 0x0;
        *(unsigned int *)(((*(int *)0xC1742EC) + 0x20)) = 0x0;
        *(unsigned int *)(((*(int *)0xC1742EC) + 0x2C)) = 0x0;
        t19 = FUN_0c16a4d0((*(int *)(((*(int *)0xC1742EC) + 0x4))), ((*(int *)0xC1742EC) + 0x34), 0x40);
        t51 = 0xFFFFFFFF;
        if (t19 == -1) {
        } else {
            t20 = *(int *)0xC1742EC;
            t21 = thunk_FUN_0c1606d4((t20 + 0x34), 0xC1714F0, 0xC);
            t51 = 0xFFFFFFF8;
            if ((t21 != 0) && (t22 = *(int *)0xC1742EC, t23 = *(signed char *)(((t20 + 0x34) + 0x10)), t24 = *(short *)((t22 + 0x0)), t24 == t23)) {
                *(unsigned short *)((t22 + 0x2)) = (*(signed char *)(((t20 + 0x34) + 0x11)));
                t27 = *(short *)(((*(int *)0xC1742EC) + 0x2));
                t51 = 0xFFFFFFF8;
                if ((t27 != 0) && (t27 != 1)) {
                } else {
                    fmMngClearBuf((*(int *)(((*(int *)0xC1742EC) + 0xC))), (*(int *)(((*(int *)0xC1742EC) + 0x8))));
                    t34 = fmMngReadSctAllData((*(int *)0xC1742EC));
                    t51 = 0x0;
                    if (t34 != 0) {
                        t51 = t34;
                    }
                }
            }
        }
    }
    return t51;
}

int FUN_0c034804(int a4, float f4, float f5, float f6, float f7, float f8)
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

    t0 = *(int *)0xC2A4658;
    t1 = 0x0;
    t2 = 0x28;
    u0 = f5;
    if (t0 != 0) {
        t3 = 0x13;
        if ((a4 != 7) && (a4 != 8)) {
            t4 = 0xF;
            if ((a4 == 5) || (a4 == 6)) {
                t5 = 0x13;
                if (t0 == 3) {
                } else {
                    t5 = 0xF;
                    if (t0 == 4) {
                        t5 = 0x12;
                    }
                }
                t4 = t5;
            }
            t3 = t4;
        }
        t0 = 0x0;
        if ((int)t3 > 0) {
            t4 = 0x0;
            for (;;) {
                t5 = ((int (*)(int, int, int, int, float, float, float, float, float))(FUN_0c03346e))(0xC0B7E5C, 0xC2A5808, (int)((float)(((t4 << 2) << 2) << 1) + f4), (int)f5, f4, f5, f6, f7, f8);
                t4 = (t4 + 0x1);
                if ((int)t4 >= (int)t3) {
                    break;
                }
            }
            t0 = t4;
        } else {
            u1 = f4;
            u2 = f5;
        }
        t3 = ((int (*)(int, int, int, int, float, float))(FUN_0c03346e))(0xC0B7E6C, 0xC2A5808, (int)((float)(((t0 << 2) << 2) << 1) + f4), (int)f5, u1, u2);
        t1 = t0;
        t2 = 0x428;
        u0 = (f5 + 4.0f);
    }
    t0 = *(int *)0xC2A4FB8;
    return FUN_0c0345ec(t2, (((((t0 << 2) + t0) << 1) + a4) + 0x7D), 0x0, ((float)(((t1 << 2) << 2) << 1) + f4), u0, ((*(float *)0xC2A5858) + -0.00999999978f));
}

int getRootDistance(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    int stk[4];
    register int t0;
    register int t1;
    register int t11;
    register int t22;
    register float u24;
    register float u26;
    int R1000;

    R1000 = *(int *)((int)stk + 0);

    R1000 = a7;
    t0 = FUN_0c04707e(a7, a9, a5);
    t1 = FUN_0c07ffac(t0);
    if ((int)t1 <= (int)0x1) {
        *(float *)((a10 + 0x0)) = (nlLength(a6, a8));
    } else {
        if ((int)t0 < 0) {
            FUN_0c07ff00();
        } else {
            FUN_0c07ff00();
        }
        t11 = R1000;
        *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + ((*(float *)((a6 + 0x0))) - (*(float *)((((((t11 << 1) + t11) << 2) + a4) + 0x0)))));
        *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + (((((struct o4_float *)(a6))->v)) - ((((struct o4_float *)(((((t11 << 1) + t11) << 2) + a4)))->v))));
        *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) + (((((struct o8_float *)(a6))->v)) - ((((struct o8_float *)(((((t11 << 1) + t11) << 2) + a4)))->v))));
        t22 = FUN_0c07ffac(t0);
        u24 = *(float *)0xC0471E0;
        u26 = (nlLength((((int)stk + 0) + 0x4), a8));
        u26 = u26 + u24 * ((float)(t22 - 1));
        *(float *)((a10 + 0x0)) = u26;
    }
    return t0;
}

int ADX_DecodeMonoFloat(int a4, int a5, int a6, int a7, int a8, int a9, float f4, float f5, float f6, float f7, float f8, float f9, float f10)
{
    int stk[2];
    register int t0;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register float u8;
    register float u9;
    register float u10;
    register float u11;
    register float u12;
    register float u13;
    register int t15;
    register int t16;
    register float u17;
    register float u19;
    register float u20;
    register float u22;
    register int t23;
    register float u6;
    register float u7;
    int R1000;
    int R1004;

    R1000 = *(int *)((int)stk + 0);
    R1004 = *(int *)((int)stk + 4);

    t0 = *(short *)((a7 + 0x0));
    R1004 = (a7 + 0x2);
    t2 = 0x24;
    t3 = a6;
    t4 = 0x0;
    t5 = a4;
    u8 = (float)((((short)(a9 >> 0)) << 2) << 2);
    u9 = 65536.0f;
    u10 = f5;
    u11 = (float)(t0 << 16);
    u12 = (float)((*(short *)(((a7 + 0x2) + 0x0))) << 16);
    u13 = f10;
    for (;;) {
        if ((int)t4 >= (int)a5) {
            t2 = a5;
            *(unsigned short *)((a7 + 0x0)) = ((unsigned int)(int)u11 >> 16);
            *(unsigned short *)(((R1004) + 0x0)) = ((unsigned int)(int)u12 >> 16);
            return t2;
        }
        t15 = *(short *)((t5 + 0x0));
        if ((0x8000 & (short)((unsigned char)((int)t15 >> 8) | ((t15 << 8) & 0xFFFFFF00))) != 0) {
            break;
        }
        R1000 = 0x0;
        t5 = (t5 + 0x2);
        u8 = (float)(int)(((short)((unsigned char)((int)t15 >> 8) | ((t15 << 8) & 0xFFFFFF00)) & 0x1FFF) + 0x1);
        u13 = u8;
        for (;;) {
            u8 = ((float)((((short)(a9 >> 0)) << 2) << 2) / 65536.0f);
            u8 = (u8 * u12);
            t16 = *(signed char *)((t5 + 0x0));
            t5 = (t5 + 0x1);
            u6 = ((float)((((short)(a8 >> 0)) << 2) << 2) / 65536.0f);
            t2 = 0xC172FD0;
            u17 = u8;
            u17 = u17 + u6 * u11;
            u8 = u17;
            u9 = (*(float *)((((unsigned char)t16 << 2) + t2)));
            u6 = u13;
            u10 = u11;
            u19 = u8;
            u19 = u19 + u6 * u9;
            u8 = u19;
            u6 = ((float)((((short)(a8 >> 0)) << 2) << 2) / 65536.0f);
            t2 = 0xC1733D0;
            u7 = u8;
            u8 = ((float)((((short)(a9 >> 0)) << 2) << 2) / 65536.0f);
            u8 = (u8 * u10);
            u12 = u7;
            u20 = u8;
            u20 = u20 + u6 * u7;
            u8 = u20;
            u6 = u13;
            *(unsigned short *)((t3 + 0x0)) = ((unsigned int)(int)u7 >> 16);
            t3 = (t3 + 0x2);
            u9 = (*(float *)((((unsigned char)t16 << 2) + t2)));
            u22 = u8;
            u22 = u22 + u6 * u9;
            u8 = u22;
            u9 = u8;
            u11 = u8;
            *(unsigned short *)((t3 + 0x0)) = (short)((unsigned int)(int)u9 >> 16);
            t3 = (t3 + 0x2);
            t23 = R1000;
            R1000 = (t23 + 0x2);
            if ((int)(t23 + 0x2) >= (int)0x20) {
                break;
            }
        }
        t4 = (t4 + 0x1);
    }
    return t4;
}

int FUN_0c033578(int a4, int a5, float f4, float f5, float f6)
{
    register float u6;
    register float u11;
    int t14;
    register int t19;
    register float u36;
    int t0;
    register float u43;

    if ((a5 != 0) && (t0 = *(signed char *)((a5 + 0x0)), t0 != 0)) {
        FUN_0c02877a(0x1);
        FUN_0c027fdc((*(float *)0xC2A5858));
        FUN_0c027f28((0xF & a4));
        u6 = f6;
        if ((0x400000 & a4) != 0) {
            u6 = (f6 * 0.649999976f);
        }
        u11 = u6;
        if ((0x200000 & a4) != 0) {
            u11 = (u6 * 1.5f);
        }
        pfSize(u6, u11);
        if ((0xF0 & a4) != 0) {
            t14 = *(int *)(((((int)(0xF0 & a4) >> 4) << 2) + 0xC0B72F0));
            t19 = t14;
            if ((0x100 & a4) != 0) {
                t19 = ((((((t14 & 0xFF0000) >> 1) & 0xFF0000) | (((t14 & 0xFF00) >> 1) & 0xFF00)) | (unsigned char)((unsigned int)(unsigned char)t14 >> 1)) | (0xFF000000 & t14));
            }
            FUN_0c02803a(t19, t19, t19, t19);
        }
        if ((0x200 & a4) != 0) {
            u43 = (f4 - (((FUN_0c02806c(a5)) * 0.5f)));
        } else {
            u36 = f4;
            if ((a4 & 0x400) != 0) {
                u36 = (f4 - (FUN_0c02806c(a5)));
            }
            u43 = u36;
        }
        FUN_0c027fbe(u43, f5);
        FUN_0c02842e(a5);
        return FUN_0c02877a(0x0);
    }
    return 0x4;
}

int FUN_0c038b04(int a4, int a5, float f4, float f5, float f6)
{
    register float u6;
    register float u11;
    int t14;
    register int t19;
    register float u36;
    int t0;
    register float u43;

    if ((a5 != 0) && (t0 = *(signed char *)((a5 + 0x0)), t0 != 0)) {
        FUN_0c02877a(0x1);
        FUN_0c027fdc((*(float *)0xC2A5858));
        FUN_0c027f28((0xF & a4));
        u6 = f6;
        if ((0x400000 & a4) != 0) {
            u6 = (f6 * 0.649999976f);
        }
        u11 = u6;
        if ((0x200000 & a4) != 0) {
            u11 = (u6 * 1.5f);
        }
        pfSize(u6, u11);
        if ((0xF0 & a4) != 0) {
            t14 = *(int *)(((((int)(0xF0 & a4) >> 4) << 2) + 0xC0B72F0));
            t19 = t14;
            if ((0x100 & a4) != 0) {
                t19 = ((((((t14 & 0xFF0000) >> 1) & 0xFF0000) | (((t14 & 0xFF00) >> 1) & 0xFF00)) | (unsigned char)((unsigned int)(unsigned char)t14 >> 1)) | (0xFF000000 & t14));
            }
            FUN_0c02803a(t19, t19, t19, t19);
        }
        if ((0x200 & a4) != 0) {
            u43 = (f4 - (((FUN_0c02806c(a5)) * 0.5f)));
        } else {
            u36 = f4;
            if ((a4 & 0x400) != 0) {
                u36 = (f4 - (FUN_0c02806c(a5)));
            }
            u43 = u36;
        }
        FUN_0c027fbe(u43, f5);
        FUN_0c0286c6(a5);
        return FUN_0c02877a(0x0);
    }
    return 0x4;
}

int kmSetFramebufferTexture(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = 0x280;
    t1 = 0x1E0;
    if (((((struct o0_int *)0xC3008EC)->v)) == 1) {
    } else {
        t2 = 0x140;
        if ((((((struct o4_int *)0xC3008EC)->v)) & 16) != 0) {
            t2 = 0x280;
        }
        t1 = 0xF0;
        if ((((((struct o4_int *)0xC3008EC)->v)) & 32) != 0) {
            t1 = 0x1E0;
        }
        t0 = t2;
    }
    t2 = (((struct o8_int *)0xC3008EC)->v);
    switch (t2) {
    case 3:
        *(unsigned int *)((a4 + 0x4)) = 0x1;
        *(unsigned int *)((a4 + 0x8)) = 0x0;
        break;
    case 0:
        *(unsigned int *)((a4 + 0x4)) = 0x1;
        *(unsigned int *)((a4 + 0x8)) = 0x8000000;
        break;
    case 1:
        *(unsigned int *)((a4 + 0x4)) = 0x1;
        *(unsigned int *)((a4 + 0x8)) = 0x0;
        break;
    default:
        return 0x4;
    }
    *(unsigned int *)((a4 + 0x0)) = 0x2;
    *(unsigned int *)((a4 + 0xC)) = 0x400;
    *(unsigned int *)((a4 + 0x10)) = 0x400;
    *(unsigned int *)((a4 + 0x14)) = ((t0 * t1) << 1);
    *(unsigned int *)((a4 + 0x18)) = 0x10;
    *(unsigned int *)((a4 + 0x1C)) = (((*(int *)((((*(int *)0xC1740A4) << 2) + 0xC300C04))) << 2) << 1);
    return 0x0;
}

int FUN_0c03ec48(int a4, int a5, int a6)
{
    int stk[1];

    register int R1;
    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    v0_4 = a4;
    v0_2 = a5;
    v0_3 = a6;
    *(unsigned int *)(((int)stk + 0)) = v0_3;
    v0_3 = (v0_2);
    v0_0 = (v0_4);
    if (((int)v0_4 < 0)) goto L_C03ED30;
    if (((int)(*(int *)(((int)stk + 0))) < 0)) goto L_C03ED30;
    if (((int)v0_3 >= (int)0x2)) goto L_C03EC78;
    v0_1 = (FUN_0c03f154(0x1)) == 4;
    if (v0_1) goto L_C03ED30;
    L_C03EC78:;
    v0_1 = *(int *)(((int)stk + 0));
    v0_2 = (0xC28DD0C);
    v0_5 = ((v0_0 * 0x788));
    v0_1 = ((((v0_1 << 1) + v0_1) << 2));
    v0_4 = (0xC2A4FE0);
    if ((v0_3 != 0)) goto L_C03ECB0;
    v0_3 = FUN_0c03f154(0x1);
    v0_2 = ((((((0x109C + v0_2) + v0_5) + 0x8) + (v0_3 * 0x78)) + v0_1));
    v0_3 = (((v0_4 + 0x8) + (v0_3 * 0x78)));
    L_C03ECD8:;
    v0_1 = (0xA);
    L_C03ECFE:;
    v0_4 = (0x0);
    if (((int)v0_1 <= 0)) goto L_C03ED30;
    L_C03ED04:;
    v0_5 = (((((v0_4 << 1) + v0_4) << 2) + v0_3));
    if (((*(int *)((v0_2 + 0x0))) != (*(int *)((((((v0_4 << 1) + v0_4) << 2) + v0_3) + 0x0))))) goto L_C03ED2A;
    if (((*(int *)((v0_2 + 0x4))) != (*(int *)((v0_5 + 0x4))))) goto L_C03ED2A;
    if ((v0_0 != (*(signed char *)((v0_5 + 0x9))))) goto L_C03ED2A;
    v0_0 = (v0_4);
    L_C03ED32:;
    return v0_0;
    L_C03ED2A:;
    v0_5 = (int)(v0_4 + 0x1) < (int)v0_1;
    v0_4 = ((v0_4 + 0x1));
    if (v0_5) goto L_C03ED04;
    L_C03ED30:;
    v0_0 = (0xFFFFFFFF);
    goto L_C03ED32;
    L_C03ECB0:;
    if ((v0_3 != 1)) goto L_C03ECDC;
    v0_3 = FUN_0c03f154(0x1);
    v0_2 = ((((0x1E8 + (v0_5 + (0x109C + v0_2))) + (v0_3 * 0x78)) + v0_1));
    v0_3 = (((0x1E8 + v0_4) + (v0_3 * 0x78)));
    goto L_C03ECD8;
    L_C03ECDC:;
    v0_2 = (((0x3C8 + (v0_5 + (0x109C + v0_2))) + ((v0_3 - 2) * 0x3C)) + v0_1);
    v0_1 = (0x5);
    v0_2 = v0_2;
    v0_3 = (((0x3C8 + v0_4) + ((v0_3 - 2) * 0x3C)));
    goto L_C03ECFE;
}

int FUN_0c03ef3e(void)
{

    register int R1;
    register int R3;
    int R7;
    register int R9;
    register int R12;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    v0_4 = *(short *)0xC28ED98;
    v0_0 = (0x108C);
    v0_1 = (0xC2A4F94);
    v0_2 = (0xC28DD0C);
    v0_3 = ((((*(int *)0xC2A465C) * 0x788) + 0xC28EDA8));
    R7 = ((unsigned short)v0_4);
    if (((0x1 & (unsigned short)v0_4) != 0)) goto L_C03EF7A;
    v0_3 = *(int *)((v0_3 + 0x4));
    v0_0 = ((v0_3 & 0x1F));
    if (((v0_3 & 0x1F) != 31)) goto L_C03F038;
    (((struct o108C_ushort *)(v0_2))->v) = (((((struct o108C_short *)(v0_2))->v)) | 0x1);
    *(unsigned int *)((v0_1 + 0x0)) = ((*(int *)((v0_1 + 0x0))) | 0x1);
    v0_0 = (0x108C);
    L_C03F038:;
    return v0_0;
    L_C03EF7A:;
    if (((0x2 & R7) != 0)) goto L_C03EFBC;
    if ((((*(int *)((v0_3 + 0x4))) & 0x1E0) != 0x1E0)) goto L_C03F038;
    *(unsigned short *)((v0_2 + v0_0)) = ((*(short *)((v0_2 + v0_0))) | 0x2);
    *(unsigned int *)((v0_1 + 0x0)) = ((*(int *)((v0_1 + 0x0))) | 0x2);
    goto L_C03F038;
    L_C03EFBC:;
    if (((0x4 & R7) != 0)) goto L_C03EFDC;
    if ((((*(int *)((v0_3 + 0x4))) & 0xE00) != 0xE00)) goto L_C03F038;
    *(unsigned short *)((v0_2 + v0_0)) = ((*(short *)((v0_2 + v0_0))) | 0x4);
    *(unsigned int *)((v0_1 + 0x0)) = ((*(int *)((v0_1 + 0x0))) | 0x4);
    goto L_C03F038;
    L_C03EFDC:;
    if (((0x8 & R7) != 0)) goto L_C03EFFC;
    if ((((*(int *)((v0_3 + 0x4))) & 0x3000) != 0x3000)) goto L_C03F038;
    *(unsigned short *)((v0_2 + v0_0)) = ((*(short *)((v0_2 + v0_0))) | 0x8);
    *(unsigned int *)((v0_1 + 0x0)) = ((*(int *)((v0_1 + 0x0))) | 0x8);
    goto L_C03F038;
    L_C03EFFC:;
    if (((0x10 & R7) != 0)) goto L_C03F01C;
    if ((((*(int *)((v0_3 + 0x4))) & 0x4000) != 0x4000)) goto L_C03F038;
    *(unsigned short *)((v0_2 + v0_0)) = ((*(short *)((v0_2 + v0_0))) | 0x10);
    *(unsigned int *)((v0_1 + 0x0)) = ((*(int *)((v0_1 + 0x0))) | 0x10);
    goto L_C03F038;
    L_C03F01C:;
    v0_4 = (0x20);
    if (((R7 & 0x20) != 0)) goto L_C03F038;
    if ((((*(int *)((v0_3 + 0x4))) & 0x8000) != 0x8000)) goto L_C03F038;
    *(unsigned short *)((v0_2 + v0_0)) = ((*(short *)((v0_2 + v0_0))) | v0_4);
    *(unsigned int *)((v0_1 + 0x0)) = ((*(int *)((v0_1 + 0x0))) | v0_4);
    goto L_C03F038;
}

int mpdrv_make_devicedata(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t0 = *(int *)0xC30817C;
    t1 = *(int *)0xC30817C;
    t2 = *(int *)0xC30817C;
    t3 = *(int *)0xC30817C;
    t4 = (((struct o10B4_int *)(t3))->v);
    t5 = *(int *)(((a4 << 2) + ((t3 + 0xFE8) + (((((((-t4) + 0x1) << 1) + ((-t4) + 0x1)) << 2) << 2) << 1))));
    *(unsigned char *)((((t1 + 0x28) + (a4 * 0x2C)) + 0x1)) = (*(signed char *)((((t1 + 0x28) + (a4 * 0x2C)) + 0x0)));
    *(unsigned char *)((((t1 + 0x28) + (a4 * 0x2C)) + 0x5)) = (*(signed char *)((((t1 + 0x28) + (a4 * 0x2C)) + 0x4)));
    if ((*(int *)((((t1 + 0x28) + (a4 * 0x2C)) + 0x1C))) != 0) {
        *(unsigned int *)((((t1 + 0x28) + (a4 * 0x2C)) + 0x20)) = (*(int *)((((t1 + 0x28) + (a4 * 0x2C)) + 0x1C)));
        *(unsigned int *)((((t1 + 0x28) + (a4 * 0x2C)) + 0x1C)) = 0x0;
    }
    t3 = *(signed char *)((a4 + 0xC171A94));
    if ((unsigned char)(t3 & 0x1F) != 0) {
        t4 = (mpdrv_make_exdevicedata((t3 & 0x1F), (((a5 << 2) << 1) + (t0 + 0x4)), ((t2 + 0x44C) + (a4 * 0x78)), ((t1 + 0x28) + (a4 * 0x2C)), (t5)));
    } else {
        t4 = (mpdrv_make_rootdevicedata(a5, ((t2 + 0x44C) + (a4 * 0x78)), ((t1 + 0x28) + (a4 * 0x2C)), t5));
    }
    if ((*(signed char *)((((t1 + 0x28) + (a4 * 0x2C)) + 0x7))) != 0) {
        t0 = *(int *)0xC30817C;
        t2 = (((struct o10B4_int *)(t0))->v);
        *(unsigned int *)((((t1 + 0x28) + (a4 * 0x2C)) + 0x10)) = (*(int *)((((((((((-t2) + 0x1) << 1) + ((-t2) + 0x1)) << 2) << 2) << 1) + (t0 + 0xFE8)) + (a4 << 2))));
    }
    if ((*(signed char *)((((t1 + 0x28) + (a4 * 0x2C)) + 0xD))) != 0) {
        *(unsigned char *)((((t1 + 0x28) + (a4 * 0x2C)) + 0xC)) = 0x0;
        *(unsigned char *)((((t1 + 0x28) + (a4 * 0x2C)) + 0xD)) = 0x0;
    }
    *(unsigned char *)((((t1 + 0x28) + (a4 * 0x2C)) + 0xC)) = ((*(signed char *)((((t1 + 0x28) + (a4 * 0x2C)) + 0xC))) | (*(signed char *)((((t1 + 0x28) + (a4 * 0x2C)) + 0x2))));
    *(unsigned char *)((((t1 + 0x28) + (a4 * 0x2C)) + 0xC)) = ((*(signed char *)((((t1 + 0x28) + (a4 * 0x2C)) + 0xC))) | (*(signed char *)((((t1 + 0x28) + (a4 * 0x2C)) + 0x3))));
    return t4;
}

int ADXB_DecodeHeaderAiff(int a4, int a5, int a6)
{
    int stk[9];
    register int t2;

    *(unsigned int *)(((int)stk + 28)) = a5;
    *(unsigned int *)(((int)stk + 32)) = a6;
    *(unsigned short *)((a4 + 0x2)) = 0x1;
    *(int *)((int)stk + 20) = (a4 + 0x10);
    *(int *)((int)stk + 16) = (a4 + 0x18);
    *(int *)((int)stk + 12) = (a4 + 0x14);
    *(int *)((int)stk + 8) = (a4 + 0xE);
    *(int *)((int)stk + 4) = (a4 + 0xF);
    *(int *)((int)stk + 0) = (a4 + 0xD);
    t2 = ADX_DecodeInfoAiff((*(int *)(((int)stk + 28))), (*(int *)(((int)stk + 32))), (((int)stk + 0) + 0x18), (a4 + 0xC), (a4 + 0xD), (a4 + 0xF), (a4 + 0xE), (a4 + 0x14), (a4 + 0x18), (a4 + 0x10));
    if ((int)t2 < 0) {
        return 0x0;
    }
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    (((struct o4A_ushort *)(a4))->v) = 0x0;
    (((struct o48_ushort *)(a4))->v) = 0x0;
    (((struct o26_ushort *)(a4))->v) = 0x0;
    (((struct o24_ushort *)(a4))->v) = 0x0;
    *(unsigned int *)((a4 + 0x34)) = 0x0;
    *(unsigned int *)((a4 + 0x30)) = 0x0;
    *(unsigned int *)((a4 + 0x2C)) = 0x0;
    *(unsigned int *)((a4 + 0x28)) = 0x0;
    *(unsigned int *)((a4 + 0x20)) = 0x0;
    (((struct o58_uint *)(a4))->v) = (*(signed char *)((a4 + 0xE)));
    (((struct o5C_uint *)(a4))->v) = (*(signed char *)((a4 + 0xF)));
    (((struct o60_uint *)(a4))->v) = (*(int *)((a4 + 0x10)));
    (((struct o64_uint *)(a4))->v) = (*(int *)((a4 + 0x3C)));
    (((struct o68_uint *)(a4))->v) = ((((struct o40_int *)(a4))->v));
    (((struct o6C_uint *)(a4))->v) = ((((struct o44_int *)(a4))->v));
    (((struct o7C_ushort *)(a4))->v) = ((((struct o48_short *)(a4))->v));
    (((struct o7E_ushort *)(a4))->v) = ((((struct o4A_short *)(a4))->v));
    (((struct o80_uint *)(a4))->v) = (a4 + 0x4C);
    (((struct o9C_uint *)(a4))->v) = 0x0;
    (((struct o98_uint *)(a4))->v) = 0x0;
    (((struct oA8_ushort *)(a4))->v) = 0x3;
    if ((*(signed char *)((a4 + 0xD))) == 8) {
        (((struct oAA_ushort *)(a4))->v) = 0x1;
    } else {
        (((struct oAA_ushort *)(a4))->v) = 0x0;
    }
    memset((a4 + 0x4C), 0x0, 0x4);
    return (*(short *)(((int)stk + 24)));
}

int FUN_0c029866(int a4, int a5, int a6, float f4)
{
    int stk[13];
    register float t0;
    register int t39;
    register float u8;
    register int t10;
    register int t11;
    register int t12;
    register int t13;
    register int t15;
    register int t23;
    register float t25;
    register int t9;
    register int t14;
    register float u16;
    register float u17;
    register int t31;
    register float u32;
    register float u33;

    t0 = FUN_0c073c60(a5);
    t39 = 0x0;
    if (t0 == 0.0f) {
    } else {
        FUN_0c07ff00();
        FUN_0c07ff00();
        *(float *)(((int)stk + 44)) = f4;
        *(float *)(((int)stk + 48)) = (f4 + f4);
        *(float *)(((int)stk + 40)) = f4;
        FUN_0c073360();
        nlUnitVectorsd(a5, (((int)stk + 0) + 0x4));
        nlRotateV((((int)stk + 0) + 0x4), 0xC09DFA4);
        FUN_0c073a40(a4);
        MakeCollisionCellList(a4, a5);
        u8 = (((struct o8_float *)(a6))->v);
        *(unsigned int *)(((int)stk + 0)) = 0xC270F04;
        t10 = 0xC270F04;
        t11 = 0x0;
        t12 = 0xC270EDC;
        t13 = 0xC270F04;
        t15 = a5;
        for (;;) {
            if ((unsigned int)t12 >= (unsigned int)(*(int *)(((int)stk + 0)))) {
                break;
            }
            t10 = (*(int *)((t12 + 0x0)));
            t12 = (t12 + 0x4);
            if (t10 != 0) {
                t23 = *(short *)((t10 + 0x8));
                t15 = t10;
                t14 = t23;
                t15 = (t15 + 0xC);
                for (;;) {
                    if (t14 == 0) {
                        break;
                    }
                    t10 = a4;
                    t25 = nlLength(t10, ((*(int *)((t15 + 0x0))) + 0x14));
                    t9 = (*(int *)((t15 + 0x0)));
                    t23 = 0x10;
                    u17 = (*(float *)((t9 + t23)));
                    t23 = 0x30;
                    u16 = (*(float *)((((int)stk + 0) + t23)));
                    u16 = (u16 + u17);
                    if (u16 > t25) {
                        t10 = ((int)stk + 0);
                        t10 = (t10 + 0x10);
                        t23 = (FUN_0c029962(t10, (*(int *)((t15 + 0x0))), a6));
                        t11 = (t11 | t23);
                    } else {
                        t31 = t9;
                        u32 = u16;
                        u33 = u17;
                    }
                    u16 = u32;
                    u17 = u33;
                    t15 = (t15 + 0x4);
                    t9 = t31;
                    t14 = (t14 - 1);
                }
                u17 = (*(float *)((t13 + 0x0)));
                u16 = ((((struct o8_float *)(a6))->v));
                u17 = (u17 * u8);
                if (u16 > u17) {
                    t13 = (t13 + 0x4);
                    continue;
                }
                break;
            }
            break;
        }
        nlPopMatrix(0x1);
        t39 = t11;
    }
    return t39;
}

int FUN_0c060d86(int a4, float f4)
{
    int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    t2 = *(signed char *)0xC2B9C5B;
    if ((t2 & 16) != 0) {
        if (a4 != 0) {
            if (((*(int *)((a4 + 0xC))) == 3) && (t0 = *(int *)((a4 + 0x0)), t1 = (((struct o80_int *)(t0))->v), (int)t1 >= (int)0x3)) {
                *(volatile signed char *)(((*(int *)((a4 + 0x0))) + 0xFE));
            }
            t0 = FUN_0c05ff5c(((*(int *)((a4 + 0x0))) + 0x70));
            if ((int)t0 > 0) {
                t1 = 0xC8C0734;
                u0 = 15045.0f;
                u1 = (float)((*(int *)0xC8C0734) * t0);
            } else {
                t1 = 0xC8C0E98;
                u0 = 11686.0f;
                u1 = (float)(-((*(int *)0xC8C0E98) * t0));
            }
            u2 = 0.0f;
            if (0.0f > (u1 / u0)) {
            } else {
                u3 = (u1 / u0);
                if (!((float)(*(int *)((t1 + 0x0))) > (u1 / u0))) {
                    u3 = ((float)(*(int *)((t1 + 0x0))) + -1.0f);
                }
                u2 = u3;
            }
            FUN_0c05f470(0xC2B9C1C, t1, u2, (*(float *)0xC060FC8));
            (((struct o0_float *)0xC2B9C24)->v) = 0.0f;
            (((struct o4_uint *)0xC2B9C24)->v) = 0x0;
            *(unsigned int *)0xC2B9CA0 = ((*(int *)0xC2B9CA0) + 0x1);
            return 0xC2B9CA0;
        }
        return FUN_0c06017e();
    }
    return t2;
}

int FUN_0c08f8c0(int a4)
{
    register int t0;

    *(unsigned int *)(((a4 << 2) + 0xC2C97CC)) = 0x0;
    if ((*(signed char *)((((a4 * 0x154) + 0xC2C8D2C) + 0xA))) == 0) {
        t0 = FUN_0c08f37a(a4);
        if ((int)t0 < 0) {
            return t0;
        }
    }
    t0 = vmsfs_isformat(a4);
    if ((int)t0 < 0) {
        return 0x0;
    }
    if ((*(signed char *)((((a4 * 0x154) + 0xC2C8D2C) + 0xB))) == 0) {
        t0 = FUN_0c08f3f8(a4);
        if ((int)t0 < 0) {
            if (t0 == 0xFFFF0000) {
                *(unsigned int *)(((a4 << 2) + 0xC2C97CC)) = 0x1;
                return 0x0;
            }
            return t0;
        }
    }
    if ((*(signed char *)((((a4 * 0x154) + 0xC2C8D2C) + 0xC))) == 0) {
        t0 = FUN_0c08ec98(a4);
        if ((int)t0 < 0) {
            if (t0 == 0xFFFF0000) {
                *(unsigned int *)(((a4 << 2) + 0xC2C97CC)) = 0x1;
                return 0x0;
            }
            return t0;
        }
    }
    *(unsigned char *)((((a4 * 0x154) + 0xC2C8D2C) + 0xA)) = 0x1;
    *(unsigned char *)((((a4 * 0x154) + 0xC2C8D2C) + 0xB)) = 0x1;
    *(unsigned char *)((((a4 * 0x154) + 0xC2C8D2C) + 0xC)) = 0x1;
    return 0x0;
}

int pdVibStart(int a4, int a5, int a6)
{
    int stk[18];
    register int t1;
    register int t49;
    register int t4;
    register int t5;
    register int t6;
    int t8;
    register int t9;
    register int t15;
    register int t10;
    register int t21;
    register int t28;
    register int t31;
    register int t46;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a6;
    t1 = pdVibIsReady((*(int *)(((int)stk + 4))));
    t49 = 0xFFFFFFFE;
    if (t1 == 0) {
    } else {
        if ((unsigned int)0x0 < (unsigned int)(*(int *)(((int)stk + 0)))) {
            t4 = (((int)stk + 0) + 0x8);
            t5 = 0x0;
            t6 = a5;
            for (;;) {
                t8 = *(signed char *)((t6 + 0x1));
                *(unsigned char *)((t4 + 0x0)) = ((((unsigned char)(*(signed char *)((t6 + 0x0))) << 2) << 2) | (0x1 & t8));
                t9 = *(signed char *)((t6 + 0x2));
                t4 = (t4 + 0x1);
                t15 = t9;
                if (((unsigned char)t8 & 0x88) == 0) {
                    t10 = t9;
                    if ((signed char)t9 == 1) {
                        t10 = 0x2;
                    }
                    t15 = t10;
                    if ((signed char)t10 == -1) {
                        t15 = 0xFFFFFFFE;
                    }
                }
                t21 = (0x70 & (((signed char)t15 << 2) << 2));
                if ((int)(signed char)t15 > 0) {
                } else {
                    t21 = 0x0;
                    if ((int)(signed char)t15 < 0) {
                        t21 = (0x7 & (-(signed char)t15));
                    }
                }
                *(unsigned char *)((t4 + 0x0)) = (t21 | (0x88 & t8));
                t4 = (t4 + 0x1);
                if ((int)(unsigned char)(*(signed char *)((t6 + 0x3))) < (int)0xF) {
                    *(unsigned char *)((t4 + 0x0)) = 0xF;
                } else {
                    *(unsigned char *)((t4 + 0x0)) = (*(signed char *)((t6 + 0x3)));
                }
                t4 = (t4 + 0x1);
                t28 = t4;
                t4 = (t4 + 0x1);
                t31 = 0x0;
                if (((unsigned char)t8 & 0x88) != 0) {
                    t31 = (unsigned char)(*(signed char *)((t6 + 0x4)));
                }
                *(unsigned char *)((t28 + 0x0)) = t31;
                t5 = (t5 + 0x1);
                t6 = (t6 + 0x8);
                if ((unsigned int)t5 >= (unsigned int)(*(int *)(((int)stk + 0)))) {
                    break;
                }
            }
        }
        t46 = kdSetSetCondition();
        t49 = 0x0;
        if ((int)t46 < 0) {
            t49 = 0xFFFFFFFF;
        }
    }
    return t49;
}

int FUN_0c14ee68(int a4, int a5)
{
    int stk[3];
    int t0;
    register int t29;
    register int t7;

    *(unsigned int *)(((int)stk + 8)) = a5;
    t0 = FUN_0c14e916(a4);
    (((struct o72_uchar *)(a4))->v) = (*(int *)(((int)stk + 8)));
    t29 = t0;
    if ((t0 != 3) && (t0 != 4)) {
    } else {
        if ((*(int *)(((int)stk + 8))) == 1) {
            *(volatile int *)((a4 + 0xC));
            thunk_mwRnaSetPlaySw();
            t7 = 0x7A120;
            for (;;) {
                t7 = (t7 - 0x1);
                if (t7 == 0) {
                    break;
                }
            }
            mwRnaAdjustBuf((*(int *)((a4 + 0xC))));
            *(volatile int *)((a4 + 0xC));
            thunk_mwRnaGetTime();
            (((struct o9C_uint *)(a4))->v) = (int)(((float)(*(int *)(((int)stk + 0))) / (float)(*(int *)(((int)stk + 4)))) * (float)(*(int *)0xC2D1BEC));
            t29 = 0x9C;
        } else {
            *(volatile int *)((a4 + 0xC));
            thunk_mwRnaSetPlaySw();
            *(volatile int *)((a4 + 0xC));
            thunk_mwRnaGetTime();
            (((struct o9C_uint *)(a4))->v) = (int)(((float)(*(int *)(((int)stk + 0))) / (float)(*(int *)(((int)stk + 4)))) * (float)(*(int *)0xC2D1BEC));
            (((struct oA0_uint *)(a4))->v) = (*(int *)0xC173D68);
            t29 = 0xA0;
        }
    }
    return t29;
}

void FUN_0c0390d8(int a4, int a5, float f4, float f5, float f6, float f7)
{
    int t0;
    register float u11;
    register float u4;
    register float u8;

    if ((int)a4 >= 0) {
        if (a4 != 0) {
            if (a4 != 3) {
                if ((a4 != 1) && (a4 != 4)) {
                    t0 = *(int *)0xC2A5894;
                    u11 = (f6 * 1.0f);
                    if ((t0 != 0) && (t0 != 3)) {
                        if ((t0 != 1) && (t0 != 4)) {
                            u4 = f6;
                            if ((t0 == 2) || (t0 == 5)) {
                                u4 = (f6 * ((((struct o4_float *)0xC039370)->v)));
                            }
                            u8 = u4;
                        } else {
                            u8 = (f6 * ((((struct o0_float *)0xC039370)->v)));
                        }
                        u11 = u8;
                    }
                    FUN_0c038b04(0x203, a5, f4, f5, u11);
    return;
                }
                FUN_0c038b04(0x203, a5, f4, f5, (((f7 - f6) / (1.0f + 1.0f)) + f6));
    return;
            }
            FUN_0c038b04(0x203, a5, f4, f5, f7);
    return;
        }
        *(unsigned int *)0xC2A5894 = 0x0;
        FUN_0c07c8be(0x605A9);
        FUN_0c038b04(0x203, a5, f4, f5, f7);
    return;
    }
}

int FUN_0c07f6d8(int a4, int a5, int a6)
{
    int stk[3];
    register int t0;
    register int t3;
    register int t9;
    register int t14;
    register int t16;
    register int t22;
    register int t28;
    register int t34;
    register int t40;
    int t11;

    *(unsigned int *)(((int)stk + 8)) = a6;
    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    if (((int)a5 >= 0) && ((int)a5 <= (int)0x5)) {
        t0 = FUN_0c07e3d0(a4);
        if (t0 == 0) {
            FUN_0c07e57c((((int)stk + 0) + 0x4));
            t3 = FUN_0c07e63e((*(int *)(((int)stk + 4))), ((int)stk + 0));
            if (t3 != 0) {
                return t3;
            }
            t9 = *(int *)0xC147740;
            if (((((((struct o9DC_int *)(t9))->v)) & 0x80000000) != 0) && (t11 = *(int *)(((int)stk + 4)), t11 == 1)) {
                t14 = *(int *)(((int)stk + 0));
                if (t14 != 1) {
                    if (t14 != 2) {
                        if (t14 != 3) {
                            if (t14 != 4) {
                                if (t14 != 5) {
                                    return 0xFFFFFFFD;
                                }
                                if ((0x1000 & (*(int *)(((0x2D0 + t9) + 0x4)))) == 0) {
                                    return 0xFFFFFFFD;
                                }
                                t16 = *(int *)(((int)stk + 0));
                                memcpy((*(int *)(((int)stk + 8))), ((((((t16 - 1) << 1) + (t16 - 1)) << 2) << 1) + (0xA50 + t9)), 0x18);
                                return 0x0;
                            }
                            if ((0x800 & (*(int *)(((0x2D0 + t9) + 0x4)))) == 0) {
                                return 0xFFFFFFFD;
                            }
                            t22 = *(int *)(((int)stk + 0));
                            memcpy((*(int *)(((int)stk + 8))), ((((((t22 - 1) << 1) + (t22 - 1)) << 2) << 1) + (0xA50 + t9)), 0x18);
                            return 0x0;
                        }
                        if ((0x400 & (*(int *)(((0x2D0 + t9) + 0x4)))) == 0) {
                            return 0xFFFFFFFD;
                        }
                        t28 = *(int *)(((int)stk + 0));
                        memcpy((*(int *)(((int)stk + 8))), ((((((t28 - 1) << 1) + (t28 - 1)) << 2) << 1) + (0xA50 + t9)), 0x18);
                        return 0x0;
                    }
                    if ((0x200 & (*(int *)(((0x2D0 + t9) + 0x4)))) == 0) {
                        return 0xFFFFFFFD;
                    }
                    t34 = *(int *)(((int)stk + 0));
                    memcpy((*(int *)(((int)stk + 8))), ((((((t34 - 1) << 1) + (t34 - 1)) << 2) << 1) + (0xA50 + t9)), 0x18);
                    return 0x0;
                }
                if ((0x100 & (*(int *)(((0x2D0 + t9) + 0x4)))) == 0) {
                    return 0xFFFFFFFD;
                }
                t40 = *(int *)(((int)stk + 0));
                memcpy((*(int *)(((int)stk + 8))), ((((((t40 - 1) << 1) + (t40 - 1)) << 2) << 1) + (0xA50 + t9)), 0x18);
                return 0x0;
            }
            return 0xFFFFFFFD;
        }
        return t0;
    }
    return 0xFFFFFFFE;
}

int FUN_0c14f130(int a4, int a5, int a6, int a7)
{
    int stk[10];
    register int t0;
    register int t35;
    register int t1;
    register int t7;
    register int t9;
    register int t15;
    register int t18;
    register int t21;
    register int t23;
    register int t29;
    register int t32;

    t0 = *(int *)((a4 + 0x14));
    t35 = 0x0;
    if (t0 == 0) {
    } else {
        t1 = a6;
        if ((int)a6 < 0) {
            t1 = (a6 + 0x1F);
        }
        t7 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x18)))))(t0, 0x0, (((int)t1 >> 5) * ((((a5 << 2) << 1) + a5) << 1)), (((int)stk + 0) + 0x8), *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
        t9 = (int)((int)(*(int *)(((int)stk + 12))) / (int)((((a5 << 2) << 1) + a5) << 1));
        memset((*(int *)(((int)stk + 8))), 0x0, (t9 * ((((a5 << 2) << 1) + a5) << 1)));
        SJ_SplitChunk((((int)stk + 0) + 0x8), (t9 * ((((a5 << 2) << 1) + a5) << 1)), (((int)stk + 0) + 0x8));
        t15 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x20)))))(t0, 0x1, (((int)stk + 0) + 0x8), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
        t18 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x1C)))))(t0, 0x0, ((int)stk + 0), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
        t21 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x18)))))(t0, 0x0, ((((int)t1 >> 5) * ((((a5 << 2) << 1) + a5) << 1)) - (t9 * ((((a5 << 2) << 1) + a5) << 1))), (((int)stk + 0) + 0x8), *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
        t23 = (int)((int)(*(int *)(((int)stk + 12))) / (int)((((a5 << 2) << 1) + a5) << 1));
        memset((*(int *)(((int)stk + 8))), 0x0, (t23 * ((((a5 << 2) << 1) + a5) << 1)));
        SJ_SplitChunk((((int)stk + 0) + 0x8), (t23 * ((((a5 << 2) << 1) + a5) << 1)), (((int)stk + 0) + 0x8));
        t29 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x20)))))(t0, 0x1, (((int)stk + 0) + 0x8), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
        t32 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x1C)))))(t0, 0x0, ((int)stk + 0), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
        t35 = (((((int)((int)((0x0 + (t9 * ((((a5 << 2) << 1) + a5) << 1))) + (t23 * ((((a5 << 2) << 1) + a5) << 1))) / (int)((((a5 << 2) << 1) + a5) << 1))) << 2) << 2) << 1);
    }
    return t35;
}

int FUN_0c16137e(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13)
{
    if ((int)a5 < (int)0x10) {
        return 0xFFFFFFFF;
    }
    if ((unsigned short)(((unsigned char)(*(signed char *)((a4 + 0x0))) << 8) | (unsigned char)(*(signed char *)((a4 + 0x1)))) != 0x8000) {
        return 0xFFFFFFFE;
    }
    *(unsigned short *)((a6 + 0x0)) = ((((unsigned char)(*(signed char *)(((a4 + 0x2) + 0x0))) << 8) | (unsigned char)(*(signed char *)(((a4 + 0x2) + 0x1)))) + 0x4);
    *(unsigned char *)((a7 + 0x0)) = (*(signed char *)((a4 + 0x4)));
    *(unsigned char *)((a9 + 0x0)) = (*(signed char *)((a4 + 0x5)));
    *(unsigned char *)((a8 + 0x0)) = (*(signed char *)((a4 + 0x6)));
    *(unsigned char *)((a10 + 0x0)) = (*(signed char *)((a4 + 0x7)));
    *(unsigned int *)((a11 + 0x0)) = (((((unsigned char)(*(signed char *)(((0x8 + a4) + 0x1))) << 16) | ((unsigned char)(*(signed char *)(((0x8 + a4) + 0x2))) << 8)) | (((unsigned char)(*(signed char *)(((0x8 + a4) + 0x0))) << 16) << 8)) | (unsigned char)(*(signed char *)(((0x8 + a4) + 0x3))));
    *(unsigned int *)((a12 + 0x0)) = (((((unsigned char)(*(signed char *)(((0xC + a4) + 0x1))) << 16) | ((unsigned char)(*(signed char *)(((0xC + a4) + 0x2))) << 8)) | (((unsigned char)(*(signed char *)(((0xC + a4) + 0x0))) << 16) << 8)) | (unsigned char)(*(signed char *)(((0xC + a4) + 0x3))));
    *(unsigned int *)((a13 + 0x0)) = ((int)((int)((((*(signed char *)((a9 + 0x0))) - 2) << 2) << 1) / (int)(*(signed char *)((a8 + 0x0)))));
    return 0x0;
}

int FUN_0c04ba86(float f4)
{
    int stk[6];
    register int t15;

    register int R1;
    register int R2;
    register int R3;
    register int R6;
    register int R9;
    register float F2;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    w0_0 = f4;
    w0_2 = *(float *)0xC175934;
    v0_0 = (0xC1758B4);
    w0_1 = (w0_2);
    if ((w0_2 > w0_0)) goto L_C04BAA8;
    if (((*(float *)0xC131610) > w0_0)) goto L_C04BAC0;
    L_C04BAA8:;
    v0_1 = (0xC04BB08);
    w0_2 = (-7.0f);
    if (((w0_0 + -7.0f) > w0_1)) goto L_C04BB6E;
    if ((!((w0_0 + w0_2) > (*(float *)0xC131610)))) goto L_C04BB6E;
    L_C04BAC0:;
    if ((!(0.0f > ((((struct o104_float *)(v0_0))->v))))) goto L_C04BB10;
    w0_0 = (1.20000005f);
    L_C04BB14:;
    FUN_0c07ff00();
    v0_0 = ((0x1A4 + t15));
    v0_1 = (0x4);
    v0_2 = (0xC02E42A);
    v0_2 = (t15);
    w0_1 = ((w0_0 * (1.0f + 1.0f)));
    L_C04BB62:;
    if ((v0_1 != 0)) goto L_C04BB34;
    v0_1 = ((FUN_0c058ca6(0x6A9, 0x0)));
    L_C04BB6E:;
    return v0_1;
    L_C04BB34:;
    FUN_0c07ff00();
    *(float *)(((int)stk + 16)) = w0_0;
    FUN_0c02e42a(((int)stk + 0), (((int)stk + 0) + 0xC), 0x5);
    *(float *)(((int)stk + 16)) = w0_1;
    FUN_0c02e42a(((int)stk + 0), (((int)stk + 0) + 0xC), 0x5);
    v0_0 = ((v0_0 + 0x84));
    v0_1 = ((v0_1 - 1));
    goto L_C04BB62;
    L_C04BB10:;
    w0_0 = ((*(float *)0xC04BC10));
    goto L_C04BB14;
}

int FUN_0c07f7d2(int a4, int a5, int a6)
{
    int stk[3];
    register int t0;
    register int t3;
    register int t9;
    register int t14;
    register int t16;
    register int t22;
    register int t28;
    register int t34;
    register int t40;
    int t11;

    *(unsigned int *)(((int)stk + 8)) = a6;
    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    if (((int)a5 >= 0) && ((int)a5 <= (int)0x5)) {
        t0 = FUN_0c07e3d0(a4);
        if (t0 == 0) {
            FUN_0c07e57c((((int)stk + 0) + 0x4));
            t3 = FUN_0c07e63e((*(int *)(((int)stk + 4))), ((int)stk + 0));
            if (t3 != 0) {
                return t3;
            }
            t9 = *(int *)0xC147740;
            if (((((((struct o9DC_int *)(t9))->v)) & 0x80000000) != 0) && (t11 = *(int *)(((int)stk + 4)), t11 == 1)) {
                t14 = *(int *)(((int)stk + 0));
                if (t14 != 1) {
                    if (t14 != 2) {
                        if (t14 != 3) {
                            if (t14 != 4) {
                                if (t14 != 5) {
                                    return 0xFFFFFFFD;
                                }
                                if ((0x1000 & (*(int *)(((0x2D0 + t9) + 0x4)))) == 0) {
                                    return 0xFFFFFFFD;
                                }
                                t16 = *(int *)(((int)stk + 0));
                                memcpy((*(int *)(((int)stk + 8))), ((((((t16 - 1) << 1) + (t16 - 1)) << 2) << 1) + (0xA50 + t9)), 0x10);
                                return 0x0;
                            }
                            if ((0x800 & (*(int *)(((0x2D0 + t9) + 0x4)))) == 0) {
                                return 0xFFFFFFFD;
                            }
                            t22 = *(int *)(((int)stk + 0));
                            memcpy((*(int *)(((int)stk + 8))), ((((((t22 - 1) << 1) + (t22 - 1)) << 2) << 1) + (0xA50 + t9)), 0x10);
                            return 0x0;
                        }
                        if ((0x400 & (*(int *)(((0x2D0 + t9) + 0x4)))) == 0) {
                            return 0xFFFFFFFD;
                        }
                        t28 = *(int *)(((int)stk + 0));
                        memcpy((*(int *)(((int)stk + 8))), ((((((t28 - 1) << 1) + (t28 - 1)) << 2) << 1) + (0xA50 + t9)), 0x10);
                        return 0x0;
                    }
                    if ((0x200 & (*(int *)(((0x2D0 + t9) + 0x4)))) == 0) {
                        return 0xFFFFFFFD;
                    }
                    t34 = *(int *)(((int)stk + 0));
                    memcpy((*(int *)(((int)stk + 8))), ((((((t34 - 1) << 1) + (t34 - 1)) << 2) << 1) + (0xA50 + t9)), 0x10);
                    return 0x0;
                }
                if ((0x100 & (*(int *)(((0x2D0 + t9) + 0x4)))) == 0) {
                    return 0xFFFFFFFD;
                }
                t40 = *(int *)(((int)stk + 0));
                memcpy((*(int *)(((int)stk + 8))), ((((((t40 - 1) << 1) + (t40 - 1)) << 2) << 1) + (0xA50 + t9)), 0x10);
                return 0x0;
            }
            return 0xFFFFFFFD;
        }
        return t0;
    }
    return 0xFFFFFFFE;
}

int gdFsDaPlaySctG(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t3;
    register int t4;

    t0 = 0xFFFFFFF3;
    if ((int)a4 >= (int)0xB05E) {
        t1 = gdFsReopenHn((*(int *)(((*(int *)0xC1737EC) + 0x14))), 0x0, 0x0, 0x0);
        t0 = 0xFFFFFFF3;
        if (t1 != 0) {
            t3 = _builtin_get_imask();
            _builtin_set_imask(0xF);
            t4 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)(((*(int *)0xC1737EC) + 0xC))) + 0x2C)))))(a4, a5, a6, a7);
            if (t4 != 0) {
                *(unsigned int *)((t1 + 0x3C)) = t4;
                (((struct o50_ushort *)(t1))->v) = 0x4;
                if ((int)(*(int *)(((*(int *)0xC1737EC) + 0x2C))) >= (int)0x10001) {
                    (((struct o3A_ushort *)((*(int *)0xC1737EC)))->v) = 0x1;
                    (((struct o0_uint *)0xC2D0D04)->v) = 0x2;
                    (((struct o4_uint *)0xC2D0D04)->v) = a4;
                    (((struct o8_uint *)0xC2D0D04)->v) = a5;
                    (((struct oC_uint *)0xC2D0D04)->v) = a6;
                    *(unsigned int *)((t1 + 0x4)) = 0xC2D0D14;
                    (((struct o48_ushort *)(t1))->v) = 0x8;
                } else {
                    (((struct o48_ushort *)(t1))->v) = 0x6;
                }
                *(unsigned int *)(((*(int *)((t1 + 0x0))) + 0x1C)) = t1;
                t1 = ((int (*)(void))(((((struct o40_int *)((*(int *)(((*(int *)0xC1737EC) + 0xC)))))->v))))();
            }
            _builtin_set_imask(((unsigned int)(((t3 & 0xF) << 2) << 2) >> 4));
            t1 = 0x0;
            if (t4 == 0) {
                t1 = 0xFFFFFFF3;
            }
            t0 = t1;
        }
    }
    return t0;
}

int FUN_0c018b22(int a4, int a5)
{
    if (a5 != 0) {
        if (a5 == 1) {
            FUN_0c07ff00();
        }
        return (FUN_0c07ff00());
    }
    return FUN_0c02deca(0xC177DDC, a4);
}

int buFbrExecFiberServer(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    int stk[5];
    register int t12;
    register int t61;

    *(unsigned int *)(((int)stk + 16)) = a4;
    (((struct o4_uint *)0xC2D0B98)->v) = ((((struct o0_int *)0xC2D0B98)->v));
    (((struct o0_uint *)0xC2D0B98)->v) = (*(int *)(((int)stk + 16)));
    *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 16))) + 0x210);
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    *(unsigned int *)(((int)stk + 8)) = (_builtin_get_fpscr());
    _builtin_set_fpscr(0x40000);
    setjmp(((*(int *)(((int)stk + 16))) + 0x4), a5, a6, a7, f4, f5, f6, f7, f8, f9, f10, f11);
    for (;;) {
        if ((int)(*(int *)(((int)stk + 12))) >= (int)((((struct o208_int *)((*(int *)(((int)stk + 16)))))->v))) {
            break;
        }
        (((struct oD78_uint *)((*(int *)(((int)stk + 16)))))->v) = (*(int *)(((int)stk + 0)));
        t12 = *(int *)(((*(int *)(((int)stk + 0))) + 0xC));
        switch (t12) {
        case 0:
            break;
        case 3:
            FUN_0c09431e((*(int *)(((int)stk + 16))), (*(int *)(((int)stk + 0))));
            break;
        case 1:
            if ((unsigned int)(*(int *)(((*(int *)(((int)stk + 0))) + 0x14))) > (unsigned int)((((struct o204_int *)((*(int *)(((int)stk + 16)))))->v))) {
            } else {
                longjmp(((*(int *)(((int)stk + 0))) + 0x18), 0x1);
            }
            break;
        case 2:
            *(unsigned int *)(((*(int *)(((int)stk + 0))) + 0xC)) = 0x3;
            *(unsigned int *)(((*(int *)(((int)stk + 0))) + 0x20)) = 0xC094400;
            break;
        }
        *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x1);
        *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + 0x124);
    }
    t61 = *(int *)(((int)stk + 16));
    (((struct o204_uint *)(t61))->v) = (((((struct o204_int *)(t61))->v)) + 0x1);
    (((struct o0_uint *)0xC2D0B98)->v) = ((((struct o4_int *)0xC2D0B98)->v));
    _builtin_set_fpscr((*(int *)(((int)stk + 8))));
    return 0xC2D0B98;
}

int FUN_0c029c96(int a4, int a5, int a6)
{
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u7;
    register float u8;
    register float u9;
    register float u10;
    register float u11;
    register float u12;
    register float u13;
    register float u14;
    register float u15;
    register float u16;

    u0 = (((struct o14_float *)(a5))->v);
    u1 = *(float *)((a4 + 0x0));
    u2 = (((struct o8_float *)((a5 + 0x14)))->v);
    u3 = (((struct o8_float *)(a4))->v);
    u4 = (((struct o10_float *)(a5))->v);
    u5 = ((u2 - u3) * (u2 - u3));
    u5 = u5 + ((u0 - u1)) * ((u0 - u1));
    if (!(u5 > (u4 * u4))) {
        u4 = *(float *)((a4 + 0x0));
        u5 = (((struct oC_float *)((a5 + 0x14)))->v);
        u6 = (((struct o8_float *)(((a5 + 0x14) + 0xC)))->v);
        u7 = (((struct o8_float *)(a4))->v);
        if (((((struct o48_int *)(a5))->v)) != 3) {
            u8 = ((u2 - u3) * (u5 - u4));
            if (0.0f > ((((u0 - u1) * (u6 - u7))) - u8)) {
                return 0x0;
            }
            u8 = *(float *)((a4 + 0x0));
            u9 = (((struct oC_float *)(((a5 + 0x14) + 0xC)))->v);
            u10 = (((struct o8_float *)((((a5 + 0x14) + 0xC) + 0xC)))->v);
            u11 = (((struct o8_float *)(a4))->v);
            u12 = ((u6 - u7) * (u9 - u8));
            if (!(0.0f > ((((u5 - u4) * (u10 - u11))) - u12))) {
                u12 = *(float *)((a4 + 0x0));
                u13 = (((struct oC_float *)((((a5 + 0x14) + 0xC) + 0xC)))->v);
                u14 = (((struct o8_float *)(((((a5 + 0x14) + 0xC) + 0xC) + 0xC)))->v);
                u15 = (((struct o8_float *)(a4))->v);
                u16 = ((u13 - u12) * (u10 - u11));
                if (!(0.0f > ((((u14 - u15) * (u9 - u8))) - u16))) {
                    u8 = ((u0 - u1) * (u14 - u15));
                    if (0.0f > ((((u2 - u3) * (u13 - u12))) - u8)) {
                        return 0x0;
                    }
                    u0 = (((((struct o8_float *)(a5))->v)) * ((((struct o8_float *)(a4))->v)));
                    *(float *)((a6 + 0x0)) = (((((-((*(float *)((a5 + 0x0))) * (*(float *)((a4 + 0x0)))))) - u0) - ((((struct oC_float *)(a5))->v))) / ((((struct o4_float *)(a5))->v)));
                    return 0x1;
                }
                return 0x0;
            }
            return 0x0;
        }
        u0 = *(float *)((a4 + 0x0));
        u1 = (((struct oC_float *)(((a5 + 0x14) + 0xC)))->v);
        u2 = (((struct o8_float *)((((a5 + 0x14) + 0xC) + 0xC)))->v);
        u3 = (((struct o8_float *)(a4))->v);
        u8 = ((u6 - u7) * (u1 - u0));
        if (!(0.0f > ((((u5 - u4) * (u2 - u3))) - u8))) {
            u8 = *(float *)((a4 + 0x0));
            u9 = (((struct oC_float *)((((a5 + 0x14) + 0xC) + 0xC)))->v);
            u10 = (((struct o8_float *)(((((a5 + 0x14) + 0xC) + 0xC) + 0xC)))->v);
            u11 = (((struct o8_float *)(a4))->v);
            u12 = ((u9 - u8) * (u2 - u3));
            if (!(0.0f > ((((u10 - u11) * (u1 - u0))) - u12))) {
                u0 = ((u5 - u4) * (u10 - u11));
                if (0.0f > ((((u6 - u7) * (u9 - u8))) - u0)) {
                    return 0x0;
                }
                u0 = (((((struct o8_float *)(a5))->v)) * ((((struct o8_float *)(a4))->v)));
                *(float *)((a6 + 0x0)) = (((((-((*(float *)((a5 + 0x0))) * (*(float *)((a4 + 0x0)))))) - u0) - ((((struct oC_float *)(a5))->v))) / ((((struct o4_float *)(a5))->v)));
                return 0x1;
            }
            return 0x0;
        }
        return 0x0;
    }
    return 0x0;
}
