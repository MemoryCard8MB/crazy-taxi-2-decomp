/* Straight-line functions with calls and guards (batch gen_cl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o100_float { char p[0x100]; float v; };
struct o104_float { char p[0x104]; float v; };
struct o10C0_int { char p[0x10C0]; int v; };
struct o10D0_int { char p[0x10D0]; int v; };
struct o10F4_int { char p[0x10F4]; int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o24_ushort { char p[0x24]; unsigned short v; };
struct o26_ushort { char p[0x26]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o34_short { char p[0x34]; short v; };
struct o38_float { char p[0x38]; float v; };
struct o3A_ushort { char p[0x3A]; unsigned short v; };
struct o3E_short { char p[0x3E]; short v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_int { char p[0x40]; int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_int { char p[0x44]; int v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o48_int { char p[0x48]; int v; };
struct o48_short { char p[0x48]; short v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o48_ushort { char p[0x48]; unsigned short v; };
struct o4A_short { char p[0x4A]; short v; };
struct o4A_ushort { char p[0x4A]; unsigned short v; };
struct o4C_int { char p[0x4C]; int v; };
struct o4C_short { char p[0x4C]; short v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o4E_short { char p[0x4E]; short v; };
struct o50_int { char p[0x50]; int v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o50_ushort { char p[0x50]; unsigned short v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o60_float { char p[0x60]; float v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o70_uint { char p[0x70]; unsigned int v; };
struct o71_uchar { char p[0x71]; unsigned char v; };
struct o74_float { char p[0x74]; float v; };
struct o74_int { char p[0x74]; int v; };
struct o74_uint { char p[0x74]; unsigned int v; };
struct o78_float { char p[0x78]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_ushort { char p[0x7C]; unsigned short v; };
struct o7E_ushort { char p[0x7E]; unsigned short v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_int { char p[0x84]; int v; };
struct o84_uint { char p[0x84]; unsigned int v; };
struct o88_int { char p[0x88]; int v; };
struct o8C_uint { char p[0x8C]; unsigned int v; };
struct o90_float { char p[0x90]; float v; };
struct o90_uint { char p[0x90]; unsigned int v; };
struct o98_uint { char p[0x98]; unsigned int v; };
struct o9C_uint { char p[0x9C]; unsigned int v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct oA4_short { char p[0xA4]; short v; };
struct oA6_short { char p[0xA6]; short v; };
struct oA8_short { char p[0xA8]; short v; };
struct oA8_ushort { char p[0xA8]; unsigned short v; };
struct oAA_short { char p[0xAA]; short v; };
struct oAA_ushort { char p[0xAA]; unsigned short v; };
struct oAC_int { char p[0xAC]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_float { char p[0xC4]; float v; };
struct oCC_float { char p[0xCC]; float v; };
struct oF0_uint { char p[0xF0]; unsigned int v; };
struct oF4_int { char p[0xF4]; int v; };
struct oF4_uint { char p[0xF4]; unsigned int v; };
struct oF8_uint { char p[0xF8]; unsigned int v; };
struct oFA_short { char p[0xFA]; short v; };
struct oFA_ushort { char p[0xFA]; unsigned short v; };
struct oFC_short { char p[0xFC]; short v; };
struct oFC_ushort { char p[0xFC]; unsigned short v; };
struct oFC0_uint { char p[0xFC0]; unsigned int v; };
struct oFC4_int { char p[0xFC4]; int v; };
struct oFC4_uint { char p[0xFC4]; unsigned int v; };
struct oFC8_int { char p[0xFC8]; int v; };
struct oFC8_uint { char p[0xFC8]; unsigned int v; };
struct oFE_short { char p[0xFE]; short v; };
struct oFE_ushort { char p[0xFE]; unsigned short v; };
struct oFF_uchar { char p[0xFF]; unsigned char v; };
int ADXB_DecodeHeader(int, int, int);
int ADXB_GetFormat(int);
int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int ADXF_Ocbi(int, int);
int ADXSJD_SetDecPos(int, int);
int ADXSJD_SetTrapCnt(int, int);
int ADXSJD_SetTrapDtLen(int, int);
int ADXSJD_SetTrapNumSmpl(int, int);
int ADX_DecodeInfoAu(int, int, int, int, int, int, int, int, int, int, int);
int ADX_DecodeInfoSpsd(int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c01b920(int, float, float);
int FUN_0c027f28(int);
float FUN_0c02806c(int);
int FUN_0c0297f4(int, int, float);
int FUN_0c029b12(int, float);
int FUN_0c03346e(int, int, int, int);
int FUN_0c033e38(int, int, int);
int FUN_0c034320(int, int);
int FUN_0c0343b8(int, int);
int FUN_0c03457c(void);
int FUN_0c034804(int, float, float);
int FUN_0c034928(int, int, int, int, int);
int FUN_0c03adec(void);
int FUN_0c046814(int);
int FUN_0c058ca6(int, int);
int FUN_0c058f64(int, int, int, int);
int FUN_0c05d1b4(int, int, float);
int FUN_0c05d1bc(int, int);
int FUN_0c05f434(void);
int FUN_0c05f470(int, int, float, float);
int FUN_0c067c2c(int);
extern int FUN_0c069e54();
int FUN_0c06e700(int, int, float);
int FUN_0c072150(int, int, int);
int FUN_0c072290(int, int);
int FUN_0c073010(void);
int FUN_0c073360(void);
int FUN_0c073a30(float, float, float);
int FUN_0c073a40(int);
int FUN_0c073a60(int);
int FUN_0c073c40(int, int, float);
int FUN_0c073e10(int);
int FUN_0c075d50(void);
extern int FUN_0c078cb0();
int FUN_0c07fdc8(void);
int FUN_0c07ff00(void);
int FUN_0c07ffac(int);
int FUN_0c14ebba(int);
int FUN_0c14ffa4(int, int, int);
int FUN_0c1606b0(int, int, int);
int FUN_0c1616ce(int);
int FUN_0c161880(void);
int FUN_0c161ad0(int);
int FUN_0c162006(int);
int FUN_0c16204e(int, int, int, int);
int FUN_0c16205a(int);
int FUN_0c162066(int);
int FUN_0c162072(int);
int FUN_0c1675c0(void);
int FUN_0c16a4d0(int, int, int);
int SJRBF_Create(int, int, int);
int SJ_SplitChunk(int, int, int);
int VQDeQueueEntry(int, int);
int Voice_ShutUp(int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
extern float _builtin_sqrtf(float);
int adxf_SetCmdHstry(int, int, int, int, int);
int buAnalyzeBackupFileImage(int, int);
int fmMngBit2Num(int, int);
int fmMngExecServer(int, int, int);
int fmMngFormat(int, int, int);
int fmMngInit(int, int, int);
int fmMngMcpy4(int, int, int);
int fmMngRead(int, int);
int fmMngWrite(int, int);
int fmcalccrc(int, int);
int gdFsReopenHn(int, int, int, int);
int kmiDMAtoTARequest(int, int, int, int, int);
int kmiFBfree(int);
int kmiMemCopy4(int, int, int);
int kmiPurgeMemory(int, int);
int kmiWaitForFinishDMA(int);
int kmytex_GetSmallVQprofile(int, int);
int kmytex_VQFreeEntry(int);
int memcpy(int, int, int);
int memset(int, int, int);
int mpdrv_init_globals(void);
int mpdrv_set_dreq_ns(int);
int mpdrv_set_end_ns(void);
int mwRnaSetPlaySw(void);
int nlAddVector(int, int);
int nlArcTan2(float, float);
int nlGetMatrix(int);
float nlLength(int, int);
int nlLineCalcFogB(int, int, int, float);
int nlLineCalcFogC(int, int, int, float);
int nlLocate(int, int);
int nlMultiMatrix(int);
int nlOuterProduct(int, int, int);
int nlPopMatrix(int);
int nlPrintf(int, ...);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
float nlRoundOff(float);
float nlTan(int);
int nlUnitMatrix(void);
int pfSize(float, float);
int thunk_FUN_0c1644d8(int);
int vmsfs_c_progress(int, int, int, int);
int vmsio_block_write(int, int, int);
int FUN_0c062466(int a4, int a5);
int vmsfs_write_retry(int a4, int a5, int a6);
int calcCheck(int a4);
int FUN_0c06b0b6(int a4, int a5, int a6);
int FUN_0c1500d2(int a4, int a5, int a6, int a7);
int FUN_0c161b18(int a4, int a5, int a6, int a7);
int mpdrv_init(int a4, int a5, int a6);
int BigOneRotate(int a4, int a5, int a6);
int gdFsReqRd32(int a4, int a5, int a6);
int FUN_0c06b4c8(void);
int adxt_trap_entry(int a4, int a5, int a6, int a7);
int kmiInitVGA(void);
int ADXB_DecodeHeaderAu(int a4, int a5, int a6);
int gdFsDaPlayG(int a4, int a5, int a6, int a7);
int fmMngReadSctAllData(int a4);
float Init_Adv_Global_Parm(void);
int FUN_0c067b14(int a4);
int nlLineCalcColor(int a4, int a5, int a6);
float _in_fmods(int a4, float f4, float f5);
int FUN_0c096138(int a4, int a5);
int ADXB_DecodeHeaderWav(int a4, int a5, int a6);
int FUN_0c013a30(int a4);
int CheckColliWallSegment(int a4, int a5, float f4);
int MakeKyakuTakeArea(int a4, int a5, int a6, float f4, float f5);
int FUN_0c03cc9c(void);
int FUN_0c041178(int a4);
int kmiVQFBfree(int a4);
int kmiCopyToFrameBuffer(int a4, int a5, int a6);
int syBtCfgSet(int a4, int a5, int a6);
int DispBackupHeadInfo(int a4, int a5, int a6);
int nlLookAtUp(int a4, int a5, int a6);
int adxt_stat_prep(int a4, int a5, int a6, int a7);

int FUN_0c062466(int a4, int a5)
{
    int stk[7];
    register float u0;
    register int t1;
    register int t2;
    register int t4;
    register int t5;
    register int t12;
    register int t13;
    register int t22;

    u0 = *(float *)0xC0625B4;
    t1 = a5;
    t2 = 0x0;
    for (;;) {
        FUN_0c07ff00();
        *(unsigned int *)(((int)stk + 0)) = (0xC10EF04 + t2);
        t4 = *(int *)(((0xC10EF04 + t2) + 0x0));
        t5 = *(int *)0xC175C80;
        FUN_0c06e700((((int)stk + 0) + 0x10), 0xC17597C, ((((((struct o4_float *)(((((t4 << 1) + t4) << 2) + 0xC10E970)))->v)) + ((((struct o4_float *)(((((t5 << 1) + t5) << 2) + 0xC10E9B8)))->v))) + u0));
        t12 = *(int *)0xC175C80;
        t13 = *(int *)(((*(int *)(((int)stk + 0))) + 0x0));
        FUN_0c06e700((((int)stk + 0) + 0x10), 0xC17598C, (((((struct o8_float *)(((((t13 << 1) + t13) << 2) + 0xC10E970)))->v)) + ((((struct o8_float *)(((((t12 << 1) + t12) << 2) + 0xC10E9B8)))->v))));
        FUN_0c073c40((((int)stk + 0) + 0x4), 0xC17596C, (*(float *)((t2 + 0xC10EF10))));
        t22 = *(int *)(((FUN_0c0297f4((((int)stk + 0) + 0x10), (((int)stk + 0) + 0x4), 0.0f)) + 0x1C));
        if (t22 == -1) {
            *(unsigned int *)((t1 + 0x0)) = 0x1;
        } else {
            *(unsigned int *)((t1 + 0x0)) = 0x0;
        }
        t2 = (t2 + 0x4);
        t1 = (t1 + 0x4);
        if ((unsigned int)t2 >= (unsigned int)0xC) {
            break;
        }
    }
    return t22;
}

int vmsfs_write_retry(int a4, int a5, int a6)
{
    int stk[7];
    register int t4;
    register int t9;
    register int t11;
    register int t13;
    register int t16;
    register int t17;
    register int t18;
    register int t23;
    register int t24;
    register int t27;
    register int t28;
    register int t29;
    register int t34;
    int t8;
    int t12;

    *(unsigned int *)(((int)stk + 24)) = a4;
    *(unsigned int *)(((int)stk + 20)) = a5;
    *(unsigned int *)(((int)stk + 16)) = a6;
    *(unsigned int *)(((int)stk + 8)) = (*(int *)0xC2C68F0);
    for (;;) {
        t4 = vmsio_block_write((*(int *)(((int)stk + 24))), (*(int *)(((int)stk + 20))), (*(int *)(((int)stk + 16))));
        *(unsigned int *)(((int)stk + 12)) = t4;
        if (t4 == 0) {
            break;
        }
        if (((*(int *)0xC1182A4) != 0) && (t8 = *(int *)(((int)stk + 12)), t8 == 0xFFFFFF30)) {
            return 0xFFFFFF01;
        }
        t9 = *(int *)(((int)stk + 24));
        *(unsigned int *)(((int)stk + 4)) = ((t9 * 0x154) + 0xC2C8D2C);
        *(unsigned int *)((((t9 * 0x154) + 0xC2C8D2C) + 0x34)) = ((*(int *)((((t9 * 0x154) + 0xC2C8D2C) + 0x34))) + 0x1);
        t11 = *(int *)(((int)stk + 8));
        *(unsigned int *)(((int)stk + 8)) = (t11 - 1);
        if ((((t11 - 1) + 0x1) == 0) && (t12 = *(int *)0xC2C68F0, t12 != -1)) {
            t13 = *(int *)(((int)stk + 24));
            *(unsigned int *)(((int)stk + 4)) = ((t13 * 0x154) + 0xC2C8D2C);
            *(unsigned int *)(((int)stk + 0)) = ((((((*(int *)(((int)stk + 24))) << 2) << 2) << 2) << 1) + 0xC2C6914);
            t16 = *(int *)((((t13 * 0x154) + 0xC2C8D2C) + 0x34));
            t17 = *(int *)(((int)stk + 4));
            t18 = *(int *)((t17 + 0x30));
            *(unsigned int *)((t17 + 0x30)) = (t18 + 0x1);
            vmsfs_c_progress((*(int *)(((int)stk + 24))), (*(int *)(((*(int *)(((int)stk + 0))) + 0x8))), ((t18 + 0x1) - 1), t16);
            t23 = *(int *)(((int)stk + 12));
            if (t23 != 0) {
                if (t23 != 0xFFFFFF01) {
                    if (t23 != 0xFFFFFF40) {
                        return 0xFFFF0000;
                    }
                    return 0xFFFFFF40;
                }
                return 0xFFFFFF01;
            }
            return 0x0;
        }
    }
    t24 = *(int *)(((int)stk + 24));
    *(unsigned int *)(((int)stk + 4)) = ((t24 * 0x154) + 0xC2C8D2C);
    *(unsigned int *)(((int)stk + 0)) = ((((((*(int *)(((int)stk + 24))) << 2) << 2) << 2) << 1) + 0xC2C6914);
    t27 = *(int *)((((t24 * 0x154) + 0xC2C8D2C) + 0x34));
    t28 = *(int *)(((int)stk + 4));
    t29 = *(int *)((t28 + 0x30));
    *(unsigned int *)((t28 + 0x30)) = (t29 + 0x1);
    vmsfs_c_progress((*(int *)(((int)stk + 24))), (*(int *)(((*(int *)(((int)stk + 0))) + 0x8))), ((t29 + 0x1) - 1), t27);
    t34 = *(int *)(((int)stk + 12));
    if (t34 != 0) {
        if (t34 != 0xFFFFFF01) {
            if (t34 != 0xFFFFFF40) {
                return 0xFFFF0000;
            }
            return 0xFFFFFF40;
        }
        return 0xFFFFFF01;
    }
    return 0x0;
}

int calcCheck(int a4)
{

    register int R1;
    register int R3;
    register int R5;
    register int R6;
    register int R7;
    register int R9;
    register int R11;
    register int R12;
    register int R13;
    register float F2;
    register float F3;
    register float F10;
    register float F15;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register float w0_0;
    register float w0_1;
    v0_0 = a4;
    w0_0 = nlLength(0xC2A59D8, (0x8C + v0_0));
    v0_0 = (v0_0);
    w0_1 = (w0_0);
    if ((!(((*(float *)0xC2A59BC) + 30.0f) > w0_0))) goto L_C043558;
    v0_1 = (0x84);
    v0_2 = ((((((struct o84_int *)(v0_0))->v)) | 0xD));
    L_C043560:;
    *(unsigned int *)((v0_0 + v0_1)) = v0_2;
    if ((((((struct oC4_float *)(v0_0))->v)) != 0.0f)) goto L_C0435D2;
    w0_1 = (((struct o0_float *)0xC043668)->v);
    w0_0 = (w0_1);
    if ((!(w0_1 > _builtin_fabsf(((((struct oCC_float *)(v0_0))->v)))))) goto L_C0435D2;
    w0_0 = (((struct o4_float *)0xC043668)->v);
    w0_1 = (w0_0);
    if ((!(w0_0 > _builtin_fabsf(((((struct o60_float *)(v0_0))->v)))))) goto L_C0435D2;
    v0_1 = (int)(FUN_0c07ffac(((((struct oAA_short *)(v0_0))->v)))) >= (int)0x10;
    if (v0_1) goto L_C0435D2;
    if ((!(((((struct o4_float *)0xC043668)->v)) > _builtin_fabsf(((((struct o100_float *)(v0_0))->v)))))) goto L_C0435D2;
    w0_0 = (((struct o104_float *)(v0_0))->v);
    w0_1 = (((struct o90_float *)(v0_0))->v);
    v0_1 = !(((((struct oC_float *)0xC043668)->v)) > _builtin_fabsf((w0_1 - w0_0)));
    w0_0 = (_builtin_fabsf((w0_1 - w0_0)));
    if (v0_1) goto L_C0435D2;
    (((struct o84_uint *)(v0_0))->v) = (((((struct o84_int *)(v0_0))->v)) & 0xFFFFFFFB);
    v0_1 = ((FUN_0c07ff00()));
    L_C0435DC:;
    return v0_1;
    L_C0435D2:;
    (((struct o84_uint *)(v0_0))->v) = (((((struct o84_int *)(v0_0))->v)) | 0x4);
    v0_1 = (0x84);
    goto L_C0435DC;
    L_C043558:;
    v0_1 = (0x84);
    v0_2 = ((((((struct o84_int *)(v0_0))->v)) & 0xFFFFFFF2));
    goto L_C043560;
}

int FUN_0c06b0b6(int a4, int a5, int a6)
{
    register int t25;

    (((struct o0_uint *)0xC13C194)->v) = (*(int *)(((*(int *)(((a4 << 2) + 0xC13C0E4))) + (((int)((int)(((int (*)(int, int, int))(FUN_0c069e54))(a4, a5, a6)) % (int)(*(int *)(((a4 << 2) + 0xC112418))))) << 2))));
    (((struct o24_uint *)0xC13C194)->v) = (*(int *)(((*(int *)(((a5 << 2) + (*(int *)((0xC13C124 + ((a6 - 2) << 2))))))) + (((int)((int)(((int (*)(void))(FUN_0c069e54))()) % (int)(*(int *)(((a5 << 2) + (*(int *)(((0xC13C130 + ((a6 - 2) << 2)) + 0x0)))))))) << 2))));
    (((struct oC_uint *)0xC13C194)->v) = (*(int *)(((*(int *)(((a4 << 2) + 0xC13C13C))) + (((int)((int)(((int (*)(void))(FUN_0c069e54))()) % (int)(*(int *)(((a4 << 2) + 0xC112518))))) << 2))));
    t25 = 0xFFFFFFFF;
    if (a6 == 2) {
    } else {
        t25 = (*(int *)(((*(int *)(((a5 << 2) + (*(int *)((((a6 - 2) << 2) + 0xC13C17C)))))) + (((int)((int)(((int (*)(void))(FUN_0c069e54))()) % (int)(*(int *)(((a5 << 2) + (*(int *)(((0xC13C188 + ((a6 - 2) << 2)) + 0x0)))))))) << 2))));
    }
    (((struct o30_uint *)0xC13C194)->v) = t25;
    Voice_ShutUp(0x1);
    FUN_0c058f64(0xC13C194, 0x1, (*(int *)(((a4 << 2) + 0xC11037C))), 0x0);
    Voice_ShutUp(0x2);
    return FUN_0c058f64(0xC13C1B8, 0x2, (*(int *)(((a5 << 2) + 0xC1103AC))), 0x0);
}

int FUN_0c1500d2(int a4, int a5, int a6, int a7)
{
    register int t18;
    register int t30;
    register int t60;

    adxf_SetCmdHstry(0x4, 0x0, a4, a5, a6);
    if (a4 == 0) {
        FUN_0c1616ce(0xC1709D4);
        t60 = 0xFFFFFFFD;
    } else {
        if ((int)a5 < 0) {
            FUN_0c1616ce(0xC1709FC);
            t60 = 0xFFFFFFFD;
        } else {
            if (a6 == 0) {
                FUN_0c1616ce(0xC170A28);
                t60 = 0xFFFFFFFD;
            } else {
                if ((a6 & 0x1F) != 0) {
                    FUN_0c1616ce(0xC170A50);
                    t60 = 0xFFFFFFFD;
                } else {
                    t60 = 0x0;
                    if ((*(signed char *)((a4 + 0x1))) == 2) {
                    } else {
                        if ((*(int *)((a4 + 0x8))) != 0) {
                            FUN_0c1616ce(0xC170A88);
                            t60 = 0xFFFFFFFF;
                        } else {
                            t18 = SJRBF_Create(a6, (((a5 << 8) << 2) << 1), 0x0);
                            t60 = 0xFFFFFFFE;
                            if (t18 == 0) {
                            } else {
                                *(unsigned int *)((a4 + 0x24)) = a6;
                                *(unsigned int *)((a4 + 0x28)) = (((a5 << 8) << 2) << 1);
                                ADXCRS_Lock();
                                if ((*(int *)0xC2D25F4) == 1) {
                                    ADXF_Ocbi((*(int *)((a4 + 0x24))), (*(int *)((a4 + 0x28))));
                                }
                                t60 = FUN_0c14ffa4(a4, a5, t18);
                                if ((int)t60 <= 0) {
                                    t30 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t18 + 0x0))) + 0xC)))))(t18, a5, a6, a7);
                                } else {
                                    *(unsigned int *)((a4 + 0x8)) = t18;
                                }
                                *(unsigned char *)((a4 + 0x2)) = 0x0;
                                ADXCRS_Unlock();
                                adxf_SetCmdHstry(0x4, 0x1, a4, a5, a6);
                            }
                        }
                    }
                }
            }
        }
    }
    return t60;
}

int FUN_0c161b18(int a4, int a5, int a6, int a7)
{
    int stk[10];
    register int t0;
    register int t2;
    register int t4;
    register int t5;
    register int t7;
    register int t9;
    register int t12;
    register int t13;
    register int t15;
    register int t24;
    register int t27;
    register int t35;
    int t8;

    t0 = *(int *)((a4 + 0x8));
    t2 = *(int *)((a4 + 0x4));
    t4 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x18)))))(t0, 0x1, 0x1000, (((int)stk + 0) + 0xC), *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    t5 = *(int *)(((int)stk + 16));
    if ((int)t5 >= (int)0x10) {
        t7 = ADXB_DecodeHeader(t2, (*(int *)(((int)stk + 12))), t5);
        if ((t7 != 0) && (t8 = *(int *)(((int)stk + 16)), (int)t7 <= (int)t8)) {
            (((struct o98_uint *)(a4))->v) = t7;
            t9 = ADXB_GetFormat(t2);
            if (t9 == 4) {
                *(unsigned char *)((a4 + 0x3)) = 0x1;
            }
            t12 = ADXB_GetFormat(t2);
            if (t12 == 2) {
                t13 = *(int *)(((int)stk + 16));
                *(unsigned int *)(((int)stk + 0)) = t13;
                t15 = 0x40;
                if ((int)t13 < (int)0x40) {
                    t15 = (*(int *)(((int)stk + 0)));
                }
                memcpy((a4 + 0x58), (*(int *)(((int)stk + 12))), t15);
            }
            SJ_SplitChunk((((int)stk + 0) + 0xC), t7, (((int)stk + 0) + 0xC));
            t24 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x20)))))(t0, 0x0, (((int)stk + 0) + 0xC), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
            t27 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x1C)))))(t0, 0x1, (((int)stk + 0) + 0x4), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
            *(unsigned char *)((a4 + 0x1)) = 0x2;
            t35 = 0x2;
        } else {
            t35 = (((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x1C)))))(t0, 0x1, (((int)stk + 0) + 0xC), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
        }
    } else {
        t35 = (((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x1C)))))(t0, 0x1, (((int)stk + 0) + 0xC), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
    }
    return t35;
}

int mpdrv_init(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    *(unsigned int *)0xC30817C = 0xC307080;
    *(unsigned int *)0xC308044 = a4;
    (((struct oFC8_uint *)((*(int *)0xC30817C)))->v) = a6;
    if ((((((struct oFC4_int *)((*(int *)0xC30817C)))->v)) & 0x1F) != 0) {
        t0 = *(int *)0xC30817C;
        (((struct oFC4_uint *)(t0))->v) = (((((struct oFC4_int *)(t0))->v)) + 0x20);
        t0 = *(int *)0xC30817C;
        (((struct oFC4_uint *)(t0))->v) = (((((struct oFC4_int *)(t0))->v)) & 0xFFFFFFE0);
    }
    t0 = *(int *)0xC30817C;
    if ((0x1F & ((((struct oFC8_int *)(t0))->v))) != 0) {
        (((struct oFC8_uint *)(t0))->v) = (((((struct oFC8_int *)(t0))->v)) + 0x20);
        t0 = *(int *)0xC30817C;
        (((struct oFC8_uint *)(t0))->v) = (((((struct oFC8_int *)(t0))->v)) & 0xFFFFFFE0);
    }
    t0 = *(int *)0xC30817C;
    (((struct oFC4_uint *)(t0))->v) = (((((struct oFC4_int *)(t0))->v)) | 0xA0000000);
    t0 = *(int *)0xC30817C;
    (((struct oFC8_uint *)(t0))->v) = (((((struct oFC8_int *)(t0))->v)) | 0xA0000000);
    mpdrv_init_globals();
    t0 = 0xC171AAC;
    t1 = 0xC171AAC;
    t2 = 0xC171AAC;
    t3 = 0xC171AAC;
    for (;;) {
        if ((*(signed char *)((((0xF90 + (*(int *)0xC30817C)) + (*(int *)((t3 + 0x0)))) + 0x0))) != 0) {
            t0 = (*(int *)((t2 + 0x0)));
            mpdrv_set_dreq_ns(t0);
        } else {
            t4 = t0;
            t5 = t1;
        }
        t3 = (t3 + 0x4);
        t0 = t4;
        t1 = t5;
        t2 = (t2 + 0x4);
        if ((unsigned int)t3 >= (unsigned int)0xC171ABC) {
            break;
        }
    }
    mpdrv_set_end_ns();
    (((struct oFC0_uint *)((*(int *)0xC30817C)))->v) = 0x1;
    (((struct o8C_uint *)(((((struct o10F4_int *)((*(int *)0xC30817C)))->v))))->v) = 0x615540FF;
    *(unsigned int *)((((((struct o10F4_int *)((*(int *)0xC30817C)))->v)) + 0x10)) = 0x0;
    t0 = *(int *)0xC30817C;
    (((struct o80_uint *)(((((struct o10F4_int *)(t0))->v))))->v) = (((((struct o10C0_int *)(t0))->v)) | ((((struct o10D0_int *)(t0))->v)));
    *(unsigned int *)((((((struct o10F4_int *)((*(int *)0xC30817C)))->v)) + 0x14)) = 0x1;
    return 0x0;
}

int BigOneRotate(int a4, int a5, int a6)
{
    int stk[8];
    register float u15;
    register float u17;
    register float u23;
    register float u24;
    register float u32;
    register float u33;
    register float u39;
    register float u41;

    *(unsigned int *)(((int)stk + 24)) = a5;
    *(unsigned int *)(((int)stk + 28)) = a6;
    FUN_0c072150(a4, (((int)stk + 0) + 0xC), (((int)stk + 0) + 0x10));
    FUN_0c072150((*(int *)(((int)stk + 24))), (((int)stk + 0) + 0x8), (((int)stk + 0) + 0x14));
    FUN_0c072150((*(int *)(((int)stk + 28))), ((int)stk + 0), (((int)stk + 0) + 0x4));
    (((struct o0_float *)0xC1367D8)->v) = ((*(float *)(((int)stk + 20))) * (*(float *)(((int)stk + 4))));
    (((struct o4_float *)0xC1367D8)->v) = ((*(float *)(((int)stk + 0))) * (*(float *)(((int)stk + 20))));
    (((struct o8_float *)0xC1367D8)->v) = (-(*(float *)(((int)stk + 8))));
    u15 = ((*(float *)(((int)stk + 12))) * (*(float *)(((int)stk + 8))));
    u17 = ((*(float *)(((int)stk + 0))) * (*(float *)(((int)stk + 16))));
    (((struct o10_float *)0xC1367D8)->v) = (((u15 * (*(float *)(((int)stk + 4))))) - u17);
    u23 = ((*(float *)(((int)stk + 12))) * (*(float *)(((int)stk + 8))));
    u24 = ((*(float *)(((int)stk + 16))) * (*(float *)(((int)stk + 4))));
    u24 = u24 + (*(float *)(((int)stk + 0))) * u23;
    (((struct o14_float *)0xC1367D8)->v) = u24;
    (((struct o18_float *)0xC1367D8)->v) = ((*(float *)(((int)stk + 12))) * (*(float *)(((int)stk + 20))));
    u32 = ((*(float *)(((int)stk + 8))) * (*(float *)(((int)stk + 16))));
    u33 = ((*(float *)(((int)stk + 12))) * (*(float *)(((int)stk + 0))));
    u33 = u33 + (*(float *)(((int)stk + 4))) * u32;
    (((struct o20_float *)0xC1367D8)->v) = u33;
    u39 = ((*(float *)(((int)stk + 8))) * (*(float *)(((int)stk + 0))));
    u41 = ((*(float *)(((int)stk + 12))) * (*(float *)(((int)stk + 4))));
    (((struct o24_float *)0xC1367D8)->v) = (((u39 * (*(float *)(((int)stk + 16))))) - u41);
    (((struct o28_float *)0xC1367D8)->v) = ((*(float *)(((int)stk + 16))) * (*(float *)(((int)stk + 20))));
    return 0xC1367D8;
}

int gdFsReqRd32(int a4, int a5, int a6)
{
    register int t74;
    register int t19;
    register int t20;
    register int t21;
    register int t22;
    register int t24;
    register int t29;
    register int t34;
    int t0;

    t74 = 0xFFFFFFF6;
    if ((a4 != 0) && (t0 = (((struct o4C_short *)(a4))->v), t0 != 0)) {
        t74 = 0x0;
        if ((*(int *)(((*(int *)((a4 + 0x0))) + 0x1C))) == 0) {
            t74 = 0xFFFFFFF2;
            if ((0x1F & a6) != 0) {
            } else {
                t19 = *(int *)((a4 + 0x14));
                t20 = *(int *)((a4 + 0x8));
                t21 = *(int *)((a4 + 0x10));
                if ((int)(t19 + t20) >= (int)(t20 + t21)) {
                    *(unsigned int *)((a4 + 0x18)) = 0x0;
                    (((struct o50_ushort *)(a4))->v) = 0x1;
                    t74 = 0x0;
                } else {
                    t22 = a5;
                    if ((int)(a5 + (t19 + t20)) > (int)(t20 + t21)) {
                        t22 = ((t20 + t21) - (t19 + t20));
                    }
                    if (t22 == 0) {
                        *(unsigned int *)((a4 + 0x18)) = 0x0;
                        (((struct o50_ushort *)(a4))->v) = 0x1;
                        t74 = t22;
                    } else {
                        t24 = _builtin_get_imask();
                        _builtin_set_imask(0xF);
                        t29 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)(((*(int *)((a4 + 0x0))) + 0xC))) + 0x4)))))((t19 + t20), t22, a6, ((((struct o4E_short *)(a4))->v)));
                        if (t29 != 0) {
                            *(unsigned int *)((a4 + 0x3C)) = t29;
                            *(unsigned int *)((a4 + 0x1C)) = t22;
                            (((struct o50_ushort *)(a4))->v) = 0x2;
                            (((struct o4A_ushort *)(a4))->v) = 0x1;
                            (((struct o48_ushort *)(a4))->v) = 0x1;
                            *(unsigned int *)((a4 + 0x18)) = 0x0;
                            *(unsigned int *)(((*(int *)((a4 + 0x0))) + 0x1C)) = a4;
                            t34 = ((int (*)(void))(((((struct o40_int *)((*(int *)(((*(int *)((a4 + 0x0))) + 0xC)))))->v))))();
                        } else {
                            (((struct o50_ushort *)(a4))->v) = 0x1;
                        }
                        _builtin_set_imask(((unsigned int)(((t24 & 0xF) << 2) << 2) >> 4));
                        t74 = 0x0;
                        if (t29 != 0) {
                            t74 = t22;
                        }
                    }
                }
            }
        }
    }
    return t74;
}

int FUN_0c06b4c8(void)
{
    register int t0;
    register float u0;
    register float u1;

    u0 = (((struct o0_float *)0xC06B5E0)->v);
    if (!(u0 > (*(float *)0xC1759A0))) {
        u1 = nlLength(0xC17599C, 0xC112830);
        if (!(u1 > ((((struct oC_float *)0xC06B5E0)->v)))) {
            FUN_0c073010();
            FUN_0c075d50();
            nlGetMatrix(0xC2B96F8);
            t0 = 0x0;
            for (;;) {
                nlUnitMatrix();
                FUN_0c073a60(((((t0 << 1) + t0) << 2) + 0xC11283C));
                nlRotateAY((*(int *)(((t0 << 2) + 0xC11286C))));
                FUN_0c05d1b4((*(int *)(((((int)((int)(((((struct o0_int *)0xC2BA6B8)->v)) + t0) % (int)0x6)) << 2) + 0xC11287C))), 0x0, ((((struct o4_float *)0xC2BA6B8)->v)));
                FUN_0c05d1bc(0x1C, 0x0);
                t0 = (t0 + 0x1);
                if ((int)t0 >= (int)0x4) {
                    break;
                }
            }
            u1 = (((struct o4_float *)0xC2BA6B8)->v);
            (((struct o4_float *)0xC2BA6B8)->v) = (u1 + 1.0f);
            if (!(u0 > (u1 + 1.0f))) {
                (((struct o0_uint *)0xC2BA6B8)->v) = ((int)((int)(((((struct o0_int *)0xC2BA6B8)->v)) + 0x1) % (int)0x6));
                (((struct o4_float *)0xC2BA6B8)->v) = 0.0f;
            }
            return nlPopMatrix(0x1);
        }
        return 0xC06B5EC;
    }
    return 0xEC;
}

int adxt_trap_entry(int a4, int a5, int a6, int a7)
{
    int stk[9];
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t13;
    register int t23;
    register int t25;
    register int t32;
    register int t35;
    register int t38;
    int t7;
    register int t42;

    t0 = *(int *)((a4 + 0x14));
    t1 = *(int *)((a4 + 0x4));
    t2 = FUN_0c16204e(t1, a5, a6, a7);
    t3 = FUN_0c16205a(t1);
    *(unsigned int *)(((int)stk + 0)) = (FUN_0c162066(t1));
    FUN_0c162072(t1);
    if (((*(int *)((a4 + 0x8))) == 0) && (t7 = *(signed char *)((a4 + 0x6C)), t7 == 0)) {
        t42 = (ADXSJD_SetTrapNumSmpl((*(int *)((a4 + 0x4))), 0xFFFFFFFF));
    } else {
        t13 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x18)))))(t0, 0x1, ((((struct o50_int *)(a4))->v)), (((int)stk + 0) + 0x4), *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
        if ((int)(*(int *)(((int)stk + 8))) < (int)((((struct o50_int *)(a4))->v))) {
            FUN_0c1616ce(0xC1715F4);
        }
        t23 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x20)))))(t0, 0x0, (((int)stk + 0) + 0x4), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
        ADXSJD_SetTrapCnt(t1, 0x0);
        t25 = *(int *)(((int)stk + 0));
        (((struct o90_uint *)(a4))->v) = (t25 - t2);
        ADXSJD_SetTrapNumSmpl(t1, (t25 - t2));
        ADXSJD_SetTrapDtLen(t1, t3);
        ADXSJD_SetDecPos(t1, t2);
        if ((*(signed char *)((a4 + 0x2))) == 2) {
            t32 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x14)))))(t0, a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
            t35 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x18)))))(t0, 0x1, t3, (((int)stk + 0) + 0x4), *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
            t38 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t0 + 0x0))) + 0x20)))))(t0, 0x0, (((int)stk + 0) + 0x4), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
        }
        (((struct o4C_uint *)(a4))->v) = (((((struct o4C_int *)(a4))->v)) + 0x1);
        t42 = 0x4C;
    }
    return t42;
}

int kmiInitVGA(void)
{
    int stk[126];
    register int t7;
    register int t8;
    register int t9;
    register int t10;

    *(unsigned int *)((((int)stk + 252) + 0x8)) = 0x359;
    *(unsigned int *)((((int)stk + 252) + 0x14)) = 0x20C;
    *(unsigned int *)((((int)stk + 252) + 0x0)) = 0x7E;
    *(unsigned int *)((((int)stk + 252) + 0x4)) = 0x345;
    *(unsigned int *)((((int)stk + 252) + 0xC)) = 0x28;
    *(unsigned int *)((((int)stk + 252) + 0x10)) = 0x208;
    *(unsigned int *)((((int)stk + 252) + 0x18)) = 0x3F;
    *(unsigned int *)((((int)stk + 252) + 0x1C)) = 0x3;
    *(unsigned int *)((((int)stk + 252) + 0x20)) = 0x319;
    *(unsigned int *)((((int)stk + 252) + 0x24)) = 0xF;
    (((struct o74_uint *)(((int)stk + 252)))->v) = 0x208;
    (((struct o78_uint *)(((int)stk + 252)))->v) = 0x15;
    *(unsigned int *)((((int)stk + 252) + 0x34)) = 0x0;
    *(unsigned int *)((((int)stk + 252) + 0x38)) = 0x0;
    *(unsigned int *)((((int)stk + 252) + 0x3C)) = 0x0;
    (((struct o40_uint *)(((int)stk + 252)))->v) = 0x0;
    (((struct o44_uint *)(((int)stk + 252)))->v) = 0x0;
    if ((*(int *)0xC3008D0) == 6) {
        (((struct o70_uint *)(((int)stk + 252)))->v) = 0x16;
    } else {
        (((struct o70_uint *)(((int)stk + 252)))->v) = 0x1F;
    }
    (((struct o6C_uint *)(((int)stk + 252)))->v) = 0x0;
    *(unsigned int *)((((int)stk + 252) + 0x28)) = 0x0;
    *(unsigned int *)((((int)stk + 252) + 0x2C)) = 0x0;
    *(unsigned int *)((((int)stk + 252) + 0x30)) = 0x0;
    (((struct o48_uint *)(((int)stk + 252)))->v) = 0x1;
    (((struct o4C_uint *)(((int)stk + 252)))->v) = 0x0;
    (((struct o50_uint *)(((int)stk + 252)))->v) = 0x0;
    (((struct o54_uint *)(((int)stk + 252)))->v) = 0x0;
    (((struct o58_uint *)(((int)stk + 252)))->v) = 0x0;
    (((struct o5C_uint *)(((int)stk + 252)))->v) = 0x0;
    (((struct o68_uint *)(((int)stk + 252)))->v) = 0x0;
    (((struct o60_uint *)(((int)stk + 252)))->v) = 0x0;
    (((struct o64_uint *)(((int)stk + 252)))->v) = 0x1E0;
    (((struct oF8_uint *)(((int)stk + 252)))->v) = 0x90;
    (((struct oF0_uint *)(((int)stk + 252)))->v) = 0x23;
    (((struct oF4_uint *)(((int)stk + 252)))->v) = 0x23;
    (((struct oF8_uint *)(((int)stk + 252)))->v) = 0xA8;
    (((struct oF0_uint *)(((int)stk + 252)))->v) = 0x28;
    (((struct oF4_uint *)(((int)stk + 252)))->v) = 0x28;
    (((struct o8_uint *)0xC300BE8)->v) = 0x1E0;
    (((struct o0_uint *)0xC300BE8)->v) = ((*(int *)((((int)stk + 252) + 0xC))) + ((((struct o8_int *)0xC300BE8)->v)));
    (((struct o4_uint *)0xC300BE8)->v) = (*(int *)((((int)stk + 252) + 0xC)));
    t7 = ((int)stk + 252);
    t8 = (((int)stk + 252) + 252);
    t9 = ((int)stk + 0);
    for (;;) { t10 = *(int *)t7; t7 = (t7 + 4); if ((unsigned int)t8 < (unsigned int)t7) break; *(unsigned int *)t9 = t10; t9 = (t9 + 4); }
    return (FUN_0c1675c0());
}

int ADXB_DecodeHeaderAu(int a4, int a5, int a6)
{
    int stk[11];
    register int t2;
    register int t14;

    *(unsigned int *)(((int)stk + 36)) = a5;
    *(unsigned int *)(((int)stk + 40)) = a6;
    *(unsigned short *)((a4 + 0x2)) = 0x1;
    *(int *)((int)stk + 24) = (((int)stk + 28) + 0x4);
    *(int *)((int)stk + 20) = (a4 + 0x10);
    *(int *)((int)stk + 16) = (a4 + 0x18);
    *(int *)((int)stk + 12) = (a4 + 0x14);
    *(int *)((int)stk + 8) = (a4 + 0xE);
    *(int *)((int)stk + 4) = (a4 + 0xF);
    *(int *)((int)stk + 0) = (a4 + 0xD);
    t2 = ADX_DecodeInfoAu((*(int *)(((int)stk + 36))), (*(int *)(((int)stk + 40))), (((int)stk + 0) + 0x1C), (a4 + 0xC), (a4 + 0xD), (a4 + 0xF), (a4 + 0xE), (a4 + 0x14), (a4 + 0x18), (a4 + 0x10), (((int)stk + 28) + 0x4));
    t14 = 0x0;
    if ((int)t2 < 0) {
    } else {
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
        (((struct oA8_ushort *)(a4))->v) = 0x4;
        (((struct oAA_ushort *)(a4))->v) = (*(int *)(((int)stk + 32)));
        memset((a4 + 0x4C), 0x0, 0x4);
        t14 = (*(short *)(((int)stk + 28)));
    }
    return t14;
}

int gdFsDaPlayG(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t5;
    register int t6;

    t0 = (((struct o0_int *)0xC2D0CF4)->v);
    t1 = a5;
    t2 = a4;
    if ((*(short *)((t0 + 0x0))) == 1) {
        t3 = *(short *)((t0 + 0x2));
        t1 = (a5 + (t3 - 4));
        t2 = (a4 + (t3 - 4));
    }
    t0 = 0xFFFFFFF3;
    if ((int)t2 >= (int)0x3) {
        t3 = gdFsReopenHn((*(int *)(((*(int *)0xC1737EC) + 0x14))), 0x0, 0x0, 0x0);
        t0 = 0xFFFFFFF3;
        if (t3 != 0) {
            t5 = _builtin_get_imask();
            _builtin_set_imask(0xF);
            t6 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)(((*(int *)0xC1737EC) + 0xC))) + 0x28)))))(t2, t1, a6, a7);
            if (t6 != 0) {
                *(unsigned int *)((t3 + 0x3C)) = t6;
                (((struct o50_ushort *)(t3))->v) = 0x4;
                if ((int)(*(int *)(((*(int *)0xC1737EC) + 0x2C))) >= (int)0x10001) {
                    (((struct o3A_ushort *)((*(int *)0xC1737EC)))->v) = 0x1;
                    (((struct o10_uint *)0xC2D0CF4)->v) = 0x1;
                    (((struct o14_uint *)0xC2D0CF4)->v) = t2;
                    (((struct o18_uint *)0xC2D0CF4)->v) = t1;
                    (((struct o1C_uint *)0xC2D0CF4)->v) = a6;
                    *(unsigned int *)((t3 + 0x4)) = 0xC2D0D14;
                    (((struct o48_ushort *)(t3))->v) = 0x8;
                    t1 = 0x1;
                } else {
                    (((struct o48_ushort *)(t3))->v) = 0x6;
                }
                *(unsigned int *)(((*(int *)((t3 + 0x0))) + 0x1C)) = t3;
                t2 = ((int (*)(int, int, int, int))(((((struct o40_int *)((*(int *)(((*(int *)0xC1737EC) + 0xC)))))->v))))(t1, a5, a6, a7);
            }
            _builtin_set_imask(((unsigned int)(((t5 & 0xF) << 2) << 2) >> 4));
            t1 = 0x0;
            if (t6 == 0) {
                t1 = 0xFFFFFFF3;
            }
            t0 = t1;
        }
    }
    return t0;
}

int fmMngReadSctAllData(int a4)
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
    register int t9;

    t2 = *(int *)((a4 + 0xC));
    t3 = *(int *)((a4 + 0x4));
    t4 = FUN_0c16a4d0(t3, t2, 0x40);
    t5 = 0xFFFFFFFF;
    if (t4 != -1) {
        t4 = *(int *)((a4 + 0x14));
        t6 = FUN_0c16a4d0((t3 + ((((t4 + 0x1) << 2) << 2) << 2)), (((((t4 + 0x1) << 2) << 2) << 2) + t2), ((((*(int *)((a4 + 0x18))) << 2) << 2) << 2));
        t7 = 0xFFFFFFFF;
        if (t6 != -1) {
            t6 = fmMngBit2Num((((((t4 + 0x1) << 2) << 2) << 2) + t2), (*(int *)((a4 + 0x18))));
            *(unsigned int *)((a4 + 0x10)) = t6;
            t4 = 0xFFFFFFFA;
            if ((*(short *)((a4 + 0x2))) == 0) {
                t8 = 0x0;
                if ((int)t6 > 0) {
                    t9 = (t3 + 0x40);
                    t3 = t6;
                    for (;;) {
                        t6 = FUN_0c16a4d0(t9, (a4 + 0x34), 0x40);
                        if (t6 == -1) {
                            break;
                        }
                        if ((unsigned short)((((struct o34_short *)(a4))->v)) != 0xFFFF) {
                            t6 = fmcalccrc(0x3E, (a4 + 0x34));
                            if (((unsigned short)((((struct o3E_short *)((a4 + 0x34)))->v)) == (unsigned short)t6) && (t0 = (((struct o34_short *)(a4))->v), t1 = *(int *)((a4 + 0x14)), (int)(unsigned short)t0 < (int)t1)) {
                                fmMngMcpy4((a4 + 0x34), ((((((unsigned short)((((struct o34_short *)(a4))->v)) + 0x1) << 2) << 2) << 2) + t2), 0x40);
                            }
                            t3 = (t3 - 1);
                            t9 = (t9 + 0x40);
                            if ((int)t3 <= 0) {
                                return 0x0;
                            }
                            continue;
                        }
                        return 0x0;
                    }
                    t8 = 0xFFFFFFFF;
                }
                t4 = t8;
            }
            t7 = t4;
        }
        t5 = t7;
    }
    return t5;
}

float Init_Adv_Global_Parm(void)
{
    register float u0;
    register float u1;
    register float u2;

    *(unsigned short *)0xC2B2B58 = 0x0;
    *(unsigned int *)0xC2B2C4C = 0x0;
    FUN_0c027f28(0x1);
    pfSize(1.0f, 1.0f);
    u0 = (((struct o0_float *)0xC052F34)->v);
    u1 = (((struct o8_float *)0xC052F34)->v);
    u2 = ((FUN_0c02806c(0xC10CAF8)) * u1);
    (((struct o0_float *)0xC2B2D34)->v) = (nlRoundOff((u0 - u2)));
    u2 = ((FUN_0c02806c(0xC10CB04)) * u1);
    (((struct o4_float *)0xC2B2D34)->v) = (nlRoundOff((u0 - u2)));
    u2 = ((FUN_0c02806c(0xC10CB14)) * u1);
    (((struct o8_float *)0xC2B2D34)->v) = (nlRoundOff((u0 - u2)));
    u2 = ((FUN_0c02806c(0xC10CB28)) * u1);
    (((struct oC_float *)0xC2B2D34)->v) = (nlRoundOff((u0 - u2)));
    pfSize(1.0f, 1.0f);
    u2 = ((FUN_0c02806c(0xC10CB3C)) * u1);
    (((struct o10_float *)0xC2B2D34)->v) = (nlRoundOff((u0 - u2)));
    pfSize(1.0f, 1.0f);
    u2 = ((FUN_0c02806c(0xC10CB58)) * u1);
    (((struct o14_float *)0xC2B2D34)->v) = (nlRoundOff((u0 - u2)));
    u2 = (((struct o38_float *)0xC052F34)->v);
    pfSize(u2, u2);
    u2 = ((FUN_0c02806c(0xC10CB70)) * u1);
    u1 = nlRoundOff((u0 - u2));
    (((struct o18_float *)0xC2B2D34)->v) = u1;
    return u1;
}

int FUN_0c067b14(int a4)
{
    register int t0;
    register int t1;
    register float u0;

    if (((((struct o88_int *)(a4))->v)) == 4) {
        if ((int)((((struct oF4_int *)(a4))->v)) > 0) {
            t0 = FUN_0c05f434();
            nlPushMatrix((0x80 + t0));
            FUN_0c073a30(0.0f, 3.20000005f, 0.0f);
            t0 = FUN_0c067c2c((0xF4 + a4));
            if (t0 != 0) {
                t0 = *(int *)((((((struct oAC_int *)(a4))->v)) + 0x0));
                (((struct oFF_uchar *)(t0))->v) = ((*(signed char *)(((0xFF + t0) + 0x0))) & 0xFE);
                t0 = *(int *)((((((struct oAC_int *)(a4))->v)) + 0x0));
                (((struct oFF_uchar *)((t0 + 0x100)))->v) = ((*(signed char *)(((0xFF + (t0 + 0x100)) + 0x0))) & 0xFE);
            }
            return nlPopMatrix(0x1);
        }
        return 0xF4;
    }
    if (((((struct o88_int *)(a4))->v)) == 5) {
        if (((((struct oF4_int *)(a4))->v)) == 0) {
            FUN_0c05f470(a4, 0xC9FDFA0, 0.0f, 0.0f);
            (((struct oF4_uint *)(a4))->v) = (((((struct oF4_int *)(a4))->v)) + 0x1);
            return 0xF4;
        }
        u0 = (((struct o4_float *)(a4))->v);
        if (!(50.0f > u0)) {
            if ((((((struct o8_float *)(a4))->v)) + 50.0f) > u0) {
                t0 = (((struct o84_int *)(a4))->v);
                t1 = *(int *)((((((struct oAC_int *)(a4))->v)) + 0x0));
                (((struct oF4_uint *)((((((t0 == 0)) ? 1 : 0) << 8) + t1)))->v) = (((((struct oF4_int *)((((((t0 == 0)) ? 1 : 0) << 8) + t1)))->v)) + 0x1);
                return FUN_0c058ca6(0x107A9, 0x2);
            }
            return 0x8;
        }
        return 0x4;
    }
    t0 = *(signed char *)(((0xFF + a4) + 0x0));
    (((struct oFF_uchar *)(a4))->v) = (t0 & 0xFE);
    return (t0 & 0xFE);
}

int nlLineCalcColor(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    int t2;
    register int t3;

    t0 = a6;
    for (;;) {
        t1 = ((int (*)(int, int, int))(FUN_0c078cb0))(a4, a5, t0);
        t2 = ((int (*)(int))(FUN_0c078cb0))(a5);
        if ((t1 & t2) != 0) {
            break;
        }
        if ((t1 == 0) && (t2 == 0)) {
            return 0x1;
        }
        t3 = t2;
        if (t1 != 0) {
            t3 = t1;
        }
        if (t1 == 0) {
            t0 = a5;
        } else {
            t0 = a4;
        }
        if ((t3 & 0x1) != 0) {
            nlLineCalcFogB(a4, a5, t0, ((((struct o8_float *)0xC2C3D9C)->v)));
        } else {
            if ((t3 & 0x2) != 0) {
                nlLineCalcFogB(a4, a5, t0, ((((struct o0_float *)0xC2C3D9C)->v)));
            } else {
                if ((t3 & 0x4) != 0) {
                    nlLineCalcFogC(a4, a5, t0, ((((struct oC_float *)0xC2C3D9C)->v)));
                } else {
                    if ((t3 & 0x8) != 0) {
                        nlLineCalcFogC(a4, a5, t0, ((((struct o4_float *)0xC2C3D9C)->v)));
                    }
                }
            }
        }
    }
    return 0x0;
}

float _in_fmods(int a4, float f4, float f5)
{
    int stk[7];
    register float u16;
    register float u17;
    register int t18;
    register float u24;
    register float u27;
    register float u31;
    register int t1;
    register int t2;

    (((struct o18_float *)(((int)stk + 0)))->v) = f4;
    (((struct o14_float *)(((int)stk + 0)))->v) = f5;
    if ((((*(int *)(((((int)stk + 0) + 0x18) + 0x0))) & 0x7F800000) != 0x7F800000) && ((t1 = *(int *)(((int)stk + 20)), (t1 & 0x7F800000) != 0x7F800000) || (t2 = *(int *)(((int)stk + 20)), (t2 & 0x7FFFFF) == 0))) {
        if ((*(float *)(((int)stk + 20))) == 0.0f) {
            *(unsigned int *)((a4 + 0x0)) = 0x0;
            (((struct o10_float *)(((int)stk + 0)))->v) = (*(float *)0xC11851C);
        } else {
            if (((*(int *)(((((int)stk + 0) + 0x14) + 0x0))) & 0x7F800000) == 0x7F800000) {
                *(unsigned int *)((a4 + 0x0)) = 0x0;
                (((struct o10_float *)(((int)stk + 0)))->v) = f4;
            } else {
                *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((((int)stk + 0) + 0x18) + 0x0))) & 0x80000000);
                *(unsigned int *)(((((int)stk + 0) + 0x18) + 0x0)) = ((*(int *)(((((int)stk + 0) + 0x18) + 0x0))) & 0x7FFFFFFF);
                *(unsigned int *)(((((int)stk + 0) + 0x14) + 0x0)) = ((*(int *)(((((int)stk + 0) + 0x14) + 0x0))) & 0x7FFFFFFF);
                u16 = (((struct o14_float *)(((int)stk + 0)))->v);
                u17 = (((struct o18_float *)(((int)stk + 0)))->v);
                *(float *)(((int)stk + 12)) = (u17 / u16);
                t18 = *(int *)(((int)stk + 12));
                *(unsigned int *)(((int)stk + 0)) = t18;
                *(unsigned int *)(((int)stk + 4)) = (t18 & 0x80000000);
                if ((int)(0x7F800000 & (*(int *)(((int)stk + 0)))) < (int)0x4F800000) {
                    *(float *)(((int)stk + 12)) = (float)(int)(u17 / u16);
                }
                *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) | (*(int *)(((int)stk + 4))));
                u24 = *(float *)(((int)stk + 12));
                u27 = u24;
                if (u24 > 2.14748365e+09f) {
                    u27 = (u24 + -4.2949673e+09f);
                }
                *(unsigned int *)((a4 + 0x0)) = (int)u27;
                u31 = (float)(int)u27;
                if ((int)(int)u27 < 0) {
                    u31 = ((float)(int)u27 + 4.2949673e+09f);
                }
                (((struct o10_float *)(((int)stk + 0)))->v) = (((((struct o18_float *)(((int)stk + 0)))->v)) - ((u31 * ((((struct o14_float *)(((int)stk + 0)))->v)))));
                *(unsigned int *)(((((int)stk + 0) + 0x10) + 0x0)) = ((*(int *)(((((int)stk + 0) + 0x10) + 0x0))) | (*(int *)(((int)stk + 8))));
            }
        }
    } else {
        *(unsigned int *)((a4 + 0x0)) = 0x0;
        (((struct o10_float *)(((int)stk + 0)))->v) = (*(float *)0xC11851C);
    }
    return ((((struct o10_float *)(((int)stk + 0)))->v));
}

int FUN_0c096138(int a4, int a5)
{
    int stk[3];
    register int t0;
    register int t1;
    register int t5;
    register int t6;
    register int t26;
    register int t10;
    register int t43;
    register int t30;
    register int t31;
    int t35;
    int t12;
    int t13;

    t0 = (int)((int)a5 / (int)0x8);
    t1 = ((~(((~a5) + 0x1) & 0x7)) + 0x1);
    if ((int)a5 >= 0) {
        t1 = (a5 & 0x7);
    }
    *(unsigned int *)(((int)stk + 0)) = (unsigned char)((int)0x80 << (int)(-t1));
    *(unsigned int *)(((int)stk + 8)) = (unsigned char)((unsigned char)((int)0x80 << (int)(-t1)) >> 1);
    *(unsigned char *)(((int)stk + 4)) = ((unsigned char)((unsigned char)((int)0x80 << (int)(-t1)) >> 1) >> 1);
    t5 = (int)((int)(a5 - 1) / (int)0x8);
    t6 = ((~(((~(a5 - 1)) + 0x1) & 0x7)) + 0x1);
    if ((int)(a5 - 1) >= 0) {
        t6 = ((a5 - 1) & 0x7);
    }
    t26 = 0x0;
    if (((unsigned char)(*(signed char *)(((t0 + a4) + 0x0))) & (*(int *)(((int)stk + 0)))) != 0) {
        t10 = *(signed char *)(((t0 + a4) + 0x0));
        *(unsigned int *)(((int)stk + 0)) = (unsigned char)t10;
        t26 = 0x1;
        if ((((unsigned char)t10 & (*(int *)(((int)stk + 8)))) == 0) && (t12 = *(signed char *)(((int)stk + 4)), t13 = *(int *)(((int)stk + 0)), ((unsigned char)t12 & t13) == 0)) {
            t26 = 0x0;
            if (((unsigned char)(*(signed char *)(((t5 + a4) + 0x0))) & (unsigned char)((int)0x80 << (int)(-t6))) != 0) {
                t26 = 0x1;
            }
        }
    }
    t43 = 0x0;
    if (t26 == 1) {
        t30 = (t5 + a4);
        t31 = ((int)0x80 << (int)(-t6));
        for (;;) {
            if ((((unsigned char)(*(signed char *)((t30 + 0x0))) & (unsigned char)t31) != 0) && ((unsigned int)t30 >= (unsigned int)a4)) {
                t35 = (~t31);
                t31 = (t31 << 1);
                *(unsigned char *)((t30 + 0x0)) = ((*(signed char *)((t30 + 0x0))) & t35);
                if ((unsigned char)t31 == 0) {
                    t31 = 0x1;
                    t30 = (t30 - 1);
                }
                continue;
            }
            break;
        }
        t43 = 0x1;
        if ((unsigned int)t30 >= (unsigned int)a4) {
            *(unsigned char *)((t30 + 0x0)) = ((*(signed char *)((t30 + 0x0))) | t31);
            t43 = 0x0;
        }
    }
    return t43;
}

int ADXB_DecodeHeaderWav(int a4, int a5, int a6)
{
    int stk[10];
    register int t2;
    register int t13;

    *(unsigned int *)(((int)stk + 32)) = a5;
    *(unsigned int *)(((int)stk + 36)) = a6;
    *(unsigned short *)((a4 + 0x2)) = 0x1;
    *(int *)((int)stk + 24) = (0xAA + a4);
    *(int *)((int)stk + 20) = (a4 + 0x10);
    *(int *)((int)stk + 16) = (a4 + 0x18);
    *(int *)((int)stk + 12) = (a4 + 0x14);
    *(int *)((int)stk + 8) = (a4 + 0xE);
    *(int *)((int)stk + 4) = (a4 + 0xF);
    *(int *)((int)stk + 0) = (a4 + 0xD);
    t2 = ADX_DecodeInfoSpsd((*(int *)(((int)stk + 32))), (*(int *)(((int)stk + 36))), (((int)stk + 0) + 0x1C), (a4 + 0xC), (a4 + 0xD), (a4 + 0xF), (a4 + 0xE), (a4 + 0x14), (a4 + 0x18), (a4 + 0x10), (0xAA + a4));
    t13 = 0x0;
    if ((int)t2 < 0) {
    } else {
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
        (((struct oA8_ushort *)(a4))->v) = 0x2;
        memset((a4 + 0x4C), 0x0, 0x4);
        t13 = (*(short *)(((int)stk + 28)));
    }
    return t13;
}

int FUN_0c013a30(int a4)
{
    int stk[2];
    register int t0;
    register float u8;
    register int t12;
    register float u20;
    register int t24;
    register float u32;

    t0 = (((struct o74_int *)(a4))->v);
    *(unsigned int *)(((int)stk + 4)) = t0;
    u8 = ((((((struct o74_float *)((0x18C + (0x1A4 + a4))))->v)) + ((((struct o74_float *)((0x108 + (0x1A4 + a4))))->v))) * 0.5f);
    FUN_0c01b920(((int)stk + 0), ((((((((struct o74_float *)((0x84 + (0x1A4 + a4))))->v)) + ((((struct o74_float *)((0x1A4 + a4)))->v))) * 0.5f)) - u8), (((((struct o14_float *)(t0))->v)) - ((((struct o8_float *)((t0 + 0x24)))->v))));
    (((struct oFC_ushort *)(a4))->v) = (((((struct oFC_short *)(a4))->v)) + (*(short *)(((int)stk + 0))));
    t12 = (((struct o74_int *)(a4))->v);
    *(unsigned int *)(((int)stk + 4)) = t12;
    u20 = ((((((struct o78_float *)((0x18C + (0x1A4 + a4))))->v)) + ((((struct o78_float *)((0x108 + (0x1A4 + a4))))->v))) * 0.5f);
    FUN_0c01b920(((int)stk + 0), ((((((((struct o78_float *)((0x84 + (0x1A4 + a4))))->v)) + ((((struct o78_float *)((0x1A4 + a4)))->v))) * 0.5f)) - u20), (((((struct o14_float *)(t12))->v)) - ((((struct o8_float *)((t12 + 0x24)))->v))));
    (((struct oFA_ushort *)(a4))->v) = (((((struct oFA_short *)(a4))->v)) - (*(short *)(((int)stk + 0))));
    t24 = (((struct o74_int *)(a4))->v);
    *(unsigned int *)(((int)stk + 4)) = t24;
    u32 = ((((((struct o78_float *)((0x1A4 + a4)))->v)) + ((((struct o78_float *)((0x108 + (0x1A4 + a4))))->v))) * 0.5f);
    FUN_0c01b920(((int)stk + 0), ((((((((struct o78_float *)((0x84 + (0x1A4 + a4))))->v)) + ((((struct o78_float *)((0x18C + (0x1A4 + a4))))->v))) * 0.5f)) - u32), ((*(float *)((t24 + 0x0))) - ((((struct oC_float *)(t24))->v))));
    (((struct oFE_ushort *)(a4))->v) = (((((struct oFE_short *)(a4))->v)) - (*(short *)(((int)stk + 0))));
    return 0xFE;
}

int CheckColliWallSegment(int a4, int a5, float f4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u7;
    float s1;

    t1 = *(int *)((a4 + 0x0));
    u0 = (((struct o4_float *)(t1))->v);
    if (!(u0 > ((((struct o14_float *)(a5))->v)))) {
        if (!((((((struct o18_float *)(a5))->v)) - ((((struct o18_float *)(a4))->v))) > u0)) {
            u0 = *(float *)((t1 + 0x0));
            u1 = (((struct o4_float *)(a5))->v);
            u2 = (((struct o8_float *)(t1))->v);
            u3 = *(float *)((a5 + 0x0));
            u4 = (((struct o10_float *)(a5))->v);
            u5 = (u1 * u2);
            u5 = u5 + u0 * u3;
            u6 = (((struct o14_float *)(a4))->v);
            u7 = ((((((struct o8_float *)(a5))->v)) - u0) * u1);
            u0 = ((((((struct oC_float *)(a5))->v)) - u2) * u3);
            if (u6 > (u5 + u4)) {
                if ((u5 + u4) > (-u6)) {
                    (((struct o10_float *)(a4))->v) = (u5 + u4);
                    if (0.0f > (u7 - u0)) {
                        if ((u7 - u0) > (-((((struct o14_float *)(a4))->v)))) {
                            u1 = *(float *)((t1 + 0x0));
                            u2 = (((struct o8_float *)(a5))->v);
                            u3 = (((struct oC_float *)(a5))->v);
                            u4 = (((struct o8_float *)(t1))->v);
                            u5 = ((u4 - u3) * (u4 - u3));
                            u5 = u5 + ((u1 - u2)) * ((u1 - u2));
                            s1 = _builtin_sqrtf(u5);
                            if (((((struct o14_float *)(a4))->v)) > s1) {
                                (((struct oC_float *)(a4))->v) = (((((struct o14_float *)(a4))->v)) - s1);
                                (((struct o4_float *)(a4))->v) = ((1.0f / s1) * (u1 - u2));
                                (((struct o8_float *)(a4))->v) = ((1.0f / s1) * (u4 - u3));
                                return 0x2;
                            }
                            return 0x0;
                        }
                        return 0x0;
                    }
                    if (((((struct o1C_float *)(a5))->v)) > (u7 - u0)) {
                        FUN_0c07fdc8();
                        (((struct oC_float *)(t0))->v) = (((((struct o14_float *)(t0))->v)) - f4);
                        return 0x1;
                    }
                    return 0x0;
                }
                return 0x0;
            }
            return 0x0;
        }
        return 0x0;
    }
    return 0x0;
}

int MakeKyakuTakeArea(int a4, int a5, int a6, float f4, float f5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;

    *(unsigned int *)((a4 + 0x0)) = 0xC;
    *(unsigned int *)(((a4 + 0x4) + 0x0)) = (*(int *)(((a6 << 2) + 0xC12951C)));
    (((struct oA0_uint *)((a4 + 0x4)))->v) = 0x0;
    if ((*(int *)0xC1EC71C) == 0) {
        u0 = ((((struct o4_float *)(a5))->v));
    } else {
        u1 = (((struct o0_float *)0xC02D868)->v);
        u0 = (((((struct o4_float *)(a5))->v)) + u1);
        u2 = u1;
    }
    t0 = ((a4 + 0x4) + 0xA0);
    t1 = 0x0;
    t2 = (a4 + 0x8);
    u1 = u2;
    u2 = f4;
    u3 = f5;
    for (;;) {
        if ((int)t1 >= (int)0xC) {
            break;
        }
        t3 = 0x1555;
        t0 = (t1 * t3);
        FUN_0c072150(t0, (t2 + 0x8), t2);
        u4 = (*(float *)((t2 + 0x0)));
        u1 = (*(float *)((a5 + 0x0)));
        u5 = u1;
        u5 = u5 + f4 * u4;
        u1 = u5;
        t3 = 0xC029B12;
        *(float *)((t2 + 0x0)) = u1;
        u4 = ((((struct o8_float *)(t2))->v));
        u1 = ((((struct o8_float *)(a5))->v));
        u5 = u1;
        u5 = u5 + f4 * u4;
        u1 = u5;
        (((struct o8_float *)(t2))->v) = u1;
        (((struct o4_float *)(t2))->v) = u0;
        u2 = (((((struct oC_float *)0xC02D868)->v)));
        t0 = t2;
        t0 = (FUN_0c029b12(t0, u2));
        u2 = ((((struct o10_float *)0xC02D868)->v));
        if ((*(int *)((t0 + 0x1C))) != -1) {
            u3 = ((((struct o14_float *)0xC02D868)->v));
            u1 = ((((struct o4_float *)(a5))->v));
            u4 = ((((struct o18_float *)(t0))->v));
            u1 = (u1 + u3);
            if (u1 > u4) {
                u1 = ((((struct o4_float *)(a5))->v));
                u1 = (u1 + u2);
            } else {
                u1 = ((((struct o18_float *)(t0))->v));
                u1 = (u1 + u2);
            }
            u5 = u4;
            u6 = u3;
        } else {
            u1 = ((((struct o4_float *)(a5))->v));
            u1 = (u1 + u2);
        }
        (((struct o4_float *)(t2))->v) = u1;
        u4 = u5;
        u3 = u6;
        t2 = (t2 + 0xC);
        t1 = (t1 + 0x1);
    }
    return (FUN_0c07ff00());
}

int FUN_0c03cc9c(void)
{
    register int t0;
    register int t1;
    register int t2;

    FUN_0c034320(0x0, 0x14);
    FUN_0c033e38(0x0, 0x5, 0x0);
    FUN_0c03457c();
    FUN_0c03346e(0xC0B7DC4, 0xC2A5808, ((*(int *)0xC2A585C) + 0x8), 0x18);
    t0 = *(int *)(((((*(int *)0xC2A4680) << 2) + 0xC2A4684) + 0x0));
    t1 = *(int *)0xC2A585C;
    t2 = 0x0;
    if ((int)t0 < (int)0x3) {
        t2 = 0x2;
    }
    FUN_0c034804(t2, (float)(-t1), 416.0f);
    FUN_0c034928(0xA13, 0xC0B506C, 0x5, t0, 0x0);
    t1 = FUN_0c0343b8(0x0, 0x14);
    if (t1 == 3) {
        if (t0 == 3) {
            return FUN_0c03adec();
        }
        return t0;
    }
    return t1;
}

int FUN_0c041178(int a4)
{
    int stk[3];
    register float u9;
    register float t12;
    register float u13;
    register float u17;
    register int t18;
    register int t19;
    register float u28;
    float s1;

    FUN_0c073360();
    nlRotateAY((unsigned short)((((struct oA6_short *)(a4))->v)));
    nlRotateAX((unsigned short)((((struct oA4_short *)(a4))->v)));
    nlRotateAZ((unsigned short)((((struct oA8_short *)(a4))->v)));
    if (((((struct oC0_int *)(a4))->v)) != 0) {
        u9 = *(float *)(((((((struct o78_int *)(a4))->v)) * 0xA8) + 0xC0C1064));
        FUN_0c073a30(0.0f, 0.0f, (-u9));
        t12 = nlTan(((((struct oC0_int *)(a4))->v)));
        u13 = (((struct oCC_float *)(a4))->v);
        u17 = (u13 * u13);
        u17 = u17 + ((u9 / t12)) * ((u9 / t12));
        s1 = _builtin_sqrtf(u17);
        t18 = nlArcTan2((((((struct oCC_float *)(a4))->v)) * (1.0f / s1)), (_builtin_fabsf((u9 / t12)) * (1.0f / s1)));
        t19 = t18;
        if (0.0f > (u9 / t12)) {
            t19 = (-t18);
        }
        nlRotateAY(t19);
        FUN_0c073a30(0.0f, 0.0f, u9);
        FUN_0c046814((0xA4 + a4));
        u28 = (1.0f / s1);
    }
    *(float *)(((int)stk + 4)) = 0.0f;
    *(float *)(((int)stk + 0)) = 0.0f;
    *(float *)(((int)stk + 8)) = ((((struct oC4_float *)(a4))->v));
    FUN_0c072290(((int)stk + 0), ((int)stk + 0));
    nlPopMatrix(0x1);
    return (nlAddVector((0x98 + a4), ((int)stk + 0)));
}

int kmiVQFBfree(int a4)
{
    int stk[5];
    register int t2;
    register int t29;
    register int t4;
    int t6;
    register int t9;
    register int t61;
    register int t34;
    register int t41;
    register int t35;
    register int t36;
    register int t37;
    register int t46;
    register int t27;
    register int t3;
    register int t5;
    register int t7;
    register int t8;

    kmytex_GetSmallVQprofile(((int)stk + 0), a4);
    t4 = *(int *)0xC173E14;
    t2 = *(int *)(((int)stk + 16));
    t29 = 0x0;
    if (t4 != 0) {
        t6 = t5;
        t9 = 0x0;
        for (;;) {
            if ((((unsigned short)(*(short *)((t4 + 0x0))) & 0xF000) == (*(int *)(((int)stk + 0)))) && (t6 = 0x0, (unsigned int)0x0 < (unsigned int)t2)) {
                for (;;) {
                    t3 = t6;
                    t3 = (t3 << 2);
                    t3 = (t3 + (t4 + 0xC));
                    if ((*(int *)((t3 + 0x0))) != 0) {
                        t8 = (*(int *)(((int)stk + 4)));
                        t8 = ((unsigned int)t8 >> 2);
                        t8 = (t6 * t8);
                        t8 = (t8 << 2);
                        t8 = (t8 + (*(int *)((t4 + 0x8))));
                        if (t8 == (*(int *)((a4 + 0x1C)))) {
                            t7 = t6;
                            t9 = t4;
                            t4 = 0x0;
                            t6 = t2;
                        }
                    }
                    t6 = (t6 + 0x1);
                    if ((unsigned int)t6 >= (unsigned int)t2) {
                        break;
                    }
                }
            }
            if (t9 == 0) {
                t4 = (*(int *)((t4 + 0x4)));
            }
            if (t4 == 0) {
                break;
            }
        }
        t27 = t7;
        t29 = t9;
    }
    t61 = 0x7;
    if (t29 != 0) {
        *(unsigned int *)((((t27 << 2) + (t29 + 0xC)) + 0x0)) = 0x0;
        t34 = *(int *)(((int)stk + 16));
        t41 = 0x0;
        if ((unsigned int)0x0 < (unsigned int)t34) {
            t35 = 0x0;
            t36 = 0x0;
            for (;;) {
                t37 = *(int *)((((t35 << 2) + (t29 + 0xC)) + 0x0));
                t35 = (t35 + 0x1);
                if (t37 != 0) {
                    t36 = 0x1;
                }
                if ((unsigned int)t35 >= (unsigned int)t34) {
                    break;
                }
            }
            t41 = t36;
        }
        t61 = 0x0;
        if (t41 == 0) {
            t46 = kmiFBfree((*(int *)((t29 + 0x8))));
            t61 = t46;
            if (t46 != 0) {
            } else {
                VQDeQueueEntry(0xC173E14, t29);
                kmytex_VQFreeEntry(t29);
                t61 = 0x0;
            }
        }
    }
    return t61;
}

int kmiCopyToFrameBuffer(int a4, int a5, int a6)
{
    int stk[2];
    register int t2;

    if (((a4 & 0x1F) == 0) && (((a5 & 0x1F) == 0) && ((_builtin_get_imask()) == 0))) {
        kmiPurgeMemory(a5, a6);
        if ((0xFFFFFFE0 & a6) != 0) {
            for (;;) {
                *(int *)((int)stk + 0) = ((int)stk + 4);
                t2 = kmiDMAtoTARequest((0x11000000 + a4), a5, (0xFFFFFFE0 & a6), 0x18, ((int)stk + 4));
                if (t2 != 0x100) {
                    break;
                }
            }
            (((struct o0_uint *)0xC300CFC)->v) = (*(int *)(((*(int *)(((int)stk + 4))) + 0x0)));
        } else {
            (((struct o0_uint *)0xC300CFC)->v) = 0x0;
        }
        if ((a6 & 0x1F) != 0) {
            kmiMemCopy4((0xA4000000 + (a4 + (0xFFFFFFE0 & a6))), (a5 + (0xFFFFFFE0 & a6)), (a6 & 0x1F));
        }
        if (((((struct o4_int *)0xC300CFC)->v)) == 1) {
            kmiWaitForFinishDMA(((((struct o0_int *)0xC300CFC)->v)));
        }
    } else {
        kmiMemCopy4((0xA4000000 + a4), a5, a6);
    }
    return 0x1;
}

int syBtCfgSet(int a4, int a5, int a6)
{
    int stk[15];

    register int R1;
    register int R2;
    register int R3;
    int R7;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    v0_0 = a4;
    v0_1 = a5;
    v0_2 = a6;
    v0_4 = fmMngInit(0x2, v0_1, v0_2);
    v0_3 = (v0_0);
    v0_0 = (v0_4);
    if ((v0_4 != -8)) goto L_C160E4E;
    v0_4 = fmMngFormat(0x0, v0_1, v0_2);
    v0_0 = (v0_4);
    if ((v0_4 != 0)) goto L_C160EF2;
    L_C160E52:;
    v0_5 = fmMngRead(0x5, ((int)stk + 0));
    v0_4 = (((int)stk + 0));
    v0_0 = (v0_5);
    if ((v0_5 != 0)) goto L_C160EF2;
    v0_5 = (0xC160D28);
    L_C160E64:;
    v0_5 = fmMngExecServer(v0_0, v0_1, v0_2);
    v0_0 = (v0_5);
    if ((v0_5 == 2)) goto L_C160E64;
    if ((v0_0 != 1)) goto L_C160EF2;
    v0_0 = (((FUN_0c1606b0(v0_0, v0_1, v0_2)) + 0x10));
    if ((v0_3 != 0)) goto L_C160E98;
    v0_1 = (0x8);
    v0_2 = (v0_4);
    L_C160E90:;
    if (!((v0_1 != 0))) goto L_C160EF6;
    *(unsigned char *)((v0_0 + 0x0)) = (*(signed char *)((v0_2 + 0x0)));
    v0_0 = ((v0_0 + 0x1));
    v0_1 = ((v0_1 - 1));
    v0_2 = ((v0_2 + 0x1));
    goto L_C160E90;
    L_C160EF6:;
    v0_0 = (0x0);
    L_C160EF8:;
    return v0_0;
    L_C160E98:;
    v0_5 = (0x5);
    v0_0 = ((v0_0 + 0x7));
    v0_1 = ((v0_4 + 0x7));
    v0_2 = (0x0);
    R7 = (0x1);
    L_C160ED0:;
    if (((int)v0_2 < (int)v0_5)) goto L_C160EA6;
    v0_3 = fmMngWrite(0x5, v0_4);
    v0_0 = (v0_3);
    if ((v0_3 != 0)) goto L_C160EF2;
    L_C160EE2:;
    v0_3 = fmMngExecServer(v0_0, v0_1, v0_2);
    v0_0 = (v0_3);
    if ((v0_3 == 2)) goto L_C160EE2;
    if ((v0_0 == 1)) goto L_C160EF6;
    L_C160EF2:;
    v0_0 = (0xFFFFFFFF);
    goto L_C160EF8;
    L_C160EA6:;
    if (((v0_3 & R7) == 0)) goto L_C160EC8;
    *(unsigned char *)((v0_1 + 0x0)) = (*(signed char *)((v0_0 + 0x0)));
    if ((v0_2 != 4)) goto L_C160EC8;
    *(unsigned char *)(((v0_1 - 0x1) + 0x0)) = (*(signed char *)(((v0_0 - 1) + 0x0)));
    *(unsigned char *)((((v0_1 - 0x1) - 0x1) + 0x0)) = (*(signed char *)((((v0_0 - 1) - 1) + 0x0)));
    *(unsigned char *)(((((v0_1 - 0x1) - 0x1) - 0x1) + 0x0)) = (*(signed char *)(((((v0_0 - 1) - 1) - 1) + 0x0)));
    v0_0 = ((((v0_0 - 1) - 1) - 1));
    v0_1 = ((((v0_1 - 0x1) - 0x1) - 0x1));
    L_C160EC8:;
    v0_3 = ((v0_3 >> 1));
    v0_0 = ((v0_0 - 1));
    v0_1 = ((v0_1 - 1));
    v0_2 = ((v0_2 + 0x1));
    goto L_C160ED0;
    L_C160E4E:;
    if ((v0_0 != 0)) goto L_C160EF2;
    goto L_C160E52;
}


int nlLookAtUp(int a4, int a5, int a6)
{
    int stk[26];

    *(unsigned int *)(((int)stk + 0)) = a6;
    *(float *)(((int)stk + 4)) = ((*(float *)((a4 + 0x0))) - (*(float *)((a5 + 0x0))));
    *(float *)(((int)stk + 8)) = (((((struct o4_float *)(a4))->v)) - ((((struct o4_float *)(a5))->v)));
    *(float *)(((int)stk + 12)) = (((((struct o8_float *)(a4))->v)) - ((((struct o8_float *)(a5))->v)));
    nlOuterProduct((*(int *)(((int)stk + 0))), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x1C));
    nlOuterProduct((((int)stk + 0) + 0x4), (((int)stk + 0) + 0x1C), (((int)stk + 0) + 0x10));
    FUN_0c073e10((((int)stk + 0) + 0x1C));
    FUN_0c073e10((((int)stk + 0) + 0x10));
    FUN_0c073e10((((int)stk + 0) + 0x4));
    *(float *)(((int)stk + 40)) = (*(float *)(((int)stk + 28)));
    *(float *)(((int)stk + 56)) = (*(float *)(((int)stk + 32)));
    *(float *)(((int)stk + 72)) = (*(float *)(((int)stk + 36)));
    *(float *)(((int)stk + 88)) = 0.0f;
    *(float *)(((int)stk + 44)) = (*(float *)(((int)stk + 16)));
    *(float *)(((int)stk + 60)) = (*(float *)(((int)stk + 20)));
    *(float *)(((int)stk + 76)) = (*(float *)(((int)stk + 24)));
    *(float *)(((int)stk + 92)) = 0.0f;
    *(float *)(((int)stk + 48)) = (*(float *)(((int)stk + 4)));
    *(float *)(((int)stk + 64)) = (*(float *)(((int)stk + 8)));
    *(float *)(((int)stk + 80)) = (*(float *)(((int)stk + 12)));
    *(float *)(((int)stk + 96)) = 0.0f;
    *(float *)(((int)stk + 52)) = 0.0f;
    *(float *)(((int)stk + 68)) = 0.0f;
    *(float *)(((int)stk + 84)) = 0.0f;
    *(float *)(((int)stk + 100)) = 1.0f;
    nlMultiMatrix((((int)stk + 0) + 0x28));
    return (FUN_0c073a40(a4));
}

int adxt_stat_prep(int a4, int a5, int a6, int a7)
{
    int stk[12];
    register int t7;
    register int t10;
    register int t72;
    register int t92;
    register int t73;
    register int t74;
    register int t88;
    register int t76;
    register int t77;
    register int t78;
    register int t81;
    register int t87;

    *(unsigned int *)(((int)stk + 4)) = (*(int *)((a4 + 0x4)));
    *(unsigned int *)(((int)stk + 0)) = (thunk_FUN_0c1644d8((*(int *)((a4 + 0xC)))));
    *(unsigned int *)(((int)stk + 8)) = (FUN_0c161880());
    if ((int)(*(int *)(((int)stk + 0))) < (int)((((struct o48_int *)(a4))->v))) {
        t7 = FUN_0c162006((*(int *)(((int)stk + 4))));
        if ((int)(*(int *)(((int)stk + 8))) > (int)t7) {
            t10 = FUN_0c161ad0((*(int *)((a4 + 0x4))));
            if (t10 == 3) {
                if ((*(signed char *)((a4 + 0x70))) == 0) {
                    if ((*(signed char *)((a4 + 0x72))) == 0) {
                        thunk_mwRnaSetPlaySw();
                        (((struct o9C_uint *)(a4))->v) = 0x0;
                        (((struct oA0_uint *)(a4))->v) = (*(int *)0xC173D68);
                    }
                    *(unsigned char *)((a4 + 0x1)) = 0x3;
                }
                (((struct o71_uchar *)(a4))->v) = 0x1;
            }
        } else {
            if ((*(signed char *)((a4 + 0x70))) == 0) {
                if ((*(signed char *)((a4 + 0x72))) == 0) {
                    thunk_mwRnaSetPlaySw();
                    (((struct o9C_uint *)(a4))->v) = 0x0;
                    (((struct oA0_uint *)(a4))->v) = (*(int *)0xC173D68);
                }
                *(unsigned char *)((a4 + 0x1)) = 0x3;
            }
            (((struct o71_uchar *)(a4))->v) = 0x1;
        }
    } else {
        if ((*(signed char *)((a4 + 0x70))) == 0) {
            if ((*(signed char *)((a4 + 0x72))) == 0) {
                thunk_mwRnaSetPlaySw();
                (((struct o9C_uint *)(a4))->v) = 0x0;
                (((struct oA0_uint *)(a4))->v) = (*(int *)0xC173D68);
            }
            *(unsigned char *)((a4 + 0x1)) = 0x3;
        }
        (((struct o71_uchar *)(a4))->v) = 0x1;
    }
    t72 = FUN_0c161ad0((*(int *)((a4 + 0x4))));
    t92 = t72;
    if (t72 == 3) {
        t73 = FUN_0c14ebba(a4);
        t74 = (((struct o48_int *)(a4))->v);
        t88 = 0x48;
        if ((int)t73 > 0) {
            t76 = (a4 + 0x18);
            t77 = 0x0;
            for (;;) {
                t78 = *(int *)((t76 + 0x0));
                t76 = (t76 + 0x4);
                t81 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t78 + 0x0))) + 0x18)))))(t78, 0x0, ((t74 * t73) << 1), (((int)stk + 0) + 0xC), *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
                memset((*(int *)(((int)stk + 12))), 0x0, (*(int *)(((int)stk + 16))));
                t87 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t78 + 0x0))) + 0x20)))))(t78, 0x1, (((int)stk + 0) + 0xC), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
                t77 = (t77 + 0x1);
                if ((int)t77 >= (int)t73) {
                    break;
                }
            }
            t88 = t87;
        }
        t92 = t88;
    }
    return t92;
}
