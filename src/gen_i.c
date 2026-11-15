/* Straight-line functions with calls and guards (batch gen_i): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o10B4_int { char p[0x10B4]; int v; };
struct o10C4_int { char p[0x10C4]; int v; };
struct o10DC_int { char p[0x10DC]; int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o2_short { char p[0x2]; short v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o30_float { char p[0x30]; float v; };
struct o30_int { char p[0x30]; int v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o38_int { char p[0x38]; int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o3C_int { char p[0x3C]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_int { char p[0x40]; int v; };
struct o48_short { char p[0x48]; short v; };
struct o4A_ushort { char p[0x4A]; unsigned short v; };
struct o4C_short { char p[0x4C]; short v; };
struct o63_uchar { char p[0x63]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_int { char p[0x84]; int v; };
struct o88_int { char p[0x88]; int v; };
struct oAC_int { char p[0xAC]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int ADXSTM_SetBufSize(int, int, int);
int FUN_0c018b1c(int);
int FUN_0c018b22(int, int);
int FUN_0c026ce6(void);
int FUN_0c038e3a(int, int, int, float, float, float, float, float);
int FUN_0c03f154(int);
int FUN_0c048fd6(int, float, float);
int FUN_0c04ba04(int);
int FUN_0c04ba42(int);
int FUN_0c05aa9a(int, int);
int FUN_0c05ab06(int, int);
int FUN_0c05b586(int);
int FUN_0c05b77e(int, int, int, float);
int FUN_0c05ce16(int, int, int, int, int, int);
int FUN_0c05f434(void);
int FUN_0c05f470(int, int, float, float);
int FUN_0c05f4c8(int);
int FUN_0c061e50(int);
int FUN_0c067b14(int, int, int, int, int, int, int, int, int);
int FUN_0c068304(int);
int FUN_0c068794(int);
int FUN_0c06a820(int, int, int);
int FUN_0c071920(int);
int FUN_0c072230(int, int);
int FUN_0c073010(void);
int FUN_0c073360(void);
int FUN_0c073a30(float, float, float);
int FUN_0c073a40(int);
int FUN_0c073a60(int);
float FUN_0c073b40(int, int);
int FUN_0c073c40(int, int, float);
float FUN_0c073e10(int);
int FUN_0c076250(float, float, float);
int FUN_0c07ada0(int);
int FUN_0c07b6c0(int, int);
int FUN_0c07c8be(int);
int FUN_0c07e3d0(int);
int FUN_0c07e57c(int);
int FUN_0c07e63e(int, int);
int FUN_0c07ff00(void);
int FUN_0c08f87c(int, int, int, int);
int FUN_0c08fc40(int);
int FUN_0c0962ac(int, int, int);
int FUN_0c14fd82(int, int);
int FUN_0c14ff0c(int);
int FUN_0c1500d2(int, int, int);
int FUN_0c1595e8(int, int, int, int);
int FUN_0c1616ce(int);
int FUN_0c1622c6(int, int, int, int, int);
int FUN_0c16243a(int, int);
int FUN_0c1624b8(int);
int FUN_0c16274a(int);
extern int FUN_0c16bab0();
int Put2DObjUp(int, float, float, float);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int _mvsto2b(int, int);
int adxf_ChkPrmPt(int);
int camSetTarget(int, int);
int kmiDMAtoTARequest(int, int, int, int, int);
int kmiDefaultInterruptHandler(int);
int kmiFBallocQueue(int, int, int, int);
int kmiFBallocSub(int, int);
int kmiFBfree(int);
int kmiMIPallocSub(int, int, int);
int kmiTXalloc(int, int);
int kmiVQFBfree(int);
int kmiVQalloc(int);
int kmyConvertAddress64to32(int);
int kmytex_ABSalloc(int, int, int, int, int, int);
int memcpy(int, int, int);
int memset(int, int, int);
int nlAddVector(int, int);
int nlCloseEvent(int);
int nlGetMatrix(int);
float nlLength(int, int);
int nlMultiMatrix(int);
int nlObjPutUseViewMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlQuickInvertMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAxe(int, int);
int nlSubVector3op(int, int, int);
int nlUnitMatrix(void);
int nl_set_cnv_proj_pers(void);
int strlen(int);
int strncpy(int, int, int);
int syChainAddHandler(int, int, int, int);
int syG2Write(int, int, int, int, int, int);
int syMmuAddEntry(int, int, int);
int vmsfs_fclose(int, int);
int vmsfs_fgetsize(int, int);
int vmsfs_fopen(int, int, int);
int vmsfs_fread1(int, int);
int vmsfs_load_file(int a4, int a5, int a6, int a7);
int _mult(int a4, int a5, int a6);
int FUN_0c068ed2(int a4);
int nlSysMetricsGetFrameBufferUser(int a4);
int FUN_0c05ef18(void);
int FUN_0c0670ac(int a4, int a5, int a6, int a7);
int FUN_0c08e9a6(int a4, int a5, int a6, int a7);
int syMalloc_default_malloc(int a4);
int FUN_0c14f7a8(int a4, int a5, int a6, int a7);
int ADXAMP_Create(int a4, int a5, int a6);
int FUN_0c05f9b0(float f4);
int FUN_0c08fd60(int a4, int a5);
int kmiMIPalloc(int a4, int a5);
int kmiReqRestOfDMA(int a4);
int kmCreateCombinedTextureSurface(int a4, int a5, int a6, int a7, int a8);
int FUN_0c16172e(int a4, int a5, int a6);
int syIntAdrChk_putchar(int a4, int a5);
float FUN_0c020dbc(int a4, int a5, int a6, int a7, int a8);
void FUN_0c0391d2(int a4, int a5, int a6, float f4, float f5, float f6, float f7, float f8);
int nlFrustum_L(float f4, float f5, float f6, float f7, float f8, float f9);
int init_sub(void);
int mpdrv_check_port(int a4);
void FUN_0c16bbd8(int a4, int a5);
int FUN_0c04f660(void);
int FUN_0c05cf54(int a4, int a5);
float FUN_0c0623b8(int a4, float f4, float f5, float f6);
int kmiFBalloc(int a4, int a5);
int sySqInit(void);
float FUN_0c059858(void);
int FUN_0c05f788(int a4, int a5);
int FUN_0c067718(int a4);
int FUN_0c06b3d8(int a4, int a5, int a6, int a7);
int FUN_0c07f206(int a4, int a5, int a6);
void gdFsTrans32(int a4, int a5, int a6, int a7);
int Check2DAreaEdge(int a4, int a5, int a6);
float CalcHomingAngle(int a4);
int ExecEffectSpray(int a4);
int FUN_0c0558bc(void);
int FUN_0c05c878(int a4, int a5, float f4);
int FUN_0c06488c(int a4, int a5, int a6, int a7, float f4);
int FUN_0c07c1a6(int a4);
int kmSetPixelClipping(int a4, int a5, int a6, int a7);

int vmsfs_load_file(int a4, int a5, int a6, int a7)
{
    int stk[10];
    register int t3;
    register int t7;
    register int t9;
    register int t19;
    register int t27;
    register int t29;
    register int t39;

    *(unsigned int *)(((int)stk + 36)) = a4;
    *(unsigned int *)(((int)stk + 32)) = a5;
    *(unsigned int *)(((int)stk + 28)) = a6;
    *(unsigned int *)(((int)stk + 24)) = a7;
    if ((*(int *)(((int)stk + 24))) == 0) {
        t3 = vmsfs_fgetsize((*(int *)(((int)stk + 36))), (*(int *)(((int)stk + 32))));
        *(unsigned int *)(((int)stk + 12)) = t3;
        if ((int)t3 < 0) {
            return t3;
        }
        *(unsigned int *)(((int)stk + 24)) = (*(int *)(((int)stk + 12)));
        t7 = vmsfs_fopen((*(int *)(((int)stk + 36))), (*(int *)(((int)stk + 32))), (((int)stk + 0) + 0x4));
        *(unsigned int *)(((int)stk + 16)) = t7;
        if ((int)t7 < 0) {
            return t7;
        }
        *(unsigned int *)(((int)stk + 8)) = (*(int *)(((int)stk + 28)));
        t9 = *(int *)(((int)stk + 36));
        *(unsigned int *)(((int)stk + 0)) = ((t9 * 0x154) + 0xC2C8D2C);
        *(unsigned int *)((((t9 * 0x154) + 0xC2C8D2C) + 0x30)) = 0x1;
        *(unsigned int *)(((*(int *)(((int)stk + 0))) + 0x34)) = (*(int *)(((int)stk + 24)));
        *(unsigned int *)(((int)stk + 20)) = 0x0;
        for (;;) {
            if ((unsigned int)(*(int *)(((int)stk + 20))) >= (unsigned int)(*(int *)(((int)stk + 24)))) {
                *(unsigned int *)(((int)stk + 16)) = 0x0;
                vmsfs_fclose((*(int *)(((int)stk + 4))), 0x0);
                return (*(int *)(((int)stk + 16)));
            }
            t19 = vmsfs_fread1((*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 8))));
            *(unsigned int *)(((int)stk + 16)) = t19;
            if ((int)t19 < 0) {
                break;
            }
            *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x200);
            *(unsigned int *)(((int)stk + 20)) = ((*(int *)(((int)stk + 20))) + 0x1);
        }
    } else {
        t27 = vmsfs_fopen((*(int *)(((int)stk + 36))), (*(int *)(((int)stk + 32))), (((int)stk + 0) + 0x4));
        *(unsigned int *)(((int)stk + 16)) = t27;
        if ((int)t27 < 0) {
            return t27;
        }
        *(unsigned int *)(((int)stk + 8)) = (*(int *)(((int)stk + 28)));
        t29 = *(int *)(((int)stk + 36));
        *(unsigned int *)(((int)stk + 0)) = ((t29 * 0x154) + 0xC2C8D2C);
        *(unsigned int *)((((t29 * 0x154) + 0xC2C8D2C) + 0x30)) = 0x1;
        *(unsigned int *)(((*(int *)(((int)stk + 0))) + 0x34)) = (*(int *)(((int)stk + 24)));
        *(unsigned int *)(((int)stk + 20)) = 0x0;
        for (;;) {
            if ((unsigned int)(*(int *)(((int)stk + 20))) >= (unsigned int)(*(int *)(((int)stk + 24)))) {
                *(unsigned int *)(((int)stk + 16)) = 0x0;
                vmsfs_fclose((*(int *)(((int)stk + 4))), 0x0);
                return (*(int *)(((int)stk + 16)));
            }
            t39 = vmsfs_fread1((*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 8))));
            *(unsigned int *)(((int)stk + 16)) = t39;
            if ((int)t39 < 0) {
                break;
            }
            *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x200);
            *(unsigned int *)(((int)stk + 20)) = ((*(int *)(((int)stk + 20))) + 0x1);
        }
    }
    vmsfs_fclose((*(int *)(((int)stk + 4))), 0x0);
    return (*(int *)(((int)stk + 16)));
}

int _mult(int a4, int a5, int a6)
{
    int stk[6];
    register int t1;
    register int t15;
    register int t6;
    register int t7;
    register int t2;

    *(unsigned int *)(((int)stk + 4)) = a4;
    memset(a6, 0x0, 0x10);
    t1 = 0x7;
    for (;;) {
        t15 = (short)t1;
        if ((unsigned char)(*(signed char *)((a5 + (short)t1))) != 0) {
            memset((((int)stk + 0) + 0x8), 0x0, 0x10);
            t2 = 0x7;
            for (;;) {
                t6 = *(signed char *)(((short)t2 + (*(int *)(((int)stk + 4)))));
                t7 = *(signed char *)(((short)t1 + a5));
                *(unsigned short *)(((int)stk + 0)) = (unsigned char)(*(signed char *)(((((short)t1 + (short)t2) + (((int)stk + 0) + 0x8)) + 0x1)));
                *(unsigned short *)(((int)stk + 0)) = ((*(short *)(((int)stk + 0))) + ((unsigned short)(unsigned char)t6 * (unsigned short)(unsigned char)t7));
                _mvsto2b((((short)t1 + (short)t2) + (((int)stk + 0) + 0x8)), ((int)stk + 0));
                t2 = (t2 - 1);
                if ((int)(short)t2 < 0) {
                    break;
                }
            }
            if ((short)t1 == 7) {
                t15 = (memcpy(((short)t1 + a6), ((short)t1 + (((int)stk + 0) + 0x8)), 0x9));
            } else {
                t15 = (FUN_0c0962ac(((short)t1 + a6), ((short)t1 + (((int)stk + 0) + 0x8)), 0x9));
            }
        }
        t1 = (t1 - 1);
        if ((int)(short)t1 < 0) {
            break;
        }
    }
    return t15;
}

int FUN_0c068ed2(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;

    t3 = 0x0;
    for (;;) {
        if ((int)t3 >= (int)(*(int *)((a4 + 0x1C)))) {
            if (0x0 != 0) {
                t4 = (FUN_0c061e50((a4 + 0x14)));
                t5 = 0xC019C6C;
                return nlCloseEvent(a4);
            }
            return t4;
        }
        t6 = *(int *)(((a4 + 0x14) + 0x0));
        t4 = 0xFE;
        t4 = (*(signed char *)(((t6 + (t3 << 8)) + t4)));
        t7 = 0x1;
        if (((t4 & 64) != 0) && (t0 = 0x2, t1 = ((t4 & 64) == 0), t4 = t0, t4 = (t4 + 0x7E), t2 = *(int *)(((t6 + (t3 << 8)) + t4)), (int)t2 >= (int)t0)) {
        } else {
            t4 = (*(int *)(((a4 + 0x14) + 0xC)));
            t6 = 0x0;
            if (t4 == 11) {
                t5 = 0x8;
                t4 = t5;
                t4 = (t4 + 0x78);
                t0 = (*(int *)((((t3 << 8) + (*(int *)(((a4 + 0x14) + 0x0)))) + t4)));
                t6 = 0x0;
                if ((int)t0 >= (int)t5) {
                    t6 = 0x1;
                }
            }
            t7 = t6;
        }
        if (t7 != 0) {
            break;
        }
        t3 = (t3 + 0x1);
    }
    if (0x1 != 0) {
        FUN_0c061e50((a4 + 0x14));
        return nlCloseEvent(a4);
    }
    return t4;
}

int nlSysMetricsGetFrameBufferUser(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t0 = *(int *)0xC2BB570;
    t1 = *(int *)0xC2BB520;
    t2 = (((struct o0_short *)0xC2BF8F0)->v);
    t3 = (t2 + t2);
    if ((int)t1 <= (int)0x3) {
    } else {
        if ((int)t1 <= (int)0x4) {
            t4 = ((t2 << 1) + t2);
        } else {
            if ((int)t1 > (int)0x5) {
                for (;;) {
                }
            }
            t4 = (t2 << 2);
        }
        t3 = t4;
    }
    t2 = (int)((unsigned int)((int)((unsigned int)t3 + (unsigned int)0x0)) + ((((int)0x0 > (int)t3)) ? 1u : 0u));
    t3 = 0x1000;
    t4 = (t0 + 0xA5000000);
    t0 = t1;
    t1 = 0x0;
    t5 = (a4 + 0x1000);
    for (;;) {
        t6 = (((struct o2_short *)0xC2BF8F0)->v);
        if ((int)t1 >= (int)t6) {
            break;
        }
        t0 = 0x0;
        if ((int)(t2 >> 1) > 0) {
            for (;;) {
                t3 = (*(short *)((t4 + 0x0)));
                t0 = (t0 + 0x5);
                t4 = (t4 + 0xA);
                *(unsigned short *)((t5 + 0x0)) = t3;
                t5 = (t5 + 0x2);
                if ((int)t0 >= (int)(t2 >> 1)) {
                    break;
                }
            }
        }
        t1 = (t1 + 0x5);
        t4 = (t4 + 0x1400);
    }
    return t6;
}

int FUN_0c05ef18(void)
{
    FUN_0c073360();
    FUN_0c073a60(0xC2B9738);
    nlPushMatrix(0x0);
    FUN_0c073a60(0xC2B9744);
    FUN_0c05b586(0xC2B9750);
    nlGetMatrix(0xC1386E8);
    FUN_0c073a30(((((struct o0_float *)0xC05F01C)->v)), 0.0f, 0.0f);
    FUN_0c05b586(0xC2B975C);
    nlGetMatrix(0xC138728);
    FUN_0c073a30(((((struct o4_float *)0xC05F01C)->v)), 0.0f, 0.0f);
    FUN_0c05b586(0xC2B9768);
    nlGetMatrix(0xC138768);
    FUN_0c073a30(((((struct o8_float *)0xC05F01C)->v)), 0.0f, 0.0f);
    FUN_0c05b586(0xC2B9774);
    nlGetMatrix(0xC1387A8);
    nlPopMatrix(0x1);
    FUN_0c073a60(0xC2B9780);
    FUN_0c05b586(0xC2B978C);
    nlGetMatrix(0xC1386A8);
    return nlPopMatrix(0x1);
}

int FUN_0c0670ac(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    (((struct o80_uint *)(a4))->v) = 0x2;
    t1 = 0x0;
    if ((int)(*(int *)((((((struct oAC_int *)(a4))->v)) + 0x8))) > (int)0x1) {
        t1 = 0x1;
    }
    t2 = *(int *)0xC1EC740;
    if (t1 != 0) {
        t3 = 0x2;
        if (((*(int *)((((((struct oAC_int *)(a4))->v)) + 0x4))) == 2) && (t0 = (((struct o88_int *)(a4))->v), t0 == 5)) {
        } else {
            t3 = ((((struct o84_int *)(a4))->v));
        }
        t0 = ((int (*)(int, int, int, int))((*(int *)((((t2 << 2) + 0xC110374) + 0x0)))))(0x2, t1, a4, a7);
        t0 = (*(int *)0xC13B364);
        t4 = (t3 << 2);
    } else {
        t0 = 0xC110040;
        t4 = (((((int (*)(int, int, int, int))((*(int *)((((t2 << 2) + 0xC110374) + 0x0)))))(0x2, t1, a4, a7)) & 0x1) << 2);
    }
    FUN_0c05f470(a4, (*(int *)((t4 + t0))), 0.0f, 0.0f);
    if (((((struct o84_int *)(a4))->v)) == 0) {
        return FUN_0c06a820(0x1, (*(int *)((a4 + 0x10))), (*(int *)((((((struct oAC_int *)(a4))->v)) + 0x4))));
    }
    return 0x84;
}

int FUN_0c08e9a6(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t7;

    *(unsigned int *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 8)) = (((*(int *)(((int)stk + 12))) * 0x154) + 0xC2C8D2C);
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 4))) >= (int)((*(int *)(((*(int *)(((*(int *)(((int)stk + 8))) + 0x1C))) + 0x0))) + 0x1)) {
            return 0x0;
        }
        t7 = FUN_0c08f87c((*(int *)(((int)stk + 12))), (*(int *)(((int)stk + 4))), a6, a7);
        *(unsigned int *)(((int)stk + 0)) = (unsigned short)t7;
        if (((unsigned short)t7 != 0xFFFC) && (((unsigned short)t7 != 0xFFFF) && ((unsigned short)t7 != 0xFFFA))) {
            if ((int)(*(int *)(((int)stk + 4))) < (int)(*(int *)(((*(int *)(((*(int *)(((int)stk + 8))) + 0x1C))) + 0x30)))) {
                if ((int)(*(int *)(((int)stk + 0))) >= (int)(*(int *)(((*(int *)(((*(int *)(((int)stk + 8))) + 0x1C))) + 0x30)))) {
                    break;
                }
                *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x1);
                continue;
            }
            if ((int)(*(int *)(((int)stk + 0))) >= (int)((*(int *)(((*(int *)(((*(int *)(((int)stk + 8))) + 0x1C))) + 0x0))) + 0x1)) {
                return 0xFFFFFFFF;
            }
            *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x1);
            continue;
        }
        *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x1);
    }
    return 0xFFFFFFFF;
}

int syMalloc_default_malloc(int a4)
{
    int stk[1];
    register int t1;
    register int t2;
    register int t5;
    register int t6;
    register int t10;
    register int t16;

    *(unsigned short *)(((int)stk + 0)) = (_builtin_get_imask());
    _builtin_set_imask(0xF);
    t1 = *(short *)(((int)stk + 0));
    t2 = *(int *)0xC2D12D8;
    t5 = (*(int *)((t2 + 0x0)));
    t6 = t2;
    for (;;) {
        if ((unsigned int)(*(int *)((t5 + 0x4))) >= (unsigned int)(((unsigned int)((unsigned int)((unsigned int)(a4 + 0x1F) >> 2) >> 2) >> 1) + 0x1)) {
            break;
        }
        if (t5 == t2) {
            _builtin_set_imask(((unsigned int)((((unsigned short)t1 & 0xF) << 2) << 2) >> 4));
            return 0x0;
        }
        t6 = t5;
        t5 = (*(int *)((t5 + 0x0)));
    }
    t10 = *(int *)((t5 + 0x4));
    if (t10 == (((unsigned int)((unsigned int)((unsigned int)(a4 + 0x1F) >> 2) >> 2) >> 1) + 0x1)) {
        *(unsigned int *)((t6 + 0x0)) = (*(int *)((t5 + 0x0)));
        t16 = t5;
    } else {
        *(unsigned int *)((t5 + 0x4)) = (t10 - (((unsigned int)((unsigned int)((unsigned int)(a4 + 0x1F) >> 2) >> 2) >> 1) + 0x1));
        *(unsigned int *)(((t5 + ((((t10 - (((unsigned int)((unsigned int)((unsigned int)(a4 + 0x1F) >> 2) >> 2) >> 1) + 0x1)) << 2) << 2) << 1)) + 0x4)) = (((unsigned int)((unsigned int)((unsigned int)(a4 + 0x1F) >> 2) >> 2) >> 1) + 0x1);
        t16 = (t5 + ((((t10 - (((unsigned int)((unsigned int)((unsigned int)(a4 + 0x1F) >> 2) >> 2) >> 1) + 0x1)) << 2) << 2) << 1));
    }
    *(unsigned int *)0xC2D12D8 = t6;
    _builtin_set_imask(((unsigned int)((((unsigned short)t1 & 0xF) << 2) << 2) >> 4));
    return (t16 + 0x20);
}

int FUN_0c14f7a8(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = adxf_ChkPrmPt(a4);
    t1 = t0;
    if ((int)t0 < 0) {
    } else {
        if ((int)((((struct o8_int *)0xC2D361C)->v)) >= 0) {
            FUN_0c1616ce(0xC170684);
            t0 = 0xFFFFFFFF;
        } else {
            t0 = FUN_0c14fd82(a5, a6);
            (((struct o4_uint *)0xC2D361C)->v) = t0;
            if (t0 == 0) {
                FUN_0c1616ce(0xC1706BC);
                t0 = 0xFFFFFFFF;
            } else {
                (((struct o8_uint *)0xC2D361C)->v) = a4;
                (((struct o0_uint *)0xC2D361C)->v) = 0x0;
                memset(a7, 0x0, 0x40);
                *(unsigned int *)(((a4 << 2) + 0xC2D21F4)) = a7;
                *(unsigned int *)((a7 + 0x0)) = 0x0;
                strncpy((a7 + 0x10), a5, 0x28);
                *(unsigned int *)((a7 + 0x38)) = a6;
                *(unsigned char *)((a7 + 0xE)) = 0x0;
                (((struct o0_uint *)0xC2D56A8)->v) = 0xC2D3640;
                (((struct o4_uint *)0xC2D56A8)->v) = 0xC2D3640;
                t0 = FUN_0c1500d2(((((struct o4_int *)0xC2D361C)->v)), 0x1, 0xC2D3640);
                if ((int)t0 < 0) {
                    FUN_0c14ff0c(((((struct o4_int *)0xC2D361C)->v)));
                } else {
                    *(unsigned int *)((a7 + 0x8)) = 0x0;
                    t0 = 0x0;
                }
            }
        }
        t1 = t0;
    }
    return t1;
}

int ADXAMP_Create(int a4, int a5, int a6)
{
    register int t0;
    register int t11;
    register int t12;
    register float u21;
    register int t23;

    t0 = 0x0;
    for (;;) {
        if ((*(signed char *)(((((((t0 << 1) + t0) << 2) << 2) + 0xC302820) + 0x0))) != 0) {
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x8) {
                break;
            }
            continue;
        }
        break;
    }
    if (t0 == 8) {
        t23 = 0x0;
    } else {
        ADXCRS_Lock();
        *(unsigned char *)(((((((t0 << 1) + t0) << 2) << 2) + 0xC302820) + 0x2)) = a4;
        if ((int)a4 > 0) {
            t11 = 0x0;
            t12 = 0x0;
            for (;;) {
                t12 = (t12 + 0x1);
                *(unsigned int *)(((((((((t0 << 1) + t0) << 2) << 2) + 0xC302820) + 0x4) + t11) + 0x0)) = (*(int *)((t11 + a5)));
                *(unsigned int *)(((((((((t0 << 1) + t0) << 2) << 2) + 0xC302820) + 0xC) + t11) + 0x0)) = (*(int *)((t11 + a6)));
                *(unsigned int *)(((((((((t0 << 1) + t0) << 2) << 2) + 0xC302820) + 0x14) + t11) + 0x0)) = 0x0;
                t11 = (t11 + 0x4);
                if ((int)t12 >= (int)a4) {
                    break;
                }
            }
        }
        *(unsigned char *)(((((((t0 << 1) + t0) << 2) << 2) + 0xC302820) + 0x1)) = 0x0;
        *(unsigned int *)(((((((t0 << 1) + t0) << 2) << 2) + 0xC302820) + 0x2C)) = 0x0;
        *(unsigned int *)(((((((t0 << 1) + t0) << 2) << 2) + 0xC302820) + 0x1C)) = a4;
        *(unsigned int *)(((((((t0 << 1) + t0) << 2) << 2) + 0xC302820) + 0x20)) = 0xAC44;
        u21 = *(float *)0xC161060;
        (((struct o24_float *)((((((t0 << 1) + t0) << 2) << 2) + 0xC302820)))->v) = u21;
        (((struct o28_float *)((((((t0 << 1) + t0) << 2) << 2) + 0xC302820)))->v) = u21;
        *(unsigned char *)(((((((t0 << 1) + t0) << 2) << 2) + 0xC302820) + 0x0)) = 0x1;
        ADXCRS_Unlock();
        t23 = (((((t0 << 1) + t0) << 2) << 2) + 0xC302820);
    }
    return t23;
}

int FUN_0c05f9b0(float f4)
{
    register float u0;
    register float u1;

    u0 = ((f4 * 360.0f) / 60.0f);
    u1 = ((u0 * 65536.0f) / 360.0f);
    nlPushMatrix(0xC17596C);
    FUN_0c073a30(0.0f, 2.8276f, 6.08330011f);
    nlRotateAX(((int)(u1 + 0.5f) & 0xFFFF));
    nlObjPutUseViewMatrix((*(int *)(((*(int *)0xC17592C) + 0x20))));
    FUN_0c073a30(2.29999995f, 1.42999995f, 0.0f);
    nlPushMatrix(0x0);
    nlRotateAX((-((int)(u1 + 0.5f) & 0xFFFF)));
    nlObjPutUseViewMatrix((*(int *)(((*(int *)0xC17592C) + 0x24))));
    nlPopMatrix(0x1);
    FUN_0c073a30(-4.5999999f, -2.8599999f, 0.0f);
    nlRotateAX((-((int)(u1 + 0.5f) & 0xFFFF)));
    nlObjPutUseViewMatrix((*(int *)(((*(int *)0xC17592C) + 0x28))));
    return nlPopMatrix(0x1);
}

int FUN_0c08fd60(int a4, int a5)
{
    register int t0;

    t0 = FUN_0c08fc40((unsigned char)(*(signed char *)((a5 + 0x0))));
    *(unsigned short *)((a4 + 0x0)) = (((unsigned short)t0 * (unsigned short)0x64) + (FUN_0c08fc40((unsigned char)(*(signed char *)((a5 + 0x1))))));
    *(unsigned char *)(((a4 + 0x2) + 0x0)) = (FUN_0c08fc40((unsigned char)(*(signed char *)((a5 + 0x2)))));
    *(unsigned char *)(((a4 + 0x3) + 0x0)) = (FUN_0c08fc40((unsigned char)(*(signed char *)((a5 + 0x3)))));
    *(unsigned char *)(((a4 + 0x4) + 0x0)) = (FUN_0c08fc40((unsigned char)(*(signed char *)((a5 + 0x4)))));
    *(unsigned char *)(((a4 + 0x5) + 0x0)) = (FUN_0c08fc40((unsigned char)(*(signed char *)((a5 + 0x5)))));
    *(unsigned char *)(((a4 + 0x6) + 0x0)) = (FUN_0c08fc40((unsigned char)(*(signed char *)((a5 + 0x6)))));
    t0 = *(signed char *)((0xC1182B8 + ((unsigned char)(*(signed char *)((a5 + 0x7))) & 0x7)));
    *(unsigned char *)((a4 + 0x7)) = t0;
    return t0;
}

int kmiMIPalloc(int a4, int a5)
{
    int stk[12];
    register int t0;
    register int t2;
    register int t5;
    register int t8;
    register int t12;
    register int t13;
    register int t23;

    t0 = ((~(((~a4) + 0x1) & 0x1F)) + 0x1);
    if ((int)a4 >= 0) {
        t0 = (a4 & 0x1F);
    }
    t2 = a4;
    if (t0 != 0) {
        t2 = (a4 + (0x20 - t0));
    }
    t5 = kmiMIPallocSub(0x0, t2, a5);
    t8 = t5;
    if (t5 == 0) {
        t8 = (kmiMIPallocSub(0x1, t2, a5));
    }
    if (t8 != 0) {
        *(unsigned int *)((a5 + 0x1C)) = (*(int *)((t8 + 0xC)));
        *(unsigned int *)((t8 + 0x14)) = a5;
        *(unsigned short *)((t8 + 0x0)) = ((*(short *)((t8 + 0x0))) | 0x4);
        t23 = 0x0;
    } else {
        t12 = kmiFBallocSub(t2, a5);
        t23 = 0x3;
        if (t12 == -1) {
        } else {
            *(int *)((int)stk + 4) = 0x1;
            *(int *)((int)stk + 0) = 0x1;
            t13 = kmytex_ABSalloc(0x0, t12, t2, a5, 0x1, 0x1);
            t23 = t13;
            if (t13 == 0) {
                *(int *)((int)stk + 4) = 0x0;
                *(int *)((int)stk + 0) = 0x1;
                t23 = (kmytex_ABSalloc(0x1, ((*(int *)0xC173DE0) + t12), t2, (((int)stk + 0) + 0x8), 0x1, 0x0));
            }
        }
    }
    return t23;
}

int kmiReqRestOfDMA(int a4)
{
    int stk[3];
    register int t0;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t15;
    register int t19;
    register int t1;
    int t9;
    register int t30;
    register int t31;
    register int t32;
    register int t13;
    register int t14;

    *(unsigned int *)(((int)stk + 8)) = a4;
    t0 = *(int *)0xC300C2C;
    t2 = 0xC300C2C;
    t3 = t0;
    t4 = (t0 << 2);
    t5 = (0xC300C50 + (t0 << 2));
    t6 = (0xC300CA0 + (t0 << 2));
    t7 = 0x0;
    for (;;) {
        if (((*(int *)((t6 + 0x0))) != 0) && (t9 = *(int *)(((int)stk + 8)), t2 = t9, t2 != t7)) {
            t1 = ((((struct o0_int *)0xC300D04)->v));
            if ((t1 == 1) && ((t13 = (t1 == 1), t1 = t7, t1 == 1) || (t14 = (t1 == 1), t1 = t7, t1 == 3))) {
                t2 = 0xC300D08;
                t15 = *(int *)((t2 + 0x0));
                t1 = t2;
                t2 = t7;
                t2 = (t2 << 16);
                t2 = (t2 << 8);
                *(unsigned int *)((t15 + 0x0)) = (((*(int *)(((*(int *)((t1 + 0x0))) + 0x0))) & 0xF0FFFFFF) | t2);
                for (;;) {
                    t2 = ((int)stk + 4);
                    t19 = t2;
                    *(int *)((int)stk + 0) = t19;
                    t2 = 0xC300D08;
                    t4 = (*(int *)((t2 + 0x0)));
                    t3 = 0x10000000;
                    t1 = (kmiDMAtoTARequest(t3, t4, ((((struct o8_int *)0xC300D04)->v)), 0x10, t19));
                    if (t1 != 0x100) {
                        break;
                    }
                }
                for (;;) {
                    *(int *)((int)stk + 0) = ((int)stk + 4);
                    t4 = (*(int *)((t5 + 0x0)));
                    t3 = 0x10000000;
                    t1 = (kmiDMAtoTARequest(t3, t4, ((*(int *)((t6 + 0x0))) + 0x20), 0x10, ((int)stk + 4)));
                    if (t1 != 0x100) {
                        break;
                    }
                }
            } else {
                for (;;) {
                    *(int *)((int)stk + 0) = ((int)stk + 4);
                    t4 = (*(int *)((t5 + 0x0)));
                    t3 = 0x10000000;
                    t1 = (kmiDMAtoTARequest(t3, t4, ((*(int *)((t6 + 0x0))) + 0x20), 0x10, ((int)stk + 4)));
                    if (t1 != 0x100) {
                        break;
                    }
                }
            }
        } else {
            t30 = t2;
            t31 = t3;
            t32 = t4;
        }
        t2 = t30;
        t3 = t31;
        t4 = t32;
        t7 = (t7 + 0x1);
        t6 = (t6 + 0x10);
        t5 = (t5 + 0x10);
        if ((unsigned int)t7 >= (unsigned int)0x5) {
            break;
        }
    }
    return t1;
}

int kmCreateCombinedTextureSurface(int a4, int a5, int a6, int a7, int a8)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = FUN_0c1595e8(a4, a6, a7, a8);
    t1 = t0;
    if (t0 != 0) {
    } else {
        *(unsigned int *)((a5 + 0x0)) = (*(int *)((a4 + 0x0)));
        *(unsigned int *)((a5 + 0x4)) = (*(int *)((a4 + 0x4)));
        *(unsigned int *)((a5 + 0x8)) = (*(int *)((a4 + 0x8)));
        *(unsigned int *)((a5 + 0xC)) = (*(int *)((a4 + 0xC)));
        *(unsigned int *)((a5 + 0x10)) = (*(int *)((a4 + 0x10)));
        *(unsigned int *)((a5 + 0x14)) = (*(int *)((a4 + 0x14)));
        *(unsigned int *)((a5 + 0x18)) = (*(int *)((a4 + 0x18)));
        if ((unsigned short)(*(int *)((a4 + 0x0))) == 3) {
            t0 = kmiVQalloc(a4);
            if (t0 != 3) {
                t2 = kmiVQalloc(a5);
                if (t2 == 3) {
                    kmiVQFBfree(a4);
                    kmiDefaultInterruptHandler(0x3);
                }
                t3 = t2;
            } else {
                kmiDefaultInterruptHandler(0x3);
                t3 = t0;
            }
            t0 = t3;
        } else {
            t2 = kmiTXalloc((*(int *)((a4 + 0x14))), a4);
            if (t2 == 3) {
                kmiDefaultInterruptHandler(0x3);
                t3 = t2;
            } else {
                t2 = kmiTXalloc((*(int *)((a5 + 0x14))), a5);
                if (t2 == 3) {
                    kmiFBfree((*(int *)((a4 + 0x1C))));
                    kmiDefaultInterruptHandler(0x3);
                }
                t3 = t2;
            }
            t0 = t3;
        }
        t1 = t0;
    }
    return t1;
}

int FUN_0c16172e(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    if ((unsigned int)a5 < (unsigned int)(a5 + 0x20)) {
        t0 = a4;
        t1 = a5;
        t2 = a5;
        for (;;) {
            *(unsigned char *)((t1 + 0x0)) = ((int)((int)t0 % (int)0xA));
            t0 = ((int)((int)t0 / (int)0xA));
            if (t0 == 0) {
                break;
            }
            t1 = (t1 + 0x1);
            t2 = (t2 + 0x1);
            if ((unsigned int)t1 >= (unsigned int)(a5 + 0x20)) {
                t0 = 0xC302AA0;
                t0 = (strlen(t0));
                if ((int)t0 < (int)(a6 - 1)) {
                    t1 = t0;
                } else {
                    t1 = (a6 - 1);
                }
                t0 = 0x0;
                if ((int)t1 > 0) {
                    for (;;) {
                        t3 = t0;
                        t4 = (((t1 - t0) - 1) + 0xC302AA0);
                        t0 = (t0 + 0x1);
                        *(unsigned char *)((a5 + t3)) = (*(signed char *)((t4 + 0x0)));
                        if ((int)t0 >= (int)t1) {
                            break;
                        }
                    }
                }
                *(unsigned char *)((a5 + t0)) = 0x0;
                return t0;
            }
        }
        *(unsigned char *)((t2 + 0x0)) = 0x0;
    }
    t0 = strlen(0xC302AA0);
    t1 = (a6 - 1);
    if ((int)t0 < (int)(a6 - 1)) {
        t1 = t0;
    }
    t0 = 0x0;
    if ((int)t1 > 0) {
        t2 = 0x0;
        for (;;) {
            t3 = t2;
            t4 = (((t1 - t2) - 1) + 0xC302AA0);
            t2 = (t2 + 0x1);
            *(unsigned char *)((a5 + t3)) = (*(signed char *)((t4 + 0x0)));
            if ((int)t2 >= (int)t1) {
                break;
            }
        }
        t0 = t2;
    }
    *(unsigned char *)((a5 + t0)) = 0x0;
    return t0;
}

int syIntAdrChk_putchar(int a4, int a5)
{
    register int t0;
    register int t1;

    t0 = (((struct o8_int *)0xC30BC04)->v);
    if (t0 != 0) {
        t1 = t0;
        if (t0 == 1) {
            for (;;) {
                if (((unsigned char)(*(signed char *)(((((((struct o0_int *)0xC30BC04)->v)) + 0x10) + 0x0))) & 0x80) == 0x80) {
                    break;
                }
            }
            *(unsigned char *)(((((((struct o0_int *)0xC30BC04)->v)) + 0xC) + 0x0)) = a4;
            t0 = (((struct o0_int *)0xC30BC04)->v);
            (((struct o10_uchar *)(t0))->v) = ((*(signed char *)(((t0 + 0x10) + 0x0))) & 0x7F);
            for (;;) {
                t0 = *(signed char *)(((((((struct o0_int *)0xC30BC04)->v)) + 0x10) + 0x0));
                if (((unsigned char)t0 & 0x4) == 4) {
                    break;
                }
            }
            t1 = ((unsigned char)t0 & 0x4);
        }
        t0 = t1;
    } else {
        for (;;) {
            if (((unsigned short)(*(short *)((((((struct o4_int *)0xC30BC04)->v)) + 0x10))) & 0x20) == 32) {
                break;
            }
        }
        *(unsigned char *)(((((((struct o4_int *)0xC30BC04)->v)) + 0xC) + 0x0)) = a4;
        t1 = (((struct o4_int *)0xC30BC04)->v);
        *(unsigned short *)(((t1 + 0x10) + 0x0)) = ((*(short *)(((t1 + 0x10) + 0x0))) & 0xFFDF);
        t1 = (((struct o4_int *)0xC30BC04)->v);
        *(unsigned short *)(((t1 + 0x10) + 0x0)) = ((*(short *)(((t1 + 0x10) + 0x0))) & 0xFFBF);
        for (;;) {
            t1 = *(short *)((((((struct o4_int *)0xC30BC04)->v)) + 0x10));
            if (((unsigned short)t1 & 0x40) == 64) {
                break;
            }
        }
        t0 = ((unsigned short)t1 & 0x40);
    }
    return t0;
}


void FUN_0c0391d2(int a4, int a5, int a6, float f4, float f5, float f6, float f7, float f8)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    if ((int)a4 >= 0) {
        if (a4 != 0) {
            t0 = 0x0;
            u0 = f8;
            u1 = f8;
            if ((a4 != 3) && ((a4 != 6) && (a4 != 9))) {
                t1 = 0x0;
                u2 = (((f8 - f7) / (1.0f + 1.0f)) + f7);
                u3 = (((f8 - f7) / (1.0f + 1.0f)) + f7);
                if ((a4 != 1) && ((a4 != 4) && ((a4 != 7) && (a4 != 10)))) {
                    t1 = 0x1;
                    u2 = f7;
                    u3 = f7;
                }
                t0 = t1;
                u0 = u2;
                u1 = u3;
            }
            t1 = t0;
            u2 = u0;
            u0 = u1;
        } else {
            *(unsigned int *)0xC2A5894 = 0x0;
            FUN_0c07c8be(0x405A9);
            t1 = 0x0;
            u2 = f8;
            u0 = f8;
        }
        FUN_0c038e3a(a5, t1, a6, f4, f5, f6, u2, u0);
    return;
    }
}

int nlFrustum_L(float f4, float f5, float f6, float f7, float f8, float f9)
{
    int stk[16];
    register float u0;

    *(float *)(((int)stk + 0)) = ((f8 * (1.0f + 1.0f)) / (f5 - f4));
    *(float *)(((int)stk + 4)) = 0.0f;
    *(float *)(((int)stk + 8)) = 0.0f;
    *(float *)(((int)stk + 12)) = 0.0f;
    *(float *)(((int)stk + 16)) = 0.0f;
    *(float *)(((int)stk + 20)) = ((f8 * (1.0f + 1.0f)) / (f7 - f6));
    *(float *)(((int)stk + 24)) = 0.0f;
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 32)) = ((f4 + f5) / (f5 - f4));
    *(float *)(((int)stk + 36)) = ((f6 + f7) / (f7 - f6));
    *(float *)(((int)stk + 40)) = (((-f8) - f9) / (f9 - f8));
    *(float *)(((int)stk + 44)) = 1.0f;
    *(float *)(((int)stk + 48)) = 0.0f;
    *(float *)(((int)stk + 52)) = 0.0f;
    u0 = (f8 * f9);
    *(float *)(((int)stk + 56)) = ((u0 * (1.0f + 1.0f)) / (f9 - f8));
    *(float *)(((int)stk + 60)) = 0.0f;
    (((struct o0_float *)0xC2C4DBC)->v) = f8;
    (((struct o4_float *)0xC2C4DBC)->v) = f9;
    (((struct o8_float *)0xC2C4DBC)->v) = (1.0f / f8);
    (((struct o18_float *)0xC2BF8BC)->v) = f8;
    (((struct o0_float *)0xC2BF8BC)->v) = (-f8);
    (((struct o1C_float *)0xC2BF8BC)->v) = f9;
    (((struct o14_float *)0xC2BF8BC)->v) = (1.0f / f8);
    nlMultiMatrix(((int)stk + 0));
    return (nl_set_cnv_proj_pers());
}

int init_sub(void)
{
    (((struct o0_uint *)0xC3021D4)->v) = (syChainAddHandler(0x900, 0xC15EF5C, ((((struct o0_int *)0xC1713E4)->v)), 0x0));
    (((struct o4_uint *)0xC3021D4)->v) = (syChainAddHandler(0xA00, 0xC15EF9C, ((((struct o4_int *)0xC1713E4)->v)), 0x0));
    (((struct o8_uint *)0xC3021D4)->v) = (syChainAddHandler(0xA00, 0xC15F0AE, ((((struct o8_int *)0xC1713E4)->v)), 0x0));
    (((struct oC_uint *)0xC3021D4)->v) = (syChainAddHandler(0xA20, 0xC15F0B6, ((((struct oC_int *)0xC1713E4)->v)), 0x0));
    *(unsigned int *)0xC3024DC = 0x0;
    (((struct o0_uint *)0xC302728)->v) = 0x0;
    (((struct o4_uint *)0xC302728)->v) = 0x0;
    (((struct o8_uint *)0xC302728)->v) = 0x0;
    (((struct oC_uint *)0xC302728)->v) = 0x0;
    (((struct o14_uint *)0xC302728)->v) = 0x0;
    (((struct o10_uint *)0xC302728)->v) = 0xFFFFFFFF;
    (((struct o28_uint *)0xC302728)->v) = 0x0;
    (((struct o2C_uint *)0xC302728)->v) = 0x0;
    (((struct o30_uint *)0xC302728)->v) = 0x0;
    (((struct o34_uint *)0xC302728)->v) = 0x0;
    (((struct o38_uint *)0xC302728)->v) = 0x0;
    memset(0xC3024A4, 0x0, 0x38);
    memset(0xC302264, 0x0, 0x240);
    memset(0xC3024E4, 0x0, 0x240);
    return (memset(0xC3021E4, 0x0, 0x80));
}

int mpdrv_check_port(int a4)
{
    int stk[1];
    register int t0;
    register int t2;
    register int t3;
    int t8;
    register int t11;
    register int t13;
    int t16;
    register int t17;
    int t25;
    register int t26;

    t0 = *(int *)0xC30817C;
    t2 = *(int *)0xC30817C;
    t3 = (((struct o10B4_int *)(t2))->v);
    t8 = *(int *)(((*(int *)(((((t2 + 0xFE8) + (((((((-t3) + 0x1) << 1) + ((-t3) + 0x1)) << 2) << 2) << 1)) + ((*(int *)(((a4 << 2) + 0xC171AAC))) << 2)) + 0x0))) + 0x0));
    *(unsigned int *)(((int)stk + 0)) = t8;
    if ((t8 != -1) && (t8 != 0xFFFFFF00)) {
        t11 = (((int)stk + 0) + 0x2);
        if (((((struct o10C4_int *)((*(int *)0xC30817C)))->v)) == 1) {
            t11 = (((int)stk + 0) + 0x1);
        }
        t13 = *(signed char *)((t11 + 0x0));
        *(unsigned int *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x4)) = 0x0;
        *(unsigned char *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x1)) = (*(signed char *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x0)));
        *(unsigned char *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x0)) = t13;
        t16 = *(signed char *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x0));
        *(unsigned char *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x2)) = (((*(signed char *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x1))) ^ t16) & t16);
        t17 = *(signed char *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x0));
        *(unsigned char *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x3)) = (((*(signed char *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x1))) ^ t17) & (~t17));
        return 0x0;
    }
    *(unsigned int *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x4)) = ((*(int *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x4))) + 0x1);
    if ((unsigned int)(*(int *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x4))) > (unsigned int)((((struct o10DC_int *)((*(int *)0xC30817C)))->v))) {
        *(unsigned char *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x1)) = (*(signed char *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x0)));
        *(unsigned char *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x0)) = 0x0;
        t25 = *(signed char *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x0));
        *(unsigned char *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x2)) = (((*(signed char *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x1))) ^ t25) & t25);
        t26 = *(signed char *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x0));
        *(unsigned char *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x3)) = (((*(signed char *)((((t0 + 0x4) + ((a4 << 2) << 1)) + 0x1))) ^ t26) & (~t26));
        return 0xFFFFFFFF;
    }
    return 0x0;
}

void FUN_0c16bbd8(int a4, int a5)
{
    int stk[3];
    register int t0;
    register int t6;
    register int t10;
    register int t11;
    register int t16;
    register int t17;

    t0 = *(int *)((a4 + 0x20));
    if ((int)(*(int *)((a4 + 0x24))) > 0) {
        if ((*(int *)((a4 + 0x28))) == 0) {
            t6 = (*(int *)((a4 + 0x8)));
            *(int *)((int)stk + 0) = t6;
            t10 = FUN_0c1622c6((((((t0 << 2) << 2) << 2) + (a4 + 0x38)) + 0x4), (*(int *)((((((t0 << 2) << 2) << 2) + (a4 + 0x38)) + 0x2C))), (*(int *)((((((t0 << 2) << 2) << 2) + (a4 + 0x38)) + 0x30))), (*(int *)((((((t0 << 2) << 2) << 2) + (a4 + 0x38)) + 0x34))), t6);
            *(unsigned int *)((a4 + 0x28)) = t10;
            if (t10 == 0) {
                t11 = ((int (*)(int, int, int, int, int))(FUN_0c16bab0))(0xC1720F4, (((((t0 << 2) << 2) << 2) + (a4 + 0x38)) + 0x4), 0x0, 0x0, *(int *)((int)stk + 4));
            }
            t16 = FUN_0c16274a((*(int *)((a4 + 0x28))));
            t17 = (t16 + 0x7FF);
            if ((int)(t16 + 0x7FF) < 0) {
                t17 = ((t16 + 0x7FF) + 0x7FF);
            }
            *(unsigned char *)((a4 + 0x2)) = 0x0;
            *(unsigned int *)((a4 + 0x2C)) = ((int)t17 >> 11);
            *(unsigned int *)((((((t0 << 2) << 2) << 2) + (a4 + 0x38)) + 0x3C)) = 0x0;
        }
        if ((*(signed char *)((a4 + 0x2))) == 0) {
            ADXSTM_SetBufSize((*(int *)((a4 + 0x28))), (*(int *)((a4 + 0x14))), (*(int *)((a4 + 0x18))));
            FUN_0c16243a((*(int *)((a4 + 0x28))), 0x0);
            FUN_0c1624b8((*(int *)((a4 + 0x28))));
            *(unsigned char *)((a4 + 0x2)) = 0x1;
        }
        *(unsigned int *)((((((t0 << 2) << 2) << 2) + (a4 + 0x38)) + 0x38)) = 0x1;
        return;
    }
    if ((*(int *)((a4 + 0x28))) != 0) {
        ((int (*)(int, int, int))(FUN_0c16bab0))(0xC172110, (*(int *)((a4 + 0x24))), (*(int *)((a4 + 0x28))));
    return;
    }
}

int FUN_0c04f660(void)
{
    register float u0;
    register float u1;
    register float u2;
    register int t3;
    register int t4;
    register int t5;
    register int t32;

    u0 = (((struct o0_float *)0xC04F764)->v);
    u1 = (((struct o4_float *)0xC04F764)->v);
    u2 = (((struct o8_float *)0xC04F764)->v);
    t3 = 0x0;
    t4 = 0x0;
    t5 = 0xC131944;
    for (;;) {
        if ((*(int *)0xC2B1D90) == 1) {
            if (0.0f > ((((struct o0_float *)0xC2B1CF0)->v))) {
                (((struct o0_float *)0xC2B1CF0)->v) = (((((struct o0_float *)0xC2B1CF0)->v)) + ((((struct o1C_float *)0xC04F764)->v)));
            } else {
                FUN_0c048fd6(0xC2B1CF0, u0, 0.0f);
            }
        }
        (((struct o4_float *)0xC2B1BF4)->v) = (((*(float *)((t5 + 0x0))) + ((((struct o0_float *)0xC2B1CF0)->v))) + u1);
        (((struct o8_float *)0xC2B1BF4)->v) = ((((((struct o4_float *)(t5))->v)) + ((((struct o0_float *)0xC2B1CF0)->v))) + u2);
        (((struct o0_uint *)0xC2B1BF4)->v) = (*(int *)((t4 + (*(int *)((0xC13198C + ((*(int *)((((((struct o10_int *)0xC2B1CF0)->v)) + 0x0))) << 2)))))));
        (((struct o28_uint *)0xC2B1BF4)->v) = 0x0;
        t32 = FUN_0c07ada0(0xC2B1BF4);
        t3 = (t3 + 0x1);
        t4 = (t4 + 0x4);
        t5 = (t5 + 0x8);
        if ((unsigned int)t3 >= (unsigned int)0x9) {
            break;
        }
    }
    return t32;
}

int FUN_0c05cf54(int a4, int a5)
{
    int stk[7];
    register int t0;
    register int t1;

    *(unsigned int *)(((int)stk + 0)) = a4;
    t0 = (((struct o0_int *)0xC136D6C)->v);
    t1 = (((struct o4_int *)0xC136D6C)->v);
    FUN_0c018b1c(0x1);
    nlPushMatrix(((*(int *)(((int)stk + 0))) + 0xB8));
    FUN_0c072230(a5, (((int)stk + 0) + 0x10));
    FUN_0c072230((a5 + 0x18), (((int)stk + 0) + 0x4));
    FUN_0c05b77e((((int)stk + 0) + 0x10), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x10), ((float)t0 / (float)t1));
    FUN_0c018b22((((int)stk + 0) + 0x10), 0x0);
    FUN_0c072230((a5 + 0xC), (((int)stk + 0) + 0x10));
    FUN_0c072230((a5 + 0x24), (((int)stk + 0) + 0x4));
    FUN_0c05b77e((((int)stk + 0) + 0x10), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x10), ((float)t0 / (float)t1));
    camSetTarget((((int)stk + 0) + 0x10), 0x0);
    nlPopMatrix(0x1);
    *(float *)0xC177D9C = ((((struct o30_float *)(a5))->v));
    return (FUN_0c05ce16(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4)));
}

float FUN_0c0623b8(int a4, float f4, float f5, float f6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    t0 = 0x0;
    t1 = 0x0;
    for (;;) {
        if ((int)t1 >= (int)(*(int *)((a4 + 0x4)))) {
            break;
        }
        t2 = 0xFE;
        t2 = (*(signed char *)((((t1 << 8) + ((*(int *)((a4 + 0x0))))) + t2)));
        t1 = (t1 + 0x1);
        if ((t2 & 4) != 0) {
            t0 = (t0 + 0x1);
        }
    }
    t1 = *(int *)((a4 + 0x4));
    t2 = (int)((unsigned int)((int)((unsigned int)t1 + (unsigned int)0x0)) + ((((int)0x0 > (int)t1)) ? 1u : 0u));
    if ((int)t0 > (int)(t2 >> 1)) {
        *(unsigned int *)((a4 + 0x14)) = 0x1;
        t1 = ((*(signed char *)(((a4 + 0x63) + 0x0))) | 0x20);
    } else {
        t3 = 0xC06244C;
        t4 = (t2 >> 1);
        t2 = t0;
        t0 = 0x0;
        u0 = f4;
        u1 = f5;
        for (;;) {
            if ((int)t0 >= (int)(*(int *)((a4 + 0x4)))) {
                break;
            }
            t4 = t0;
            t4 = (t4 << 8);
            t4 = (t4 + (*(int *)((a4 + 0x0))));
            t3 = 0x7C;
            t4 = (t4 + 0x70);
            u1 = (*(float *)((0xC1758B4 + t3)));
            u3 = (*(float *)((t4 + 0x0)));
            t3 = 0x8;
            u1 = (u1 - u3);
            u3 = (*(float *)((t4 + t3)));
            t3 = (t3 + 0x7C);
            u0 = (*(float *)((0xC1758B4 + t3)));
            u0 = (u0 - u3);
            u2 = u1;
            u3 = u0;
            u3 = (u3 * u0);
            u4 = u3;
            u4 = u4 + u2 * u1;
            u3 = u4;
            u0 = u3;
            t0 = (t0 + 0x1);
            if (!(4900.0f > u0)) {
                t2 = (t2 + 0x1);
            }
        }
        if ((int)t2 <= (int)0x0) {
            *(unsigned int *)((a4 + 0x14)) = 0x0;
        } else {
            *(unsigned int *)((a4 + 0x14)) = 0x1;
        }
        t1 = ((*(signed char *)(((a4 + 0x63) + 0x0))) & 0xDF);
        u0 = u2;
    }
    (((struct o63_uchar *)(a4))->v) = t1;
    return u0;
}

int kmiFBalloc(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = ((~(((~a4) + 0x1) & 0x1F)) + 0x1);
    if ((int)a4 >= 0) {
        t0 = (a4 & 0x1F);
    }
    t1 = a4;
    if (t0 != 0) {
        t1 = (a4 + (0x20 - t0));
    }
    if (((((struct o20_int *)0xC173DFC)->v)) != t1) {
        if (((*(int *)0xC3008D4) & 4) != 0) {
            t0 = 0x0;
            if ((unsigned int)((((struct o0_int *)0xC173DFC)->v)) < (unsigned int)((((struct o14_int *)0xC173DFC)->v))) {
                t0 = 0x1;
            }
            t2 = (kmiFBallocQueue(t0, (t1 << 1), a5, 0x8));
        } else {
            t2 = (kmiFBallocQueue(0x0, (t1 << 1), a5, 0x8));
        }
        if (t2 == 0) {
            (((struct o20_uint *)0xC173DFC)->v) = t1;
            (((struct o1C_uint *)0xC173DFC)->v) = (*(int *)((a5 + 0x1C)));
            t0 = *(int *)((a5 + 0x1C));
            *(unsigned int *)((a5 + 0x14)) = t1;
            *(unsigned int *)((a5 + 0x1C)) = (kmyConvertAddress64to32(t0));
        }
        t0 = t2;
    } else {
        *(unsigned int *)((a5 + 0x14)) = t1;
        *(unsigned int *)((a5 + 0x1C)) = (kmyConvertAddress64to32((((((struct o1C_int *)0xC173DFC)->v)) + 0x4)));
        (((struct o20_uint *)0xC173DFC)->v) = 0x0;
        (((struct o1C_uint *)0xC173DFC)->v) = 0x0;
        t0 = 0x0;
    }
    return t0;
}

int sySqInit(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = *(int *)0xFF000010;
    t1 = (t0 & 0x1);
    if ((t0 & 0x1) == 1) {
        t2 = (t0 & 0x1);
        t0 = 0xE0000000;
        t3 = 0x0;
        t4 = 0x0;
        for (;;) {
            if ((unsigned int)(0xC000000 + t4) >= (unsigned int)0xD000000) {
                break;
            }
            t2 = (syMmuAddEntry((0xC000000 + t4), (0xE0000000 + t4), 0x4));
            t0 = (0xC302160 + (t3 << 2));
            t3 = (t3 + 0x1);
            t4 = (t4 + 0x100000);
            *(unsigned int *)((t0 + 0x0)) = t2;
        }
        t3 = t2;
        t2 = t0;
        t0 = 0x0;
        t4 = 0x0;
        for (;;) {
            if ((unsigned int)(0x10000000 + t4) >= (unsigned int)0x10800000) {
                break;
            }
            t3 = (syMmuAddEntry((0x10000000 + t4), (0xE1000000 + t4), 0x4));
            t2 = (0xC3021A0 + (t0 << 2));
            t0 = (t0 + 0x1);
            t4 = (t4 + 0x100000);
            *(unsigned int *)((t2 + 0x0)) = t3;
        }
        t0 = syMmuAddEntry(0x10800000, 0xE1800000, 0x4);
        *(unsigned int *)0xC3021C0 = t0;
        t1 = t0;
    }
    return t1;
}

float FUN_0c059858(void)
{

    register int R2;
    register int R3;
    register int R12;
    register float F0;
    register float F3;
    register float F15;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    v0_2 = (((struct oC_int *)0xC2B85F8)->v);
    v0_1 = (v0_2);
    v0_0 = (0xC2B8600);
    if ((v0_2 == 4)) goto L_C05987A;
    if ((v0_1 == 5)) goto L_C0598A0;
    if ((v0_1 == 6)) goto L_C0598AC;
    if ((v0_1 == 7)) goto L_C0598B8;
    if ((v0_1 == 1)) goto L_C0598C4;
    if ((v0_1 == 2)) goto L_C0598D0;
    L_C0598E0:;
    v0_1 = (0xC2B8814);
    if (((*(int *)((v0_0 + 0x0))) == (*(int *)0xC2B8814))) goto L_C059900;
    *(unsigned int *)((v0_1 + 0x0)) = 0x101;
    v0_0 = *(int *)((v0_0 + 0x0));
    (((struct o4_uint *)0xC2B85F8)->v) = ((((v0_0 << 2) + v0_0) << 2) + 0xC132DF4);
    v0_1 = (0x101);
    L_C059900:;
    return F0;
    L_C0598D0:;
    v0_2 = *(int *)((v0_0 + 0x0));
    v0_1 = (v0_2);
    if ((v0_2 != 4)) goto L_C0598E0;
    *(unsigned int *)((v0_0 + 0x0)) = 0x2;
    L_C0598DA:;
    (((struct o0_float *)0xC2B85F8)->v) = 0.0f;
    goto L_C0598E0;
    L_C0598C4:;
    v0_2 = *(int *)((v0_0 + 0x0));
    v0_1 = (v0_2);
    if ((v0_2 != 4)) goto L_C0598E0;
    *(unsigned int *)((v0_0 + 0x0)) = 0x1;
    goto L_C0598DA;
    L_C0598B8:;
    v0_2 = *(int *)((v0_0 + 0x0));
    v0_1 = (v0_2);
    if ((v0_2 == 7)) goto L_C0598E0;
    *(unsigned int *)((v0_0 + 0x0)) = 0x7;
    goto L_C0598DA;
    L_C0598AC:;
    v0_2 = *(int *)((v0_0 + 0x0));
    v0_1 = (v0_2);
    if ((v0_2 == 6)) goto L_C0598E0;
    *(unsigned int *)((v0_0 + 0x0)) = 0x6;
    goto L_C0598DA;
    L_C0598A0:;
    v0_2 = *(int *)((v0_0 + 0x0));
    v0_1 = (v0_2);
    if ((v0_2 == 5)) goto L_C0598E0;
    v0_1 = (0x5);
    L_C0598A8:;
    *(unsigned int *)((v0_0 + 0x0)) = v0_1;
    goto L_C0598DA;
    L_C05987A:;
    v0_2 = *(int *)((v0_0 + 0x0));
    v0_1 = (v0_2);
    if ((v0_2 == 4)) goto L_C0598E0;
    v0_1 = (0x4);
    goto L_C0598A8;
}

int FUN_0c05f788(int a4, int a5)
{
    int stk[3];
    register int t1;
    register int t8;
    register int t9;
    register int t12;
    register int t13;
    register int t14;
    register int t15;
    register int t16;
    register int t17;
    register int t29;
    register int t30;
    register int t31;
    register int t32;
    register int t11;

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 8)) = (a4 << 2);
    t1 = *(int *)(((a4 << 2) + 0xC10E4B0));
    if ((*(int *)(((int)stk + 4))) != 0) {
        FUN_0c05ab06(t1, ((int)stk + 0));
    } else {
        FUN_0c05aa9a(t1, ((int)stk + 0));
    }
    t12 = *(int *)(((int)stk + 8));
    t8 = *(int *)((t12 + 0xC10E510));
    t9 = t8;
    if ((*(int *)(((int)stk + 4))) != 0) {
        t9 = (t8 + 0x8);
    }
    *(unsigned int *)(((int)stk + 4)) = (t9 << 2);
    t13 = 0x0;
    t14 = 0xC10E570;
    t15 = 0x0;
    t16 = 0x0;
    for (;;) {
        t17 = *(int *)((0xC10E570 + (t15 << 2)));
        t15 = (t15 + 0x1);
        if ((int)t17 >= 0) {
            t12 = (*(int *)((t14 + 0x0)));
            t12 = (t12 << 2);
            t12 = (*(int *)((t12 + (*(int *)(((int)stk + 0))))));
            *(unsigned int *)((((*(int *)((((t9 << 2) + 0xC13AC90) + 0x0))) + t13) + 0x0)) = t12;
        } else {
            t11 = (*(int *)((((t9 << 2) + 0xC13AC90) + 0x0)));
            t11 = (t11 + t16);
            *(unsigned int *)((t11 + 0x0)) = 0x0;
        }
        t14 = (t14 + 0x4);
        t16 = (t16 + 0x8);
        t13 = (t13 + 0x8);
        if ((int)t15 >= (int)0x10) {
            break;
        }
    }
    t29 = 0xC10E5B0;
    t30 = (*(int *)(((*(int *)(((int)stk + 4))) + 0xC13ADD8)));
    for (;;) {
        t31 = *(int *)((t29 + 0x0));
        t29 = (t29 + 0x4);
        t32 = *(int *)(((int)stk + 0));
        *(unsigned int *)((t30 + 0x0)) = (*(int *)(((t31 << 2) + t32)));
        t30 = (t30 + 0x4);
        if ((unsigned int)t29 >= (unsigned int)0xC10E5D0) {
            break;
        }
    }
    return t32;
}


int FUN_0c06b3d8(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    int t4;
    register int t5;

    t0 = 0x0;
    if (a5 != 0) {
        t1 = FUN_0c04ba42(0xC177D38);
        t2 = 0x0;
        if (t1 != 0) {
            t2 = 0x1;
        }
        t0 = t2;
    } else {
        t1 = a5;
        t2 = a6;
        t3 = a7;
    }
    t4 = 0x0;
    if (a6 != 0) {
        t5 = FUN_0c04ba04(0xC177D38);
        t4 = 0x0;
        if (t5 != 0) {
            t4 = 0x1;
        }
    } else {
        t5 = t1;
        t1 = t2;
        t2 = t3;
    }
    if ((t0 == 0) && (t4 == 0)) {
        if (((*(signed char *)((a4 + 0x7))) & 64) != 0) {
            t3 = *(int *)((a4 + 0x0));
            *(unsigned int *)((a4 + 0x0)) = (t3 - 1);
            if ((int)(t3 - 1) <= 0) {
                *(unsigned char *)((a4 + 0x7)) = ((*(signed char *)((a4 + 0x7))) & 0x7F);
                if (a7 != 0) {
                    t3 = ((int (*)(int, int, int, int))(a7))(a4, t5, t1, t2);
                }
            }
        } else {
            *(unsigned int *)((a4 + 0x0)) = 0x3C;
            *(unsigned char *)((a4 + 0x7)) = ((*(signed char *)((a4 + 0x7))) | 0x40);
        }
    } else {
        *(unsigned char *)((a4 + 0x7)) = ((*(signed char *)((a4 + 0x7))) | 0x80);
        *(unsigned char *)((a4 + 0x7)) = ((*(signed char *)((a4 + 0x7))) & 0xBF);
    }
    t1 = 0x0;
    if (t0 != 0) {
        t1 = 0x1;
    }
    t0 = 0x0;
    if (t4 != 0) {
        t0 = 0x2;
    }
    return (t1 | t0);
}

int FUN_0c07f206(int a4, int a5, int a6)
{
    int stk[3];
    register int t0;
    register int t3;
    register int t18;
    register int t22;
    register int t19;
    register int t9;
    register int t14;
    register int t15;

    *(unsigned int *)(((int)stk + 8)) = a6;
    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    if ((unsigned int)a5 > (unsigned int)0x5) {
        return 0xFFFFFFFE;
    }
    t0 = FUN_0c07e3d0(a4);
    if (t0 == 0) {
        FUN_0c07e57c(((int)stk + 0));
        t3 = FUN_0c07e63e((*(int *)(((int)stk + 0))), (((int)stk + 0) + 0x4));
        if (t3 != 0) {
            return t3;
        }
        if ((*(int *)(((int)stk + 0))) == 1) {
            t9 = ((*(int *)0xC147740) + 0x4);
        } else {
            t9 = ((*(int *)0xC147740) + 0x168);
        }
        if ((*(int *)(((int)stk + 0))) == 1) {
            t14 = 0x2D0;
            t15 = (*(int *)0xC147740);
        } else {
            t14 = 0x528;
            t15 = (*(int *)0xC147740);
        }
        t18 = *(int *)(((int)stk + 8));
        t22 = (0xB0 + t9);
        if ((*(int *)(((int)stk + 4))) == 1) {
        } else {
            t19 = *(int *)(((int)stk + 4));
            t22 = (((t15 + t14) + 0x18) + ((((((t19 - 2) << 2) << 1) + (t19 - 2)) << 2) << 2));
        }
        *(unsigned int *)((t18 + 0x0)) = t22;
        return 0x0;
    }
    return t0;
}

void gdFsTrans32(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;

    if ((a4 != 0) && (t0 = (((struct o4C_short *)(a4))->v), t0 != 0)) {
        if ((a6 & 0x1F) != 0) {
        } else {
            if ((0x1F & a5) != 0) {
            } else {
                if (((((struct o48_short *)(a4))->v)) != 4) {
                } else {
                    t0 = _builtin_get_imask();
                    _builtin_set_imask(0xF);
                    t1 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)(((*(int *)((a4 + 0x0))) + 0xC))) + 0xC)))))((*(int *)((a4 + 0x3C))), a6, a5, a7);
                    if (t1 == 0) {
                        (((struct o4A_ushort *)(a4))->v) = 0x1;
                        *(unsigned int *)((a4 + 0x20)) = a5;
                        *(unsigned int *)((a4 + 0x18)) = 0x0;
                        t2 = ((int (*)(int, int, int, int))(((((struct o40_int *)((*(int *)(((*(int *)((a4 + 0x0))) + 0xC)))))->v))))(t1, a5, a6, a7);
                    }
                    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
                }
            }
        }
    }
}

int Check2DAreaEdge(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    u0 = *(float *)((a4 + 0x0));
    u1 = *(float *)((a5 + 0x0));
    t0 = 0x0;
    if (u0 > u1) {
    } else {
        t1 = 0x1;
        if (u1 > u0) {
            t1 = 0x2;
        }
        t0 = t1;
    }
    u1 = (((struct o8_float *)(a4))->v);
    u2 = (((struct o8_float *)(a5))->v);
    t1 = 0x0;
    if (u1 > u2) {
    } else {
        t2 = 0x3;
        if (u2 > u1) {
            t2 = 0x6;
        }
        t1 = t2;
    }
    u2 = *(float *)((a6 + 0x0));
    t2 = 0x0;
    if (u0 > u2) {
    } else {
        t3 = 0x1;
        if (u2 > u0) {
            t3 = 0x2;
        }
        t2 = t3;
    }
    u0 = (((struct o8_float *)(a6))->v);
    t3 = 0x0;
    if (u1 > u0) {
    } else {
        t4 = 0x3;
        if (u0 > u1) {
            t4 = 0x6;
        }
        t3 = t4;
    }
    t4 = *(int *)(((((t2 + t3) << 2) + (0xC09DFB0 + (((((t0 + t1) << 2) << 1) + (t0 + t1)) << 2))) + 0x0));
    t0 = t4;
    if (t4 == 3) {
        u0 = *(float *)((a5 + 0x0));
        u1 = (((struct o8_float *)(a5))->v);
        u2 = *(float *)((a4 + 0x0));
        u3 = ((((*(float *)((a6 + 0x0))) - u0) * (((((struct o8_float *)(a4))->v)) - u1)) / (((((struct o8_float *)(a6))->v)) - u1));
        t1 = 0x0;
        if (u2 > (u0 + u3)) {
        } else {
            t2 = 0x2;
            if ((u0 + u3) > u2) {
                t2 = 0x1;
            }
            t1 = t2;
        }
        t0 = t1;
    }
    return t0;
}

float CalcHomingAngle(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;

    t0 = *(int *)((a4 + 0x0));
    t1 = *(int *)((a4 + 0x18));
    t2 = *(int *)((a4 + 0xC));
    t3 = (t1 - t0);
    if ((int)(short)(t1 - t0) > (int)((short)(t1 - t0) + 0x8000)) {
        t3 = (-(t1 - t0));
    }
    u0 = ((float)(short)t3 * ((((struct o24_float *)(a4))->v)));
    u0 = u0 + ((((struct o28_float *)(a4))->v)) * (float)t2;
    *(unsigned int *)((a4 + 0xC)) = (int)u0;
    *(unsigned int *)((a4 + 0x0)) = (unsigned short)((*(int *)((a4 + 0x0))) + (int)u0);
    t0 = *(int *)((a4 + 0x1C));
    t1 = *(int *)((a4 + 0x4));
    t2 = *(int *)((a4 + 0x10));
    t3 = (t0 - t1);
    if ((int)(short)(t0 - t1) > (int)((short)(t0 - t1) + 0x8000)) {
        t3 = (-(t0 - t1));
    }
    u0 = ((float)(short)t3 * ((((struct o24_float *)(a4))->v)));
    u0 = u0 + ((((struct o28_float *)(a4))->v)) * (float)t2;
    *(unsigned int *)((a4 + 0x10)) = (int)u0;
    *(unsigned int *)((a4 + 0x4)) = (unsigned short)((*(int *)((a4 + 0x4))) + (int)u0);
    t0 = *(int *)((a4 + 0x20));
    t1 = *(int *)((a4 + 0x8));
    t2 = *(int *)((a4 + 0x14));
    t3 = (t0 - t1);
    if ((int)(short)(t0 - t1) > (int)(0x8000 + (short)(t0 - t1))) {
        t3 = (-(t0 - t1));
    }
    u0 = (((struct o28_float *)(a4))->v);
    u1 = ((float)(short)t3 * ((((struct o24_float *)(a4))->v)));
    u1 = u1 + u0 * (float)t2;
    *(unsigned int *)((a4 + 0x14)) = (int)u1;
    *(unsigned int *)((a4 + 0x8)) = (unsigned short)((*(int *)((a4 + 0x8))) + (int)u1);
    return u0;
}

int ExecEffectSpray(int a4)
{
    register int t0;
    register float u0;

    t0 = *(int *)((a4 + 0x30));
    u0 = (((struct o0_float *)0xC02E45C)->v);
    *(float *)0xC3F98FC = ((float)t0 * u0);
    if (((float)t0 * u0) > 1.0f) {
        *(float *)0xC3F98FC = 1.0f;
    }
    FUN_0c073360();
    FUN_0c073a60((a4 + 0x14));
    FUN_0c076250(1.0f, 1.0f, 1.0f);
    u0 = (((struct o2C_float *)(a4))->v);
    Put2DObjUp(0xC3F98B8, u0, u0, ((((struct o10_float *)0xC02E45C)->v)));
    FUN_0c026ce6();
    nlPopMatrix(0x1);
    t0 = *(int *)((a4 + 0x30));
    *(unsigned int *)((a4 + 0x30)) = (t0 - 1);
    if ((int)(t0 - 1) <= 0) {
        return nlCloseEvent(a4);
    }
    nlAddVector((a4 + 0x14), (a4 + 0x20));
    FUN_0c073c40((a4 + 0x20), (a4 + 0x20), ((((struct o28_float *)0xC02E45C)->v)));
    (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) - 0.166666001f);
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 0.0799999982f);
    return 0x2C;
}

int FUN_0c0558bc(void)
{

    register int R1;
    register int R2;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    v0_1 = (((struct o30_int *)0xC2B31C4)->v);
    v0_0 = (0xC2B31F4);
    v0_2 = (v0_1);
    if ((v0_1 == 0)) goto L_C0558F4;
    if ((v0_2 == 0x3E7)) goto L_C0558E4;
    if ((v0_2 == 99)) goto L_C0558E4;
    if (((int)(*(int *)0xC2B3110) >= (int)(((((struct o0_int *)0xC2B31C4)->v)) + 0x186))) goto L_C055916;
    L_C0558E4:;
    if ((v0_2 == 0)) goto L_C0558F4;
    if ((v0_2 == 0x3E7)) goto L_C0558F4;
    if ((v0_2 != 99)) goto L_C055904;
    L_C0558F4:;
    if (((int)(*(int *)0xC2B3110) >= (int)(((((struct o0_int *)0xC2B31C4)->v)) + 0x1FE))) goto L_C055916;
    L_C055904:;
    v0_2 = (((struct o38_int *)0xC2B31C4)->v);
    v0_1 = (v0_2);
    if ((v0_2 != 1)) goto L_C055960;
    v0_1 = (0xC2B3200);
    if (((int)((((struct o3C_int *)0xC2B31C4)->v)) < (int)0x78)) goto L_C055960;
    L_C055916:;
    FUN_0c071920(0xFFFFFFFF);
    if (((*(int *)((v0_0 + 0x0))) == 0)) goto L_C05592A;
    if (((int)(*(int *)((v0_0 + 0x0))) < (int)0x63)) goto L_C05595A;
    L_C05592A:;
    if ((((((struct o0_int *)0xC1EC720)->v)) == 2)) goto L_C05595A;
    v0_0 = (int)(FUN_0c03f154(0x0)) > (int)0x1;
    v0_1 = (0x1);
    if (v0_0) goto L_C05595A;
    v0_0 = FUN_0c03f154(v0_1);
    v0_1 = (v0_0);
    if ((v0_0 == 0)) goto L_C055952;
    v0_0 = FUN_0c03f154(0x1);
    v0_1 = (v0_0);
    if ((v0_0 != 4)) goto L_C05595A;
    L_C055952:;
    (((struct o24_uint *)0xC1EC720)->v) = 0xC;
    L_C055960:;
    return v0_1;
    L_C05595A:;
    (((struct o24_uint *)0xC1EC720)->v) = 0x2;
    v0_1 = (0x2);
    goto L_C055960;
}

int FUN_0c05c878(int a4, int a5, float f4)
{
    int stk[25];
    register float t14;
    register float u15;
    register float u16;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    *(float *)(((int)stk + 4)) = f4;
    FUN_0c018b1c(0x1);
    FUN_0c073010();
    nlQuickInvertMatrix();
    nlGetMatrix((((int)stk + 0) + 0x24));
    nlUnitMatrix();
    FUN_0c073a60(0xC177D44);
    nlRotateAY((*(int *)(((int)stk + 8))));
    nlRotateAxe((((int)stk + 0) + 0x24), (*(int *)(((int)stk + 0))));
    FUN_0c073a40(0xC177D44);
    FUN_0c072230(0xC177D38, (((int)stk + 0) + 0x18));
    nlPopMatrix(0x1);
    nlSubVector3op((((int)stk + 0) + 0xC), (((int)stk + 0) + 0x18), 0xC177D44);
    t14 = FUN_0c073e10((((int)stk + 0) + 0xC));
    u15 = *(float *)(((int)stk + 4));
    u16 = (t14 - u15);
    if (1.0f > (t14 - u15)) {
        u16 = 1.0f;
    }
    FUN_0c073c40((((int)stk + 0) + 0xC), (((int)stk + 0) + 0xC), u16);
    nlAddVector((((int)stk + 0) + 0xC), 0xC177D44);
    return (FUN_0c018b22((((int)stk + 0) + 0xC), 0x1));
}

int FUN_0c06488c(int a4, int a5, int a6, int a7, float f4)
{
    int stk[3];
    register int t0;
    register int t1;
    register int t43;
    register float u39;
    register float t9;
    register int t19;
    register float u23;
    register float t12;
    int t7;
    register int t36;
    float u11;
    float u14;
    register float u28;

    t0 = *(int *)((a4 + 0x0));
    t1 = (((struct o80_int *)(((a5 << 8) + t0)))->v);
    t43 = 0x80;
    if (((int)t1 >= 0) && ((int)t1 < (int)0xA)) {
        u39 = f4;
        if ((((((struct o80_int *)(((a5 << 8) + t0)))->v)) != 9) && (t7 = *(signed char *)((((a5 << 8) + t0) + 0xFF)), (t7 & 128) != 0)) {
            nlSubVector3op(((int)stk + 0), (0xE8 + ((a5 << 8) + t0)), 0xC17599C);
            t9 = FUN_0c073b40(((int)stk + 0), 0xC17598C);
            t19 = 0x1;
            u23 = t9;
            if (!(((((struct o0_float *)0xC064994)->v)) > t9) && (u11 = (((struct o4_float *)0xC064994)->v), !(t9 > u11))) {
                t12 = FUN_0c073b40(((int)stk + 0), 0xC17596C);
                t19 = 0x1;
                if (!(((((struct o8_float *)0xC064994)->v)) > t12) && (u14 = (((struct oC_float *)0xC064994)->v), !(t12 > u14))) {
                    t19 = 0x0;
                }
                u23 = t12;
            }
            if (t19 != 0) {
                (((struct o80_uint *)(((a5 << 8) + t0)))->v) = 0x9;
                FUN_0c068304(((a5 << 8) + t0));
            } else {
                u28 = u23;
            }
            u39 = u28;
        } else {
            t36 = a5;
        }
        t43 = (((int (*)(int, int, int, int, float))((*(int *)(((((((struct o80_int *)(((a5 << 8) + t0)))->v)) << 2) + 0xC10FA80)))))(((a5 << 8) + t0), t36, a6, a7, u39));
    }
    return t43;
}

int FUN_0c07c1a6(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(int *)0xC2C3EA4;
    t1 = 0xFFFFFFFF;
    if (((*(int *)((t0 + 0x0))) & 0x10FF) != 0x1004) {
    } else {
        if ((int)(*(int *)((t0 + 0xC))) < (int)((*(int *)((t0 + 0x4))) << 2)) {
            t2 = ((unsigned int)(*(int *)((t0 + 0xC))) >> 2);
        } else {
            t2 = (*(int *)((t0 + 0x4)));
        }
        syG2Write(a4, (*(int *)((t0 + 0x18))), 0x4, t2, 0x1, 0x1);
        t0 = *(int *)0xC2C3EA4;
        t3 = *(int *)((t0 + 0xC));
        *(unsigned int *)((t0 + 0xC)) = (t3 - (t2 << 2));
        if ((t3 - (t2 << 2)) == 0) {
            if (((*(int *)(((*(int *)0xC2C3EA4) + 0x0))) & 0x8000) != 0) {
                FUN_0c07b6c0((*(int *)(((*(int *)0xC2C3EA4) + 0x8))), ((*(int *)(((*(int *)0xC2C3EA4) + 0x1C))) + 0x8));
            }
            FUN_0c07b6c0(0x1, 0xA08000B0);
            t0 = *(int *)0xC2C3EA4;
            *(unsigned int *)((t0 + 0x0)) = ((*(int *)((t0 + 0x0))) + 0x1);
            t0 = 0x0;
        } else {
            t3 = *(int *)0xC2C3EA4;
            *(unsigned int *)((t3 + 0x18)) = ((*(int *)((t3 + 0x18))) + (t2 << 2));
            t0 = 0x1;
        }
        t1 = t0;
    }
    return t1;
}

int kmSetPixelClipping(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t2;
    register int t8;
    register int t9;
    register int t10;
    register int t11;

    if (((int)a4 <= (int)a6) && ((int)a5 <= (int)a7)) {
        t0 = a6;
        if ((int)a6 > (int)0x7FF) {
            t0 = 0x7FF;
        }
        t2 = a7;
        if ((int)a7 > (int)0x7FF) {
            t2 = 0x7FF;
        }
        t8 = a4;
        t9 = a5;
        t10 = t0;
        t11 = t2;
        if ((*(int *)0xC3008F4) == 4) {
            t8 = ((a4 + 0x1) & 0xFFFFFFFE);
            t9 = ((a5 + 0x1) & 0xFFFFFFFE);
            t10 = (t0 & 0xFFFFFFFE);
            t11 = (t2 & 0xFFFFFFFE);
        }
        (((struct o0_uint *)0xC300B84)->v) = ((t8 & 0x7FF) | ((t10 & 0x7FF) << 16));
        (((struct o4_uint *)0xC300B84)->v) = (((t11 & 0x7FF) << 16) | (t9 & 0x7FF));
        return 0x0;
    }
    return 0xDDDD;
}
