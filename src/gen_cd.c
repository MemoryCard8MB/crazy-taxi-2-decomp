/* Straight-line functions with calls and guards (batch gen_cd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o10C4_int { char p[0x10C4]; int v; };
struct o10D8_int { char p[0x10D8]; int v; };
struct o14_float { char p[0x14]; float v; };
struct o1434_int { char p[0x1434]; int v; };
struct o1438_int { char p[0x1438]; int v; };
struct o143C_int { char p[0x143C]; int v; };
struct o143C_uint { char p[0x143C]; unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uchar { char p[0x1C]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o40_int { char p[0x40]; int v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o48_int { char p[0x48]; int v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o48_ushort { char p[0x48]; unsigned short v; };
struct o4C_short { char p[0x4C]; short v; };
struct o50_int { char p[0x50]; int v; };
struct o50_short { char p[0x50]; short v; };
struct o50_ushort { char p[0x50]; unsigned short v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_int { char p[0x6C]; int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_int { char p[0x84]; int v; };
struct o88_int { char p[0x88]; int v; };
struct o8C_int { char p[0x8C]; int v; };
struct o90_int { char p[0x90]; int v; };
struct o94_int { char p[0x94]; int v; };
struct oA0_int { char p[0xA0]; int v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct oA4_int { char p[0xA4]; int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oAC_int { char p[0xAC]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int ADXPD_GetStat(int);
int CheckAreaGrid(int, int);
int FUN_0c01a978(void);
int FUN_0c01d190(void);
int FUN_0c01fd5c(void);
int FUN_0c020388(void);
int FUN_0c028058(void);
int FUN_0c029b12(int, float);
int FUN_0c03346e(int, int, int, int);
int FUN_0c034320(int, int);
int FUN_0c0343b8(int, int);
int FUN_0c03457c(void);
int FUN_0c034804(int, float, float);
int FUN_0c034928(int, int, int, int, int);
int FUN_0c03e37e(void);
int FUN_0c03eefe(int);
int FUN_0c03ef3e(void);
int FUN_0c03f77c(int);
int FUN_0c03f904(int, int);
extern int FUN_0c03f9d0();
int FUN_0c03fa18(int, int, int, int);
int FUN_0c043b00(int, int, int);
int FUN_0c0584da(void);
int FUN_0c058688(int);
int FUN_0c05f470(int, int, float, float);
int FUN_0c06a820(int, int, int);
int FUN_0c06e990(int);
int FUN_0c072290(int, int);
int FUN_0c072600(int);
int FUN_0c073360(void);
int FUN_0c073a30(float, float, float);
int FUN_0c073a60(int);
float FUN_0c073b40(int, int);
int FUN_0c078800(int, int, int);
int FUN_0c078850(int);
int FUN_0c07a970(int, int, int);
int FUN_0c07acd0(int, int);
int FUN_0c07b6c0(int, int);
int FUN_0c07b6e6(int);
int FUN_0c07c8be(int);
int FUN_0c07fdc8(void);
int FUN_0c07ff00(void);
int FUN_0c08f204(int, int, int);
int FUN_0c08f87c(int, int);
int FUN_0c08f9c4(int, int);
int FUN_0c0905cc(int, int, int, int, int);
int FUN_0c090e4c(int, int, int, int);
int FUN_0c096138(int, int);
int FUN_0c1595e8(int, int, int, int);
int FUN_0c16dacc(int, int);
int GetRotVec(int);
int KillColliObj(int);
int MultiRot4Vec(int);
int SetColliObj(int, int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int _mult64(int, int, int, int);
int _pow10(int, int, int);
int buStat(int);
int gdFsWaitCompleteReq(int);
int gdc_FileLoad(int, int, int);
int kmiABSalloc(int, int);
int kmiDefaultInterruptHandler(int);
int kmiFBfree(int);
int kmiTXalloc(int, int);
int make_header(int, int);
extern int memcpy();
int memset(int, int, int);
int mpdrv_clear_deviceinfo(int);
int mpdrv_make_deviceinfo(int, int, int);
int ndPuru2Reset(int);
int nlAddVector(int, int);
int nlGetAverageVector(int, int, int, float, float);
int nlGetPushedMatrix(int);
int nlMultiMatrix(int);
int nlMvCalcEdgeA(int, int);
int nlMvCalcEdgeB(int, int, int);
int nlMvEndList(void);
int nlMvPutPolygon(int, int, int, int);
int nlMvPutStrip(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAY(int);
int nlScale(float, float, float);
int nlScaleUnitVector(int, int, float);
int nlSpriteFreeTexture(int, int);
int nlSubVector(int, int);
int set_event(int, int);
int syTmrDiffCount(int, int);
int syTmrGetCount(void);
int vmsfs_diskfree(int, int);
int vmsfs_fclose(int, int);
int vmsfs_fgetinfo(int, int, int);
int vmsfs_lockbank(int, int);
int vmsfs_write_retry(int, int, int);
int vmsfs_xcreate(int, int, int, int);
int vmsfs_xwrite1(int, int);
int FUN_0c04630c(int a4, int a5, int a6, int a7);
int FUN_0c02bbbc(void);
int FUN_0c090484(int a4, int a5, int a6, int a7, int a8, int a9);
int FUN_0c02a326(int a4);
int FUN_0c0303d0(int a4);
int FUN_0c079700(int a4, int a5);
int FUN_0c08fabc(int a4, int a5);
int FUN_0c0209b6(void);
int FUN_0c0909ce(int a4, int a5, int a6, int a7, int a8);
int mpdrv_make_exdevicedata(int a4, int a5, int a6, int a7, int a8);
int FUN_0c0302a2(int a4);
int FUN_0c067220(int a4);
int FUN_0c07d050(int a4);
int gdFsStopRd(int a4, int a5, int a6, int a7);
int FUN_0c055604(void);
float FUN_0c02806c(int a4, int a5, int a6, int a7);
int FUN_0c033e38(int a4, int a5, int a6);
int FUN_0c047ab0(int a4);
int FUN_0c03e81a(void);
int FUN_0c069d2c(int a4);
int FUN_0c07c9a4(int a4, int a5, int a6);
int kmCreateContiguousTextureSurface(int a4, int a5, int a6, int a7, int a8);
int nlPerspectiveProj(int a4, int a5, int a6);
int _power(int a4, int a5, int a6, int a7);
int FUN_0c03d416(void);
int ADXB_ExecOneWav4(int a4, int a5, int a6, int a7);
int FUN_0c03f7c2(int a4, int a5, int a6, int a7, int a8, int a9, int a10);

int FUN_0c04630c(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t1;
    int t2;
    register int t5;
    register int t27;
    register int t34;
    register int t46;
    register int t51;
    register int t64;
    register int t0;
    register int t3;
    register int t4;
    register int t15;
    register int t29;
    int t30;
    register int t31;
    register int t39;
    register int t40;
    register int t61;
    register int t62;
    int R1000;
    int R1004;
    int R1008;

    R1000 = *(int *)((int)stk + 0);
    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);

    R1004 = 0x0;
    t1 = a4;
    t2 = a5;
    t5 = (a4 + 0x14);
    for (;;) {
        if ((int)(R1004) >= (int)((((struct o1434_int *)(a4))->v))) {
            break;
        }
        if ((int)((((struct o143C_int *)(a4))->v)) <= 0) {
            t1 = 0x1000;
            t2 = (*(int *)((t5 + 0x0)));
            t1 = (t1 & t2);
            t2 = (t2 & 0xF);
            if ((int)(t2 + 0x1) >= 0) {
                t15 = ((t2 + 0x1) & 0x1);
            } else {
                t15 = ((~(((~(t2 + 0x1)) + 0x1) & 0x1)) + 0x1);
            }
            t2 = t15;
            t1 = (t1 + t2);
            *(unsigned int *)((t5 + 0x0)) = t1;
        } else {
            t0 = 0xB4;
            if ((int)((((struct o143C_int *)(a4))->v)) < (int)t0) {
                *(unsigned int *)((t5 + 0x0)) = ((*(int *)((t5 + 0x0))) | 0x10);
            }
        }
        t0 = (*(int *)((t5 + 0x0)));
        t4 = 0x0;
        t0 = (t0 & 0xF);
        t27 = (t0 << 2);
        t0 = (t0 << 1);
        t0 = (t0 + t27);
        R1000 = t0;
        t0 = (t0 + 0x6);
        R1008 = t0;
        for (;;) {
            if ((((int)t4 >= (int)(R1000)) && ((t29 = R1008, (int)t4 < (int)t29) && (t30 = *(int *)((t5 + 0x0)), (t30 & 16) == 0))) || (t0 = t5, t3 = t4, t0 = (t0 + 0x4), t3 = (t3 << 2), t0 = (t0 + t3), t31 = *(int *)((t0 + 0x0)), t31 == 0)) {
                t39 = t1;
                t40 = t2;
            } else {
                t2 = t5;
                t2 = (t2 + 0x34);
                t1 = t5;
                t2 = (t2 + t3);
                t1 = (t1 + 0x4);
                t2 = (*(int *)((t2 + 0x0)));
                t1 = (t1 + t3);
                t1 = (*(int *)((t1 + 0x0)));
                t34 = ((int (*)(int, int, int, int))(FUN_0c03f9d0))(t1, t2, a6, a7);
            }
            t0 = 0xC;
            t1 = t39;
            t2 = t40;
            t4 = (t4 + 0x1);
            if ((int)t4 >= (int)t0) {
                break;
            }
        }
        if ((*(int *)((t5 + 0x4))) == 0x115) {
            t0 = 0xF78;
            t2 = (*(int *)0xC2ADA7C);
            t1 = 0x14A;
            t2 = (t2 + t0);
            t2 = (*(int *)((t2 + 0x4)));
            t2 = (*(int *)((t2 + 0x0)));
            t2 = (t2 - 1);
            t46 = FUN_0c03fa18(t1, t2, 0x0, 0x2);
            if (t46 != 0) {
                t3 = t5;
                t3 = (t3 + 0x4);
                t4 = 0x0;
                for (;;) {
                    if ((*(int *)((t3 + 0x0))) != 0) {
                        t2 = t5;
                        t2 = (t2 + 0x34);
                        t1 = t5;
                        t2 = (t2 + t4);
                        t1 = (t1 + 0x4);
                        t2 = (*(int *)((t2 + 0x0)));
                        t1 = (t1 + t4);
                        t1 = (*(int *)((t1 + 0x0)));
                        t51 = ((int (*)(int, int))(FUN_0c03f9d0))(t1, t2);
                    }
                    t0 = t5;
                    t0 = (t0 + 0x34);
                    t3 = (t3 + 0x4);
                    t4 = (t4 + 0x4);
                    if ((unsigned int)t3 >= (unsigned int)t0) {
                        break;
                    }
                }
            }
        } else {
            t61 = t1;
            t62 = t2;
        }
        t0 = (R1004);
        t1 = t61;
        t2 = t62;
        t5 = (t5 + 0x70);
        t0 = (t0 + 0x1);
        R1004 = t0;
    }
    t64 = (((struct o143C_int *)(a4))->v);
    (((struct o143C_uint *)(a4))->v) = (t64 - 1);
    if ((int)(t64 - 1) < 0) {
        (((struct o143C_uint *)(a4))->v) = ((((struct o1438_int *)(a4))->v));
    }
    return 0x143C;
}

int FUN_0c02bbbc(void)
{
    int stk[2];
    int t0;
    register int t10;
    register int t40;
    register float u11;
    register int t12;
    register int t13;
    register int t16;
    register int t19;
    register int t14;
    register int t15;
    register int t17;
    register int t18;
    register int t20;
    register float u21;
    register float u22;
    int R1000;
    int R1004;

    R1000 = *(int *)((int)stk + 0);
    R1004 = *(int *)((int)stk + 4);

    t0 = *(int *)0xC1EC71C;
    if (t0 != 0) {
        if ((t0 != 1) && (t0 != 2)) {
            if (t0 != -1) {
                *(unsigned int *)0xC273810 = 0xCBA2B98;
                FUN_0c07fdc8();
            } else {
                *(unsigned int *)0xC273810 = 0xCB83CB0;
                FUN_0c07fdc8();
            }
        } else {
            *(unsigned int *)0xC273810 = 0xCB83CB0;
            FUN_0c07fdc8();
        }
    } else {
        *(unsigned int *)0xC273810 = 0xCBA2B98;
        FUN_0c07fdc8();
    }
    t10 = *(int *)0xC12941C;
    t40 = t10;
    if (t10 != 0) {
        u11 = *(float *)0xC02BE40;
        t12 = 0xC02BE40;
        t13 = 0xC12941C;
        t16 = t15;
        t19 = 0x0;
        for (;;) {
            if ((int)t19 >= (int)0x14) {
                break;
            }
            t14 = t19;
            t14 = (t14 << 2);
            t14 = (t14 << 1);
            t14 = (t14 + t19);
            t13 = 0xC273834;
            t14 = (t14 << 2);
            t18 = (t19 * 0x78);
            t14 = (t14 << 1);
            t20 = 0x0;
            t13 = (t13 + t14);
            R1000 = t13;
            t18 = (t18 + 0xC271E5C);
            for (;;) {
                t14 = 0x30;
                if ((unsigned int)t20 >= (unsigned int)t14) {
                    break;
                }
                t17 = (R1000);
                R1004 = (t18 + t20);
                t17 = (t17 + t20);
                t16 = (R1004);
                t12 = (nlGetAverageVector(t16, ((t18 + t20) + 0x30), t17, u11, u11));
                t16 = t17;
                t12 = (nlAddVector(t16, (t18 + 0x60)));
                t20 = (t20 + 0xC);
            }
            t18 = 0x1C;
            t20 = t19;
            t20 = (t20 << 2);
            t20 = (t20 << 1);
            t14 = 0xC273834;
            t20 = (t20 + t19);
            t18 = (t19 * t18);
            t20 = (t20 << 2);
            t17 = 0x0;
            t20 = (t20 << 1);
            t20 = (t20 + t14);
            t18 = (t18 + 0xC273DD4);
            for (;;) {
                if ((int)t17 >= (int)0x2) {
                    break;
                }
                t16 = t20;
                t12 = (nlGetAverageVector(t16, (t20 + 0xC), t18, u11, u11));
                t18 = (t18 + 0xC);
                t20 = (t20 + 0x18);
                t17 = (t17 + 0x1);
            }
            t16 = 0x1C;
            t12 = 0xC271EC8;
            t13 = 0x18;
            t16 = (t19 * t16);
            t14 = (t19 * 0x78);
            t19 = (t19 + 0x1);
            t16 = (t16 + 0xC273DD4);
            t13 = (t13 + t16);
            u22 = (*(float *)((t14 + t12)));
            t12 = 0x18;
            *(float *)((t16 + t12)) = u22;
            t12 = 0x8;
            u21 = (*(float *)((t16 + t12)));
            u22 = (*(float *)((t13 + 0x0)));
            t13 = 0x18;
            t13 = (t13 + t16);
            u21 = (u21 - u22);
            *(float *)((t16 + t12)) = u21;
            t12 = 0x14;
            u21 = (*(float *)((t16 + t12)));
            u22 = (*(float *)((t13 + 0x0)));
            u21 = (u21 + u22);
            *(float *)((t16 + t12)) = u21;
        }
        t40 = t12;
    }
    return t40;
}

int FUN_0c090484(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int stk[14];
    register int t1;
    register int t13;
    register int t16;
    register int t19;
    register int t38;

    *(unsigned int *)(((int)stk + 52)) = a4;
    *(unsigned int *)(((int)stk + 48)) = a5;
    *(unsigned int *)(((int)stk + 44)) = a6;
    *(unsigned int *)(((int)stk + 40)) = a7;
    t1 = vmsfs_diskfree((*(int *)(((int)stk + 52))), 0x1);
    *(unsigned int *)(((int)stk + 28)) = t1;
    if ((int)t1 < 0) {
        return t1;
    }
    if ((unsigned int)(*(int *)(((int)stk + 28))) < (unsigned int)(*(int *)(((int)stk + 40)))) {
        return 0xFFFFFF04;
    }
    *(unsigned int *)(((int)stk + 24)) = (a9 & 0x80000000);
    if ((a9 & 0x80000000) != 0) {
        *(int *)((int)stk + 4) = a9;
        *(int *)((int)stk + 0) = a8;
        return (FUN_0c0905cc((*(int *)(((int)stk + 52))), (*(int *)(((int)stk + 48))), (*(int *)(((int)stk + 44))), (*(int *)(((int)stk + 40))), a8));
    }
    t13 = vmsfs_xcreate((*(int *)(((int)stk + 52))), (*(int *)(((int)stk + 48))), a8, (((int)stk + 8) + 0x4));
    *(unsigned int *)(((int)stk + 32)) = t13;
    if ((int)t13 < 0) {
        return t13;
    }
    *(unsigned char *)(((*(int *)(((int)stk + 12))) + 0x1)) = a9;
    *(unsigned int *)(((int)stk + 16)) = (*(int *)(((int)stk + 44)));
    t16 = *(int *)(((int)stk + 52));
    *(unsigned int *)(((int)stk + 8)) = ((t16 * 0x154) + 0xC2C8D2C);
    *(unsigned int *)((((t16 * 0x154) + 0xC2C8D2C) + 0x30)) = 0x1;
    t19 = *(int *)(((*(int *)(((int)stk + 8))) + 0x4));
    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x34)) = ((*(int *)(((int)stk + 40))) + (*(int *)(((((((t19 << 1) + t19) << 2) << 2) << 1) + 0xC147870))));
    FUN_0c090e4c((*(int *)(((int)stk + 52))), 0x0, (((int)stk + 8) + 0xC), 0x0);
    vmsfs_lockbank((*(int *)(((int)stk + 52))), 0x1);
    *(unsigned int *)(((int)stk + 36)) = 0x0;
    for (;;) {
        if ((unsigned int)(*(int *)(((int)stk + 36))) >= (unsigned int)(*(int *)(((int)stk + 40)))) {
            *(unsigned int *)(((int)stk + 32)) = 0x0;
            vmsfs_fclose((*(int *)(((int)stk + 12))), 0x0);
            vmsfs_lockbank((*(int *)(((int)stk + 52))), (*(int *)(((int)stk + 20))));
            return (*(int *)(((int)stk + 32)));
        }
        t38 = vmsfs_xwrite1((*(int *)(((int)stk + 12))), (*(int *)(((int)stk + 16))));
        *(unsigned int *)(((int)stk + 32)) = t38;
        if ((int)t38 < 0) {
            break;
        }
        *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + 0x200);
        *(unsigned int *)(((int)stk + 36)) = ((*(int *)(((int)stk + 36))) + 0x1);
    }
    vmsfs_fclose((*(int *)(((int)stk + 12))), 0x0);
    vmsfs_lockbank((*(int *)(((int)stk + 52))), (*(int *)(((int)stk + 20))));
    return (*(int *)(((int)stk + 32)));
}

int FUN_0c02a326(int a4)
{
    int stk[6];
    register int t5;
    register int t6;
    register int t9;
    register float u10;
    register float u11;
    register float u16;
    register int t17;
    register int t18;
    register float u20;

    *(unsigned int *)0xC128DB0 = (CheckAreaGrid(a4, (*(int *)0xC128DB0)));
    *(float *)(((int)stk + 0)) = ((*(float *)((a4 + 0x0))) * 9.99999975e-06f);
    *(float *)(((int)stk + 4)) = (-(((((struct o8_float *)(a4))->v)) * 9.99999975e-06f));
    *(float *)(((int)stk + 8)) = -0.5f;
    t5 = (FUN_0c078800(((int)stk + 0), ((int)stk + 0), 0xFF00FF00));
    t6 = 0x0;
    for (;;) {
        t9 = 0xFFFF0000;
        u10 = -0.5f;
        u11 = 9.99999975e-06f;
        if (t6 == (*(int *)0xC128DB0)) {
        } else {
            t5 = 0xC02A464;
            t9 = 0xFF00FF00;
            u10 = -1.0f;
            u11 = (*(float *)((t5 + 0x0)));
        }
        t5 = 0xC;
        *(float *)((((int)stk + 0) + t5)) = (((((struct o18_float *)(((((t6 << 2) << 2) << 1) + 0xC09E0F4)))->v)) * u11);
        t5 = 0x4;
        u16 = *(float *)(((((((t6 << 2) << 2) << 1) + 0xC09E0F4) + 0x18) + t5));
        t5 = 0x10;
        *(float *)((((int)stk + 0) + t5)) = (-(u16 * u11));
        t5 = 0x14;
        *(float *)((((int)stk + 0) + t5)) = u10;
        t17 = 0x0;
        t18 = ((((t6 << 2) << 2) << 1) + 0xC09E0F4);
        for (;;) {
            t5 = 0x4;
            *(float *)(((int)stk + 0)) = ((*(float *)((t18 + 0x0))) * u11);
            u20 = *(float *)((t18 + t5));
            t5 = 0x4;
            *(float *)((((int)stk + 0) + t5)) = (-(u20 * u11));
            t5 = 0x8;
            *(float *)((((int)stk + 0) + t5)) = u10;
            t5 = (FUN_0c078800((((int)stk + 0) + 0xC), ((int)stk + 0), t9));
            t5 = 0xC;
            t5 = (FUN_0c07ff00());
            t17 = (t17 + 0x1);
            t18 = (t18 + 0x8);
            if ((int)t17 >= (int)0x4) {
                break;
            }
        }
        t6 = (t6 + 0x1);
        if ((int)t6 >= (int)0x19) {
            break;
        }
    }
    return t5;
}

int FUN_0c0303d0(int a4)
{
    int stk[4];
    register int t7;
    register int t8;
    register int t12;
    register int t13;
    register int t15;
    register int t31;
    register int t6;
    register int t9;
    register int t27;
    register int t16;

    if ((*(int *)((a4 + 0x20))) == 0) {
    } else {
        FUN_0c07ff00();
        FUN_0c073360();
        FUN_0c073a60(a4);
        MultiRot4Vec((a4 + 0x30));
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 0)) = 0xC129D00;
        t7 = t6;
        t8 = 0x0;
        for (;;) {
            if ((int)t8 >= (int)(*(int *)(((((int)stk + 0) + 0x4) + (((((struct o6C_int *)(a4))->v)) << 2))))) {
                break;
            }
            t7 = 0x84;
            t12 = set_event(t7, 0xC0300D8);
            t7 = t12;
            if (t12 != 0) {
                t9 = t7;
                t9 = (t9 + 0x14);
                t13 = a4;
                t15 = t9;
                for (;;) { t16 = *(int *)t13; t13 = (t13 + 4); if ((unsigned int)((a4 + 112)) < (unsigned int)t13) break; *(unsigned int *)t15 = t16; t15 = (t15 + 4); }
                t7 = 0x0;
                nlGetPushedMatrix(t7);
                t7 = ((((struct o6C_int *)(a4))->v));
                t7 = (t7 << 2);
                t7 = (t7 << 2);
                t7 = (t7 << 2);
                t7 = (t7 << 1);
                t7 = (t7 + 0xC129D40);
                t7 = (t7 + ((t8 << 2) << 2));
                FUN_0c073a60(t7);
                t7 = t9;
                FUN_0c072600(t7);
                (((struct o54_uint *)(t9))->v) = 0xC129884;
                (((struct o64_uint *)(t9))->v) = (*(int *)(((*(int *)(((*(int *)(((int)stk + 0))) + 0x0))) + 0x0)));
                t7 = t9;
                SetColliObj(t7, 0x15);
            } else {
                t27 = t7;
            }
            t8 = (t8 + 0x1);
            t7 = t27;
        }
        nlPopMatrix(0x2);
        KillColliObj(a4);
        (((struct o68_uint *)(a4))->v) = 0xFFFFFFFE;
        t31 = 0x68;
    }
    return t31;
}

int FUN_0c079700(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    t0 = *(short *)((a4 + 0xE));
    t1 = (((struct o0_int *)0xC2C3DE4)->v);
    t2 = ((unsigned int)t0 >> 2);
    if ((t0 & 0x3) != 0) {
        t2 = (((unsigned int)t0 >> 2) + 0x1);
    }
    if ((int)t2 > 0) {
        t0 = 0x0;
        t3 = t1;
        for (;;) {
            t0 = (t0 + 0x1);
            *(unsigned int *)((t3 + 0x0)) = 0x0;
            t3 = (t3 + 0x4);
            if ((int)t0 >= (int)t2) {
                break;
            }
        }
    }
    if (((*(int *)((a5 + 0x0))) & 1) == 0) {
        nlMvCalcEdgeA((*(int *)((a4 + 0x0))), (*(short *)((a4 + 0xC))));
    } else {
        u0 = (((struct o20_float *)0xC2C3DE4)->v);
        u1 = (((struct o24_float *)0xC2C3DE4)->v);
        t0 = *(short *)((a4 + 0x10));
        t1 = *(int *)((a4 + 0x0));
        u2 = (((struct o1C_float *)0xC2C3DE4)->v);
        t2 = t0;
        t3 = (t0 + 0x1);
        t0 = 0xC2C3DE8;
        t4 = ((((struct o4_int *)0xC2C3DE4)->v));
        t5 = (*(int *)((a4 + 0x8)));
        t6 = 0xC2C3E00;
        for (;;) {
            t3 = (t3 - 0x1);
            if (t3 == 0) {
                break;
            }
            t2 = (*(short *)((t5 + 0xC)));
            t6 = t1;
            u3 = u2;
            t5 = (t5 + 0x18);
            t0 = t2;
            t2 = (t2 << 1);
            t2 = (t2 + t0);
            t2 = (t2 << 2);
            t6 = (t6 + t2);
            u4 = (*(float *)((t6 + 0x0)));
            t2 = 0x4;
            u3 = (u3 - u4);
            *(float *)((t4 + 0x0)) = u3;
            u4 = (*(float *)((t6 + t2)));
            u3 = u0;
            u3 = (u3 - u4);
            *(float *)((t4 + t2)) = u3;
            t2 = 0x8;
            u4 = (*(float *)((t6 + t2)));
            u3 = u1;
            u3 = (u3 - u4);
            *(float *)((t4 + t2)) = u3;
            t4 = (t4 + 0xC);
        }
        nlMvCalcEdgeB((*(int *)((a4 + 0x0))), (*(short *)((a4 + 0xC))), a5);
    }
    nlMvPutPolygon((*(int *)((a4 + 0x8))), (*(short *)((a4 + 0x10))), (*(int *)((a4 + 0x4))), a5);
    nlMvPutStrip((*(int *)((a4 + 0x4))), (*(short *)((a4 + 0xE))));
    return nlMvEndList();
}

int FUN_0c08fabc(int a4, int a5)
{
    int stk[19];
    register int t3;

    (((struct o48_uint *)(((int)stk + 0)))->v) = a4;
    (((struct o44_uint *)(((int)stk + 0)))->v) = a5;
    *(unsigned int *)(((int)stk + 0)) = (((*(int *)(((int)stk + 72))) * 0x154) + 0xC2C8D2C);
    t3 = FUN_0c08f204((*(int *)(((int)stk + 72))), (*(int *)(((int)stk + 68))), (((int)stk + 0) + 0x4));
    *(unsigned int *)(((int)stk + 52)) = t3;
    if ((int)t3 < 0) {
        return 0xFFFFFF05;
    }
    *(unsigned int *)(((int)stk + 48)) = (FUN_0c08f9c4((*(int *)(((int)stk + 72))), (*(int *)(((int)stk + 52)))));
    *(unsigned int *)(((int)stk + 60)) = (*(int *)(((int)stk + 16)));
    if ((int)(*(int *)(((int)stk + 60))) >= (int)(*(int *)(((*(int *)(((*(int *)(((int)stk + 0))) + 0x1C))) + 0x30)))) {
        return 0xFFFFFF41;
    }
    *(unsigned int *)(((int)stk + 64)) = 0x0;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 64))) >= (int)(*(int *)(((int)stk + 44)))) {
            return 0x0;
        }
        *(unsigned int *)(((int)stk + 56)) = (unsigned short)(FUN_0c08f87c((*(int *)(((int)stk + 72))), (*(int *)(((int)stk + 60)))));
        if ((*(int *)(((int)stk + 64))) == ((*(int *)(((int)stk + 44))) - 1)) {
            if ((*(int *)(((int)stk + 56))) != 0xFFFA) {
                break;
            }
            *(unsigned int *)(((int)stk + 60)) = (*(int *)(((int)stk + 56)));
            *(unsigned int *)(((int)stk + 64)) = ((*(int *)(((int)stk + 64))) + 0x1);
            continue;
        }
        if ((*(int *)(((int)stk + 56))) == (*(int *)(((int)stk + 60)))) {
            return 0xFFFFFF41;
        }
        if ((*(int *)(((int)stk + 56))) == 0xFFFA) {
            return 0xFFFFFF41;
        }
        if ((*(int *)(((int)stk + 56))) == 0xFFFC) {
            return 0xFFFFFF41;
        }
        if ((*(int *)(((int)stk + 56))) == 0xFFFF) {
            return 0xFFFFFF41;
        }
        if ((int)(*(int *)(((int)stk + 56))) >= (int)(*(int *)(((*(int *)(((*(int *)(((int)stk + 0))) + 0x1C))) + 0x30)))) {
            return 0xFFFFFF41;
        }
        *(unsigned int *)(((int)stk + 60)) = (*(int *)(((int)stk + 56)));
        *(unsigned int *)(((int)stk + 64)) = ((*(int *)(((int)stk + 64))) + 0x1);
    }
    return 0xFFFFFF41;
}

int FUN_0c0209b6(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC2708C8;
    t1 = t0;
    if (t0 == 3) {
    } else {
        if (t0 == 5) {
            FUN_0c01fd5c();
            FUN_0c06e990(0x276);
            FUN_0c07acd0(0xC142C64, 0x0);
        }
        FUN_0c020388();
        FUN_0c06e990(0x118);
        gdc_FileLoad(0xCB60000, 0xC09B0CC, 0x0);
        nlSpriteFreeTexture(0xC13FD34, 0xC098C50);
        if ((*(int *)0xC2A4658) == 0) {
            FUN_0c06e990(0x262);
            gdc_FileLoad(0xCB60000, 0xC09B0DC, 0x0);
            t0 = 0xC140F94;
        } else {
            FUN_0c06e990(0x26C);
            gdc_FileLoad(0xCB60000, 0xC09B0E8, 0x0);
            t0 = 0xC141024;
        }
        nlSpriteFreeTexture(t0, 0xC098818);
        FUN_0c06e990(0x50A);
        gdc_FileLoad(0xCB60000, 0xC09B0F4, 0x0);
        FUN_0c07a970(0xC142F34, 0xC098818, ((*(int *)(((((*(int *)0xC175C80) & 0x7) << 2) + 0xC10CCA4))) - 1290));
        t0 = FUN_0c06e990(0x0);
        *(unsigned int *)0xC2708C8 = 0x3;
        *(unsigned int *)0xC11D048 = 0x3;
        t1 = t0;
    }
    return t1;
}

int FUN_0c0909ce(int a4, int a5, int a6, int a7, int a8)
{
    int stk[25];
    register int t7;
    register int t36;
    register int t50;

    stk[16] = a8;
    *(unsigned int *)(((int)stk + 60)) = a4;
    *(unsigned int *)(((int)stk + 56)) = a5;
    *(unsigned int *)(((int)stk + 52)) = a6;
    *(unsigned int *)(((int)stk + 48)) = a7;
    *(unsigned int *)(((int)stk + 28)) = (((*(int *)(((int)stk + 60))) * 0x154) + 0xC2C8D2C);
    *(unsigned int *)(((int)stk + 32)) = (*(int *)(((int)stk + 52)));
    *(unsigned int *)(((int)stk + 4)) = (((*(int *)(((int)stk + 60))) * 0x154) + 0xC2C8D2C);
    *(unsigned int *)(((*(int *)(((int)stk + 4))) + 0x30)) = 0x1;
    *(unsigned int *)(((*(int *)(((int)stk + 4))) + 0x34)) = a8;
    t7 = vmsfs_fgetinfo((*(int *)(((int)stk + 60))), (*(int *)(((int)stk + 56))), (((int)stk + 4) + 0x4));
    *(unsigned int *)(((int)stk + 40)) = t7;
    if ((int)t7 < 0) {
        return t7;
    }
    if ((unsigned char)(*(signed char *)(((int)stk + 14))) != 1) {
        return 0xFFFFFF0B;
    }
    if ((unsigned int)(*(int *)(((int)stk + 48))) >= (unsigned int)(unsigned short)(*(short *)(((int)stk + 12)))) {
        return 0xFFFFFF00;
    }
    if ((unsigned int)((((struct o40_int *)(((int)stk + 4)))->v)) > (unsigned int)(unsigned short)(*(short *)(((int)stk + 12)))) {
        return 0xFFFFFF00;
    }
    if ((unsigned int)((*(int *)(((int)stk + 48))) + a8) > (unsigned int)(unsigned short)(*(short *)(((int)stk + 12)))) {
        return 0xFFFFFF00;
    }
    t36 = FUN_0c08fabc((*(int *)(((int)stk + 60))), (*(int *)(((int)stk + 56))));
    *(unsigned int *)(((int)stk + 40)) = t36;
    if ((int)t36 < 0) {
        return t36;
    }
    FUN_0c090e4c((*(int *)(((int)stk + 60))), 0x0, (((int)stk + 4) + 0x20), 0x0);
    vmsfs_lockbank((*(int *)(((int)stk + 60))), 0x0);
    *(unsigned int *)(((int)stk + 44)) = 0x0;
    for (;;) {
        if ((unsigned int)(*(int *)(((int)stk + 44))) >= (unsigned int)a8) {
            vmsfs_lockbank((*(int *)(((int)stk + 60))), (*(int *)(((int)stk + 36))));
            return (*(int *)(((int)stk + 40)));
        }
        t50 = vmsfs_write_retry((*(int *)(((int)stk + 60))), ((*(int *)(((int)stk + 44))) + (*(int *)(((int)stk + 48)))), (*(int *)(((int)stk + 32))));
        *(unsigned int *)(((int)stk + 40)) = t50;
        if ((int)t50 < 0) {
            break;
        }
        *(unsigned int *)(((int)stk + 32)) = ((*(int *)(((int)stk + 32))) + 0x200);
        *(unsigned int *)(((int)stk + 44)) = ((*(int *)(((int)stk + 44))) + 0x1);
    }
    vmsfs_lockbank((*(int *)(((int)stk + 60))), (*(int *)(((int)stk + 36))));
    return (*(int *)(((int)stk + 40)));
}

int mpdrv_make_exdevicedata(int a4, int a5, int a6, int a7, int a8)
{
    int stk[1];
    register int t2;
    register int t16;
    int t68;
    register int t62;
    int t63;
    register int t64;

    *(unsigned char *)(((int)stk + 0)) = a4;
    make_header(a7, a8);
    *(unsigned char *)((a7 + 0x2)) = 0x0;
    *(unsigned char *)((a7 + 0x3)) = 0x0;
    t2 = *(signed char *)(((int)stk + 0));
    if (((unsigned char)(*(signed char *)((a5 + 0x2))) & (unsigned char)t2) != 0) {
        *(unsigned char *)((a7 + 0x4)) = 0x1;
        *(unsigned char *)((a7 + 0x0)) = 0x0;
        *(unsigned int *)((a7 + 0x24)) = ((*(int *)((a7 + 0x24))) + 0x1);
    }
    if (((unsigned char)(*(signed char *)((a5 + 0x3))) & (unsigned char)t2) != 0) {
        *(unsigned char *)((a7 + 0x4)) = 0x4;
        *(unsigned char *)((a7 + 0x0)) = 0x0;
        *(unsigned char *)((a7 + 0x3)) = 0x1;
        *(unsigned int *)((a7 + 0x24)) = 0x0;
    }
    if (((unsigned char)(*(signed char *)((a5 + 0x0))) & (unsigned char)t2) != 0) {
        t16 = *(signed char *)((a7 + 0x7));
        if (t16 == 0) {
            if ((*(signed char *)((a7 + 0x0))) == 0) {
            } else {
                *(unsigned char *)((a7 + 0x4)) = 0x0;
            }
        } else {
            if ((unsigned char)t16 == 1) {
                if ((unsigned char)(*(signed char *)((a7 + 0x8))) == 5) {
                    *(unsigned char *)((a7 + 0x2)) = 0x1;
                    *(unsigned char *)((a7 + 0x0)) = 0x1;
                    *(unsigned char *)((a7 + 0x4)) = 0x0;
                } else {
                    *(unsigned int *)((a7 + 0x24)) = ((*(int *)((a7 + 0x24))) + 0x1);
                    if ((unsigned int)(*(int *)((a7 + 0x24))) <= (unsigned int)((((struct o10D8_int *)((*(int *)0xC30817C)))->v))) {
                        *(unsigned char *)((a7 + 0x4)) = 0x1;
                    } else {
                        *(unsigned char *)((a7 + 0x0)) = 0x0;
                        *(unsigned char *)((a7 + 0x4)) = 0xFF;
                        *(unsigned int *)((a7 + 0x24)) = 0x0;
                    }
                }
            } else {
                if ((unsigned char)(*(signed char *)((a7 + 0x7))) == 4) {
                    *(unsigned char *)((a7 + 0x3)) = 0x1;
                    *(unsigned char *)((a7 + 0x0)) = 0x0;
                    *(unsigned char *)((a7 + 0x4)) = 0xFF;
                    *(unsigned int *)((a7 + 0x24)) = 0x0;
                } else {
                    if ((*(signed char *)((a7 + 0x7))) != 0) {
                        *(unsigned char *)((a7 + 0x4)) = 0x0;
                    }
                }
            }
        }
    } else {
        *(unsigned char *)((a7 + 0x4)) = 0xFF;
        *(unsigned char *)((a7 + 0x0)) = 0x0;
    }
    if (((*(signed char *)((a7 + 0x0))) != 0) && ((t62 = *(signed char *)((a7 + 0x7)), t62 != 0) && (t63 = *(int *)0xC30817C, t64 = (((struct o10C4_int *)(t63))->v), t64 == 1))) {
        t68 = *(int *)((a8 + 0x0));
        if ((t68 != -1) && (t68 != 0xFFFFFF00)) {
            FUN_0c16dacc(a8, ((unsigned char)(*(int *)((a8 + 0x0))) + 0x1));
        }
    }
    if ((*(signed char *)((a7 + 0x2))) != 0) {
        (((struct o10_uchar *)(a6))->v) = 0x0;
        mpdrv_make_deviceinfo(a6, a7, a8);
    }
    if ((*(signed char *)((a7 + 0x3))) != 0) {
        (((struct o10_uchar *)(a6))->v) = 0x0;
        mpdrv_clear_deviceinfo(a6);
    }
    return 0x0;
}

int FUN_0c0302a2(int a4)
{
    int stk[2];
    register int t3;
    register int t9;
    register int t10;
    register int t13;
    register int t15;
    register int t44;
    register int t11;
    register int t16;
    int R1000;
    int R1004;

    R1000 = *(int *)((int)stk + 0);
    R1004 = *(int *)((int)stk + 4);

    if ((*(int *)((a4 + 0x20))) == 0) {
    } else {
        t3 = 0x8;
        if ((int)((((struct o6C_int *)(a4))->v)) < (int)0x3) {
            t3 = 0x3;
        }
        FUN_0c073360();
        FUN_0c073a60(a4);
        MultiRot4Vec((a4 + 0x30));
        nlPushMatrix(0x0);
        R1000 = 0xC1296B0;
        R1004 = 0xC129CCC;
        if ((int)t3 > 0) {
            t9 = 0x0;
            t10 = 0x0;
            for (;;) {
                t11 = set_event(0x84, 0xC0300D8);
                if (t11 != 0) {
                    t11 = (t11 + 0x14);
                    t13 = a4;
                    t15 = t11;
                    for (;;) { t16 = *(int *)t13; t13 = (t13 + 4); if ((unsigned int)((a4 + 112)) < (unsigned int)t13) break; *(unsigned int *)t15 = t16; t15 = (t15 + 4); }
                    nlGetPushedMatrix(0x0);
                    FUN_0c073a60(((((((((((struct o6C_int *)(a4))->v)) << 2) << 2) << 2) << 1) + 0xC129D40) + t10));
                    nlRotateAY((*(int *)((((((((((((struct o6C_int *)(a4))->v)) << 2) << 2) << 2) << 1) + 0xC129D40) + t10) + 0xC))));
                    FUN_0c072600(t11);
                    GetRotVec((t11 + 0x30));
                    (((struct o54_uint *)(t11))->v) = (R1000);
                    (((struct o64_uint *)(t11))->v) = (*(int *)(((*(int *)(((R1004) + 0x0))) + 0x0)));
                    SetColliObj(t11, 0x15);
                }
                t9 = (t9 + 0x1);
                t10 = (t10 + 0x10);
                if ((int)t9 >= (int)t3) {
                    break;
                }
            }
        }
        nlPopMatrix(0x2);
        KillColliObj(a4);
        (((struct o68_uint *)(a4))->v) = 0xFFFFFFFE;
        t44 = 0x68;
    }
    return t44;
}

int FUN_0c067220(int a4)
{
    register int t0;
    register int t1;

    (((struct o80_uint *)(a4))->v) = 0x6;
    t0 = 0x0;
    if ((int)(*(int *)((((((struct oAC_int *)(a4))->v)) + 0x8))) > (int)0x1) {
        t0 = 0x1;
    }
    t1 = *(int *)0xC175C80;
    if (t0 != 0) {
        if ((int)t1 < (int)0x10) {
            t0 = ((int)((int)(unsigned short)(((*(int *)0xC2B9EE8) - (*(short *)0xC17593E)) + 0x1000) / (int)0x2000));
        } else {
            t0 = ((int)((int)(unsigned short)(((*(int *)0xC2B9EE8) - (*(short *)0xC17593E)) + 0x9000) / (int)0x2000));
        }
        FUN_0c05f470(a4, (*(int *)((((((((((struct o84_int *)(a4))->v)) << 2) << 1) + t0) << 2) + 0xC1100C8))), 0.0f, 0.0f);
    } else {
        if ((int)t1 < (int)0x10) {
            t0 = ((int)((int)(unsigned short)(((*(int *)0xC2B9EE8) - (*(short *)0xC17593E)) + 0x1000) / (int)0x2000));
        } else {
            t0 = ((int)((int)(unsigned short)(((*(int *)0xC2B9EE8) - (*(short *)0xC17593E)) + 0x9000) / (int)0x2000));
        }
        FUN_0c05f470(a4, (*(int *)(((t0 << 2) + 0xC110058))), 0.0f, 0.0f);
    }
    if (((((struct o84_int *)(a4))->v)) == 0) {
        return FUN_0c06a820(0x1, (*(int *)((a4 + 0x10))), (*(int *)((((((struct oAC_int *)(a4))->v)) + 0x4))));
    }
    return 0x84;
}

int FUN_0c07d050(int a4)
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

    t0 = *(signed char *)((0xC2C3EA8 + (unsigned char)((unsigned short)a4 * (unsigned short)0x1C)));
    t1 = t0;
    if (t0 == 1) {
        t0 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x1C) + 0xC2C3EA8) + 0x1));
        t2 = t0;
        if (t0 != 0) {
            t0 = *(int *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x1C) + 0xC2C3EA8) + 0x14));
            t3 = 0x0;
            for (;;) {
                t4 = FUN_0c07b6e6(t0);
                if (t4 == 0) {
                    t3 = (t3 + 0x1);
                    if ((unsigned int)t3 >= (unsigned int)0x40000) {
                        break;
                    }
                    continue;
                }
                t4 = FUN_0c07b6e6(t0);
                t3 = (FUN_0c07b6e6((t4 | 0xA0000000)));
                t3 = (t3 & 0x7FF);
                FUN_0c07b6c0(t3, (t4 | 0xA0000000));
                t5 = FUN_0c07b6e6((((((((short)a4 << 1) + (short)a4) << 2) << 2) << 1) + 0xA0800128));
                if ((t5 & 0x300) == 0x100) {
                    t5 = *(int *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x1C) + 0xC2C3EA8) + 0x14));
                    t6 = 0x0;
                    for (;;) {
                        t7 = FUN_0c07b6e6((t5 + 0x4));
                        if (t7 == 0) {
                            t6 = (t6 + 0x1);
                            if ((unsigned int)t6 >= (unsigned int)0x40000) {
                                break;
                            }
                            continue;
                        }
                        t7 = FUN_0c07b6e6((t5 + 0x4));
                        t8 = FUN_0c07b6e6((t7 | 0xA0000000));
                        FUN_0c07b6c0((t8 & 0x7FF), (t7 | 0xA0000000));
                        t3 = (t3 | 0x8000);
                        FUN_0c07b6c0(t3, (t4 | 0xA0000000));
                        FUN_0c07c8be((((((short)a4 << 8) << 2) << 2) + 0x2A1));
                        *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x1C) + 0xC2C3EA8) + 0x1)) = 0x0;
                        return 0x0;
                    }
                } else {
                    t3 = (t3 | 0x8000);
                    FUN_0c07b6c0(t3, (t4 | 0xA0000000));
                }
                FUN_0c07c8be((((((short)a4 << 8) << 2) << 2) + 0x2A1));
                *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x1C) + 0xC2C3EA8) + 0x1)) = 0x0;
                return 0x0;
            }
            FUN_0c07c8be((((((short)a4 << 8) << 2) << 2) + 0x2A1));
            *(unsigned char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x1C) + 0xC2C3EA8) + 0x1)) = 0x0;
            t2 = 0x0;
        }
        t1 = t2;
    }
    return t1;
}

int gdFsStopRd(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    int t4;
    int t5;
    register int t6;

    t1 = 0xFFFFFFF6;
    if ((a4 != 0) && (t0 = (((struct o4C_short *)(a4))->v), t0 != 0)) {
        t0 = (((struct o50_short *)(a4))->v);
        if ((t0 != 2) && (t0 != 4)) {
            (((struct o50_ushort *)(a4))->v) = 0x0;
            t0 = 0x0;
        } else {
            t2 = 0xFFFFFFF3;
            if ((*(int *)(((*(int *)((a4 + 0x0))) + 0x1C))) != a4) {
            } else {
                t3 = syTmrGetCount();
                for (;;) {
                    if (((((struct o40_int *)(a4))->v)) == 1) {
                        t4 = syTmrGetCount();
                        for (;;) {
                            t5 = syTmrGetCount();
                            t6 = syTmrDiffCount(t4, t5);
                            if ((unsigned int)t6 >= (unsigned int)0x61B) {
                                break;
                            }
                        }
                        t4 = _builtin_get_imask();
                        _builtin_set_imask(0xF);
                        t5 = (((struct o50_short *)(a4))->v);
                        if ((t5 != 2) && (t5 != 4)) {
                            (((struct o50_ushort *)(a4))->v) = 0x0;
                            _builtin_set_imask(((unsigned int)(((t4 & 0xF) << 2) << 2) >> 4));
                            return 0x0;
                        }
                        if ((*(int *)(((*(int *)((a4 + 0x0))) + 0x1C))) != a4) {
                            _builtin_set_imask(((unsigned int)(((t4 & 0xF) << 2) << 2) >> 4));
                            return 0xFFFFFFF3;
                        }
                        t5 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)(((*(int *)((a4 + 0x0))) + 0xC))) + 0x14)))))((*(int *)((a4 + 0x3C))), 0xFFFFFFF3, a6, a7);
                        (((struct o48_ushort *)(a4))->v) = 0x3;
                        _builtin_set_imask(((unsigned int)(((t4 & 0xF) << 2) << 2) >> 4));
                        return (gdFsWaitCompleteReq(a4));
                    }
                    t4 = (((struct o50_short *)(a4))->v);
                    if ((t4 != 2) && (t4 != 4)) {
                        break;
                    }
                    t4 = syTmrGetCount();
                    t5 = syTmrDiffCount(t3, t4);
                    if ((unsigned int)t5 > (unsigned int)0xEE6B28) {
                        return 0xFFFFFFEB;
                    }
                    t4 = ((int (*)(int, int, int, int))(((((struct o48_int *)((*(int *)(((*(int *)((a4 + 0x0))) + 0x3C)))))->v))))(t5, 0xEE6B28, a6, a7);
                }
                (((struct o50_ushort *)(a4))->v) = 0x0;
                t2 = 0x0;
            }
            t0 = t2;
        }
        t1 = t0;
    }
    return t1;
}

int FUN_0c055604(void)
{
    int stk[1];
    int t0;
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    register int t17;
    register int t22;
    register int t7;
    int R1000;

    R1000 = *(int *)((int)stk + 0);

    t0 = *(int *)0xC2B31F4;
    if ((int)t0 <= (int)0x5) {
        t7 = ((((0x5 - t0) << 1) + (0x5 - t0)) + 0x14);
    } else {
        t7 = 0x28;
        if ((t0 != 0x3E7) && (t0 != 99)) {
            t7 = 0x14;
        }
    }
    t8 = 0x0;
    t9 = 0xC2B3248;
    t10 = 0xC2B31C8;
    t11 = ((0x0 + t7) + 0x1);
    for (;;) {
        R1000 = ((t8 + t7) + 0x1);
        *(unsigned int *)(((t8 << 2) + 0xC2B3208)) = ((t8 + t7) + 0x1);
        t17 = 0x0;
        if ((int)((*(int *)((0xC2B31C8 + (t8 << 2)))) - ((int)((int)(R1000) % (int)0xA))) < 0) {
            *(unsigned int *)((0xC2B31C8 + (t8 << 2))) = ((*(int *)((0xC2B31C8 + (t8 << 2)))) + 0xA);
            t17 = 0x1;
        }
        t22 = (int)((int)((*(int *)((0xC2B31C8 + (t8 << 2)))) - ((int)((int)t11 % (int)0xA))) % (int)0xA);
        *(unsigned int *)(((0xC2B3228 + (t8 << 2)) + 0x0)) = t22;
        if ((int)t17 > 0) {
            *(unsigned int *)((t10 + 0x0)) = ((*(int *)((t10 + 0x0))) - 10);
        }
        t8 = (t8 + 0x1);
        *(unsigned int *)((t9 + 0x0)) = 0x0;
        t10 = (t10 + 0x4);
        t9 = (t9 + 0x4);
        t11 = (t11 + 0x1);
        if ((int)t8 >= (int)0x8) {
            break;
        }
    }
    return t22;
}

float FUN_0c02806c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    int t3;
    register int t4;
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    t0 = a4;
    t1 = a7;
    u0 = 0.0f;
    for (;;) {
        if ((*(signed char *)((t0 + 0x0))) != 0) {
            t2 = (*(signed char *)((t0 + 0x0)));
            t1 = 0x20;
            if ((int)t2 >= (int)t1) {
                if ((int)t2 <= (int)0x7F) {
                    t3 = (*(signed char *)((t0 + 0x0)));
                    if (t3 == 92) {
                        t2 = 0xC270D18;
                        t3 = (*(int *)((t2 + 0x0)));
                        t1 = ((((struct o0_int *)0xC270D14)->v));
                        if ((t3 != 5) && (t3 != 9)) {
                            if ((t3 != 6) && (t3 != 10)) {
                                if ((t3 != 7) && (t3 != 11)) {
                                } else {
                                    t2 = 0x1200;
                                    (((struct o0_uint *)0xC270D14)->v) = (((((struct o0_int *)0xC270D14)->v)) + t2);
                                    t0 = (t0 + 0x1);
                                }
                            } else {
                                t2 = 0xC00;
                                t4 = ((((struct o0_int *)0xC270D14)->v));
                                t4 = (t4 + t2);
                                (((struct o0_uint *)0xC270D14)->v) = t4;
                                t0 = (t0 + 0x1);
                            }
                        } else {
                            t2 = 0x600;
                            t4 = ((((struct o0_int *)0xC270D14)->v));
                            t4 = (t4 + t2);
                            (((struct o0_uint *)0xC270D14)->v) = t4;
                            t0 = (t0 + 0x1);
                        }
                        t2 = (*(signed char *)((t0 + 0x0)));
                        t3 = 0x4;
                        t2 = (t2 - 32);
                        u1 = ((((struct o14_float *)0xC270D14)->v));
                        t2 = (signed char)t2;
                        t2 = (t2 << 2);
                        t2 = (t2 << 2);
                        t2 = (t2 + ((((struct o0_int *)0xC270D14)->v)));
                        u2 = (*(float *)((t2 + t3)));
                        u2 = (u2 + -1.0f);
                        u3 = u0;
                        u3 = u3 + u1 * u2;
                        u0 = u3;
                        (((struct o0_uint *)0xC270D14)->v) = t1;
                    } else {
                        t1 = (*(signed char *)((t0 + 0x0)));
                        t3 = 0x4;
                        t4 = ((((struct o0_int *)0xC270D14)->v));
                        t1 = (t1 - 32);
                        u1 = ((((struct o14_float *)0xC270D14)->v));
                        t1 = (signed char)t1;
                        t1 = (t1 << 2);
                        t1 = (t1 << 2);
                        t1 = (t1 + t4);
                        u2 = (*(float *)((t1 + t3)));
                        u2 = (u2 + -1.0f);
                        u3 = u0;
                        u3 = u3 + u1 * u2;
                        u0 = u3;
                    }
                }
            }
            t0 = (t0 + 0x1);
            continue;
        }
        break;
    }
    u1 = u0;
    u1 = u1 + 1.0f * ((((struct o14_float *)0xC270D14)->v));
    return u1;
}

int FUN_0c033e38(int a4, int a5, int a6)
{
    int stk[3];

    register int R1;
    register int R2;
    register int R3;
    int R4;
    int R5;
    int R6;
    int R11;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    int R1000;
    int R1004;
    int R1008;
    R1000 = *(int *)((int)stk + 0);
    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R1000 = R5;
    R1004 = R6;
    v0_1 = *(int *)((((R4 * 0x2C) + 0xC2A4680) + 0x0));
    R1008 = (*(int *)((((v0_1 << 2) + (((R4 * 0x2C) + 0xC2A4680) + 0x4)) + 0x0)));
    v0_0 = (0x0);
    v0_1 = (((v0_1 << 2) + (((R4 * 0x2C) + 0xC2A4680) + 0x4)));
    R5 = (((R4 * 0x2C) + 0xC2A4680));
    if (((*(int *)0xC2A46E0) != 1)) goto L_C033E72;
    if ((R4 == 0)) goto L_C033F4E;
    L_C033E72:;
    v0_2 = (0xC07C8BE);
    R11 = (0x8);
    v0_2 = (0xC2A4670);
    R4 = (((((struct o0_int *)0xC2A4670)->v)));
    R6 = (0x4);
    if ((((*(int *)((R5 + 0x1C))) & 0x4) == 0)) goto L_C033F08;
    if (((0x2 & R4) == 0)) goto L_C033EA6;
    if (((*(int *)((((((*(int *)((v0_1 + 0x0))) << 2) << 1) + (*(int *)((R5 + 0x24)))) + 0x8))) == 0)) goto L_C033F08;
    *(unsigned int *)((R5 + 0x1C)) = ((*(int *)((R5 + 0x1C))) | R11);
    FUN_0c07c8be(0xDA9);
    L_C033F08:;
    if (((((int)0x1 << (int)(*(int *)((v0_1 + 0x0)))) & (R1004)) == 0)) goto L_C033F3C;
    if ((v0_0 != 0)) goto L_C033EB8;
    L_C033EF8:;
    v0_3 = *(int *)((v0_1 + 0x0));
    *(unsigned int *)((v0_1 + 0x0)) = (v0_3 + 0x1);
    if (((int)(v0_3 + 0x1) < (int)(R1000))) goto L_C033F08;
    *(unsigned int *)((v0_1 + 0x0)) = 0x0;
    goto L_C033F08;
    L_C033EB8:;
    v0_3 = *(int *)((v0_2 + 0x0));
    R4 = (v0_3);
    if (((v0_3 & R11) != 0)) goto L_C033ECC;
    if (((*(int *)((v0_2 + 0x8))) != 0)) goto L_C033EE0;
    if ((((*(int *)((v0_2 + 0x4))) & R11) == 0)) goto L_C033EE0;
    L_C033ECC:;
    v0_3 = *(int *)((v0_1 + 0x0));
    *(unsigned int *)((v0_1 + 0x0)) = (v0_3 - 1);
    v0_0 = (0xFFFFFFFF);
    if (((int)(v0_3 - 1) >= 0)) goto L_C033F08;
    *(unsigned int *)((v0_1 + 0x0)) = ((R1000) - 1);
    goto L_C033F08;
    L_C033EE0:;
    R5 = (0x10);
    if (((R4 & 0x10) != 0)) goto L_C033EF6;
    if ((((((struct o8_int *)0xC2A4670)->v)) != 0)) goto L_C033F08;
    if (((((((struct o4_int *)0xC2A4670)->v)) & R5) == 0)) goto L_C033F08;
    L_C033EF6:;
    v0_0 = (0x1);
    goto L_C033EF8;
    L_C033F3C:;
    if (((*(int *)((v0_1 + 0x0))) == (R1008))) goto L_C033F4E;
    FUN_0c07c8be(0x10DA9);
    v0_0 = (0x1);
    L_C033F50:;
    return v0_0;
    L_C033F4E:;
    v0_0 = (0x0);
    goto L_C033F50;
    L_C033EA6:;
    if (((R4 & R6) == 0)) goto L_C033EB8;
    *(unsigned int *)((R5 + 0x1C)) = ((*(int *)((R5 + 0x1C))) | 0x9);
    FUN_0c07c8be(0x30DA9);
    goto L_C033F08;
}

int FUN_0c047ab0(int a4)
{
    int stk[3];
    register int t18;
    int t16;
    float u20;
    register float u21;

    if ((int)((((struct o0_int *)0xC12D2A8)->v)) >= (int)0xB) {
    } else {
        *(volatile int *)0xC1EC71C;
        
        FUN_0c07ff00();
        FUN_0c07ff00();
        *(float *)(((int)stk + 4)) = (*(float *)0xC175934);
        nlSubVector(((int)stk + 0), 0xC175930);
        nlScaleUnitVector(((int)stk + 0), ((int)stk + 0), ((((struct o0_float *)0xC047C2C)->v)));
        nlAddVector(((int)stk + 0), 0xC175930);
        if (((*(int *)((a4 + 0x8))) == 28) && (t16 = *(int *)0xC1EC71C, t16 == 0)) {
        } else {
            t18 = FUN_0c029b12(((int)stk + 0), ((((struct o10_float *)0xC047C2C)->v)));
            if (((*(int *)((t18 + 0x1C))) != -1) && (u20 = (((struct o18_float *)(t18))->v), u21 = *(float *)(((int)stk + 4)), u20 > u21)) {
                *(float *)(((int)stk + 4)) = ((((struct o18_float *)(t18))->v));
            }
        }
        *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + ((((struct o18_float *)0xC047C2C)->v)));
        *(volatile int *)((a4 + 0x8));
        *(volatile int *)0xC2ADA68;
        FUN_0c07ff00();
    }
    (((struct o8_uint *)0xC12D2A8)->v) = 0xFFFFFFFF;
    return 0xC12D2B0;
}


int FUN_0c069d2c(int a4)
{
    int stk[26];
    register int t2;
    register int t3;
    register int t12;
    register int t13;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x0)) = 0x6;
    *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x4)) = 0xFF8080FF;
    (((struct o5C_uint *)((((int)stk + 0) + 0x8)))->v) = 0x0;
    *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 0) + 0x8) + 0x8);
    FUN_0c073360();
    t2 = 0x6;
    t3 = ((((int)stk + 0) + 0x8) + 0x8);
    for (;;) {
        if (t2 == 0) {
            break;
        }
        nlRotateAY(0x2AAA);
        FUN_0c072290(0xC10D9C8, t3);
        t2 = (t2 - 1);
        t3 = (t3 + 0xC);
    }
    *(volatile int *)(((int)stk + 4));
    FUN_0c07ff00();
    nlPopMatrix(0x1);
    FUN_0c073360();
    FUN_0c073a60(((*(int *)(((int)stk + 0))) + 0x54));
    t12 = 0xC069DF8;
    t13 = 0x5;
    for (;;) {
        if (t13 == 0) {
            break;
        }
        t12 = (nlPushMatrix(0x0));
        t12 = (nlScale(40.0f, 40.0f, 40.0f));
        t12 = (FUN_0c078850((((int)stk + 0) + 0x8)));
        t12 = (nlPopMatrix(0x1));
        t12 = 0x1E;
        t12 = ((int)((int)(*(int *)0xC1EC83C) % (int)t12));
        t12 = (FUN_0c073a30(0.0f, (((((float)t12 * 5.0f) / 30.0f)) + 5.0f), 0.0f));
        t13 = (t13 - 1);
    }
    return (nlPopMatrix(0x1));
}

int FUN_0c07c9a4(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;

    if ((unsigned int)a4 >= (unsigned int)0x8) {
        return 0xFFFFFF80;
    }
    if ((int)(a5 - 1) < 0) {
        return 0xFFFFFF80;
    }
    if ((int)(a5 - 1) < (int)0x10) {
        t0 = FUN_0c07b6e6(((*(int *)0xC2C3E60) + 0x4));
        t1 = FUN_0c07b6e6(((0xA0800000 + t0) + ((((a4 << 2) << 2) + (a5 - 1)) << 2)));
        if ((unsigned char)t1 == 0xFF) {
            return 0xFFFFFF7F;
        }
        t0 = FUN_0c07b6e6(((*(int *)0xC2C3E60) + 0x8));
        if (a6 != 0x1B0) {
            if (a6 != 0x2B0) {
                if (a6 != 0x27B0) {
                    if (a6 != 0x2AB0) {
                        return 0xFFFFFF80;
                    }
                    return (*(signed char *)(((signed char)((unsigned int)((unsigned int)((FUN_0c07b6e6((((0xA0800000 + t0) + (((((unsigned char)t1 & 0x3F) << 2) << 2) << 2)) + 0x8))) & 0x1F000000) >> 16) >> 8) + 0xC113FA4)));
                }
                t2 = FUN_0c07b6e6((((0xA0800000 + t0) + (((((unsigned char)t1 & 0x3F) << 2) << 2) << 2)) + 0x8));
                return (short)((unsigned int)(t2 & 0x7F0000) >> 16);
            }
            t2 = FUN_0c07b6e6((((0xA0800000 + t0) + (((((unsigned char)t1 & 0x3F) << 2) << 2) << 2)) + 0x14));
            return ((int)(t2 & 0x7F00) >> 8);
        }
        t2 = FUN_0c07b6e6((((0xA0800000 + t0) + (((((unsigned char)t1 & 0x3F) << 2) << 2) << 2)) + 0x14));
        return (t2 & 0x7F);
    }
    return 0xFFFFFF80;
}

int kmCreateContiguousTextureSurface(int a4, int a5, int a6, int a7, int a8)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t0 = FUN_0c1595e8(a4, a6, a7, a8);
    t1 = t0;
    if (t0 == 0) {
        t0 = 0x4;
        if ((unsigned short)(*(int *)((a4 + 0x0))) == 3) {
        } else {
            if ((int)a5 > (int)0x1) {
                if ((int)0x1 < (int)a5) {
                    t2 = (a4 + 0x28);
                    t3 = 0x1;
                    for (;;) {
                        t3 = (t3 + 0x1);
                        *(unsigned int *)((t2 + 0x0)) = (*(int *)((a4 + 0x0)));
                        *(unsigned int *)((t2 + 0x4)) = (*(int *)((a4 + 0x4)));
                        *(unsigned int *)((t2 + 0x8)) = (*(int *)((a4 + 0x8)));
                        *(unsigned int *)((t2 + 0xC)) = (*(int *)((a4 + 0xC)));
                        *(unsigned int *)((t2 + 0x10)) = (*(int *)((a4 + 0x10)));
                        *(unsigned int *)((t2 + 0x14)) = (*(int *)((a4 + 0x14)));
                        *(unsigned int *)((t2 + 0x18)) = (*(int *)((a4 + 0x18)));
                        t2 = (t2 + 0x28);
                        if ((int)t3 >= (int)a5) {
                            break;
                        }
                    }
                }
            }
            t2 = kmiTXalloc(((*(int *)((a4 + 0x14))) * a5), a4);
            if (t2 == 3) {
                kmiDefaultInterruptHandler(0x3);
                t3 = t2;
            } else {
                t4 = *(int *)((a4 + 0x1C));
                kmiFBfree(t4);
                t5 = t2;
                if ((int)a5 > 0) {
                    t2 = t4;
                    t4 = 0x0;
                    for (;;) {
                        *(unsigned int *)(((((((t4 << 2) + t4) << 2) << 1) + a4) + 0x1C)) = t2;
                        t6 = kmiABSalloc((*(int *)(((((((t4 << 2) + t4) << 2) << 1) + a4) + 0x14))), (((((t4 << 2) + t4) << 2) << 1) + a4));
                        t2 = (t2 + (((unsigned int)(*(int *)(((((((t4 << 2) + t4) << 2) << 1) + a4) + 0x14))) >> 2) << 2));
                        if (t6 == 3) {
                            break;
                        }
                        t4 = (t4 + 0x1);
                        if ((int)t4 >= (int)a5) {
                            return t6;
                        }
                    }
                    if ((int)t4 > 0) {
                        t2 = 0x0;
                        for (;;) {
                            kmiFBfree((*(int *)(((a4 + ((((t4 << 2) + t4) << 2) << 1)) + 0x1C))));
                            t2 = (t2 + 0x1);
                            if ((int)t2 >= (int)t4) {
                                break;
                            }
                        }
                    }
                    kmiDefaultInterruptHandler(0x3);
                    t5 = t6;
                }
                t3 = t5;
            }
            t0 = t3;
        }
        t1 = t0;
    }
    return t1;
}

int nlPerspectiveProj(int a4, int a5, int a6)
{
    int stk[19];
    register float u6;
    register float u9;
    register float u10;
    register float u13;
    register float u14;
    register float u17;
    register float u19;
    register float u20;
    register float u22;
    register float u24;
    register float u27;
    register float u28;
    register float u30;
    register float u32;
    register float u34;
    register float t36;
    register float u38;
    register float u40;
    register float u42;

    *(float *)((((int)stk + 0) + 0x0)) = ((*(float *)((a6 + 0x0))) - (*(float *)((a5 + 0x0))));
    (((struct o4_float *)(((int)stk + 0)))->v) = (((((struct o4_float *)(a6))->v)) - ((((struct o4_float *)(a5))->v)));
    (((struct o8_float *)(((int)stk + 0)))->v) = (((((struct o8_float *)(a6))->v)) - ((((struct o8_float *)(a5))->v)));
    u6 = (((struct oC_float *)(a4))->v);
    u9 = *(float *)((((int)stk + 0) + 0x0));
    u10 = (((((struct o10_float *)(a4))->v)) * ((((struct o4_float *)(((int)stk + 0)))->v)));
    u10 = u10 + u9 * u6;
    u13 = u10;
    u13 = u13 + ((((struct o8_float *)(((int)stk + 0)))->v)) * ((((struct o14_float *)(a4))->v));
    u14 = (u6 * (1.0f / u13));
    *(float *)(((int)stk + 12)) = (((-(u9 * u14))) + 1.0f);
    u17 = (u6 * (1.0f / u13));
    *(float *)(((int)stk + 16)) = (-(((((struct o4_float *)(((int)stk + 0)))->v)) * u17));
    u19 = (u6 * (1.0f / u13));
    *(float *)(((int)stk + 20)) = (-(((((struct o8_float *)(((int)stk + 0)))->v)) * u19));
    u20 = (((struct o10_float *)(a4))->v);
    u22 = (u20 * (1.0f / u13));
    *(float *)(((int)stk + 28)) = (-((*(float *)((((int)stk + 0) + 0x0))) * u22));
    u24 = (u20 * (1.0f / u13));
    *(float *)(((int)stk + 32)) = (((-(((((struct o4_float *)(((int)stk + 0)))->v)) * u24))) + 1.0f);
    u27 = (u20 * (1.0f / u13));
    *(float *)(((int)stk + 36)) = (-(((((struct o8_float *)(((int)stk + 0)))->v)) * u27));
    u28 = (((struct o14_float *)(a4))->v);
    u30 = (u28 * (1.0f / u13));
    *(float *)(((int)stk + 44)) = (-((*(float *)((((int)stk + 0) + 0x0))) * u30));
    u32 = (u28 * (1.0f / u13));
    *(float *)(((int)stk + 48)) = (-(((((struct o4_float *)(((int)stk + 0)))->v)) * u32));
    u34 = (u28 * (1.0f / u13));
    *(float *)(((int)stk + 52)) = (((-(((((struct o8_float *)(((int)stk + 0)))->v)) * u34))) + 1.0f);
    t36 = FUN_0c073b40(a4, (a4 + 0xC));
    u38 = (t36 * (1.0f / u13));
    *(float *)(((int)stk + 60)) = ((*(float *)((((int)stk + 0) + 0x0))) * u38);
    u40 = (t36 * (1.0f / u13));
    *(float *)(((int)stk + 64)) = (((((struct o4_float *)(((int)stk + 0)))->v)) * u40);
    u42 = (t36 * (1.0f / u13));
    *(float *)(((int)stk + 68)) = (((((struct o8_float *)(((int)stk + 0)))->v)) * u42);
    *(float *)(((int)stk + 24)) = 0.0f;
    *(float *)(((int)stk + 40)) = 0.0f;
    *(float *)(((int)stk + 56)) = 0.0f;
    *(float *)(((int)stk + 72)) = 1.0f;
    nlMultiMatrix((((int)stk + 0) + 0xC));
    return (FUN_0c073a60(a5));
}

int _power(int a4, int a5, int a6, int a7)
{
    int stk[10];
    register int t0;
    register int t1;
    int t4;
    register int t6;
    register int t8;
    register int t11;
    register int t12;
    register int t13;
    register int t14;
    register int t15;
    register int t16;
    register int t17;
    register int t22;
    register int t39;
    register int t41;
    register int t10;
    register int t27;

    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 12)) = a6;
    t0 = 0x1;
    t1 = (-a4);
    if ((int)a4 >= 0) {
        t0 = 0x0;
        t1 = a4;
    }
    t15 = (int)((int)t1 / (int)0x1B);
    t4 = (int)((int)t1 % (int)0x1B);
    if ((t0 == 1) && (t4 != 0)) {
        *(unsigned short *)(((int)stk + 0)) = (*(short *)0xC1186F0);
        t6 = ((int (*)(int, int, int, int))(memcpy))((((int)stk + 0) + 0x1C), 0xC1186A0, 0x8, a7);
        *(unsigned char *)(((((int)stk + 0) + 0x1C) + 0x8)) = 0x0;
        t11 = 0x0;
        t10 = (0x1B - t4);
    } else {
        memset((((int)stk + 0) + 0x1C), 0x0, 0x9);
        t8 = *(signed char *)(((((int)stk + 0) + 0x1C) + 0x0));
        (((struct o1C_uchar *)(((int)stk + 0)))->v) = (t8 | 0x80);
        *(unsigned short *)(((int)stk + 0)) = 0x0;
        t11 = (t8 | 0x80);
        t10 = t4;
    }
    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 0) + 0x1C);
    t12 = (((int)stk + 0) + 0x1C);
    t13 = 0xC118660;
    t14 = 0x0;
    t16 = ((((t0 << 2) << 2) << 2) + 0xC118660);
    t17 = (((t0 << 2) << 2) + 0xC1186E0);
    for (;;) {
        if ((t15 & 0x1) != 0) {
            t11 = (_mult64(((int)stk + 0), (((int)stk + 0) + 0x1C), (*(short *)((t17 + 0x0))), t16));
            t13 = 0xB4;
            t11 = (FUN_0c096138((((int)stk + 0) + 0x1C), 0x40));
            if (t11 != 0) {
                t13 = (*(short *)(((int)stk + 0)));
                t13 = (t13 + 0x1);
                *(unsigned short *)(((int)stk + 0)) = t13;
                t22 = *(int *)(((int)stk + 4));
                t11 = (*(signed char *)((t22 + 0x0)));
                t11 = (t11 | 0x80);
                *(unsigned char *)((t22 + 0x0)) = t11;
            }
        } else {
            t27 = t12;
        }
        t12 = t27;
        t13 = 0x8;
        t14 = (t14 + 0x1);
        t15 = (t15 >> 1);
        t17 = (t17 + 0x2);
        t16 = (t16 + 0x8);
        if ((int)t14 >= (int)t13) {
            break;
        }
    }
    if (t10 != 0) {
        _pow10(t10, (*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 12))));
        _mult64(((int)stk + 0), (((int)stk + 0) + 0x1C), (*(short *)(((*(int *)(((int)stk + 8))) + 0x0))), (*(int *)(((int)stk + 12))));
        t39 = FUN_0c096138((((int)stk + 0) + 0x1C), 0x40);
        if (t39 == 1) {
            *(unsigned short *)(((int)stk + 0)) = ((*(short *)(((int)stk + 0))) + 0x1);
            t41 = *(int *)(((int)stk + 4));
            *(unsigned char *)((t41 + 0x0)) = ((*(signed char *)((t41 + 0x0))) | 0x80);
        }
    }
    *(unsigned short *)(((*(int *)(((int)stk + 8))) + 0x0)) = (*(short *)(((int)stk + 0)));
    return (((int (*)(int, int, int))(memcpy))((*(int *)(((int)stk + 12))), (((int)stk + 0) + 0x1C), 0x8));
}

int FUN_0c03d416(void)
{
    register int t0;
    register int t1;

    t0 = FUN_0c034320(0x0, 0x14);
    if (t0 == 2) {
        *(unsigned int *)0xC2A4FC4 = 0x0;
    }
    t0 = FUN_0c033e38(0x0, 0x4, 0x0);
    if (t0 == 1) {
        *(unsigned int *)0xC2A4FC4 = 0x0;
    }
    FUN_0c03457c();
    FUN_0c03346e(0xC0B7E34, 0xC2A5808, ((*(int *)0xC2A585C) + 0x8), 0x18);
    t0 = *(int *)0xC2A585C;
    t1 = 0x4;
    if ((*(int *)((0xC2A4684 + ((*(int *)0xC2A4680) << 2)))) == 3) {
        t1 = 0x0;
    }
    FUN_0c034804(t1, (float)(-t0), 416.0f);
    FUN_0c034928(0x2213, 0xC0B5904, 0x4, (*(int *)(((((*(int *)0xC2A4680) << 2) + 0xC2A4684) + 0x0))), 0x0);
    return FUN_0c0343b8(0x0, 0x14);
}

int ADXB_ExecOneWav4(int a4, int a5, int a6, int a7)
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
    register int t11;

    t0 = (((struct o50_int *)(a4))->v);
    t1 = a7;
    if ((*(int *)((a4 + 0x4))) == 1) {
        t2 = ADXPD_GetStat((*(int *)((a4 + 0x8))));
        if (t2 == 0) {
            t2 = ((int (*)(int, int, int, int))(((((struct o88_int *)(a4))->v))))(((((struct o8C_int *)(a4))->v)), ((a4 + 0x50) + 0x20), ((a4 + 0x50) + 0x24), ((a4 + 0x50) + 0x28));
            t2 = *(int *)(((a4 + 0x50) + 0x18));
            t3 = *(int *)(((a4 + 0x50) + 0x20));
            t4 = *(int *)(((a4 + 0x50) + 0x4));
            t5 = (t2 - t3);
            if ((int)(t2 - t3) > (int)(*(int *)(((a4 + 0x50) + 0x24)))) {
                t5 = (*(int *)(((a4 + 0x50) + 0x24)));
            }
            t2 = *(int *)(((a4 + 0x50) + 0x14));
            t3 = t5;
            if ((int)t5 > (int)t4) {
                t3 = (*(int *)(((a4 + 0x50) + 0x4)));
            }
            t4 = *(int *)(((a4 + 0x50) + 0x20));
            if ((*(signed char *)((a4 + 0xE))) == 2) {
                t5 = *(int *)(((a4 + 0x50) + 0x1C));
                t6 = *(int *)(((a4 + 0x50) + 0x20));
                if ((int)t3 > 0) {
                    t7 = 0x0;
                    t8 = 0x0;
                    t9 = 0x0;
                    for (;;) {
                        *(unsigned short *)(((((t4 << 1) + t2) + t8) + 0x0)) = (((unsigned char)(*(signed char *)((((t7 + 0x2) + t0) + 0x0))) << 8) | (unsigned char)(*(signed char *)((t7 + t0))));
                        t10 = *(signed char *)((((t7 + 0x3) + t0) + 0x0));
                        t11 = *(signed char *)((((t7 + 0x1) + t0) + 0x0));
                        t9 = (t9 + 0x1);
                        t7 = (t7 + 0x4);
                        *(unsigned short *)(((((t5 + t6) << 1) + t2) + t8)) = (((unsigned char)t10 << 8) | (unsigned char)t11);
                        t8 = (t8 + 0x2);
                        if ((int)t9 >= (int)t3) {
                            break;
                        }
                    }
                }
            } else {
                if ((int)t3 > 0) {
                    t5 = 0x0;
                    t6 = (0x0 + ((t4 << 1) + t2));
                    t2 = 0x0;
                    for (;;) {
                        t4 = *(signed char *)((((t5 + 0x1) + t0) + 0x0));
                        t2 = (t2 + 0x1);
                        t7 = *(signed char *)((t0 + t5));
                        t5 = (t5 + 0x2);
                        *(unsigned short *)((t6 + 0x0)) = (((unsigned char)t4 << 8) | (unsigned char)t7);
                        t6 = (t6 + 0x2);
                        if ((int)t2 >= (int)t3) {
                            break;
                        }
                    }
                }
            }
            (((struct oA0_uint *)(a4))->v) = t3;
            (((struct oA4_uint *)(a4))->v) = ((t3 * (*(signed char *)((a4 + 0xE)))) << 1);
            *(unsigned int *)((a4 + 0x4)) = 0x2;
            t0 = 0x0;
        }
        t1 = t0;
    }
    t0 = *(int *)((a4 + 0x4));
    t2 = t0;
    if (t0 == 2) {
        t0 = ((int (*)(int, int, int, int))(((((struct o90_int *)(a4))->v))))(((((struct o94_int *)(a4))->v)), ((((struct oA4_int *)(a4))->v)), ((((struct oA0_int *)(a4))->v)), t1);
        *(unsigned int *)((a4 + 0x4)) = 0x3;
        t2 = t0;
    }
    return t2;
}

int FUN_0c03f7c2(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    int stk[9];
    register int t66;
    register int t5;
    register int t14;
    register int t20;
    register int t30;
    register int t38;
    register int t27;
    register int t28;
    register int t53;
    int R1000;
    int R1004;

    R1000 = *(int *)((int)stk + 0);
    R1004 = *(int *)((int)stk + 4);

    R1000 = a4;
    R1004 = a7;
    t66 = 0x0;
    if ((unsigned int)(*(int *)0xC2AB7EC) < (unsigned int)0x3C) {
        t5 = FUN_0c03f77c((0xF & ((int)(*(int *)(((*(int *)((((((a5 << 1) + a5) << 2) + (*(int *)0xC2ADA7C)) + 0x8))) + 0x0))) >> 4)));
        if ((int)t5 >= (int)0xF) {
            *(unsigned int *)((a8 + 0x0)) = (int)((float)(*(int *)((a8 + 0x0))) + 6.4000001f);
        }
        if ((R1000) != 0) {
            t14 = *(int *)((a8 + 0x0));
            t27 = 0x0;
            if ((int)(a6 - 10) > 0) {
                t27 = (a6 - 10);
            }
            t28 = (t14 + 0xA);
        } else {
            t20 = *(int *)(((*(int *)((((((a5 << 1) + a5) << 2) + (*(int *)0xC2ADA7C)) + 0x4))) + 0x0));
            t27 = (a6 + 0xA);
            if ((int)(a6 + 0xA) >= (int)(t20 - 1)) {
                t27 = (t20 - 1);
            }
            t28 = (0xFFFFFFF6 - (*(int *)((a8 + 0x0))));
        }
        t30 = FUN_0c03fa18(a5, t27, 0x0, t28);
        t66 = 0x0;
        if (t30 == 0) {
            t38 = *(int *)((((((a5 << 1) + a5) << 2) + (*(int *)0xC2ADA7C)) + 0x0));
            if ((*(int *)((a10 + 0x0))) == 0) {
                *(unsigned int *)((a8 + 0x0)) = (R1004);
            } else {
                *(unsigned int *)((a10 + 0x0)) = ((*(int *)((a10 + 0x0))) - 1);
            }
            if (((*(int *)((a10 + 0x0))) != 0) && (a9 != 0)) {
            } else {
                FUN_0c043b00(t5, a5, ((((a6 << 1) + a6) << 2) + t38));
            }
            if (((R1000) != 2) && (((t53 = *(int *)((a10 + 0x0)), t53 == 0) || (a9 == 1)) && ((int)a6 > (int)0x4))) {
                FUN_0c03f904(a5, ((((a6 << 1) + a6) << 2) + t38));
            }
            t66 = 0x1;
        }
    }
    return t66;
}
