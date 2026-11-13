/* Straight-line functions with calls and guards (batch gen_k): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[2]; } Stk2;
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o10F4_int { char p[0x10F4]; int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_int { char p[0x1C]; int v; };
struct o2_short { char p[0x2]; short v; };
struct o20_float { char p[0x20]; float v; };
struct o20_int { char p[0x20]; int v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2C_int { char p[0x2C]; int v; };
struct o30_float { char p[0x30]; float v; };
struct o34_uchar { char p[0x34]; unsigned char v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o3A_short { char p[0x3A]; short v; };
struct o3A_uchar { char p[0x3A]; unsigned char v; };
struct o3C_float { char p[0x3C]; float v; };
struct o3C_int { char p[0x3C]; int v; };
struct o3C_uint { char p[0x3C]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o48_ushort { char p[0x48]; unsigned short v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o50_ushort { char p[0x50]; unsigned short v; };
struct o58_int { char p[0x58]; int v; };
struct o5C_uchar { char p[0x5C]; unsigned char v; };
struct o6_short { char p[0x6]; short v; };
struct o62_uchar { char p[0x62]; unsigned char v; };
struct o68_float { char p[0x68]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_int { char p[0x84]; int v; };
struct o84_uint { char p[0x84]; unsigned int v; };
struct o88_int { char p[0x88]; int v; };
struct o88_uint { char p[0x88]; unsigned int v; };
struct o8C_uint { char p[0x8C]; unsigned int v; };
struct o98_int { char p[0x98]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oFF_uchar { char p[0xFF]; unsigned char v; };
int FUN_0c018b1c(int);
int FUN_0c018b22(int, int);
int FUN_0c018c2a(float, float);
int FUN_0c018c8a(float, float);
int FUN_0c01a848(void);
int FUN_0c01fd5c(void);
int FUN_0c020388(void);
float FUN_0c021040(int, int);
int FUN_0c0339fc(int);
int FUN_0c03b23e(void);
int FUN_0c03e0dc(void);
int FUN_0c057f3c(int);
int FUN_0c058f64(int, int, int, int);
int FUN_0c05b3d4(int, int);
int FUN_0c05ce16(int, int, int, int, int, int);
int FUN_0c05f470(int, int, float, float);
int FUN_0c05f6f8(int, int, int);
int FUN_0c05f6fe(int);
int FUN_0c05f72a(int);
int FUN_0c05f98c(void);
float FUN_0c05fcf2(void);
int FUN_0c061bcc(int, int);
int FUN_0c0673da(int, int, int, int, int, int, int);
int FUN_0c067718(int);
int FUN_0c0690f0(void);
extern int FUN_0c069e54();
int FUN_0c06a820(int, int, int);
int FUN_0c06e700(int, int, float);
int FUN_0c06e990(int);
int FUN_0c070730(float);
int FUN_0c072230(int, int);
int FUN_0c073010(void);
int FUN_0c073360(void);
int FUN_0c073a30(float, float, float);
int FUN_0c073a40(int);
int FUN_0c073a60(int);
float FUN_0c073b40(int, int);
int FUN_0c073c40(int, int, float);
float FUN_0c073c60(int);
int FUN_0c073e10(int);
int FUN_0c07acd0(int, int);
int FUN_0c07ad70(float, float);
int FUN_0c07ada0(int, int, int, int, float, float, float, float, float);
int FUN_0c07b6c0(int, int);
int FUN_0c07b706(void);
int FUN_0c07b734(void);
int FUN_0c07b760(void);
int FUN_0c07b786(void);
int FUN_0c07b7e0(int, int, int);
int FUN_0c07b864(int, int, int);
int FUN_0c07b97e(int, int, int, int);
int FUN_0c07c8be(int);
int FUN_0c07d974(void);
int FUN_0c07e4cc(int);
int FUN_0c07ff00(void);
int FUN_0c08072a(int);
int FUN_0c08bc96(int, int, int, int);
int FUN_0c08f87c(int, int, int, int);
int FUN_0c08f8c0(int);
int FUN_0c169186(int);
int FUN_0c16919a(int);
int FUN_0c1691d4(int);
int Init_TimeUp(void);
int SearchUsed(int, int);
int Voice_ShutUp(int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int _pd_peripheral_set_null(int);
int buStat(int);
int camSetTarget(int, int);
int gdFsReopenHn(int, int, int, int);
int gdc_FileLoad(int, int, int);
float getNearCoursePoint(int, int, int, int, int, int, int, int, int, int, int, int);
int kdGetDeviceInfo(int);
int kdInitSystemEx(int, int, int, int);
int kmSetBackGroundPlane(int, int, int, int);
int kmiCopyFromFrameBuffer(int, int, int);
int kmiCopyToFrameBuffer(int, int, int);
int kmiPurgeCache(int);
int kmtex_GetTextureLevel(int, int);
int kmytex_FBDeQueueEntry(int, int, int);
int kmytex_FBEnQueueEntry(int, int, int);
int memset(int, int, int);
int mpdrv_debugmode(int);
int mpdrv_dreqcount(int);
int mpdrv_nopcount(int);
int mpdrv_optimize(int);
int mpdrv_speed(int);
int mpdrv_swapmode(int);
int mpdrv_timeout(int);
int nlAddVector(int, int);
int nlExp(float);
int nlGetMatrix(int);
float nlLog(float);
int nlMatrixMode(int);
int nlObjPut(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlQuickInvertMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlRotateAxe(int, int);
int nlScale(float, float, float);
int nlSpriteFreeTexture(int, int);
int nlSubVector(int, int);
int nlSubVector3op(int, int, int);
int nlUnitMatrix(void);
int pdVibSetStopTime(int, int, int, int);
int set_event(int, int);
int syBtExit(void);
int syG2DmaEndIntrruptHandler(int);
int syG2DmaIsBusy(int, int);
int syG2Write(int, int, int, int, int);
int syTmrDiffCount(int, int);
int syTmrGetCount(void);
int vmsfs_c_progress(int, int, int, int);
int vmsfs_fread1(int, int);
int FUN_0c069040(int a4, int a5, int a6, int a7);
int FUN_0c0281d4(int a4, int a5);
int FBSortQueue(int a4, int a5);
int FUN_0c05ff5c(int a4);
int FUN_0c08bbe4(int a4, int a5);
int vmsfs_fseek(int a4, int a5, int a6, int a7);
int gdFsDaStopG(void);
int kmiMIPallocSub2(int a4, int a5, int a6);
int FUN_0c023650(float f4, float f5, float f6);
int FUN_0c039342(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8);
void FUN_0c03e1f8(int a4);
int FUN_0c058ca6(int a4, int a5);
void FUN_0c070db0(float f4, float f5);
int FUN_0c07e63e(int a4, int a5, int a6);
int vmsfs_mount2(int a4);
int kmtex_ReloadTwiddledMM(int a4, int a5, int a6);
int kdSetDriverMode(int a4, int a5);
int FUN_0c01e01e(int a4);
int FUN_0c020be0(void);
float FUN_0c04693c(int a4, int a5, int a6, int a7, float f4);
int FUN_0c05004e(void);
int FUN_0c05370e(int a4, int a5, int a6, Stk2 s, float f4);
int FUN_0c060654(void);
int FUN_0c069158(void);
int nlInitSprite(int a4, int a5, int a6);
int pdInitPeripheralEx(int a4, int a5, int a6, int a7, int a8);
int FUN_0c05ceb0(int a4, int a5);
int FUN_0c07c5b8(int a4, int a5, int a6);
int mpdrv_exit(void);
int FUN_0c0227a0(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8);
int FUN_0c038c54(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8);
int FUN_0c0401d8(int a4);
int FUN_0c05ca24(float f4, float f5, float f6);
int FUN_0c066d32(int a4, int a5);
int nlLineSendHeader(int a4);
int FUN_0c07b5a0(void);
int FUN_0c07be0e(int a4, int a5, int a6);
int vmsfs_fread(int a4, int a5, int a6);
int FUN_0c14dc2c(int a4);
int FUN_0c01a8d8(int a4, int a5);
int FUN_0c046fde(int a4, int a5, int a6);
int FUN_0c05c984(int a4, int a5, float f4);
int FUN_0c06a850(int a4, int a5);
int FUN_0c0704c0(int a4, int a5, int a6, float f4);
int FUN_0c07d864(int a4);
int FUN_0c0538f4(int a4, int a5, Stk2 s, float f4);

int FUN_0c069040(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;

    t1 = (FUN_0c05b3d4(0xC2BA528, 0x180));
    if ((int)a4 > 0) {
        t2 = 0x0;
        for (;;) {
            t3 = (int)((int)t2 % (int)0x1B);
            t4 = ((t2 << 2) + 0xC2BA528);
            t2 = (t2 + 0x1);
            *(unsigned int *)((t4 + 0x0)) = (t3 + 0x23);
            if ((int)t2 >= (int)a4) {
                break;
            }
        }
        t1 = (t3 + 0x23);
        t2 = 0xC07FC48;
        t3 = t4;
    }
    t4 = t1;
    t1 = t2;
    t2 = t3;
    t3 = 0x1B;
    t5 = 0x0;
    t6 = t0;
    t0 = 0x0;
    for (;;) {
        if ((int)t0 >= (int)0x80) {
            break;
        }
        t7 = 0xC1EC740;
        t8 = 0xC110374;
        t4 = (*(int *)((t7 + 0x0)));
        t4 = (t4 << 2);
        t2 = (*(int *)((t8 + t4)));
        t4 = (((int (*)(int, int, int, int))(t2))(0x80, t3, t5, t6));
        t2 = 0xC07FC48;
        t9 = t4;
        t10 = t4;
        t4 = a4;
        t4 = ((int)((int)t9 % (int)t4));
        t9 = t4;
        t4 = (*(int *)((t7 + 0x0)));
        t4 = (t4 << 2);
        t2 = (*(int *)((t8 + t4)));
        t4 = (((int (*)(int, int, int, int))(t2))(t10, a5, a6, a7));
        t7 = t4;
        t4 = a4;
        t4 = ((int)((int)t7 % (int)t4));
        t8 = t9;
        t8 = (t8 << 2);
        t5 = t4;
        t5 = (t5 << 2);
        t1 = 0xC2BA528;
        t8 = (t8 + 0xC2BA528);
        t3 = t4;
        t6 = (*(int *)((t8 + 0x0)));
        t2 = (*(int *)(((0xC2BA528 + t5) + 0x0)));
        t5 = (t5 + t1);
        t0 = (t0 + 0x1);
        *(unsigned int *)((t8 + 0x0)) = t2;
        *(unsigned int *)((t5 + 0x0)) = t6;
    }
    FUN_0c0690f0();
    FUN_0c069158();
    *(unsigned int *)0xC2BA6A0 = a4;
    return 0x178;
}

int FUN_0c0281d4(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = a4;
    if ((int)a4 < 0) {
        t1 = *(int *)0xC270E3C;
        *(unsigned int *)0xC270E3C = (t1 + 0x1);
        *(unsigned char *)((((t1 + 0x1) - 0x1) + 0x0)) = 0x2D;
        t2 = ((t1 + 0x1) - 0x1);
        t1 = 0x2D;
        t0 = (-a4);
    }
    t3 = t2;
    t2 = t1;
    t1 = t0;
    t0 = 0x0;
    for (;;) {
        if ((int)t1 < (int)0xA) {
            break;
        }
        t3 = t0;
        t2 = 0xC07FC48;
        t3 = (t3 << 2);
        t3 = (t3 + 0xC270E40);
        t4 = 0xA;
        t4 = ((int)((int)t1 % (int)t4));
        *(unsigned int *)((t3 + 0x0)) = t4;
        t4 = 0xA;
        t3 = 0xC07FAEC;
        t4 = ((int)((int)t1 / (int)t4));
        t1 = t4;
        t0 = (t0 + 0x1);
    }
    *(unsigned int *)((0xC270E40 + (t0 << 2))) = t1;
    if ((int)(a5 - (t0 + 0x1)) > 0) {
        t1 = t2;
        t2 = (a5 - (t0 + 0x1));
        for (;;) {
            if (t2 == 0) {
                break;
            }
            t1 = (*(int *)0xC270E3C);
            t2 = (t2 - 1);
            t1 = (t1 + 0x1);
            *(unsigned int *)0xC270E3C = t1;
            *(unsigned char *)(((t1 - 0x1) + 0x0)) = 0x30;
            t1 = (t1 - 0x1);
        }
        t1 = (t0 + 0x1);
        for (;;) {
            t1 = (t1 - 1);
            t2 = *(int *)0xC270E3C;
            *(unsigned int *)0xC270E3C = (t2 + 0x1);
            *(unsigned char *)((((t2 + 0x1) - 0x1) + 0x0)) = ((*(int *)((0xC270E40 + (t1 << 2)))) + 0x30);
            if (t1 == 0) {
                break;
            }
        }
        t2 = (t1 << 2);
    } else {
        t1 = (t0 + 0x1);
        for (;;) {
            t1 = (t1 - 1);
            t0 = *(int *)0xC270E3C;
            *(unsigned int *)0xC270E3C = (t0 + 0x1);
            *(unsigned char *)((((t0 + 0x1) - 0x1) + 0x0)) = ((*(int *)((0xC270E40 + (t1 << 2)))) + 0x30);
            if (t1 == 0) {
                break;
            }
        }
        t2 = (t1 << 2);
    }
    *(unsigned char *)(((*(int *)0xC270E3C) + 0x0)) = 0x0;
    return t2;
}

int FBSortQueue(int a4, int a5)
{
    int stk[1];
    register int t2;
    register int t3;
    register int t4;
    register int t6;
    register int t48;
    register int t22;
    register int t23;
    register int t24;
    register int t25;
    register int t26;
    register int t27;
    register int t36;
    register int t37;
    register int t29;
    register int t30;
    register int t31;
    register int t67;
    register int t41;
    register int t42;
    register int t45;

    if ((*(int *)((a4 + 0x0))) != 0) {
        t4 = *(int *)((a4 + 0x0));
        t2 = t4;
        t3 = 0x0;
        for (;;) {
            t6 = *(int *)((t4 + 0xC));
            if ((int)(*(int *)((t2 + 0xC))) > (int)t6) {
                t4 = t2;
            }
            t2 = (*(int *)((t2 + 0x8)));
            t3 = (t3 + 0x1);
            if (t2 == 0) {
                break;
            }
        }
        if ((int)t3 > (int)0x1) {
            t23 = *(int *)((a5 + 0x0));
            if (t23 != t4) {
                kmytex_FBDeQueueEntry(a4, a5, t4);
                t22 = (kmytex_FBEnQueueEntry(a5, t4, (*(int *)((a5 + 0x0)))));
            } else {
                t24 = 0x1;
                t25 = t6;
                t26 = a5;
            }
            *(unsigned int *)(((int)stk + 0)) = 0x0;
            t48 = t22;
            if ((int)(t3 - 2) > 0) {
                t27 = (t3 - 2);
                for (;;) {
                    t31 = *(int *)((a4 + 0x0));
                    t36 = t31;
                    t37 = t31;
                    if ((int)t27 > 0) {
                        t29 = 0x0;
                        t30 = t31;
                        for (;;) {
                            t31 = (*(int *)((t31 + 0x8)));
                            t25 = (*(int *)((t30 + 0xC)));
                            t24 = (*(int *)((t31 + 0xC)));
                            t29 = (t29 + 0x1);
                            if ((int)t24 > (int)t25) {
                                t30 = t31;
                            }
                            if ((int)t29 >= (int)t27) {
                                break;
                            }
                        }
                        t36 = t30;
                        t37 = t31;
                    }
                    if (t37 != t36) {
                        t26 = a5;
                        t22 = (kmytex_FBDeQueueEntry(a4, t26, t36));
                        t26 = t36;
                        t22 = (kmytex_FBEnQueueEntry(a5, t26, t37));
                    } else {
                        t41 = t23;
                        t42 = t24;
                        t45 = t26;
                    }
                    t23 = t41;
                    t24 = t42;
                    t25 = (*(int *)(((int)stk + 0)));
                    t26 = t45;
                    t27 = (t27 - 1);
                    t25 = (t25 + 0x1);
                    *(unsigned int *)(((int)stk + 0)) = t25;
                    if ((int)t25 >= (int)(t3 - 2)) {
                        break;
                    }
                }
                t48 = t22;
            }
            t67 = t48;
        }
    }
    return t67;
}

int FUN_0c05ff5c(int a4)
{
    int stk[8];
    register float t5;
    register float t11;
    register int t12;
    register float t13;
    register int t14;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = 0xC1758B4;
    FUN_0c07ff00();
    *(float *)(((int)stk + 12)) = 0.0f;
    FUN_0c073e10((((int)stk + 0) + 0x8));
    nlSubVector3op((((int)stk + 0) + 0x14), (*(int *)(((int)stk + 0))), (((*(int *)(((int)stk + 4))) + 0xB8) + 0x30));
    *(float *)(((int)stk + 24)) = 0.0f;
    t5 = FUN_0c073c60((((int)stk + 0) + 0x14));
    if ((*(float *)0xC060084) > t5) {
        FUN_0c07ff00();
    } else {
        FUN_0c073c40((((int)stk + 0) + 0x14), (((int)stk + 0) + 0x14), (1.0f / t5));
    }
    t11 = FUN_0c073b40((((int)stk + 0) + 0x14), (((int)stk + 0) + 0x8));
    t12 = FUN_0c070730(t11);
    t13 = FUN_0c073b40((((int)stk + 0) + 0x14), 0xC17596C);
    t14 = t12;
    if (0.0f > t13) {
        t14 = (-t12);
    }
    return t14;
}

int FUN_0c08bbe4(int a4, int a5)
{
    int stk[6];
    register int t0;
    register int t13;
    register int t14;
    register int t18;
    register int t27;
    register int t28;
    register int t32;

    *(unsigned int *)(((int)stk + 20)) = a4;
    *(unsigned short *)(((((int)stk + 0) + 0x12) + 0x0)) = a5;
    t0 = *(int *)(((int)stk + 20));
    *(unsigned int *)(((int)stk + 0)) = ((t0 * 0x154) + 0xC2C8D2C);
    *(unsigned int *)(((int)stk + 12)) = (((*(int *)(((*(int *)((((t0 * 0x154) + 0xC2C8D2C) + 0x1C))) + 0x8))) - (*(int *)(((*(int *)(((*(int *)(((int)stk + 0))) + 0x1C))) + 0x10)))) - (*(int *)(((*(int *)(((*(int *)(((int)stk + 0))) + 0x1C))) + 0x18))));
    t13 = *(int *)(((*(int *)(((*(int *)(((int)stk + 0))) + 0x1C))) + 0x10));
    t14 = *(int *)(((*(int *)(((*(int *)(((int)stk + 0))) + 0x1C))) + 0x8));
    *(unsigned int *)(((int)stk + 8)) = ((t14 - t13) - 1);
    t18 = FUN_0c08bc96((*(int *)(((int)stk + 20))), (*(short *)(((int)stk + 18))), (*(int *)(((int)stk + 12))), ((t14 - t13) - 1));
    *(unsigned int *)(((int)stk + 4)) = t18;
    if ((int)t18 > 0) {
        return (*(int *)(((int)stk + 4)));
    }
    *(unsigned int *)(((int)stk + 12)) = (*(int *)(((*(int *)(((*(int *)(((int)stk + 0))) + 0x1C))) + 0x1C)));
    t27 = *(int *)(((*(int *)(((*(int *)(((int)stk + 0))) + 0x1C))) + 0x20));
    t28 = *(int *)(((*(int *)(((*(int *)(((int)stk + 0))) + 0x1C))) + 0x1C));
    *(unsigned int *)(((int)stk + 8)) = ((t28 + t27) - 1);
    t32 = FUN_0c08bc96((*(int *)(((int)stk + 20))), (*(short *)(((int)stk + 18))), (*(int *)(((int)stk + 12))), ((t28 + t27) - 1));
    *(unsigned int *)(((int)stk + 4)) = t32;
    if ((int)t32 > 0) {
        return (*(int *)(((int)stk + 4)));
    }
    return 0xFFFFFFFF;
}

int vmsfs_fseek(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t30;
    register int t5;

    *(unsigned int *)(((int)stk + 20)) = a4;
    *(unsigned int *)(((int)stk + 16)) = a5;
    *(unsigned int *)(((int)stk + 12)) = a6;
    *(unsigned int *)(((int)stk + 4)) = (*(int *)(((*(int *)(((int)stk + 20))) + 0x28)));
    (((struct o40_uint *)((*(int *)(((int)stk + 20)))))->v) = (*(int *)(((*(int *)(((int)stk + 20))) + 0x38)));
    *(unsigned int *)(((int)stk + 0)) = 0x0;
    for (;;) {
        if ((unsigned int)(*(int *)(((int)stk + 0))) >= (unsigned int)(*(int *)(((int)stk + 16)))) {
            return (*(int *)(((*(int *)(((int)stk + 20))) + 0x34)));
        }
        if (((((struct o40_int *)((*(int *)(((int)stk + 20)))))->v)) == 0xFFFA) {
            break;
        }
        if ((*(int *)(((*(int *)(((int)stk + 20))) + 0x34))) == 0) {
            return 0xFFFF0000;
        }
        *(unsigned int *)(((int)stk + 8)) = ((((struct o40_int *)((*(int *)(((int)stk + 20)))))->v));
        t5 = (*(int *)(((int)stk + 20)));
        t5 = (t5 + 0x40);
        *(unsigned int *)((t5 + 0x0)) = (unsigned short)(FUN_0c08f87c((*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 8))), a6, a7));
        t30 = *(int *)(((int)stk + 20));
        *(unsigned int *)((t30 + 0x34)) = ((*(int *)((t30 + 0x34))) - 1);
        *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + 0x1);
    }
    if ((*(int *)(((*(int *)(((int)stk + 20))) + 0x34))) == 0) {
        return 0x0;
    }
    return 0xFFFF0000;
}

int gdFsDaStopG(void)
{
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t2 = gdFsReopenHn((*(int *)(((*(int *)0xC1737EC) + 0x14))), 0x0, 0x0, 0x0);
    t3 = 0xFFFFFFF3;
    if (t2 != 0) {
        t4 = _builtin_get_imask();
        _builtin_set_imask(0xF);
        t5 = ((int (*)(void))((*(int *)(((*(int *)(((*(int *)0xC1737EC) + 0xC))) + 0x30)))))();
        if (t5 != 0) {
            *(unsigned int *)((t2 + 0x3C)) = t5;
            (((struct o50_ushort *)(t2))->v) = 0x4;
            if ((((((struct o3A_short *)((*(int *)0xC1737EC)))->v)) != 0) && (t3 = *(int *)0xC1737EC, t1 = *(int *)((t3 + 0x2C)), (int)t1 >= (int)0x10001)) {
                *(unsigned int *)((t2 + 0x4)) = 0xC2D0D18;
                (((struct o48_ushort *)(t2))->v) = 0x8;
            } else {
                (((struct o48_ushort *)(t2))->v) = 0x6;
            }
            *(unsigned int *)(((*(int *)((t2 + 0x0))) + 0x1C)) = t2;
            t3 = ((int (*)(void))(((((struct o40_int *)((*(int *)(((*(int *)0xC1737EC) + 0xC)))))->v))))();
        }
        _builtin_set_imask(((unsigned int)(((t4 & 0xF) << 2) << 2) >> 4));
        t3 = 0x0;
        if (t5 == 0) {
            t3 = 0xFFFFFFF3;
        }
    }
    return t3;
}

int kmiMIPallocSub2(int a4, int a5, int a6)
{
    int stk[3];
    register int t43;
    register int t2;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t3;
    register int t11;
    register int t12;
    int t13;
    register int t33;
    register int t34;
    register int t37;
    register int t38;
    register int t22;
    int t25;
    register int t26;
    register int t27;
    register int t28;

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    t9 = *(int *)((((((short)a4 << 2) + (short)a4) << 2) + 0xC173DEC));
    t8 = (((struct o0_int *)0xC173DD8)->v);
    t43 = 0x0;
    if (t9 != 0) {
        t2 = 0xC173DEC;
        t4 = (short)a4;
        t5 = a5;
        t6 = a6;
        t7 = 0x0;
        for (;;) {
            t10 = *(short *)((t9 + 0x0));
            if ((((unsigned short)t10 & 0x4) == 0) && ((t3 = 0x2, (t3 & (unsigned short)t10) != 0) && ((t4 = 0x1800, (t4 & (unsigned short)t10) != 0) && ((t11 = *(int *)((t9 + 0x10)), t12 = *(int *)(((int)stk + 4)), t3 = t12, (int)t11 >= (int)t3) && (t13 = *(int *)((t9 + 0x10)), (int)t13 < (int)t8))))) {
                t5 = ((((struct o8_int *)0xC173DD8)->v));
                if ((short)a4 == 0) {
                    t22 = ((*(int *)((t9 + 0xC))) + t5);
                } else {
                    t22 = ((*(int *)((t9 + 0xC))) - t5);
                }
                t5 = ((int)stk + 0);
                t2 = (SearchUsed(t22, t5));
                if ((t2 != 0) && (t25 = *(int *)((t2 + 0x14)), t4 = t25, t26 = *(short *)((t4 + 0x0)), t27 = *(int *)(((int)stk + 8)), t4 = t27, t28 = *(short *)((t4 + 0x0)), t3 = t28, t3 = (unsigned short)t3, t3 = (t3 & 0xF000), ((unsigned short)t26 & 0xF000) == t3)) {
                    t8 = (*(int *)((t9 + 0x10)));
                    t7 = t9;
                    t33 = t3;
                    t34 = t4;
                }
            } else {
                t33 = t3;
                t34 = t4;
                t37 = t5;
                t38 = t6;
            }
            t3 = t33;
            t9 = (*(int *)((t9 + 0x8)));
            t4 = t34;
            t5 = t37;
            t6 = t38;
            if (t9 == 0) {
                break;
            }
        }
        t43 = t7;
    }
    return t43;
}

int FUN_0c023650(float f4, float f5, float f6)
{
    register int t0;
    register int t35;
    register int t2;
    register int t16;
    register int t21;
    register int t22;

    t0 = set_event(0x6C, 0xC023718);
    t35 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x14)) = 0x0;
        (((struct o1C_float *)(t0))->v) = f4;
        (((struct o20_float *)(t0))->v) = f5;
        (((struct o24_float *)(t0))->v) = f6;
        FUN_0c07ff00();
        (((struct o34_uchar *)(t2))->v) = (*(signed char *)0xC097434);
        *(unsigned char *)(((t2 + 0x34) + 0x1)) = (*(signed char *)0xC097435);
        *(unsigned char *)(((t2 + 0x34) + 0x2)) = (*(signed char *)0xC097436);
        *(unsigned char *)(((t2 + 0x34) + 0x3)) = (*(signed char *)0xC097437);
        *(unsigned char *)(((t2 + 0x34) + 0x4)) = (*(signed char *)0xC097438);
        *(unsigned char *)(((t2 + 0x34) + 0x5)) = (*(signed char *)0xC097439);
        (((struct o3A_uchar *)(t2))->v) = (*(signed char *)0xC097434);
        *(unsigned char *)(((t2 + 0x3A) + 0x1)) = (*(signed char *)0xC097435);
        *(unsigned char *)(((t2 + 0x3A) + 0x2)) = (*(signed char *)0xC097436);
        *(unsigned char *)(((t2 + 0x3A) + 0x3)) = (*(signed char *)0xC097437);
        *(unsigned char *)(((t2 + 0x3A) + 0x4)) = (*(signed char *)0xC097438);
        *(unsigned char *)(((t2 + 0x3A) + 0x5)) = (*(signed char *)0xC097439);
        (((struct o40_float *)(t2))->v) = 30.0f;
        *(unsigned int *)((t2 + 0x18)) = t16;
        FUN_0c07ff00();
        FUN_0c07ff00();
        (((struct o5C_uchar *)(t21))->v) = (*(signed char *)((t22 + 0x0)));
        *(unsigned char *)(((t21 + 0x5C) + 0x1)) = (*(signed char *)((t22 + 0x1)));
        *(unsigned char *)(((t21 + 0x5C) + 0x2)) = (*(signed char *)((t22 + 0x2)));
        *(unsigned char *)(((t21 + 0x5C) + 0x3)) = (*(signed char *)((t22 + 0x3)));
        *(unsigned char *)(((t21 + 0x5C) + 0x4)) = (*(signed char *)((t22 + 0x4)));
        *(unsigned char *)(((t21 + 0x5C) + 0x5)) = (*(signed char *)((t22 + 0x5)));
        (((struct o62_uchar *)(t21))->v) = (*(signed char *)((t22 + 0x0)));
        *(unsigned char *)(((t21 + 0x62) + 0x1)) = (*(signed char *)((t22 + 0x1)));
        *(unsigned char *)(((t21 + 0x62) + 0x2)) = (*(signed char *)((t22 + 0x2)));
        *(unsigned char *)(((t21 + 0x62) + 0x3)) = (*(signed char *)((t22 + 0x3)));
        *(unsigned char *)(((t21 + 0x62) + 0x4)) = (*(signed char *)((t22 + 0x4)));
        *(unsigned char *)(((t21 + 0x62) + 0x5)) = (*(signed char *)((t22 + 0x5)));
        (((struct o68_float *)(t21))->v) = 20.0f;
        t35 = 0x68;
    }
    return t35;
}

int FUN_0c039342(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8)
{
    int stk[20];
    register int t0;

    t0 = ((~(((~(a4 - 1)) + 0x1) & 0x3)) + 0x1);
    if ((int)(a4 - 1) >= 0) {
        t0 = ((a4 - 1) & 0x3);
    }
    switch (t0) {
    case 0:
        *(unsigned int *)(((int)stk + 0)) = 0x2DA;
        break;
    case 1:
        *(unsigned int *)(((int)stk + 0)) = 0x2DC;
        break;
    case 2:
        *(unsigned int *)(((int)stk + 0)) = 0x2E0;
        break;
    case 3:
        *(unsigned int *)(((int)stk + 0)) = 0x2E2;
        break;
    }
    *(float *)(((int)stk + 4)) = f4;
    *(float *)(((int)stk + 8)) = f5;
    *(float *)(((int)stk + 12)) = (*(float *)0xC0394A4);
    *(float *)(((int)stk + 20)) = (f6 * 1.0f);
    *(float *)(((int)stk + 16)) = (f6 * 1.0f);
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 24)) = 0.0f;
    *(float *)(((int)stk + 36)) = 1.0f;
    *(float *)(((int)stk + 32)) = 1.0f;
    *(unsigned int *)(((int)stk + 40)) = 0x0;
    *(float *)(((int)stk + 44)) = 1.0f;
    *(unsigned int *)(((int)stk + 52)) = 0x270A;
    *(unsigned int *)(((int)stk + 48)) = 0x2;
    return (FUN_0c07ada0(((int)stk + 0), a5, a6, a7, 1.0f, f5, (f6 * 1.0f), f7, f8));
}

void FUN_0c03e1f8(int a4)
{
    int t0;

    if (a4 == 0) {
        (((struct o0_uint *)0xC2A4F80)->v) = 0x2;
    } else {
        (((struct o0_uint *)0xC2A4F80)->v) = 0x0;
    }
    if ((a4 == 0) && (t0 = *(int *)0xC2A46E4, t0 == 0)) {
        *(unsigned int *)0xC2A46E4 = 0x1;
    }
    if ((*(int *)0xC2A46E4) != 0) {
        (((struct o8_uint *)0xC2A4F80)->v) = ((((struct o0_int *)0xC1EC740)->v));
        (((struct oC_uint *)0xC2A4F80)->v) = ((((struct o4_int *)0xC1EC740)->v));
        if (((((struct o0_int *)0xC1EC740)->v)) != 3) {
            (((struct o0_uint *)0xC1EC740)->v) = 0x3;
            (((struct o4_uint *)0xC1EC740)->v) = 0x0;
        }
        if ((int)((((struct o0_int *)0xC2A4F80)->v)) <= (int)0x1) {
            t0 = (((struct o2C_int *)0xC2A4F80)->v);
            if ((int)t0 < 0) {
                (((struct o28_uint *)0xC2A4F80)->v) = 0x0;
            } else {
                (((struct o28_uint *)0xC2A4F80)->v) = t0;
            }
        }
        FUN_0c0339fc(0x5);
    return;
    }
}

int FUN_0c058ca6(int a4, int a5)
{
    int t0;
    register int t1;

    if (((*(int *)0xC1EC740) == 1) && (t0 = *(int *)0xC2AC2F4, t0 == 0)) {
        if ((*(int *)(((*(int *)((0xC2B672C + (a5 << 2)))) + 0x0))) == 0) {
            *(unsigned int *)(((*(int *)((((a5 << 2) + 0xC2B672C) + 0x0))) + 0x0)) = a4;
            *(unsigned int *)(((a5 << 2) + 0xC2B6744)) = ((*(int *)(((a5 << 2) + 0xC2B6744))) + 0x1);
            *(unsigned int *)((((a5 << 2) + 0xC2B672C) + 0x0)) = ((*(int *)((((a5 << 2) + 0xC2B672C) + 0x0))) + 0x4);
            t0 = *(int *)((((a5 << 2) + 0xC2B672C) + 0x0));
            t1 = (t0 - (((((((a5 << 2) << 1) + a5) << 2) << 2) << 1) + 0xC2B63CC));
            if ((int)(t0 - (((((((a5 << 2) << 1) + a5) << 2) << 2) << 1) + 0xC2B63CC)) < 0) {
                t1 = ((t0 - (((((((a5 << 2) << 1) + a5) << 2) << 2) << 1) + 0xC2B63CC)) + 0x3);
            }
            if ((int)((t1 >> 1) >> 1) >= (int)0x48) {
                *(unsigned int *)((0xC2B672C + (a5 << 2))) = (((((((a5 << 2) << 1) + a5) << 2) << 2) << 1) + 0xC2B63CC);
            }
            return 0x1;
        }
        return 0x0;
    }
    return 0x1;
}

void FUN_0c070db0(float f4, float f5)
{
    register int t1;
    register float u0;
    register float u1;
    register float u2;

    if (f4 == 0.0f) {
        
        return;
    }
    if (f5 == (float)(int)f5) {
        t1 = (int)f5;
        u0 = f4;
        if ((int)(int)f5 < 0) {
            t1 = (-(int)f5);
            u0 = (1.0f / f4);
        }
        u1 = 1.0f;
        u2 = u0;
        for (;;) {
            if ((t1 & 0x1) != 0) {
                u1 = (u1 * u2);
            }
            t1 = ((int)((unsigned int)((int)((unsigned int)t1 + (unsigned int)0x0)) + ((((int)0x0 > (int)t1)) ? 1u : 0u)));
            t1 = (t1 >> 1);
            if (t1 != 0) {
                u2 = (u2 * u2);
                continue;
            }
            break;
        }
        return;
    }
    if (0.0f > f4) {
        return;
    }
    u0 = nlLog(f4);
    nlExp((f5 * u0));
}

int FUN_0c07e63e(int a4, int a5, int a6)
{
    register int t35;
    register int t1;
    int t9;
    register int t18;
    register int t0;
    register int t6;
    register int t7;

    t35 = 0xFFFFFFFE;
    if (((a4 == 1) || (a4 == 2)) && ((t0 = *(int *)((a5 + 0x0)), (int)t0 >= 0) && ((int)t0 <= (int)0x5))) {
        t1 = FUN_0c07e4cc(a4);
        if (t1 != 0) {
            *(unsigned int *)((a5 + 0x0)) = 0x1;
        } else {
            if ((*(int *)((a5 + 0x0))) == 0) {
                if (a4 == 1) {
                    t6 = 0x2D0;
                    t7 = (*(int *)0xC147740);
                } else {
                    t6 = 0x528;
                    t7 = (*(int *)0xC147740);
                }
                t9 = *(int *)(((t7 + t6) + 0x4));
                t18 = 0x2;
                if ((0x1 & t9) != 0) {
                } else {
                    t18 = 0x3;
                    if ((0x2 & t9) != 0) {
                    } else {
                        t18 = 0x4;
                        if ((0x4 & t9) != 0) {
                        } else {
                            t18 = 0x1;
                            if ((0x8 & t9) != 0) {
                                t18 = 0x5;
                            }
                        }
                    }
                }
                *(unsigned int *)((a5 + 0x0)) = t18;
            }
        }
        t35 = 0x0;
    }
    return t35;
}

int vmsfs_mount2(int a4)
{
    register int t0;
    register int t1;

    if ((*(signed char *)((((a4 * 0x154) + 0xC2C8D2C) + 0x2))) == 0) {
        return 0xFFFFFF01;
    }
    *(unsigned int *)((((a4 * 0x154) + 0xC2C8D2C) + 0x30)) = 0x1;
    t0 = *(int *)((((a4 * 0x154) + 0xC2C8D2C) + 0x4));
    *(unsigned int *)((((a4 * 0x154) + 0xC2C8D2C) + 0x34)) = (*(int *)(((((((t0 << 1) + t0) << 2) << 2) << 1) + 0xC147844)));
    t0 = *(int *)((((a4 * 0x154) + 0xC2C8D2C) + 0x34));
    t1 = *(int *)((((a4 * 0x154) + 0xC2C8D2C) + 0x30));
    *(unsigned int *)((((a4 * 0x154) + 0xC2C8D2C) + 0x30)) = (t1 + 0x1);
    vmsfs_c_progress(a4, (*(int *)(((((((a4 << 2) << 2) << 2) << 1) + 0xC2C6914) + 0x8))), ((t1 + 0x1) - 1), t0);
    return (FUN_0c08f8c0(a4));
}

int kmtex_ReloadTwiddledMM(int a4, int a5, int a6)
{
    int stk[5];
    register int t0;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t25;
    register int t26;
    register int t27;

    t0 = kmtex_GetTextureLevel(a6, a6);
    if ((int)a6 <= (int)0x2) {
        *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x4);
        kmiCopyFromFrameBuffer((((int)stk + 0) + 0x4), (*(int *)((a4 + 0x1C))), 0x10);
        if (a6 == 1) {
            t3 = ((((int)stk + 0) + 0x4) + 0x6);
            t4 = a5;
            for (;;) {
                t5 = *(signed char *)((t4 + 0x0));
                t4 = (t4 + 0x1);
                *(unsigned char *)((t3 + 0x0)) = t5;
                t3 = (t3 + 0x1);
                if ((unsigned int)t3 >= (unsigned int)((((int)stk + 0) + 0x4) + 0x8)) {
                    break;
                }
            }
        } else {
            t6 = ((((int)stk + 0) + 0x4) + 0x8);
            t7 = a5;
            for (;;) {
                t8 = *(signed char *)((t7 + 0x0));
                t7 = (t7 + 0x1);
                *(unsigned char *)((t6 + 0x0)) = t8;
                t6 = (t6 + 0x1);
                if ((unsigned int)t6 >= (unsigned int)((((int)stk + 0) + 0x4) + 0x10)) {
                    break;
                }
            }
        }
        *(unsigned int *)(((int)stk + 0)) = (*(int *)((a4 + 0x1C)));
        kmiPurgeCache((((int)stk + 0) + 0x4));
        kmiPurgeCache(((((int)stk + 0) + 0x4) + 0x20));
        t25 = (*(int *)(((int)stk + 0)));
        t26 = (((int)stk + 0) + 0x4);
        t27 = 0x10;
    } else {
        t27 = *(int *)(((t0 << 2) + 0xC170F14));
        *(unsigned int *)(((int)stk + 0)) = a5;
        t25 = ((*(int *)(((t0 << 2) + 0xC170EE8))) + (*(int *)((a4 + 0x1C))));
        t26 = a5;
    }
    kmiCopyToFrameBuffer(t25, t26, t27);
    return 0x0;
}

int kdSetDriverMode(int a4, int a5)
{
    if (a4 != 1) {
        if (a4 != 2) {
            if (a4 != 4) {
                if (a4 != 3) {
                    if (a4 != 6) {
                        if (a4 != 5) {
                            if (a4 != 0) {
                                if (a4 != 7) {
                                    if (a4 != 8) {
                                        if (a4 != 9) {
                                            return 0xFFFFFFFF;
                                        }
                                        FUN_0c1691d4(a5);
                                        return 0x0;
                                    }
                                    FUN_0c16919a(a5);
                                    return 0x0;
                                }
                                FUN_0c169186(a5);
                                return 0x0;
                            }
                            mpdrv_optimize(a5);
                            return 0x0;
                        }
                        mpdrv_swapmode(a5);
                        return 0x0;
                    }
                    mpdrv_debugmode(a5);
                    return 0x0;
                }
                mpdrv_speed(a5);
                return 0x0;
            }
            mpdrv_dreqcount(a5);
            return 0x0;
        }
        mpdrv_timeout(a5);
        return 0x0;
    }
    mpdrv_nopcount(a5);
    return 0x0;
}

int FUN_0c01e01e(int a4)
{
    register int t0;
    register float u0;
    register float u1;
    register float u2;

    (((struct o30_float *)0xC1ECCEC)->v) = (((((struct o30_float *)0xC1ECCEC)->v)) + (FUN_0c021040(0xC1ECD20, ((*(int *)((((((((struct o98_int *)(a4))->v)) << 2) + (0xB8 + a4)) + 0x0))) + 0x4))));
    *(volatile int *)((((((((struct o98_int *)(a4))->v)) << 2) + (0xB8 + a4)) + 0x0));
    FUN_0c07ff00();
    u0 = (((struct o30_float *)0xC1ECCEC)->v);
    u1 = *(float *)((((((((struct o88_int *)(a4))->v)) << 2) + ((*(int *)((a4 + 0x14))) + 0x8)) + 0x0));
    u2 = (u0 / u1);
    if ((u0 / u1) > 1.0f) {
        u2 = 1.0f;
    }
    t0 = *(int *)0xC1ECD2C;
    u0 = ((float)((((struct o0_int *)0xC1ECCEC)->v)) - (float)t0);
    u0 = u0 + u2 * (float)t0;
    t0 = 0xC1ECCA8;
    if ((*(int *)0xC1EC720) != 2) {
        t0 = 0x0;
        if ((int)(int)u0 <= (int)((((struct o8_int *)0xC1ECCEC)->v))) {
        } else {
            t0 = 0x2;
            if ((int)(int)u0 < (int)((((struct oC_int *)0xC1ECCEC)->v))) {
                t0 = 0x1;
            }
        }
    }
    return t0;
}

int FUN_0c020be0(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC2708C8;
    t1 = t0;
    if (t0 != 1) {
        if (t0 == 2) {
            FUN_0c020388();
        }
        if ((*(int *)0xC2708C8) == 3) {
            FUN_0c01fd5c();
            FUN_0c06e990(0x118);
            FUN_0c07acd0(0xC13FD34, 0xC098C50);
            if ((*(int *)0xC2A4658) == 0) {
                FUN_0c06e990(0x262);
                t0 = 0xC140F94;
            } else {
                FUN_0c06e990(0x26C);
                t0 = 0xC141024;
            }
            FUN_0c07acd0(t0, 0xC098818);
        }
        if ((*(int *)0xC2708C8) == 5) {
            FUN_0c01fd5c();
            FUN_0c06e990(0x276);
            FUN_0c07acd0(0xC142C64, 0x0);
            FUN_0c020388();
        }
        FUN_0c06e990(0x109);
        gdc_FileLoad(0xCB60000, 0xC09B10C, 0x0);
        nlSpriteFreeTexture(0xC142CA4, 0x0);
        t0 = FUN_0c06e990(0x0);
        *(unsigned int *)0xC2708C8 = 0x1;
        *(unsigned int *)0xC11D048 = 0x3;
        t1 = t0;
    }
    return t1;
}

float FUN_0c04693c(int a4, int a5, int a6, int a7, float f4)
{
    int stk[11];
    register int t1;
    register int t2;
    register float u3;
    register int t20;
    register float u29;
    register int t4;
    register int t5;
    register float u6;
    register float t7;
    register int t10;

    *(unsigned int *)(((int)stk + 8)) = a6;
    *(unsigned int *)(((int)stk + 4)) = a7;
    t1 = *(int *)((((((a4 << 1) + a4) << 2) + 0xC0F3530) + 0x4));
    t2 = *(int *)((((((a4 << 1) + a4) << 2) + 0xC0F3530) + 0x8));
    u3 = *(float *)0xC046AD4;
    t20 = 0x0;
    u29 = u3;
    if ((int)t1 < (int)(t2 + t1)) {
        t4 = 0x0;
        t5 = t1;
        u6 = u3;
        for (;;) {
            *(unsigned int *)(((int)stk + 0)) = 0x0;
            t7 = getNearCoursePoint(0x0, t5, ((int)stk + 0), a5, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
            if (u6 > t7) {
                t4 = t5;
                t4 = (t4 << 1);
                t4 = (t4 + t5);
                t10 = *(int *)(((int)stk + 0));
                t4 = (t4 << 2);
                u6 = t7;
                t4 = (t4 + (*(int *)0xC2ADA7C));
                t4 = (*(int *)((t4 + 0x0)));
                t4 = (t4 + (((t10 << 1) + t10) << 2));
                *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x0)) = (*(int *)(((int)stk + 0)));
                *(unsigned int *)(((*(int *)(((int)stk + 4))) + 0x0)) = t5;
            }
            t5 = (t5 + 0x1);
            if ((int)t5 >= (int)(t2 + t1)) {
                break;
            }
        }
        t20 = t4;
        u29 = u6;
    }
    if (t20 != 0) {
        *(float *)((a5 + 0x0)) = (*(float *)((t20 + 0x0)));
        (((struct o4_float *)(a5))->v) = ((((struct o4_float *)(t20))->v));
        (((struct o8_float *)(a5))->v) = ((((struct o8_float *)(t20))->v));
    }
    return u29;
}

int FUN_0c05004e(void)
{
    register int t0;
    register int t1;

    Init_TimeUp();
    t0 = FUN_0c03b23e();
    (((struct o14_uint *)0xC2B2A2C)->v) = t0;
    if ((*(int *)0xC1EC720) != 2) {
        *(unsigned int *)0xC2B28B0 = (*(int *)(((t0 << 2) + 0xC10C974)));
        t1 = 0xC10C974;
    } else {
        *(unsigned int *)0xC2B28B0 = (*(int *)(((t0 << 2) + 0xC10C990)));
        t1 = 0xC10C990;
    }
    if ((int)((((struct o14_int *)0xC2B2A2C)->v)) < (int)0x3) {
        (((struct o10_uint *)0xC2B2A2C)->v) = 0x27F;
        t0 = 0x27F;
    } else {
        (((struct o10_uint *)0xC2B2A2C)->v) = 0x0;
        t0 = t1;
    }
    (((struct o0_uint *)0xC2B2A2C)->v) = 0x0;
    return t0;
}

int FUN_0c05370e(int a4, int a5, int a6, Stk2 s, float f4)
{
    int stk[14];

    stk[4] = s.w[0];
    stk[5] = s.w[1];
    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 12)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    nlMatrixMode(0x3);
    nlPushMatrix(0xC10CAB8);
    nlMatrixMode(0x2);
    FUN_0c073360();
    nlMatrixMode(0x1);
    FUN_0c073360();
    FUN_0c073a30((float)((*(int *)(((int)stk + 4))) - 320), (float)(0xF0 - (*(int *)(((int)stk + 12)))), 10.0f);
    nlRotateAY((unsigned short)(*(short *)(((((int)stk + 4) + 0x1C) + 0x2))));
    nlRotateAX((unsigned short)(*(short *)(((((int)stk + 4) + 0x1C) + 0x0))));
    nlRotateAZ((unsigned short)(*(short *)(((((int)stk + 4) + 0x1C) + 0x4))));
    nlScale(f4, f4, 1.0f);
    nlObjPut((*(int *)(((int)stk + 8))));
    nlPopMatrix(0x1);
    nlMatrixMode(0x2);
    nlPopMatrix(0x1);
    nlMatrixMode(0x3);
    nlPopMatrix(0x1);
    return (nlMatrixMode(0x1));
}

int FUN_0c060654(void)
{
    int t0;
    register float u0;
    register float u1;

    if (((((struct o4_int *)0xC2B9C9C)->v)) == 0) {
        FUN_0c05f6f8(0xC2B9C1C, 0xC10E68C, 0xC10E69C);
        u1 = FUN_0c05fcf2();
        FUN_0c05f470(0xC2B9C1C, 0xC880000, u1, 15.0f);
        (((struct o4_float *)0xC2B9C20)->v) = 0.0f;
        (((struct o4_uint *)0xC2B9C9C)->v) = (((((struct o4_int *)0xC2B9C9C)->v)) + 0x1);
    }
    if (((*(signed char *)0xC2B9C5B) & 32) == 0) {
        u1 = ((((struct o0_float *)0xC2B9C20)->v));
        u1 = u1 + 0.075000003f * (((FUN_0c05fcf2()) - ((((struct o0_float *)0xC2B9C20)->v))));
        (((struct o0_float *)0xC2B9C20)->v) = u1;
    }
    if ((((((struct o0_int *)0xC1759D8)->v)) == 0) && ((u0 = (((struct o3C_float *)0xC1759D8)->v), 0.100000001f > u0) && (t0 = *(signed char *)0xC2B9C5B, (t0 & 32) == 0))) {
        (((struct o0_uint *)0xC2B9C9C)->v) = 0x2;
        (((struct o4_uint *)0xC2B9C9C)->v) = 0x0;
    }
    return FUN_0c05f98c();
}

int FUN_0c069158(void)
{
    int stk[5];
    register int t5;
    register int t13;

    *(unsigned int *)(((int)stk + 0)) = (*(int *)(((((*(int *)0xC2BA5AC) << 2) + 0xC2BA528) + 0x0)));
    *(unsigned int *)(((int)stk + 4)) = 0x1;
    *(unsigned int *)(((int)stk + 8)) = 0xC10D9BC;
    *(float *)(((int)stk + 12)) = 0.0f;
    *(unsigned int *)(((int)stk + 16)) = 0x1;
    FUN_0c061bcc(0xC2BA5F0, ((int)stk + 0));
    *(unsigned char *)0xC2BA653 = ((*(signed char *)0xC2BA653) | 0x1);
    (((struct o10_uint *)0xC2BA5F0)->v) = 0x6;
    *(unsigned char *)0xC2BA653 = ((*(signed char *)0xC2BA653) | 0x80);
    t5 = (((struct o0_int *)0xC2BA5F0)->v);
    (((struct o80_uint *)(t5))->v) = 0x0;
    FUN_0c05f72a(t5);
    FUN_0c05f6fe(t5);
    (((struct o84_uint *)(t5))->v) = 0x0;
    (((struct o88_uint *)(t5))->v) = 0x0;
    (((struct oFF_uchar *)(t5))->v) = ((*(signed char *)(((0xFF + t5) + 0x0))) & 0xFD);
    FUN_0c073360();
    FUN_0c0673da(((((struct o88_int *)(t5))->v)), 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8));
    nlGetMatrix((t5 + 0x40));
    t13 = nlPopMatrix(0x1);
    *(unsigned int *)0xC2B9CA4 = 0xC2BA5F0;
    return t13;
}

int nlInitSprite(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;

    (((struct o0_uint *)0xC2C3E2C)->v) = 0xFFFFFFFF;
    FUN_0c07ad70(((((struct o4_float *)0xC07A86C)->v)), ((((struct o0_float *)0xC07A86C)->v)));
    (((struct o8_uint *)0xC2C3E2C)->v) = a6;
    (((struct oC_uint *)0xC2C3E2C)->v) = a5;
    (((struct o4_uint *)0xC2C3E2C)->v) = a4;
    (((struct o10_uint *)0xC2C3E2C)->v) = ((((a6 << 1) + a4) + 0x3) & 0xFFFFFFFC);
    (((struct o14_uint *)0xC2C3E2C)->v) = ((((((int)((int)(a5 + 0x1F) / (int)0x20)) << 2) + ((((a6 << 1) + a4) + 0x3) & 0xFFFFFFFC)) + 0x3) & 0xFFFFFFFC);
    if ((int)a6 > 0) {
        t0 = 0x0;
        t1 = 0x0;
        for (;;) {
            t0 = (t0 + 0x1);
            *(unsigned short *)((t1 + ((((struct o4_int *)0xC2C3E2C)->v)))) = 0xFFFFFFFF;
            t1 = (t1 + 0x2);
            if ((int)t0 >= (int)a6) {
                break;
            }
        }
    }
    t0 = 0x0;
    for (;;) {
        t1 = (int)((int)(((((struct oC_int *)0xC2C3E2C)->v)) + 0x1F) / (int)0x20);
        if ((int)t0 >= (int)t1) {
            break;
        }
        t2 = (t0 << 2);
        t0 = (t0 + 0x1);
        *(unsigned int *)((((((struct o10_int *)0xC2C3E2C)->v)) + t2)) = 0x0;
    }
    return t1;
}

int pdInitPeripheralEx(int a4, int a5, int a6, int a7, int a8)
{
    register int t4;

    (((struct o0_uint *)0xC2D1268)->v) = a4;
    (((struct o4_uint *)0xC2D0D1C)->v) = 0x0;
    (((struct o0_uint *)0xC2D0D1C)->v) = 0x1;
    (((struct o8_uint *)0xC2D0D1C)->v) = 0x0;
    memset(0xC2D0D28, 0x0, 0x4E0);
    if ((a7 != 0) && (a6 != 0)) {
        (((struct o4_uint *)0xC2D0D1C)->v) = 0x1;
        kdInitSystemEx(a5, a6, a7, a8);
    }
    t4 = 0x0;
    for (;;) {
        *(unsigned int *)((((t4 * 0x34) + 0xC2D0D28) + 0x30)) = (kdGetDeviceInfo(t4));
        _pd_peripheral_set_null(((t4 * 0x34) + 0xC2D0D28));
        *(unsigned int *)(((t4 << 2) + 0xC2D1208)) = 0x0;
        *(unsigned char *)((0xC2D126E + t4)) = 0x0;
        *(unsigned char *)((t4 + 0xC2D1286)) = 0x0;
        t4 = (t4 + 0x1);
        if ((int)t4 >= (int)0x18) {
            break;
        }
    }
    (((struct o4_uchar *)0xC2D1268)->v) = 0xC0;
    (((struct o5_uchar *)0xC2D1268)->v) = 0xA0;
    return 0xC2D126D;
}

int FUN_0c05ceb0(int a4, int a5)
{
    int stk[6];
    register float u10;

    nlPushMatrix((0xB8 + a4));
    FUN_0c072230(a5, (((int)stk + 0) + 0xC));
    FUN_0c072230((a5 + 0xC), ((int)stk + 0));
    nlPopMatrix(0x1);
    nlAddVector((((int)stk + 0) + 0xC), ((0xB8 + a4) + 0x30));
    nlSubVector((((int)stk + 0) + 0xC), 0xC2B96E8);
    nlAddVector(((int)stk + 0), ((0xB8 + a4) + 0x30));
    nlSubVector(((int)stk + 0), 0xC2B96E8);
    FUN_0c018b1c(0x1);
    FUN_0c018b22((((int)stk + 0) + 0xC), 0x2);
    u10 = *(float *)0xC05D024;
    FUN_0c018c2a(u10, 0.0f);
    camSetTarget(((int)stk + 0), 0x2);
    FUN_0c018c8a(u10, 0.0f);
    *(float *)0xC177D9C = ((((struct o18_float *)(a5))->v));
    return (FUN_0c05ce16(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4)));
}

int FUN_0c07c5b8(int a4, int a5, int a6)
{
    if ((0xFF00 & a5) != 0) {
        if (a5 != 0x1A0) {
            if ((a5 != 0x2A0) && (a5 != 0x3A0)) {
                if (a5 != 0x4A0) {
                    if ((a5 != 0x5A0) && ((a5 != 0x6A0) && (a5 != 0x7A0))) {
                        if ((a5 != 0x9A0) && ((a5 != 0xAA0) && (a5 != 0x10A0))) {
                            if (a5 != 0x11A0) {
                                if (a5 != 0x19A0) {
                                    if (a5 != 0x1BA0) {
                                        if (a5 != 0x1CA0) {
                                            if ((a5 != 0x28A0) && ((a5 != 0x29A0) && (a5 != 0x30A0))) {
                                                return 0xFFFFFFFE;
                                            }
                                            return FUN_0c07c8be(((((((unsigned short)a4 & 0xF) << 16) << 8) + a5) + (((a6 - 1) & 0xF) << 16)));
                                        }
                                        return FUN_0c07c8be(((((((unsigned short)a4 & 0xF) << 16) << 8) + a5) + ((a6 & 0x7F) << 16)));
                                    }
                                    return FUN_0c07c8be(((((((unsigned short)a4 & 0xF) << 16) << 8) + a5) + ((a6 & 0xF) << 16)));
                                }
                                return FUN_0c07c8be(((((((unsigned short)a4 & 0xF) << 16) << 8) + a5) + ((a6 & 0x7F) << 16)));
                            }
                            return FUN_0c07c8be(((((((unsigned short)a4 & 0xF) << 16) << 8) + a5) + (((a6 + 0x40) & 0x7F) << 16)));
                        }
                        return FUN_0c07c8be(((((((unsigned short)a4 & 0xF) << 16) << 8) + a5) + ((a6 & 0x7F) << 16)));
                    }
                    return FUN_0c07c8be(((((((unsigned short)a4 & 0xF) << 16) << 8) + a5) + (((a6 + 0x40) & 0x7F) << 16)));
                }
                return FUN_0c07c8be(((((((unsigned short)a4 & 0xF) << 16) << 8) + a5) + ((a6 & 0x7F) << 16)));
            }
            return FUN_0c07c8be((((((unsigned short)a4 & 0xF) << 16) << 8) + a5));
        }
        return FUN_0c07c8be(((((((unsigned short)a4 & 0xF) << 16) << 8) + a5) + ((a6 & 0x7F) << 16)));
    }
    return FUN_0c07c8be((((((unsigned short)a4 & 0xF) << 16) << 8) + a5));
}

int mpdrv_exit(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = syTmrGetCount();
    for (;;) {
        if (((*(int *)((((((struct o10F4_int *)((*(int *)0xC30817C)))->v)) + 0x18))) & 0x1) == 0) {
            break;
        }
        t1 = syTmrGetCount();
        t2 = syTmrDiffCount(t0, t1);
        if ((int)t2 <= (int)0x186A0) continue;
        break;
    }
    *(unsigned int *)((((((struct o10F4_int *)((*(int *)0xC30817C)))->v)) + 0x18)) = 0x0;
    *(unsigned int *)((((((struct o10F4_int *)((*(int *)0xC30817C)))->v)) + 0x14)) = 0x0;
    *(unsigned int *)((((((struct o10F4_int *)((*(int *)0xC30817C)))->v)) + 0x10)) = 0x0;
    (((struct o8C_uint *)(((((struct o10F4_int *)((*(int *)0xC30817C)))->v))))->v) = 0x615540FF;
    (((struct o80_uint *)(((((struct o10F4_int *)((*(int *)0xC30817C)))->v))))->v) = 0xC3500000;
    *(unsigned int *)((((((struct o10F4_int *)((*(int *)0xC30817C)))->v)) + 0x4)) = 0xCFF0000;
    t0 = syTmrGetCount();
    for (;;) {
        if (((*(int *)((((((struct o10F4_int *)((*(int *)0xC30817C)))->v)) + 0x18))) & 0x1) == 0) {
            break;
        }
        t1 = syTmrGetCount();
        t2 = syTmrDiffCount(t0, t1);
        if ((int)t2 <= (int)0x4268) continue;
        break;
    }
    return 0x0;
}

int FUN_0c0227a0(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8)
{
    register int t0;
    register int t1;
    register int t2;

    (((struct o0_uint *)0xC270944)->v) = 0x63;
    (((struct o34_uint *)0xC270944)->v) = 0xA;
    (((struct o4_float *)0xC270944)->v) = 320.0f;
    (((struct o8_float *)0xC270944)->v) = 110.0f;
    (((struct o10_float *)0xC270944)->v) = 1.0f;
    (((struct o14_float *)0xC270944)->v) = 1.0f;
    FUN_0c07ada0(0xC270944, a5, a6, a7, f4, f5, f6, f7, f8);
    (((struct o34_uint *)0xC270944)->v) = 0x200A;
    t0 = (((struct o0_int *)0xC270994)->v);
    t1 = t0;
    if (t0 == 20) {
        Voice_ShutUp(0x0);
        t0 = (((struct o4_int *)0xC270994)->v);
        if (t0 != 0) {
            if (t0 != 1) {
                if (t0 != 2) {
                    t2 = t0;
                    if (t0 != 3) {
                    } else {
                        t2 = (FUN_0c058f64(0xC123EA8, 0x0, 0x78, 0x0));
                    }
                    t0 = t2;
                } else {
                    t0 = (FUN_0c058f64(0xC123E90, 0x0, 0x78, 0x0));
                }
                t2 = t0;
            } else {
                t2 = (FUN_0c058f64(0xC123E78, 0x0, 0x78, 0x0));
            }
            t0 = t2;
        } else {
            t0 = (FUN_0c058f64(0xC123E60, 0x0, 0x78, 0x0));
        }
        t1 = t0;
    }
    t0 = t1;
    if ((int)((((struct o0_int *)0xC270994)->v)) >= (int)0xB4) {
        t0 = (FUN_0c03e0dc());
    }
    (((struct o0_uint *)0xC270994)->v) = (((((struct o0_int *)0xC270994)->v)) + 0x1);
    return t0;
}

int FUN_0c038c54(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8)
{
    int stk[20];
    register float u2;
    register float u6;
    register float u7;
    register float u10;

    *(unsigned int *)(((int)stk + 0)) = 0x2AE;
    *(float *)(((int)stk + 4)) = 0.0f;
    *(float *)(((int)stk + 8)) = ((((struct o0_float *)0xC038D54)->v));
    *(float *)(((int)stk + 12)) = ((((struct o4_float *)0xC038D54)->v));
    u2 = (((struct o8_float *)0xC038D54)->v);
    *(float *)(((int)stk + 16)) = u2;
    *(float *)(((int)stk + 20)) = ((((struct oC_float *)0xC038D54)->v));
    *(float *)(((int)stk + 24)) = 0.0f;
    *(float *)(((int)stk + 28)) = ((((struct o10_float *)0xC038D54)->v));
    *(float *)(((int)stk + 36)) = 1.0f;
    *(float *)(((int)stk + 32)) = 1.0f;
    *(unsigned int *)(((int)stk + 40)) = 0x0;
    *(float *)(((int)stk + 44)) = 1.0f;
    *(unsigned int *)(((int)stk + 52)) = 0x2705;
    *(unsigned int *)(((int)stk + 48)) = 0x2;
    *(float *)(((int)stk + 8)) = 0.0f;
    *(float *)(((int)stk + 12)) = ((((struct o14_float *)0xC038D54)->v));
    *(float *)(((int)stk + 16)) = u2;
    u6 = (((struct o18_float *)0xC038D54)->v);
    u7 = (((struct o1C_float *)0xC038D54)->v);
    u10 = (f4 * u7);
    *(float *)(((int)stk + 20)) = (((((((struct o20_float *)0xC038D54)->v)) - u10) * u6) / ((((struct o24_float *)0xC038D54)->v)));
    *(float *)(((int)stk + 36)) = ((((struct o28_float *)0xC038D54)->v));
    *(float *)(((int)stk + 28)) = u6;
    *(float *)(((int)stk + 24)) = ((((struct o2C_float *)0xC038D54)->v));
    return (FUN_0c07ada0(((int)stk + 0), a5, a6, a7, (f4 * u7), u6, 1.0f, u2, f8));
}

int FUN_0c0401d8(int a4)
{
    register int t0;
    register int t2;
    register int t3;

    if (a4 == 0) {
        t0 = (((struct o0_int *)0xC0C0A28)->v);
        (((struct o0_uint *)0xC2AB7C0)->v) = t0;
        (((struct o3C_uint *)0xC2A59D4)->v) = t0;
        *(unsigned int *)0xC2A5A14 = 0x0;
        (((struct o4_uint *)0xC2AB7C0)->v) = ((((struct o20_int *)0xC0C0A28)->v));
        (((struct o8_uint *)0xC2AB7C0)->v) = (*(int *)0xC0C0A68);
        (((struct oC_uint *)0xC2AB7C0)->v) = 0x0;
        (((struct o10_uint *)0xC2AB7C0)->v) = 0x0;
        t0 = 0xC2AB7C4;
    } else {
        t0 = (((struct oC_int *)0xC2AB7C0)->v);
        (((struct oC_uint *)0xC2AB7C0)->v) = (t0 + 0x1);
        if ((int)(t0 + 0x1) > (int)((((struct o4_int *)0xC2AB7C0)->v))) {
            (((struct oC_uint *)0xC2AB7C0)->v) = 0x0;
            if ((int)((((struct o3C_int *)0xC2A59D4)->v)) < (int)0x17) {
                (((struct o3C_uint *)0xC2A59D4)->v) = (((((struct o3C_int *)0xC2A59D4)->v)) + 0x1);
            }
        }
        if (((((struct o58_int *)(((((struct o0_int *)0xC2A59D4)->v))))->v)) == 2) {
            (((struct o10_uint *)0xC2AB7C0)->v) = (((((struct o10_int *)0xC2AB7C0)->v)) + 0x1);
            t0 = (((struct o10_int *)0xC2AB7C0)->v);
            t2 = t0;
            if ((int)t0 > (int)((((struct o8_int *)0xC2AB7C0)->v))) {
                *(unsigned int *)0xC2A5A14 = ((*(int *)0xC2A5A14) + 0x1);
                (((struct o10_uint *)0xC2AB7C0)->v) = 0x0;
                t3 = t0;
                if ((int)((((struct o3C_int *)0xC2A59D4)->v)) < (int)0x17) {
                    t0 = (((struct o3C_int *)0xC2A59D4)->v);
                    (((struct o3C_uint *)0xC2A59D4)->v) = (t0 + 0x1);
                    t3 = (t0 + 0x1);
                }
                t2 = t3;
            }
            t0 = t2;
        } else {
            t2 = (((struct o3C_int *)0xC2A59D4)->v);
            t3 = *(int *)0xC2A5A14;
            (((struct o3C_uint *)0xC2A59D4)->v) = (t2 - t3);
            if ((int)(t2 - t3) < (int)((((struct o0_int *)0xC2AB7C0)->v))) {
                (((struct o3C_uint *)0xC2A59D4)->v) = ((((struct o0_int *)0xC2AB7C0)->v));
            }
            *(unsigned int *)0xC2A5A14 = 0x0;
            (((struct o10_uint *)0xC2AB7C0)->v) = 0x0;
            t0 = (t2 - t3);
        }
    }
    return t0;
}

int FUN_0c05ca24(float f4, float f5, float f6)
{
    int stk[19];

    FUN_0c018b1c(0x1);
    FUN_0c073010();
    nlQuickInvertMatrix();
    nlGetMatrix((((int)stk + 0) + 0xC));
    nlPopMatrix(0x1);
    FUN_0c07ff00();
    FUN_0c06e700(((int)stk + 0), (((int)stk + 0) + 0xC), f4);
    FUN_0c06e700(((int)stk + 0), (((int)stk + 0) + 0x1C), f5);
    FUN_0c06e700(((int)stk + 0), (((int)stk + 0) + 0x2C), f6);
    FUN_0c018b22(((int)stk + 0), 0x1);
    FUN_0c07ff00();
    FUN_0c06e700(((int)stk + 0), (((int)stk + 0) + 0xC), f4);
    FUN_0c06e700(((int)stk + 0), (((int)stk + 0) + 0x1C), f5);
    FUN_0c06e700(((int)stk + 0), (((int)stk + 0) + 0x2C), f6);
    return (camSetTarget(((int)stk + 0), 0x1));
}

int FUN_0c066d32(int a4, int a5)
{
    if ((*(int *)((a4 + 0x8))) == 1) {
        FUN_0c05f470(a5, 0xC8F3AA8, 0.0f, 0.0f);
    } else {
        FUN_0c05f470(a5, (*(int *)(((((((struct o84_int *)(a5))->v)) << 2) + 0xC110088))), 0.0f, 0.0f);
    }
    (((struct o80_uint *)(a5))->v) = 0x1;
    if (((((struct o84_int *)(a5))->v)) == 0) {
        FUN_0c06a820(0x0, (*(int *)((a5 + 0x10))), (*(int *)((a4 + 0x4))));
    }
    return FUN_0c067718(a5);
}

int nlLineSendHeader(int a4)
{
    register float u0;
    register int t7;
    register int t16;
    register int t17;
    register int t18;
    int t10;

    u0 = *(float *)0xC078D14;
    (((struct o0_float *)0xC2C3D9C)->v) = (((((struct o0_float *)0xC1473DC)->v)) * u0);
    (((struct o4_float *)0xC2C3D9C)->v) = (((((struct o4_float *)0xC1473DC)->v)) * u0);
    (((struct o8_float *)0xC2C3D9C)->v) = (-1.0f - ((((struct o0_float *)0xC2C3D9C)->v)));
    (((struct oC_float *)0xC2C3D9C)->v) = (-1.0f - ((((struct o4_float *)0xC2C3D9C)->v)));
    (((struct o0_float *)0xC1475E8)->v) = ((((struct o0_float *)0xC2C3D9C)->v));
    (((struct o14_float *)0xC1475E8)->v) = (-((((struct o4_float *)0xC2C3D9C)->v)));
    t7 = *(int *)0xC2D0C3C;
    if ((a4 & 0x1) != 0) {
        t10 = (*(int *)((t7 + 0x8)));
        t17 = 0xC147648;
    } else {
        t10 = (*(int *)((t7 + 0x0)));
        t17 = 0xC147628;
    }
    *(unsigned int *)((t17 + 0x0)) = ((*(int *)((t17 + 0x0))) & 0xFFFCFFFF);
    *(unsigned int *)((t17 + 0x0)) = ((*(int *)((t17 + 0x0))) | (((*(int *)0xC147348) << 16) | 0x8C0000));
    (((struct o0_uint *)0xFF000038)->v) = ((unsigned int)((unsigned int)t10 >> 16) >> 8);
    (((struct o4_uint *)0xFF000038)->v) = ((unsigned int)((unsigned int)t10 >> 16) >> 8);
    t16 = ((0x3FFFFFF & t10) | 0xE0000000);
    for (;;) {
        t18 = *(int *)((t17 + 0x0));
        t17 = (t17 + 0x4);
        *(unsigned int *)((t16 + 0x0)) = t18;
        t16 = (t16 + 0x4);
        if ((unsigned int)t16 >= (unsigned int)(((0x3FFFFFF & t10) | 0xE0000000) + 0x20)) {
            break;
        }
    }
    FUN_0c08072a(((0x3FFFFFF & t10) | 0xE0000000));
    return (((0x3FFFFFF & t10) | 0xE0000000) + 0x20);
}

int FUN_0c07b5a0(void)
{
    register int t0;
    register int t6;
    int t9;
    register int t10;
    register int t12;

    t0 = 0x0;
    for (;;) {
        if ((int)t0 >= (int)((int)((int)(((((struct o0_int *)0xC2C3E38)->v)) + 0x1F) / (int)0x20))) {
            return 0xFFFFFFFF;
        }
        t6 = *(int *)(((t0 << 2) + ((((struct o4_int *)0xC2C3E38)->v))));
        if (t6 != -1) {
            break;
        }
        t0 = (t0 + 0x1);
    }
    t9 = 0x1;
    t10 = 0x0;
    for (;;) {
        if ((t6 & t9) == 0) {
            break;
        }
        t9 = (t9 << 1);
        t10 = (t10 + 0x1);
    }
    t12 = (((struct o4_int *)0xC2C3E38)->v);
    *(unsigned int *)(((t0 << 2) + t12)) = ((*(int *)(((t0 << 2) + t12))) | t9);
    return ((((t0 << 2) << 2) << 1) + t10);
}

int FUN_0c07be0e(int a4, int a5, int a6)
{
    int stk[5];

    register int R2;
    register int R3;
    register int R7;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    v0_0 = a4;
    v0_1 = a5;
    v0_3 = a6;
    *(unsigned int *)(((int)stk + 12)) = v0_1;
    v0_1 = (v0_0);
    v0_2 = (v0_3);
    if ((v0_3 != 0)) goto L_C07BE26;
    v0_0 = (0xFFFFFFFA);
    L_C07BEA4:;
    return v0_0;
    L_C07BE26:;
    v0_3 = FUN_0c07b864(v0_1, (*(int *)(((int)stk + 12))), v0_2);
    v0_0 = (v0_3);
    if ((v0_3 != 0)) goto L_C07BE9E;
    *(unsigned int *)(((int)stk + 16)) = (*(int *)((v0_1 + 0x8)));
    v0_0 = FUN_0c07b97e((*(int *)(((int)stk + 12))), (*(int *)((v0_1 + 0x4))), v0_2, ((int)stk + 8));
    v0_4 = FUN_0c07b706();
    v0_3 = (v0_0);
    v0_0 = (v0_4);
    if ((v0_4 != 0)) goto L_C07BE9E;
    v0_4 = FUN_0c07b734();
    v0_0 = (v0_4);
    if ((v0_4 != 0)) goto L_C07BE9E;
    if (((*(int *)(((int)stk + 8))) == 0)) goto L_C07BE76;
    v0_4 = FUN_0c07b7e0(v0_3, (v0_2 + v0_3), (*(int *)(((int)stk + 8))));
    v0_0 = (v0_4);
    if ((v0_4 != 0)) goto L_C07BE9E;
    v0_4 = FUN_0c07b760();
    v0_0 = (v0_4);
    if ((v0_4 != 0)) goto L_C07BE9E;
    L_C07BE76:;
    *(int *)((int)stk + 4) = 0x1;
    *(int *)((int)stk + 0) = 0x1;
    syG2Write(v0_1, v0_3, 0x4, ((unsigned int)(*(int *)(((int)stk + 16))) >> 2), 0x1);
    FUN_0c07b6c0(v0_2, (v0_3 + 0x8));
    v0_1 = FUN_0c07b786();
    v0_0 = (v0_1);
    if (!((v0_1 == 0))) goto L_C07BE9E;
    v0_0 = (0x0);
    goto L_C07BEA4;
    L_C07BE9E:;
    v0_0 = (v0_0);
    goto L_C07BEA4;
}

int vmsfs_fread(int a4, int a5, int a6)
{
    int stk[7];
    register int t6;
    register int t13;

    *(unsigned int *)(((int)stk + 24)) = a4;
    *(unsigned int *)(((int)stk + 20)) = a5;
    *(unsigned int *)(((int)stk + 16)) = a6;
    if ((*(int *)(((int)stk + 24))) == 0) {
        return 0xFFFFFF00;
    }
    if ((*(signed char *)((((*(int *)(((*(int *)(((int)stk + 24))) + 0x28))) * 0x154) + 0xC2C8D2E))) == 0) {
        return 0xFFFFFF01;
    }
    *(unsigned int *)(((int)stk + 4)) = (*(int *)(((int)stk + 20)));
    t6 = *(int *)(((*(int *)(((int)stk + 24))) + 0x28));
    *(unsigned int *)(((int)stk + 0)) = ((t6 * 0x154) + 0xC2C8D2C);
    *(unsigned int *)((((t6 * 0x154) + 0xC2C8D2C) + 0x30)) = 0x1;
    *(unsigned int *)(((*(int *)(((int)stk + 0))) + 0x34)) = (*(int *)(((int)stk + 16)));
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 12))) >= (int)(*(int *)(((int)stk + 16)))) {
            return 0x0;
        }
        t13 = vmsfs_fread1((*(int *)(((int)stk + 24))), (*(int *)(((int)stk + 4))));
        *(unsigned int *)(((int)stk + 8)) = t13;
        if ((int)t13 < 0) {
            break;
        }
        *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x200);
        *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x1);
    }
    return t13;
}

int FUN_0c14dc2c(int a4)
{
    if (((((struct o0_int *)0xC173814)->v)) == -1) {
        if (a4 == 1) {
            if (((((struct oC_int *)0xC173814)->v)) != -1) {
                return 0xFFFFFFFF;
            }
            return 0x0;
        }
        if (a4 == 5) {
            if (((((struct o10_int *)0xC173814)->v)) == -1) {
                return 0x0;
            }
            return 0xFFFFFFFF;
        }
        if (a4 == 2) {
            if (((((struct o14_int *)0xC173814)->v)) == -1) {
                return 0x0;
            }
            return 0xFFFFFFFF;
        }
        if (a4 == 3) {
            if (((((struct o18_int *)0xC173814)->v)) == -1) {
                return 0x0;
            }
            return 0xFFFFFFFF;
        }
        if (a4 == 4) {
            if (((((struct o1C_int *)0xC173814)->v)) == -1) {
                return 0x0;
            }
            return 0xFFFFFFFF;
        }
        return 0xFFFFFFFE;
    }
    return 0xFFFFFFFE;
}

int FUN_0c01a8d8(int a4, int a5)
{
    int stk[3];
    register int t0;
    register int t1;
    register int t20;
    register int t42;

    *(unsigned int *)(((int)stk + 0)) = a5;
    t0 = 0x0;
    for (;;) {
        t1 = buStat(t0);
        if (t1 != -1) {
            t0 = (t0 + 0x1);
            if ((int)t0 > (int)0x7) {
                break;
            }
            continue;
        }
        return t1;
    }
    if ((int)(*(int *)0xC11CFAC) < (int)0x2) {
        *(unsigned char *)(((int)stk + 8)) = (*(signed char *)0xC097194);
        *(unsigned char *)(((int)stk + 4)) = (*(signed char *)0xC097195);
        *(unsigned int *)0xC2B32DC = 0x0;
        if ((*(int *)0xC11CFAC) == 0) {
            t42 = pdVibSetStopTime((unsigned char)(*(signed char *)0xC1EC784), (((int)stk + 0) + 0x8), (((int)stk + 0) + 0x4), 0x1);
            if (t42 != -1) {
                *(unsigned int *)0xC11CFAC = 0x1;
            }
        } else {
            t20 = *(int *)0xC11CFAC;
            t42 = t20;
            if (t20 == 1) {
                t42 = FUN_0c057f3c((unsigned char)(*(signed char *)0xC1EC784));
                if (t42 != -1) {
                    *(unsigned int *)0xC11CFAC = 0x2;
                }
            }
        }
    } else {
        if (((*(int *)(((int)stk + 0))) != -23) && (t42 = *(int *)(((int)stk + 0)), t42 != -33)) {
        } else {
            FUN_0c01a848();
            t42 = (syBtExit());
        }
    }
    return t42;
}

int FUN_0c046fde(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t0 = *(int *)((a4 + 0x0));
    t1 = *(int *)0xC2ADA7C;
    t2 = *(int *)((a5 + 0x0));
    if ((int)t2 >= 0) {
        t3 = a6;
        t4 = ((((t0 << 1) + t0) << 2) + t1);
        for (;;) {
            if ((int)(*(int *)((a5 + 0x0))) < (int)(*(int *)(((*(int *)((t4 + 0x4))) + 0x0)))) {
                break;
            }
            *(unsigned int *)((a5 + 0x0)) = ((*(int *)((a5 + 0x0))) - (*(int *)(((*(int *)((t4 + 0x4))) + 0x0))));
            t5 = (*(int *)((t4 + 0x8)));
            t6 = *(short *)((((t3 << 1) + (t5 + 0x4)) + 0x0));
            *(unsigned int *)((a4 + 0x0)) = (unsigned short)t6;
            if ((unsigned short)t6 == 0) {
                t3 = (t3 + 0x1);
                t5 = (*(int *)((t4 + 0x8)));
                *(unsigned int *)((a4 + 0x0)) = (unsigned short)(*(short *)(((((t3 & 0x1) << 1) + (t5 + 0x4)) + 0x0)));
            }
            t4 = (*(int *)((a4 + 0x0)));
            t6 = t4;
            t4 = (t4 << 1);
            t4 = (t4 + t6);
            t4 = (t4 << 2);
            t4 = (t4 + (*(int *)0xC2ADA7C));
        }
        t3 = t5;
    } else {
        t4 = t1;
        t5 = t2;
        t2 = ((((t0 << 1) + t0) << 2) + t1);
        for (;;) {
            if ((int)(*(int *)((a5 + 0x0))) >= 0) {
                break;
            }
            t0 = (*(int *)((t2 + 0x8)));
            t0 = (*(short *)((t0 + 0x8)));
            t0 = (unsigned short)t0;
            t2 = t0;
            t5 = t0;
            t2 = (t2 << 1);
            *(unsigned int *)((a4 + 0x0)) = t0;
            t4 = (*(int *)0xC2ADA7C);
            t2 = (t2 + t5);
            t2 = (t2 << 2);
            t2 = (t2 + t4);
            t4 = (*(int *)((a5 + 0x0)));
            t5 = (*(int *)((t2 + 0x4)));
            t5 = (*(int *)((t5 + 0x0)));
            t4 = (t4 + t5);
            *(unsigned int *)((a5 + 0x0)) = t4;
        }
        t3 = t0;
    }
    return t3;
}

int FUN_0c05c984(int a4, int a5, float f4)
{
    int stk[21];

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    FUN_0c018b1c(0x1);
    FUN_0c073010();
    nlQuickInvertMatrix();
    nlGetMatrix((((int)stk + 0) + 0x14));
    nlUnitMatrix();
    FUN_0c073a60(0xC177D38);
    nlRotateAY((*(int *)(((int)stk + 4))));
    nlRotateAxe((((int)stk + 0) + 0x14), (*(int *)(((int)stk + 0))));
    FUN_0c073a40(0xC177D38);
    FUN_0c072230(0xC177D44, (((int)stk + 0) + 0x8));
    FUN_0c06e700((((int)stk + 0) + 0x8), (((int)stk + 0) + 0x34), f4);
    camSetTarget((((int)stk + 0) + 0x8), 0x1);
    FUN_0c07ff00();
    FUN_0c06e700((((int)stk + 0) + 0x8), (((int)stk + 0) + 0x34), f4);
    FUN_0c018b22((((int)stk + 0) + 0x8), 0x1);
    return (nlPopMatrix(0x1));
}

int FUN_0c06a850(int a4, int a5)
{
    register int t7;

    (((struct o0_uint *)0xC13BAE4)->v) = (*(int *)(((*(int *)(((a4 << 2) + 0xC13BA9C))) + (((int)((int)(((int (*)(int, int))(FUN_0c069e54))(a4, a5)) % (int)(*(int *)(((a4 << 2) + 0xC1114B0))))) << 2))));
    Voice_ShutUp(0x2);
    t7 = FUN_0c058f64(0xC13BAE4, 0x2, (*(int *)(((a4 << 2) + 0xC11039C))), 0x0);
    if ((int)a5 > (int)0x1) {
        (((struct o18_uint *)0xC13BAE4)->v) = (*(int *)(((*(int *)(((a4 << 2) + (*(int *)((0xC13BACC + ((a5 - 2) << 2))))))) + (((int)((int)(((int (*)(void))(FUN_0c069e54))()) % (int)(*(int *)(((a4 << 2) + (*(int *)(((0xC13BAD8 + ((a5 - 2) << 2)) + 0x0)))))))) << 2))));
        Voice_ShutUp(0x3);
        return FUN_0c058f64(0xC13BAFC, 0x3, (*(int *)(((a4 << 2) + 0xC1103AC))), 0x0);
    }
    return t7;
}

int FUN_0c0704c0(int a4, int a5, int a6, float f4)
{
    int stk[27];
    register int t0;
    register int t3;

    (((struct o0_uint *)0xC14734C)->v) = a4;
    (((struct o4_uint *)0xC14734C)->v) = a5;
    (((struct o8_uint *)0xC14734C)->v) = a6;
    *(unsigned int *)(((((int)stk + 0) + 0xC) + 0x0)) = 0xE0000000;
    (((struct o4_float *)((((int)stk + 0) + 0xC)))->v) = 0.0f;
    (((struct o8_float *)((((int)stk + 0) + 0xC)))->v) = 0.0f;
    (((struct oC_float *)((((int)stk + 0) + 0xC)))->v) = (1.0f / f4);
    *(unsigned int *)(((((int)stk + 0) + 0xC) + 0x10)) = a4;
    *(unsigned int *)(((((int)stk + 0) + 0xC) + 0x18)) = a4;
    *(unsigned int *)((((((int)stk + 0) + 0xC) + 0x20) + 0x0)) = 0xE0000000;
    t0 = (((struct o0_short *)0xC2BF8F0)->v);
    t3 = (short)t0;
    if (((((struct o6_short *)0xC2BF8F0)->v)) != 0) {
        t3 = ((short)t0 << 1);
    }
    (((struct o4_float *)(((((int)stk + 0) + 0xC) + 0x20)))->v) = (float)t3;
    (((struct o8_float *)(((((int)stk + 0) + 0xC) + 0x20)))->v) = 0.0f;
    (((struct oC_float *)(((((int)stk + 0) + 0xC) + 0x20)))->v) = (1.0f / f4);
    *(unsigned int *)((((((int)stk + 0) + 0xC) + 0x20) + 0x10)) = a5;
    *(unsigned int *)((((((int)stk + 0) + 0xC) + 0x20) + 0x18)) = a5;
    (((struct o40_uint *)((((int)stk + 0) + 0xC)))->v) = 0xF0000000;
    (((struct o4_float *)(((((int)stk + 0) + 0xC) + 0x40)))->v) = 0.0f;
    (((struct o8_float *)(((((int)stk + 0) + 0xC) + 0x40)))->v) = (float)((((struct o2_short *)0xC2BF8F0)->v));
    (((struct oC_float *)(((((int)stk + 0) + 0xC) + 0x40)))->v) = (1.0f / f4);
    *(unsigned int *)((((((int)stk + 0) + 0xC) + 0x40) + 0x10)) = a6;
    *(unsigned int *)((((((int)stk + 0) + 0xC) + 0x40) + 0x18)) = a6;
    *(unsigned int *)((((int)stk + 0) + 0x0)) = (((int)stk + 0) + 0xC);
    *(unsigned int *)((((int)stk + 0) + 0x4)) = ((((int)stk + 0) + 0xC) + 0x20);
    *(unsigned int *)((((int)stk + 0) + 0x8)) = ((((int)stk + 0) + 0xC) + 0x40);
    return (kmSetBackGroundPlane(((int)stk + 0), 0x0, 0x20, 0xC2BF8EC));
}

int FUN_0c07d864(int a4)
{
    int stk[2];
    register int t0;
    register int t23;
    int t29;
    register int t30;

    t0 = *(int *)0xC2C3E78;
    if (t0 == 0) {
        return 0x100;
    }
    if (t0 == 1) {
        *(unsigned int *)(((int)stk + 4)) = (_builtin_get_imask());
        syG2DmaIsBusy(((((struct o8_int *)0xC2C4128)->v)), ((int)stk + 0));
        t23 = 0xFFFFFFFF;
        if (((*(int *)((a4 + 0x0))) & 1) == 0) {
        } else {
            if (((*(int *)((a4 + 0x0))) & 0x100) != 0) {
                t23 = 0x101;
                if ((*(int *)(((int)stk + 0))) != 1) {
                    t23 = 0x100;
                }
            } else {
                t23 = 0x100;
                if (((*(int *)((a4 + 0x0))) & 0x200) != 0) {
                    t23 = 0x101;
                }
            }
        }
        if (((*(int *)(((int)stk + 0))) == 0) && (t29 = (((struct o0_int *)0xC2C4128)->v), t30 = (((struct o4_int *)0xC2C4128)->v), t29 != t30)) {
            if ((*(int *)(((int)stk + 4))) == 0) {
                FUN_0c07d974();
            } else {
                syG2DmaEndIntrruptHandler(((((struct o8_int *)0xC2C4128)->v)));
            }
        }
        return t23;
    }
    return 0xFFFFFF80;
}

int FUN_0c0538f4(int a4, int a5, Stk2 s, float f4)
{
    int stk[13];

    stk[3] = s.w[0];
    stk[4] = s.w[1];
    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    nlMatrixMode(0x3);
    nlPushMatrix(0xC10CAB8);
    nlMatrixMode(0x2);
    FUN_0c073360();
    nlMatrixMode(0x1);
    FUN_0c073360();
    FUN_0c073a30((float)((*(int *)(((int)stk + 4))) - 320), (float)(0xF0 - (*(int *)(((int)stk + 8)))), (*(float *)0xC053A44));
    nlRotateAY((unsigned short)(*(short *)(((((int)stk + 4) + 0x18) + 0x2))));
    nlRotateAX((unsigned short)(*(short *)(((((int)stk + 4) + 0x18) + 0x0))));
    nlRotateAZ((unsigned short)(*(short *)(((((int)stk + 4) + 0x18) + 0x4))));
    nlScale(f4, f4, f4);
    nlPopMatrix(0x1);
    nlMatrixMode(0x2);
    nlPopMatrix(0x1);
    nlMatrixMode(0x3);
    nlPopMatrix(0x1);
    return (nlMatrixMode(0x1));
}
