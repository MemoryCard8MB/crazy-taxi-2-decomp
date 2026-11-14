/* Straight-line functions with calls and guards (batch gen_bw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o124_int { char p[0x124]; int v; };
struct o124_uint { char p[0x124]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o18_float { char p[0x18]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_int { char p[0x1C]; int v; };
struct o20_float { char p[0x20]; float v; };
struct o20_int { char p[0x20]; int v; };
struct o24_float { char p[0x24]; float v; };
struct o24_int { char p[0x24]; int v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3D_uchar { char p[0x3D]; unsigned char v; };
struct o3E_short { char p[0x3E]; short v; };
struct o3E_ushort { char p[0x3E]; unsigned short v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_int { char p[0x44]; int v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o58_int { char p[0x58]; int v; };
struct o68_int { char p[0x68]; int v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
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
struct oB4_float { char p[0xB4]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oD0_float { char p[0xD0]; float v; };
struct oD4_int { char p[0xD4]; int v; };
int FUN_0c018b22(int, int);
int FUN_0c018c18(int);
int FUN_0c018c2a(float, float);
int FUN_0c03f9d0(int, int);
extern int FUN_0c040704();
int FUN_0c040bec(int, int);
int FUN_0c0435e2(int, int);
int FUN_0c0438c0(int);
int FUN_0c045bac(int, int);
int FUN_0c046466(void);
int FUN_0c057aec(int, int, int);
int FUN_0c058ca6(int, int);
int FUN_0c06e700(int, int, float);
int FUN_0c06f0d0(int, int);
int FUN_0c06f240(void);
int FUN_0c070e60(void);
float FUN_0c070e80(void);
int FUN_0c07215c(int, int, int);
int FUN_0c073c40(int, int, float);
float FUN_0c073c60(int);
int FUN_0c07fdc8(void);
int FUN_0c07ff00(void);
int FUN_0c08eee0(int);
int FUN_0c08f204(int, int, int);
int FUN_0c08f6b4(int, int);
int FUN_0c08f72e(int);
int FUN_0c08f788(int, int);
int FUN_0c08f824(int, int, int);
int FUN_0c08f87c(int, int);
int FUN_0c08f9c4(int, int);
int FUN_0c08f9f6(int, int);
int FUN_0c08faa8(int, int);
int FUN_0c14f3b0(int, int, int, int);
int FUN_0c14fd82(int, int);
int FUN_0c14ff0c(int);
extern int FUN_0c1616ce();
int TrafficLevelChange(int);
extern float _builtin_sqrtf(float);
int adxf_ChkPrmPt(int, int);
int buIsFormat(int);
int camSetTarget(int, int);
int kdGetDevice(int);
int kdGetStatus(int);
int kdIsChanged(int);
int kdSetBlockRead(int, int, int, int, int);
int kmiAllocSysConfig(int, float, float, float, float, float, float);
int kmiChkActiveListType(int, int, int, int, int);
int kmiCopyFromFrameBuffer(int, int, int);
int kmiCopyToFrameBuffer(int, int, int);
int kmiDiscardRenderPipeline(int, int, int, int);
int kmiFBControl(int, int, int, int);
int kmiGetNativeRegOBPSize(int);
int kmiGetPackOBPParam(int, int, int, int, int, int);
int kmiMemCopy4(int, int, int);
int kmiPurgeCache(int);
int kmiResetBoard(void);
int kmiSetTAEnvironment(int, int, int, int, int);
int kmiTAallocEx(int, int, int);
int kmiWriteDispModeRegisters(void);
int kmiWriteRegister(int, int);
int kmtex_GetTextureLevel(int, int);
int memset(int, int, int);
extern int nlFree();
int nlFreePalette(int, int, int, int);
int nlLocate(int, int);
int nlMalloc(int);
int nlPrintf(int, ...);
int nlProjectScreen3D(int, int);
int nlScaleUnitVector(int, int, float);
int nlSearchPalette(int, int);
int nlSubVector(int, int);
int set_event(int, int);
int strncpy(int, int, int);
int vmsfb_sleep(void);
int vmsfs_memcpyl(int, int, int);
int vmsfs_unmount(int);
int vmsfs_write_retry(int, int, int);
int vmsio_ismount(int);
int vmsio_isready(int);
int FUN_0c0599b0(int a4, int a5);
int FUN_0c14f604(int a4, int a5, int a6, int a7);
int FUN_0c02e42a(int a4, int a5, int a6);
int vmsfs_diskfree(int a4, int a5);
int vmsio_block_read(int a4, int a5, int a6);
int FUN_0c07b200(int a4, int a5, int a6, int a7);
int vmsfs_fwrite1(int a4, int a5);
int vmsfs_fsetattr(int a4, int a5, int a6, int a7);
int kmCreateTABuffer(int a4, int a5, float f4, float f5, float f6, float f7, float f8, float f9);
int kmtex_ReloadVQMM(int a4, int a5, int a6);
float ReflectColliWallBox(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7);
int FUN_0c043706(int a4);
int FUN_0c043b00(int a4, int a5, int a6);
int FUN_0c06dc4e(int a4);
int kmChangeDisplayFilterMode(int a4, int a5, int a6, int a7);
int kmiCopyDummyGlobalData(int a4);
int kmiGetDisplayData(int a4, int a5, int a6);

int FUN_0c0599b0(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    t0 = nlMalloc((a5 << 2));
    if (t0 == 0) {
        nlLocate(0xA, 0xA);
        nlPrintf(0xC10D484);
        nlPrintf(0xC10D49C);
        FUN_0c06f240();
    }
    t1 = nlMalloc((a5 << 2));
    if (t1 == 0) {
        nlLocate(0xA, 0xA);
        nlPrintf(0xC10D484);
        nlPrintf(0xC10D49C);
        FUN_0c06f240();
    }
    (((struct o8_float *)(a4))->v) = 0.0f;
    (((struct o8_float *)((((((a5 - 1) << 1) + (a5 - 1)) << 2) + a4)))->v) = 0.0f;
    t2 = 0x0;
    if ((int)(a5 - 1) > 0) {
        t3 = a4;
        t4 = 0x0;
        t5 = 0x0;
        for (;;) {
            t5 = (t5 + 0x1);
            *(float *)(((t4 + t0) + 0x0)) = (((((struct oC_float *)(t3))->v)) - (*(float *)((t3 + 0x0))));
            u0 = (((struct o4_float *)(t3))->v);
            t7 = (t3 + 0xC);
            t3 = (t3 + 0xC);
            (((struct o4_float *)((t4 + t1)))->v) = ((((((struct o4_float *)(t7))->v)) - u0) / (*(float *)(((t4 + t0) + 0x0))));
            t6 = (t4 + t0);
            t4 = (t4 + 0x4);
            if ((int)t5 >= (int)(a5 - 1)) {
                break;
            }
        }
        t2 = t6;
    }
    (((struct o8_float *)((a4 + 0xC)))->v) = ((((((struct o8_float *)(t1))->v)) - ((((struct o4_float *)(t1))->v))) - (((*(float *)((t0 + 0x0))) * ((((struct o8_float *)(a4))->v)))));
    (((struct o4_float *)(t1))->v) = ((((((struct o18_float *)(a4))->v)) - (*(float *)((a4 + 0x0)))) * (1.0f + 1.0f));
    t3 = 0x1;
    t4 = t2;
    if ((int)0x1 < (int)(a5 - 2)) {
        t2 = (a4 + 0xC);
        t5 = 0x4;
        t6 = 0x1;
        for (;;) {
            u0 = *(float *)(((t5 + t1) + 0x0));
            u1 = *(float *)(((t5 + t0) + 0x0));
            t6 = (t6 + 0x1);
            (((struct o14_float *)(t2))->v) = ((((((struct o8_float *)((t5 + t1)))->v)) - ((((struct o4_float *)((t5 + t1)))->v))) - ((((((struct o8_float *)(t2))->v)) * (u1 / u0))));
            u2 = (((struct o18_float *)(t2))->v);
            u3 = *(float *)((t2 + 0x0));
            t2 = (t2 + 0xC);
            u4 = ((*(float *)(((t5 + t0) + 0x0))) * (u1 / u0));
            (((struct o4_float *)((t5 + t1)))->v) = ((((u2 - u3) * (1.0f + 1.0f))) - u4);
            t7 = (t5 + t1);
            t5 = (t5 + 0x4);
            if ((int)t6 >= (int)(a5 - 2)) {
                break;
            }
        }
        t3 = t6;
        t4 = t7;
    }
    (((struct o8_float *)((((((a5 - 2) << 1) + (a5 - 2)) << 2) + a4)))->v) = (((((struct o8_float *)((((((a5 - 2) << 1) + (a5 - 2)) << 2) + a4)))->v)) - (((*(float *)(((((a5 - 2) << 2) + t0) + 0x0))) * ((((struct o8_float *)((((((a5 - 1) << 1) + (a5 - 1)) << 2) + a4)))->v)))));
    t2 = ((a5 - 2) << 2);
    if ((unsigned int)(((((a5 - 2) << 1) + (a5 - 2)) << 2) + a4) > (unsigned int)a4) {
        t5 = (((((a5 - 2) << 1) + (a5 - 2)) << 2) + a4);
        t6 = ((a5 - 2) << 2);
        for (;;) {
            u0 = (((struct o14_float *)(t5))->v);
            u1 = (((struct o8_float *)(t5))->v);
            t7 = (0x8 + t5);
            t5 = (t5 - 12);
            *(float *)((t7 + 0x0)) = ((u1 - (((*(float *)((t0 + t6))) * u0))) / (*(float *)((t1 + t6))));
            t6 = (t6 - 4);
            if ((unsigned int)t5 <= (unsigned int)a4) {
                break;
            }
        }
        t2 = t6;
    }
    t5 = ((int (*)(int, int, int, int))(nlFree))(t0, t2, t3, t4);
    return ((int (*)(int))(nlFree))(t1);
}

int FUN_0c14f604(int a4, int a5, int a6, int a7)
{
    int stk[13];

    register int R1;
    register int R2;
    register int R3;
    register float F10;
    register float F14;
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
    int R1004;
    int R1008;
    int R1012;
    int R1016;
    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);
    R1016 = *(int *)((int)stk + 16);
    v0_9 = a4;
    v0_3 = a5;
    v0_0 = a6;
    v0_4 = a7;
    R1008 = v0_9;
    R1004 = v0_3;
    R1012 = v0_0;
    v0_5 = adxf_ChkPrmPt((R1008), v0_4);
    v0_1 = (v0_5);
    v0_2 = (v0_4);
    if (((int)v0_5 >= 0)) goto L_C14F62E;
    L_C14F792:;
    v0_0 = (v0_1);
    L_C14F794:;
    return v0_0;
    L_C14F62E:;
    v0_1 = FUN_0c14fd82((R1004), (R1012));
    R1016 = v0_1;
    if ((v0_1 != 0)) goto L_C14F660;
    v0_0 = ((int (*)(int, int, int, int))(FUN_0c1616ce))(0xC1705F8, v0_3, v0_0, v0_4);
    v0_0 = (0xFFFFFFFF);
    goto L_C14F794;
    L_C14F660:;
    memset(v0_2, 0x0, 0x40);
    *(unsigned int *)((((R1008) << 2) + 0xC2D21F4)) = v0_2;
    *(unsigned int *)((v0_2 + 0x0)) = 0x0;
    strncpy((v0_2 + 0x10), (R1004), 0x28);
    *(unsigned int *)((v0_2 + 0x38)) = (R1012);
    *(unsigned char *)((v0_2 + 0xE)) = 0x0;
    R1004 = (v0_2 + 0x3C);
    R1008 = ((v0_2 + 0x3C) + 0x2);
    (((struct o0_uint *)0xC2D56A8)->v) = 0xC2D3640;
    (((struct o4_uint *)0xC2D56A8)->v) = 0xC2D3640;
    *(unsigned int *)((v0_2 + 0x8)) = 0x0;
    v0_1 = (0xFFFFFFFF);
    v0_5 = (0x0);
    v0_6 = (0xC2D56AC);
    v0_9 = (0xC2D56A8);
    v0_7 = (0x0);
    v0_9 = (0x0);
    L_C14F77A:;
    v0_8 = (0x3);
    if (((int)v0_9 < (int)0x3)) goto L_C14F6B0;
    if ((v0_9 != 3)) goto L_C14F78E;
    v0_0 = ((int (*)(int, int, int, int))(FUN_0c1616ce))(0xC170628, v0_3, v0_0, v0_4);
    L_C14F78E:;
    FUN_0c14ff0c((R1016));
    goto L_C14F792;
    L_C14F6B0:;
    v0_10 = (int)(FUN_0c14f3b0((R1016), 0x1, (*(int *)((v0_6 + 0x0))), v0_4)) <= 0;
    if (v0_10) goto L_C14F778;
    v0_0 = (0x800);
    if (((*(int *)((v0_2 + 0x8))) != 0)) goto L_C14F70C;
    v0_10 = *(int *)((v0_6 + 0x0));
    v0_9 = (0x10000);
    v0_3 = ((v0_10 + 0x4));
    if (((int)(*(int *)(((v0_10 + 0x4) + 0x0))) <= (int)0x10000)) goto L_C14F6E0;
    *(unsigned int *)((v0_3 + 0x0)) = v0_9;
    v0_0 = ((int (*)(int, int, int, int))(FUN_0c1616ce))(0xC170654, v0_3, v0_0, v0_4);
    v0_1 = (0xFFFFFFFC);
    v0_2 = (0xC170654);
    goto L_C14F78E;
    L_C14F6E0:;
    v0_3 = *(int *)((v0_3 + 0x0));
    *(unsigned short *)((v0_2 + 0xC)) = v0_3;
    *(unsigned int *)((v0_2 + 0x8)) = (unsigned short)v0_3;
    *(unsigned int *)((v0_2 + 0x4)) = (((unsigned int)((((unsigned short)v0_3 + 0x1) << 1) + 0x3E) >> 2) << 2);
    v0_3 = (R1004);
    *(int *)((int)stk + 0) = v0_3;
    *(unsigned short *)((v0_3 + 0x0)) = ((int)((int)(*(int *)(((*(int *)((v0_6 + 0x0))) + 0x8))) / (int)v0_0));
    v0_9 = (v0_8);
    L_C14F710:;
    v0_3 = ((v0_9 << 2));
    v0_4 = (0x200);
    if (((int)v0_9 >= (int)0x200)) goto L_C14F746;
    L_C14F71A:;
    *(unsigned short *)((((v0_7 << 1) + (R1008)) + 0x0)) = ((int)((int)((*(int *)((v0_3 + (*(int *)((v0_6 + 0x0)))))) + 0x7FF) / (int)v0_0));
    v0_8 = (int)(v0_7 + 0x1) < (int)(*(int *)((v0_2 + 0x8)));
    v0_7 = ((v0_7 + 0x1));
    if (v0_8) goto L_C14F73E;
    v0_1 = (v0_5);
    goto L_C14F78E;
    L_C14F73E:;
    v0_8 = (int)(v0_9 + 0x2) < (int)v0_4;
    v0_9 = ((v0_9 + 0x2));
    v0_3 = ((v0_3 + 0x8));
    if (v0_8) goto L_C14F71A;
    L_C14F746:;
    v0_9 = (v0_5);
    goto L_C14F77A;
    L_C14F70C:;
    v0_9 = (0x1);
    goto L_C14F710;
    L_C14F778:;
    v0_9 = ((v0_9 + 0x1));
    goto L_C14F77A;
}

int FUN_0c02e42a(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t3;
    register float u0;
    register float u1;

    t0 = 0xC02E0D6;
    if (a6 == 5) {
        t0 = 0xC02E380;
    }
    t1 = set_event(0x3C, t0);
    t0 = t1;
    if (t1 == 0) {
    } else {
        FUN_0c07ff00();
        (((struct o18_float *)(t1))->v) = (((((struct o18_float *)(t1))->v)) - (1.0f + 1.0f));
        FUN_0c07ff00();
        u0 = 0.200000003f;
        u0 = u0 + 0.200000003f * (FUN_0c070e80());
        (((struct o2C_float *)(t1))->v) = u0;
        *(unsigned int *)((t1 + 0x34)) = ((FUN_0c070e60()) & 0x3);
        *(unsigned int *)((t1 + 0x30)) = 0x1E;
        *(unsigned int *)((t1 + 0x38)) = a6;
        if (a6 != 1) {
            if (a6 != 2) {
                if (a6 != 3) {
                    if (a6 != 4) {
                        t0 = a6;
                        if (a6 != 5) {
                        } else {
                            u0 = FUN_0c073c60(a5);
                            (((struct o20_float *)(t1))->v) = (((((struct o20_float *)(t1))->v)) + ((FUN_0c070e80()) + -0.5f));
                            u1 = (FUN_0c070e80());
                            u1 = u1 + 0.100000001f * ((u0 + -0.400000006f));
                            (((struct o24_float *)(t1))->v) = (((((struct o24_float *)(t1))->v)) + (u1 + 0.300000012f));
                            (((struct o28_float *)(t1))->v) = (((((struct o28_float *)(t1))->v)) + ((FUN_0c070e80()) + -0.5f));
                            *(unsigned int *)((t1 + 0x30)) = 0x14;
                            t0 = (FUN_0c057aec((unsigned char)(*(signed char *)0xC1EC784), 0x1000, 0x2));
                        }
                        t3 = t0;
                    } else {
                        (((struct o2C_float *)(t1))->v) = (((((struct o2C_float *)(t1))->v)) * 1.60000002f);
                        *(unsigned int *)((t1 + 0x30)) = 0x14;
                        t3 = 0x2C;
                    }
                    t0 = t3;
                } else {
                    (((struct o2C_float *)(t1))->v) = (((((struct o2C_float *)(t1))->v)) * 3.0f);
                    *(unsigned int *)((t1 + 0x30)) = 0x14;
                    t0 = 0x2C;
                }
                t3 = t0;
            } else {
                (((struct o2C_float *)(t1))->v) = (((((struct o2C_float *)(t1))->v)) * (1.0f + 1.0f));
                t3 = (FUN_0c057aec((unsigned char)(*(signed char *)0xC1EC784), 0x1000, 0x1));
            }
            t0 = t3;
        } else {
            (((struct o2C_float *)(t1))->v) = (((((struct o2C_float *)(t1))->v)) * 1.5f);
            t0 = (FUN_0c057aec((unsigned char)(*(signed char *)0xC1EC784), 0x1000, 0x0));
        }
    }
    return t0;
}

int vmsfs_diskfree(int a4, int a5)
{
    int stk[5];
    register int t4;
    register int t8;
    register int t12;
    register int t23;
    register int t33;
    register int t36;
    register int t51;
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

    R1016 = a4;
    R1012 = a5;
    R1000 = (((R1016) * 0x154) + 0xC2C8D2C);
    if ((*(signed char *)(((((R1016) * 0x154) + 0xC2C8D2C) + 0x2))) == 0) {
        return 0xFFFFFF01;
    }
    t4 = vmsio_isready((R1016));
    if (t4 == 0) {
        vmsfs_unmount((R1016));
        return 0xFFFFFF01;
    }
    t8 = vmsio_ismount((R1016));
    if (t8 == 0) {
        return 0xFFFFFF01;
    }
    if ((*(signed char *)((((R1016) * 0x154) + 0xC2C8D34))) == 0) {
        return 0xFFFFFF01;
    }
    t12 = buIsFormat((R1016));
    if ((int)t12 < 0) {
        return 0xFFFFFF03;
    }
    R1004 = 0x0;
    if ((R1012) == 1) {
        R1008 = 0x0;
        for (;;) {
            if ((int)(R1008) >= (int)(*(int *)(((*(int *)(((R1000) + 0x1C))) + 0x38)))) {
                R1004 = (R1008);
                return (R1004);
            }
            t23 = FUN_0c08f87c((R1016), (R1008));
            if ((unsigned short)t23 != 0xFFFC) {
                break;
            }
            R1008 = ((R1008) + 0x1);
        }
        R1004 = (R1008);
    } else {
        if ((*(int *)0xC1182A8) != 0) {
            R1008 = 0x0;
            for (;;) {
                if ((int)(R1008) >= (int)(*(int *)(((*(int *)(((R1000) + 0x1C))) + 0x30)))) {
                    break;
                }
                t33 = FUN_0c08f87c((R1016), (R1008));
                if ((unsigned short)t33 == 0xFFFC) {
                    t36 = FUN_0c08f788((R1016), (R1008));
                    if ((int)t36 >= 0) {
                        R1004 = ((R1004) + 0x1);
                    }
                }
                R1008 = ((R1008) + 0x1);
            }
        } else {
            R1008 = 0x0;
            for (;;) {
                if ((int)(R1008) >= (int)(*(int *)(((*(int *)(((R1000) + 0x1C))) + 0x30)))) {
                    break;
                }
                t51 = FUN_0c08f87c((R1016), (R1008));
                if ((unsigned short)t51 == 0xFFFC) {
                    R1004 = ((R1004) + 0x1);
                }
                R1008 = ((R1008) + 0x1);
            }
        }
    }
    return (R1004);
}

int vmsio_block_read(int a4, int a5, int a6)
{
    int stk[12];
    register int t2;
    register int t5;
    register int t13;
    register int t15;
    register int t18;
    register int t21;
    register int t26;
    register int t30;

    *(unsigned int *)(((int)stk + 44)) = a4;
    *(unsigned int *)(((int)stk + 40)) = a5;
    *(unsigned int *)(((int)stk + 36)) = a6;
    *(unsigned int *)(((int)stk + 4)) = (((*(int *)(((int)stk + 44))) * 0x154) + 0xC2C8D2C);
    t2 = vmsio_ismount((*(int *)(((int)stk + 44))));
    if (t2 == 0) {
        vmsfb_sleep();
        return 0xFFFFFF01;
    }
    t5 = *(int *)((((*(int *)(((int)stk + 44))) << 2) + 0xC11833C));
    *(unsigned int *)(((int)stk + 28)) = t5;
    *(unsigned int *)(((int)stk + 12)) = (kdGetDevice(t5));
    *(unsigned int *)(((int)stk + 16)) = (*(int *)(((int)stk + 36)));
    *(unsigned int *)(((int)stk + 32)) = 0x0;
    *(unsigned int *)(((int)stk + 20)) = 0x0;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 32))) < (int)(*(int *)(((*(int *)(((*(int *)(((int)stk + 4))) + 0x1C))) + 0x3C)))) {
            for (;;) {
                for (;;) {
                    t13 = kdIsChanged((*(int *)(((int)stk + 28))));
                    if (t13 != 0) {
                        break;
                    }
                    t15 = (*(int *)(((int)stk + 40)));
                    *(int *)((int)stk + 0) = t15;
                    t18 = kdSetBlockRead((*(int *)(((int)stk + 28))), 0x2, 0x0, (*(int *)(((int)stk + 20))), t15);
                    *(unsigned int *)(((int)stk + 24)) = t18;
                    if ((int)t18 >= 0) {
                        for (;;) {
                            *(volatile int *)(((int)stk + 24));
                            t21 = kdGetStatus((*(int *)(((int)stk + 28))));
                            if (t21 != 0) {
                                break;
                            }
                            vmsfb_sleep();
                        }
                        *(unsigned int *)(((int)stk + 12)) = (kdGetDevice((*(int *)(((int)stk + 28)))));
                        t26 = kdIsChanged((*(int *)(((int)stk + 28))));
                        if (t26 != 0) {
                            return 0xFFFFFF30;
                        }
                        *(unsigned int *)(((int)stk + 8)) = (*(int *)(((*(int *)(((int)stk + 12))) + 0x8)));
                        t30 = *(signed char *)(((*(int *)(((int)stk + 12))) + 0x4));
                        if ((unsigned char)t30 != 8) {
                            if ((unsigned char)t30 != 0xFC) {
                                if ((unsigned char)t30 != 0xFB) {
                                    return 0xFFFFFF01;
                                }
                                return 0xFFFF0000;
                            }
                            continue;
                        }
                        vmsfs_memcpyl((*(int *)(((int)stk + 16))), ((*(int *)(((int)stk + 8))) + 0xC), ((((struct o44_int *)((*(int *)(((*(int *)(((int)stk + 4))) + 0x1C)))))->v)));
                        *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + ((((struct o44_int *)((*(int *)(((*(int *)(((int)stk + 4))) + 0x1C)))))->v)));
                        *(unsigned int *)(((int)stk + 32)) = ((*(int *)(((int)stk + 32))) + 0x1);
                        *(unsigned int *)(((int)stk + 20)) = ((*(int *)(((int)stk + 20))) + 0x1);
                        if ((int)(*(int *)(((int)stk + 32))) < (int)(*(int *)(((*(int *)(((*(int *)(((int)stk + 4))) + 0x1C))) + 0x3C)))) continue;
                        return 0x0;
                    }
                    vmsfb_sleep();
                }
                break;
            }
            break;
        }
        return 0x0;
    }
    return 0xFFFFFF30;
}

int FUN_0c07b200(int a4, int a5, int a6, int a7)
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

    t0 = *(short *)((((a4 + (*(int *)0xC2BF8E4)) << 1) + ((((struct o0_int *)0xC2C3E30)->v))));
    t1 = (((struct o10_int *)0xC2C3E30)->v);
    t2 = *(int *)((((((t0 << 2) << 2) << 1) + t1) + 0xC));
    if ((*(int *)0xC147340) != 0) {
        if (((0x7 & ((unsigned int)t2 >> 27)) == 5) || ((0x7 & ((unsigned int)t2 >> 27)) == 6)) {
            t3 = *(int *)((((((t0 << 2) << 2) << 1) + t1) + 0xC));
            *(unsigned int *)((((((t0 << 2) << 2) << 1) + t1) + 0xC)) = ((t3 & 0xF81FFFFF) | (a5 << 21));
            t4 = (0x3F & ((unsigned int)t3 >> 21));
        }
        t3 = t4;
    } else {
        if (((*(int *)0xC2BFCC8) != 0) && (((0x7 & ((unsigned int)t2 >> 27)) == 5) || ((0x7 & ((unsigned int)t2 >> 27)) == 6))) {
            t2 = *(short *)((((((t0 << 2) << 2) << 1) + t1) + 0x16));
            nlFreePalette((unsigned short)t2, a5, a6, a7);
            *(unsigned short *)((((((t0 << 2) << 2) << 1) + t1) + 0x16)) = 0xFFFF;
            if ((int)a5 < (int)((((struct o0_short *)0xC2C4DA4)->v))) {
                *(unsigned short *)((((((t0 << 2) << 2) << 1) + t1) + 0x16)) = a5;
                t4 = (((struct o14_int *)0xC2C4DA4)->v);
                t5 = *(int *)0xC2BFCC8;
                if ((*(short *)(((t4 + ((a5 << 2) << 1)) + 0x4))) != 0) {
                    *(unsigned short *)(((t4 + ((a5 << 2) << 1)) + 0x4)) = ((*(short *)(((t4 + ((a5 << 2) << 1)) + 0x4))) + 0x1);
                    t6 = (*(short *)(((t4 + ((a5 << 2) << 1)) + 0x0)));
                } else {
                    *(unsigned char *)(((t4 + ((a5 << 2) << 1)) + 0x2)) = (*(signed char *)((((((a5 << 1) + a5) << 2) + t5) + 0x2)));
                    *(unsigned char *)(((t4 + ((a5 << 2) << 1)) + 0x3)) = ((int)((*(int *)((((((a5 << 1) + a5) << 2) + t5) + 0x8))) + 0xF) >> 4);
                    *(unsigned short *)(((t4 + ((a5 << 2) << 1)) + 0x4)) = 0x1;
                    *(unsigned short *)(((t4 + ((a5 << 2) << 1)) + 0x6)) = a5;
                    t7 = *(int *)((((((a5 << 1) + a5) << 2) + t5) + 0x8));
                    t8 = nlSearchPalette((*(short *)((((((a5 << 1) + a5) << 2) + t5) + 0x2))), t7);
                    t6 = 0x0;
                    if ((int)t8 >= 0) {
                        *(unsigned short *)(((t4 + ((a5 << 2) << 1)) + 0x0)) = t8;
                        FUN_0c06f0d0(t8, t7);
                        FUN_0c07215c(((t8 << 2) << 2), (*(int *)((((((a5 << 1) + a5) << 2) + t5) + 0x4))), t7);
                        t6 = t8;
                    }
                }
                *(unsigned int *)((((((t0 << 2) << 2) << 1) + t1) + 0xC)) = (((*(int *)((((((t0 << 2) << 2) << 1) + t1) + 0xC))) & 0xF81FFFFF) | (t6 << 21));
            }
            t0 = (unsigned short)t2;
        }
        t3 = t0;
    }
    return t3;
}

int vmsfs_fwrite1(int a4, int a5)
{
    int stk[6];
    register int t2;
    register int t8;
    register int t14;
    register int t20;
    register int t24;
    register int t29;
    register int t33;
    register int t43;
    register int t52;
    register int t75;
    int R1004;
    int R1008;
    int R1012;
    int R1016;
    int R1020;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);
    R1016 = *(int *)((int)stk + 16);
    R1020 = *(int *)((int)stk + 20);

    R1020 = a4;
    R1016 = a5;
    t2 = vmsio_isready((*(int *)(((R1020) + 0x28))));
    if (t2 == 0) {
        vmsfs_unmount((*(int *)(((R1020) + 0x28))));
        return 0xFFFFFF01;
    }
    t8 = vmsio_ismount((*(int *)(((R1020) + 0x28))));
    if (t8 == 0) {
        return 0xFFFFFF01;
    }
    if ((*(signed char *)((((*(int *)(((R1020) + 0x28))) * 0x154) + 0xC2C8D34))) == 0) {
        return 0xFFFFFF01;
    }
    t14 = buIsFormat((*(int *)(((R1020) + 0x28))));
    if ((int)t14 < 0) {
        return 0xFFFFFF03;
    }
    *(unsigned int *)(((int)stk + 0)) = (*(int *)(((R1020) + 0x8)));
    R1004 = (*(int *)(((R1020) + 0x28)));
    t20 = FUN_0c08f72e((R1004));
    R1012 = t20;
    if ((int)t20 < 0) {
        return 0xFFFFFF04;
    }
    t24 = vmsfs_write_retry((R1004), (R1012), (R1016));
    R1008 = t24;
    if ((int)t24 < 0) {
        if (t24 == 0xFFFFFF01) {
            return t24;
        }
        for (;;) {
            FUN_0c08f824((R1004), (R1012), 0xFFFF);
            t29 = FUN_0c08f6b4((R1004), 0xFFFC);
            R1012 = t29;
            if ((int)t29 < 0) {
                break;
            }
            t33 = vmsfs_write_retry((R1004), (R1012), (R1016));
            R1008 = t33;
            if (t33 == 0) {
                FUN_0c08f824((R1004), (R1012), 0xFFFA);
                if ((*(int *)(((R1020) + 0x38))) == 0xFFFF) {
                    *(unsigned int *)(((R1020) + 0x38)) = (short)(R1012);
                    *(unsigned int *)(((R1020) + 0x3C)) = (short)(R1012);
                    t43 = R1020;
                    *(unsigned int *)((t43 + 0x30)) = ((*(int *)((t43 + 0x30))) + 0x1);
                    return 0x0;
                }
                FUN_0c08f824((R1004), (*(int *)(((R1020) + 0x3C))), (R1012));
                *(unsigned int *)(((R1020) + 0x3C)) = (short)(R1012);
                t52 = R1020;
                *(unsigned int *)((t52 + 0x30)) = ((*(int *)((t52 + 0x30))) + 0x1);
                return 0x0;
            }
        }
        return 0xFFFFFF04;
    }
    FUN_0c08f824((R1004), (R1012), 0xFFFA);
    if ((*(int *)(((R1020) + 0x38))) == 0xFFFF) {
        *(unsigned int *)(((R1020) + 0x38)) = (short)(R1012);
        *(unsigned int *)(((R1020) + 0x3C)) = (short)(R1012);
    } else {
        FUN_0c08f824((R1004), (*(int *)(((R1020) + 0x3C))), (R1012));
        *(unsigned int *)(((R1020) + 0x3C)) = (short)(R1012);
    }
    t75 = R1020;
    *(unsigned int *)((t75 + 0x30)) = ((*(int *)((t75 + 0x30))) + 0x1);
    return 0x0;
}

int vmsfs_fsetattr(int a4, int a5, int a6, int a7)
{
    int stk[18];
    register int t0;
    register int t3;
    register int t10;
    register int t14;
    register int t18;
    register int t21;
    register int t24;
    register int t33;

    (((struct o44_uint *)(((int)stk + 0)))->v) = a4;
    (((struct o40_uint *)(((int)stk + 0)))->v) = a5;
    (((struct o3E_ushort *)(((int)stk + 0)))->v) = a6;
    (((struct o3D_uchar *)(((int)stk + 0)))->v) = a7;
    t0 = *(int *)(((int)stk + 68));
    *(unsigned int *)(((int)stk + 0)) = ((t0 * 0x154) + 0xC2C8D2C);
    *(unsigned int *)((((t0 * 0x154) + 0xC2C8D2C) + 0x30)) = 0x1;
    t3 = *(int *)(((*(int *)(((int)stk + 0))) + 0x4));
    *(unsigned int *)(((*(int *)(((int)stk + 0))) + 0x34)) = (*(int *)(((((((t3 << 1) + t3) << 2) << 2) << 1) + 0xC147868)));
    if ((*(signed char *)(((((*(int *)(((int)stk + 68))) * 0x154) + 0xC2C8D2C) + 0x2))) == 0) {
        return 0xFFFFFF01;
    }
    t10 = vmsio_isready((*(int *)(((int)stk + 68))));
    if (t10 == 0) {
        vmsfs_unmount((*(int *)(((int)stk + 68))));
        return 0xFFFFFF01;
    }
    t14 = vmsio_ismount((*(int *)(((int)stk + 68))));
    if (t14 == 0) {
        return 0xFFFFFF01;
    }
    if ((*(signed char *)((((*(int *)(((int)stk + 68))) * 0x154) + 0xC2C8D34))) == 0) {
        return 0xFFFFFF01;
    }
    t18 = buIsFormat((*(int *)(((int)stk + 68))));
    if ((int)t18 < 0) {
        return 0xFFFFFF03;
    }
    t21 = FUN_0c08faa8((*(int *)(((int)stk + 68))), (*(int *)(((int)stk + 64))));
    if ((int)t21 < 0) {
        return 0xFFFFFF0B;
    }
    t24 = FUN_0c08f204((*(int *)(((int)stk + 68))), (*(int *)(((int)stk + 64))), (((int)stk + 0) + 0x4));
    *(unsigned int *)(((int)stk + 52)) = t24;
    if ((int)t24 < 0) {
        return 0xFFFFFF05;
    }
    *(unsigned int *)(((int)stk + 48)) = (FUN_0c08f9c4((*(int *)(((int)stk + 68))), (*(int *)(((int)stk + 52)))));
    if ((*(int *)0xC1182AC) != 0) {
        t33 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC2C8D28) + 0x10)))))((*(int *)(((int)stk + 48))), 0x1A, ((((struct o3E_short *)(((int)stk + 0)))->v)), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    }
    *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x1)) = (*(signed char *)(((int)stk + 61)));
    FUN_0c08f9f6((*(int *)(((int)stk + 68))), (*(int *)(((int)stk + 52))));
    return (FUN_0c08eee0((*(int *)(((int)stk + 68)))));
}

int kmCreateTABuffer(int a4, int a5, float f4, float f5, float f6, float f7, float f8, float f9)
{
    int stk[8];
    register int t0;
    register int t1;
    register int t27;
    register int t34;
    register int t40;
    register int t53;
    int R1004;
    int R1008;
    int R1016;
    int R1020;
    int R1024;
    int R1028;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1016 = *(int *)((int)stk + 16);
    R1020 = *(int *)((int)stk + 20);
    R1024 = *(int *)((int)stk + 24);
    R1028 = *(int *)((int)stk + 28);

    (((struct o0_uint *)0xC2D0C14)->v) = 0x2;
    (((struct o0_uint *)0xC2D0BC0)->v) = a4;
    (((struct o4_uint *)0xC2D0C14)->v) = a5;
    t0 = (((struct o0_int *)0xC1737E4)->v);
    *(unsigned int *)(((int)stk + 12)) = t0;
    if (t0 != 0x80000000) {
        t1 = (((struct o0_int *)0xC1737E4)->v);
        (((struct o0_uint *)0xC1737E4)->v) = (t1 | 0x100);
        if ((t1 | 0x100) == 0xB00) {
            (((struct o0_uint *)0xC1737E4)->v) = 0x80000000;
            t53 = (kmiAllocSysConfig(((((struct o0_int *)0xC2D0C14)->v)), f4, f5, f6, f7, f8, f9));
        }
    } else {
        (((struct o4_uint *)0xC1737E4)->v) = 0x1;
        (((struct o8_uint *)0xC300C2C)->v) = ((((struct o0_int *)0xC300C2C)->v));
        *(unsigned int *)(((((((struct o0_int *)0xC300C2C)->v)) << 2) + 0xC300C1C)) = 0x2;
        *(unsigned int *)0xC300ADC = 0x0;
        (((struct o18_uint *)0xC300C2C)->v) = 0x1;
        R1016 = ((*(int *)((a4 + 0x10))) & 0x1);
        R1020 = (0x2 & (*(int *)((a4 + 0x10))));
        R1024 = ((*(int *)((a4 + 0x10))) & 0x4);
        R1028 = ((*(int *)((a4 + 0x10))) & 0x8);
        R1008 = 0x0;
        kmiChkActiveListType((R1016), (R1020), (R1024), (R1028), 0x0);
        R1004 = 0x1;
        *(int *)((int)stk + 0) = 0x0;
        t27 = kmiGetPackOBPParam((R1016), (R1020), (R1024), (R1028), 0x0, 0x1);
        kmiGetNativeRegOBPSize(t27);
        (((struct o4_uint *)0xC2D0C14)->v) = ((unsigned int)((((struct o4_int *)0xC2D0C14)->v)) >> 1);
        kmiGetDisplayData(0xFF, ((((struct o18_int *)0xC2D0BC0)->v)), ((((struct o24_int *)0xC2D0BC0)->v)));
        t34 = (((struct oC_int *)0xC2D0C14)->v);
        if ((unsigned int)((((struct o4_int *)0xC2D0C14)->v)) > (unsigned int)((-t34) + 0x200000)) {
            (((struct o4_uint *)0xC2D0C14)->v) = ((-t34) + 0x200000);
        }
        t53 = kmiTAallocEx(((((struct o4_int *)0xC2D0C14)->v)), 0xC2D0CA0, 0xC2D0CA4);
        if (t53 == 0) {
            *(unsigned int *)0xC300D28 = ((((struct o4_int *)0xC2D0C14)->v));
            R1008 = 0x0;
            t40 = (((struct o18_int *)0xC2D0BC0)->v);
            R1004 = (t27 & (~t40));
            kmiSetTAEnvironment(((unsigned int)((((struct o0_int *)0xC30093C)->v)) >> 7), ((unsigned int)((((struct o4_int *)0xC30093C)->v)) >> 7), ((unsigned int)((((struct o8_int *)0xC30093C)->v)) >> 7), ((unsigned int)((((struct oC_int *)0xC30093C)->v)) >> 7), (t27 & (~t40)));
            *(unsigned int *)0xC300ADC = 0x1;
        }
    }
    return t53;
}

int kmtex_ReloadVQMM(int a4, int a5, int a6)
{
    int stk[6];
    register int t0;
    register int t6;
    register int t7;
    register int t8;
    register int t20;
    register int t21;
    register int t22;
    register int t31;
    register int t32;
    register int t33;
    register int t46;
    register int t47;
    register int t48;
    register int t54;
    int R1000;
    int R1004;

    R1000 = *(int *)((int)stk + 0);
    R1004 = *(int *)((int)stk + 4);

    R1004 = a5;
    t0 = kmtex_GetTextureLevel(a6, a6);
    if (a6 != 1) {
        R1000 = (((int)stk + 0) + 0x8);
        if ((int)a6 <= (int)0x4) {
            R1000 = (((int)stk + 0) + 0x8);
            kmiCopyFromFrameBuffer((R1000), ((*(int *)((a4 + 0x1C))) + 0x800), 0x10);
            t7 = R1004;
            if (a6 == 2) {
                *(unsigned char *)(((((int)stk + 0) + 0x8) + 0x1)) = (*(signed char *)((t7 + 0x0)));
            } else {
                t6 = ((((int)stk + 0) + 0x8) + 0x2);
                for (;;) {
                    t8 = *(signed char *)((t7 + 0x0));
                    t7 = (t7 + 0x1);
                    *(unsigned char *)((t6 + 0x0)) = t8;
                    t6 = (t6 + 0x1);
                    if ((unsigned int)t6 >= (unsigned int)((((int)stk + 0) + 0x8) + 0x6)) {
                        break;
                    }
                }
            }
            t54 = ((*(int *)((a4 + 0x1C))) + 0x800);
        } else {
            R1000 = (((int)stk + 0) + 0x8);
            kmiCopyFromFrameBuffer((R1000), ((*(int *)((a4 + 0x1C))) + ((*(int *)((0xC170FC4 + ((t0 - 1) << 2)))) + 0x7FA)), 0x10);
            t20 = ((((int)stk + 0) + 0x8) + 0x6);
            t21 = (R1004);
            for (;;) {
                t22 = *(signed char *)((t21 + 0x0));
                t21 = (t21 + 0x1);
                *(unsigned char *)((t20 + 0x0)) = t22;
                t20 = (t20 + 0x1);
                if ((unsigned int)t20 >= (unsigned int)((((int)stk + 0) + 0x8) + 0x10)) {
                    break;
                }
            }
            R1000 = (*(int *)((a4 + 0x1C)));
            R1000 = ((R1000) + ((*(int *)((0xC170FC4 + ((t0 - 1) << 2)))) + 0x7FA));
            kmiPurgeCache((((int)stk + 0) + 0x8));
            kmiPurgeCache(((((int)stk + 0) + 0x8) + 0x20));
            kmiCopyToFrameBuffer((R1000), (((int)stk + 0) + 0x8), 0x10);
            if ((unsigned int)((*(int *)(((t0 << 2) + 0xC170F98))) - 16) > (unsigned int)0x0) {
                t31 = *(int *)((0xC170FC4 + ((t0 - 1) << 2)));
                t32 = *(int *)((a4 + 0x1C));
                t33 = R1004;
                R1000 = (t33 + 0xA);
                kmiCopyToFrameBuffer((t32 + (t31 + 0x80A)), (t33 + 0xA), ((*(int *)(((t0 << 2) + 0xC170F98))) - 16));
            }
            R1000 = (((int)stk + 0) + 0x8);
            kmiCopyFromFrameBuffer((R1000), ((*(int *)((a4 + 0x1C))) + ((*(int *)((0xC170FC4 + (t0 << 2)))) + 0x7FA)), 0x10);
            t46 = (((int)stk + 0) + 0x8);
            t47 = (((*(int *)(((t0 << 2) + 0xC170F98))) + (R1004)) - 6);
            for (;;) {
                t48 = *(signed char *)((t47 + 0x0));
                t47 = (t47 + 0x1);
                *(unsigned char *)((t46 + 0x0)) = t48;
                t46 = (t46 + 0x1);
                if ((unsigned int)t46 >= (unsigned int)((((int)stk + 0) + 0x8) + 0x6)) {
                    break;
                }
            }
            t54 = ((*(int *)((a4 + 0x1C))) + ((*(int *)((0xC170FC4 + (t0 << 2)))) + 0x7FA));
        }
        kmiPurgeCache((((int)stk + 0) + 0x8));
        kmiPurgeCache(((((int)stk + 0) + 0x8) + 0x20));
        kmiCopyToFrameBuffer(t54, (((int)stk + 0) + 0x8), 0x10);
    }
    return 0x0;
}

float ReflectColliWallBox(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7)
{
    int stk[9];
    register int t1;
    register float u2;
    register float u5;
    register float u6;
    register float u84;
    register float u88;
    register int t91;
    register float u10;
    register float u11;
    register float u13;
    register float u15;
    register float u16;
    register float u17;
    register float u25;
    register float u26;
    register float u43;
    register float u44;
    register int t47;
    register float u48;
    register float u49;
    register float u50;
    register float u51;
    register float u52;
    register float u53;
    register float u54;
    register float u55;
    register float u56;
    register float u57;
    register float u58;
    register float u60;
    register float u61;
    register float u62;
    register float u63;
    register float u64;
    register float u68;
    register float u73;
    register int t37;
    register float u34;
    register int t42;
    register int t59;
    float s1;

    t1 = *(int *)((a4 + 0x28));
    (((struct o1C_float *)(((int)stk + 0)))->v) = ((((struct oC_float *)(a4))->v));
    u2 = (((struct o14_float *)(a4))->v);
    (((struct o4_float *)((((int)stk + 0) + 0x1C)))->v) = u2;
    u5 = *(float *)((a6 + 0x0));
    u6 = (u2 * ((((struct o4_float *)(a6))->v)));
    u6 = u6 + u5 * ((((struct o1C_float *)(((int)stk + 0)))->v));
    u84 = u5;
    u88 = u6;
    t91 = 0;
    if (!(0.0f > u6)) {
        t91 = (0);
    } else {
        *(unsigned int *)(((int)stk + 0)) = (((a7 << 2) << 2) << 1);
        u10 = (-((*(float *)(((((a7 << 2) << 2) << 1) + 0xC128DC4))) * 0.200000003f));
        u11 = (u6 * (u10 + -1.0f));
        (((struct o1C_float *)(((int)stk + 0)))->v) = ((*(float *)((a6 + 0x0))) * u11);
        u13 = (u6 * (u10 + -1.0f));
        (((struct o4_float *)((((int)stk + 0) + 0x1C)))->v) = (((((struct o4_float *)(a6))->v)) * u13);
        (((struct oC_float *)(((int)stk + 0)))->v) = (*(float *)((t1 + 0x0)));
        u15 = (((struct o8_float *)(t1))->v);
        (((struct o4_float *)((((int)stk + 0) + 0xC)))->v) = u15;
        u16 = (((struct oC_float *)(((int)stk + 0)))->v);
        u17 = (u15 * u15);
        u17 = u17 + u16 * u16;
        s1 = _builtin_sqrtf(u17);
        if (s1 > 0.0f) {
            (((struct oC_float *)(((int)stk + 0)))->v) = (((((struct oC_float *)(((int)stk + 0)))->v)) * (1.0f / s1));
            (((struct o4_float *)((((int)stk + 0) + 0xC)))->v) = (((((struct o4_float *)((((int)stk + 0) + 0xC)))->v)) * (1.0f / s1));
            FUN_0c07fdc8();
            u25 = *(float *)((t37 + 0x0));
            u26 = (((((struct o4_float *)((((int)stk + 0) + 0x1C)))->v)) * ((((struct o4_float *)(t37))->v)));
            u26 = u26 + u25 * ((((struct o1C_float *)(((int)stk + 0)))->v));
            *(float *)((t37 + 0x0)) = (u25 * u26);
            (((struct o4_float *)(t37))->v) = (((((struct o4_float *)(t37))->v)) * u26);
            (((struct o14_float *)(((int)stk + 0)))->v) = (((((struct o1C_float *)(((int)stk + 0)))->v)) - (*(float *)((t37 + 0x0))));
            (((struct o4_float *)((((int)stk + 0) + 0x14)))->v) = (((((struct o4_float *)((((int)stk + 0) + 0x1C)))->v)) - ((((struct o4_float *)(t37))->v)));
        } else {
            FUN_0c07fdc8();
            (((struct o4_float *)((((int)stk + 0) + 0x14)))->v) = u34;
            (((struct o14_float *)(((int)stk + 0)))->v) = u34;
            FUN_0c07fdc8();
        }
        u43 = *(float *)((t42 + 0x0));
        u44 = (((struct o4_float *)(t42))->v);
        t47 = *(int *)(((int)stk + 0));
        u48 = (u44 * ((((struct o4_float *)((((int)stk + 0) + 0x4)))->v)));
        u48 = u48 + u43 * ((((struct o4_float *)(((int)stk + 0)))->v));
        u49 = (u44 * u44);
        u49 = u49 + u43 * u43;
        u50 = (((struct o14_float *)(((int)stk + 0)))->v);
        u51 = (u48 * (-u48));
        u52 = (((struct o4_float *)((t47 + 0xC128DB4)))->v);
        u53 = (((struct o18_float *)((t47 + 0xC128DB4)))->v);
        u54 = (((struct o4_float *)(t42))->v);
        u55 = (((struct o4_float *)((((int)stk + 0) + 0x14)))->v);
        u56 = (_builtin_sqrtf((u51 + u49)) * (u53 / u52));
        u57 = (((struct o1C_float *)(t1))->v);
        u58 = (((struct o14_float *)((t47 + 0xC128DB4)))->v);
        u60 = (u54 * u50);
        u61 = (u43 * u55);
        u62 = (_builtin_sqrtf((u51 + u49)) * (u53 / u52));
        u63 = ((u60 - u61) * u62);
        u64 = u57;
        u64 = u64 + u58 * u63;
        (((struct o1C_float *)(t1))->v) = u64;
        u68 = (*(float *)((t37 + 0x0)));
        u68 = u68 + ((f7 - u56)) * ((((struct o14_float *)(((int)stk + 0)))->v));
        (((struct oC_float *)(t59))->v) = (((((struct oC_float *)(t59))->v)) + u68);
        u73 = ((((struct o4_float *)(t37))->v));
        u73 = u73 + ((f7 - u56)) * ((((struct o4_float *)((((int)stk + 0) + 0x14)))->v));
        (((struct o14_float *)(t59))->v) = (((((struct o14_float *)(t59))->v)) + u73);
        u84 = (f7 - u56);
        u88 = (_builtin_sqrtf((u51 + u49)) * (u53 / u52));
        t91 = ((s1 > 0.0f));
    }
    return u84;
}

int FUN_0c043706(int a4)
{
    int stk[10];
    register float u2;
    register int t5;
    register float u8;
    register int t9;
    register int t59;
    register int t83;
    register int t43;

    if (((*(int *)((a4 + 0x34))) & 0x1) != 0) {
        u2 = (((struct o70_float *)(a4))->v);
        if (!(u2 > 0.0500000007f) && !(-0.100000001f > u2)) {
            FUN_0c057aec((unsigned char)(*(signed char *)0xC1EC784), 0x1000000, 0x0);
        } else {
            (((struct o124_uint *)(a4))->v) = 0xFFFFFFFF;
            t5 = ((int (*)(int, int))(FUN_0c040704))(0xFFFFFFFF, 0x0);
            TrafficLevelChange(0xFFFFFFFF);
            if ((*(int *)0xC2A5A1C) == 0) {
                u8 = (((struct o30_float *)(a4))->v);
                t9 = 0xA;
                if ((unsigned int)(int)(u8 * 1.5f) < (unsigned int)0xA) {
                    t9 = (int)(u8 * 1.5f);
                }
                *(unsigned int *)(((int)stk + 0)) = t9;
                FUN_0c058ca6((*(int *)(((t9 << 2) + 0xC0C276C))), 0x1);
            }
            *(unsigned int *)0xC2A5A1C = 0x5;
        }
    }
    if (((((struct o124_int *)(a4))->v)) == -1) {
        t83 = 0x68;
        if (((((struct o68_int *)(a4))->v)) == 0) {
            (((struct o124_uint *)(a4))->v) = 0x0;
            t83 = 0x124;
        }
    } else {
        if (((((struct o68_int *)(a4))->v)) != 0) {
            if (((((struct o124_int *)(a4))->v)) == 0) {
                nlProjectScreen3D((0x8C + a4), (((int)stk + 0) + 0x4));
                if (0.0f > (*(float *)(((int)stk + 4)))) {
                    t43 = (*(int *)(((((((((struct o78_int *)(a4))->v)) & 0x1) << 2) + 0xC0C275C) + 0x0)));
                } else {
                    t43 = (*(int *)(((((((((struct o78_int *)(a4))->v)) & 0x1) << 2) + 0xC0C275C) + 0x8)));
                }
                FUN_0c058ca6(t43, 0x2);
            }
            if (((((struct o6C_float *)(a4))->v)) > 2.5f) {
                (((struct o124_uint *)(a4))->v) = 0x1;
            } else {
                (((struct o124_uint *)(a4))->v) = 0xFFFFFFFF;
            }
            t83 = 0x124;
        } else {
            t83 = 0x124;
            if (((((struct o124_int *)(a4))->v)) != 0) {
                (((struct o124_uint *)(a4))->v) = 0x0;
                FUN_0c040bec(0x4, ((int)(((((struct o6C_float *)(a4))->v)) * 0.200000003f) + 0x1));
                t59 = (((struct o58_int *)((*(int *)0xC2A59D4)))->v);
                t83 = t59;
                if (t59 == 2) {
                    t83 = (((int (*)(int, int, int, int, int, int, int, int, int, int, int, int))(FUN_0c040704))(0x0, ((int)(((((struct o6C_float *)(a4))->v)) * 0.200000003f) + 0x1), 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28)));
                }
            }
        }
    }
    return t83;
}

int FUN_0c043b00(int a4, int a5, int a6)
{
    register int t0;
    int t1;
    register int t2;
    register float u0;
    register float u1;

    t0 = set_event(0x12C, 0xC0440A4);
    if (t0 == 0) {
        return t0;
    }
    t1 = *(int *)0xC2A59C0;
    *(unsigned int *)0xC2A59C0 = (t1 + 0x1);
    (((struct o74_uint *)(t0))->v) = ((t1 + 0x1) - 1);
    *(unsigned int *)0xC2AB7EC = ((*(int *)0xC2AB7EC) + 0x1);
    (((struct o78_uint *)(t0))->v) = a4;
    t1 = 0x0;
    if ((int)a4 < (int)0xF) {
        t2 = FUN_0c046466();
        t1 = 0x0;
        if ((t2 & 0xF) == 0) {
            t1 = 0x1;
        }
        if (t1 != 0) {
            (((struct o78_uint *)(t0))->v) = 0x0;
        }
    }
    (((struct o80_uint *)(t0))->v) = a5;
    if (a6 == 0) {
        t2 = (((struct o80_int *)(t0))->v);
        *(volatile int *)((((((t2 << 1) + t2) << 2) + (*(int *)0xC2ADA7C)) + 0x0));
        FUN_0c07ff00();
    } else {
        FUN_0c07ff00();
    }
    FUN_0c0438c0(t0);
    u0 = 0.0599999987f;
    u0 = u0 + 0.00999999978f * ((1000.0f / ((((struct oB4_float *)(t0))->v))));
    (((struct oD0_float *)(t0))->v) = u0;
    if (t1 != 0) {
        (((struct o84_uint *)(t0))->v) = (((((struct o84_int *)(t0))->v)) | 0x2);
    }
    FUN_0c07ff00();
    nlSubVector((0x98 + t0), (0x8C + t0));
    t1 = (((struct o80_int *)(t0))->v);
    t2 = *(int *)0xC2ADA7C;
    u0 = *(float *)((((0xF & (*(int *)(((*(int *)((((((t1 << 1) + t1) << 2) + t2) + 0x8))) + 0x0)))) << 2) + 0xC0F3AD4));
    u1 = u0;
    if ((int)((((struct oD4_int *)(t0))->v)) > (int)((*(int *)(((*(int *)((((((t1 << 1) + t1) << 2) + t2) + 0x4))) + 0x0))) - 4)) {
        u1 = (u0 * 0.300000012f);
    }
    nlScaleUnitVector((0x98 + t0), (0x98 + t0), (u1 * 0.699999988f));
    FUN_0c03f9d0(((((struct o80_int *)(t0))->v)), ((((struct oD4_int *)(t0))->v)));
    FUN_0c0435e2(t0, ((((struct o84_int *)(t0))->v)));
    t1 = (((struct o78_int *)(t0))->v);
    if ((t1 != 19) && (t1 != 17)) {
        return t1;
    }
    return FUN_0c045bac(t0, 0x1);
}

int FUN_0c06dc4e(int a4)
{
    int stk[7];
    register int t44;
    register float u6;
    register float u19;
    register float u37;
    int R1000;

    R1000 = *(int *)((int)stk + 0);

    FUN_0c07ff00();
    if (((*(signed char *)((a4 + 0xFE))) & 2) != 0) {
        u6 = ((((struct o0_float *)0xC112B04)->v));
    } else {
        u6 = (-((((struct o0_float *)0xC112B04)->v)));
    }
    FUN_0c06e700((((int)stk + 0) + 0x10), 0xC17596C, u6);
    R1000 = 0xC112B04;
    FUN_0c06e700((((int)stk + 0) + 0x10), 0xC17597C, ((((struct o4_float *)0xC112B04)->v)));
    FUN_0c06e700((((int)stk + 0) + 0x10), 0xC17598C, ((((struct o8_float *)((R1000)))->v)));
    FUN_0c018b22((((int)stk + 0) + 0x10), 0x0);
    FUN_0c07ff00();
    if (((*(signed char *)((a4 + 0xFE))) & 2) != 0) {
        u19 = ((((struct oC_float *)0xC112B04)->v));
    } else {
        u19 = (-((((struct oC_float *)0xC112B04)->v)));
    }
    FUN_0c06e700((((int)stk + 0) + 0x4), 0xC17596C, u19);
    R1000 = 0xC112B10;
    FUN_0c06e700((((int)stk + 0) + 0x4), 0xC17597C, ((((struct o10_float *)0xC112B04)->v)));
    FUN_0c06e700((((int)stk + 0) + 0x4), 0xC17598C, ((((struct o8_float *)((R1000)))->v)));
    nlSubVector((((int)stk + 0) + 0x4), (((int)stk + 0) + 0x10));
    FUN_0c073c40((((int)stk + 0) + 0x4), (((int)stk + 0) + 0x4), 0.00833333377f);
    FUN_0c018c18((((int)stk + 0) + 0x4));
    FUN_0c018c2a(0.0f, 1.0f);
    FUN_0c07ff00();
    if (((*(signed char *)((a4 + 0xFE))) & 2) != 0) {
        u37 = ((((struct o18_float *)0xC112B04)->v));
    } else {
        u37 = (-((((struct o18_float *)0xC112B04)->v)));
    }
    FUN_0c06e700((((int)stk + 0) + 0x10), 0xC17596C, u37);
    FUN_0c06e700((((int)stk + 0) + 0x10), 0xC17597C, ((((struct o1C_float *)0xC112B04)->v)));
    FUN_0c06e700((((int)stk + 0) + 0x10), 0xC17598C, ((((struct o20_float *)0xC112B04)->v)));
    t44 = camSetTarget((((int)stk + 0) + 0x10), 0x0);
    *(unsigned int *)0xC2BB3D8 = ((*(int *)0xC2BB3D8) + 0x1);
    return t44;
}

int kmChangeDisplayFilterMode(int a4, int a5, int a6, int a7)
{
    int stk[12];
    register int t1;
    register int t3;
    register int t5;
    register int t8;
    register int t11;
    register int t30;
    register int t31;
    register int t32;
    register int t34;
    register int t49;
    register int t55;
    register int t17;

    *(unsigned int *)(((int)stk + 16)) = a4;
    *(unsigned int *)(((int)stk + 20)) = a5;
    t1 = (((struct o4_int *)0xC170E1C)->v);
    *(unsigned int *)(((((int)stk + 16) + 0x8) + 0x0)) = ((((struct o0_int *)0xC170E1C)->v));
    *(unsigned int *)(((((int)stk + 16) + 0x8) + 0x4)) = t1;
    t3 = (((struct oC_int *)0xC170E1C)->v);
    *(unsigned int *)(((((int)stk + 16) + 0x8) + 0x8)) = ((((struct o8_int *)0xC170E1C)->v));
    *(unsigned int *)(((((int)stk + 16) + 0x8) + 0xC)) = t3;
    t5 = (((struct o14_int *)0xC170E1C)->v);
    *(unsigned int *)(((((int)stk + 16) + 0x8) + 0x10)) = ((((struct o10_int *)0xC170E1C)->v));
    *(unsigned int *)(((((int)stk + 16) + 0x8) + 0x14)) = t5;
    kmiDiscardRenderPipeline(a4, a5, a6, a7);
    t8 = 0x0;
    if ((*(int *)(((int)stk + 20))) != 0) {
        t8 = 0x1;
    }
    t11 = 0x0;
    if ((*(int *)(((int)stk + 16))) != 0) {
        t11 = 0x1;
    }
    (((struct o8_uint *)0xC3008F0)->v) = t11;
    (((struct oC_uint *)0xC3008F0)->v) = t8;
    t30 = 0x280;
    t31 = 0x1E0;
    t32 = 0x0;
    if (((((struct o0_int *)0xC3008F0)->v)) == 1) {
    } else {
        t32 = 0x0;
        if (((((((struct o0_int *)0xC3008F0)->v)) & 0x1) != 1) && ((t17 = (((struct o0_int *)0xC3008F0)->v), (t17 & 44) != 0) && (0x1 != 0))) {
            t32 = 0x1;
        }
        t30 = 0x140;
        if ((((((struct o0_int *)0xC3008F0)->v)) & 16) != 0) {
            t30 = 0x280;
        }
        t31 = 0xF0;
        if ((((((struct o0_int *)0xC3008F0)->v)) & 32) != 0) {
            t31 = 0x1E0;
        }
    }
    t34 = *(int *)0xC300C40;
    for (;;) {
        if (t34 != (*(int *)0xC300C40)) {
            break;
        }
    }
    *(int *)((int)stk + 12) = (t8);
    *(int *)((int)stk + 8) = (t11);
    kmiFBControl(t30, t31, ((((struct o4_int *)0xC3008F0)->v)), t32);
    kmiWriteDispModeRegisters();
    kmiWriteRegister(0x44, (((((struct o20_int *)0xC300B78)->v)) & 0xFFFFFFFE));
    kmiWriteRegister(0xE8, (*(int *)0xC300BD4));
    kmiWriteRegister(0x44, ((((struct o20_int *)0xC300B78)->v)));
    kmiResetBoard();
    *(int *)((int)stk + 4) = 0x0;
    t49 = ((((struct o0_int *)0xC300938)->v));
    *(int *)((int)stk + 0) = t49;
    kmiSetTAEnvironment(((unsigned int)((((struct o4_int *)0xC300938)->v)) >> 7), ((unsigned int)((((struct o8_int *)0xC300938)->v)) >> 7), ((unsigned int)((((struct oC_int *)0xC300938)->v)) >> 7), ((unsigned int)((((struct o10_int *)0xC300938)->v)) >> 7), t49);
    (((struct o0_uint *)0xC300B78)->v) = 0x1;
    t55 = *(int *)0xC300C40;
    for (;;) {
        if (t55 != (*(int *)0xC300C40)) {
            break;
        }
    }
    return 0x0;
}

int kmiCopyDummyGlobalData(int a4)
{
    int stk[9];
    register int t0;
    register int t2;
    register int t5;
    register int t6;
    register int t11;
    register int t14;
    register int t30;
    register int t33;
    register int t55;
    register int t58;
    register int t80;
    register int t83;
    register int t102;
    register int t138;
    register int t116;
    register int t110;
    register int t106;
    register int t108;
    register int t109;
    register int t126;
    register int t122;
    register int t124;
    register int t125;
    register int t9;
    register int t10;
    int t29;
    int t54;
    int t79;
    register int t132;
    int R1000;

    R1000 = *(int *)((int)stk + 0);

    t0 = (((struct o4_int *)0xC16FCC0)->v);
    *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x0)) = ((((struct o0_int *)0xC16FCC0)->v));
    *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x4)) = t0;
    t2 = (((struct oC_int *)0xC16FCC0)->v);
    *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x8)) = ((((struct o8_int *)0xC16FCC0)->v));
    *(unsigned int *)(((((int)stk + 0) + 0x4) + 0xC)) = t2;
    t5 = (((struct o14_int *)0xC16FCC0)->v);
    *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x10)) = ((((struct o10_int *)0xC16FCC0)->v));
    *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x14)) = t5;
    t6 = (((struct o1C_int *)0xC16FCC0)->v);
    *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x18)) = ((((struct o18_int *)0xC16FCC0)->v));
    *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x1C)) = t6;
    if ((((*(int *)0xC300D38) & 1) != 0) && ((t9 = *(int *)0xC300C14, t9 == 0) || (t10 = *(int *)0xC300CF0, t10 != 32))) {
        R1000 = 0x0;
        if ((unsigned int)0x0 < (unsigned int)a4) {
            t11 = 0xC2D0C4C;
            for (;;) {
                kmiMemCopy4((*(int *)((t11 + 0x0))), (((int)stk + 0) + 0x4), 0x20);
                t14 = R1000;
                R1000 = (t14 + 0x1);
                t11 = (t11 + 0x14);
                if ((unsigned int)(t14 + 0x1) >= (unsigned int)a4) {
                    break;
                }
            }
        }
        (((struct o0_uint *)0xC2D0CA8)->v) = 0x8;
    }
    if (((*(int *)0xC300D38) & 2) != 0) {
        *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x0)) = 0x81000000;
        if (((*(int *)0xC300C14) != 0) && (t29 = *(int *)0xC300CF0, t29 == 33)) {
        } else {
            R1000 = 0x0;
            if ((unsigned int)0x0 < (unsigned int)a4) {
                t30 = 0xC2D0C4C;
                for (;;) {
                    kmiMemCopy4((*(int *)((t30 + 0x4))), (((int)stk + 0) + 0x4), 0x20);
                    t33 = R1000;
                    R1000 = (t33 + 0x1);
                    t30 = (t30 + 0x14);
                    if ((unsigned int)(t33 + 0x1) >= (unsigned int)a4) {
                        break;
                    }
                }
            }
            (((struct o4_uint *)0xC2D0CA8)->v) = 0x8;
        }
    }
    if (((*(int *)0xC300D38) & 4) != 0) {
        *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x0)) = 0x82000000;
        if (((*(int *)0xC300C14) != 0) && (t54 = *(int *)0xC300CF0, t54 == 34)) {
        } else {
            R1000 = 0x0;
            if ((unsigned int)0x0 < (unsigned int)a4) {
                t55 = 0xC2D0C4C;
                for (;;) {
                    kmiMemCopy4((*(int *)((t55 + 0x8))), (((int)stk + 0) + 0x4), 0x20);
                    t58 = R1000;
                    R1000 = (t58 + 0x1);
                    t55 = (t55 + 0x14);
                    if ((unsigned int)(t58 + 0x1) >= (unsigned int)a4) {
                        break;
                    }
                }
            }
            (((struct o8_uint *)0xC2D0CA8)->v) = 0x8;
        }
    }
    if (((*(int *)0xC300D38) & 0x8) != 0) {
        *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x0)) = 0x83000000;
        if (((*(int *)0xC300C14) != 0) && (t79 = *(int *)0xC300CF0, t79 == 35)) {
        } else {
            R1000 = 0x0;
            if ((unsigned int)0x0 < (unsigned int)a4) {
                t80 = 0xC2D0C4C;
                for (;;) {
                    kmiMemCopy4((*(int *)((t80 + 0xC))), (((int)stk + 0) + 0x4), 0x20);
                    t83 = R1000;
                    R1000 = (t83 + 0x1);
                    t80 = (t80 + 0x14);
                    if ((unsigned int)(t83 + 0x1) >= (unsigned int)a4) {
                        break;
                    }
                }
            }
            (((struct oC_uint *)0xC2D0CA8)->v) = 0x8;
        }
    }
    t102 = *(int *)0xC300D38;
    t138 = t102;
    if ((t102 & 16) != 0) {
        *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x0)) = 0x84000000;
        if ((*(int *)0xC300C14) != 0) {
            t110 = *(int *)0xC300CF0;
            t116 = t110;
            if (t110 != 36) {
                R1000 = 0x0;
                if ((unsigned int)0x0 < (unsigned int)a4) {
                    t106 = 0xC2D0C4C;
                    for (;;) {
                        t108 = kmiMemCopy4((*(int *)((t106 + 0x10))), (((int)stk + 0) + 0x4), 0x20);
                        t109 = R1000;
                        R1000 = (t109 + 0x1);
                        t106 = (t106 + 0x14);
                        if ((unsigned int)(t109 + 0x1) >= (unsigned int)a4) {
                            break;
                        }
                    }
                    t110 = t108;
                }
                (((struct o10_uint *)0xC2D0CA8)->v) = 0x8;
                t116 = t110;
            }
            t132 = t116;
        } else {
            R1000 = 0x0;
            t126 = 0xC300C14;
            if ((unsigned int)0x0 < (unsigned int)a4) {
                t122 = 0xC2D0C4C;
                for (;;) {
                    t124 = kmiMemCopy4((*(int *)((t122 + 0x10))), (((int)stk + 0) + 0x4), 0x20);
                    t125 = R1000;
                    R1000 = (t125 + 0x1);
                    t122 = (t122 + 0x14);
                    if ((unsigned int)(t125 + 0x1) >= (unsigned int)a4) {
                        break;
                    }
                }
                t126 = t124;
            }
            (((struct o10_uint *)0xC2D0CA8)->v) = 0x8;
            t132 = t126;
        }
        t138 = t132;
    }
    return t138;
}

int kmiGetDisplayData(int a4, int a5, int a6)
{
    int stk[6];
    register int t0;
    register int t2;
    register int t4;
    register int t10;
    register int t51;
    register int t85;
    int t7;
    register int t82;
    register int t32;

    t0 = (((struct o4_int *)0xC170E4C)->v);
    *(unsigned int *)((((int)stk + 0) + 0x0)) = ((((struct o0_int *)0xC170E4C)->v));
    *(unsigned int *)((((int)stk + 0) + 0x4)) = t0;
    t2 = (((struct oC_int *)0xC170E4C)->v);
    *(unsigned int *)((((int)stk + 0) + 0x8)) = ((((struct o8_int *)0xC170E4C)->v));
    *(unsigned int *)((((int)stk + 0) + 0xC)) = t2;
    t4 = (((struct o14_int *)0xC170E4C)->v);
    *(unsigned int *)((((int)stk + 0) + 0x10)) = ((((struct o10_int *)0xC170E4C)->v));
    *(unsigned int *)((((int)stk + 0) + 0x14)) = t4;
    t10 = 0x280;
    if ((((((struct o0_int *)0xC3008EC)->v)) != 1) && (t7 = (((struct o4_int *)0xC3008EC)->v), (t7 & 16) == 0)) {
        t10 = 0x140;
    }
    if (a5 == 1) {
        *(unsigned int *)0xC300B98 = ((((*(int *)0xC300B98) & 0xFFA0FFFF) | (a5 << 22)) | ((((unsigned int)((unsigned int)((unsigned int)((a6 + 0x1F) & 0xFFFFFFE0) >> 2) >> 2) >> 1) & 0x1F) << 16));
        t82 = ((a6 + 0x1F) & 0xFFFFFFE0);
    } else {
        t82 = 0x1E0;
        if (((((struct o0_int *)0xC3008EC)->v)) == 1) {
        } else {
            t82 = 0xF0;
            if (((((((struct o4_int *)0xC3008EC)->v)) & 0x1) != 1) && ((t32 = (((struct o4_int *)0xC3008EC)->v), (t32 & 0x2C) == 32) && (0x1 != 0))) {
            } else {
                if ((((((struct o4_int *)0xC3008EC)->v)) & 32) != 0) {
                    t82 = 0x1E0;
                    if ((((((struct o4_int *)0xC3008EC)->v)) & 0x42) == 66) {
                        t82 = (*(int *)(((((((struct o14_int *)0xC3008EC)->v)) << 2) + 0xC300DA8)));
                    }
                } else {
                    t82 = 0xF0;
                    if ((((((struct o4_int *)0xC3008EC)->v)) & 0x62) == 66) {
                        t51 = *(int *)(((((((struct o14_int *)0xC3008EC)->v)) << 2) + 0xC300DA8));
                        t82 = (((int)((unsigned int)((int)((unsigned int)t51 + (unsigned int)0x0)) + ((((int)0x0 > (int)t51)) ? 1u : 0u))) >> 1);
                    }
                }
            }
        }
    }
    (((struct o0_uint *)0xC2D0C08)->v) = t10;
    (((struct o4_uint *)0xC2D0C08)->v) = t82;
    t85 = a4;
    if (a4 != 0xFF) {
    } else {
        t85 = ((((struct o8_int *)0xC3008EC)->v));
    }
    (((struct o8_uint *)0xC2D0C08)->v) = ((unsigned int)((unsigned int)(*(int *)((((int)stk + 0) + (t85 << 2)))) >> 2) >> 1);
    (((struct o18_uint *)0xC2D0C08)->v) = ((((((struct o0_int *)0xC2D0C08)->v)) * ((((struct o4_int *)0xC2D0C08)->v))) * ((((struct o8_int *)0xC2D0C08)->v)));
    return 0x60;
}
