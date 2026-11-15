/* Straight-line functions with calls and guards (batch gen_cc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o1434_int { char p[0x1434]; int v; };
struct o1434_uint { char p[0x1434]; unsigned int v; };
struct o1438_int { char p[0x1438]; int v; };
struct o1438_uint { char p[0x1438]; unsigned int v; };
struct o143C_uint { char p[0x143C]; unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o30_int { char p[0x30]; int v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o3C_int { char p[0x3C]; int v; };
struct o3C_uint { char p[0x3C]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_int { char p[0x40]; int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_int { char p[0x44]; int v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o48_int { char p[0x48]; int v; };
struct o4C_int { char p[0x4C]; int v; };
struct o4C_short { char p[0x4C]; short v; };
struct o50_int { char p[0x50]; int v; };
struct o54_int { char p[0x54]; int v; };
struct o54_short { char p[0x54]; short v; };
struct o5C_int { char p[0x5C]; int v; };
struct o68_int { char p[0x68]; int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_int { char p[0x84]; int v; };
struct o88_int { char p[0x88]; int v; };
struct o8C_int { char p[0x8C]; int v; };
struct oA4_int { char p[0xA4]; int v; };
struct oA8_int { char p[0xA8]; int v; };
struct oAC_int { char p[0xAC]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oF4_uint { char p[0xF4]; unsigned int v; };
struct oFF_uchar { char p[0xFF]; unsigned char v; };
int ADXB_GetNumChan(int);
int ADXB_Reset(int);
int FUN_0c018b1c(int);
int FUN_0c018b22(int, int);
int FUN_0c018c2a(float, float);
int FUN_0c018c8a(float, float);
int FUN_0c01d7b0(void);
int FUN_0c01e3cc(int);
int FUN_0c01e6f0(void);
int FUN_0c01e9e2(int, int);
int FUN_0c026ce6(void);
int FUN_0c0297f4(int, int, float);
int FUN_0c029b12(int, float);
void FUN_0c02f6e8(int);
int FUN_0c02fb94(int, int);
extern int FUN_0c03346e();
int FUN_0c03b318(int);
int FUN_0c0464ae(void);
int FUN_0c047a4a(int);
int FUN_0c048262(int);
int FUN_0c050600(void);
int FUN_0c05072c(void);
int FUN_0c058f64(int, int, int, int);
int FUN_0c059074(int);
int FUN_0c05f470(int, int, float, float);
int FUN_0c06027a(int, int);
int FUN_0c068c14(int, int, float);
extern int FUN_0c069e54();
int FUN_0c06a00c(void);
int FUN_0c06a754(int, int, int);
int FUN_0c06e700(int, int, float);
int FUN_0c070730(float);
int FUN_0c072230(int, int);
int FUN_0c072290(int, int);
int FUN_0c073360(void);
int FUN_0c073a30(float, float, float);
float FUN_0c073b40(int, int);
int FUN_0c073c40(int, int, float);
float FUN_0c073c60(int);
int FUN_0c073e10(int);
int FUN_0c076230(float, float, float);
int FUN_0c077660(int, int, int, int, int, int);
int FUN_0c07ada0(int);
int FUN_0c07ff00(void);
int FUN_0c08f204(int, int, int);
int FUN_0c08fd60(int, int);
int FUN_0c16a8d2(int);
int FUN_0c16a9ac(int);
int FUN_0c16a9b2(int);
int KillColliObj(int, int, int, int);
int SJ_SplitChunk(int, int, int);
int Start_TimeUp(void);
int VQAllocEntry(void);
int VQEnQueueTop(int, int);
int VQalloc(int, int, int);
int Voice_ShutUp(int);
int buCalcBackupFileSize(int, int, int);
int buGetLastError(int);
int buIsFormat(int);
int buIsReady(int);
int buMakeBackupFileImage(int, int);
int buStat(int);
int camSetTarget(int, int);
int gdc_FadeManStreamSong(void);
int kmiFBgetfreememEx(int, int);
int kmiReadRegister(int);
int kmytex_FBDeQueueEntry(int, int, int);
int kmytex_FBEnQueueTop(int, int, int);
int kmytex_FBFreeEntry(int);
int kmytex_GetSmallVQprofile(int, int);
int kmytex_VQFreeEntry(int);
int memcpy(int, int, int);
int mwRnaGetPlaySw(int);
extern int mwRnaGetTransSw();
int mwRnaSetPlaySw(void);
int mwRnaSetTransSw(void);
int mwlRnaAddFlshPos(int);
int mwlRnaAddRdPos(int);
int mwlRnaAddWrPos(int);
int mwlRnaClearBuf(void);
int mwlRnaInsrtSlntDat(int);
int mwlRnaIsCopyEnd(int);
int mwlRnaStartTrans(int);
int nlAddVector(int, int);
int nlCloseEvent(int);
int nlFree(int);
int nlGetAverageVector(int, int, int, float, float);
int nlGetMatrix33on44(int);
float nlLength(int, int);
int nlMalloc(int);
int nlMultiMatrix(int);
int nlOuterProduct(int, int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAZ(int);
int nlRotateAxe(int, int);
int nlScale(float, float, float);
int nlSubVector3op(int, int, int);
int nlUnitMatrix(void);
int pdGetPeripheral(int);
int set_event(int, int);
int syRtcGetDate(int);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
float FUN_0c02ff06(float f4);
int kmiVQalloc(int a4);
void FUN_0c02fcdc(int a4, int a5, int a6, int a7);
int FUN_0c05b7aa(int a4, int a5, int a6, float f4);
int FUN_0c0638e6(int a4);
int FBfree(int a4, int a5);
int FUN_0c066068(int a4, int a5, int a6, int a7, float f4, float f5);
int adxsjd_decexec_end(int a4, int a5, int a6, int a7);
int FUN_0c06a4e0(int a4, int a5, int a6);
int FUN_0c038e3a(int a4, int a5, int a6, float f4, float f5, float f6, float f7, float f8);
int FUN_0c08fe18(int a4);
int kmGetCurrentScanline(int a4);
int FUN_0c01dc1e(void);
int mwlRnaExecSvrHndl(int a4, int a5, int a6, int a7);
int FUN_0c01bca2(void);
int FUN_0c06e0dc(int a4);
int FUN_0c06deb8(int a4);
int kmiExecuteDMAChain(void);
int FUN_0c032436(int a4, int a5, int a6, int a7, int a8);
int FUN_0c03542a(int a4, int a5, float f4, float f5, float f6, float f7, float f8);
int FUN_0c05a026(int a4, int a5, int a6, int a7);
int FUN_0c06aae4(int a4, int a5, int a6);
int FUN_0c06e49c(void);
int FUN_0c0461b0(int a4);
int vmsfs_fgetinfo(int a4, int a5, int a6);

float FUN_0c02ff06(float f4)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    t0 = 0xC02FF68;
    t1 = 0xC1296B0;
    t2 = 0xC1296B0;
    t3 = 0xC1296B0;
    u0 = f4;
    for (;;) {
        if ((unsigned int)t3 >= (unsigned int)0xC129AC4) {
            break;
        }
        t5 = (*(int *)((t3 + 0x4)));
        t6 = (*(int *)((t3 + 0x0)));
        u2 = 0.0f;
        t7 = 0x0;
        for (;;) {
            t4 = (*(int *)((t1 + 0x8)));
            if ((int)t7 >= (int)t4) {
                break;
            }
            t4 = 0xC073C60;
            t8 = t6;
            t6 = (t6 + 0xC);
            u1 = (FUN_0c073c60(t8));
            t0 = 0x4;
            u3 = 0.0f;
            u4 = (*(float *)((t5 + t0)));
            u0 = u1;
            if (u4 > u3) {
                u4 = (*(float *)((t5 + t0)));
                u0 = (u0 + u4);
            }
            t5 = (t5 + 0x8);
            if (u0 > u2) {
                u2 = u0;
            }
            t7 = (t7 + 0x1);
        }
        u3 = u2;
        u3 = (u3 * u2);
        u4 = 2.5f;
        t0 = 0x1C;
        *(float *)((t2 + t0)) = u2;
        t0 = 0x20;
        t3 = (t3 + 0x24);
        u4 = (u4 / u3);
        t1 = (t1 + 0x24);
        *(float *)((t2 + t0)) = u4;
        t2 = (t2 + 0x24);
    }
    t0 = t4;
    t1 = 0x0;
    for (;;) {
        if ((unsigned int)t1 >= (unsigned int)0xFE0) {
            break;
        }
        t0 = (*(int *)0xC1296AC);
        t0 = (t0 + t1);
        t1 = (t1 + 0x20);
        *(unsigned int *)((t0 + 0x1C)) = 0x0;
    }
    (((struct o0_float *)0xC279060)->v) = 1800.0f;
    (((struct o4_float *)0xC279060)->v) = 2000.0f;
    t0 = *(int *)0xC1EC71C;
    if ((t0 != 0) && (t0 != 1)) {
        if (t0 != 2) {
        } else {
            t0 = *(int *)0xC2ADEB8;
            if (t0 != 3) {
                if (t0 != 13) {
                    (((struct o8_uint *)0xC279060)->v) = 0x0;
                    (((struct oC_uint *)0xC279060)->v) = 0x1;
                } else {
                    (((struct o8_uint *)0xC279060)->v) = 0x14;
                    (((struct oC_uint *)0xC279060)->v) = 0x28;
                    (((struct o0_float *)0xC279060)->v) = 3000.0f;
                    (((struct o4_float *)0xC279060)->v) = 3200.0f;
                }
            } else {
                (((struct o8_uint *)0xC279060)->v) = 0x1;
                (((struct oC_uint *)0xC279060)->v) = 0x14;
                (((struct o0_float *)0xC279060)->v) = 10800.0f;
                (((struct o4_float *)0xC279060)->v) = 10000.0f;
            }
        }
    } else {
        (((struct o8_uint *)0xC279060)->v) = 0x0;
        (((struct oC_uint *)0xC279060)->v) = 0x80;
    }
    return u1;
}

int kmiVQalloc(int a4)
{
    int stk[7];
    register int t23;
    register int t3;
    register int t5;
    register int t7;
    register int t9;
    register int t30;
    register int t57;
    register int t31;
    register int t35;
    register int t40;
    register int t22;
    register int t2;
    register int t4;
    register int t6;
    register int t8;
    int t12;
    register int t67;
    register int t45;

    kmytex_GetSmallVQprofile((((int)stk + 0) + 0x8), a4);
    t3 = *(int *)0xC173E14;
    t23 = 0x0;
    if (t3 != 0) {
        t5 = t4;
        t7 = t6;
        t9 = 0x0;
        for (;;) {
            if ((((unsigned short)(*(short *)((t3 + 0x0))) & 0xF000) == (*(int *)(((int)stk + 8)))) && (t12 = *(int *)(((int)stk + 24)), t7 = t12, t5 = 0x0, (unsigned int)0x0 < (unsigned int)t7)) {
                for (;;) {
                    t2 = t5;
                    t2 = (t2 << 2);
                    t2 = (t2 + (t3 + 0xC));
                    if ((*(int *)((t2 + 0x0))) == 0) {
                        t8 = t5;
                        t9 = t3;
                        t3 = 0x0;
                        t5 = t7;
                    }
                    t5 = (t5 + 0x1);
                    if ((unsigned int)t5 >= (unsigned int)t7) {
                        break;
                    }
                }
            }
            if (t9 == 0) {
                t3 = (*(int *)((t3 + 0x4)));
            }
            if (t3 == 0) {
                break;
            }
        }
        t22 = t8;
        t23 = t9;
    }
    if (t23 == 0) {
        t30 = VQAllocEntry();
        t57 = 0x3;
        if (t30 != 0) {
            t31 = (t30 + 0xC);
            for (;;) {
                *(unsigned int *)((t31 + 0x0)) = 0x0;
                t31 = (t31 + 0x4);
                if ((unsigned int)t31 >= (unsigned int)(t30 + 0x4C)) {
                    break;
                }
            }
            VQEnQueueTop(0xC173E14, t30);
            *(unsigned short *)((t30 + 0x0)) = ((*(short *)((t30 + 0x0))) | (*(int *)(((int)stk + 8))));
            t35 = *(int *)(((int)stk + 20));
            if (((*(int *)0xC3008D4) & 4) != 0) {
                kmiFBgetfreememEx(((int)stk + 0), (((int)stk + 0) + 0x4));
                t40 = 0x0;
                if ((int)(*(int *)(((int)stk + 0))) < (int)(*(int *)(((int)stk + 4)))) {
                    t40 = 0x1;
                }
                t45 = (VQalloc(t40, t35, t30));
            } else {
                t45 = (VQalloc(0x1, t35, t30));
            }
            if (t45 != 0) {
                kmytex_VQFreeEntry(t30);
                t57 = 0x3;
            } else {
                *(unsigned int *)((a4 + 0x1C)) = (((0x0 * ((unsigned int)(*(int *)(((int)stk + 12))) >> 2)) << 2) + (*(int *)((t30 + 0x8))));
                *(unsigned int *)(((0x0 + (t30 + 0xC)) + 0x0)) = a4;
                *(unsigned short *)((t30 + 0x0)) = ((*(short *)((t30 + 0x0))) | 0x2);
                t57 = 0x0;
            }
        }
        t67 = t57;
    } else {
        *(unsigned int *)((a4 + 0x1C)) = (((t22 * ((unsigned int)(*(int *)(((int)stk + 12))) >> 2)) << 2) + (*(int *)((t23 + 0x8))));
        *(unsigned int *)((((t22 << 2) + (t23 + 0xC)) + 0x0)) = a4;
        *(unsigned short *)((t23 + 0x0)) = ((*(short *)((t23 + 0x0))) | 0x2);
        t67 = 0x0;
    }
    return t67;
}

void FUN_0c02fcdc(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register float u0;

    t1 = a4;
    t2 = 0x0;
    t3 = 0x0;
    for (;;) {
        if ((int)t3 >= (int)(*(short *)(((*(int *)((a4 + 0x14))) + 0x10)))) {
            break;
        }
        t4 = (t3 * 0x70);
        t4 = (t4 + (*(int *)((a4 + 0x18))));
        t5 = ((((struct o68_int *)(t4))->v));
        t6 = t4;
        if ((int)t5 >= 0) {
            t5 = 0xC279064;
            t4 = (t3 * 0x70);
            t4 = (t4 + (*(int *)((a4 + 0x18))));
            if (((((struct o18_float *)(t4))->v)) > (*(float *)((t5 + 0x0)))) {
                t1 = (*(int *)((a4 + 0x18)));
                t7 = (t3 * 0x70);
                t1 = (t1 + t7);
                KillColliObj(t1, a5, a6, a7);
                t4 = (*(int *)((a4 + 0x18)));
                t7 = (t7 + t4);
                (((struct o68_uint *)(t7))->v) = 0xFFFFFFFF;
                t7 = t4;
            } else {
                t1 = (t3 * 0x70);
                t1 = (t1 + (*(int *)((a4 + 0x18))));
                FUN_0c02f6e8(t1);
                t2 = (t2 + 0x1);
            }
            t6 = t7;
        } else {
            t7 = t5;
            t8 = t1;
        }
        t5 = t7;
        t3 = (t3 + 0x1);
        t4 = t6;
        t1 = t8;
    }
    u0 = nlLength((*(int *)((a4 + 0x14))), 0xC175930);
    if ((*(float *)0xC279060) > u0) {
        t1 = *(int *)((a4 + 0x14));
        t3 = *(short *)((t1 + 0x10));
        if ((int)t2 < (int)t3) {
            t4 = t3;
            t3 = t1;
            t1 = 0x0;
            t5 = 0x0;
            t6 = (*(int *)(((*(int *)((a4 + 0x14))) + 0x14)));
            for (;;) {
                if (t6 == 0) {
                    break;
                }
                t4 = (*(int *)((a4 + 0x18)));
                t3 = 0x68;
                t1 = (t5 * 0x70);
                t4 = (t4 + t1);
                t4 = (*(int *)((t3 + t4)));
                if (t4 == -1) {
                    t4 = (FUN_0c02fb94(t6, ((*(int *)((a4 + 0x18))) + t1)));
                    t4 = (*(int *)0xC1EC740);
                    if ((t4 == 1) && (t0 = *(int *)0xC2AC2F4, t0 == 0)) {
                        return;
                    }
                    t6 = (*(int *)((t6 + 0x14)));
                    t5 = (t5 + 0x1);
                    continue;
                }
                t6 = (*(int *)((t6 + 0x14)));
                t5 = (t5 + 0x1);
            }
        }
        return;
    }
    if (t2 == 0) {
        *(unsigned int *)(((*(int *)((a4 + 0x14))) + 0x1C)) = 0x0;
        nlCloseEvent(a4);
    return;
    }
}



int FBfree(int a4, int a5)
{
    int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    *(unsigned short *)((a5 + 0x0)) = ((*(short *)((a5 + 0x0))) & 0xFFFB);
    kmytex_FBDeQueueEntry((((((short)a4 << 2) + (short)a4) << 2) + 0xC173DEC), ((((((short)a4 << 2) + (short)a4) << 2) + 0xC173DEC) + 0x4), a5);
    *(unsigned int *)(((((((short)a4 << 2) + (short)a4) << 2) + 0xC173DEC) + 0x10)) = ((*(int *)(((((((short)a4 << 2) + (short)a4) << 2) + 0xC173DEC) + 0x10))) + (*(int *)((a5 + 0x10))));
    t2 = *(int *)(((((((short)a4 << 2) + (short)a4) << 2) + 0xC173DEC) + 0x8));
    t3 = 0x0;
    if (t2 != 0) {
        t4 = t2;
        t2 = 0x0;
        for (;;) {
            t5 = *(int *)((a5 + 0xC));
            t6 = *(int *)((t4 + 0xC));
            if ((t6 != ((*(int *)((a5 + 0x10))) + t5)) && (t0 = *(int *)((t4 + 0x10)), t5 != (t0 + t6))) {
                t4 = (*(int *)((t4 + 0x8)));
            } else {
                t2 = t4;
                t4 = 0x0;
            }
            if (t4 == 0) {
                break;
            }
        }
        t3 = t2;
    }
    t0 = a5;
    if (t3 != 0) {
        t2 = t3;
        t3 = a5;
        for (;;) {
            if ((*(int *)((t2 + 0xC))) == ((*(int *)((t3 + 0xC))) + (*(int *)((t3 + 0x10))))) {
                *(unsigned int *)((t2 + 0xC)) = (*(int *)((t3 + 0xC)));
                *(unsigned int *)((t2 + 0x10)) = ((*(int *)((t2 + 0x10))) + (*(int *)((t3 + 0x10))));
            } else {
                *(unsigned int *)((t2 + 0x10)) = ((*(int *)((t2 + 0x10))) + (*(int *)((t3 + 0x10))));
            }
            kmytex_FBFreeEntry(t3);
            kmytex_FBDeQueueEntry(((((((short)a4 << 2) + (short)a4) << 2) + 0xC173DEC) + 0x8), ((((((short)a4 << 2) + (short)a4) << 2) + 0xC173DEC) + 0xC), t2);
            t4 = *(int *)(((((((short)a4 << 2) + (short)a4) << 2) + 0xC173DEC) + 0x8));
            t3 = t2;
            t2 = 0x0;
            if (t4 != 0) {
                t5 = t4;
                for (;;) {
                    t4 = *(int *)((t3 + 0xC));
                    t6 = *(int *)((t5 + 0xC));
                    if ((t6 != ((*(int *)((t3 + 0x10))) + t4)) && (t1 = *(int *)((t5 + 0x10)), t4 != (t1 + t6))) {
                        t5 = (*(int *)((t5 + 0x8)));
                    } else {
                        t2 = t5;
                        t5 = 0x0;
                    }
                    if (t5 == 0) {
                        break;
                    }
                }
            }
            if (t2 == 0) {
                break;
            }
        }
        t0 = t3;
    }
    kmytex_FBEnQueueTop(((((((short)a4 << 2) + (short)a4) << 2) + 0xC173DEC) + 0x8), ((((((short)a4 << 2) + (short)a4) << 2) + 0xC173DEC) + 0xC), t0);
    return 0x0;
}

int FUN_0c066068(int a4, int a5, int a6, int a7, float f4, float f5)
{

    register int R1;
    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    v0_1 = a4;
    v0_2 = a5;
    v0_3 = a6;
    w0_0 = f4;
    w0_1 = f5;
    v0_0 = (0xC05F470);
    v0_0 = (v0_2);
    w0_2 = (0.0f);
    if (((*(int *)((v0_1 + 0x4))) != 1)) goto L_C0660B0;
    FUN_0c05f470(v0_0, (*(int *)(((((((struct oA4_int *)(v0_0))->v)) << 2) + 0xC10FC9C))), w0_2, w0_2);
    if ((((((struct o84_int *)(v0_0))->v)) != 0)) goto L_C066184;
    if ((((((struct oA4_int *)(v0_0))->v)) != 3)) goto L_C06616C;
    FUN_0c06027a(v0_1, v0_2);
    FUN_0c06a00c();
    L_C06616C:;
    if ((((((struct o84_int *)(v0_0))->v)) != 0)) goto L_C066184;
    FUN_0c06a754((*(int *)((v0_0 + 0x10))), (*(int *)((((((struct oAC_int *)(v0_0))->v)) + 0x4))), ((((struct oA4_int *)(v0_0))->v)));
    L_C066184:;
    if ((((((struct o84_int *)(v0_0))->v)) != 2)) goto L_C066196;
    FUN_0c068c14(0xC10FD0C, v0_0, 1.0f);
    L_C066196:;
    (((struct o80_uint *)(v0_0))->v) = (((((struct o80_int *)(v0_0))->v)) + 0x1);
    v0_0 = (0x80);
    L_C06619E:;
    return v0_0;
    L_C0660B0:;
    if ((((int)((int)((((struct oA8_int *)(v0_0))->v)) % (int)0x5)) != 0)) goto L_C066144;
    if (((*(int *)((v0_0 + 0x10))) != 65)) goto L_C0660EE;
    if (((*(int *)((v0_1 + 0x4))) != 2)) goto L_C0660EE;
    (((struct o80_uint *)(v0_0))->v) = 0x12;
    (((struct oFF_uchar *)(v0_0))->v) = ((*(signed char *)(((0xFF + v0_0) + 0x0))) | 0x1);
    (((struct oF4_uint *)(v0_0))->v) = 0x0;
    v0_1 = *(signed char *)(((0xFF + v0_0) + 0x0));
    (((struct oFF_uchar *)(v0_0))->v) = (v0_1 & 0xFD);
    v0_0 = ((v0_1 & 0xFD));
    goto L_C06619E;
    L_C0660EE:;
    FUN_0c05f470(v0_0, (*(int *)(((((((struct o88_int *)(v0_0))->v)) << 2) + (*(int *)((0xC13B344 + (((*(int *)((v0_0 + 0x10))) - 62) << 2))))))), w0_2, w0_2);
    (((struct oFF_uchar *)(v0_0))->v) = ((*(signed char *)(((0xFF + v0_0) + 0x0))) & 0xFD);
    goto L_C06616C;
    L_C066144:;
    v0_1 = ((int (*)(int, int, int, int, float, float))((*(int *)((((*(int *)0xC1EC740) << 2) + 0xC110374)))))(v0_1, v0_2, v0_3, a7, w0_0, w0_1);
    FUN_0c05f470(v0_0, (*(int *)(((((int)((int)v0_1 % (int)0x3)) << 2) + 0xC10FC9C))), w0_2, w0_2);
    goto L_C06616C;
}

int adxsjd_decexec_end(int a4, int a5, int a6, int a7)
{
    int stk[14];
    register int t0;
    register int t1;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t12;
    register int t15;
    register int t18;
    register int t20;
    register int t29;
    register int t36;
    register int t41;
    register int t53;
    register int t17;
    register int t48;
    register int t49;
    int t50;

    t0 = *(int *)((a4 + 0x8));
    t1 = *(int *)((a4 + 0x4));
    *(unsigned int *)(((int)stk + 0)) = (FUN_0c16a8d2(t1));
    t3 = FUN_0c16a9ac(t1);
    t4 = FUN_0c16a9b2(t1);
    t5 = *(int *)(((int)stk + 0));
    t6 = *(int *)((a4 + 0x34));
    t7 = (t5 - t6);
    if ((int)t4 < (int)(t5 - t6)) {
        t7 = t4;
    }
    SJ_SplitChunk((a4 + 0x14), t3, (((int)stk + 0) + 0x10));
    t12 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x20)))))(t0, 0x0, (((int)stk + 0) + 0x10), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    t15 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x1C)))))(t0, 0x1, (((int)stk + 0) + 0x8), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    *(unsigned int *)(((int)stk + 4)) = (t7 << 1);
    t18 = 0x0;
    for (;;) {
        t20 = ADXB_GetNumChan((*(int *)((a4 + 0x4))));
        if ((int)t18 >= (int)t20) {
            break;
        }
        SJ_SplitChunk((((t18 << 2) << 1) + (a4 + 0x1C)), (*(int *)(((int)stk + 4))), (((int)stk + 0) + 0x10));
        if (((((struct o50_int *)(a4))->v)) != 0) {
            t29 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))(((((struct o50_int *)(a4))->v))))(((((struct o54_int *)(a4))->v)), t18, (*(int *)(((int)stk + 16))), (*(int *)(((int)stk + 20))), *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
        }
        t17 = t18;
        t17 = (t17 << 2);
        *(unsigned int *)(((int)stk + 0)) = t17;
        t17 = (t17 + (a4 + 0xC));
        t17 = (*(int *)((t17 + 0x0)));
        t36 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t17 + 0x0))) + 0x20)))))(t17, 0x1, (((int)stk + 0) + 0x10), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
        t17 = a4;
        t17 = (t17 + 0xC);
        t17 = (t17 + (*(int *)(((int)stk + 0))));
        t17 = (*(int *)((t17 + 0x0)));
        t41 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t17 + 0x0))) + 0x1C)))))(t17, 0x0, (((int)stk + 0) + 0x8), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
        t18 = (t18 + 0x1);
    }
    *(unsigned int *)((a4 + 0x2C)) = ((*(int *)((a4 + 0x2C))) + t7);
    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + t3);
    *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + t7);
    (((struct o40_uint *)(a4))->v) = (((((struct o40_int *)(a4))->v)) + t7);
    (((struct o44_uint *)(a4))->v) = (((((struct o44_int *)(a4))->v)) + t3);
    if (((int)(*(int *)((a4 + 0x3C))) >= 0) && ((t48 = *(int *)((a4 + 0x3C)), t49 = (((struct o40_int *)(a4))->v), (int)t49 >= (int)t48) && (t50 = (((struct o48_int *)(a4))->v), t50 != 0))) {
        t53 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))(((((struct o48_int *)(a4))->v))))(((((struct o4C_int *)(a4))->v)), a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    }
    return (ADXB_Reset(t1));
}

int FUN_0c06a4e0(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = ((int (*)(int, int, int))(FUN_0c069e54))(a4, a5, a6);
    t1 = *(int *)((((a4 - 35) << 2) + 0xC10E5D0));
    switch (a6) {
    case 0:
        (((struct o0_uint *)0xC13B7C8)->v) = (*(int *)(((*(int *)((0xC13B700 + (t1 << 2)))) + (((int)((int)(((int (*)(int))(FUN_0c069e54))(a4)) % (int)(*(int *)(((t1 << 2) + 0xC110E20))))) << 2))));
        (((struct oC_uint *)0xC13B7C8)->v) = 0xFFFFFFFF;
        break;
    case 1:
        (((struct o0_uint *)0xC13B7C8)->v) = (*(int *)(((*(int *)((0xC13B710 + (t1 << 2)))) + (((int)((int)(((int (*)(int))(FUN_0c069e54))(a4)) % (int)(*(int *)(((t1 << 2) + 0xC110E84))))) << 2))));
        (((struct oC_uint *)0xC13B7C8)->v) = 0xFFFFFFFF;
        break;
    case 2:
        (((struct o0_uint *)0xC13B7C8)->v) = (*(int *)(((*(int *)(((t1 << 2) + 0xC13B720))) + (((int)((int)(((int (*)(int))(FUN_0c069e54))(a4)) % (int)(*(int *)(((t1 << 2) + 0xC110EE4))))) << 2))));
        (((struct oC_uint *)0xC13B7C8)->v) = (*(int *)(((*(int *)(((t1 << 2) + 0xC13B730))) + (((int)((int)(((int (*)(void))(FUN_0c069e54))()) % (int)(*(int *)(((t1 << 2) + 0xC110F94))))) << 2))));
        break;
    }
    t2 = FUN_0c059074(0x2);
    if (t2 == 0) {
        t3 = ((int (*)(int))(Voice_ShutUp))(0x2);
        t3 = FUN_0c058f64(0xC13B7C8, 0x2, (*(int *)(((t1 << 2) + 0xC11039C))), 0x0);
        if ((int)a5 > (int)0x1) {
            (((struct o24_uint *)0xC13B7C8)->v) = (*(int *)((((((int)((int)t0 % (int)(*(int *)(((t1 << 2) + (*(int *)((((*(int *)(((a6 << 2) + 0xC13B7BC))) + ((a5 - 2) << 2)) + 0x0)))))))) << 2) + (*(int *)(((t1 << 2) + (*(int *)((((*(int *)(((a6 << 2) + 0xC13B7B0))) + ((a5 - 2) << 2)) + 0x0))))))) + 0x0)));
            t0 = ((int (*)(int, int))(Voice_ShutUp))(0x3, ((a5 - 2) << 2));
            return FUN_0c058f64(0xC13B7EC, 0x3, (*(int *)(((t1 << 2) + 0xC1103AC))), 0x0);
        }
        return t3;
    }
    return t2;
}

int FUN_0c038e3a(int a4, int a5, int a6, float f4, float f5, float f6, float f7, float f8)
{
    int stk[24];
    register int t3;
    register int t4;
    register int t6;

    *(float *)(((int)stk + 0)) = f4;
    *(float *)(((int)stk + 28)) = f6;
    *(float *)(((int)stk + 32)) = f7;
    *(float *)(((int)stk + 36)) = f8;
    *(float *)(((int)stk + 44)) = 0.00300000003f;
    *(float *)(((int)stk + 40)) = 0.00300000003f;
    *(float *)(((int)stk + 52)) = 0.996999979f;
    *(float *)(((int)stk + 48)) = 0.996999979f;
    *(float *)(((int)stk + 60)) = 1.0f;
    *(unsigned int *)(((int)stk + 56)) = a4;
    if (a5 != 0) {
        *(unsigned int *)(((int)stk + 68)) = 0x300A;
    } else {
        *(unsigned int *)(((int)stk + 68)) = 0x200A;
    }
    *(unsigned int *)(((int)stk + 64)) = 0xFFFFFFFF;
    t3 = 0x0;
    t4 = (0x0 + a6);
    for (;;) {
        t6 = *(int *)((((((t3 << 1) + t3) << 2) + a6) + 0x8));
        if (t6 == -1) {
            break;
        }
        *(unsigned int *)(((int)stk + 16)) = (*(int *)((t4 + 0x8)));
        FUN_0c073360();
        *(float *)(((int)stk + 4)) = (*(float *)((t4 + 0x0)));
        *(float *)(((int)stk + 8)) = ((((struct o4_float *)(t4))->v));
        *(float *)(((int)stk + 12)) = 0.0f;
        FUN_0c073a30((*(float *)(((int)stk + 0))), f5, 0.0f);
        nlRotateAZ((-a4));
        nlScale(f7, f8, 0.0f);
        FUN_0c072230((((int)stk + 0) + 0x4), (((int)stk + 0) + 0x4));
        *(float *)(((int)stk + 20)) = (*(float *)(((int)stk + 4)));
        *(float *)(((int)stk + 24)) = (*(float *)(((int)stk + 8)));
        nlPopMatrix(0x1);
        FUN_0c07ada0((((int)stk + 0) + 0x10));
        t4 = (t4 + 0xC);
        t3 = (t3 + 0x1);
    }
    return t6;
}

int FUN_0c08fe18(int a4)
{
    int stk[2];

    register int R1;
    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    int R1000;
    int R1004;
    R1000 = *(int *)((int)stk + 0);
    R1004 = *(int *)((int)stk + 4);
    v0_0 = a4;
    R1004 = v0_0;
    R1000 = (*(int *)(((R1004) + 0x1C)));
    if (((int)(*(int *)(((R1000) + 0x0))) < (int)0x1)) goto L_C08FE36;
    if (((int)(*(int *)(((R1000) + 0x0))) <= (int)0x7FF)) goto L_C08FE3E;
    L_C08FE36:;
    return 0xFFFFFFFF;
    L_C08FE3E:;
    if (((*(int *)(((R1000) + 0x0))) == (*(int *)(((R1000) + 0x8))))) goto L_C08FE52;
    return 0xFFFFFFFF;
    L_C08FE52:;
    if (((int)(*(int *)(((R1000) + 0xC))) < 0)) goto L_C08FE66;
    if (!(((int)(*(int *)(((R1000) + 0xC))) < (int)(*(int *)(((R1000) + 0x0)))))) goto L_C08FE66;
    if (((int)(*(int *)(((R1000) + 0x14))) < 0)) goto L_C08FE84;
    if (((int)(*(int *)(((R1000) + 0x14))) < (int)(*(int *)(((R1000) + 0x0))))) goto L_C08FE8C;
    goto L_C08FE84;
    L_C08FE66:;
    return 0xFFFFFFFF;
    L_C08FE84:;
    return 0xFFFFFFFF;
    L_C08FE8C:;
    if (((int)(*(int *)(((R1000) + 0x34))) < 0)) goto L_C08FEA0;
    if (!(((int)(*(int *)(((R1000) + 0x34))) <= (int)(*(int *)(((R1000) + 0x0)))))) goto L_C08FEA0;
    if (((int)(*(int *)(((R1000) + 0x38))) < 0)) goto L_C08FEBC;
    if (((int)(*(int *)(((R1000) + 0x38))) <= (int)(*(int *)(((R1000) + 0x0))))) goto L_C08FEC4;
    goto L_C08FEBC;
    L_C08FEA0:;
    return 0xFFFFFFFF;
    L_C08FEBC:;
    return 0xFFFFFFFF;
    L_C08FEC4:;
    if (((*(int *)(((*(int *)0xC2C8D28) + 0x8))) != 0)) goto L_C08FEFC;
    if (((int)(*(short *)(((R1004) + 0x10))) >= (int)(*(int *)(((R1000) + 0x10))))) goto L_C08FEE8;
    return 0xFFFFFFFF;
    L_C08FEE8:;
    if (((int)(*(short *)(((R1004) + 0x12))) >= (int)(*(int *)(((R1000) + 0x18))))) goto L_C08FEFC;
    return 0xFFFFFFFF;
    L_C08FEFC:;
    v0_0 = *(int *)(((R1000) + 0x0));
    v0_1 = (v0_0);
    if ((v0_0 == 0xFF)) goto L_C08FF1C;
    if ((v0_1 == 0x1FF)) goto L_C08FF26;
    if ((v0_1 == 0x3FF)) goto L_C08FF30;
    if ((v0_1 == 0x7FF)) goto L_C08FF3A;
    return 0xFFFFFFFF;
    L_C08FF3A:;
    *(unsigned int *)(((R1004) + 0x4)) = 0x3;
    L_C08FF4C:;
    return 0x0;
    L_C08FF30:;
    *(unsigned int *)(((R1004) + 0x4)) = 0x2;
    goto L_C08FF4C;
    L_C08FF26:;
    *(unsigned int *)(((R1004) + 0x4)) = 0x1;
    goto L_C08FF4C;
    L_C08FF1C:;
    *(unsigned int *)(((R1004) + 0x4)) = 0x0;
    goto L_C08FF4C;
}

int kmGetCurrentScanline(int a4)
{
    register int t4;
    register int t5;
    int t1;
    register int t7;
    register int t8;
    register int t36;
    register int t38;
    register float u39;
    register float u34;
    register float u28;
    register int t40;
    register int t46;
    register int t48;
    register int t21;
    register int t42;

    t4 = a4;
    t5 = 0x0;
    if ((((((struct o0_int *)0xC3008D4)->v)) & 2) != 0) {
        t1 = kmiReadRegister(0x10C);
        t4 = t1;
        t5 = (0x3FF & t1);
    }
    t7 = (((struct o0_int *)0xC300924)->v);
    t8 = (((struct o8_int *)0xC300924)->v);
    t36 = 0x1E0;
    t38 = (t8 + t7);
    u39 = 1.0f;
    if (((((((struct o1C_int *)0xC3008D4)->v)) & 0x1) != 1) || (0x1 == 0)) {
        t36 = 0xF0;
        t38 = (t8 + t7);
        u34 = 1.0f;
        if (((((((struct o1C_int *)0xC3008D4)->v)) & 0x1) != 1) && ((t21 = (((struct o1C_int *)0xC3008D4)->v), (t21 & 44) != 0) && (0x1 != 0))) {
            t36 = 0xF0;
            u28 = 0.5f;
            if ((((((struct o1C_int *)0xC3008D4)->v)) & 32) != 0) {
                t36 = 0x1E0;
                u28 = 1.0f;
            }
            t38 = ((t8 + t7) + (t8 + t7));
            u34 = u28;
        }
        u39 = u34;
    }
    t40 = *(int *)0xC300BC0;
    t46 = t5;
    if (((((((struct o1C_int *)0xC3008D4)->v)) & 0x1) != 1) && ((t42 = (((struct o1C_int *)0xC3008D4)->v), (t42 & 44) != 0) && ((0x1 != 0) && ((t4 & 0x40000) != 0)))) {
        t46 = (t5 + 0x1);
    }
    t48 = ((int)((float)(t46 - t38) * u39) - ((unsigned int)t40 >> 16));
    if ((int)(int)((float)(t46 - t38) * u39) <= (int)t36) {
        t48 = (int)((float)(t46 - t38) * u39);
    }
    *(unsigned int *)((a4 + 0x0)) = t48;
    return 0x0;
}

int FUN_0c01dc1e(void)
{
    register int t0;
    int t1;
    register int t2;
    register int t3;
    int t4;
    int t5;

    if ((((((struct o4_int *)0xC1ECCA8)->v)) == 1) && ((t0 = (((struct o4_int *)0xC1ECCE8)->v), (int)t0 > 0) && (t1 = (((struct o4_int *)0xC11D0B8)->v), t1 != 0))) {
        if ((*(int *)0xC1EC720) != 2) {
            (((struct o4_uint *)0xC1ECCE8)->v) = (((((struct o4_int *)0xC1ECCE8)->v)) - 1);
        } else {
            (((struct oC_uint *)0xC1ECCE8)->v) = 0x0;
        }
    }
    if (((((struct o38_float *)0xC1ECCA8)->v)) > 1200.0f) {
        (((struct o38_float *)0xC1ECCA8)->v) = (((((struct o38_float *)0xC1ECCA8)->v)) - 1200.0f);
        (((struct o3C_uint *)0xC1ECCA8)->v) = (((((struct o3C_int *)0xC1ECCA8)->v)) + 0x1);
        (((struct o0_uint *)0xC1ECCE8)->v) = 0x1;
    }
    (((struct o8_uint *)0xC1ECCA8)->v) = (((((struct o8_int *)0xC1ECCA8)->v)) + 0x1);
    if ((((((struct o0_int *)0xC11D0B8)->v)) == 0) && ((t2 = (((struct o24_int *)0xC1ECCE8)->v), t2 == 1) && ((t3 = (((struct o0_int *)0xC1ECCA8)->v), t3 == 1) && (t4 = (((struct oC_int *)0xC1ECCA8)->v), (int)t4 > 0)))) {
        (((struct oC_uint *)0xC1ECCA8)->v) = (((((struct oC_int *)0xC1ECCA8)->v)) - 1);
    }
    t0 = *(int *)0xC1EC720;
    if (t0 != 2) {
        if ((((((struct oC_int *)0xC1ECCA8)->v)) == 0) && (t5 = (((struct o24_int *)0xC1ECCE8)->v), t5 != 2)) {
            (((struct o24_uint *)0xC1ECCE8)->v) = 0x2;
            (((struct o2C_uint *)0xC1ECCE8)->v) = 0x96;
            if ((*(int *)0xC2AC2F0) == 1) {
                FUN_0c05072c();
            } else {
                Start_TimeUp();
            }
            (((struct o0_uint *)0xC1ECCA8)->v) = 0x3;
            return FUN_0c03b318(0x3);
        }
        t1 = 0x5C;
        if ((int)((((struct o1C_int *)0xC1ECCE8)->v)) <= (int)0x1) {
            t2 = (((struct o4_int *)0xC1ECCA8)->v);
            t3 = t2;
            if (t2 != 1) {
                if ((int)((((struct o30_int *)0xC1ECCE8)->v)) >= (int)((((struct o20_int *)0xC1ECCE8)->v))) {
                    FUN_0c050600();
                    (((struct o20_uint *)0xC1ECCE8)->v) = 0x258;
                    (((struct o30_uint *)0xC1ECCE8)->v) = 0x0;
                }
                (((struct o30_uint *)0xC1ECCE8)->v) = (((((struct o30_int *)0xC1ECCE8)->v)) + 0x1);
                t3 = 0x60;
            }
            t1 = t3;
        }
        return t1;
    }
    return t0;
}

int mwlRnaExecSvrHndl(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    register int t3;
    register int t4;
    register int t5;
    int t6;
    int t7;
    register int t8;

    t8 = (((struct o8C_int *)(a4))->v);
    if (t8 == 1) {
        return t8;
    }
    t8 = ((int (*)(int, int, int, int))(mwRnaGetTransSw))(a4, a5, a6, a7);
    if ((t8 == 1) && (t0 = *(signed char *)((a4 + 0x5)), (unsigned char)t0 == 1)) {
        t0 = mwlRnaIsCopyEnd(a4);
        if (t0 == 1) {
            mwlRnaAddWrPos(a4);
            *(unsigned char *)((a4 + 0x5)) = 0x0;
            *(unsigned int *)0xC174334 = 0x0;
        } else {
            *(unsigned int *)0xC174334 = ((*(int *)0xC174334) + 0x1);
        }
    }
    if (((unsigned char)(*(signed char *)((a4 + 0x6))) == 1) && (t1 = *(signed char *)((a4 + 0x5)), t1 == 0)) {
        t0 = *(int *)((a4 + 0x10));
        t1 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x24)))))(t0, 0x1, a6, a7);
        if ((int)t1 < (int)0x20) {
            mwRnaSetTransSw();
            *(unsigned char *)((a4 + 0x6)) = 0x0;
        }
    }
    t0 = mwRnaGetPlaySw(a4);
    if (t0 == 1) {
        mwlRnaAddRdPos(a4);
    }
    t0 = ((int (*)(int))(mwRnaGetTransSw))(a4);
    if (t0 == 1) {
        if ((*(signed char *)((a4 + 0x5))) == 0) {
            t0 = mwlRnaStartTrans(a4);
            if ((int)t0 <= 0) {
            } else {
                *(unsigned char *)((a4 + 0x5)) = 0x1;
            }
        }
    } else {
        t0 = mwRnaGetPlaySw(a4);
        if ((t0 == 1) && (t2 = *(int *)((a4 + 0x28)), t3 = (((struct o54_int *)(a4))->v), (int)t3 < (int)t2)) {
            if ((unsigned char)(*(signed char *)((a4 + 0x5))) == 1) {
                t0 = mwlRnaIsCopyEnd(a4);
                if (t0 == 1) {
                    mwlRnaAddFlshPos(a4);
                    *(unsigned char *)((a4 + 0x5)) = 0x0;
                }
            }
            if ((*(signed char *)((a4 + 0x5))) == 0) {
                t0 = mwlRnaInsrtSlntDat(a4);
                if ((int)t0 > 0) {
                    *(unsigned char *)((a4 + 0x5)) = 0x1;
                }
            }
        }
    }
    if (((unsigned char)(*(signed char *)((a4 + 0x1))) == 5) && ((t4 = *(int *)((a4 + 0x34)), t5 = (((struct o40_int *)(a4))->v), (int)t4 >= (int)t5) && (t6 = *(signed char *)((a4 + 0x7)), t6 == 0))) {
        mwRnaSetPlaySw();
        (((struct o40_uint *)(a4))->v) = 0x7FFFFFFF;
    }
    t0 = *(signed char *)((a4 + 0x1));
    if (((unsigned char)t0 == 6) && (t7 = *(int *)((a4 + 0x34)), t7 == 0)) {
        mwRnaSetPlaySw();
        return mwlRnaClearBuf();
    }
    return (unsigned char)t0;
}




int kmiExecuteDMAChain(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = (((struct o0_int *)0xC2D58C4)->v);
    t1 = (((struct o4_int *)0xC2D58C4)->v);
    *(unsigned int *)(((((t1 << 8) + 0xC2D56B0) + (((t0 << 2) << 2) << 1)) + 0x18)) = ((*(int *)(((((t1 << 8) + 0xC2D56B0) + (((t0 << 2) << 2) << 1)) + 0x18))) & 0xFFFFFFFC);
    t0 = 0x0;
    for (;;) {
        t1 = *(int *)((0xC2D58BC + (t0 << 2)));
        if (((*(int *)(((((t0 << 8) + 0xC2D56B0) + (((t1 << 2) << 2) << 1)) + 0x18))) & 0x3) == 1) {
            break;
        }
        t0 = (t0 + 0x1);
        if ((unsigned int)t0 >= (unsigned int)0x2) {
            return 0x0;
        }
    }
    *(unsigned int *)(((((t0 << 8) + 0xC2D56B0) + (((t1 << 2) << 2) << 1)) + 0x18)) = (((*(int *)(((((t0 << 8) + 0xC2D56B0) + (((t1 << 2) << 2) << 1)) + 0x18))) & 0xFFFFFFFC) | 0x2);
    (((struct o0_uint *)0xFFA00020)->v) = (*(int *)(((((t0 << 8) + 0xC2D56B0) + (((t1 << 2) << 2) << 1)) + 0x4)));
    (((struct o4_uint *)0xFFA00020)->v) = (((*(int *)(((((t0 << 8) + 0xC2D56B0) + (((t1 << 2) << 2) << 1)) + 0xC))) + 0xF0000000) << 1);
    (((struct o8_uint *)0xFFA00020)->v) = ((unsigned int)((unsigned int)((unsigned int)(*(int *)(((((t0 << 8) + 0xC2D56B0) + (((t1 << 2) << 2) << 1)) + 0x14))) >> 2) >> 2) >> 1);
    t2 = 0x241;
    if (((*(int *)(((((t0 << 8) + 0xC2D56B0) + (((t1 << 2) << 2) << 1)) + 0x18))) & 4) == 0) {
        t2 = 0x2C1;
    }
    t3 = t2;
    if (((*(int *)(((((t0 << 8) + 0xC2D56B0) + (((t1 << 2) << 2) << 1)) + 0x18))) & 16) != 0) {
        t3 = (t2 | 0x1000);
    }
    (((struct oC_uint *)0xFFA00020)->v) = t3;
    (((struct o0_uint *)0xA05F6800)->v) = (*(int *)(((((t0 << 8) + 0xC2D56B0) + (((t1 << 2) << 2) << 1)) + 0xC)));
    (((struct o4_uint *)0xA05F6800)->v) = (*(int *)(((((t0 << 8) + 0xC2D56B0) + (((t1 << 2) << 2) << 1)) + 0x14)));
    (((struct o8_uint *)0xA05F6800)->v) = 0x1;
    (((struct o0_uint *)0xC2D58C4)->v) = t1;
    (((struct o4_uint *)0xC2D58C4)->v) = t0;
    *(unsigned int *)((((t0 << 2) + 0xC2D58BC) + 0x0)) = (((*(int *)((((t0 << 2) + 0xC2D58BC) + 0x0))) + 0x1) & 0x7);
    return 0x1;
}

int FUN_0c032436(int a4, int a5, int a6, int a7, int a8)
{
    int stk[9];
    register int t3;
    register int t31;
    register int t7;
    register int t27;
    register int t8;
    register int t14;
    register int t15;
    int t5;
    register int t24;
    register int t23;
    int R1008;
    int R1012;

    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);

    R1012 = a5;
    R1008 = a7;
    t3 = buCalcBackupFileSize((unsigned short)((((struct o4C_short *)(a6))->v)), (unsigned short)((((struct o54_short *)(a6))->v)), ((((struct o5C_int *)(a6))->v)));
    t31 = 0xFFFF0000;
    if (((R1008) != 0) && (t5 = R1008, t3 != t5)) {
    } else {
        t7 = nlMalloc(((t3 << 8) << 1));
        t27 = 0xFFFF0000;
        if (t7 != 0) {
            t8 = buMakeBackupFileImage(t7, a6);
            if ((int)t8 <= 0) {
                nlFree(t7);
                t24 = 0xFFFF0000;
            } else {
                syRtcGetDate((((int)stk + 8) + 0x8));
                { struct mvb8 { char b[8]; }; *(struct mvb8 *)((((int)stk + 8) + 0x14)) = *(struct mvb8 *)((((int)stk + 8) + 0x8)); }
                *(int *)((int)stk + 4) = 0x80000010;
                *(int *)((int)stk + 0) = (((int)stk + 4) + 0x18);
                t23 = FUN_0c077660(a4, (R1012), t7, t8, (((int)stk + 4) + 0x18), 0x80000010);
                if (t23 != 0) {
                    nlFree(t7);
                } else {
                    for (;;) {
                        t14 = buIsReady(a4);
                        if (t14 != 0) {
                            t15 = buStat(a4);
                            if (t15 != -1) {
                                break;
                            }
                            continue;
                        }
                        break;
                    }
                    nlFree(t7);
                    t23 = buGetLastError(a4);
                    if ((t23 == 0) && (a8 != 0)) {
                        memcpy(a8, (((int)stk + 8) + 0x14), 0x8);
                    }
                }
                t24 = t23;
            }
            t27 = t24;
        }
        t31 = t27;
    }
    return t31;
}

int FUN_0c03542a(int a4, int a5, float f4, float f5, float f6, float f7, float f8)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    switch (a4) {
    case 0:
        t0 = ((int (*)(int, int, int, int, float, float, float, float, float))(FUN_0c03346e))(0xC0C0034, 0xC2A5808, (int)f4, (int)f5, f4, f5, f6, f7, f8);
        break;
    case 1:
        t0 = ((int (*)(int, int, int, int, float, float, float, float, float))(FUN_0c03346e))(0xC0C0084, 0xC2A5808, (int)f4, (int)f5, f4, f5, f6, f7, f8);
        break;
    case 2:
        t0 = ((int (*)(int, int, int, int, float, float, float, float, float))(FUN_0c03346e))(0xC0C00D4, 0xC2A5808, (int)f4, (int)f5, f4, f5, f6, f7, f8);
        break;
    case 3:
        t0 = ((int (*)(int, int, int, int, float, float, float, float, float))(FUN_0c03346e))(0xC0C0124, 0xC2A5808, (int)f4, (int)f5, f4, f5, f6, f7, f8);
        break;
    }
    (((struct o24_float *)0xC2A5834)->v) = (((((struct o24_float *)0xC2A5834)->v)) + ((((struct o0_float *)0xC03561C)->v)));
    (((struct o0_float *)0xC2A5834)->v) = ((((struct o4_float *)0xC03561C)->v));
    u0 = (((struct o14_float *)0xC03561C)->v);
    u1 = (((struct o1C_float *)0xC03561C)->v);
    if ((int)a5 > 0) {
        t0 = 0x0;
        for (;;) {
            u2 = u1;
            u3 = u1;
            u4 = u1;
            if ((t0 & 0x1) != 0) {
                u2 = 0.0f;
                u3 = 0.0f;
                u4 = 0.0f;
            }
            FUN_0c076230(u2, u3, u4);
            t1 = ((int (*)(int, int, int, int))(FUN_0c03346e))(0xC0C0174, 0xC2A5808, (int)f4, (int)(((float)(((t0 << 2) + t0) << 2) + f5) + u0));
            FUN_0c026ce6();
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)a5) {
                break;
            }
        }
    }
    (((struct o0_float *)0xC2A5834)->v) = 1.0f;
    (((struct o24_float *)0xC2A5834)->v) = (((((struct o24_float *)0xC2A5834)->v)) - ((((struct o0_float *)0xC03561C)->v)));
    return 0xC03561C;
}

int FUN_0c05a026(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t1 = pdGetPeripheral(0x6);
    t2 = *(int *)((a4 + 0x18));
    *(unsigned int *)((a4 + 0x18)) = (t2 + 0x1);
    if ((int)(t2 + 0x1) > (int)0x1) {
        *(unsigned int *)((a4 + 0x18)) = ((*(int *)((a4 + 0x18))) - 1);
        t2 = 0x1;
        if ((0x2 & (*(int *)((t1 + 0x10)))) == 0) {
            t2 = 0x0;
        }
        t3 = t2;
    } else {
        if ((*(int *)((a4 + 0x1C))) == 0) {
            t2 = *(int *)((a4 + 0x20));
            if (((int)t2 >= 0) && (t0 = *(int *)((a4 + 0x10)), (int)t2 <= (int)t0)) {
            } else {
                *(unsigned int *)((a4 + 0x20)) = 0x0;
            }
            if ((0x2 & (*(int *)((t1 + 0x10)))) != 0) {
                *(unsigned int *)((a4 + 0x18)) = ((*(int *)((a4 + 0x18))) - 1);
                t0 = 0x1;
            } else {
                t4 = *(int *)((t1 + 0x10));
                if ((t4 & 16) != 0) {
                    t5 = *(int *)((a4 + 0x20));
                    *(unsigned int *)((a4 + 0x20)) = (t5 - 1);
                    if ((int)(t5 - 1) < 0) {
                        *(unsigned int *)((a4 + 0x20)) = (*(int *)((a4 + 0x10)));
                    }
                } else {
                    if ((t4 & 32) != 0) {
                        t4 = *(int *)((a4 + 0x20));
                        *(unsigned int *)((a4 + 0x20)) = (t4 + 0x1);
                        if ((int)(t4 + 0x1) <= (int)(*(int *)((a4 + 0x10)))) {
                        } else {
                            *(unsigned int *)((a4 + 0x20)) = 0x0;
                        }
                    } else {
                        if (((*(int *)((t1 + 0x10))) & 4) != 0) {
                            t4 = *(int *)((a4 + 0x20));
                            if ((*(int *)((((((t4 << 2) + t4) << 2) + (*(int *)((a4 + 0x28)))) + 0xC))) != 0) {
                                t4 = *(int *)((a4 + 0x20));
                                t5 = ((int (*)(int, int, int, int))((*(int *)((((((t4 << 2) + t4) << 2) + (*(int *)((a4 + 0x28)))) + 0xC)))))(t1, t2, 0x2, a7);
                            }
                            t1 = *(int *)((a4 + 0x20));
                            if ((*(int *)((((((t1 << 2) + t1) << 2) + (*(int *)((a4 + 0x28)))) + 0x4))) != 0) {
                                t1 = *(int *)((a4 + 0x20));
                                *(unsigned int *)((a4 + 0x1C)) = (*(int *)((((((t1 << 2) + t1) << 2) + (*(int *)((a4 + 0x28)))) + 0x10)));
                            }
                        }
                    }
                }
                *(unsigned int *)((a4 + 0x18)) = ((*(int *)((a4 + 0x18))) - 1);
                t0 = 0x0;
            }
            t1 = t0;
        } else {
            t0 = *(int *)((a4 + 0x1C));
            if ((t0 != 1) && (t0 != 2)) {
                *(unsigned int *)((a4 + 0x1C)) = 0x0;
                *(unsigned int *)((a4 + 0x20)) = 0x0;
                *(unsigned int *)((a4 + 0x18)) = ((*(int *)((a4 + 0x18))) - 1);
                t2 = 0x0;
            } else {
                t4 = *(int *)((a4 + 0x20));
                t5 = ((int (*)(int, int, int, int))((*(int *)((((((t4 << 2) + t4) << 2) + (*(int *)((a4 + 0x28)))) + 0x4)))))(t0, a5, 0x2, a7);
                if (t5 != 1) {
                    if (t5 != 2) {
                        *(unsigned int *)((a4 + 0x18)) = ((*(int *)((a4 + 0x18))) - 1);
                        t0 = 0x0;
                    } else {
                        *(unsigned int *)((a4 + 0x1C)) = 0x0;
                        *(unsigned int *)((a4 + 0x18)) = ((*(int *)((a4 + 0x18))) - 1);
                        t0 = 0x2;
                    }
                    t4 = t0;
                } else {
                    *(unsigned int *)((a4 + 0x1C)) = 0x0;
                    *(unsigned int *)((a4 + 0x18)) = ((*(int *)((a4 + 0x18))) - 1);
                    t4 = 0x0;
                }
                t2 = t4;
            }
            t1 = t2;
        }
        t3 = t1;
    }
    return t3;
}

int FUN_0c06aae4(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(int *)0xC1ECCA8;
    t1 = t0;
    if (t0 != 1) {
    } else {
        t0 = *(int *)((((a4 - 35) << 2) + 0xC10E5D0));
        t2 = *(int *)0xC2B9C2C;
        (((struct o4_uint *)0xC13BE04)->v) = (*(int *)(((a5 << 2) + 0xC111D00)));
        (((struct o1C_uint *)0xC13BE04)->v) = (*(int *)(((a5 << 2) + 0xC111D0C)));
        if ((int)a6 > (int)0x1) {
            (((struct o0_uint *)0xC13BE04)->v) = (*(int *)((((*(int *)((((*(int *)(((a5 << 2) + 0xC13BDBC))) + ((t2 - 1) << 2)) + 0x0)))) + (((int)((int)(((int (*)(int, int, int))(FUN_0c069e54))(((a4 - 35) << 2), (a5 << 2), (t2 - 1))) % (int)(*(int *)((((*(int *)(((a5 << 2) + 0xC13BDC8))) + ((t2 - 1) << 2)) + 0x0))))) << 2))));
            (((struct o18_uint *)0xC13BE04)->v) = (*(int *)((((*(int *)(((t0 << 2) + (*(int *)((((*(int *)(((a5 << 2) + 0xC13BDEC))) + ((a6 - 2) << 2)) + 0x0))))))) + (((int)((int)(((int (*)(void))(FUN_0c069e54))()) % (int)(*(int *)((((*(int *)(((*(int *)(((a5 << 2) + 0xC13BDF8))) + ((a6 - 2) << 2)))) + (t0 << 2)) + 0x0))))) << 2))));
            Voice_ShutUp(0x2);
            t3 = 0xC1103AC;
        } else {
            (((struct o0_uint *)0xC13BE04)->v) = (*(int *)((((*(int *)((((*(int *)(((a5 << 2) + 0xC13BDA4))) + ((t2 - 1) << 2)) + 0x0)))) + (((int)((int)(((int (*)(int, int, int))(FUN_0c069e54))(((a4 - 35) << 2), (a5 << 2), (t2 - 1))) % (int)(*(int *)((((*(int *)(((a5 << 2) + 0xC13BDB0))) + ((t2 - 1) << 2)) + 0x0))))) << 2))));
            (((struct o18_uint *)0xC13BE04)->v) = (*(int *)((((*(int *)((((*(int *)(((a5 << 2) + 0xC13BDD4))) + (t0 << 2)) + 0x0)))) + (((int)((int)(((int (*)(void))(FUN_0c069e54))()) % (int)(*(int *)((((*(int *)(((a5 << 2) + 0xC13BDE0))) + (t0 << 2)) + 0x0))))) << 2))));
            Voice_ShutUp(0x2);
            t3 = 0xC11039C;
        }
        FUN_0c058f64(0xC13BE1C, 0x2, (*(int *)(((t0 << 2) + t3))), 0x0);
        Voice_ShutUp(0x1);
        t1 = (FUN_0c058f64(0xC13BE04, 0x1, (*(int *)((((t2 - 1) << 2) + 0xC11037C))), 0x0));
    }
    return t1;
}

int FUN_0c06e49c(void)
{
    int stk[10];
    register int t5;
    register int t7;
    register int t10;
    register int t11;
    register int t17;
    register int t27;
    register int t6;
    register int t8;

    *(unsigned int *)(((int)stk + 0)) = ((int)((int)(FUN_0c0464ae()) % (int)(*(int *)0xC112BE8)));
    nlPushMatrix(0xC17596C);
    t5 = 0xC06E52C;
    t7 = t6;
    t10 = 0x0;
    t11 = (*(int *)(((int)stk + 0)));
    for (;;) {
        if ((int)t10 >= (int)(*(int *)0xC112BE8)) {
            break;
        }
        t5 = (*(int *)0xC112BE8);
        t5 = ((int)((int)t11 % (int)t5));
        t8 = t5;
        t8 = (t8 << 1);
        t17 = t8;
        t8 = (t8 << 1);
        t8 = (t8 + t17);
        t8 = (t8 << 2);
        t8 = (t8 + 0xC112BA0);
        t7 = t8;
        t5 = (FUN_0c072230(t7, (((int)stk + 0) + 0x1C)));
        t7 = t8;
        t7 = (t7 + 0xC);
        t5 = (FUN_0c072230(t7, (((int)stk + 0) + 0x10)));
        t7 = ((int)stk + 0);
        t7 = (t7 + 0x4);
        t5 = (nlSubVector3op(t7, (((int)stk + 0) + 0x1C), (((int)stk + 0) + 0x10)));
        t7 = ((int)stk + 0);
        t7 = (t7 + 0x10);
        t5 = (FUN_0c0297f4(t7, (((int)stk + 0) + 0x4), 5.0f));
        t7 = t5;
        t5 = (*(int *)((t7 + 0x1C)));
        if (t5 != -1) {
            t11 = (t11 + 0x1);
            t10 = (t10 + 0x1);
            continue;
        }
        break;
    }
    nlPopMatrix(0x1);
    FUN_0c018b1c(0x1);
    FUN_0c018b22((((int)stk + 0) + 0x1C), 0x0);
    t27 = camSetTarget((((int)stk + 0) + 0x10), 0x0);
    (((struct o8_uint *)0xC2BB3D8)->v) = 0x28;
    (((struct o0_uint *)0xC2BB3D8)->v) = (((((struct o0_int *)0xC2BB3D8)->v)) + 0x1);
    return t27;
}


int vmsfs_fgetinfo(int a4, int a5, int a6)
{
    int stk[16];
    register int t4;
    register int t8;
    register int t12;
    register int t15;

    *(unsigned int *)(((int)stk + 60)) = a4;
    *(unsigned int *)(((int)stk + 56)) = a5;
    *(unsigned int *)(((int)stk + 52)) = a6;
    *(unsigned int *)(((int)stk + 0)) = (((*(int *)(((int)stk + 60))) * 0x154) + 0xC2C8D2C);
    if ((*(signed char *)(((((*(int *)(((int)stk + 60))) * 0x154) + 0xC2C8D2C) + 0x2))) == 0) {
        return 0xFFFFFF01;
    }
    t4 = vmsio_isready((*(int *)(((int)stk + 60))));
    if (t4 == 0) {
        vmsfs_unmount((*(int *)(((int)stk + 60))));
        return 0xFFFFFF01;
    }
    t8 = vmsio_ismount((*(int *)(((int)stk + 60))));
    if (t8 == 0) {
        return 0xFFFFFF01;
    }
    if ((*(signed char *)((((*(int *)(((int)stk + 60))) * 0x154) + 0xC2C8D34))) == 0) {
        return 0xFFFFFF01;
    }
    t12 = buIsFormat((*(int *)(((int)stk + 60))));
    if ((int)t12 < 0) {
        return 0xFFFFFF03;
    }
    t15 = FUN_0c08f204((*(int *)(((int)stk + 60))), (*(int *)(((int)stk + 56))), (((int)stk + 0) + 0x4));
    *(unsigned int *)(((int)stk + 48)) = t15;
    if ((int)t15 < 0) {
        return 0xFFFFFF05;
    }
    *(unsigned int *)(((*(int *)(((int)stk + 52))) + 0x0)) = ((*(int *)(((int)stk + 44))) * ((*(int *)(((*(int *)(((*(int *)(((int)stk + 0))) + 0x1C))) + 0x2C))) + 0x1));
    *(unsigned short *)(((*(int *)(((int)stk + 52))) + 0x4)) = (*(int *)(((int)stk + 44)));
    *(unsigned char *)(((*(int *)(((int)stk + 52))) + 0x6)) = (*(signed char *)(((int)stk + 8)));
    *(unsigned char *)(((*(int *)(((int)stk + 52))) + 0x7)) = (*(signed char *)(((int)stk + 14)));
    *(unsigned short *)(((*(int *)(((int)stk + 52))) + 0x8)) = (*(short *)(((int)stk + 12)));
    if ((*(int *)(((int)stk + 8))) == 0xCC) {
        *(unsigned char *)(((*(int *)(((int)stk + 52))) + 0x6)) = 0x1;
    } else {
        *(unsigned char *)(((*(int *)(((int)stk + 52))) + 0x6)) = 0x0;
    }
    FUN_0c08fd60(((*(int *)(((int)stk + 52))) + 0xA), (((int)stk + 0) + 0x24));
    return 0x0;
}
