/* Straight-line functions with calls and guards (batch gen_r): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o10E8_int { char p[0x10E8]; int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_short { char p[0x1C]; short v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o244_uint { char p[0x244]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o34_short { char p[0x34]; short v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_short { char p[0x4]; short v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_int { char p[0x40]; int v; };
struct o42_short { char p[0x42]; short v; };
struct o48_float { char p[0x48]; float v; };
struct o50_int { char p[0x50]; int v; };
struct o54_int { char p[0x54]; int v; };
struct o5C_int { char p[0x5C]; int v; };
struct o6_short { char p[0x6]; short v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o80_int { char p[0x80]; int v; };
struct o88_uint { char p[0x88]; unsigned int v; };
struct o8C_uint { char p[0x8C]; unsigned int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uint { char p[0xA8]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oFF_uchar { char p[0xFF]; unsigned char v; };
int CalcShadow2Matrix(int);
int ETD_EntryRecvFunc(int, int);
int FUN_0c01a848(void);
int FUN_0c01e6f8(int);
int FUN_0c01ecaa(int);
int FUN_0c01fb8c(int, int);
int FUN_0c030c9c(void);
int FUN_0c031b94(int, int, int, int);
int FUN_0c032210(int, int, int, int, int, int, int);
int FUN_0c032942(int, int, int, int, int);
int FUN_0c0339c0(int);
int FUN_0c03e792(int, int);
int FUN_0c04e92c(float);
int FUN_0c057f3c(int);
float FUN_0c05b422(int, float);
int FUN_0c05c198(int, int, int);
int FUN_0c05cd80(void);
int FUN_0c05d118(int, int, float);
int FUN_0c05d1b4(int, int, float);
int FUN_0c05d1bc(int, int);
int FUN_0c05f43a(int);
int FUN_0c05f6fe(int);
int FUN_0c05f72a(int);
int FUN_0c061bae(void);
extern int FUN_0c069e54();
int FUN_0c06e990(int);
int FUN_0c06f170(int);
int FUN_0c06f190(int);
int FUN_0c06f550(int, int, int);
int FUN_0c06f920(int);
int FUN_0c070e60(void);
float FUN_0c072140(int);
int FUN_0c0721f0(int, int);
int FUN_0c072230(int, int);
int FUN_0c072290(int, int);
int FUN_0c073360(void);
int FUN_0c073a60(int);
int FUN_0c074070(void);
int FUN_0c076130(float);
int FUN_0c076230(float, float, float);
int FUN_0c07ada0(int);
int FUN_0c07b6c0(int, int);
int FUN_0c07b6e6(int);
int FUN_0c07fdc8(void);
int FUN_0c07ff00(void);
int FUN_0c07ffbc(int, int, int);
int FUN_0c0800c8(int, int);
int FUN_0c080440(int, int);
int FUN_0c095a90(int, int);
int FUN_0c14bd2a(int, int);
int FUN_0c14ff0c(int);
int FUN_0c150460(int);
int FUN_0c155b78(int, int, int, int, int);
int FUN_0c160584(int, int);
int FUN_0c16ad54(int);
int FUN_0c16ad6c(int);
int FUN_0c16ada2(int, ...);
int FUN_0c16bab0(int, ...);
int FUN_0c16c56c(int);
int FUN_0c16c5d8(int);
int FUN_0c16c70a(int, int);
int FUN_0c16c85e(int, int, int);
int FUN_0c16c90c(int);
int Voice_ShutUp(int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
extern float _builtin_sqrtf(float);
extern int _builtin_tas(char *);
int _lsfts(int, int, int);
int buIsExistFile(int, int);
int buIsReady(int);
int buStat(int);
int colliNodeAlloc(void);
float cos(float);
int cvFsError(int, int, int);
int fmMngReadData(int);
int fmMngWriteData(int, int, int);
int gdFsMemcpy(int, int, int);
int kdRecvFrame(void);
int kdSetCallback(int, int, int);
int kmCreateTextureSurface(int, int, int, int);
int kmLoadTexture(int, int, int, int);
int kmiDMAtoTARequest(int, int, int, int, int);
int kmiFBSearchFree(int, int, int);
int kmiWriteRegister(int, int, int);
int memcpy(int, int, int);
int memset(int, int, int);
int mpdrv_check_port(int);
int mpdrv_dpf(int, ...);
int mpdrv_make_devicedata(int, int);
int mpdrv_set_bwrite_ns(int, int, int, int, int, int, int);
int mpdrv_set_dreset_ns(int);
int mwRnaAdjustBuf(int);
int mwRnaGetPlaySw(int);
int mwRnaGetTransSw(int);
int mwRnaSetPlaySw(void);
int mwlRnaAddRdPos(int);
int mwlRnaWaitTransEnd(int);
int nlGetMatrix(int);
int nlInitCommonTexture(int, int, int);
int nlInitPalette(int, int);
int nlInitSprite(int, int, int);
int nlLineSendVertex(int, int, int);
int nlLocate(int, int);
int nlMatrixMode(int);
int nlObjPutInit(void);
int nlObjPutSetLightDirectionV(int);
int nlObjPutUseViewMatrix(int);
int nlPerspective(int, float, float, float);
int nlPopMatrix(int);
int nlPrintInitFontTexture(void);
int nlPrintf(int, ...);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
float nlTan(int);
int nlUnitMatrix(void);
int pdVibSetStopTime(int, int, int, int);
int strlen(int);
int syBtExit(void);
int syCacheOCBP(int, int);
int syExtChkClearG2TimeOut(void);
int syExtChkDisableInterrupt(int);
int syExtChkDisableSyncDev(int);
int texLoadIndexed(int, int);
int nlInitPrint(void);
int cvFsGetFileSizeEx(int a4, int a5, int a6, int a7);
int FUN_0c05c1dc(int a4, int a5, int a6, int a7);
int _pow10(int a4, int a5, int a6);
int kdSetBlockWriteEx(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
float ADX_GetCoefficient(int a4, int a5, int a6, int a7);
int FUN_0c165c00(int a4, int a5);
int FUN_0c02888c(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8);
int FUN_0c0287ce(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8);
int FUN_0c0329ba(int a4, int a5, int a6, int a7, int a8, int a9);
int FUN_0c058f64(int a4, int a5, int a6, int a7);
int FUN_0c06b1a2(int a4, int a5);
int FUN_0c06ace0(int a4, int a5);
int kmSetPaletteBankData(int a4, int a5, int a6);
int fmMngExecServer(int a4, int a5, int a6);
int mpdrv_frame_recv_main(int a4);
float carGripCurve(float f4, float f5, float f6);
int FUN_0c01286c(int a4);
int FUN_0c0339fc(int a4);
int FUN_0c03e578(void);
int FUN_0c05f37e(int a4, int a5, int a6);
int FUN_0c07c8be(int a4);
int gdFsSetDirG(int a4);
int gdDcfRead_(int a4, int a5, int a6, int a7);
void syG2DmaEndIntrruptHandler(int a4, int a5, int a6, int a7);
int cvFsRemoveDir(int a4, int a5, int a6, int a7);
int cvFsMakeDir(int a4, int a5, int a6, int a7);
int padInitAnalog(void);
int SetColliObj(int a4, int a5);
int FUN_0c03232a(int a4, int a5, int a6, int a7);
int FUN_0c057756(float f4);
float FUN_0c05bdde(int a4);
int FUN_0c0646e0(int a4);
int nlCommonTextureGetNextTextureIndex(void);
int nlLoadTextureMem(int a4, int a5, int a6, int a7);
int nlProjectScreen(int a4, int a5);
int nlLineSendQuadB(int a4, int a5, int a6, int a7, float f4, float f5);
int nlLineSendQuadD(int a4, int a5, int a6, int a7, float f4, float f5);
int FUN_0c08e82a(int a4, int a5, int a6, int a7);
int FUN_0c1550c0(int a4);
int syTmrInt1SetEx(int a4, int a5, int a6, int a7);
int kdSetDeviceResetEx(int a4, int a5);
int mwRnaPause(int a4);
int cvFsChangeDir(int a4, int a5, int a6, int a7);
int Warning(float f4);
int FUN_0c01a978(void);
int CheckColliWallEdge(int a4, int a5);
int FUN_0c04f224(void);
int FUN_0c062030(int a4, int a5);
int buCalcBackupFileSize(int a4, int a5, int a6);
int FUN_0c080580(void);
int FUN_0c096228(int a4, int a5, int a6);
int kmFlushVertexBuffer(int a4);
int syExtChkExit(void);
void kmiRegisterCallback(int a4, int a5, int a6, int a7);
int cvFsSetDefDev(int a4, int a5, int a6, int a7);
int cvFsIsExistFile(int a4, int a5, int a6, int a7);
int FUN_0c019f10(void);
int FUN_0c01fbda(void);
int FUN_0c04e3c0(int a4);
int FUN_0c05ce16(int a4);

int nlInitPrint(void)
{
    int stk[1];
    register int t0;
    register int t3;
    register float u5;

    (((struct o4_uint *)0xC2BB820)->v) = 0x0;
    (((struct o8_uint *)0xC2BB820)->v) = 0x0;
    (((struct o14_uint *)0xC2BB820)->v) = 0x0;
    (((struct o4_uint *)0xC2BB868)->v) = 0xFFFFFFFF;
    (((struct o0_ushort *)0xC2BB868)->v) = 0x8;
    (((struct oC_uint *)0xC2BB820)->v) = 0x8;
    (((struct o10_uint *)0xC2BB820)->v) = 0x8;
    (((struct o0_uint *)0xC2BB820)->v) = 0x0;
    (((struct o8_float *)0xC2BB868)->v) = 0.0f;
    (((struct oC_float *)0xC2BB868)->v) = 1.0f;
    (((struct o10_float *)0xC2BB868)->v) = 0.0078125f;
    t0 = 0x0;
    for (;;) {
        t3 = (t0 << 1);
        u5 = (float)t0;
        t0 = (t0 + 0x1);
        *(float *)(((int)stk + 0)) = (u5 * ((((struct o10_float *)0xC2BB868)->v)));
        *(unsigned short *)(((t3 + 0xC2BB8BC) + 0x0)) = (*(short *)((((int)stk + 0) + 0x2)));
        if ((int)t0 >= (int)0x101) {
            break;
        }
    }
    kmCreateTextureSurface(0xC2BB894, 0x8, 0x400, 0x902);
    kmLoadTexture(0xC2BB894, (*(int *)0xC147378), 0x0, 0x0);
    return (nlPrintInitFontTexture());
}

int cvFsGetFileSizeEx(int a4, int a5, int a6, int a7)
{
    int stk[19];

    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    v0_2 = a4;
    v0_0 = a5;
    v0_1 = a6;
    *(unsigned int *)(((int)stk + 0)) = v0_0;
    if ((v0_2 == 0)) goto L_C16CBF2;
    FUN_0c16c85e((((int)stk + 0) + 0x28), (((int)stk + 0) + 0x4), v0_2);
    v0_2 = ((((int)stk + 0) + 0x4));
    v0_3 = ((((int)stk + 0) + 0x28));
    if (((*(signed char *)(((((int)stk + 0) + 0x4) + 0x0))) != 0)) goto L_C16CBFC;
    L_C16CBF2:;
    v0_0 = ((int (*)(int, int, int))(cvFsError))(0xC1726A0, v0_0, v0_1);
    L_C16CC44:;
    v0_4 = (0x0);
    L_C16CC4A:;
    return v0_4;
    L_C16CBFC:;
    if (((*(signed char *)((v0_3 + 0x0))) != 0)) goto L_C16CC16;
    FUN_0c16c90c(v0_3);
    if (((*(signed char *)((v0_3 + 0x0))) != 0)) goto L_C16CC16;
    v0_0 = ((int (*)(int, int, int))(cvFsError))(0xC1726C8, v0_0, v0_1);
    goto L_C16CC44;
    L_C16CC16:;
    v0_4 = FUN_0c16c56c(v0_3);
    v0_3 = (v0_4);
    if ((v0_4 != 0)) goto L_C16CC2A;
    v0_0 = ((int (*)(int, int, int))(cvFsError))(0xC1726F0, v0_0, v0_1);
    goto L_C16CC44;
    L_C16CC2A:;
    v0_4 = (0x5C);
    if ((((((struct o5C_int *)(v0_3))->v)) == 0)) goto L_C16CC3E;
    v0_2 = ((((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)((v0_3 + v0_4)))))(v0_2, (*(int *)(((int)stk + 0))), v0_1, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24))));
    v0_4 = (v0_2);
    goto L_C16CC4A;
    L_C16CC3E:;
    v0_0 = ((int (*)(int, int, int))(cvFsError))(0xC172714, v0_0, v0_1);
    goto L_C16CC44;
}

int FUN_0c05c1dc(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(int *)((a4 + 0x0));
    if (t0 != 0) {
        t1 = t0;
        for (;;) {
            t0 = ((int (*)(int, int, int, int))(a6))(a5, t1, a6, a7);
            if ((int)t0 < 0) {
                break;
            }
            t1 = (*(int *)((t1 + 0x4)));
            if (t1 == 0) {
                if (0x1 != 0) {
                    return ((int (*)(int, int, int, int))(0xC05C17A))(a4, a5, a6, a7);
                }
                return t0;
            }
        }
        t0 = FUN_0c05c198(a4, t1, a5);
        if (0x0 != 0) {
            return ((int (*)(int, int, int, int))(0xC05C17A))(a4, a5, a6, a7);
        }
        return t0;
    }
    return ((int (*)(int, int, int, int))(0xC05C17A))(a4, a5, a6, a7);
}

int _pow10(int a4, int a5, int a6)
{
    int stk[4];
    register int t4;
    register int t5;
    register int t8;
    register int t9;
    register int t3;

    *(unsigned int *)(((int)stk + 0)) = a6;
    *(unsigned short *)((a5 + 0x0)) = (a4 + 0x3F);
    FUN_0c095a90(a4, (((int)stk + 0) + 0x8));
    memset((*(int *)(((int)stk + 0))), 0x0, 0x8);
    t4 = 0x0;
    t5 = (((int)stk + 0) + 0x8);
    for (;;) {
        if ((*(signed char *)((t5 + 0x0))) != 0) {
            break;
        }
        t3 = (*(short *)((a5 + 0x0)));
        t4 = (t4 + 0x1);
        t5 = (t5 + 0x1);
        t3 = (t3 - 8);
        *(unsigned short *)((a5 + 0x0)) = t3;
    }
    t8 = 0x80;
    t9 = 0x0;
    for (;;) {
        if (((unsigned char)(*(signed char *)((t5 + 0x0))) & (unsigned char)t8) != 0) {
            break;
        }
        t8 = (unsigned char)t8;
        t9 = (t9 + 0x1);
        t8 = ((unsigned int)t8 >> 1);
    }
    *(unsigned int *)(((int)stk + 4)) = (0x8 - t4);
    _lsfts(t5, (0x8 - t4), t9);
    *(unsigned short *)((a5 + 0x0)) = ((*(short *)((a5 + 0x0))) - t9);
    return (memcpy((*(int *)(((int)stk + 0))), t5, (*(int *)(((int)stk + 4)))));
}

int kdSetBlockWriteEx(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
    register int t2;

    if (_builtin_tas((char *)(*(int *)0xC16A484)) == 0) {
        mpdrv_dpf(0xC1713FC);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_bwrite_ns(a4, a5, a6, a7, a8, a9, a10);
    if ((int)t2 > 0) {
        kdSetCallback(a4, a11, t2);
    }
    *(unsigned char *)(((*(int *)0xC16A484) + 0x0)) = 0x0;
    if (((((struct o10E8_int *)((*(int *)0xC30817C)))->v)) != 0) {
        kdRecvFrame();
    }
    return t2;
}

float ADX_GetCoefficient(int a4, int a5, int a6, int a7)
{
    register float t1;
    register float u2;
    register float u4;
    register float u5;

    t1 = cos((((float)a4 * (*(float *)0xC1613B4)) / (float)a5));
    u2 = _builtin_sqrtf((((_builtin_sqrtf((1.0f + 1.0f)) - t1) + (_builtin_sqrtf((1.0f + 1.0f)) + -1.0f)) * ((_builtin_sqrtf((1.0f + 1.0f)) - t1) - (_builtin_sqrtf((1.0f + 1.0f)) + -1.0f))));
    *(unsigned short *)((a6 + 0x0)) = (int)((((_builtin_sqrtf((1.0f + 1.0f)) - t1) - u2) / (_builtin_sqrtf((1.0f + 1.0f)) + -1.0f)) * ((((struct o0_float *)0xC1613BC)->v)));
    u4 = (((struct o4_float *)0xC1613BC)->v);
    u5 = ((((_builtin_sqrtf((1.0f + 1.0f)) - t1) - u2) / (_builtin_sqrtf((1.0f + 1.0f)) + -1.0f)) * (((_builtin_sqrtf((1.0f + 1.0f)) - t1) - u2) / (_builtin_sqrtf((1.0f + 1.0f)) + -1.0f)));
    *(unsigned short *)((a7 + 0x0)) = (int)(-(u5 * u4));
    return u4;
}

int FUN_0c165c00(int a4, int a5)
{
    register int t1;

    if (a4 == 0) {
        FUN_0c16bab0(0xC1718DC);
        return 0x0;
    }
    t1 = 0x0;
    for (;;) {
        if ((*(int *)((((((t1 << 2) << 2) << 2) + (a4 + 0x38)) + 0x0))) != a5) {
            t1 = (t1 + 0x1);
            if ((int)t1 >= (int)0x10) {
                break;
            }
            continue;
        }
        break;
    }
    if (t1 == 16) {
        FUN_0c16bab0(0xC171944, a5);
        return 0x0;
    }
    return (((((t1 << 2) << 2) << 2) + (a4 + 0x38)) + 0x4);
}

int FUN_0c02888c(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8)
{
    int stk[20];
    register int t0;

    *(unsigned int *)(((int)stk + 0)) = 0x15C;
    *(float *)(((int)stk + 4)) = (float)a4;
    *(float *)(((int)stk + 8)) = (float)a5;
    *(float *)(((int)stk + 12)) = 0.300000012f;
    *(float *)(((int)stk + 16)) = 1.0f;
    *(float *)(((int)stk + 20)) = 0.5f;
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 24)) = 0.0f;
    *(float *)(((int)stk + 32)) = 1.0f;
    *(float *)(((int)stk + 36)) = 0.5f;
    *(unsigned int *)(((int)stk + 40)) = 0x0;
    *(float *)(((int)stk + 44)) = 1.0f;
    *(unsigned int *)(((int)stk + 52)) = 0x705;
    *(unsigned int *)(((int)stk + 48)) = 0x2;
    t0 = ((int (*)(int, int, int, int, float, float, float, float, float))(FUN_0c07ada0))(((int)stk + 0), a5, a6, a7, f4, f5, f6, f7, f8);
    *(float *)(((int)stk + 4)) = ((float)a4 + 128.0f);
    *(float *)(((int)stk + 28)) = 0.5f;
    *(float *)(((int)stk + 36)) = 1.0f;
    return (((int (*)(int))(FUN_0c07ada0))(((int)stk + 0)));
}

int FUN_0c0287ce(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8)
{
    int stk[20];
    register int t0;

    *(unsigned int *)(((int)stk + 0)) = 0x118;
    *(float *)(((int)stk + 4)) = (float)a4;
    *(float *)(((int)stk + 8)) = (float)a5;
    *(float *)(((int)stk + 12)) = 0.300000012f;
    *(float *)(((int)stk + 16)) = 1.0f;
    *(float *)(((int)stk + 20)) = 0.5f;
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 24)) = 0.0f;
    *(float *)(((int)stk + 32)) = 1.0f;
    *(float *)(((int)stk + 36)) = 0.5f;
    *(unsigned int *)(((int)stk + 40)) = 0x0;
    *(float *)(((int)stk + 44)) = 1.0f;
    *(unsigned int *)(((int)stk + 52)) = 0x705;
    *(unsigned int *)(((int)stk + 48)) = 0x2;
    t0 = ((int (*)(int, int, int, int, float, float, float, float, float))(FUN_0c07ada0))(((int)stk + 0), a5, a6, a7, f4, f5, f6, f7, f8);
    *(float *)(((int)stk + 4)) = ((float)a4 + 128.0f);
    *(float *)(((int)stk + 28)) = 0.5f;
    *(float *)(((int)stk + 36)) = 1.0f;
    return (((int (*)(int))(FUN_0c07ada0))(((int)stk + 0)));
}

int FUN_0c0329ba(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int stk[29];

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 12)) = a5;
    *(unsigned int *)(((int)stk + 16)) = a6;
    *(unsigned int *)(((int)stk + 4)) = a7;
    memset((((int)stk + 4) + 0x10), 0x0, 0x60);
    FUN_0c0800c8((((int)stk + 4) + 0x10), 0xC0B33DC);
    FUN_0c0800c8((((int)stk + 4) + 0x22), 0xC0B33EC);
    memcpy((((int)stk + 4) + 0x44), 0xC12A92A, 0x10);
    *(unsigned int *)(((int)stk + 88)) = 0xC12B495;
    *(unsigned int *)(((int)stk + 92)) = 0xC12B4B5;
    *(unsigned short *)(((int)stk + 96)) = 0x1;
    *(unsigned short *)(((int)stk + 98)) = 0x1;
    *(unsigned int *)(((int)stk + 100)) = 0x0;
    *(unsigned short *)(((int)stk + 104)) = 0x0;
    *(unsigned int *)(((int)stk + 108)) = (*(int *)(((int)stk + 16)));
    *(unsigned int *)(((int)stk + 112)) = (*(int *)(((int)stk + 4)));
    *(int *)((int)stk + 0) = a9;
    return (FUN_0c032942((*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 12))), (((int)stk + 0) + 0x14), a8, a9));
}


int FUN_0c06b1a2(int a4, int a5)
{
    (((struct o18_uint *)0xC13C20C)->v) = (*(int *)(((*(int *)(((a5 << 2) + 0xC13C1DC))) + (((int)((int)(((int (*)(int, int))(FUN_0c069e54))(a4, a5)) % (int)(*(int *)(((a5 << 2) + 0xC1125F8))))) << 2))));
    (((struct o0_uint *)0xC13C20C)->v) = (*(int *)(((*(int *)(((a4 << 2) + 0xC13C1EC))) + (((int)((int)(((int (*)(void))(FUN_0c069e54))()) % (int)(*(int *)(((a4 << 2) + 0xC1126C8))))) << 2))));
    Voice_ShutUp(0x1);
    FUN_0c058f64(0xC13C20C, 0x1, (*(int *)(((a4 << 2) + 0xC11037C))), 0x0);
    Voice_ShutUp(0x2);
    return FUN_0c058f64(0xC13C224, 0x2, (*(int *)(((a5 << 2) + 0xC11039C))), 0x0);
}

int FUN_0c06ace0(int a4, int a5)
{
    (((struct o0_uint *)0xC13BE64)->v) = (*(int *)(((*(int *)(((a5 << 2) + 0xC13BE34))) + (((int)((int)(((int (*)(int, int))(FUN_0c069e54))(a4, a5)) % (int)(*(int *)(((a5 << 2) + 0xC111D54))))) << 2))));
    (((struct o18_uint *)0xC13BE64)->v) = (*(int *)(((*(int *)(((a4 << 2) + 0xC13BE44))) + (((int)((int)(((int (*)(void))(FUN_0c069e54))()) % (int)(*(int *)(((a4 << 2) + 0xC111DC8))))) << 2))));
    Voice_ShutUp(0x2);
    FUN_0c058f64(0xC13BE64, 0x2, (*(int *)(((a5 << 2) + 0xC11039C))), 0x0);
    Voice_ShutUp(0x1);
    return FUN_0c058f64(0xC13BE7C, 0x1, (*(int *)(((a4 << 2) + 0xC11037C))), 0x0);
}

int kmSetPaletteBankData(int a4, int a5, int a6)
{
    register int t0;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t0 = (a5 + a4);
    if ((int)(a5 + a4) > (int)0x400) {
        t0 = 0x3FF;
    }
    if ((int)a4 < (int)t0) {
        t2 = ((a4 << 2) + a6);
        t3 = ((a4 << 2) + 0x1000);
        t4 = a4;
        for (;;) {
            t5 = *(int *)((t2 + 0x0));
            t2 = (t2 + 0x4);
            kmiWriteRegister(t3, t5, a6);
            t4 = (t4 + 0x1);
            t3 = (t3 + 0x4);
            if ((int)t4 >= (int)t0) {
                break;
            }
        }
    }
    return 0x0;
}

int fmMngExecServer(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(int *)0xC1742EC;
    t1 = 0x0;
    if (t0 == 0) {
    } else {
        t2 = *(int *)((t0 + 0x1C));
        switch (t2) {
        case 0:
            break;
        case 1:
            t2 = fmMngReadData(t0);
            *(unsigned int *)(((*(int *)0xC1742EC) + 0x1C)) = 0x0;
            if (t2 != 0) {
                *(unsigned int *)(((*(int *)0xC1742EC) + 0x20)) = 0x3;
            } else {
                *(unsigned int *)(((*(int *)0xC1742EC) + 0x20)) = 0x1;
            }
            *(unsigned int *)(((*(int *)0xC1742EC) + 0x2C)) = t2;
            break;
        case 2:
            t2 = fmMngWriteData(t0, a5, a6);
            if (t2 != 1) {
                *(unsigned int *)(((*(int *)0xC1742EC) + 0x1C)) = 0x0;
                if (t2 != 0) {
                    *(unsigned int *)(((*(int *)0xC1742EC) + 0x20)) = 0x3;
                } else {
                    *(unsigned int *)(((*(int *)0xC1742EC) + 0x20)) = 0x1;
                }
                *(unsigned int *)(((*(int *)0xC1742EC) + 0x2C)) = t2;
            }
            break;
        default:
            *(unsigned int *)((t0 + 0x1C)) = 0x0;
            *(unsigned int *)(((*(int *)0xC1742EC) + 0x20)) = 0x0;
            break;
        }
        t1 = (*(int *)(((*(int *)0xC1742EC) + 0x20)));
    }
    return t1;
}

int mpdrv_frame_recv_main(int a4)
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

    t0 = a4;
    t1 = 0x0;
    for (;;) {
        if ((int)t1 >= (int)0x4) {
            break;
        }
        t2 = 0xC171AAC;
        t3 = 0xF90;
        t4 = (*(int *)(((t1 << 2) + t2)));
        t2 = (*(int *)0xC30817C);
        t3 = (t3 + t2);
        t4 = (t4 + t3);
        if ((*(signed char *)((t4 + 0x0))) != 0) {
            t4 = 0xC1699DE;
            t0 = t1;
            t2 = (mpdrv_check_port(t0));
            t0 = t1;
            t5 = 0x0;
            t0 = (t0 << 1);
            t0 = (t0 + (t1 << 2));
            t6 = t0;
            t7 = t0;
            for (;;) {
                t2 = (*(int *)0xC30817C);
                t4 = (*(signed char *)((((0xF90 + t2) + t6) + 0x0)));
                if (t4 != 0) {
                    t0 = t7;
                    t2 = (mpdrv_make_devicedata(t0, t1));
                } else {
                    t8 = t4;
                    t9 = t0;
                }
                t5 = (t5 + 0x1);
                t4 = t8;
                t0 = t9;
                t7 = (t7 + 0x1);
                t6 = (t6 + 0x1);
                if ((int)t5 >= (int)0x6) {
                    break;
                }
            }
        } else {
            t2 = t3;
        }
        t3 = t2;
        t1 = (t1 + 0x1);
    }
    return 0x0;
}

float carGripCurve(float f4, float f5, float f6)
{
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    if (0.00999999978f > f4) {
        u0 = (1.07000005f - ((f4 * 21.0f)));
    } else {
        if (0.0599999987f > f4) {
            u1 = 0.860000014f;
            u1 = u1 + ((1.0f + 1.0f)) * ((f4 + -0.00999999978f));
            u2 = u1;
        } else {
            if (0.109999999f > f4) {
                u1 = 0.959999979f;
                u1 = u1 + ((1.0f + 1.0f)) * ((f4 + -0.0599999987f));
                u3 = u1;
            } else {
                u1 = ((f4 + -0.209999993f) * 0.425000012f);
                u4 = 0.910000026f;
                if (0.209999993f > f4) {
                    u1 = ((f4 + -0.109999999f) * 1.5f);
                    u4 = 1.05999994f;
                }
                u3 = (u4 - u1);
            }
            u2 = u3;
        }
        u0 = u2;
    }
    u1 = u0;
    if (0.720000029f > u0) {
        u1 = 0.720000029f;
    }
    return u1;
}

int FUN_0c01286c(int a4)
{
    register int t0;
    register float u0;
    register float u1;

    t0 = *(int *)0xC175C80;
    if ((int)t0 < (int)0x8) {
        u0 = (((struct o0_float *)0xC012988)->v);
        (((struct o24_float *)((0x1A4 + a4)))->v) = u0;
        (((struct o24_float *)((0x84 + (0x1A4 + a4))))->v) = u0;
        u0 = (((struct o4_float *)0xC012988)->v);
        (((struct o24_float *)((0x108 + (0x1A4 + a4))))->v) = u0;
        (((struct o24_float *)((0x18C + (0x1A4 + a4))))->v) = u0;
    } else {
        if ((int)t0 < (int)0x10) {
            u0 = (((struct o8_float *)0xC012988)->v);
            (((struct o24_float *)((0x1A4 + a4)))->v) = u0;
            (((struct o24_float *)((0x84 + (0x1A4 + a4))))->v) = u0;
            u0 = ((((struct oC_float *)0xC012988)->v));
        } else {
            u1 = (((struct o10_float *)0xC012988)->v);
            (((struct o24_float *)((0x1A4 + a4)))->v) = u1;
            (((struct o24_float *)((0x84 + (0x1A4 + a4))))->v) = u1;
            u0 = ((((struct o14_float *)0xC012988)->v));
        }
        (((struct o24_float *)((0x108 + (0x1A4 + a4))))->v) = u0;
        (((struct o24_float *)((0x18C + (0x1A4 + a4))))->v) = u0;
    }
    return 0x24;
}

int FUN_0c0339fc(int a4)
{
    register int t25;

    (((struct o30_uint *)0xC2A46AC)->v) = (*(int *)(((a4 << 2) + 0xC12B794)));
    if (((int)a4 >= (int)0x1) && ((int)a4 <= (int)0x3)) {
        *(unsigned int *)0xC2A464C = 0x1;
    }
    if (a4 == 0) {
        (((struct o1C_uint *)0xC2A46AC)->v) = 0x0;
        (((struct o34_uint *)0xC2A46AC)->v) = 0x0;
        *(unsigned int *)0xC2A4FA0 = 0x0;
        if ((*(int *)0xC2A464C) != 0) {
            *(unsigned int *)0xC2A464C = 0x0;
            FUN_0c03e792(0x8, 0x1);
            FUN_0c01e6f8(0x0);
            FUN_0c01ecaa(0x0);
        }
    } else {
        (((struct o1C_uint *)0xC2A46AC)->v) = ((((((struct o1C_int *)0xC2A46AC)->v)) & 0xFFFFFFF0) | 0x2);
        (((struct o34_uint *)0xC2A46AC)->v) = 0x1;
    }
    (((struct o0_uint *)0xC2A46AC)->v) = 0x0;
    (((struct o28_uint *)0xC2A46AC)->v) = 0x0;
    t25 = 0xC2A46B0;
    for (;;) {
        *(unsigned int *)((t25 + 0x0)) = 0x0;
        t25 = (t25 + 0x4);
        if ((unsigned int)t25 >= (unsigned int)0xC2A46C8) {
            break;
        }
    }
    return FUN_0c0339c0(0x0);
}

int FUN_0c03e578(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(int *)0xC2A469C;
    t1 = t0;
    if ((t0 & 8) == 0) {
        (((struct o18_uint *)0xC2A4F98)->v) = 0x0;
        t0 = 0x0;
        for (;;) {
            t2 = buIsReady(t0);
            if (t2 == 1) {
                (((struct o18_uint *)0xC2A4F98)->v) = (((((struct o18_int *)0xC2A4F98)->v)) | ((int)0x1 << (int)t0));
            }
            t0 = (t0 + 0x1);
            if ((int)t0 > (int)0x7) {
                break;
            }
        }
        t1 = t2;
    }
    (((struct o0_uint *)0xC2A4F98)->v) = (((((struct o0_int *)0xC2A4F98)->v)) & 0xFFFFFF3F);
    t0 = (((struct o14_int *)0xC2A4F98)->v);
    t2 = t1;
    if ((int)t0 >= 0) {
        t1 = buIsExistFile(t0, 0xC0C0264);
        if (t1 == 0) {
            (((struct o0_uint *)0xC2A4F98)->v) = (((((struct o0_int *)0xC2A4F98)->v)) | 0x40);
        }
        t0 = buIsExistFile(((((struct o14_int *)0xC2A4F98)->v)), 0xC0C0274);
        t1 = t0;
        if (t0 == 0) {
            t0 = (((struct o0_int *)0xC2A4F98)->v);
            (((struct o0_uint *)0xC2A4F98)->v) = (t0 | 0x80);
            t1 = (t0 | 0x80);
        }
        t2 = t1;
    }
    return t2;
}

int FUN_0c05f37e(int a4, int a5, int a6)
{
    int stk[3];
    register int t0;
    register int t2;
    register float t4;
    register float t10;
    register int t19;

    *(unsigned int *)(((int)stk + 0)) = a6;
    t0 = *(int *)((a4 + 0x0));
    t2 = *(int *)((((a5 << 2) + (t0 + 0x10)) + 0x0));
    t4 = FUN_0c05b422((*(int *)((t0 + 0x0))), ((((struct o4_float *)(a4))->v)));
    FUN_0c05d118(((t2 << 2) + t0), (((int)stk + 0) + 0x8), t4);
    t10 = FUN_0c05b422((*(int *)(((*(int *)((a4 + 0x0))) + 0x0))), (((((struct o4_float *)(a4))->v)) + ((((struct o8_float *)(a4))->v))));
    FUN_0c05d118(((t2 << 2) + t0), (((int)stk + 0) + 0x4), t10);
    t19 = *(int *)((((t2 << 2) + t0) + 0x4));
    if ((t19 & 2) != 0) {
        *(unsigned int *)(((*(int *)(((int)stk + 0))) + 0x0)) = ((*(int *)(((int)stk + 4))) - (*(int *)(((int)stk + 8))));
    } else {
        *(float *)(((*(int *)(((int)stk + 0))) + 0x0)) = ((*(float *)(((int)stk + 4))) - (*(float *)(((int)stk + 8))));
        t19 = 0x4;
    }
    return t19;
}

int FUN_0c07c8be(int a4)
{
    register int t0;
    register int t2;

    t0 = 0xFFFFFFFD;
    if (((((struct o0_int *)0xC2C3E58)->v)) != 0) {
    } else {
        (((struct o0_uint *)0xC2C3E58)->v) = 0xFFFFFFFF;
        t0 = 0xFFFFFFFE;
        if ((a4 & 128) == 0) {
        } else {
            t2 = FUN_0c07b6e6(((((struct o4_int *)0xC2C3E58)->v)));
            t0 = 0xFFFFFFFF;
            if (t2 != 0) {
            } else {
                FUN_0c07b6c0(a4, ((((struct o4_int *)0xC2C3E58)->v)));
                t2 = (((struct o4_int *)0xC2C3E58)->v);
                (((struct o4_uint *)0xC2C3E58)->v) = (t2 + 0x4);
                if ((t2 + 0x4) == 0xA0800500) {
                    (((struct o4_uint *)0xC2C3E58)->v) = 0xA0800400;
                }
                t0 = 0x0;
            }
        }
        (((struct o0_uint *)0xC2C3E58)->v) = 0x0;
    }
    return t0;
}

int gdFsSetDirG(int a4)
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

    t0 = *(int *)((a4 + 0x0));
    t1 = *(int *)(((*(int *)0xC1737EC) + 0x10));
    t2 = *(int *)((t1 + 0x4));
    t3 = *(int *)((a4 + 0x8));
    t4 = t2;
    if ((int)t2 > (int)t0) {
        t4 = t0;
    }
    *(unsigned int *)((t1 + 0x8)) = t3;
    t3 = 0x0;
    if ((int)t4 > 0) {
        t5 = (a4 + 0x10);
        t6 = (t1 + 0x10);
        t7 = 0x0;
        for (;;) {
            t8 = t6;
            t6 = (t6 + 0x2C);
            t9 = t5;
            t5 = (t5 + 0x2C);
            gdFsMemcpy(t9, t8, 0x2C);
            t7 = (t7 + 0x1);
            if ((int)t7 >= (int)t4) {
                break;
            }
        }
        t3 = t7;
    }
    *(unsigned int *)((t1 + 0x0)) = t3;
    t1 = 0x0;
    if ((int)t2 < (int)t0) {
        t1 = 0xFFFFFFF4;
    }
    return t1;
}

int gdDcfRead_(int a4, int a5, int a6, int a7)
{
    int stk[5];

    register int R2;
    register int R3;
    int R6;
    int R13;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    v0_1 = a4;
    v0_2 = a5;
    R6 = a6;
    v0_3 = a7;
    *(unsigned int *)(((int)stk + 0)) = v0_2;
    *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x0)) = v0_1;
    *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x4)) = (*(int *)(((int)stk + 0)));
    *(unsigned int *)(((((int)stk + 0) + 0x4) + 0xC)) = 0x0;
    R13 = (R6);
    v0_0 = ((((int)stk + 0) + 0x4));
    v0_2 = (((((int)stk + 0) + 0x4) + 0x8));
    R6 = ((0x1FFFFFFF & R6));
    if ((v0_3 != 1)) goto L_C15C892;
    v0_1 = (0x11);
    L_C15C89C:;
    *(unsigned int *)((v0_2 + 0x0)) = R6;
    v0_1 = FUN_0c160584(v0_1, v0_0);
    v0_0 = (v0_1);
    if ((v0_1 == 0)) goto L_C15C8DA;
    if (((((int)R13 >> 28) & 0xE) == 10)) goto L_C15C8DA;
    v0_2 = (((((*(int *)(((int)stk + 0))) << 8) << 2) << 1));
    if (((0x1F & R13) != 0)) goto L_C15C8D4;
    FUN_0c14bd2a(R13, v0_2);
    L_C15C8DA:;
    v0_0 = (v0_0);
    L_C15C8DC:;
    return v0_0;
    L_C15C8D4:;
    syCacheOCBP(R13, v0_2);
    goto L_C15C8DA;
    L_C15C892:;
    if ((v0_3 != 0)) goto L_C15C8A0;
    v0_1 = (0x10);
    R6 = ((R6 | 0xA0000000));
    goto L_C15C89C;
    L_C15C8A0:;
    v0_0 = (0xFFFFFFEE);
    goto L_C15C8DC;
}

void syG2DmaEndIntrruptHandler(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    *(unsigned int *)((((*(int *)(((*(int *)0xC1743EC) + 0x0))) + ((((*(int *)((a4 + 0x0))) << 2) << 2) << 1)) + 0x14)) = 0x0;
    *(unsigned int *)((a4 + 0x2C)) = 0x0;
    *(unsigned int *)((a4 + 0x30)) = 0x1;
    t1 = *(int *)0xC1743EC;
    t2 = *(int *)((a4 + 0x0));
    *(unsigned int *)((((t2 << 2) + (0xEC + t1)) + 0x0)) = ((*(int *)((((t2 << 2) + (0xEC + t1)) + 0x0))) + 0x1);
    t1 = *(int *)((a4 + 0x0));
    *(unsigned int *)0xA05F6900 = ((int)0x1 << (int)(t1 + 0xF));
    *(volatile int *)0xA05F6900;
    *(volatile int *)0xA05F6900;
    if ((*(int *)((a4 + 0x1C))) != 0) {
        t2 = ((int (*)(int, int, int, int))((*(int *)((a4 + 0x1C)))))((*(int *)((a4 + 0x20))), ((int)0x1 << (int)(t1 + 0xF)), 0xC1743EC, a7);
    }
    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
}

int cvFsRemoveDir(int a4, int a5, int a6, int a7)
{
    int stk[18];

    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    v0_2 = a4;
    v0_0 = a5;
    v0_1 = a6;
    if ((v0_2 == 0)) goto L_C16D29C;
    FUN_0c16c85e((((int)stk + 0) + 0x24), ((int)stk + 0), v0_2);
    v0_2 = (((int)stk + 0));
    v0_3 = ((((int)stk + 0) + 0x24));
    if (((*(signed char *)((((int)stk + 0) + 0x0))) != 0)) goto L_C16D2A6;
    L_C16D29C:;
    v0_0 = ((int (*)(int, int, int))(cvFsError))(0xC172AAC, v0_0, v0_1);
    L_C16D2EC:;
    v0_4 = (0xFFFFFFFF);
    L_C16D2F2:;
    return v0_4;
    L_C16D2A6:;
    if (((*(signed char *)((v0_3 + 0x0))) != 0)) goto L_C16D2C0;
    FUN_0c16c90c(v0_3);
    if (((*(signed char *)((v0_3 + 0x0))) != 0)) goto L_C16D2C0;
    v0_0 = ((int (*)(int, int, int))(cvFsError))(0xC172AD4, v0_0, v0_1);
    goto L_C16D2EC;
    L_C16D2C0:;
    v0_4 = FUN_0c16c56c(v0_3);
    v0_3 = (v0_4);
    if ((v0_4 != 0)) goto L_C16D2D4;
    v0_0 = ((int (*)(int, int, int))(cvFsError))(0xC172AFC, v0_0, v0_1);
    goto L_C16D2EC;
    L_C16D2D4:;
    v0_4 = (0x54);
    if ((((((struct o54_int *)(v0_3))->v)) == 0)) goto L_C16D2E6;
    v0_2 = ((((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)((v0_3 + v0_4)))))(v0_2, v0_0, v0_1, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24))));
    v0_4 = (v0_2);
    goto L_C16D2F2;
    L_C16D2E6:;
    v0_0 = ((int (*)(int, int, int))(cvFsError))(0xC172B20, v0_0, v0_1);
    goto L_C16D2EC;
}

int cvFsMakeDir(int a4, int a5, int a6, int a7)
{
    int stk[18];

    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    v0_2 = a4;
    v0_0 = a5;
    v0_1 = a6;
    if ((v0_2 == 0)) goto L_C16D21C;
    FUN_0c16c85e((((int)stk + 0) + 0x24), ((int)stk + 0), v0_2);
    v0_2 = (((int)stk + 0));
    v0_3 = ((((int)stk + 0) + 0x24));
    if (((*(signed char *)((((int)stk + 0) + 0x0))) != 0)) goto L_C16D226;
    L_C16D21C:;
    v0_0 = ((int (*)(int, int, int))(cvFsError))(0xC172A24, v0_0, v0_1);
    L_C16D26C:;
    v0_4 = (0xFFFFFFFF);
    L_C16D272:;
    return v0_4;
    L_C16D226:;
    if (((*(signed char *)((v0_3 + 0x0))) != 0)) goto L_C16D240;
    FUN_0c16c90c(v0_3);
    if (((*(signed char *)((v0_3 + 0x0))) != 0)) goto L_C16D240;
    v0_0 = ((int (*)(int, int, int))(cvFsError))(0xC172A4C, v0_0, v0_1);
    goto L_C16D26C;
    L_C16D240:;
    v0_4 = FUN_0c16c56c(v0_3);
    v0_3 = (v0_4);
    if ((v0_4 != 0)) goto L_C16D254;
    v0_0 = ((int (*)(int, int, int))(cvFsError))(0xC172A70, v0_0, v0_1);
    goto L_C16D26C;
    L_C16D254:;
    v0_4 = (0x50);
    if ((((((struct o50_int *)(v0_3))->v)) == 0)) goto L_C16D266;
    v0_2 = ((((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)((v0_3 + v0_4)))))(v0_2, v0_0, v0_1, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24))));
    v0_4 = (v0_2);
    goto L_C16D272;
    L_C16D266:;
    v0_0 = ((int (*)(int, int, int))(cvFsError))(0xC172A90, v0_0, v0_1);
    goto L_C16D26C;
}

int padInitAnalog(void)
{
    register int t4;
    register int t5;

    (((struct o0_float *)0xC1EC80C)->v) = 0.0f;
    (((struct o4_float *)0xC1EC80C)->v) = 255.0f;
    (((struct o8_float *)0xC1EC80C)->v) = 255.0f;
    (((struct oC_float *)0xC1EC80C)->v) = 0.0f;
    (((struct o10_float *)0xC1EC80C)->v) = 255.0f;
    (((struct o14_float *)0xC1EC80C)->v) = 255.0f;
    (((struct o18_float *)0xC1EC80C)->v) = 0.0f;
    (((struct o1C_float *)0xC1EC80C)->v) = 128.0f;
    (((struct o20_float *)0xC1EC80C)->v) = 255.0f;
    (((struct o24_float *)0xC1EC80C)->v) = 255.0f;
    (((struct o2C_float *)0xC1EC80C)->v) = (float)((unsigned char)(*(signed char *)0xC17541E) - (unsigned char)(*(signed char *)0xC17541C));
    if (((((struct o2C_float *)0xC1EC80C)->v)) == 0.0f) {
        (((struct o2C_float *)0xC1EC80C)->v) = 0.0500000007f;
    }
    t4 = *(signed char *)0xC17541C;
    t5 = *(signed char *)0xC17541D;
    (((struct o28_float *)0xC1EC80C)->v) = (float)((unsigned char)t4 - (unsigned char)t5);
    if ((float)((unsigned char)t4 - (unsigned char)t5) == 0.0f) {
        (((struct o28_float *)0xC1EC80C)->v) = 0.0500000007f;
    }
    return 0x19;
}

int SetColliObj(int a4, int a5)
{
    register int t0;
    register int t12;

    t0 = colliNodeAlloc();
    if (t0 == 0) {
        *(unsigned int *)((a4 + 0x2C)) = 0x0;
        (((struct o18_float *)(a4))->v) = (*(float *)0xC02AE90);
        *(unsigned int *)((a4 + 0x24)) = 0x0;
        *(unsigned int *)((a4 + 0x20)) = 0x0;
        t12 = 0x0;
    } else {
        if ((*(int *)((0xC271D58 + (a5 << 2)))) == 0) {
            *(unsigned int *)((0xC271D58 + (a5 << 2))) = t0;
            *(unsigned int *)(((0xC271CEC + (a5 << 2)) + 0x0)) = t0;
            *(unsigned int *)((t0 + 0xC)) = 0x0;
            *(unsigned int *)((t0 + 0x8)) = 0x0;
        } else {
            *(unsigned int *)((t0 + 0x8)) = (*(int *)((((a5 << 2) + 0xC271D58) + 0x0)));
            *(unsigned int *)((t0 + 0xC)) = 0x0;
            *(unsigned int *)(((*(int *)((((a5 << 2) + 0xC271D58) + 0x0))) + 0xC)) = t0;
            *(unsigned int *)((((a5 << 2) + 0xC271D58) + 0x0)) = t0;
        }
        *(unsigned int *)((t0 + 0x0)) = a4;
        *(unsigned int *)((t0 + 0x4)) = a5;
        *(unsigned int *)((a4 + 0x2C)) = t0;
        *(unsigned int *)((a4 + 0x24)) = 0x0;
        *(unsigned int *)((a4 + 0x20)) = 0x0;
        *(unsigned int *)(((a5 << 2) + 0xC271DC4)) = ((*(int *)(((a5 << 2) + 0xC271DC4))) + 0x1);
        *(unsigned int *)0xC271E30 = ((*(int *)0xC271E30) + 0x1);
        t12 = 0x1;
    }
    return t12;
}

int FUN_0c03232a(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = 0x300;
    t1 = a6;
    if (a7 != 0) {
    } else {
        t0 = ((((struct o4_int *)0xC2AC5FC)->v));
        t1 = ((((struct o0_int *)0xC2AC5FC)->v));
    }
    t2 = FUN_0c032210(a4, a5, t1, t0, a7, (a7 == 0), 0x300);
    t0 = t2;
    if (t2 == 0) {
        t3 = FUN_0c07ffbc((0x2B0 + t1), 0xC0B3034, 0xA);
        t0 = 0xFFFF0000;
        if (t3 == 0) {
            t3 = FUN_0c031b94(0x1, (0x2B0 + t1), 0x4C, (0x2FC + t1));
            t0 = 0xFFFF0000;
            if (t3 != 1) {
            } else {
                memcpy(a6, t1, 0x300);
                t0 = t2;
            }
        }
    }
    return t0;
}

int FUN_0c057756(float f4)
{
    FUN_0c04e92c(f4);
    FUN_0c076230(1.0f, 1.0f, 1.0f);
    (((struct o0_uint *)0xC2B3114)->v) = 0x5F;
    (((struct o34_uint *)0xC2B3114)->v) = 0x2005;
    (((struct o10_float *)0xC2B3114)->v) = (((((struct o10_float *)0xC2B3164)->v)) + ((((struct o0_float *)0xC057850)->v)));
    (((struct o14_float *)0xC2B3114)->v) = (((((struct o10_float *)0xC2B3164)->v)) + ((((struct o4_float *)0xC057850)->v)));
    (((struct o4_float *)0xC2B3114)->v) = 0.0f;
    (((struct o8_float *)0xC2B3114)->v) = (float)(((((struct o0_int *)0xC2B3164)->v)) + 0x8B);
    (((struct oC_float *)0xC2B3114)->v) = ((((struct oC_float *)0xC057850)->v));
    (((struct o28_uint *)0xC2B3114)->v) = 0x0;
    FUN_0c07ada0(0xC2B3114);
    FUN_0c076230(0.0f, 0.0f, 0.0f);
    (((struct oC_float *)0xC2B3114)->v) = ((((struct o14_float *)0xC057850)->v));
    return 0xC;
}

float FUN_0c05bdde(int a4)
{
    register int t9;
    register float t13;

    (((struct o0_float *)0xC136898)->v) = (1.0f / (FUN_0c072140(((a4 >> 1) - 1))));
    (((struct o4_float *)0xC136898)->v) = (1.0f / (nlTan(((a4 >> 1) - 1))));
    FUN_0c073360();
    FUN_0c074070();
    nlGetMatrix(0xC2B9698);
    nlPopMatrix(0x1);
    t9 = (int)((unsigned int)((int)((unsigned int)(((a4 >> 1) << 1) + (a4 >> 1)) + (unsigned int)0x0)) + ((((int)0x0 > (int)(((a4 >> 1) << 1) + (a4 >> 1)))) ? 1u : 0u));
    (((struct o8_float *)0xC136898)->v) = (1.0f / (FUN_0c072140(((t9 >> 1) - 1))));
    t13 = nlTan(((t9 >> 1) - 1));
    (((struct oC_float *)0xC136898)->v) = (1.0f / t13);
    return t13;
}

int FUN_0c0646e0(int a4)
{
    register int t1;
    register int t0;
    register int t2;

    t1 = 0x0;
    for (;;) {
        if ((int)t1 >= (int)(*(int *)((a4 + 0x4)))) {
            break;
        }
        t2 = t1;
        t0 = 0x80;
        t2 = (t2 << 8);
        t2 = (t2 + (*(int *)((a4 + 0x0))));
        *(unsigned int *)((t2 + t0)) = 0x0;
        t0 = (FUN_0c05f72a(t2));
        t0 = (FUN_0c05f6fe(t2));
        t1 = (t1 + 0x1);
    }
    *(unsigned int *)((a4 + 0xC)) = ((*(int *)((a4 + 0xC))) + 0x1);
    return t0;
}

int nlCommonTextureGetNextTextureIndex(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t8;
    int t9;
    register int t10;
    register int t12;

    t0 = 0x0;
    t1 = 0x0;
    t2 = 0x0;
    t3 = 0x0;
    for (;;) {
        if ((int)t1 >= (int)(*(int *)0xC147338)) {
            return 0xFFFFFFFF;
        }
        t8 = *(int *)((t2 + (*(int *)0xC2BB3EC)));
        if (t8 != -1) {
            break;
        }
        t3 = (t3 + 0x4);
        t2 = (t2 + 0x4);
        t1 = (t1 + 0x1);
        t0 = (t0 + 0x20);
    }
    t9 = 0x1;
    t10 = 0x0;
    for (;;) {
        if ((t8 & t9) == 0) {
            break;
        }
        t9 = (t9 << 1);
        t10 = (t10 + 0x1);
    }
    t12 = *(int *)0xC2BB3EC;
    *(unsigned int *)((t3 + t12)) = ((*(int *)((t3 + t12))) | t9);
    return (t0 + t10);
}

int nlLoadTextureMem(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t0;
    register int t5;
    register int t18;
    register int t7;
    register int t8;

    *(unsigned int *)(((int)stk + 4)) = a6;
    *(unsigned int *)(((int)stk + 0)) = (a5 * 0x3C);
    t0 = *(int *)0xC2BF120;
    *(unsigned int *)0xC2BF8DC = ((*(int *)0xC2BF8DC) + 0x1);
    t5 = kmCreateTextureSurface(((a5 * 0x3C) + t0), (*(short *)((a4 + 0x0))), (*(short *)((a4 + 0x2))), (*(int *)((a4 + 0x4))));
    *(unsigned int *)((((a5 * 0x3C) + t0) + 0x28)) = t5;
    t18 = 0x1;
    if (t5 == 0) {
        t7 = *(int *)0xC14733C;
        if (t7 != 0) {
            t8 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))(t7))(a4, a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
            if (t8 != 0) {
                *(unsigned int *)(((int)stk + 4)) = t8;
            }
        }
        kmLoadTexture(((*(int *)(((int)stk + 0))) + (*(int *)0xC2BF120)), (*(int *)(((int)stk + 4))), 0x0, 0x0);
        t18 = 0x0;
    }
    return t18;
}

int nlProjectScreen(int a4, int a5)
{
    int stk[6];
    register float u3;
    register float u6;
    register float u11;
    register float u12;
    register float u17;
    register float u18;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    nlPushMatrix(0xC2BFB30);
    FUN_0c0721f0((*(int *)(((int)stk + 4))), (((int)stk + 0) + 0x8));
    u3 = *(float *)(((int)stk + 20));
    *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) * (1.0f / u3));
    *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) * (1.0f / u3));
    u6 = *(float *)0xC074A84;
    u11 = (((*(float *)(((int)stk + 8))) + 1.0f) * ((((struct o0_float *)0xC1473DC)->v)));
    u12 = ((((struct o8_float *)0xC1473DC)->v));
    u12 = u12 + u6 * u11;
    *(float *)(((*(int *)(((int)stk + 0))) + 0x0)) = u12;
    u17 = (((-((((struct oC_float *)(((int)stk + 0)))->v))) + 1.0f) * ((((struct o4_float *)0xC1473DC)->v)));
    u18 = ((((struct oC_float *)0xC1473DC)->v));
    u18 = u18 + u6 * u17;
    (((struct o4_float *)((*(int *)(((int)stk + 0)))))->v) = u18;
    return (nlPopMatrix(0x1));
}

int nlLineSendQuadB(int a4, int a5, int a6, int a7, float f4, float f5)
{
    int stk[13];

    *(unsigned int *)(((int)stk + 0)) = a7;
    (((struct o4_float *)(((int)stk + 0)))->v) = (((*(float *)((a5 + 0x0))) + f5) + f4);
    (((struct o4_float *)((((int)stk + 0) + 0x4)))->v) = ((((((struct o4_float *)(a5))->v)) - f4) + f5);
    (((struct o8_float *)((((int)stk + 0) + 0x4)))->v) = ((((struct o8_float *)(a5))->v));
    (((struct oC_float *)((((int)stk + 0) + 0x4)))->v) = (((*(float *)((a5 + 0x0))) - f5) + f4);
    (((struct o4_float *)(((((int)stk + 0) + 0x4) + 0xC)))->v) = ((((((struct o4_float *)(a5))->v)) + f4) + f5);
    (((struct o8_float *)(((((int)stk + 0) + 0x4) + 0xC)))->v) = ((((struct o8_float *)(a5))->v));
    (((struct o18_float *)((((int)stk + 0) + 0x4)))->v) = ((*(float *)((a6 + 0x0))) + f5);
    (((struct o4_float *)(((((int)stk + 0) + 0x4) + 0x18)))->v) = (((((struct o4_float *)(a6))->v)) - f4);
    (((struct o8_float *)(((((int)stk + 0) + 0x4) + 0x18)))->v) = ((((struct o8_float *)(a6))->v));
    (((struct o24_float *)((((int)stk + 0) + 0x4)))->v) = ((*(float *)((a6 + 0x0))) - f5);
    (((struct o4_float *)(((((int)stk + 0) + 0x4) + 0x24)))->v) = (((((struct o4_float *)(a6))->v)) + f4);
    (((struct o8_float *)(((((int)stk + 0) + 0x4) + 0x24)))->v) = ((((struct o8_float *)(a6))->v));
    return (nlLineSendVertex(a4, (((int)stk + 0) + 0x4), (*(int *)(((int)stk + 0)))));
}

int nlLineSendQuadD(int a4, int a5, int a6, int a7, float f4, float f5)
{
    int stk[13];

    *(unsigned int *)(((int)stk + 0)) = a7;
    (((struct o4_float *)(((int)stk + 0)))->v) = ((*(float *)((a5 + 0x0))) + f5);
    (((struct o4_float *)((((int)stk + 0) + 0x4)))->v) = (((((struct o4_float *)(a5))->v)) - f4);
    (((struct o8_float *)((((int)stk + 0) + 0x4)))->v) = ((((struct o8_float *)(a5))->v));
    (((struct oC_float *)((((int)stk + 0) + 0x4)))->v) = ((*(float *)((a5 + 0x0))) - f5);
    (((struct o4_float *)(((((int)stk + 0) + 0x4) + 0xC)))->v) = (((((struct o4_float *)(a5))->v)) + f4);
    (((struct o8_float *)(((((int)stk + 0) + 0x4) + 0xC)))->v) = ((((struct o8_float *)(a5))->v));
    (((struct o18_float *)((((int)stk + 0) + 0x4)))->v) = (((*(float *)((a6 + 0x0))) + f5) - f4);
    (((struct o4_float *)(((((int)stk + 0) + 0x4) + 0x18)))->v) = ((((((struct o4_float *)(a6))->v)) - f4) - f5);
    (((struct o8_float *)(((((int)stk + 0) + 0x4) + 0x18)))->v) = ((((struct o8_float *)(a6))->v));
    (((struct o24_float *)((((int)stk + 0) + 0x4)))->v) = (((*(float *)((a6 + 0x0))) - f5) - f4);
    (((struct o4_float *)(((((int)stk + 0) + 0x4) + 0x24)))->v) = ((((((struct o4_float *)(a6))->v)) + f4) - f5);
    (((struct o8_float *)(((((int)stk + 0) + 0x4) + 0x24)))->v) = ((((struct o8_float *)(a6))->v));
    return (nlLineSendVertex(a4, (((int)stk + 0) + 0x4), (*(int *)(((int)stk + 0)))));
}

int FUN_0c08e82a(int a4, int a5, int a6, int a7)
{
    int stk[5];
    register int t11;

    *(unsigned int *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 0)) = (((*(int *)(((int)stk + 12))) * 0x154) + 0xC2C8D2C);
    *(unsigned int *)(((int)stk + 8)) = 0x0;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 8))) >= (int)(*(int *)(((*(int *)(((*(int *)(((int)stk + 0))) + 0x1C))) + 0x30)))) {
            return 0xFFFFFFFF;
        }
        t11 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC2C8D28) + 0xC)))))((*(int *)(((*(int *)(((int)stk + 0))) + 0x24))), ((*(int *)(((int)stk + 8))) << 1), a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
        *(unsigned int *)(((int)stk + 4)) = (unsigned short)t11;
        if (((unsigned short)t11 != 0xFFFC) && ((unsigned short)t11 != 0xFFFF)) {
            break;
        }
        *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x1);
    }
    return (*(int *)(((int)stk + 8)));
}

int FUN_0c1550c0(int a4)
{

    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R10;
    register int R11;
    register int R12;
    register int R13;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    v0_1 = a4;
    v0_0 = R13;
    v0_2 = R12;
    v0_3 = R11;
    v0_4 = R10;
    v0_0 = (v0_1);
    R12 = (v0_1);
    if (((int)v0_1 < 0)) goto L_C1550D8;
    v0_0 = ((v0_0 & 0x1F));
    L_C1550E2:;
    v0_1 = (v0_0);
    if ((v0_0 == 0)) goto L_C1550EE;
    R12 = ((R12 + (0x20 - v0_1)));
    L_C1550EE:;
    v0_1 = *(int *)0xC173DF4;
    v0_0 = (v0_1);
    if ((v0_1 == 0)) goto L_C15512E;
    R10 = (0xC173DE0);
    L_C1550F8:;
    v0_1 = (int)(*(int *)((v0_0 + 0x10))) < (int)R12;
    if (v0_1) goto L_C155128;
    v0_1 = *(int *)((v0_0 + 0xC));
    v0_2 = *(int *)((v0_0 + 0x10));
    v0_3 = *(int *)((v0_0 + 0xC));
    R11 = (((v0_1 + v0_2) - R12));
    R13 = (v0_3);
    if (((int)v0_3 > (int)((v0_1 + v0_2) - R12))) goto L_C155128;
    L_C15510C:;
    v0_2 = kmiFBSearchFree(0x1, ((*(int *)((R10 + 0x0))) + R13), R12);
    v0_1 = (v0_2);
    if ((v0_2 != 0)) goto L_C155122;
    v0_0 = (R13);
    L_C155130:;
    return v0_0;
    L_C155122:;
    v0_1 = (int)(R13 + 0x20) <= (int)R11;
    R13 = ((R13 + 0x20));
    if (v0_1) goto L_C15510C;
    L_C155128:;
    v0_1 = *(int *)((v0_0 + 0x8));
    v0_0 = (v0_1);
    if ((v0_1 != 0)) goto L_C1550F8;
    L_C15512E:;
    v0_0 = (0xFFFFFFFF);
    goto L_C155130;
    L_C1550D8:;
    v0_0 = (((~(((~v0_0) + 0x1) & 0x1F)) + 0x1));
    goto L_C1550E2;
}

int syTmrInt1SetEx(int a4, int a5, int a6, int a7)
{
    register int t19;

    t19 = 0xFFFFFFFF;
    if (((*(signed char *)0xFFD80004) & 2) == 0) {
        (((struct o0_uchar *)0xFFD80000)->v) = 0x0;
        (((struct o4_uchar *)0xFFD80000)->v) = ((*(signed char *)0xFFD80004) & 0xFD);
        (((struct o1C_ushort *)0xFFD80000)->v) = a7;
        if (a5 != 0) {
            (((struct o244_uint *)(((int)_builtin_get_vbr())))->v) = 0xC15ED0C;
            (((struct o0_uint *)0xC3021C4)->v) = a5;
            (((struct o4_uint *)0xC3021C4)->v) = a6;
            (((struct o1C_ushort *)0xFFD80000)->v) = (((((struct o1C_short *)0xFFD80000)->v)) | 0x20);
            *(unsigned short *)0xFFD00004 = (((*(short *)0xFFD00004) & 0xFFFFF0FF) | 0xF00);
            (((struct o1C_ushort *)0xFFD80000)->v) = (((((struct o1C_short *)0xFFD80000)->v)) & 0xFFFFFEFF);
        }
        (((struct o14_uint *)0xFFD80000)->v) = a4;
        (((struct o18_uint *)0xFFD80000)->v) = a4;
        (((struct o4_uchar *)0xFFD80000)->v) = ((*(signed char *)0xFFD80004) | 0x2);
        if (a5 == 0) {
            for (;;) {
                if ((((((struct o1C_short *)0xFFD80000)->v)) & 0x100) != 0) {
                    break;
                }
            }
            (((struct o4_uchar *)0xFFD80000)->v) = ((*(signed char *)0xFFD80004) & 0xFD);
            (((struct o1C_ushort *)0xFFD80000)->v) = (((((struct o1C_short *)0xFFD80000)->v)) & 0xFFFFFEFF);
        }
        t19 = 0x0;
    }
    return t19;
}

int kdSetDeviceResetEx(int a4, int a5)
{
    register int t2;

    if (_builtin_tas((char *)(*(int *)0xC16A484)) == 0) {
        mpdrv_dpf(0xC1713FC);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_dreset_ns(a4);
    if ((int)t2 > 0) {
        kdSetCallback(a4, a5, t2);
    }
    *(unsigned char *)(((*(int *)0xC16A484) + 0x0)) = 0x0;
    if (((((struct o10E8_int *)((*(int *)0xC30817C)))->v)) != 0) {
        kdRecvFrame();
    }
    return t2;
}

int mwRnaPause(int a4)
{
    int stk[2];
    register int t3;
    register int t21;

    if (a4 == 0) {
        *(int *)((int)stk + 0) = 0xC171714;
        t21 = (FUN_0c16ada2(0xC171714));
    } else {
        FUN_0c16ad54(((int)stk + 4));
        if ((*(signed char *)((a4 + 0x7))) == 0) {
            t3 = mwRnaGetPlaySw(a4);
            (((struct o88_uint *)(a4))->v) = ((t3 << 1) | (mwRnaGetTransSw(a4)));
            mwlRnaAddRdPos(a4);
            mwRnaSetPlaySw();
            *(unsigned char *)((a4 + 0x7)) = 0x1;
            if ((unsigned char)(*(signed char *)((a4 + 0x5))) == 1) {
                (((struct o8C_uint *)(a4))->v) = 0x1;
                FUN_0c16ad6c(((int)stk + 4));
                mwlRnaWaitTransEnd(a4);
                FUN_0c16ad54(((int)stk + 4));
                (((struct o8C_uint *)(a4))->v) = 0x0;
            }
            mwRnaAdjustBuf(a4);
        }
        t21 = (FUN_0c16ad6c(((int)stk + 4)));
    }
    return t21;
}

int cvFsChangeDir(int a4, int a5, int a6, int a7)
{
    int stk[18];

    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    v0_2 = a4;
    v0_0 = a5;
    v0_1 = a6;
    if ((v0_2 == 0)) goto L_C16CE08;
    FUN_0c16c85e((((int)stk + 0) + 0x24), ((int)stk + 0), v0_2);
    v0_2 = (((int)stk + 0));
    v0_3 = ((((int)stk + 0) + 0x24));
    if (((*(signed char *)((((int)stk + 0) + 0x0))) != 0)) goto L_C16CE12;
    L_C16CE08:;
    v0_0 = ((int (*)(int, int, int))(cvFsError))(0xC17282C, v0_0, v0_1);
    L_C16CE56:;
    v0_0 = (0xFFFFFFFF);
    L_C16CE5C:;
    return v0_0;
    L_C16CE12:;
    if (((*(signed char *)((v0_3 + 0x0))) != 0)) goto L_C16CE2C;
    FUN_0c16c90c(v0_3);
    if (((*(signed char *)((v0_3 + 0x0))) != 0)) goto L_C16CE2C;
    v0_0 = ((int (*)(int, int, int))(cvFsError))(0xC172854, v0_0, v0_1);
    goto L_C16CE56;
    L_C16CE2C:;
    v0_4 = FUN_0c16c56c(v0_3);
    v0_3 = (v0_4);
    if ((v0_4 != 0)) goto L_C16CE40;
    v0_0 = ((int (*)(int, int, int))(cvFsError))(0xC17287C, v0_0, v0_1);
    goto L_C16CE56;
    L_C16CE40:;
    if (((*(int *)((v0_3 + 0x3C))) == 0)) goto L_C16CE50;
    v0_2 = ((((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)((v0_3 + 0x3C)))))(v0_2, v0_0, v0_1, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24))));
    v0_0 = (v0_2);
    goto L_C16CE5C;
    L_C16CE50:;
    v0_0 = ((int (*)(int, int, int))(cvFsError))(0xC1728A0, v0_0, v0_1);
    goto L_C16CE56;
}


int FUN_0c01a978(void)
{
    int stk[2];
    register int t2;
    register int t3;
    register int t5;
    register int t7;

    *(unsigned char *)(((int)stk + 4)) = (*(signed char *)0xC097196);
    *(unsigned char *)(((int)stk + 0)) = (*(signed char *)0xC097197);
    t2 = 0x0;
    for (;;) {
        t3 = buStat(t2);
        if (t3 != -1) {
            t2 = (t2 + 0x1);
            if ((int)t2 > (int)0x7) {
                break;
            }
            continue;
        }
        return t3;
    }
    *(unsigned int *)0xC2B32DC = 0x0;
    for (;;) {
        t5 = pdVibSetStopTime((unsigned char)(*(signed char *)0xC1EC784), (((int)stk + 0) + 0x4), ((int)stk + 0), 0x1);
        if (t5 != -1) {
            break;
        }
    }
    for (;;) {
        t7 = FUN_0c057f3c((unsigned char)(*(signed char *)0xC1EC784));
        if (t7 != -1) {
            break;
        }
    }
    FUN_0c01a848();
    return (syBtExit());
}



int FUN_0c062030(int a4, int a5)
{
    int stk[2];

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
    v0_1 = a4;
    v0_2 = a5;
    *(unsigned int *)(((int)stk + 0)) = v0_1;
    *(unsigned int *)(((int)stk + 4)) = v0_2;
    v0_1 = FUN_0c061bae();
    v0_0 = (v0_1);
    if ((v0_1 == 0)) goto L_C0620A4;
    v0_1 = *(int *)0xC2B9CA4;
    v0_2 = *(int *)((v0_1 + 0xC));
    v0_0 = (v0_2);
    v0_1 = (v0_1);
    v0_3 = (0x1);
    if ((v0_2 != 7)) goto L_C0620A4;
    v0_2 = (0x0);
    v0_4 = (0x0);
    L_C062068:;
    if (!(((int)v0_2 < (int)(*(int *)((v0_1 + 0x4)))))) goto L_C06206E;
    v0_5 = (((struct o80_int *)(((v0_2 << 8) + (*(int *)((v0_1 + 0x0))))))->v);
    v0_0 = (v0_5);
    if ((v0_5 == 1)) goto L_C062066;
    v0_3 = (v0_4);
    goto L_C06206E;
    L_C06206E:;
    if ((v0_3 == 0)) goto L_C0620A4;
    v0_2 = (v0_4);
    L_C06209E:;
    if (!(((int)v0_2 < (int)(*(int *)((v0_1 + 0x4)))))) goto L_C0620A4;
    v0_0 = *(int *)((v0_1 + 0x0));
    (((struct oFF_uchar *)((v0_0 + (v0_2 << 8))))->v) = ((*(signed char *)(((0xFF + (v0_0 + (v0_2 << 8))) + 0x0))) | 0x4);
    (((struct oA4_uint *)(((*(int *)((v0_1 + 0x0))) + (v0_2 << 8))))->v) = (*(int *)(((int)stk + 0)));
    (((struct oA8_uint *)(((v0_2 << 8) + (*(int *)((v0_1 + 0x0))))))->v) = (*(int *)(((int)stk + 4)));
    v0_0 = (0xA8);
    v0_2 = ((v0_2 + 0x1));
    goto L_C06209E;
    L_C0620A4:;
    return v0_0;
    L_C062066:;
    v0_2 = ((v0_2 + 0x1));
    goto L_C062068;
}

int buCalcBackupFileSize(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;

    if (a4 == 0) {
        return 0xFFFFFF00;
    }
    if ((unsigned int)a4 > (unsigned int)0x3) {
        return 0xFFFFFF00;
    }
    if ((unsigned int)a5 > (unsigned int)0x3) {
        return 0xFFFFFF00;
    }
    t0 = *(int *)(((a4 << 2) + 0xC147534));
    t1 = *(int *)(((a5 << 2) + 0xC147544));
    t2 = 0x0;
    if ((0x1FF & (((t0 + t1) + a6) + 0x80)) != 0) {
        t2 = 0x1;
    }
    return (t2 + ((unsigned int)((unsigned int)(((t0 + t1) + a6) + 0x80) >> 8) >> 1));
}

int FUN_0c080580(void)
{
    register int t0;
    register int t6;
    register int t7;

    t0 = 0x0;
    for (;;) {
        *(unsigned int *)((0xC2C4C58 + (t0 << 2))) = (*(short *)((((t0 * 0xB0) + 0xC2C4148) + 0x0)));
        *(float *)(((((t0 << 2) << 2) + 0xC2C4C98) + 0x0)) = ((((struct o14_float *)(((t0 * 0xB0) + 0xC2C4148)))->v));
        (((struct o4_float *)((((t0 << 2) << 2) + 0xC2C4C98)))->v) = ((((struct o18_float *)(((t0 * 0xB0) + 0xC2C4148)))->v));
        (((struct o8_float *)((((t0 << 2) << 2) + 0xC2C4C98)))->v) = ((((struct o1C_float *)(((t0 * 0xB0) + 0xC2C4148)))->v));
        (((struct oC_float *)((((t0 << 2) << 2) + 0xC2C4C98)))->v) = ((((struct o20_float *)(((t0 * 0xB0) + 0xC2C4148)))->v));
        t6 = FUN_0c080440(t0, 0xC14780C);
        t7 = ((t0 * 0xB0) + 0xC2C4148);
        t0 = (t0 + 0x1);
        *(unsigned short *)((t7 + 0x0)) = 0x0;
        if ((int)t0 >= (int)0x10) {
            break;
        }
    }
    *(unsigned int *)0xC147748 = 0x0;
    return t6;
}

int FUN_0c096228(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = (int)((int)a6 / (int)0x8);
    t1 = ((~(((~a6) + 0x1) & 0x7)) + 0x1);
    if ((int)a6 >= 0) {
        t1 = (a6 & 0x7);
    }
    if (((unsigned char)(*(signed char *)(((t0 + a4) + 0x0))) & (unsigned char)((int)0x80 << (int)(-t1))) == 0) {
        t2 = 0x0;
        t3 = ((int)0x80 << (int)(-t1));
        for (;;) {
            if ((unsigned char)t3 == 0) {
                break;
            }
            t2 = (t2 | t3);
            t3 = (unsigned char)t3;
            t3 = ((unsigned int)t3 >> 1);
        }
        if (((unsigned char)(*(signed char *)(((t0 + a4) + 0x0))) & (unsigned char)t2) != 0) {
            *(unsigned char *)(((t0 + a4) + 0x0)) = ((*(signed char *)(((t0 + a4) + 0x0))) | ((int)0x80 << (int)(-t1)));
        } else {
            t3 = (t0 + a4);
            for (;;) {
                t3 = (t3 + 0x1);
                if ((unsigned int)t3 >= (unsigned int)(a4 + a5)) {
                    return (unsigned char)t2;
                }
                if ((*(signed char *)((t3 + 0x0))) != 0) {
                    break;
                }
            }
            *(unsigned char *)(((t0 + a4) + 0x0)) = ((*(signed char *)(((t0 + a4) + 0x0))) | ((int)0x80 << (int)(-t1)));
        }
        t0 = (unsigned char)t2;
    } else {
        t0 = (-t1);
    }
    return t0;
}

int kmFlushVertexBuffer(int a4)
{
    int stk[2];
    register int t1;
    register int t2;
    register int t3;
    register int t8;

    t1 = *(int *)(((a4 << 2) + (*(int *)0xC2D0C3C)));
    t2 = *(int *)(((a4 << 2) + 0xC2D0C88));
    t3 = (t1 - t2);
    if ((int)(t1 - t2) < 0) {
        t3 = ((t1 - t2) + 0x3);
    }
    for (;;) {
        *(int *)((int)stk + 0) = ((int)stk + 4);
        t8 = kmiDMAtoTARequest(0x10000000, (*(int *)((((a4 << 2) + 0xC2D0C88) + 0x0))), (((t3 >> 1) >> 1) << 2), 0x10, ((int)stk + 4));
        if (t8 != 0x100) {
            break;
        }
    }
    *(unsigned int *)((((*(int *)0xC2D0C3C) + (a4 << 2)) + 0x0)) = (((*(int *)(((a4 << 2) + 0xC2D0CA8))) << 2) + (*(int *)(((a4 << 2) + 0xC2D0C88))));
    *(unsigned int *)0xC300CF8 = (*(int *)(((*(int *)(((int)stk + 4))) + 0x0)));
    return 0x0;
}

int syExtChkExit(void)
{
    if (((((struct o0_int *)0xC173814)->v)) != -1) {
        return 0xFFFFFFFF;
    }
    if (((((struct o14_int *)0xC173814)->v)) == -1) {
        syExtChkDisableInterrupt(0xA1000400);
        syExtChkDisableSyncDev(0xA1000400);
    }
    if (((((struct o18_int *)0xC173814)->v)) == -1) {
        syExtChkDisableInterrupt(0xA1000800);
        syExtChkDisableSyncDev(0xA1000800);
    }
    if (((((struct o1C_int *)0xC173814)->v)) == -1) {
        syExtChkDisableInterrupt(0xA1001400);
        syExtChkDisableSyncDev(0xA1001400);
    }
    syExtChkClearG2TimeOut();
    (((struct o0_uint *)0xC173814)->v) = 0x0;
    (((struct o4_uint *)0xC173814)->v) = 0xFFFFFFFE;
    (((struct o8_uint *)0xC173814)->v) = 0xFFFFFFFE;
    (((struct oC_uint *)0xC173814)->v) = 0x0;
    (((struct o10_uint *)0xC173814)->v) = 0x0;
    (((struct o14_uint *)0xC173814)->v) = 0x0;
    (((struct o18_uint *)0xC173814)->v) = 0x0;
    (((struct o1C_uint *)0xC173814)->v) = 0x0;
    return 0x0;
}

void kmiRegisterCallback(int a4, int a5, int a6, int a7)
{
    int stk[2];

    *(unsigned int *)(((int)stk + 0)) = (_builtin_get_imask());
    _builtin_set_imask(0xF);
    if (a6 != 0) {
        *(unsigned int *)(((int)stk + 4)) = ((a5 << 2) << 1);
        *(unsigned int *)(((((a5 << 2) << 1) + (0x234 + a4)) + 0x0)) = a6;
        *(unsigned int *)((((0x234 + a4) + (*(int *)(((int)stk + 4)))) + 0x4)) = a7;
    } else {
        FUN_0c155b78(a4, a5, a6, a7, *(int *)((int)stk + 0));
    }
    _builtin_set_imask(((unsigned int)((((*(int *)(((int)stk + 0))) & 0xF) << 2) << 2) >> 4));
}

int cvFsSetDefDev(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t2;

    if (a4 == 0) {
        return ((int (*)(int, int, int, int))(cvFsError))(0xC172428, a5, a6, a7);
    }
    t0 = strlen(a4);
    if ((int)t0 <= 0) {
        *(unsigned char *)0xC30BA54 = 0x0;
        return t0;
    }
    FUN_0c16c5d8(a4);
    t2 = FUN_0c16c70a(a4, t0);
    if (t2 == 1) {
        return memcpy(0xC30BA54, a4, (t0 + 0x1));
    }
    return ((int (*)(int))(cvFsError))(0xC172450);
}

int cvFsIsExistFile(int a4, int a5, int a6, int a7)
{
    int stk[18];

    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    v0_0 = a4;
    FUN_0c16c85e((((int)stk + 0) + 0x24), ((int)stk + 0), v0_0);
    v0_0 = (((int)stk + 0));
    v0_1 = ((((int)stk + 0) + 0x24));
    if (((*(signed char *)((((int)stk + 0) + 0x0))) != 0)) goto L_C16CE8C;
    cvFsError(0xC1728BC, R5, R6);
    L_C16CED2:;
    v0_2 = (0x0);
    L_C16CED8:;
    return v0_2;
    L_C16CE8C:;
    if (((*(signed char *)((v0_1 + 0x0))) != 0)) goto L_C16CEA6;
    FUN_0c16c90c(v0_1);
    if (((*(signed char *)((v0_1 + 0x0))) != 0)) goto L_C16CEA6;
    cvFsError(0xC1728E4, R5, R6);
    goto L_C16CED2;
    L_C16CEA6:;
    v0_2 = FUN_0c16c56c(v0_1);
    v0_1 = (v0_2);
    if ((v0_2 != 0)) goto L_C16CEBA;
    cvFsError(0xC17290C, R5, R6);
    goto L_C16CED2;
    L_C16CEBA:;
    v0_2 = (0x40);
    if ((((((struct o40_int *)(v0_1))->v)) == 0)) goto L_C16CECC;
    v0_0 = ((((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)((v0_1 + v0_2)))))(v0_0, R5, R6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24))));
    v0_2 = (v0_0);
    goto L_C16CED8;
    L_C16CECC:;
    cvFsError(0xC172930, R5, R6);
    goto L_C16CED2;
}

int FUN_0c019f10(void)
{
    FUN_0c06f920(0x0);
    *(unsigned int *)0xC1EC72C = 0x1;
    nlMatrixMode(0x3);
    nlUnitMatrix();
    nlPerspective(0x1D28, ((((struct o8_float *)0xC01A024)->v)), ((((struct o4_float *)0xC01A024)->v)), ((((struct o0_float *)0xC01A024)->v)));
    nlMatrixMode(0x1);
    nlInitCommonTexture(0xC1C03D4, 0x7D0, 0xBB8);
    nlInitSprite(0xC1E3908, 0x3E8, 0x5DC);
    nlInitPalette(0xC1EC240, 0x40);
    FUN_0c06f170(0x2);
    FUN_0c06f190(0x1);
    nlObjPutInit();
    FUN_0c076230(1.0f, 1.0f, 1.0f);
    return FUN_0c030c9c();
}

int FUN_0c01fbda(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = (((struct o4_int *)0xC2708B4)->v);
    if (t0 == 1) {
        t1 = FUN_0c150460(((((struct o0_int *)0xC2708B4)->v)));
        if (t1 == 3) {
            *(unsigned int *)0xC123E5C = 0x0;
            FUN_0c14ff0c(((((struct o0_int *)0xC2708B4)->v)));
            (((struct o0_uint *)0xC1ECD48)->v) = ((((struct o4_int *)0xC1ECD48)->v));
            (((struct o4_uint *)0xC2708B4)->v) = 0x0;
            FUN_0c06e990(0x0);
            return texLoadIndexed((((((struct o8_int *)0xC2708B4)->v)) + 0x6A), 0xCE98000);
        }
        t2 = t1;
        if (t1 == 4) {
            *(unsigned int *)0xC123E5C = ((*(int *)0xC123E5C) + 0x1);
            t1 = FUN_0c01fb8c(((((struct o4_int *)0xC1ECD48)->v)), ((((struct o8_int *)0xC2708B4)->v)));
            if ((int)(*(int *)0xC123E5C) > (int)0xA) {
                *(unsigned int *)0xC1EC718 = ((*(int *)0xC1EC718) + 0x1);
            }
            t2 = t1;
        }
        return t2;
    }
    return t0;
}

int FUN_0c04e3c0(int a4)
{
    if (((unsigned short)((((struct o42_short *)(a4))->v)) & 0x200) != 0) {
        nlPushMatrix(0x0);
        FUN_0c073a60((a4 + 0xC));
        nlRotateAY((*(int *)((a4 + 0x30))));
        FUN_0c05d1b4((*(int *)((((unsigned char)(*(signed char *)(((0x41 + a4) + 0x0))) << 2) + (*(int *)((0xC131728 + ((unsigned char)(*(signed char *)((a4 + 0x40))) << 2))))))), 0x1, ((((struct o48_float *)(a4))->v)));
        FUN_0c05d1bc((((((struct o34_short *)(a4))->v)) + 0x11), 0x1);
        if ((*(int *)((a4 + 0x3C))) != 0) {
            CalcShadow2Matrix((a4 + 0x24));
            nlObjPutUseViewMatrix(0xC4F4988);
        }
        return nlPopMatrix(0x1);
    }
    return 0x42;
}

int FUN_0c05ce16(int a4)
{
    register int t0;
    register int t1;

    if (((((struct o10_int *)0xC136D68)->v)) != 0) {
        t0 = (((struct o4_int *)0xC136D68)->v);
        (((struct o4_uint *)0xC136D68)->v) = (t0 + 0x1);
        if ((int)(t0 + 0x1) > (int)((((struct o8_int *)0xC136D68)->v))) {
            (((struct oC_uint *)0xC136D68)->v) = (((((struct oC_int *)0xC136D68)->v)) + 0x1);
            (((struct o4_uint *)0xC136D68)->v) = 0x0;
            (((struct o8_uint *)0xC136D68)->v) = (((FUN_0c070e60()) & 0x7F) + 0x3C);
        }
    }
    t0 = *(int *)0xC1EC7C0;
    if ((t0 & 16) != 0) {
        (((struct o0_uint *)0xC136D68)->v) = 0x2;
        (((struct o10_uint *)0xC136D68)->v) = 0x0;
        return t0;
    }
    t0 = *(int *)0xC1EC7C0;
    if ((t0 & 32) != 0) {
        if (((((struct o10_int *)0xC136D68)->v)) == 0) {
            (((struct o10_uint *)0xC136D68)->v) = 0x1;
            return FUN_0c05cd80();
        }
        return t0;
    }
    if ((t0 & 64) != 0) {
        (((struct o0_uint *)0xC136D68)->v) = 0x0;
        (((struct o10_uint *)0xC136D68)->v) = 0x0;
        t1 = t0;
    } else {
        t0 = *(int *)0xC1EC7C0;
        if ((t0 & 128) != 0) {
            (((struct o0_uint *)0xC136D68)->v) = 0x1;
            (((struct o10_uint *)0xC136D68)->v) = 0x0;
        }
        t1 = t0;
    }
    return t1;
}
