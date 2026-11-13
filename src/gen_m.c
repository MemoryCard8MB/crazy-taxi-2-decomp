/* Straight-line functions with calls and guards (batch gen_m): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[2]; } Stk2;
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o10E8_int { char p[0x10E8]; int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o18_short { char p[0x18]; short v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o18_ushort { char p[0x18]; unsigned short v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_float { char p[0x20]; float v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o278_uint { char p[0x278]; unsigned int v; };
struct o28_int { char p[0x28]; int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2A_short { char p[0x2A]; short v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o30_short { char p[0x30]; short v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o3C_int { char p[0x3C]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_float { char p[0x44]; float v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o48_float { char p[0x48]; float v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o50_float { char p[0x50]; float v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o50_ushort { char p[0x50]; unsigned short v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_float { char p[0x78]; float v; };
struct o7C_float { char p[0x7C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o80_float { char p[0x80]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int ADX_DecodeMonoFloat(int, int, int, int, int, int);
int ADX_DecodeSteFloat(int, int, int, int, int, int, int, int);
int CarSel_Camera(void);
int CarSel_SetFog(void);
int FUN_0c018b22(int, int);
int FUN_0c026ce6(void);
int FUN_0c027fbe(float, float);
float FUN_0c02806c(int);
int FUN_0c028196(void);
int FUN_0c0281a4(int);
int FUN_0c0281b6(int);
int FUN_0c0281d4(int);
int FUN_0c02842e(int);
int FUN_0c02cc30(int);
int FUN_0c03346e(int, int, int, int);
int FUN_0c033e38(int, int, int);
int FUN_0c034320(int, int);
int FUN_0c0343b8(int, int);
int FUN_0c03457c(void);
int FUN_0c034804(int, float, float);
int FUN_0c034928(int, int, int, int, int);
int FUN_0c03e700(void);
int FUN_0c040bec(int, int);
int FUN_0c04c138(int, int);
int FUN_0c04e9ac(int, int, int, int, int, int, int);
int FUN_0c04eb10(void);
int FUN_0c04ebe2(void);
int FUN_0c04edcc(void);
int FUN_0c04f224(void);
int FUN_0c04f518(void);
int FUN_0c050104(void);
int FUN_0c05063e(void);
extern int FUN_0c052dba();
int FUN_0c05872e(int, int);
int FUN_0c058f64(int, int, int, int);
int FUN_0c059074(int);
int FUN_0c05ac3a(int);
extern int FUN_0c05b0dc();
int FUN_0c05b288(int);
int FUN_0c05f6fe(int);
int FUN_0c05f72a(int);
int FUN_0c06032a(int);
int FUN_0c0638e6(int);
int FUN_0c063a2a(int, int, int, int, int);
extern int FUN_0c069e54();
int FUN_0c06e700(int, int, float);
int FUN_0c06f0d0(int, int);
int FUN_0c06f550(int, int, int);
int FUN_0c070730(float);
float FUN_0c070c40(float);
int FUN_0c070e60(void);
int FUN_0c07215c(int, int, int);
int FUN_0c072230(int, int);
int FUN_0c073360(void);
int FUN_0c073a30(float, float, float);
float FUN_0c073b40(int, int);
int FUN_0c073c40(int, int, float);
float FUN_0c073c60(int);
int FUN_0c074f20(float);
int FUN_0c076230(float, float, float);
int FUN_0c07ada0(int);
int FUN_0c07d800(int);
int FUN_0c07d864(int);
int FUN_0c07fdc8(void);
int FUN_0c07ff00(void);
int FUN_0c14ffa4(int, int, int);
int FUN_0c1616ce(int);
int FUN_0c164b24(void);
int FUN_0c1657b4(void);
int FUN_0c16ba68(int);
int FUN_0c16ba80(int);
int FUN_0c16bab0(int, ...);
int FUN_0c16c56c(int);
int FUN_0c16c85e(int, int, int);
int FUN_0c16c90c(int);
int FUN_0c16f81c(int, int, int, int, int, int);
int PutColliWall(int);
int SJMEM_Unlock(int, int);
int SearchUsed(int, int);
int Voice_ShutUp(int);
extern int _builtin_get_imask(void);
extern void _builtin_prefetch(void *);
extern void _builtin_set_imask(int);
extern int _builtin_tas(char *);
int _pd_peripheral_set_null(int);
int adxpd_error(void);
int camSetTarget(int, int);
extern int cvFsError();
int gdFsReopenHn(int, int, int, int);
int gdFsWaitCompleteReq(int);
int kdGetDeviceInfo(int);
int kdInitSystem(int, int);
int kdRecvFrame(void);
int kdSetCallback(int, int, int);
int kmFreeTexture(int);
int kmProcessVertexRenderState(int);
int kmRenderTexture(int);
int kmSetBackGroundRenderState(int);
int kmSetVertexRenderState(int);
int kmiCopyFromFrameBuffer(int, int, int);
int kmiCopyToFrameBuffer(int, int, int);
int kmiPurgeCache(int);
int kmtex_GetTextureLevel(int, int);
int kmytex_FBFreeEntry(int);
int kmytex_VQFreeEntry(int);
int lcdSync(int);
int memset(int, int, int);
int mpdrv_dpf(int, ...);
int nlCommonTextureClearTextureIndex(int);
float nlFloor(float);
int nlInitTextureSurface(int, int);
float nlLength(int, int);
int nlMatrixMode(int);
int nlObjPut(int);
int nlOuterProduct(int, int, int);
int nlPopMatrix(int);
int nlRotateAY(int);
int nlScale(float, float, float);
int nlSearchPalette(int, int);
int nlSetWindowSize(float, float, float, float);
int nlSubVector3op(int, int, int);
int nlUnitMatrix(void);
float nlUnitVectorsd(int, int);
int nl_set_cnv_proj_pers(void);
int syG2Write(int, int, int, int, int, int);
int vmsfs_read_retry(int, int, int);
int vmsfs_write_retry(int, int, int);
int vmsio_bank_change(int, int);
int FUN_0c06383e(int a4);
float ViewColliWall(float f4, float f5);
int kmiFBreset(void);
int FUN_0c04e88e(int a4);
int FUN_0c057230(void);
int FUN_0c058846(int a4, int a5);
int FUN_0c059e6a(int a4, int a5, int a6, int a7);
int FUN_0c06b298(int a4, int a5);
int nlInitCommonTexture(int a4, int a5, int a6);
void nlRenderTextureEnd(void);
int nlDispStripLoadPalette(int a4, int a5);
int vmsfs_bank_change_retry(int a4, int a5);
int pdInitPeripheral(int a4, int a5, int a6);
int syTmrInt1Cancel(void);
int FUN_0c029458(float f4, float f5, float f6);
int FUN_0c03d974(void);
int FUN_0c04be36(int a4);
int FUN_0c05ba98(int a4, int a5, int a6, int a7);
int FUN_0c06c44a(int a4);
int FUN_0c06ec30(int a4);
int nlRenderTextureFree(int a4);
int nlMvSendTriangle(int a4, int a5, int a6);
int FUN_0c07ce10(int a4, int a5);
int FUN_0c08ff62(int a4, int a5);
int kmiMIPallocSub(int a4, int a5, int a6);
int FUN_0c1657dc(int a4, int a5, int a6, int a7);
float FUN_0c04e526(int a4);
int FUN_0c05ab5e(void);
int FUN_0c0636b4(int a4);
int FUN_0c06a8f0(int a4, int a5);
int FUN_0c06e300(void);
int nlSysInitStripContextVtx(int a4);
int FUN_0c07d68e(int a4);
int FUN_0c090008(int a4, int a5);
int FUN_0c150038(int a4, int a5, int a6);
int kmtex_ReloadPalettized8MM(int a4, int a5, int a6, Stk2 s);
int ADXPD_ExecHndl(int a4);
int FUN_0c02df9c(void);
int nlSysInitStripContextBG(int a4);
float nlSin(int a4);
int nlUnitNormalVectorCCW(int a4, int a5, int a6, int a7);
int nlUnitNormalVectorCW(int a4, int a5, int a6, int a7);
int gdFsGetTocG(int a4, int a5, int a6, int a7);
void SJMEM_UngetChunk(int a4, int a5, int a6, int a7);
int cvFsGetFileSize(int a4, int a5, int a6, int a7);
int FUN_0c16da1c(int a4, int a5, int a6, int a7, int a8, int a9, int a10);
int FUN_0c027f28(int a4);
int FUN_0c05268c(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8);
int FUN_0c055440(void);
int FUN_0c05cd80(int a4, int a5, int a6, int a7);

int FUN_0c06383e(int a4)
{
    int stk[7];
    register int t0;
    register float u3;
    register int t5;
    register int t6;
    register int t17;
    register int t24;
    register int t7;

    t0 = *(int *)0xC1EC71C;
    t5 = t0;
    u3 = 1.0f;
    if (t0 == 2) {
        t5 = 0xC063940;
        u3 = (*(float *)0xC063940);
    }
    *(float *)0xC13B004 = u3;
    t6 = 0x0;
    for (;;) {
        if ((int)t6 >= (int)(*(int *)((a4 + 0x4)))) {
            break;
        }
        t7 = t6;
        t5 = 0x80;
        t7 = (t7 << 8);
        t7 = (t7 + (*(int *)((a4 + 0x0))));
        *(unsigned int *)((t7 + t5)) = 0x0;
        t5 = (FUN_0c05f72a(t7));
        t5 = (FUN_0c05f6fe(t7));
        t6 = (t6 + 0x1);
    }
    *(volatile int *)((a4 + 0x18));
    *(volatile int *)((((*(int *)0xC1EC71C) << 2) + 0xC13B108));
    FUN_0c07ff00();
    t17 = FUN_0c0638e6(a4);
    FUN_0c063a2a(a4, t17, 0x0, 0x0, *(int *)((int)stk + 0));
    t24 = 0x5A;
    if ((*(int *)0xC1EC71C) == 2) {
    } else {
        t24 = (*(int *)((((*(int *)((a4 + 0x14))) << 2) + 0xC10FA30)));
    }
    (((struct o58_uint *)(a4))->v) = t24;
    *(unsigned int *)((a4 + 0xC)) = ((*(int *)((a4 + 0xC))) + 0x1);
    return FUN_0c040bec(0x3, (*(int *)((a4 + 0x14))));
}

float ViewColliWall(float f4, float f5)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register float u0;
    register float u1;

    u0 = nlFloor((f4 / ((((struct o20_float *)0xC273810)->v))));
    u1 = nlFloor((f5 / ((((struct o20_float *)0xC273810)->v))));
    t1 = (((struct o4_int *)0xC273810)->v);
    t2 = (((struct o8_int *)0xC273810)->v);
    t3 = (((struct o14_int *)0xC273810)->v);
    if (((int)((t3 * ((int)u1 - t2)) + ((int)u0 - t1)) >= 0) && (t0 = (((struct o1C_int *)0xC273810)->v), (int)((t3 * ((int)u1 - t2)) + ((int)u0 - t1)) < (int)t0)) {
        if ((*(int *)(((((t3 * ((int)u1 - t2)) + ((int)u0 - t1)) << 2) + ((((struct o0_int *)0xC273810)->v))))) != 0) {
            t0 = *(int *)((((((t3 * ((int)u1 - t2)) + ((int)u0 - t1)) << 2) + ((((struct o0_int *)0xC273810)->v))) + 0x0));
            t4 = (t0 + 0x4);
            t5 = (*(short *)((t0 + 0x0)));
            for (;;) {
                if (t5 == 0) {
                    break;
                }
                t0 = *(int *)((t4 + 0x0));
                t4 = (t4 + 0x4);
                PutColliWall(t0);
                t5 = (t5 - 1);
            }
            t0 = t4;
            t4 = (*(short *)(((*(int *)((((((struct o0_int *)0xC273810)->v)) + (((t3 * ((int)u1 - t2)) + ((int)u0 - t1)) << 2)))) + 0x2)));
            for (;;) {
                if (t4 == 0) {
                    break;
                }
                t1 = *(int *)((t0 + 0x0));
                t0 = (t0 + 0x4);
                FUN_0c02cc30(t1);
                t4 = (t4 - 1);
            }
        }
    }
    return u1;
}

int kmiFBreset(void)
{
    register int t0;
    register int t1;

    t0 = (((struct o8_int *)0xC173DEC)->v);
    if (t0 != 0) {
        t1 = t0;
        for (;;) {
            t0 = *(int *)((t1 + 0x8));
            kmytex_FBFreeEntry(t1);
            t1 = t0;
            if (t1 == 0) {
                break;
            }
        }
    }
    t0 = (((struct o0_int *)0xC173DEC)->v);
    if (t0 != 0) {
        t1 = t0;
        for (;;) {
            t0 = *(int *)((t1 + 0x8));
            kmytex_FBFreeEntry(t1);
            t1 = t0;
            if (t1 == 0) {
                break;
            }
        }
    }
    t0 = (((struct o1C_int *)0xC173DEC)->v);
    if (t0 != 0) {
        t1 = t0;
        for (;;) {
            t0 = *(int *)((t1 + 0x8));
            kmytex_FBFreeEntry(t1);
            t1 = t0;
            if (t1 == 0) {
                break;
            }
        }
    }
    t0 = (((struct o14_int *)0xC173DEC)->v);
    if (t0 != 0) {
        t1 = t0;
        for (;;) {
            t0 = *(int *)((t1 + 0x8));
            kmytex_FBFreeEntry(t1);
            t1 = t0;
            if (t1 == 0) {
                break;
            }
        }
    }
    t0 = 0xC2D58CC;
    for (;;) {
        *(unsigned short *)((t0 + 0x0)) = 0x0;
        t0 = (t0 + 0x18);
        if ((unsigned int)t0 >= (unsigned int)0xC2ED8CC) {
            break;
        }
    }
    (((struct o0_uint *)0xC173DEC)->v) = 0x0;
    (((struct o4_uint *)0xC173DEC)->v) = 0x0;
    (((struct o8_uint *)0xC173DEC)->v) = 0x0;
    (((struct oC_uint *)0xC173DEC)->v) = 0x0;
    (((struct o10_uint *)0xC173DEC)->v) = 0x0;
    (((struct o14_uint *)0xC173DEC)->v) = 0x0;
    (((struct o18_uint *)0xC173DEC)->v) = 0x0;
    (((struct o1C_uint *)0xC173DEC)->v) = 0x0;
    (((struct o20_uint *)0xC173DEC)->v) = 0x0;
    (((struct o24_uint *)0xC173DEC)->v) = 0x0;
    t0 = (((struct o28_int *)0xC173DEC)->v);
    if (t0 != 0) {
        t1 = t0;
        for (;;) {
            t0 = *(int *)((t1 + 0x4));
            kmytex_VQFreeEntry(t1);
            t1 = t0;
            if (t1 == 0) {
                break;
            }
        }
    }
    (((struct o28_uint *)0xC173DEC)->v) = 0x0;
    return 0x0;
}

int FUN_0c04e88e(int a4)
{
    int stk[3];
    register int t29;

    *(unsigned int *)(((int)stk + 0)) = a4;
    nlUnitMatrix();
    (((struct o4_uint *)0xC2B1CFC)->v) = (*(int *)(((int)stk + 0)));
    FUN_0c04f224();
    CarSel_SetFog();
    FUN_0c06f550(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
    if (((((struct o0_int *)0xC2B1CFC)->v)) == 0) {
        if ((int)((((struct o0_int *)0xC2B1D70)->v)) < (int)0x3B0) {
            FUN_0c04ebe2();
        }
        FUN_0c04e9ac(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8));
        FUN_0c04eb10();
    }
    FUN_0c050104();
    FUN_0c04f518();
    FUN_0c04edcc();
    CarSel_Camera();
    if ((int)((((struct o0_int *)0xC2B1D70)->v)) >= (int)0x3B0) {
        (((struct o0_uint *)0xC2B1D70)->v) = (((((struct o0_int *)0xC2B1D70)->v)) - 1);
    }
    if ((*(int *)0xC131E58) != 0) {
        t29 = FUN_0c059074(0x0);
        if (t29 == 0) {
            Voice_ShutUp(0x0);
            FUN_0c058f64(0xC131C80, 0x0, 0x6E, 0x0);
            *(unsigned int *)0xC131E58 = 0x0;
        }
    }
    (((struct o38_uint *)0xC2B1D70)->v) = (int)(*(float *)0xC1EC800);
    return 0xC1EC800;
}

int FUN_0c057230(void)
{
    register float u0;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t8;

    (((struct o38_uint *)0xC2B3110)->v) = 0x200A;
    u0 = *(float *)0xC057354;
    t2 = (FUN_0c076230(u0, u0, u0));
    t3 = 0xC1322C0;
    t4 = 0x17F;
    t5 = 0x43;
    for (;;) {
        if ((int)((((struct o0_int *)0xC2B3110)->v)) > (int)t5) {
            t2 = (*(int *)((t3 + 0x0)));
            (((struct o4_uint *)0xC2B3110)->v) = t2;
            t2 = 0x4;
            *(float *)((0xC2B3114 + t2)) = (float)t4;
            t2 = 0xC2B3164;
            t8 = *(int *)((t2 + 0x0));
            t2 = 0x8;
            *(float *)((0xC2B3114 + t2)) = (float)(t8 + 0x148);
            t2 = 0x10;
            *(float *)((0xC2B3114 + t2)) = ((*(float *)0xC2B3174) + 1.0f);
            t2 = 0x14;
            *(float *)((0xC2B3114 + t2)) = ((*(float *)0xC2B3174) + 1.0f);
            t2 = 0x1C;
            *(float *)((0xC2B3114 + t2)) = 0.0f;
            t2 = 0x24;
            *(float *)((0xC2B3114 + t2)) = 1.0f;
            (((struct o2C_uint *)0xC2B3110)->v) = 0x0;
            t2 = (FUN_0c07ada0(0xC2B3114));
        }
        t5 = (t5 + 0x3);
        t4 = (t4 + 0x1E);
        t3 = (t3 + 0x4);
        if ((int)t5 >= (int)0x58) {
            break;
        }
    }
    return FUN_0c026ce6();
}

int FUN_0c058846(int a4, int a5)
{
    int stk[1];
    register int t0;
    register int t1;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t9;

    if (a5 == 1) {
        *(unsigned int *)(((int)stk + 0)) = 0x0;
        t0 = 0x0;
        t1 = 0x0;
        for (;;) {
            t3 = 0x1;
            t4 = (t1 + 0x1);
            t5 = ((*(int *)(((int)stk + 0))) + 0x1);
            t6 = (t0 + 0x1);
            for (;;) {
                FUN_0c05872e(0x80, t6);
                lcdSync(t5);
                t9 = lcdSync(t4);
                t3 = (t3 + 0x1);
                t4 = (t4 + 0x1);
                t5 = (t5 + 0x1);
                t6 = (t6 + 0x1);
                if ((int)t3 >= (int)0x3) {
                    break;
                }
            }
            t1 = (t1 + 0x6);
            t0 = (t0 + 0x6);
            *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + 0x6);
            if ((int)t1 >= (int)0x18) {
                break;
            }
        }
        return t9;
    }
    FUN_0c05872e(0x80, ((int)((unsigned int)a4 / (unsigned int)0x6)));
    lcdSync(a4);
    return lcdSync(a4);
}

int FUN_0c059e6a(int a4, int a5, int a6, int a7)
{
    register float u0;
    register float u1;
    register float u2;

    u0 = (((struct o0_float *)0xC2B8A7C)->v);
    u1 = (((struct o4_float *)0xC2B8A7C)->v);
    u2 = (((((float)a7 / (1.0f + 1.0f)) + (float)a5) + -30.0f) * u1);
    u2 = -u2;
    FUN_0c073360();
    FUN_0c073a30((((((float)a6 / (1.0f + 1.0f)) + (float)a4) + -40.0f) * u1), u2, -0.5f);
    nlScale(((float)(a6 + 0x2) * u0), ((float)(a7 + 0x2) * u0), 1.0f);
    u1 = ((float)(a7 + 0x2) * u0);
    if (((float)(a6 + 0x2) * u0) > ((float)(a7 + 0x2) * u0)) {
        u1 = ((float)(a6 + 0x2) * u0);
    }
    FUN_0c074f20(u1);
    nlObjPut((*(int *)0xC2B8A28));
    return nlPopMatrix(0x1);
}

int FUN_0c06b298(int a4, int a5)
{
    (((struct o0_uint *)0xC13C28C)->v) = (*(int *)(((*(int *)(((a4 << 2) + 0xC13C23C))) + (((int)((int)(((int (*)(int, int))(FUN_0c069e54))(a4, a5)) % (int)(*(int *)(((a4 << 2) + 0xC112748))))) << 2))));
    (((struct o24_uint *)0xC13C28C)->v) = (*(int *)(((*(int *)(((a5 << 2) + 0xC13C25C))) + (((int)((int)(((int (*)(void))(FUN_0c069e54))()) % (int)(*(int *)(((a5 << 2) + 0xC1127A8))))) << 2))));
    (((struct oC_uint *)0xC13C28C)->v) = (*(int *)(((*(int *)(((a4 << 2) + 0xC13C26C))) + (((int)((int)(((int (*)(void))(FUN_0c069e54))()) % (int)(*(int *)(((a4 << 2) + 0xC112810))))) << 2))));
    Voice_ShutUp(0x1);
    FUN_0c058f64(0xC13C28C, 0x1, (*(int *)(((a4 << 2) + 0xC11037C))), 0x0);
    Voice_ShutUp(0x2);
    return FUN_0c058f64(0xC13C2B0, 0x2, (*(int *)(((a5 << 2) + 0xC11039C))), 0x0);
}

int nlInitCommonTexture(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;

    nlInitTextureSurface(a4, (a5 + 0x1));
    (((struct o0_uint *)0xC2BB3E8)->v) = ((((a5 + 0x1) * 0x3C) + a4) + 0x8);
    (((struct o4_uint *)0xC2BB3E8)->v) = ((((a6 + 0x1) << 2) << 1) + ((((a5 + 0x1) * 0x3C) + a4) + 0x8));
    t0 = ((a6 + 0x1) + 0x1F);
    if ((int)((a6 + 0x1) + 0x1F) < 0) {
        t0 = (((a6 + 0x1) + 0x1F) + 0x1F);
    }
    (((struct o4_uint *)0xC147334)->v) = ((int)t0 >> 5);
    (((struct o0_uint *)0xC147334)->v) = ((a6 + 0x1) - 1);
    t1 = ((int)t0 >> 5);
    t0 = 0xFFFFFFF8;
    t2 = 0xFFFFFFFF;
    for (;;) {
        if ((int)t2 >= (int)((((struct o0_int *)0xC147334)->v))) {
            break;
        }
        t2 = (t2 + 0x1);
        *(unsigned int *)(((((((struct o0_int *)0xC2BB3E8)->v)) + t0) + 0x0)) = 0x0;
        t1 = ((((struct o0_int *)0xC2BB3E8)->v));
        t1 = (t1 + t0);
        t0 = (t0 + 0x8);
        *(unsigned int *)((t1 + 0x4)) = 0xFFFFFFFF;
    }
    t0 = 0xC147334;
    t1 = 0x0;
    t2 = 0x0;
    for (;;) {
        if ((int)t2 >= (int)((((struct o4_int *)0xC147334)->v))) {
            break;
        }
        t0 = ((((struct o4_int *)0xC2BB3E8)->v));
        t2 = (t2 + 0x1);
        *(unsigned int *)((t1 + t0)) = 0x0;
        t1 = (t1 + 0x4);
    }
    *(unsigned int *)0xC2BF8E4 = 0x0;
    return t0;
}

void nlRenderTextureEnd(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = (((struct o8_int *)0xC2BF920)->v);
    t1 = (((struct o0_int *)0xC2BF920)->v);
    if ((int)t0 >= 0) {
        t2 = *(int *)0xC2BF120;
        t3 = *(int *)(((t1 + ((t0 << 2) << 2)) + 0x4));
        if ((*(int *)((((t3 * 0x3C) + t2) + 0x28))) == 0) {
            kmRenderTexture(((t3 * 0x3C) + t2));
        }
        (((struct o0_uint *)0xA05F8068)->v) = (((*(short *)(((t1 + ((t0 << 2) << 2)) + 0xC))) - 1) << 16);
        (((struct o4_uint *)0xA05F8068)->v) = (((*(short *)(((t1 + ((t0 << 2) << 2)) + 0xE))) - 1) << 16);
        (((struct o8_uint *)0xC2BF920)->v) = 0xFFFFFFFF;
        nlSetWindowSize(((((struct oC_float *)0xC2BF920)->v)), ((((struct o10_float *)0xC2BF920)->v)), ((((struct o14_float *)0xC2BF920)->v)), ((((struct o18_float *)0xC2BF920)->v)));
        t0 = *(signed char *)0xC2BF93C;
        nlMatrixMode(0x3);
        nl_set_cnv_proj_pers();
        nlMatrixMode(t0);
    return;
    }
}

int nlDispStripLoadPalette(int a4, int a5)
{
    register int t40;
    register int t9;
    register int t15;

    t40 = 0x0;
    if ((*(int *)0xC147340) == 0) {
        t40 = 0x1;
        if ((int)a4 < (int)((((struct o0_short *)0xC2C4DA4)->v))) {
            t9 = (((struct o14_int *)0xC2C4DA4)->v);
            if ((*(short *)(((((a4 << 2) << 1) + t9) + 0x4))) != 0) {
                *(unsigned short *)(((((a4 << 2) << 1) + t9) + 0x4)) = ((*(short *)(((((a4 << 2) << 1) + t9) + 0x4))) + 0x1);
                t40 = 0x0;
            } else {
                t15 = nlSearchPalette((*(short *)((a5 + 0x2))), (*(int *)((a5 + 0x8))));
                t40 = 0x1;
                if ((int)t15 >= 0) {
                    *(unsigned char *)(((((a4 << 2) << 1) + t9) + 0x2)) = (*(signed char *)((a5 + 0x2)));
                    *(unsigned char *)(((((a4 << 2) << 1) + t9) + 0x3)) = ((int)((*(int *)((a5 + 0x8))) + 0xF) >> 4);
                    *(unsigned short *)(((((a4 << 2) << 1) + t9) + 0x4)) = 0x1;
                    *(unsigned short *)(((((a4 << 2) << 1) + t9) + 0x6)) = a4;
                    *(unsigned short *)(((((a4 << 2) << 1) + t9) + 0x0)) = t15;
                    FUN_0c06f0d0(t15, (*(int *)((a5 + 0x8))));
                    FUN_0c07215c(((t15 << 2) << 2), (*(int *)((a5 + 0x4))), (*(int *)((a5 + 0x8))));
                    t40 = 0x0;
                }
            }
        }
    }
    return t40;
}

int vmsfs_bank_change_retry(int a4, int a5)
{
    int stk[4];
    register int t3;
    register int t8;
    register int t10;
    register int t11;
    int t7;
    int t9;

    *(unsigned int *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 0)) = (*(int *)0xC2C68F0);
    for (;;) {
        t3 = vmsio_bank_change((*(int *)(((int)stk + 12))), (*(int *)(((int)stk + 8))));
        *(unsigned int *)(((int)stk + 4)) = t3;
        if (t3 == 0) {
            break;
        }
        if (((*(int *)0xC1182A4) != 0) && (t7 = *(int *)(((int)stk + 4)), t7 == 0xFFFFFF30)) {
            return 0xFFFFFF01;
        }
        t8 = *(int *)(((int)stk + 0));
        *(unsigned int *)(((int)stk + 0)) = (t8 - 1);
        if ((((t8 - 1) + 0x1) == 0) && (t9 = *(int *)0xC2C68F0, t9 != -1)) {
            t10 = *(int *)(((int)stk + 4));
            if (t10 != 0) {
                if (t10 != 0xFFFFFF01) {
                    if (t10 != 0xFFFFFF22) {
                        return 0xFFFF0000;
                    }
                    return 0xFFFFFF22;
                }
                return 0xFFFFFF01;
            }
            return 0x0;
        }
    }
    t11 = *(int *)(((int)stk + 4));
    if (t11 != 0) {
        if (t11 != 0xFFFFFF01) {
            if (t11 != 0xFFFFFF22) {
                return 0xFFFF0000;
            }
            return 0xFFFFFF22;
        }
        return 0xFFFFFF01;
    }
    return 0x0;
}

int pdInitPeripheral(int a4, int a5, int a6)
{
    register int t4;

    (((struct o0_uint *)0xC2D1268)->v) = a4;
    (((struct o4_uint *)0xC2D0D1C)->v) = 0x0;
    (((struct o0_uint *)0xC2D0D1C)->v) = 0x1;
    (((struct o8_uint *)0xC2D0D1C)->v) = 0x0;
    memset(0xC2D0D28, 0x0, 0x4E0);
    if ((a6 != 0) && (a5 != 0)) {
        (((struct o4_uint *)0xC2D0D1C)->v) = 0x1;
        kdInitSystem(a5, a6);
    }
    t4 = 0x0;
    for (;;) {
        *(unsigned int *)((((t4 * 0x34) + 0xC2D0D28) + 0x30)) = (kdGetDeviceInfo(t4));
        _pd_peripheral_set_null(((t4 * 0x34) + 0xC2D0D28));
        *(unsigned int *)((0xC2D1208 + (t4 << 2))) = 0x0;
        *(unsigned char *)((t4 + 0xC2D126E)) = 0x0;
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

int syTmrInt1Cancel(void)
{
    register int t0;

    t0 = *(signed char *)0xFFD80004;
    (((struct o0_uchar *)0xFFD80004)->v) = (t0 & 0xFD);
    (((struct o18_ushort *)0xFFD80004)->v) = (((((struct o18_short *)0xFFD80004)->v)) & 0xFFFFFFDF);
    return (t0 & 0xFD);
}

int FUN_0c029458(float f4, float f5, float f6)
{
    register float u0;

    FUN_0c028196();
    u0 = f6;
    if (0.0f > f6) {
        u0 = 0.0f;
    }
    if (!(10000.0f > u0)) {
        FUN_0c0281d4((int)(u0 / 10000.0f));
        FUN_0c0281a4(0x2E);
        FUN_0c0281d4(((int)((int)(int)(u0 * 0.00999999978f) % (int)0x64)));
        FUN_0c0281b6(0xC09DCB8);
    } else {
        FUN_0c0281d4((int)(u0 * 0.100000001f));
        FUN_0c0281a4(0x6D);
    }
    u0 = FUN_0c02806c((*(int *)0xC09DA20));
    FUN_0c027fbe((f4 - u0), f5);
    return FUN_0c02842e((*(int *)0xC09DA20));
}

int FUN_0c03d974(void)
{
    register int t0;
    register int t1;
    int t2;
    register int t3;

    FUN_0c034320(0x0, 0x14);
    t0 = FUN_0c03e700();
    t1 = 0x0;
    if (t0 == 0) {
        t1 = 0x10;
    }
    FUN_0c033e38(0x0, 0x6, t1);
    FUN_0c03457c();
    FUN_0c03346e(0xC0B7DD4, 0xC2A5808, ((*(int *)0xC2A585C) + 0x8), 0x18);
    t0 = *(int *)0xC2A585C;
    t2 = *(int *)(((((*(int *)0xC2A4680) << 2) + 0xC2A4684) + 0x0));
    t3 = 0x0;
    if ((t2 != 3) && (t2 != 5)) {
        t3 = 0x2;
    }
    FUN_0c034804(t3, (float)(-t0), 416.0f);
    FUN_0c034928(0x4213, 0xC0B57FC, 0x6, (*(int *)(((((*(int *)0xC2A4680) << 2) + 0xC2A4684) + 0x0))), (t1));
    return FUN_0c0343b8(0x0, 0x14);
}

int FUN_0c04be36(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;

    t1 = *(int *)0xC2ADEC8;
    t2 = 0x0;
    if (((int)t1 >= 0) && (t0 = (((struct o8_int *)0xC2ADF48)->v), (int)t1 < (int)t0)) {
        t2 = t1;
    }
    t0 = (((struct o8_int *)0xC2ADF48)->v);
    t1 = (t2 + 0x1);
    if ((int)(t2 + 0x1) >= (int)t0) {
        t1 = 0x0;
    }
    t3 = ((t0 + 0x1) >> 1);
    t0 = t1;
    t1 = t2;
    for (;;) {
        if (t3 == 0) {
            return 0xFFFFFFFF;
        }
        t2 = FUN_0c04c138(a4, ((((t1 << 2) << 1) << 2) + ((((struct o0_int *)0xC2ADF48)->v))));
        if (t2 != 0) {
            break;
        }
        t2 = FUN_0c04c138(a4, ((((t0 << 2) << 1) << 2) + ((((struct o0_int *)0xC2ADF48)->v))));
        if (t2 != 0) {
            return t0;
        }
        t1 = (t1 - 1);
        t2 = (((struct o8_int *)0xC2ADF48)->v);
        if ((int)t1 < 0) {
            t1 = t2;
            t1 = (t1 - 1);
        }
        t0 = (t0 + 0x1);
        t3 = (t3 - 1);
        if ((int)t0 >= (int)t2) {
            t0 = 0x0;
        }
    }
    return t1;
}

int FUN_0c05ba98(int a4, int a5, int a6, int a7)
{
    int stk[10];
    register float u0;
    register float t1;
    register float t3;
    register float t5;
    register float t7;
    register float t9;
    register int t26;

    *(unsigned int *)(((int)stk + 0)) = a5;
    u0 = *(float *)0xC05BBAC;
    t1 = nlUnitVectorsd(a4, (((int)stk + 0) + 0x1C));
    if (!(u0 > t1)) {
        t3 = nlUnitVectorsd((*(int *)(((int)stk + 0))), (((int)stk + 0) + 0x10));
        if (!(u0 > t3)) {
            nlOuterProduct((((int)stk + 0) + 0x1C), (((int)stk + 0) + 0x10), a6);
            t5 = FUN_0c073c60(a6);
            if (!(u0 > t5)) {
                nlOuterProduct((((int)stk + 0) + 0x10), a6, (((int)stk + 0) + 0x4));
                t7 = FUN_0c073b40((((int)stk + 0) + 0x1C), (((int)stk + 0) + 0x10));
                *(unsigned int *)((a7 + 0x0)) = (FUN_0c070730(t7));
                t9 = FUN_0c073b40((((int)stk + 0) + 0x4), (((int)stk + 0) + 0x1C));
                if (0.0f > t9) {
                    *(unsigned int *)((a7 + 0x0)) = (-(*(int *)((a7 + 0x0))));
                }
            } else {
                t26 = FUN_0c07ff00();
                *(unsigned int *)((a7 + 0x0)) = 0x0;
            }
        } else {
            t26 = FUN_0c07ff00();
            *(unsigned int *)((a7 + 0x0)) = 0x0;
        }
    } else {
        t26 = FUN_0c07ff00();
        *(unsigned int *)((a7 + 0x0)) = 0x0;
    }
    return t26;
}

int FUN_0c06c44a(int a4)
{
    register float t3;
    register float t5;
    register int t14;

    *(unsigned int *)((a4 + 0x0)) = ((*(int *)((a4 + 0x0))) + 0x1);
    FUN_0c07fdc8();
    t3 = nlLength(0xC175930, ((((struct o0_int *)0xC13C2F4)->v)));
    t5 = nlLength(0xC175930, (((((struct oC_int *)0xC13C2F4)->v)) + 0x24));
    if (t3 > t5) {
        *(volatile int *)0xC13C2F4;
        FUN_0c07ff00();
        (((struct o4C_float *)(a4))->v) = ((((struct o0_float *)0xC06C5E8)->v));
        (((struct o50_float *)(a4))->v) = ((((struct o4_float *)0xC06C5E8)->v));
        t14 = 0x1;
    } else {
        *(volatile int *)0xC13C300;
        FUN_0c07ff00();
        (((struct o4C_float *)(a4))->v) = ((((struct o8_float *)0xC06C5E8)->v));
        (((struct o50_float *)(a4))->v) = ((((struct oC_float *)0xC06C5E8)->v));
        t14 = 0x0;
    }
    (((struct o54_uint *)(a4))->v) = t14;
    (((struct o44_float *)(a4))->v) = 0.0f;
    (((struct o48_float *)(a4))->v) = ((((struct o10_float *)0xC06C5E8)->v));
    return 0x48;
}

int FUN_0c06ec30(int a4)
{

    register int R0;
    register int R1;
    register int R2;
    register int R3;
    register int R4;
    register int R5;
    register int R12;
    register float F1;
    register float F2;
    register float F8;
    register float F14;
    register int T_;
    R4 = a4;
    R0 = (R4);
    if ((R4 != 8)) goto L_C06EC40;
    R4 = (0x0);
    L_C06ECC8:;
    return R4;
    L_C06EC40:;
    if ((R0 != 16)) goto L_C06EC50;
    R4 = (0x1);
    goto L_C06ECC8;
    L_C06EC50:;
    R0 = (R4);
    if ((R4 != 32)) goto L_C06EC60;
    R4 = (0x2);
    goto L_C06ECC8;
    L_C06EC60:;
    if ((R0 != 64)) goto L_C06EC90;
    R4 = (0x3);
    goto L_C06ECC8;
    L_C06EC90:;
    if ((R4 != 0x80)) goto L_C06ECA0;
    R4 = (0x4);
    goto L_C06ECC8;
    L_C06ECA0:;
    if ((R4 != 0x100)) goto L_C06ECB0;
    R4 = (0x5);
    goto L_C06ECC8;
    L_C06ECB0:;
    if ((R4 != 0x200)) goto L_C06ECC0;
    R4 = (0x6);
    goto L_C06ECC8;
    L_C06ECC0:;
    if ((R4 != 0x400)) goto L_C06ECC8;
    R4 = (0x7);
    goto L_C06ECC8;
}

int nlRenderTextureFree(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t1 = (((struct o3C_int *)0xC2BF8E4)->v);
    if (((unsigned int)a4 <= (unsigned int)(*(int *)0xC2BF924)) && (t0 = *(int *)(((t1 + ((a4 << 2) << 2)) + 0x0)), (int)t0 >= 0)) {
        *(unsigned int *)(((t1 + ((a4 << 2) << 2)) + 0x0)) = 0xFFFFFFFF;
        *(unsigned int *)(((t1 + ((a4 << 2) << 2)) + 0x4)) = 0xFFFFFFFF;
        t1 = (((struct o0_int *)0xC2BF8E4)->v);
        t2 = *(int *)0xC2BB3E8;
        t3 = *(int *)((((((t0 + t1) << 2) << 1) + t2) + 0x0));
        t4 = t3;
        if (t3 != 0) {
            *(unsigned int *)(((t2 + (((t0 + t1) << 2) << 1)) + 0x0)) = 0x0;
            t2 = *(int *)0xC2BB3E8;
            t3 = *(int *)(((t2 + (((t0 + t1) << 2) << 1)) + 0x4));
            *(unsigned int *)(((t2 + (((t0 + t1) << 2) << 1)) + 0x4)) = 0xFFFFFFFF;
            t0 = nlCommonTextureClearTextureIndex(t3);
            t1 = t0;
            if ((*(int *)((((*(int *)0xC2BF120) + (t3 * 0x3C)) + 0x2C))) != 0) {
                t2 = t0;
                if ((*(int *)((((*(int *)0xC2BF120) + (t3 * 0x3C)) + 0x28))) == 0) {
                    t2 = (kmFreeTexture(((*(int *)0xC2BF120) + (t3 * 0x3C))));
                }
                *(unsigned int *)((((*(int *)0xC2BF120) + (t3 * 0x3C)) + 0x28)) = 0xFFFFFFFF;
                *(unsigned int *)((((*(int *)0xC2BF120) + (t3 * 0x3C)) + 0x2C)) = 0x0;
                *(unsigned int *)((((*(int *)0xC2BF120) + (t3 * 0x3C)) + 0x38)) = 0xFFFFFFFF;
                t1 = t2;
            }
            t4 = t1;
        }
        t0 = t4;
    }
    return t0;
}

int nlMvSendTriangle(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register float u0;

    if (((((struct o0_int *)0xC2C3DFC)->v)) == 0) {
        (((struct o0_uint *)0xC2C3DFC)->v) = 0x1;
        t0 = *(int *)(((*(int *)0xC2D0C3C) + 0x4));
        (((struct o0_uint *)0xFF000038)->v) = 0xC;
        (((struct o4_uint *)0xFF000038)->v) = 0xC;
        *(unsigned int *)((((t0 & 0x3FFFFFF) | 0xE0000000) + 0x0)) = ((((struct o20_int *)0xC2C3DFC)->v));
        *(unsigned int *)((((t0 & 0x3FFFFFF) | 0xE0000000) + 0x4)) = ((((struct o24_int *)0xC2C3DFC)->v));
        _builtin_prefetch((void *)((t0 & 0x3FFFFFF) | 0xE0000000));
        t1 = (((t0 & 0x3FFFFFF) | 0xE0000000) + 0x20);
    } else {
        t1 = ((((struct o10_int *)0xC2C3DFC)->v));
    }
    u0 = (((struct oC_float *)(a4))->v);
    *(unsigned int *)((t1 + 0x0)) = 0xFFFFFFFF;
    (((struct o4_float *)(t1))->v) = ((*(float *)((a4 + 0x0))) * u0);
    (((struct o8_float *)(t1))->v) = (((((struct o4_float *)(a4))->v)) * u0);
    (((struct oC_float *)(t1))->v) = u0;
    u0 = (((struct oC_float *)(a5))->v);
    (((struct o10_float *)(t1))->v) = ((*(float *)((a5 + 0x0))) * u0);
    (((struct o14_float *)(t1))->v) = (((((struct o4_float *)(a5))->v)) * u0);
    (((struct o18_float *)(t1))->v) = u0;
    u0 = (((struct oC_float *)(a6))->v);
    (((struct o1C_float *)(t1))->v) = ((*(float *)((a6 + 0x0))) * u0);
    _builtin_prefetch((void *)t1);
    (((struct o20_float *)(t1))->v) = (((((struct o4_float *)(a6))->v)) * u0);
    (((struct o4_float *)((t1 + 0x20)))->v) = u0;
    _builtin_prefetch((void *)(t1 + 0x20));
    (((struct o10_uint *)0xC2C3DFC)->v) = ((t1 + 0x20) + 0x20);
    return 0x4;
}

int FUN_0c07ce10(int a4, int a5)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((0xC2C3EA8 + (unsigned char)((unsigned short)a4 * (unsigned short)0x1C)));
    t1 = t0;
    if (t0 == 1) {
        t0 = *(signed char *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x1C) + 0xC2C3EA8) + 0x1));
        t1 = t0;
        if (t0 == 0) {
            syG2Write(a5, ((((((((short)a4 << 1) + (short)a4) << 2) << 2) << 1) + 0xA0800100) + 0x20), 0x4, 0x10, 0x1, 0x1);
            *(unsigned int *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x1C) + 0xC2C3EA8) + 0xC)) = (unsigned short)((((struct o2A_short *)(a5))->v));
            t0 = *(signed char *)((a5 + 0x8));
            if ((short)(unsigned char)t0 != 0) {
                if ((short)(unsigned char)t0 != 1) {
                    t1 = (short)(unsigned char)t0;
                    if (((short)(unsigned char)t0 == 2) || ((short)(unsigned char)t0 == 3)) {
                        *(unsigned short *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x1C) + 0xC2C3EA8) + 0x2)) = 0x4;
                        t1 = 0x4;
                    }
                    t0 = t1;
                } else {
                    *(unsigned short *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x1C) + 0xC2C3EA8) + 0x2)) = 0x8;
                    t0 = 0x8;
                }
                t1 = t0;
            } else {
                *(unsigned short *)((((unsigned char)((unsigned short)a4 * (unsigned short)0x1C) + 0xC2C3EA8) + 0x2)) = 0x10;
                t1 = 0x10;
            }
        }
    }
    return t1;
}

int FUN_0c08ff62(int a4, int a5)
{
    int stk[7];
    register int t6;
    register int t17;

    *(unsigned int *)(((int)stk + 24)) = a4;
    *(unsigned int *)(((int)stk + 20)) = a5;
    *(unsigned int *)(((int)stk + 4)) = (((*(int *)(((int)stk + 24))) * 0x154) + 0xC2C8D2C);
    *(unsigned int *)(((int)stk + 8)) = (*(int *)(((int)stk + 20)));
    *(unsigned int *)(((int)stk + 0)) = (((*(int *)(((int)stk + 24))) * 0x154) + 0xC2C8D2C);
    *(unsigned int *)(((*(int *)(((int)stk + 0))) + 0x30)) = 0x1;
    t6 = *(int *)(((*(int *)(((int)stk + 0))) + 0x4));
    *(unsigned int *)(((*(int *)(((int)stk + 0))) + 0x34)) = (*(int *)(((((((t6 << 1) + t6) << 2) << 2) << 1) + 0xC14787C)));
    *(unsigned int *)(((int)stk + 16)) = 0x0;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 16))) >= (int)((*(int *)(((*(int *)(((*(int *)(((int)stk + 4))) + 0x1C))) + 0x0))) + 0x1)) {
            return 0x0;
        }
        t17 = vmsfs_read_retry((*(int *)(((int)stk + 24))), (*(int *)(((int)stk + 16))), (*(int *)(((int)stk + 8))));
        *(unsigned int *)(((int)stk + 12)) = t17;
        if ((int)t17 < 0) {
            break;
        }
        *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x200);
        *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + 0x1);
    }
    return t17;
}

int kmiMIPallocSub(int a4, int a5, int a6)
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
            if ((((unsigned short)t10 & 0x4) == 0) && ((t3 = 0x2, (t3 & (unsigned short)t10) != 0) && ((t4 = 0x180, (t4 & (unsigned short)t10) != 0) && ((t11 = *(int *)((t9 + 0x10)), t12 = *(int *)(((int)stk + 4)), t3 = t12, (int)t11 >= (int)t3) && (t13 = *(int *)((t9 + 0x10)), (int)t13 < (int)t8))))) {
                t5 = ((((struct o8_int *)0xC173DD8)->v));
                if ((short)a4 == 0) {
                    t22 = ((*(int *)((t9 + 0xC))) + t5);
                } else {
                    t22 = ((*(int *)((t9 + 0xC))) - t5);
                }
                t5 = ((int)stk + 0);
                t2 = (SearchUsed(t22, t5));
                if ((t2 != 0) && (t25 = *(int *)(((int)stk + 8)), t26 = *(int *)((t2 + 0x14)), t4 = t26, t27 = *(int *)((t25 + 0x18)), t3 = t27, t28 = *(int *)((t4 + 0x18)), t4 = t28, t4 == t3)) {
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

int FUN_0c1657dc(int a4, int a5, int a6, int a7)
{
    int stk[7];
    register int t2;
    register int t6;
    register int t9;
    register int t12;
    register int t20;

    if (a4 == 0) {
        *(int *)((int)stk + 0) = 0xC17186C;
        FUN_0c16bab0(0xC17186C);
        t20 = 0x0;
    } else {
        FUN_0c16ba68(((int)stk + 4));
        t2 = FUN_0c1657b4();
        if (t2 == 0) {
            *(int *)((int)stk + 0) = 0xC171898;
            FUN_0c16bab0(0xC171898);
        } else {
            *(unsigned int *)((t2 + 0x8)) = a4;
            *(unsigned char *)((t2 + 0x1)) = 0x0;
            t6 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((a4 + 0x0))) + 0x24)))))(a4, 0x0, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
            t9 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((a4 + 0x0))) + 0x24)))))(a4, 0x1, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
            *(unsigned int *)((t2 + 0x18)) = (t6 + t9);
            *(unsigned int *)((t2 + 0x14)) = ((int)((int)(((t6 + t9) << 2) << 1) / (int)0xA));
            t12 = (t2 + 0x38);
            for (;;) {
                if ((unsigned int)t12 >= (unsigned int)((t2 + 0x38) + 0x400)) {
                    break;
                }
                *(unsigned int *)((t12 + 0x38)) = 0x0;
                t12 = (t12 + 0x40);
            }
            *(unsigned char *)((t2 + 0x0)) = 0x1;
        }
        FUN_0c16ba80(((int)stk + 4));
        t20 = t2;
    }
    return t20;
}

float FUN_0c04e526(int a4)
{
    int stk[7];
    register float t1;
    register float u15;

    *(unsigned int *)(((int)stk + 0)) = a4;
    nlSubVector3op((((int)stk + 0) + 0x10), (a4 + 0xC), 0xC175930);
    t1 = FUN_0c073c60((((int)stk + 0) + 0x10));
    FUN_0c073c40((((int)stk + 0) + 0x10), (((int)stk + 0) + 0x10), (1.0f / t1));
    FUN_0c073360();
    *(float *)(((int)stk + 4)) = 0.0f;
    *(float *)(((int)stk + 8)) = 0.0f;
    *(float *)(((int)stk + 12)) = -1.0f;
    nlRotateAY((unsigned short)(*(short *)0xC17593E));
    FUN_0c072230((((int)stk + 0) + 0x4), (((int)stk + 0) + 0x4));
    nlPopMatrix(0x1);
    *(float *)(((int)stk + 8)) = (*(float *)(((int)stk + 12)));
    *(float *)(((int)stk + 12)) = (*(float *)(((int)stk + 4)));
    *(float *)(((int)stk + 4)) = (-(*(float *)(((int)stk + 8))));
    u15 = ((*(float *)(((int)stk + 12))) * (*(float *)(((int)stk + 24))));
    u15 = u15 + (*(float *)(((int)stk + 16))) * (*(float *)(((int)stk + 4)));
    return u15;
}

int FUN_0c05ab5e(void)
{
    int t0;
    int t1;
    register int t2;
    register int t3;

    for (;;) {
        if ((int)(*(int *)0xC2B967C) <= (int)0x3) {
            break;
        }
        t2 = ((int (*)(void))(FUN_0c05b0dc))();
    }
    t2 = *(int *)0xC2B967C;
    if (((((struct o4_int *)0xC1EC71C)->v)) == 2) {
        if (t2 == 3) {
            t3 = ((int (*)(int))(FUN_0c05b0dc))(t2);
        }
    } else {
        if ((t2 == 3) && (t0 = *(int *)0xC2B92F4, t0 != 2)) {
            t0 = ((int (*)(int))(FUN_0c05b0dc))(t2);
            FUN_0c05ac3a(0x2);
        } else {
            if (t2 == 2) {
                FUN_0c05ac3a(0x2);
            }
        }
    }
    t0 = 0x0;
    if (((*(int *)0xC175C84) == 1) && (t1 = (((struct o0_int *)0xC1EC71C)->v), t1 == 0)) {
        t0 = 0x1;
    }
    return FUN_0c05b288(t0);
}

int FUN_0c0636b4(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = a4;
    t1 = 0x0;
    for (;;) {
        if ((int)t1 >= (int)(*(int *)((a4 + 0x4)))) {
            break;
        }
        t2 = (*(int *)((a4 + 0x0)));
        t3 = t1;
        t4 = 0x80;
        t3 = (t3 << 8);
        t2 = (t2 + t3);
        *(unsigned int *)((t2 + t4)) = 0x0;
        t0 = t2;
        t4 = (FUN_0c05f72a(t0));
        t0 = t2;
        t4 = (FUN_0c05f6fe(t0));
        t0 = (*(int *)((a4 + 0x0)));
        t1 = (t1 + 0x1);
        t4 = 0x88;
        t0 = (t0 + t3);
        t2 = *(int *)((t0 + t4));
        t4 = 0xC10EF34;
        t3 = (*(int *)(((t2 << 2) + t4)));
        t4 = 0xE0;
        *(unsigned int *)((t0 + t4)) = t3;
    }
    (((struct o58_uint *)(a4))->v) = 0x0;
    *(unsigned int *)((a4 + 0xC)) = ((*(int *)((a4 + 0xC))) + 0x1);
    return 0x58;
}

int FUN_0c06a8f0(int a4, int a5)
{
    register int t0;
    register int t1;

    t0 = ((int (*)(int, int))(FUN_0c069e54))(a4, a5);
    t1 = ((int (*)(void))(FUN_0c069e54))();
    (((struct o0_uint *)0xC13BB5C)->v) = (*(int *)((((((int)((int)t0 % (int)(*(int *)(((a4 << 2) + 0xC111574))))) << 2) + (*(int *)(((a4 << 2) + 0xC13BB14)))) + 0x0)));
    Voice_ShutUp(0x2);
    t0 = FUN_0c058f64(0xC13BB5C, 0x2, (*(int *)(((a4 << 2) + 0xC11039C))), 0x0);
    if ((int)a5 > (int)0x1) {
        (((struct o18_uint *)0xC13BB5C)->v) = (*(int *)((((((int)((int)t1 % (int)(*(int *)((((*(int *)((((a5 - 2) << 2) + 0xC13BB50))) + (a4 << 2)) + 0x0))))) << 2) + (*(int *)((((*(int *)((((a5 - 2) << 2) + 0xC13BB44))) + (a4 << 2)) + 0x0)))) + 0x0)));
        Voice_ShutUp(0x3);
        return FUN_0c058f64(0xC13BB74, 0x3, (*(int *)(((a4 << 2) + 0xC1103AC))), 0x0);
    }
    return t0;
}

int FUN_0c06e300(void)
{
    int stk[3];
    register int t15;

    FUN_0c07ff00();
    FUN_0c06e700(((int)stk + 0), 0xC17596C, ((((struct o0_float *)0xC112B7C)->v)));
    FUN_0c06e700(((int)stk + 0), 0xC17597C, ((((struct o4_float *)0xC112B7C)->v)));
    FUN_0c06e700(((int)stk + 0), 0xC17598C, ((((struct o8_float *)0xC112B7C)->v)));
    FUN_0c018b22(((int)stk + 0), 0x0);
    FUN_0c07ff00();
    FUN_0c06e700(((int)stk + 0), 0xC17596C, ((((struct oC_float *)0xC112B7C)->v)));
    FUN_0c06e700(((int)stk + 0), 0xC17597C, ((((struct o10_float *)0xC112B7C)->v)));
    FUN_0c06e700(((int)stk + 0), 0xC17598C, ((((struct o14_float *)0xC112B7C)->v)));
    t15 = camSetTarget(((int)stk + 0), 0x0);
    *(unsigned int *)0xC2BB3D8 = ((*(int *)0xC2BB3D8) + 0x1);
    return t15;
}

int nlSysInitStripContextVtx(int a4)
{
    *(unsigned int *)((a4 + 0x0)) = 0x3F3FFFF;
    *(unsigned int *)((a4 + 0x4)) = 0x0;
    *(unsigned int *)((a4 + 0x8)) = 0x0;
    *(unsigned int *)((a4 + 0xC)) = 0x1;
    (((struct o40_uint *)(a4))->v) = 0x0;
    *(unsigned int *)((a4 + 0x10)) = 0x0;
    *(unsigned int *)((a4 + 0x14)) = 0x4;
    *(unsigned int *)((a4 + 0x18)) = 0x0;
    *(unsigned int *)((a4 + 0x1C)) = 0x0;
    *(unsigned int *)((a4 + 0x20)) = 0x1;
    *(unsigned int *)((a4 + 0x24)) = 0x0;
    *(unsigned int *)((a4 + 0x28)) = 0x0;
    *(unsigned int *)((a4 + 0x2C)) = 0x8;
    *(unsigned int *)((a4 + 0x30)) = 0x6;
    *(unsigned int *)((a4 + 0x34)) = 0x0;
    *(unsigned int *)((a4 + 0x38)) = 0x0;
    *(unsigned int *)((a4 + 0x3C)) = 0x2;
    (((struct o40_uint *)(a4))->v) = 0x0;
    (((struct o44_uint *)(a4))->v) = 0x0;
    (((struct o48_uint *)(a4))->v) = 0x0;
    (((struct o4C_uint *)(a4))->v) = 0x0;
    (((struct o50_uint *)(a4))->v) = 0x0;
    (((struct o54_uint *)(a4))->v) = 0x0;
    (((struct o58_uint *)(a4))->v) = 0x0;
    (((struct o5C_uint *)(a4))->v) = 0x4;
    (((struct o60_uint *)(a4))->v) = 0x3;
    (((struct o6C_uint *)(a4))->v) = 0x0;
    (((struct o64_uint *)(a4))->v) = 0x0;
    (((struct o68_uint *)(a4))->v) = 0x0;
    (((struct o70_float *)(a4))->v) = 1.0f;
    (((struct o74_float *)(a4))->v) = 1.0f;
    (((struct o78_float *)(a4))->v) = 1.0f;
    (((struct o7C_float *)(a4))->v) = 1.0f;
    (((struct o80_float *)(a4))->v) = 1.0f;
    (((struct o84_float *)(a4))->v) = 1.0f;
    (((struct o88_float *)(a4))->v) = 1.0f;
    (((struct o8C_float *)(a4))->v) = 1.0f;
    kmProcessVertexRenderState(a4);
    return kmSetVertexRenderState(a4);
}

int FUN_0c07d68e(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    if (((*(int *)((a4 + 0x0))) & 1) == 0) {
        return 0xFFFFFFFF;
    }
    t0 = FUN_0c07d864(a4);
    if (t0 != 0x100) {
        if ((0x100 & (*(int *)((a4 + 0x0)))) != 0) {
            FUN_0c07d800(a4);
            *(unsigned int *)((a4 + 0x0)) = 0x0;
            return 0x0;
        }
        if (((*(int *)((a4 + 0x0))) & 0x200) != 0) {
            t0 = ((((struct o4_int *)0xC2C4128)->v));
            for (;;) {
                if ((*(int *)((t0 + 0x0))) == a4) {
                    break;
                }
                t0 = (t0 + 0x4);
                if (t0 == 0xC2C4128) {
                    t0 = 0xC2C40E8;
                }
            }
            if ((t0 + 0x4) == 0xC2C4128) {
                t1 = 0xC2C40E8;
            } else {
                t1 = (t0 + 0x4);
            }
            t2 = 0x200;
            t3 = t0;
            t0 = t1;
            for (;;) {
                if (t0 == ((((struct o0_int *)0xC2C4128)->v))) {
                    break;
                }
                t2 = (*(int *)((t0 + 0x0)));
                t0 = (t0 + 0x4);
                *(unsigned int *)((t3 + 0x0)) = t2;
                if (t0 == 0xC2C4128) {
                    t0 = 0xC2C40E8;
                }
                t3 = (t3 + 0x4);
                if (t3 == 0xC2C4128) {
                    t3 = 0xC2C40E8;
                }
            }
            (((struct o0_uint *)0xC2C4128)->v) = t3;
            *(unsigned int *)((a4 + 0x0)) = 0x0;
            return 0x0;
        }
        return 0xFFFFFF80;
    }
    *(unsigned int *)((a4 + 0x0)) = 0x0;
    return 0x0;
}

int FUN_0c090008(int a4, int a5)
{
    int stk[7];
    register int t6;
    register int t17;

    *(unsigned int *)(((int)stk + 24)) = a4;
    *(unsigned int *)(((int)stk + 20)) = a5;
    *(unsigned int *)(((int)stk + 4)) = (((*(int *)(((int)stk + 24))) * 0x154) + 0xC2C8D2C);
    *(unsigned int *)(((int)stk + 8)) = (*(int *)(((int)stk + 20)));
    *(unsigned int *)(((int)stk + 0)) = (((*(int *)(((int)stk + 24))) * 0x154) + 0xC2C8D2C);
    *(unsigned int *)(((*(int *)(((int)stk + 0))) + 0x30)) = 0x1;
    t6 = *(int *)(((*(int *)(((int)stk + 0))) + 0x4));
    *(unsigned int *)(((*(int *)(((int)stk + 0))) + 0x34)) = (*(int *)(((((((t6 << 1) + t6) << 2) << 2) << 1) + 0xC147880)));
    *(unsigned int *)(((int)stk + 16)) = 0x0;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 16))) >= (int)((*(int *)(((*(int *)(((*(int *)(((int)stk + 4))) + 0x1C))) + 0x0))) + 0x1)) {
            return 0x0;
        }
        t17 = vmsfs_write_retry((*(int *)(((int)stk + 24))), (*(int *)(((int)stk + 16))), (*(int *)(((int)stk + 8))));
        *(unsigned int *)(((int)stk + 12)) = t17;
        if ((int)t17 < 0) {
            break;
        }
        *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x200);
        *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + 0x1);
    }
    return t17;
}

int FUN_0c150038(int a4, int a5, int a6)
{
    register int t31;

    if (a4 == 0) {
        FUN_0c1616ce(0xC170958);
        t31 = 0xFFFFFFFD;
    } else {
        if ((int)a5 < 0) {
            FUN_0c1616ce(0xC170980);
            t31 = 0xFFFFFFFD;
        } else {
            if (a6 == 0) {
                FUN_0c1616ce(0xC1709AC);
                t31 = 0xFFFFFFFD;
            } else {
                t31 = 0x0;
                if ((*(signed char *)((a4 + 0x1))) == 2) {
                } else {
                    ADXCRS_Lock();
                    t31 = FUN_0c14ffa4(a4, a5, a6);
                    *(unsigned char *)((a4 + 0x2)) = 0x1;
                    ADXCRS_Unlock();
                }
            }
        }
    }
    return t31;
}

int kmtex_ReloadPalettized8MM(int a4, int a5, int a6, Stk2 s)
{
    int stk[14];
    register int t0;
    register int t4;
    register int t5;
    register int t6;
    register int t24;
    register int t25;
    register int t26;

    stk[4] = s.w[0];
    stk[5] = s.w[1];
    t0 = kmtex_GetTextureLevel(a6, a6);
    if ((int)a6 <= (int)0x2) {
        *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x4);
        kmiCopyFromFrameBuffer((((int)stk + 4) + 0x4), (*(int *)((a4 + 0x1C))), 0x8);
        if (a6 == 1) {
            *(unsigned char *)(((((int)stk + 4) + 0x4) + 0x3)) = (*(signed char *)((a5 + 0x0)));
        } else {
            t4 = ((((int)stk + 4) + 0x4) + 0x4);
            t5 = a5;
            for (;;) {
                t6 = *(signed char *)((t5 + 0x0));
                t5 = (t5 + 0x1);
                *(unsigned char *)((t4 + 0x0)) = t6;
                t4 = (t4 + 0x1);
                if ((unsigned int)t4 >= (unsigned int)((((int)stk + 4) + 0x4) + 0x8)) {
                    break;
                }
            }
        }
        *(unsigned int *)(((int)stk + 4)) = (*(int *)((a4 + 0x1C)));
        kmiPurgeCache((((int)stk + 4) + 0x4));
        kmiPurgeCache(((((int)stk + 4) + 0x4) + 0x20));
        t24 = (*(int *)(((int)stk + 4)));
        t25 = (((int)stk + 4) + 0x4);
        t26 = 0x8;
    } else {
        t26 = *(int *)(((t0 << 2) + 0xC17101C));
        *(unsigned int *)(((int)stk + 4)) = a5;
        t24 = ((*(int *)(((t0 << 2) + 0xC170FF0))) + (*(int *)((a4 + 0x1C))));
        t25 = a5;
    }
    kmiCopyToFrameBuffer(t24, t25, t26);
    return 0x0;
}

int ADXPD_ExecHndl(int a4)
{
    register int t0;
    register int t1;
    register int t3;

    if ((*(int *)((a4 + 0xC))) == 1) {
        *(unsigned int *)((a4 + 0xC)) = 0x2;
    }
    t0 = *(int *)((a4 + 0xC));
    t1 = t0;
    if (t0 == 2) {
        if ((*(int *)((a4 + 0x14))) == 1) {
            t0 = ADX_DecodeMonoFloat((*(int *)((a4 + 0x18))), (*(int *)((a4 + 0x1C))), (*(int *)((a4 + 0x20))), (a4 + 0x28), (((((struct o30_short *)(a4))->v))), ((*(short *)(((a4 + 0x30) + 0x2)))));
            *(unsigned int *)((a4 + 0x10)) = t0;
            t1 = t0;
        } else {
            *(volatile short *)(((a4 + 0x30) + 0x2));
            *(volatile short *)(((a4 + 0x30) + 0x0));
            t0 = ADX_DecodeSteFloat((*(int *)((a4 + 0x18))), (*(int *)((a4 + 0x1C))), (*(int *)((a4 + 0x20))), (a4 + 0x28), ((*(int *)((a4 + 0x24)))), ((a4 + 0x28) + 0x4), (*(short *)((a4 + 0x30))), (*(short *)((a4 + 0x32))));
            *(unsigned int *)((a4 + 0x10)) = t0;
            t3 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
            if ((int)t0 >= 0) {
                t3 = (t0 & 0x1);
            }
            t0 = t3;
            if (t3 == 1) {
                t0 = (adxpd_error());
            }
            t1 = t0;
        }
        *(unsigned int *)((a4 + 0xC)) = 0x3;
    }
    return t1;
}

int FUN_0c02df9c(void)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = 0xC1295C4;
    for (;;) {
        t1 = *(int *)((t0 + 0x0));
        *(unsigned int *)((t1 + 0x20)) = ((*(int *)((t1 + 0x20))) & 0x3F);
        t1 = *(int *)((t0 + 0x0));
        t0 = (t0 + 0x4);
        *(unsigned int *)((t1 + 0x20)) = ((*(int *)((t1 + 0x20))) | 0x941604C0);
        if ((unsigned int)t0 >= (unsigned int)0xC1295D8) {
            break;
        }
    }
    t0 = 0x0;
    for (;;) {
        t1 = t0;
        t0 = (t0 + 0x4);
        *(unsigned int *)((0xC129590 + t1)) = 0x0;
        *(unsigned int *)((0xC129580 + t1)) = 0x0;
        if ((unsigned int)t0 >= (unsigned int)0x10) {
            break;
        }
    }
    (((struct oC_uint *)0xC1295A0)->v) = 0x0;
    (((struct o8_uint *)0xC1295A0)->v) = 0x0;
    (((struct o4_uint *)0xC1295A0)->v) = 0x0;
    (((struct o0_uint *)0xC1295A0)->v) = 0x0;
    (((struct o4_uint *)0xC277804)->v) = 0x1E;
    (((struct o8_uint *)0xC277804)->v) = 0x0;
    (((struct o10_uint *)0xC277804)->v) = 0x1E;
    (((struct o14_uint *)0xC277804)->v) = 0x1;
    (((struct oC_uint *)0xC277804)->v) = 0x1;
    t0 = *(int *)0xC1EC71C;
    if (t0 == 0) {
        (((struct o0_float *)0xC277804)->v) = ((((struct o0_float *)0xC02E1A0)->v));
    } else {
        u0 = 0.0f;
        if (t0 == 1) {
            u0 = ((((struct o4_float *)0xC02E1A0)->v));
        }
        (((struct o0_float *)0xC277804)->v) = u0;
    }
    *(unsigned int *)0xC147650 = ((*(int *)0xC147650) | 0x800000);
    (((struct o18_uint *)0xC277804)->v) = 0x0;
    (((struct o10_uint *)0xC1295A0)->v) = 0x0;
    return 0xC27781C;
}

int nlSysInitStripContextBG(int a4)
{
    *(unsigned int *)((a4 + 0x0)) = 0x3F3FFFF;
    *(unsigned int *)((a4 + 0x4)) = 0x0;
    *(unsigned int *)((a4 + 0x8)) = 0x0;
    *(unsigned int *)((a4 + 0xC)) = 0x0;
    (((struct o40_uint *)(a4))->v) = 0x0;
    *(unsigned int *)((a4 + 0x10)) = 0x0;
    *(unsigned int *)((a4 + 0x14)) = 0x4;
    *(unsigned int *)((a4 + 0x18)) = 0x0;
    *(unsigned int *)((a4 + 0x1C)) = 0x0;
    *(unsigned int *)((a4 + 0x20)) = 0x1;
    *(unsigned int *)((a4 + 0x24)) = 0x0;
    *(unsigned int *)((a4 + 0x28)) = 0x0;
    *(unsigned int *)((a4 + 0x2C)) = 0xA;
    *(unsigned int *)((a4 + 0x30)) = 0xB;
    *(unsigned int *)((a4 + 0x34)) = 0x0;
    *(unsigned int *)((a4 + 0x38)) = 0x0;
    *(unsigned int *)((a4 + 0x3C)) = 0x2;
    (((struct o40_uint *)(a4))->v) = 0x0;
    (((struct o44_uint *)(a4))->v) = 0x0;
    (((struct o48_uint *)(a4))->v) = 0x1;
    (((struct o4C_uint *)(a4))->v) = 0x0;
    (((struct o50_uint *)(a4))->v) = 0x0;
    (((struct o54_uint *)(a4))->v) = 0x0;
    (((struct o58_uint *)(a4))->v) = 0x0;
    (((struct o5C_uint *)(a4))->v) = 0x4;
    (((struct o60_uint *)(a4))->v) = 0x1;
    (((struct o6C_uint *)(a4))->v) = 0x0;
    (((struct o64_uint *)(a4))->v) = 0x0;
    (((struct o68_uint *)(a4))->v) = 0x0;
    (((struct o70_float *)(a4))->v) = 1.0f;
    (((struct o74_float *)(a4))->v) = 1.0f;
    (((struct o78_float *)(a4))->v) = 1.0f;
    (((struct o7C_float *)(a4))->v) = 1.0f;
    (((struct o80_float *)(a4))->v) = 1.0f;
    (((struct o84_float *)(a4))->v) = 1.0f;
    (((struct o88_float *)(a4))->v) = 1.0f;
    (((struct o8C_float *)(a4))->v) = 1.0f;
    kmProcessVertexRenderState(a4);
    return kmSetBackGroundRenderState(a4);
}

float nlSin(int a4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    u0 = (((((float)(unsigned short)a4 * 6.28318548f) / 65536.0f) / (1.0f + 1.0f)) / 1.57079637f);
    u1 = ((((float)(unsigned short)a4 * 6.28318548f) / 65536.0f) / (1.0f + 1.0f));
    u2 = ((float)(int)(u0 + 0.5f) * 1.57079637f);
    t0 = 0xB;
    u3 = 0.0f;
    for (;;) {
        t1 = t0;
        t0 = (t0 - 2);
        u4 = ((float)t1 - u3);
        u3 = ((u1 - u2) * (u1 - u2));
        u3 = (u3 / u4);
        if ((int)t0 < (int)0x3) {
            break;
        }
    }
    u4 = 1.0f;
    u4 = u4 + (((u1 - u2) / (1.0f - u3))) * (((u1 - u2) / (1.0f - u3)));
    if (((int)(u0 + 0.5f) & 0x1) == 0) {
        return ((((u1 - u2) / (1.0f - u3)) * (1.0f + 1.0f)) / u4);
    }
    u0 = ((((u1 - u2) / (1.0f - u3)) * (1.0f + 1.0f)) / u4);
    u0 = -u0;
    return u0;
}

int nlUnitNormalVectorCCW(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register float t13;
    register float t14;

    *(float *)(((int)stk + 12)) = ((*(float *)((a5 + 0x0))) - (*(float *)((a4 + 0x0))));
    *(float *)(((int)stk + 16)) = (((((struct o4_float *)(a5))->v)) - ((((struct o4_float *)(a4))->v)));
    *(float *)(((int)stk + 20)) = (((((struct o8_float *)(a5))->v)) - ((((struct o8_float *)(a4))->v)));
    *(float *)(((int)stk + 0)) = ((*(float *)((a6 + 0x0))) - (*(float *)((a5 + 0x0))));
    *(float *)(((int)stk + 4)) = (((((struct o4_float *)(a6))->v)) - ((((struct o4_float *)(a5))->v)));
    *(float *)(((int)stk + 8)) = (((((struct o8_float *)(a6))->v)) - ((((struct o8_float *)(a5))->v)));
    nlOuterProduct((((int)stk + 0) + 0xC), ((int)stk + 0), a7);
    t13 = FUN_0c073b40(a7, a7);
    if (t13 == 0.0f) {
        return 0x0;
    }
    t14 = FUN_0c070c40(t13);
    *(float *)((a7 + 0x0)) = ((*(float *)((a7 + 0x0))) * t14);
    (((struct o4_float *)(a7))->v) = (((((struct o4_float *)(a7))->v)) * t14);
    (((struct o8_float *)(a7))->v) = (((((struct o8_float *)(a7))->v)) * t14);
    return 0x1;
}

int nlUnitNormalVectorCW(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register float t13;
    register float t14;

    *(float *)(((int)stk + 12)) = ((*(float *)((a5 + 0x0))) - (*(float *)((a4 + 0x0))));
    *(float *)(((int)stk + 16)) = (((((struct o4_float *)(a5))->v)) - ((((struct o4_float *)(a4))->v)));
    *(float *)(((int)stk + 20)) = (((((struct o8_float *)(a5))->v)) - ((((struct o8_float *)(a4))->v)));
    *(float *)(((int)stk + 0)) = ((*(float *)((a6 + 0x0))) - (*(float *)((a5 + 0x0))));
    *(float *)(((int)stk + 4)) = (((((struct o4_float *)(a6))->v)) - ((((struct o4_float *)(a5))->v)));
    *(float *)(((int)stk + 8)) = (((((struct o8_float *)(a6))->v)) - ((((struct o8_float *)(a5))->v)));
    nlOuterProduct(((int)stk + 0), (((int)stk + 0) + 0xC), a7);
    t13 = FUN_0c073b40(a7, a7);
    if (t13 == 0.0f) {
        return 0x0;
    }
    t14 = FUN_0c070c40(t13);
    *(float *)((a7 + 0x0)) = ((*(float *)((a7 + 0x0))) * t14);
    (((struct o4_float *)(a7))->v) = (((((struct o4_float *)(a7))->v)) * t14);
    (((struct o8_float *)(a7))->v) = (((((struct o8_float *)(a7))->v)) * t14);
    return 0x1;
}

int gdFsGetTocG(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = gdFsReopenHn((*(int *)(((*(int *)0xC1737EC) + 0x14))), 0x0, 0x0, 0x0);
    if (t0 == 0) {
        return 0xFFFFFFF3;
    }
    t1 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    t2 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)(((*(int *)0xC1737EC) + 0xC))) + 0x38)))))(a4, a5, a6, a7);
    if (t2 != 0) {
        *(unsigned int *)((t0 + 0x3C)) = t2;
        (((struct o50_ushort *)(t0))->v) = 0x4;
        *(unsigned int *)(((*(int *)((t0 + 0x0))) + 0x1C)) = t0;
    }
    _builtin_set_imask(((unsigned int)(((t1 & 0xF) << 2) << 2) >> 4));
    t1 = 0xFFFFFFF3;
    if (t2 == 0) {
    } else {
        t1 = (gdFsWaitCompleteReq(t0));
    }
    return t1;
}

void SJMEM_UngetChunk(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    if (((int)(*(int *)((a6 + 0x4))) > 0) && (t0 = *(int *)((a6 + 0x0)), t0 != 0)) {
        t0 = FUN_0c164b24();
        if (a5 == 0) {
            if ((*(int *)((a4 + 0x1C))) == 0) {
            } else {
                t2 = ((int (*)(int, int, int, int))((*(int *)((a4 + 0x1C)))))((*(int *)((a4 + 0x20))), 0xFFFFFFFD, a6, a7);
            }
        } else {
            if (a5 == 1) {
                t2 = *(int *)((a4 + 0x10));
                t3 = *(int *)((a6 + 0x4));
                t4 = (t2 - t3);
                if ((int)(t2 - t3) <= 0) {
                    t4 = 0x0;
                }
                *(unsigned int *)((a4 + 0x10)) = t4;
                t2 = *(int *)((a6 + 0x4));
                t3 = *(int *)((a4 + 0xC));
                t5 = *(int *)((a4 + 0x18));
                t6 = (t3 + t2);
                if ((int)t5 < (int)(t3 + t2)) {
                    t6 = t5;
                }
                *(unsigned int *)((a4 + 0xC)) = t6;
                if ((t4 != ((*(int *)((a6 + 0x0))) - (*(int *)((a4 + 0x14))))) && (t1 = *(int *)((a4 + 0x1C)), t1 != 0)) {
                    t1 = ((int (*)(int, int, int, int))((*(int *)((a4 + 0x1C)))))((*(int *)((a4 + 0x20))), 0xFFFFFFFD, t5, a7);
                }
            } else {
                *(unsigned int *)((a6 + 0x4)) = 0x0;
                *(unsigned int *)((a6 + 0x0)) = 0x0;
                if ((*(int *)((a4 + 0x1C))) != 0) {
                    t1 = ((int (*)(int, int, int, int))((*(int *)((a4 + 0x1C)))))((*(int *)((a4 + 0x20))), 0xFFFFFFFD, a6, a7);
                }
            }
        }
        SJMEM_Unlock(a4, t0);
    return;
    }
}

int cvFsGetFileSize(int a4, int a5, int a6, int a7)
{
    int stk[18];

    register int R1;
    register int R2;
    register int R3;
    register int R8;
    register int R12;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    v0_2 = a4;
    v0_0 = a5;
    v0_1 = a6;
    if ((v0_2 == 0)) goto L_C16CB56;
    FUN_0c16c85e((((int)stk + 0) + 0x24), ((int)stk + 0), v0_2);
    v0_2 = (((int)stk + 0));
    v0_3 = ((((int)stk + 0) + 0x24));
    if (((*(signed char *)((((int)stk + 0) + 0x0))) != 0)) goto L_C16CB60;
    L_C16CB56:;
    v0_0 = ((int (*)(int, int, int))(cvFsError))(0xC1726A0, v0_0, v0_1);
    L_C16CBBE:;
    v0_0 = (0x0);
    L_C16CBC4:;
    return v0_0;
    L_C16CB60:;
    if (((*(signed char *)((v0_3 + 0x0))) != 0)) goto L_C16CB7A;
    FUN_0c16c90c(v0_3);
    if (((*(signed char *)((v0_3 + 0x0))) != 0)) goto L_C16CB7A;
    v0_0 = ((int (*)(int, int, int))(cvFsError))(0xC1726C8, v0_0, v0_1);
    goto L_C16CBBE;
    L_C16CB7A:;
    v0_4 = FUN_0c16c56c(v0_3);
    v0_3 = (v0_4);
    if ((v0_4 != 0)) goto L_C16CB8E;
    v0_0 = ((int (*)(int, int, int))(cvFsError))(0xC1726F0, v0_0, v0_1);
    goto L_C16CBBE;
    L_C16CB8E:;
    if (((*(int *)((v0_3 + 0x8))) == 0)) goto L_C16CBB8;
    v0_2 = ((((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)((v0_3 + 0x8)))))(v0_2, v0_0, v0_1, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24))));
    v0_0 = (v0_2);
    goto L_C16CBC4;
    L_C16CBB8:;
    v0_0 = ((int (*)(int, int, int))(cvFsError))(0xC172714, v0_0, v0_1);
    goto L_C16CBBE;
}

int FUN_0c16da1c(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    int stk[4];
    register int t4;

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned char *)(((int)stk + 12)) = a5;
    if (_builtin_tas((char *)(*(int *)0xC16A484)) == 0) {
        *(int *)((int)stk + 4) = 0xC172EFC;
        mpdrv_dpf(0xC172EFC);
        return 0xFFFFFFFE;
    }
    *(int *)((int)stk + 4) = a9;
    *(int *)((int)stk + 0) = a8;
    t4 = FUN_0c16f81c((*(int *)(((int)stk + 8))), (*(signed char *)(((int)stk + 12))), a6, a7, a8, a9);
    if ((int)t4 > 0) {
        kdSetCallback((*(int *)(((int)stk + 8))), a10, t4);
    }
    *(unsigned char *)(((*(int *)0xC16A484) + 0x0)) = 0x0;
    if (((((struct o10E8_int *)((*(int *)0xC30817C)))->v)) != 0) {
        kdRecvFrame();
    }
    return t4;
}

int FUN_0c027f28(int a4)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = 0x0;
    if (((int)a4 >= 0) && ((int)a4 < (int)0xC)) {
        t0 = a4;
    }
    (((struct o4_uint *)0xC270D14)->v) = t0;
    t1 = *(int *)(((((((*(int *)(((t0 << 2) + 0xC128AE4))) + (*(int *)0xC2BF8E4)) << 2) << 1) + (*(int *)0xC2BB3E8)) + 0x4));
    (((struct o0_uint *)0xC270D14)->v) = (*(int *)(((t0 << 2) + 0xC128B44)));
    (((struct o24_float *)0xC270D14)->v) = (*(float *)(((t0 << 2) + 0xC128B74)));
    u0 = *(float *)(((t0 << 2) + 0xC128BA4));
    (((struct o20_float *)0xC270D14)->v) = u0;
    (((struct o1C_float *)0xC270D14)->v) = (((((struct o10_float *)0xC270D14)->v)) * u0);
    (((struct o0_uint *)0xC128A54)->v) = (((((struct o0_int *)0xC128A54)->v)) & 0xFFFFFFC0);
    (((struct o0_uint *)0xC128A54)->v) = (((((struct o0_int *)0xC128A54)->v)) | (*(int *)(((t0 << 2) + 0xC128B14))));
    t0 = 0xC128B14;
    if (((((struct o8_int *)0xC270D14)->v)) != 0) {
        (((struct o1C_float *)0xC270D14)->v) = (((((struct o1C_float *)0xC270D14)->v)) * (*(float *)0xC028104));
        t0 = 0xC028104;
    }
    (((struct o4_uint *)0xC128A54)->v) = (*(int *)((((t1 * 0x3C) + (*(int *)0xC2BF120)) + 0x34)));
    return t0;
}

int FUN_0c05268c(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;

    (((struct o0_uint *)0xC2B2A1C)->v) = (((((struct o0_int *)0xC2B2A1C)->v)) + 0x1);
    (((struct o0_float *)0xC2B2690)->v) = 1.0f;
    (((struct o4_float *)0xC2B2690)->v) = 1.0f;
    (((struct o24_uint *)0xC2B2690)->v) = 0xA;
    (((struct o18_uint *)0xC2B2690)->v) = 0x0;
    if ((int)((int)((int)((((struct o0_int *)0xC2B2A1C)->v)) % (int)0x3D)) < (int)0x32) {
        u0 = (((struct o0_float *)0xC05279C)->v);
        if (((((struct o8_int *)0xC2B2A1C)->v)) == 0) {
            t0 = ((int (*)(int, int, int, int, float, float, float, float, float))(FUN_0c052dba))(0xC2B2680, 0x265, a6, a7, ((((struct o8_float *)0xC05279C)->v)), u0, f6, f7, f8);
            t0 = ((int (*)(int, int, float, float))(FUN_0c052dba))(0xC2B2680, 0x266, ((((struct oC_float *)0xC05279C)->v)), u0);
            t0 = 0x267;
            u1 = ((((struct o10_float *)0xC05279C)->v));
        } else {
            t0 = 0x26C;
            u1 = ((((struct o14_float *)0xC05279C)->v));
        }
        t1 = ((int (*)(int, int, float, float))(FUN_0c052dba))(0xC2B2680, t0, u1, u0);
    }
    if ((int)((((struct o0_int *)0xC2B2A1C)->v)) > (int)0xB4) {
        (((struct o0_uint *)0xC2B2A1C)->v) = 0x0;
        FUN_0c05063e();
    }
    t0 = (((struct o0_int *)0xC2B2A1C)->v);
    if (t0 == 105) {
        return FUN_0c06032a(0x0);
    }
    return t0;
}

int FUN_0c055440(void)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;

    t1 = *(int *)0xC1EC720;
    t2 = ((t1 * 0x3C0) + 0xC28F530);
    if ((*(int *)0xC175C84) == 0) {
    } else {
        t3 = 0xC29072C;
        if (t1 == 0) {
            t3 = 0xC28FFFC;
        }
        t2 = t3;
    }
    t1 = 0x1;
    t3 = 0x0;
    for (;;) {
        if ((unsigned int)(*(int *)(((((t3 << 2) << 1) + (0x140 + t2)) + 0x4))) > (unsigned int)(*(int *)(((((t1 << 2) << 1) + (0x140 + t2)) + 0x4)))) {
            t3 = t1;
        }
        t1 = (t1 + 0x1);
        if ((int)t1 >= (int)0x50) {
            break;
        }
    }
    if ((t3 != 79) && (t0 = (int)(((unsigned int)(t3 << 2)) >> 31), (unsigned int)((t3 << 2) << 1) < (unsigned int)0x278)) {
        t0 = ((t3 << 2) << 1);
        for (;;) {
            *(unsigned int *)((((0x140 + t2) + t0) + 0x0)) = (*(int *)((((0x140 + t2) + t0) + 0x8)));
            t1 = ((0x140 + t2) + t0);
            t0 = (t0 + 0x8);
            *(unsigned int *)((t1 + 0x4)) = (*(int *)((t1 + 0xC)));
            if ((unsigned int)t0 >= (unsigned int)0x278) {
                break;
            }
        }
    }
    (((struct o278_uint *)((0x140 + t2)))->v) = 0x0;
    *(unsigned int *)(((0x278 + (0x140 + t2)) + 0x4)) = 0x0;
    return t3;
}

int FUN_0c05cd80(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    if (((((struct o10_int *)0xC136D68)->v)) != 0) {
        t0 = 0x0;
        for (;;) {
            *(unsigned int *)((0xC2B96D8 + (t0 << 2))) = t0;
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x4) {
                break;
            }
        }
        t0 = 0x4;
        for (;;) {
            t1 = FUN_0c070e60();
            t2 = ((~(((~t1) + 0x1) & 0x3)) + 0x1);
            if ((int)t1 >= 0) {
                t2 = (t1 & 0x3);
            }
            t1 = FUN_0c070e60();
            t3 = ((~(((~t1) + 0x1) & 0x3)) + 0x1);
            if ((int)t1 >= 0) {
                t3 = (t1 & 0x3);
            }
            t1 = *(int *)((((t2 << 2) + 0xC2B96D8) + 0x0));
            t0 = (t0 - 0x1);
            *(unsigned int *)((((t2 << 2) + 0xC2B96D8) + 0x0)) = (*(int *)((((t3 << 2) + 0xC2B96D8) + 0x0)));
            *(unsigned int *)((((t3 << 2) + 0xC2B96D8) + 0x0)) = t1;
            if (t0 == 0) {
                break;
            }
        }
        (((struct oC_uint *)0xC136D68)->v) = 0x0;
    }
    (((struct o0_uint *)0xC136D68)->v) = 0x0;
    (((struct o4_uint *)0xC136D68)->v) = 0x0;
    t0 = FUN_0c070e60();
    (((struct o8_uint *)0xC136D68)->v) = ((t0 & 0x7F) + 0x3C);
    return ((t0 & 0x7F) + 0x3C);
}
