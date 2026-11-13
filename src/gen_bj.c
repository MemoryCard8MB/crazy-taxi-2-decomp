/* Straight-line functions with calls and guards (batch gen_bj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[63]; } Stk63;
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_float { char p[0x20]; float v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o28_int { char p[0x28]; int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2C_int { char p[0x2C]; int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o30_float { char p[0x30]; float v; };
struct o30_int { char p[0x30]; int v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o34_float { char p[0x34]; float v; };
struct o34_int { char p[0x34]; int v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o38_float { char p[0x38]; float v; };
struct o38_int { char p[0x38]; int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o3C_int { char p[0x3C]; int v; };
struct o3C_uint { char p[0x3C]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_int { char p[0x40]; int v; };
struct o40_short { char p[0x40]; short v; };
struct o42_short { char p[0x42]; short v; };
struct o44_int { char p[0x44]; int v; };
struct o44_short { char p[0x44]; short v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o46_short { char p[0x46]; short v; };
struct o46_ushort { char p[0x46]; unsigned short v; };
struct o48_int { char p[0x48]; int v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o4C_int { char p[0x4C]; int v; };
struct o4C_ushort { char p[0x4C]; unsigned short v; };
struct o4E_ushort { char p[0x4E]; unsigned short v; };
struct o50_int { char p[0x50]; int v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o54_int { char p[0x54]; int v; };
struct o54_ushort { char p[0x54]; unsigned short v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o5C_int { char p[0x5C]; int v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o60_int { char p[0x60]; int v; };
struct o68_int { char p[0x68]; int v; };
struct o6C_int { char p[0x6C]; int v; };
struct o70_float { char p[0x70]; float v; };
struct o70_int { char p[0x70]; int v; };
struct o74_float { char p[0x74]; float v; };
struct o74_int { char p[0x74]; int v; };
struct o78_float { char p[0x78]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o7C_float { char p[0x7C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_ushort { char p[0x84]; unsigned short v; };
struct o88_int { char p[0x88]; int v; };
struct o88_uint { char p[0x88]; unsigned int v; };
struct o8C_int { char p[0x8C]; int v; };
struct o8C_uint { char p[0x8C]; unsigned int v; };
struct o90_uint { char p[0x90]; unsigned int v; };
struct o94_uint { char p[0x94]; unsigned int v; };
struct o98_int { char p[0x98]; int v; };
struct o98_uint { char p[0x98]; unsigned int v; };
struct o9C_int { char p[0x9C]; int v; };
struct o9C_uint { char p[0x9C]; unsigned int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oB0_float { char p[0xB0]; float v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oB8_int { char p[0xB8]; int v; };
struct oB8_uint { char p[0xB8]; unsigned int v; };
struct oBC_uint { char p[0xBC]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oC8_uint { char p[0xC8]; unsigned int v; };
struct oCC_uint { char p[0xCC]; unsigned int v; };
struct oF0_int { char p[0xF0]; int v; };
struct oF4_int { char p[0xF4]; int v; };
struct oF8_int { char p[0xF8]; int v; };
int ADXAMP_SetSfreq(int, int);
int ADXRNA_SetStmHdInfo(int, int);
int ADXSJD_EntryTrapFunc(int, int, int);
int ADXSJD_GetSpsdInfo(int);
int ADXSJD_SetMaxDecSmpl(int, int);
int ADXSJD_SetTrapCnt(int, int);
int ADXSJD_SetTrapDtLen(int, int);
int ADXSJD_SetTrapNumSmpl(int, int);
int ADXSTM_EntryEosFunc(int, int, int);
int ADXSTM_SetEos(int, int);
int BigOneRotate(int, int, int);
int FUN_0c029b12(int, float);
int FUN_0c033578(int, int, float, float, float);
int FUN_0c03386a(int);
int FUN_0c0339c0(int);
int FUN_0c034320(int, int);
int FUN_0c0343b8(int, int);
int FUN_0c0345ec(int, int, int, float, float, float);
int FUN_0c035a20(int);
int FUN_0c035a5e(int, int, float, float);
int FUN_0c05b3ea(void);
int FUN_0c05b3fc(void);
int FUN_0c05d0d8(float);
int FUN_0c05f42e(void);
int FUN_0c061bcc(int, int);
int FUN_0c067804(int);
int FUN_0c06e700(int, int, float);
int FUN_0c070890(float);
float FUN_0c070a10(int);
int FUN_0c072290(int, int);
int FUN_0c072b60(int);
int FUN_0c073a30(float, float, float);
int FUN_0c073a60(int);
float FUN_0c073b40(int, int);
int FUN_0c073c40(int, int, float);
float FUN_0c073c60(int);
float FUN_0c073e10(int);
int FUN_0c074f20(float);
int FUN_0c075740(int, int, int, int, int, int, int, int, int, int, float, float, float, float, float, float, float, float);
int FUN_0c075a00(int, float, float, float);
int FUN_0c076230(float, float, float);
int FUN_0c078870(int);
int FUN_0c07ff00(void);
int FUN_0c14e8e4(int);
int FUN_0c1616f4(int, int);
int FUN_0c1617e0(int, int, int, int);
int FUN_0c1618dc(void);
int FUN_0c161ad0(int);
int FUN_0c161fd6(int);
int FUN_0c161fe2(int);
int FUN_0c161fee(int);
int FUN_0c161ffa(int);
int FUN_0c162006(int);
int FUN_0c16201e(int);
int FUN_0c162036(int);
int FUN_0c162066(int);
int FUN_0c162072(int);
int adxt_set_outpan(int);
int buCalcCRC(int, int);
int kmiReadRegister(int);
extern int kmiWriteRegister();
extern int thunk_kmiWriteRegister();
int mwRnaSetBitPerSmpl(void);
int mwRnaSetNumChan(void);
int mwRnaSetOutVol(void);
int mwRnaSetSfreq(void);
int mwRnaSetTransSw(void);
int nlAddVector(int, int);
int nlMultiMatrix(int);
int nlObjPutUseViewMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAZ(int);
int nlRotateV(int, int);
int nlScale(float, float, float);
float nlSin(int);
int nlSubVector3op(int, int, int);
float nlTan(int);
int nlTriPutSetClipping(int, float, float, float, float);
int nlTriPutSetPoint(int, int, float, float, float, float, float, float, float, float);
int nlTriPutTextureInit(int, int, int);
int nl_set_cnv_proj_pers(void);
int set_event(int, int);
int FUN_0c067c2c(int a4, int a5, int a6, int a7);
int FUN_0c02d3e8(int a4, int a5);
int kmiGetVertexBasePointer(int a4, int a5, int a6, int a7, int a8, int a9, int a10);
int kmSetModifierRenderState(int a4, float f4);
int FUN_0c01505c(int a4, int a5, float f4, float f5, float f6, float f7);
int nlPerspective(int a4, float f4, float f5, float f6);
int FUN_0c1675c0(Stk63 s);
int FUN_0c038862(void);
int adxt_stat_decinfo(int a4);
int buAnalyzeBackupFileImage(int a4, int a5);
int FUN_0c067898(int a4);
int kmiCreateGlobalParameter(float f4);

int FUN_0c067c2c(int a4, int a5, int a6, int a7)
{
    int stk[9];
    register int t3;
    register int t5;
    register int t6;
    register int t7;
    register int t23;
    register int t31;
    register int t35;
    register int t40;
    register int t56;
    register int t61;
    register int t62;
    register int t63;
    register float t66;
    register float u68;
    register float u75;
    register int t93;
    register int t104;
    register int t8;
    register int t9;
    register int t10;
    register float u11;

    *(unsigned int *)(((int)stk + 12)) = a4;
    if ((int)(*(int *)((a4 + 0x0))) < (int)0x5) {
        t3 = *(int *)(((*(int *)(((int)stk + 12))) + 0x0));
        t5 = (nlPushMatrix(0x0));
        t6 = 0x0;
        t7 = ((t3 << 1) + (t3 << 2));
        for (;;) {
            *(unsigned int *)(((int)stk + 8)) = t6;
            if ((int)t6 >= (int)0x6) {
                break;
            }
            t9 = 0xC1EC740;
            t10 = 0xC110374;
            t5 = (*(int *)((t9 + 0x0)));
            t5 = (t5 << 2);
            t8 = (*(int *)((t10 + t5)));
            t5 = (((int (*)(int, int, int, int, int, int, int, int, int, int, int))(t8))(0x6, a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
            t8 = t5;
            t5 = (*(int *)((t9 + 0x0)));
            t5 = (t5 << 2);
            t5 = (((int (*)(void))((*(int *)((t10 + t5)))))());
            t6 = 0xC05B474;
            *(unsigned int *)(((int)stk + 4)) = t5;
            t5 = (BigOneRotate(((t5 & 0x7FF) + 0x1000), ((unsigned char)t8 << 8), 0x0));
            t5 = (FUN_0c072b60(t5));
            t8 = t7;
            t8 = (t8 << 1);
            t5 = 0xC067DD4;
            t8 = (t8 + t7);
            u11 = (*(float *)((t5 + 0x0)));
            t8 = (t8 << 2);
            *(unsigned int *)(((int)stk + 4)) = (0xC2BA1BC + t8);
            t5 = (FUN_0c073c40((0xC2BA1BC + t8), 0xC10D9E0, u11));
            t23 = *(int *)(((int)stk + 4));
            t5 = (FUN_0c072290(t23, t23));
            *(unsigned int *)(((int)stk + 0)) = (t8 + 0xC2BA054);
            t6 = 0xC10D9BC;
            t5 = 0xC;
            t5 = (FUN_0c07ff00());
            *(volatile int *)(((int)stk + 0));
            t5 = 0xC;
            t5 = (FUN_0c07ff00());
            t5 = (*(int *)((t9 + 0x0)));
            t5 = (t5 << 2);
            t5 = (((int (*)(void))((*(int *)((t10 + t5)))))());
            t31 = t5;
            t5 = 0xC;
            t5 = ((int)((unsigned int)t31 % (unsigned int)t5));
            t35 = t5;
            t5 = (t5 << 1);
            t5 = (t5 + t35);
            t5 = (t5 << 2);
            t6 = t5;
            t6 = (t6 + 0xC110188);
            t5 = 0xC;
            t5 = (FUN_0c07ff00());
            t5 = (*(int *)((t9 + 0x0)));
            t5 = (t5 << 2);
            t5 = (((int (*)(void))((*(int *)((t10 + t5)))))());
            t40 = t5;
            t5 = 0xC2BA48C;
            *(unsigned int *)(((t7 << 2) + t5)) = (t40 << 1);
            t7 = (t7 + 0x1);
            t6 = (*(int *)(((int)stk + 8)));
            t6 = (t6 + 0x1);
        }
        nlPopMatrix(0x1);
    }
    t56 = *(int *)(((*(int *)(((int)stk + 12))) + 0x0));
    *(unsigned int *)(((int)stk + 8)) = (((t56 + 0x1) << 1) + ((t56 + 0x1) << 2));
    if ((int)(((t56 + 0x1) << 1) + ((t56 + 0x1) << 2)) > (int)0x1E) {
        *(unsigned int *)(((int)stk + 8)) = 0x1E;
    }
    FUN_0c05b3ea();
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    if ((int)(*(int *)(((int)stk + 8))) > 0) {
        t61 = 0xC2BA48C;
        t62 = 0x0;
        t63 = 0x0;
        for (;;) {
            nlPushMatrix(0x0);
            nlSubVector3op((((int)stk + 0) + 0x18), (t62 + 0xC2B9EEC), (t62 + 0xC2BA054));
            t66 = FUN_0c073e10((((int)stk + 0) + 0x18));
            u68 = t66;
            if (0.300000012f > t66) {
                u68 = 0.400000006f;
            }
            *(unsigned int *)(((int)stk + 16)) = (t63 + 0xC2BA054);
            FUN_0c073a60((t63 + 0xC2BA054));
            nlRotateV(0xC10D9F8, (((int)stk + 0) + 0x18));
            nlRotateAZ((*(int *)((t61 + 0x0))));
            nlScale(1.0f, 0.300000012f, u68);
            u75 = 1.0f;
            if (u68 > 1.0f) {
                u75 = u68;
            }
            FUN_0c074f20(u75);
            FUN_0c076230((*(float *)(((0xC2BA324 + t63) + 0x0))), ((((struct o4_float *)((0xC2BA324 + t63)))->v)), ((((struct o8_float *)((0xC2BA324 + t63)))->v)));
            nlObjPutUseViewMatrix(0xC3C4D68);
            nlPopMatrix(0x1);
            *(volatile int *)(((int)stk + 16));
            *(unsigned int *)(((int)stk + 20)) = (t63 + 0xC2B9EEC);
            FUN_0c07ff00();
            FUN_0c06e700((0xC2BA1BC + t63), 0xC10D9E0, -0.0500000007f);
            FUN_0c073c40((0xC2BA1BC + t63), (0xC2BA1BC + t63), (*(float *)0xC068060));
            nlAddVector((*(int *)(((int)stk + 20))), (0xC2BA1BC + t63));
            t63 = (t63 + 0xC);
            *(unsigned int *)((t61 + 0x0)) = ((*(int *)((t61 + 0x0))) + 0x1000);
            t61 = (t61 + 0x4);
            t93 = *(int *)(((int)stk + 4));
            *(unsigned int *)(((int)stk + 4)) = (t93 + 0x1);
            t62 = (t62 + 0xC);
            if ((int)(t93 + 0x1) < (int)(*(int *)(((int)stk + 8)))) continue;
            break;
        }
    }
    FUN_0c05b3fc();
    t104 = *(int *)(((int)stk + 12));
    *(unsigned int *)((t104 + 0x0)) = ((*(int *)((t104 + 0x0))) + 0x1);
    return ((((int)(*(int *)(((*(int *)(((int)stk + 12))) + 0x0))) > (int)0x3C)) ? 1 : 0);
}

int FUN_0c02d3e8(int a4, int a5)
{
    int stk[8];
    register float u1;
    register float u2;
    register int t8;
    register int t16;
    register float u39;
    register int t57;
    register float u58;
    register int t40;
    register int t41;
    register float u42;
    register float u43;
    register float u44;
    register float u46;
    register float u60;
    register float u61;
    register float u63;
    register int t94;
    register float u112;
    register float u119;
    register int t123;
    register int t96;

    *(unsigned int *)(((int)stk + 28)) = a5;
    u1 = *(float *)0xC1294DC;
    u2 = (((struct o0_float *)0xC02D6C4)->v);
    if (((((struct o10_int *)0xC2752C8)->v)) == a4) {
    } else {
        (((struct o10_uint *)0xC2752C8)->v) = a4;
        t8 = *(int *)((((*(int *)(((((((struct o4_int *)0xC1EC720)->v)) << 2) + (*(int *)((0xC129504 + (((((struct o0_int *)0xC1EC720)->v)) << 2))))))) + ((a4 << 2) << 1)) + 0x0));
        (((struct o4_float *)0xC2752C8)->v) = u2;
        if ((*(int *)0xC2B1B9C) != 0) {
        } else {
            t16 = *(int *)((((*(int *)(((((((struct o4_int *)0xC1EC720)->v)) << 2) + (*(int *)((0xC129504 + (((((struct o0_int *)0xC1EC720)->v)) << 2))))))) + ((((((struct o10_int *)0xC2752C8)->v)) << 2) << 1)) + 0x4));
            nlTriPutTextureInit(0xC2752E0, 0xFFFFFFFF, 0x0);
            *(int *)((int)stk + 20) = ((t8 << 1) + 0x2);
            *(int *)((int)stk + 16) = 0x0;
            *(int *)((int)stk + 12) = 0x1;
            *(int *)((int)stk + 8) = 0x1;
            *(int *)((int)stk + 4) = 0x0;
            *(int *)((int)stk + 0) = 0x1;
            *(volatile float *)0xC02D6EC;
            *(volatile float *)0xC02D6F0;
            FUN_0c075740(0xC2752E0, 0x1, 0x0, 0xFFFFFFFF, 0x1, 0x0, 0x1, 0x1, 0x0, ((t8 << 1) + 0x2), 1.0f, 0.8f, 0.0f, 0.5f, 0.0f, 0.0f, 0.0f, 0.0f);
            nlTriPutSetClipping(0xC2752E0, (*(float *)((t16 + 0x0))), ((((struct o4_float *)(t16))->v)), ((((struct o8_float *)(t16))->v)), ((((struct o34_float *)0xC02D6C4)->v)));
            (((struct o38_uint *)0xC2752C8)->v) = (((((struct o38_int *)0xC2752C8)->v)) & 0x3FFFF3F);
            (((struct o38_uint *)0xC2752C8)->v) = (((((struct o38_int *)0xC2752C8)->v)) | 0x300000C0);
            nlTriPutSetPoint(0xC2752E0, 0x0, (*(float *)((t16 + 0x0))), ((((struct o4_float *)(t16))->v)), ((((struct o8_float *)(t16))->v)), 1.0f, 1.0f, 1.0f, u1, 0.0f);
            nlTriPutSetPoint(0xC2752E0, 0x1, (*(float *)((t16 + 0x0))), (((((struct o4_float *)(t16))->v)) + ((((struct o4_float *)0xC2752C8)->v))), ((((struct o8_float *)(t16))->v)), 1.0f, 1.0f, 1.0f, u1, ((((struct o0_float *)0xC02D70C)->v)));
            u39 = (((struct o28_float *)0xC02D6C4)->v);
            t57 = 0x1;
            u58 = (u1 + u39);
            if ((int)0x1 < (int)t8) {
                t40 = 0x1;
                t41 = (t16 + 0xC);
                u42 = (u1 + u39);
                for (;;) {
                    u43 = (((struct o8_float *)(t41))->v);
                    u44 = (((struct o4_float *)(t41))->v);
                    u46 = *(float *)((t41 + 0x0));
                    *(unsigned int *)(((int)stk + 24)) = (t40 << 1);
                    nlTriPutSetPoint(0xC2752E0, (t40 << 1), u46, u44, u43, 1.0f, 1.0f, 1.0f, u42, 0.0f);
                    nlTriPutSetPoint(0xC2752E0, ((*(int *)(((int)stk + 24))) + 0x1), (*(float *)((t41 + 0x0))), (((((struct o4_float *)(t41))->v)) + ((((struct o4_float *)0xC2752C8)->v))), ((((struct o8_float *)(t41))->v)), 1.0f, 1.0f, 1.0f, u42, ((((struct o0_float *)0xC02D70C)->v)));
                    t40 = (t40 + 0x1);
                    u42 = (u42 + ((((struct o28_float *)0xC02D6C4)->v)));
                    t41 = (t41 + 0xC);
                    if ((int)t40 >= (int)t8) {
                        break;
                    }
                }
                t57 = t40;
                u58 = u42;
            }
            u60 = (((struct o8_float *)(t16))->v);
            u61 = (((struct o4_float *)(t16))->v);
            u63 = *(float *)((t16 + 0x0));
            *(unsigned int *)(((int)stk + 24)) = (t57 << 1);
            nlTriPutSetPoint(0xC2752E0, (t57 << 1), u63, u61, u60, 1.0f, 1.0f, 1.0f, u58, 0.0f);
            nlTriPutSetPoint(0xC2752E0, ((*(int *)(((int)stk + 24))) + 0x1), (*(float *)((t16 + 0x0))), (((((struct o4_float *)(t16))->v)) + ((((struct o4_float *)0xC2752C8)->v))), ((((struct o8_float *)(t16))->v)), 1.0f, 1.0f, 1.0f, u58, ((((struct o0_float *)0xC02D70C)->v)));
        }
        *(volatile int *)((((*(int *)(((((((struct o4_int *)0xC1EC720)->v)) << 2) + (*(int *)((0xC129504 + (((((struct o0_int *)0xC1EC720)->v)) << 2))))))) + ((((((struct o10_int *)0xC2752C8)->v)) << 2) << 1)) + 0x4));
        (((struct o0_uint *)0xC2774C0)->v) = t8;
        (((struct o4_uint *)0xC2774C0)->v) = 0xDF007F00;
        *(unsigned int *)(((((((t8 + 0x1) << 1) + (t8 + 0x1)) << 2) + 0xC2774C0) + 0x8)) = 0x0;
        t94 = t8;
        for (;;) {
            if (t94 == 0) {
                break;
            }
            FUN_0c07ff00();
            t94 = (t96 - 1);
        }
        FUN_0c07ff00();
    }
    u112 = *(float *)0xC1294DC;
    FUN_0c075a00(0xC2752E0, 0.0f, ((((struct o0_float *)0xC2752C8)->v)), 0.0f);
    (((struct o4_uint *)0xC2774C0)->v) = (((int)(((((struct o0_float *)0xC2752C8)->v)) * ((((struct o14_float *)0xC02D70C)->v))) << 8) | 0xDF000000);
    nlPushMatrix(0x0);
    if ((*(int *)0xC2B1B9C) == 0) {
        nlObjPutUseViewMatrix(0xC2752E0);
        u119 = u2;
        u119 = u119 + u2 * u112;
        FUN_0c073a30(0.0f, u119, 0.0f);
        t123 = (*(int *)(((int)stk + 28)));
        for (;;) {
            if (t123 == 0) {
                break;
            }
            FUN_0c078870(0xC2774C0);
            FUN_0c073a30(0.0f, u2, 0.0f);
            t123 = (t123 - 1);
        }
    }
    return nlPopMatrix(0x1);
}

int kmiGetVertexBasePointer(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    int stk[8];
    int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t11;
    register int t20;
    register int t22;
    register int t31;
    register int t33;
    register int t42;
    register int t44;
    register int t53;
    register int t55;
    register int t64;

    (((struct o0_uint *)0xC300D94)->v) = (a4 << 2);
    (((struct o4_uint *)0xC300D94)->v) = (a5 << 2);
    (((struct o8_uint *)0xC300D94)->v) = (a6 << 2);
    (((struct oC_uint *)0xC300D94)->v) = (a7 << 2);
    (((struct o10_uint *)0xC300D94)->v) = (a8 << 2);
    *(unsigned int *)(((int)stk + 8)) = (((int)stk + 0) + 0x18);
    *(unsigned int *)(((((int)stk + 0) + 0x18) + 0x0)) = (*(int *)0xC300D10);
    *(unsigned int *)(((int)stk + 4)) = 0xC2D0C4C;
    *(unsigned int *)(((int)stk + 12)) = 0xC2D0C4C;
    *(unsigned int *)(((int)stk + 16)) = (*(int *)(((int)stk + 8)));
    *(unsigned int *)(((int)stk + 20)) = ((((int)stk + 0) + 0x18) + 0x4);
    if ((unsigned int)a10 <= (unsigned int)0x0) {
    } else {
        t2 = ((((int)stk + 0) + 0x18) + 0x4);
        t3 = 0x0;
        t4 = 0xC2D0C4C;
        t5 = 0x0;
        for (;;) {
            if (((*(int *)(((((int)stk + 0) + 0x18) + (t5 << 2)))) & 31) != 0) {
                t3 = t5;
                t3 = (t3 << 2);
                t3 = (t3 + (((int)stk + 0) + 0x18));
                t2 = 0xFFFFFFE0;
                *(unsigned int *)(((int)stk + 0)) = t3;
                t4 = (*(int *)((t3 + 0x0)));
                t4 = (t4 + 0x1F);
                t4 = (t4 & t2);
                *(unsigned int *)((t3 + 0x0)) = t4;
            }
            t3 = t5;
            t3 = (t3 << 2);
            t4 = t5;
            t3 = (t3 + t4);
            t3 = (t3 << 2);
            t4 = 0xC300C14;
            t3 = (t3 + 0xC2D0C4C);
            *(unsigned int *)(((int)stk + 0)) = t3;
            if (((*(int *)((t4 + 0x0))) == 1) && (t2 = 0xC300CF0, t11 = *(int *)((t2 + 0x0)), t11 == 32)) {
                t3 = (*(int *)(((int)stk + 0)));
                *(unsigned int *)((t3 + 0x0)) = 0x10000000;
                t20 = 0x0;
            } else {
                t3 = 0x0;
                if ((unsigned int)a4 > (unsigned int)t3) {
                    t4 = (*(int *)(((((int)stk + 0) + 0x18) + (t5 << 2))));
                    t2 = (*(int *)(((int)stk + 0)));
                    t4 = (t4 + 0x0);
                    *(unsigned int *)((t2 + 0x0)) = t4;
                    t20 = (((0x0 + a4) + 0x17) & 0xFFFFFFF8);
                } else {
                    t2 = (*(int *)(((int)stk + 0)));
                    *(unsigned int *)((t2 + 0x0)) = 0x0;
                    t20 = 0x0;
                }
            }
            t4 = t5;
            t4 = (t4 << 2);
            t3 = t5;
            t4 = (t4 + t3);
            t4 = (t4 << 2);
            t3 = 0xC300C14;
            t4 = (t4 + 0xC2D0C4C);
            *(unsigned int *)(((int)stk + 0)) = t4;
            if (((*(int *)((t3 + 0x0))) == 1) && (t2 = 0xC300CF0, t22 = *(int *)((t2 + 0x0)), t22 == 33)) {
                t3 = (*(int *)(((int)stk + 0)));
                *(unsigned int *)((t3 + 0x4)) = 0x10000000;
                t31 = t20;
            } else {
                t3 = 0x0;
                if ((unsigned int)a5 > (unsigned int)t3) {
                    t4 = (*(int *)(((((int)stk + 0) + 0x18) + (t5 << 2))));
                    t2 = (*(int *)(((int)stk + 0)));
                    t4 = (t4 + (t20 << 2));
                    *(unsigned int *)((t2 + 0x4)) = t4;
                    t31 = (((t20 + a5) + 0x17) & 0xFFFFFFF8);
                } else {
                    t2 = (*(int *)(((int)stk + 0)));
                    *(unsigned int *)((t2 + 0x4)) = 0x0;
                    t31 = t20;
                }
            }
            t4 = t5;
            t4 = (t4 << 2);
            t3 = t5;
            t4 = (t4 + t3);
            t4 = (t4 << 2);
            t3 = 0xC300C14;
            t4 = (t4 + 0xC2D0C4C);
            *(unsigned int *)(((int)stk + 0)) = t4;
            if (((*(int *)((t3 + 0x0))) == 1) && (t2 = 0xC300CF0, t33 = *(int *)((t2 + 0x0)), t33 == 34)) {
                t3 = (*(int *)(((int)stk + 0)));
                *(unsigned int *)((t3 + 0x8)) = 0x10000000;
                t42 = t31;
            } else {
                t3 = 0x0;
                if ((unsigned int)a6 > (unsigned int)t3) {
                    t4 = (*(int *)(((((int)stk + 0) + 0x18) + (t5 << 2))));
                    t2 = (*(int *)(((int)stk + 0)));
                    t4 = (t4 + (t31 << 2));
                    *(unsigned int *)((t2 + 0x8)) = t4;
                    t42 = (((t31 + a6) + 0x17) & 0xFFFFFFF8);
                } else {
                    t2 = (*(int *)(((int)stk + 0)));
                    *(unsigned int *)((t2 + 0x8)) = 0x0;
                    t42 = t31;
                }
            }
            t4 = t5;
            t4 = (t4 << 2);
            t3 = t5;
            t4 = (t4 + t3);
            t4 = (t4 << 2);
            t3 = 0xC300C14;
            t4 = (t4 + 0xC2D0C4C);
            *(unsigned int *)(((int)stk + 0)) = t4;
            if (((*(int *)((t3 + 0x0))) == 1) && (t2 = 0xC300CF0, t44 = *(int *)((t2 + 0x0)), t44 == 35)) {
                t3 = (*(int *)(((int)stk + 0)));
                *(unsigned int *)((t3 + 0xC)) = 0x10000000;
                t53 = t42;
            } else {
                t3 = 0x0;
                if ((unsigned int)a7 > (unsigned int)t3) {
                    t4 = (*(int *)(((((int)stk + 0) + 0x18) + (t5 << 2))));
                    t2 = (*(int *)(((int)stk + 0)));
                    t4 = (t4 + (t42 << 2));
                    *(unsigned int *)((t2 + 0xC)) = t4;
                    t53 = (((t42 + a7) + 0x17) & 0xFFFFFFF8);
                } else {
                    t2 = (*(int *)(((int)stk + 0)));
                    *(unsigned int *)((t2 + 0xC)) = 0x0;
                    t53 = t42;
                }
            }
            t4 = 0xC300C14;
            if (((*(int *)((t4 + 0x0))) == 1) && (t2 = 0xC300CF0, t55 = *(int *)((t2 + 0x0)), t55 == 36)) {
                t4 = t5;
                t4 = (t4 << 2);
                t3 = t5;
                t4 = (t4 + t3);
                t4 = (t4 << 2);
                t4 = (t4 + 0xC2D0C4C);
                *(unsigned int *)((t4 + 0x10)) = 0x10000000;
                t64 = t53;
            } else {
                t4 = a8;
                t3 = 0x0;
                if ((unsigned int)t4 > (unsigned int)t3) {
                    t2 = t53;
                    t4 = (*(int *)(((int)stk + 4)));
                    t2 = (t2 << 2);
                    t2 = (t2 + (*(int *)(((*(int *)(((int)stk + 16))) + 0x0))));
                    *(unsigned int *)((t4 + 0x10)) = t2;
                    t4 = a8;
                    t64 = (((t53 + t4) + 0x17) & 0xFFFFFFF8);
                } else {
                    t4 = (*(int *)(((int)stk + 12)));
                    *(unsigned int *)((t4 + 0x10)) = 0x0;
                    t64 = t53;
                }
            }
            t3 = (*(int *)(((int)stk + 8)));
            t4 = (*(int *)(((int)stk + 20)));
            t2 = (*(int *)((t3 + 0x0)));
            t5 = (t5 + 0x1);
            *(unsigned int *)((t4 + 0x0)) = ((t64 << 2) + t2);
            t4 = (*(int *)(((int)stk + 12)));
            t4 = (t4 + 0x14);
            *(unsigned int *)(((int)stk + 12)) = t4;
            t3 = (*(int *)(((int)stk + 16)));
            t3 = (t3 + 0x4);
            *(unsigned int *)(((int)stk + 16)) = t3;
            t2 = (*(int *)(((int)stk + 4)));
            t2 = (t2 + 0x14);
            *(unsigned int *)(((int)stk + 4)) = t2;
            t4 = a10;
            if ((unsigned int)t5 < (unsigned int)t4) continue;
            break;
        }
    }
    return 0x0;
}

int kmSetModifierRenderState(int a4, float f4)
{
    int t6;
    register int t12;
    register int t17;
    register float u18;
    register int t96;

    (((struct o4_uint *)0xC300E2C)->v) = ((((struct o98_int *)(a4))->v));
    (((struct o8_uint *)0xC300E2C)->v) = ((((struct o9C_int *)(a4))->v));
    (((struct o10_float *)0xC300E2C)->v) = ((((struct o70_float *)(a4))->v));
    (((struct o14_float *)0xC300E2C)->v) = ((((struct o74_float *)(a4))->v));
    (((struct o18_float *)0xC300E2C)->v) = ((((struct o78_float *)(a4))->v));
    (((struct o1C_float *)0xC300E2C)->v) = ((((struct o7C_float *)(a4))->v));
    t6 = (((struct o0_int *)0xC300DEC)->v);
    (((struct o30_uint *)0xC300E2C)->v) = (*(int *)((((((((((unsigned int)((unsigned int)(0x20000000 & t6) >> 16) >> 8) | ((unsigned int)((unsigned int)((unsigned int)(0x1000000 & t6) >> 16) >> 2) >> 2)) | ((unsigned int)((unsigned int)(0x40 & t6) >> 2) >> 1)) | ((unsigned int)((unsigned int)(0x20 & t6) >> 2) >> 1)) | ((unsigned int)((unsigned int)(0x10 & t6) >> 2) >> 1)) | ((unsigned int)(0x4 & t6) >> 2)) << 2) + 0xC174174)));
    (((struct o0_uint *)0xC174134)->v) = ((((struct o0_int *)0xC300DEC)->v));
    t12 = (((struct o0_int *)0xC300DEC)->v);
    *(unsigned int *)0xC2D0C9C = ((unsigned int)((unsigned int)(t12 & 0x7000000) >> 16) >> 8);
    if ((((unsigned int)((unsigned int)(t12 & 0x7000000) >> 16) >> 8) & 1) != 0) {
        (((struct o4_uint *)0xC174134)->v) = ((((struct o0_int *)0xC300E2C)->v));
        t96 = 0xC174154;
    } else {
        (((struct o4_uint *)0xC174134)->v) = ((((struct o10_int *)0xC300DEC)->v));
        (((struct o8_uint *)0xC174134)->v) = ((((struct o14_int *)0xC300DEC)->v));
        (((struct oC_uint *)0xC174134)->v) = ((((struct o18_int *)0xC300DEC)->v));
        t17 = (((struct o30_int *)0xC300E2C)->v);
        t96 = 0xC174154;
        if (t17 != 0) {
            if (t17 != 1) {
                if (t17 != 2) {
                    if (t17 != 3) {
                        if (t17 != 4) {
                            t96 = 0xC174144;
                            if (t17 == 16) {
                                u18 = *(float *)0xC15B280;
                                (((struct o10_uint *)0xC174134)->v) = ((((((int)(((((struct o20_float *)0xC300DEC)->v)) * u18) << 16) << 8) | ((int)(((((struct o24_float *)0xC300DEC)->v)) * u18) << 16)) | ((int)(((((struct o28_float *)0xC300DEC)->v)) * u18) << 8)) | (int)(((((struct o2C_float *)0xC300DEC)->v)) * u18));
                                (((struct o14_uint *)0xC174134)->v) = ((((((int)(((((struct o30_float *)0xC300DEC)->v)) * u18) << 16) << 8) | ((int)(((((struct o34_float *)0xC300DEC)->v)) * u18) << 16)) | ((int)(((((struct o38_float *)0xC300DEC)->v)) * u18) << 8)) | (int)(((((struct o3C_float *)0xC300DEC)->v)) * u18));
                                t96 = 0xC174154;
                            }
                        } else {
                            (((struct o10_uint *)0xC174134)->v) = ((((struct o4_int *)0xC300E2C)->v));
                            (((struct o14_uint *)0xC174134)->v) = ((((struct o8_int *)0xC300E2C)->v));
                            (((struct o20_uint *)0xC174134)->v) = ((((struct o20_int *)0xC300DEC)->v));
                            (((struct o24_uint *)0xC174134)->v) = ((((struct o24_int *)0xC300DEC)->v));
                            (((struct o28_uint *)0xC174134)->v) = ((((struct o28_int *)0xC300DEC)->v));
                            (((struct o2C_uint *)0xC174134)->v) = ((((struct o2C_int *)0xC300DEC)->v));
                            (((struct o30_uint *)0xC174134)->v) = ((((struct o10_int *)0xC300E2C)->v));
                            (((struct o34_uint *)0xC174134)->v) = ((((struct o14_int *)0xC300E2C)->v));
                            (((struct o38_uint *)0xC174134)->v) = ((((struct o18_int *)0xC300E2C)->v));
                            (((struct o3C_uint *)0xC174134)->v) = ((((struct o1C_int *)0xC300E2C)->v));
                            t96 = 0xC174174;
                        }
                    } else {
                        (((struct o10_uint *)0xC174134)->v) = ((((struct o4_int *)0xC300E2C)->v));
                        (((struct o14_uint *)0xC174134)->v) = ((((struct o8_int *)0xC300E2C)->v));
                        t96 = 0xC174154;
                    }
                } else {
                    (((struct o20_uint *)0xC174134)->v) = ((((struct o20_int *)0xC300DEC)->v));
                    (((struct o24_uint *)0xC174134)->v) = ((((struct o24_int *)0xC300DEC)->v));
                    (((struct o28_uint *)0xC174134)->v) = ((((struct o28_int *)0xC300DEC)->v));
                    (((struct o2C_uint *)0xC174134)->v) = ((((struct o2C_int *)0xC300DEC)->v));
                    (((struct o30_uint *)0xC174134)->v) = ((((struct o30_int *)0xC300DEC)->v));
                    (((struct o34_uint *)0xC174134)->v) = ((((struct o34_int *)0xC300DEC)->v));
                    (((struct o38_uint *)0xC174134)->v) = ((((struct o38_int *)0xC300DEC)->v));
                    (((struct o3C_uint *)0xC174134)->v) = ((((struct o3C_int *)0xC300DEC)->v));
                    t96 = 0xC174174;
                }
            } else {
                (((struct o10_uint *)0xC174134)->v) = ((((struct o20_int *)0xC300DEC)->v));
                (((struct o14_uint *)0xC174134)->v) = ((((struct o24_int *)0xC300DEC)->v));
                (((struct o18_uint *)0xC174134)->v) = ((((struct o28_int *)0xC300DEC)->v));
                (((struct o1C_uint *)0xC174134)->v) = ((((struct o2C_int *)0xC300DEC)->v));
                t96 = 0xC174154;
            }
        }
    }
    (((struct o0_uint *)0xC2D0C28)->v) = (*(int *)0xC2D0C9C);
    (((struct o4_uint *)0xC2D0C28)->v) = (t96 - 0xC174134);
    return 0x0;
}

int FUN_0c01505c(int a4, int a5, float f4, float f5, float f6, float f7)
{
    int stk[10];
    register int t0;
    register int t79;
    register int t19;
    register int t31;
    register int t32;
    register int t53;
    register int t64;
    register int t74;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    t0 = set_event(0x180, 0xC0152F0);
    t79 = t0;
    if (t0 == 0) {
    } else {
        (((struct o80_uint *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x14)) = (*(int *)(((int)stk + 4)));
        *(unsigned int *)((t0 + 0x18)) = (*(int *)(((int)stk + 0)));
        (((struct o98_uint *)(t0))->v) = 0x0;
        (((struct o9C_uint *)(t0))->v) = 0xFFFFFFFF;
        (((struct oA4_uint *)(t0))->v) = 0x0;
        (((struct o84_ushort *)(t0))->v) = 0x0;
        if ((*(signed char *)((0x10 + (*(int *)((t0 + 0x18)))))) == -1) {
            (((struct o94_uint *)(t0))->v) = 0x1;
            (((struct o90_uint *)(t0))->v) = 0x1;
            (((struct o8C_uint *)(t0))->v) = 0x1;
            (((struct o88_uint *)(t0))->v) = ((int)((int)((int)((int)(*(int *)0xC177D0C) / (int)0x258)) % (int)0x3));
            (((struct oB8_uint *)(t0))->v) = ((0xC177914 + ((short)(*(signed char *)(((((*(int *)((t0 + 0x18))) + 0xD) + ((((struct o88_int *)(t0))->v))) + 0x0))) * (short)0x1C)) + 0x1C);
            (((struct oC8_uint *)(t0))->v) = 0x1;
            (((struct oB4_float *)(t0))->v) = (((*(float *)((((((((struct o88_int *)(t0))->v)) << 2) + ((*(int *)((t0 + 0x14))) + 0x8)) + 0x0))) + -2000.0f) * 5.88235307e-05f);
            if (((((struct oB4_float *)(t0))->v)) > 1.0f) {
                (((struct oB4_float *)(t0))->v) = 1.0f;
            }
            if (0.0f > ((((struct oB4_float *)(t0))->v))) {
                (((struct oB4_float *)(t0))->v) = 0.0f;
            }
            t19 = FUN_0c029b12((*(int *)((t0 + 0x18))), 20.0f);
            *(unsigned int *)(((int)stk + 8)) = (*(int *)((0xC097028 + ((*(signed char *)(((*(int *)((t0 + 0x18))) + 0xC))) << 2))));
            *(unsigned int *)(((int)stk + 12)) = 0x1;
            *(unsigned int *)(((int)stk + 16)) = t19;
            *(float *)(((int)stk + 20)) = ((((struct oB4_float *)(t0))->v));
            t74 = 0x0;
            if ((int)(*(signed char *)((((((struct oB8_int *)(t0))->v)) + 0x0))) >= 0) {
                t74 = 0x1;
            }
        } else {
            (((struct o88_uint *)(t0))->v) = ((int)((int)((int)((int)(*(int *)0xC177D0C) / (int)0x258)) % (int)0x3));
            (((struct o8C_uint *)(t0))->v) = 0x0;
            t31 = (0x88 + t0);
            t32 = 0x0;
            for (;;) {
                if (((unsigned short)(*(short *)(((*(int *)((t0 + 0x18))) + 0x12))) & ((int)0x1 << (int)((((((struct o88_int *)(t0))->v)) << 2) + t32))) != 0) {
                    t31 = (*(signed char *)(((((*(int *)((t0 + 0x18))) + 0xD) + t32) + 0x0)));
                    t31 = ((short)t31 * (short)0x1C);
                    t31 = (t31 + 0xC177914);
                    t31 = (t31 + 0x1C);
                    *(unsigned int *)((((((((struct o8C_int *)(t0))->v)) << 2) + (0xB8 + t0)) + 0x0)) = t31;
                    t31 = 0xC8;
                    t31 = (t31 + t0);
                    *(unsigned int *)((((((((struct o8C_int *)(t0))->v)) << 2) + t31) + 0x0)) = 0x1;
                    (((struct o8C_uint *)(t0))->v) = (((((struct o8C_int *)(t0))->v)) + 0x1);
                }
                t32 = (t32 + 0x1);
                if ((int)t32 >= (int)0x4) {
                    break;
                }
            }
            if (((((struct o8C_int *)(t0))->v)) == 0) {
                (((struct oB8_uint *)(t0))->v) = 0xC177914;
                (((struct oBC_uint *)(t0))->v) = 0xC177914;
                (((struct o8C_uint *)(t0))->v) = 0x2;
                (((struct oC8_uint *)(t0))->v) = 0x1;
                (((struct oCC_uint *)(t0))->v) = 0x1;
            }
            t53 = (((struct o8C_int *)(t0))->v);
            (((struct o94_uint *)(t0))->v) = t53;
            (((struct o90_uint *)(t0))->v) = t53;
            *(volatile int *)((t0 + 0x18));
            FUN_0c07ff00();
            (((struct oB4_float *)(t0))->v) = (((*(float *)((((((((struct o88_int *)(t0))->v)) << 2) + ((*(int *)((t0 + 0x14))) + 0x8)) + 0x0))) + f6) * f5);
            if (((((struct oB4_float *)(t0))->v)) > f4) {
                (((struct oB4_float *)(t0))->v) = f4;
            }
            if (0.0f > ((((struct oB4_float *)(t0))->v))) {
                (((struct oB4_float *)(t0))->v) = f7;
            }
            t64 = FUN_0c029b12((0xA8 + t0), 20.0f);
            *(unsigned int *)(((int)stk + 8)) = (*(int *)((0xC097028 + ((*(signed char *)(((*(int *)((t0 + 0x18))) + 0xC))) << 2))));
            *(unsigned int *)(((int)stk + 12)) = ((((struct o8C_int *)(t0))->v));
            *(unsigned int *)(((int)stk + 16)) = t64;
            *(float *)(((int)stk + 20)) = -1.0f;
            t74 = 0x0;
            if ((int)(*(signed char *)((((((struct oB8_int *)(t0))->v)) + 0x0))) >= 0) {
                t74 = 0x1;
            }
        }
        *(unsigned int *)(((int)stk + 24)) = t74;
        t79 = (FUN_0c061bcc((t0 + 0x1C), (((int)stk + 0) + 0x8)));
    }
    return t79;
}

int nlPerspective(int a4, float f4, float f5, float f6)
{
    int stk[22];
    register int t0;
    register float t2;
    register float u3;
    register int t5;
    register float t6;
    register int t8;
    register int t10;
    register int t21;
    register float t17;
    register float t25;
    register float u26;
    register float u27;
    register float u28;
    register float u30;
    register float u32;
    register float u35;
    register float u36;
    register float u37;
    register float t39;
    register float u42;
    register float t43;
    register float t45;
    register float t46;
    register float t47;
    register float u50;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(float *)(((int)stk + 8)) = f4;
    t0 = *(int *)(((int)stk + 4));
    t2 = nlTan((t0 >> 1));
    *(float *)(((int)stk + 0)) = (1.0f / t2);
    u3 = *(float *)(((int)stk + 8));
    if (((((struct oC_float *)0xC1473C8)->v)) != 0.0f) {
        t5 = FUN_0c070890((u3 / (1.0f / t2)));
        *(unsigned int *)(((int)stk + 4)) = t5;
        t6 = nlTan(t5);
        t8 = FUN_0c070890((t6 * (((((struct oC_float *)0xC1473C8)->v)) + 1.0f)));
        *(float *)(((int)stk + 20)) = (1.0f / (FUN_0c070a10(t8)));
    } else {
        t10 = FUN_0c070890((u3 / (1.0f / t2)));
        *(float *)(((int)stk + 20)) = (1.0f / (FUN_0c070a10(t10)));
    }
    t21 = (t0 >> 1);
    if (((((struct o10_float *)0xC1473C8)->v)) != 0.0f) {
        t17 = nlTan((t0 >> 1));
        t21 = (FUN_0c070890((t17 * (((((struct o10_float *)0xC1473C8)->v)) + 1.0f))));
    }
    t25 = FUN_0c070a10(t21);
    (((struct oC_float *)0xC1473C8)->v) = 0.0f;
    (((struct o10_float *)0xC1473C8)->v) = 0.0f;
    u26 = *(float *)0xC07442C;
    u27 = *(float *)(((int)stk + 0));
    u28 = *(float *)(((int)stk + 8));
    *(float *)(((int)stk + 16)) = (u27 / u28);
    u30 = ((u27 / u28) * (*(float *)(((int)stk + 20))));
    (((struct o0_float *)0xC1473C8)->v) = (u30 * u26);
    u32 = ((*(float *)(((int)stk + 0))) * (1.0f / t25));
    (((struct o4_float *)0xC1473C8)->v) = (u32 * u26);
    (((struct o0_float *)0xC2BFBF0)->v) = (((((struct o14_float *)0xC1473C8)->v)) * ((((struct o0_float *)0xC1473C8)->v)));
    u35 = (((struct o4_float *)0xC1473C8)->v);
    u36 = (((struct o18_float *)0xC1473C8)->v);
    (((struct o4_float *)0xC2BFBF0)->v) = (u36 * u35);
    u37 = (((struct o0_float *)0xC2BFBF0)->v);
    if (u37 > (u36 * u35)) {
        (((struct o8_float *)0xC1473C8)->v) = u37;
    } else {
        (((struct o8_float *)0xC1473C8)->v) = (u36 * u35);
    }
    t39 = nlTan((t0 >> 1));
    *(float *)(((int)stk + 12)) = (float)(FUN_0c070890((t39 * (*(float *)(((int)stk + 8))))));
    (((struct o14_float *)0xC2BFBB0)->v) = 0.0f;
    (((struct o4_float *)0xC2BFBB0)->v) = 0.0f;
    (((struct o30_float *)0xC2BFBB0)->v) = 0.0f;
    (((struct o20_float *)0xC2BFBB0)->v) = 0.0f;
    u42 = *(float *)(((int)stk + 12));
    *(unsigned int *)(((int)stk + 4)) = (int)u42;
    t43 = FUN_0c070a10((int)u42);
    (((struct o0_float *)0xC2BFBB0)->v) = t43;
    (((struct o10_float *)0xC2BFBB0)->v) = (-t43);
    t45 = nlSin((*(int *)(((int)stk + 4))));
    (((struct o18_float *)0xC2BFBB0)->v) = t45;
    (((struct o8_float *)0xC2BFBB0)->v) = t45;
    t46 = FUN_0c070a10((t0 >> 1));
    (((struct o24_float *)0xC2BFBB0)->v) = t46;
    (((struct o34_float *)0xC2BFBB0)->v) = (-t46);
    t47 = nlSin((t0 >> 1));
    (((struct o38_float *)0xC2BFBB0)->v) = t47;
    (((struct o28_float *)0xC2BFBB0)->v) = t47;
    (((struct o1C_float *)0xC2BFBB0)->v) = 0.0f;
    (((struct oC_float *)0xC2BFBB0)->v) = 0.0f;
    (((struct o3C_float *)0xC2BFBB0)->v) = 0.0f;
    (((struct o2C_float *)0xC2BFBB0)->v) = 0.0f;
    *(float *)(((int)stk + 24)) = (*(float *)(((int)stk + 16)));
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 32)) = 0.0f;
    *(float *)(((int)stk + 36)) = 0.0f;
    *(float *)(((int)stk + 40)) = 0.0f;
    *(float *)(((int)stk + 44)) = (*(float *)(((int)stk + 0)));
    *(float *)(((int)stk + 48)) = 0.0f;
    *(float *)(((int)stk + 52)) = 0.0f;
    *(float *)(((int)stk + 56)) = 0.0f;
    *(float *)(((int)stk + 60)) = 0.0f;
    *(float *)(((int)stk + 64)) = ((f5 + f6) / (f5 - f6));
    *(float *)(((int)stk + 68)) = -1.0f;
    *(float *)(((int)stk + 72)) = 0.0f;
    *(float *)(((int)stk + 76)) = 0.0f;
    u50 = (f5 * f6);
    *(float *)(((int)stk + 80)) = ((u50 * (1.0f + 1.0f)) / (f5 - f6));
    *(float *)(((int)stk + 84)) = 0.0f;
    (((struct o0_float *)0xC2C4DBC)->v) = f5;
    (((struct o4_float *)0xC2C4DBC)->v) = f6;
    (((struct o8_float *)0xC2C4DBC)->v) = (1.0f / f5);
    (((struct o18_float *)0xC2BF8BC)->v) = f5;
    (((struct o0_float *)0xC2BF8BC)->v) = (-f5);
    (((struct o1C_float *)0xC2BF8BC)->v) = f6;
    (((struct o14_float *)0xC2BF8BC)->v) = (1.0f / f5);
    nlMultiMatrix((((int)stk + 0) + 0x18));
    return (nl_set_cnv_proj_pers());
}

int FUN_0c1675c0(Stk63 s)
{
    int stk[72];
    register int t66;
    register int t47;
    register int t48;
    register int t68;
    register int t70;
    register int t72;
    register int t73;
    register int t75;
    register int t77;
    register int t79;
    register int t81;
    register int t83;
    register int t85;
    register int t87;
    register int t89;

    stk[1] = s.w[0];
    stk[2] = s.w[1];
    stk[3] = s.w[2];
    stk[4] = s.w[3];
    stk[5] = s.w[4];
    stk[6] = s.w[5];
    stk[7] = s.w[6];
    stk[8] = s.w[7];
    stk[9] = s.w[8];
    stk[10] = s.w[9];
    stk[11] = s.w[10];
    stk[12] = s.w[11];
    stk[13] = s.w[12];
    stk[14] = s.w[13];
    stk[15] = s.w[14];
    stk[16] = s.w[15];
    stk[17] = s.w[16];
    stk[18] = s.w[17];
    stk[19] = s.w[18];
    stk[20] = s.w[19];
    stk[21] = s.w[20];
    stk[22] = s.w[21];
    stk[23] = s.w[22];
    stk[24] = s.w[23];
    stk[25] = s.w[24];
    stk[26] = s.w[25];
    stk[27] = s.w[26];
    stk[28] = s.w[27];
    stk[29] = s.w[28];
    stk[30] = s.w[29];
    stk[31] = s.w[30];
    stk[32] = s.w[31];
    stk[33] = s.w[32];
    stk[34] = s.w[33];
    stk[35] = s.w[34];
    stk[36] = s.w[35];
    stk[37] = s.w[36];
    stk[38] = s.w[37];
    stk[39] = s.w[38];
    stk[40] = s.w[39];
    stk[41] = s.w[40];
    stk[42] = s.w[41];
    stk[43] = s.w[42];
    stk[44] = s.w[43];
    stk[45] = s.w[44];
    stk[46] = s.w[45];
    stk[47] = s.w[46];
    stk[48] = s.w[47];
    stk[49] = s.w[48];
    stk[50] = s.w[49];
    stk[51] = s.w[50];
    stk[52] = s.w[51];
    stk[53] = s.w[52];
    stk[54] = s.w[53];
    stk[55] = s.w[54];
    stk[56] = s.w[55];
    stk[57] = s.w[56];
    stk[58] = s.w[57];
    stk[59] = s.w[58];
    stk[60] = s.w[59];
    stk[61] = s.w[60];
    stk[62] = s.w[61];
    stk[63] = s.w[62];
    (((struct o8_uint *)0xC300920)->v) = ((((struct oF8_int *)((((int)stk + 4) + 0x10)))->v));
    (((struct oC_uint *)0xC300920)->v) = ((((struct oF0_int *)((((int)stk + 4) + 0x10)))->v));
    (((struct o10_uint *)0xC300920)->v) = ((((struct oF4_int *)((((int)stk + 4) + 0x10)))->v));
    (((struct o0_uint *)0xC300BB0)->v) = ((((((((((((((struct o54_int *)((((int)stk + 4) + 0x10)))->v)) << 1) | ((((struct o50_int *)((((int)stk + 4) + 0x10)))->v))) | (((((struct o5C_int *)((((int)stk + 4) + 0x10)))->v)) << 2)) | ((((((struct o68_int *)((((int)stk + 4) + 0x10)))->v)) << 2) << 1)) | (((*(int *)(((((int)stk + 4) + 0x10) + 0x30))) << 2) << 2)) | (((((((struct o60_int *)((((int)stk + 4) + 0x10)))->v)) << 2) << 2) << 1)) | ((((*(int *)(((((int)stk + 4) + 0x10) + 0x28))) << 2) << 2) << 2)) | ((*(int *)(((((int)stk + 4) + 0x10) + 0x2C))) << 7)) | (((((struct o48_int *)((((int)stk + 4) + 0x10)))->v)) << 8)) | ((((((struct o4C_int *)((((int)stk + 4) + 0x10)))->v)) << 8) << 1));
    (((struct oC_uint *)0xC300BB0)->v) = (((*(int *)(((((int)stk + 4) + 0x10) + 0x4))) & 0x7FF) | (((*(int *)(((((int)stk + 4) + 0x10) + 0x0))) & 0x7FF) << 16));
    (((struct o4_uint *)0xC300BB0)->v) = (((*(int *)(((((int)stk + 4) + 0x10) + 0x4))) & 0x7FF) << 16);
    (((struct o10_uint *)0xC300BB0)->v) = (((*(int *)(((((int)stk + 4) + 0x10) + 0x8))) & 0x7FF) | (((*(int *)(((((int)stk + 4) + 0x10) + 0x14))) & 0x7FF) << 16));
    (((struct o14_uint *)0xC300BB0)->v) = (((*(int *)(((((int)stk + 4) + 0x10) + 0x10))) & 0x7FF) | (((*(int *)(((((int)stk + 4) + 0x10) + 0xC))) & 0x7FF) << 16));
    (((struct o8_uint *)0xC300BB0)->v) = ((((((struct o74_int *)((((int)stk + 4) + 0x10)))->v)) & 0x7FF) | ((((((struct o78_int *)((((int)stk + 4) + 0x10)))->v)) & 0x7FF) << 16));
    (((struct o18_uint *)0xC300BB0)->v) = (((((*(int *)(((((int)stk + 4) + 0x10) + 0x18))) & 0x7F) | (((*(int *)(((((int)stk + 4) + 0x10) + 0x1C))) & 0xF) << 8)) | (((((*(int *)(((((int)stk + 4) + 0x10) + 0x20))) & 0x3FF) << 8) << 2) << 2)) | (((*(int *)(((((int)stk + 4) + 0x10) + 0x24))) & 0x7F) << 22));
    (((struct o24_uint *)0xC300BB0)->v) = ((((((((*(int *)(((((int)stk + 4) + 0x10) + 0x34))) & 0x1) | (((*(int *)(((((int)stk + 4) + 0x10) + 0x38))) & 0x1) << 1)) | (((*(int *)(((((int)stk + 4) + 0x10) + 0x3C))) & 0x1) << 2)) | (((((((struct o40_int *)((((int)stk + 4) + 0x10)))->v)) & 0x1) << 2) << 1)) | (((0xF & ((((struct o44_int *)((((int)stk + 4) + 0x10)))->v))) << 2) << 2)) | ((((((struct o6C_int *)((((int)stk + 4) + 0x10)))->v)) & 0x1) << 8)) | ((((((struct o70_int *)((((int)stk + 4) + 0x10)))->v)) & 0x3F) << 16));
    (((struct o28_uint *)0xC300BB0)->v) = (((((struct o8_int *)0xC300920)->v)) + ((((struct o0_int *)0xC300920)->v)));
    (((struct o2C_uint *)0xC300BB0)->v) = ((((((struct oC_int *)0xC300920)->v)) + ((((struct o4_int *)0xC300920)->v))) | ((((((struct o10_int *)0xC300920)->v)) + ((((struct o4_int *)0xC300920)->v))) << 16));
    t66 = 0x7F;
    if ((*(int *)0xC300DBC) != 1) {
        if ((((((struct o0_int *)0xC3008D4)->v)) & 2) != 0) {
            for (;;) {
                t47 = kmiReadRegister(0x10C);
                if ((t47 & 0x3FF) != 0) {
                    break;
                }
            }
            for (;;) {
                t48 = kmiReadRegister(0x10C);
                if ((t48 & 0x3FF) == 0) {
                    break;
                }
            }
        } else {
            t66 = 0x7F;
        }
    }
    t68 = ((int (*)(int, int, int))(thunk_kmiWriteRegister))(0xE8, (((((struct o24_int *)0xC300BB0)->v)) | 0x8), t66);
    t70 = 0x0;
    if ((((((struct o18_int *)0xC3008D4)->v)) & 1) != 0) {
        t70 = 0x800000;
    }
    t72 = ((int (*)(int, int))(thunk_kmiWriteRegister))(0x44, t70);
    t73 = ((int (*)(int, int))(thunk_kmiWriteRegister))(0x5C, 0x0);
    t75 = ((int (*)(int, int))(thunk_kmiWriteRegister))(0xD0, ((((struct o0_int *)0xC300BB0)->v)));
    t77 = ((int (*)(int, int))(thunk_kmiWriteRegister))(0xD8, ((((struct o10_int *)0xC300BB0)->v)));
    t79 = ((int (*)(int, int))(thunk_kmiWriteRegister))(0xCC, ((((struct o8_int *)0xC300BB0)->v)));
    t81 = ((int (*)(int, int))(thunk_kmiWriteRegister))(0xD4, ((((struct oC_int *)0xC300BB0)->v)));
    t83 = ((int (*)(int, int))(thunk_kmiWriteRegister))(0xDC, ((((struct o14_int *)0xC300BB0)->v)));
    t85 = ((int (*)(int, int))(thunk_kmiWriteRegister))(0xE0, ((((struct o18_int *)0xC300BB0)->v)));
    t87 = ((int (*)(int, int))(thunk_kmiWriteRegister))(0xEC, ((((struct o28_int *)0xC300BB0)->v)));
    t89 = ((int (*)(int, int))(thunk_kmiWriteRegister))(0xF0, ((((struct o2C_int *)0xC300BB0)->v)));
    return (((int (*)(int, int))(thunk_kmiWriteRegister))(0xC8, ((((struct o4_int *)0xC300BB0)->v))));
}

int FUN_0c038862(void)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t1 = FUN_0c034320(0x1, 0x1);
    if (t1 == 1) {
        FUN_0c03386a(0x6);
        FUN_0c035a20(0x2);
    }
    if ((((*(int *)0xC2A46C8) & 4) != 0) && (t0 = (((struct o18_int *)0xC2A4658)->v), (t0 & 5) != 0)) {
        *(unsigned int *)0xC2A46C8 = ((*(int *)0xC2A46C8) | 0x8);
    }
    FUN_0c0339c0(0x0);
    t0 = FUN_0c0343b8(0x1, 0xA);
    if (t0 != 0) {
        return FUN_0c035a5e(0x2, 0x1, 320.0f, 336.0f);
    }
    t0 = FUN_0c035a5e(0x2, 0x0, 320.0f, 336.0f);
    if (t0 != 2) {
        return t0;
    }
    FUN_0c033578(0x23, 0xC0C02D0, 428.0f, 272.0f, 1.0f);
    FUN_0c033578(0x20, 0xC0C0244, 520.0f, 272.0f, 1.0f);
    FUN_0c033578(0x23, 0xC0C02D8, 32.0f, 272.0f, 1.0f);
    t0 = *(int *)0xC2A4FB8;
    t1 = *(int *)((((((((struct o28_int *)0xC2A4658)->v)) << 2) + 0xC2A4684) + 0x0));
    t2 = (((struct o0_int *)0xC2A4658)->v);
    t3 = *(signed char *)0xC28ED9F;
    t4 = (((struct o0_int *)0xC2A4658)->v);
    if ((t1 - 1) == 0) {
        t5 = (*(int *)(((t4 << 2) + ((((((t0 << 2) + t0) << 2) << 1) + 0xC12B854) + ((((unsigned char)t3 << 2) + (unsigned char)t3) << 2)))));
        t6 = ((((t2 << 2) << 1) + 0xC0BFD94) + 0x50);
    } else {
        if ((t1 - 1) == 1) {
            t5 = (*(int *)(((t4 << 2) + (((((((t0 << 2) + t0) << 2) << 1) + 0xC12B854) + 0x50) + ((((unsigned char)t3 << 2) + (unsigned char)t3) << 2)))));
            t6 = ((((t2 << 2) << 1) + 0xC0BFD94) + 0x78);
        } else {
            if ((t1 - 1) == 3) {
                t5 = (*(int *)(((t4 << 2) + (((((((t0 << 2) + t0) << 2) << 1) + 0xC12B854) + 0x50) + ((((unsigned char)t3 << 2) + (unsigned char)t3) << 2)))));
                t6 = ((((t2 << 2) << 1) + 0xC0BFD94) + 0xA0);
            } else {
                t5 = 0x0;
                t6 = 0x0;
                if ((t1 - 1) == 4) {
                    t5 = (*(int *)(((t4 << 2) + (((((((t0 << 2) + t0) << 2) << 1) + 0xC12B854) + 0xA0) + ((((unsigned char)t3 << 2) + (unsigned char)t3) << 2)))));
                    t6 = ((((t2 << 2) << 1) + 0xC0BFD94) + 0xC8);
                }
            }
        }
    }
    FUN_0c0345ec(0x24, (unsigned char)(*(signed char *)(((((t1 - 1) << 2) + 0xC0BFEB4) + 0x0))), 0x0, 64.0f, 304.0f, (*(float *)0xC2A5858));
    FUN_0c0345ec(0x24, (unsigned char)(*(signed char *)(((((t1 - 1) << 2) + 0xC0BFEB4) + 0x1))), 0x0, 64.0f, 321.0f, (*(float *)0xC2A5858));
    FUN_0c0345ec(0x24, (unsigned char)(*(signed char *)(((((t1 - 1) << 2) + 0xC0BFEB4) + 0x2))), 0x0, 64.0f, 344.0f, (*(float *)0xC2A5858));
    FUN_0c0345ec(0x24, (unsigned char)(*(signed char *)(((((t1 - 1) << 2) + 0xC0BFEB4) + 0x3))), 0x0, 64.0f, 361.0f, (*(float *)0xC2A5858));
    return FUN_0c033578(0x223, t5, (float)((*(int *)((t6 + 0x0))) + 0x40), (float)((*(int *)((t6 + 0x4))) + 0x158), 1.0f);
}

int adxt_stat_decinfo(int a4)
{
    int stk[10];
    register int t0;
    register int t1;
    register int t100;
    register int t2;
    register int t8;
    register int t9;
    register int t11;
    register int t14;
    register int t24;
    register int t33;
    register int t37;
    register int t45;
    register int t55;
    register int t63;
    register int t87;
    register int t88;
    register int t20;
    register int t60;

    t0 = *(int *)((a4 + 0x4));
    t1 = FUN_0c161ad0(t0);
    t100 = t1;
    if (t1 != 2) {
    } else {
        t2 = FUN_0c161fee(t0);
        if ((int)t2 > (int)(*(signed char *)((a4 + 0x3)))) {
            FUN_0c1617e0(t2, (*(signed char *)((a4 + 0x3))), (((int)stk + 0) + 0x8), 0x10);
            FUN_0c1616f4(0xC171620, (((int)stk + 0) + 0x8));
            t100 = (FUN_0c14e8e4(a4));
        } else {
            t8 = FUN_0c161fe2(t0);
            t9 = FUN_0c162036(t0);
            if ((int)t9 > 0) {
                t11 = (int)((int)t8 / (int)(*(int *)((a4 + 0x38))));
                t20 = ((t11 << 1) + t11);
            } else {
                t14 = (int)((int)t8 / (int)(*(int *)((a4 + 0x38))));
                t20 = (((int)((unsigned int)((int)((unsigned int)((t14 << 1) + t14) + (unsigned int)0x0)) + ((((int)0x0 > (int)((t14 << 1) + t14))) ? 1u : 0u))) >> 1);
            }
            (((struct o48_uint *)(a4))->v) = t20;
            t24 = FUN_0c162006(t0);
            (((struct o48_uint *)(a4))->v) = (((int)((int)(((((struct o48_int *)(a4))->v)) + (t24 << 1)) / (int)(t24 << 1))) * (t24 << 1));
            ADXSJD_SetMaxDecSmpl(t0, ((((struct o48_int *)(a4))->v)));
            if ((int)t9 > 0) {
                if ((*(signed char *)((a4 + 0x2))) == 2) {
                    (((struct o50_uint *)(a4))->v) = 0x0;
                } else {
                    t33 = FUN_0c162072(t0);
                    (((struct o50_uint *)(a4))->v) = (0x800 - ((int)((int)t33 % (int)0x800)));
                    (((struct o50_uint *)(a4))->v) = ((int)((int)((((struct o50_int *)(a4))->v)) % (int)0x800));
                    t37 = (int)((int)((0x800 + t33) - 1) / (int)0x800);
                    (((struct o8C_uint *)(a4))->v) = t37;
                    ADXSTM_SetEos((*(int *)((a4 + 0x8))), t37);
                    ADXSTM_EntryEosFunc((*(int *)((a4 + 0x8))), 0xC1628B4, a4);
                }
                t45 = FUN_0c162066(t0);
                (((struct o90_uint *)(a4))->v) = t45;
                ADXSJD_SetTrapNumSmpl(t0, t45);
                ADXSJD_SetTrapDtLen(t0, 0x0);
                ADXSJD_SetTrapCnt(t0, 0x0);
                t60 = 0xC1627CC;
            } else {
                if ((*(int *)((a4 + 0x8))) != 0) {
                    ADXSTM_SetEos((*(int *)((a4 + 0x8))), 0x7FFFFFFF);
                }
                t55 = FUN_0c16201e(t0);
                ADXSJD_SetTrapNumSmpl(t0, t55);
                ADXSJD_SetTrapDtLen(t0, 0x0);
                ADXSJD_SetTrapCnt(t0, 0x0);
                t60 = 0xC1629A8;
            }
            ADXSJD_EntryTrapFunc(t0, t60, a4);
            t63 = FUN_0c161fe2(t0);
            *(unsigned int *)(((int)stk + 4)) = (FUN_0c161fee(t0));
            *(unsigned int *)(((int)stk + 0)) = (FUN_0c16201e(t0));
            FUN_0c161ffa(t0);
            *(volatile int *)((a4 + 0xC));
            thunk_mwRnaSetBitPerSmpl();
            *(volatile int *)((a4 + 0xC));
            thunk_mwRnaSetSfreq();
            *(volatile int *)(((int)stk + 4));
            *(volatile int *)((a4 + 0xC));
            thunk_mwRnaSetNumChan();
            *(volatile int *)(((int)stk + 0));
            *(volatile int *)((a4 + 0xC));
            FUN_0c1618dc();
            *(volatile short *)((a4 + 0x40));
            *(volatile int *)((a4 + 0xC));
            thunk_mwRnaSetOutVol();
            adxt_set_outpan(a4);
            if (((((struct o74_int *)(a4))->v)) != 0) {
                ADXAMP_SetSfreq(((((struct o74_int *)(a4))->v)), t63);
            }
            t87 = FUN_0c161fd6(t0);
            if (t87 == 2) {
                t88 = ADXSJD_GetSpsdInfo(t0);
                ADXRNA_SetStmHdInfo((*(int *)((a4 + 0xC))), t88);
            }
            *(volatile int *)((a4 + 0xC));
            thunk_mwRnaSetTransSw();
            *(unsigned char *)((a4 + 0x1)) = 0x2;
            t100 = 0x2;
        }
    }
    return t100;
}

int buAnalyzeBackupFileImage(int a4, int a5)
{
    int stk[10];
    register int t27;
    register int t28;
    register int t30;
    register int t33;
    register int t35;
    register int t42;
    register int t44;
    register int t51;
    register int t53;

    *(unsigned int *)(((int)stk + 36)) = a4;
    *(unsigned int *)(((int)stk + 32)) = a5;
    *(unsigned int *)(((int)stk + 28)) = (*(int *)(((int)stk + 32)));
    if (((((struct o40_short *)((*(int *)(((int)stk + 28)))))->v)) == 0) {
        return 0xFFFFFF21;
    }
    if ((int)(unsigned short)((((struct o40_short *)((*(int *)(((int)stk + 28)))))->v)) > (int)0x3) {
        return 0xFFFFFF21;
    }
    if ((int)(unsigned short)((((struct o44_short *)((*(int *)(((int)stk + 28)))))->v)) > (int)0x3) {
        return 0xFFFFFF21;
    }
    if ((unsigned int)((((struct o48_int *)((*(int *)(((int)stk + 28)))))->v)) > (unsigned int)0xE1000) {
        return 0xFFFFFF21;
    }
    *(unsigned int *)(((int)stk + 12)) = (*(int *)((((unsigned short)((((struct o40_short *)((*(int *)(((int)stk + 28)))))->v)) << 2) + 0xC147534)));
    *(unsigned int *)(((int)stk + 8)) = (*(int *)((((unsigned short)((((struct o44_short *)((*(int *)(((int)stk + 28)))))->v)) << 2) + 0xC147544)));
    t27 = *(int *)(((int)stk + 8));
    t28 = *(int *)(((int)stk + 12));
    t30 = (((struct o48_int *)((*(int *)(((int)stk + 28)))))->v);
    *(unsigned int *)(((int)stk + 4)) = (((t28 + t27) + t30) + 0x80);
    if ((unsigned int)(((t28 + t27) + t30) + 0x80) > (unsigned int)0xE1000) {
        return 0xFFFFFF21;
    }
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 36)));
    *(unsigned int *)(((int)stk + 16)) = (*(int *)(((int)stk + 28)));
    *(unsigned int *)(((int)stk + 24)) = 0x0;
    t33 = 0x0;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 24))) >= (int)0x10) {
            break;
        }
        t35 = *(int *)(((int)stk + 20));
        *(unsigned int *)(((int)stk + 20)) = (t35 + 0x1);
        t33 = (*(int *)(((int)stk + 16)));
        t33 = (t33 + 0x1);
        *(unsigned int *)(((int)stk + 16)) = t33;
        t33 = (t33 - 1);
        *(unsigned char *)((((t35 + 0x1) - 1) + 0x0)) = (*(signed char *)((t33 + 0x0)));
        t33 = (*(int *)(((int)stk + 24)));
        t33 = (t33 + 0x1);
        *(unsigned int *)(((int)stk + 24)) = t33;
    }
    *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x0)) = 0x0;
    *(unsigned int *)(((int)stk + 20)) = ((*(int *)(((int)stk + 36))) + 0x12);
    *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 28))) + 0x10);
    *(unsigned int *)(((int)stk + 24)) = 0x0;
    t42 = 0x0;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 24))) >= (int)0x20) {
            break;
        }
        t44 = *(int *)(((int)stk + 20));
        *(unsigned int *)(((int)stk + 20)) = (t44 + 0x1);
        t42 = (*(int *)(((int)stk + 16)));
        t42 = (t42 + 0x1);
        *(unsigned int *)(((int)stk + 16)) = t42;
        t42 = (t42 - 1);
        *(unsigned char *)((((t44 + 0x1) - 1) + 0x0)) = (*(signed char *)((t42 + 0x0)));
        t42 = (*(int *)(((int)stk + 24)));
        t42 = (t42 + 0x1);
        *(unsigned int *)(((int)stk + 24)) = t42;
    }
    *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x0)) = 0x0;
    *(unsigned int *)(((int)stk + 20)) = ((*(int *)(((int)stk + 36))) + 0x34);
    *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 28))) + 0x30);
    *(unsigned int *)(((int)stk + 24)) = 0x0;
    t51 = 0x0;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 24))) >= (int)0x10) {
            break;
        }
        t53 = *(int *)(((int)stk + 20));
        *(unsigned int *)(((int)stk + 20)) = (t53 + 0x1);
        t51 = (*(int *)(((int)stk + 16)));
        t51 = (t51 + 0x1);
        *(unsigned int *)(((int)stk + 16)) = t51;
        t51 = (t51 - 1);
        *(unsigned char *)((((t53 + 0x1) - 1) + 0x0)) = (*(signed char *)((t51 + 0x0)));
        t51 = (*(int *)(((int)stk + 24)));
        t51 = (t51 + 0x1);
        *(unsigned int *)(((int)stk + 24)) = t51;
    }
    *(unsigned char *)(((*(int *)(((int)stk + 20))) + 0x0)) = 0x0;
    (((struct o4E_ushort *)((*(int *)(((int)stk + 36)))))->v) = ((((struct o42_short *)((*(int *)(((int)stk + 28)))))->v));
    (((struct o4C_ushort *)((*(int *)(((int)stk + 36)))))->v) = ((((struct o40_short *)((*(int *)(((int)stk + 28)))))->v));
    *(unsigned int *)(((int)stk + 16)) = (*(int *)(((int)stk + 32)));
    (((struct o44_uint *)((*(int *)(((int)stk + 36)))))->v) = ((*(int *)(((int)stk + 32))) + 0x60);
    *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + 0x80);
    (((struct o48_uint *)((*(int *)(((int)stk + 36)))))->v) = (*(int *)(((int)stk + 16)));
    *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + (*(int *)(((int)stk + 12))));
    (((struct o54_ushort *)((*(int *)(((int)stk + 36)))))->v) = ((((struct o44_short *)((*(int *)(((int)stk + 28)))))->v));
    if (((((struct o44_short *)((*(int *)(((int)stk + 28)))))->v)) == 0) {
        (((struct o50_uint *)((*(int *)(((int)stk + 36)))))->v) = 0x0;
    } else {
        (((struct o50_uint *)((*(int *)(((int)stk + 36)))))->v) = (*(int *)(((int)stk + 16)));
        *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + (*(int *)(((int)stk + 8))));
    }
    (((struct o5C_uint *)((*(int *)(((int)stk + 36)))))->v) = ((((struct o48_int *)((*(int *)(((int)stk + 28)))))->v));
    if (((((struct o48_int *)((*(int *)(((int)stk + 28)))))->v)) == 0) {
        (((struct o58_uint *)((*(int *)(((int)stk + 36)))))->v) = 0x0;
    } else {
        (((struct o58_uint *)((*(int *)(((int)stk + 36)))))->v) = (*(int *)(((int)stk + 16)));
    }
    *(unsigned short *)(((int)stk + 0)) = ((((struct o46_short *)((*(int *)(((int)stk + 28)))))->v));
    if ((*(short *)(((int)stk + 0))) == 0) {
        return 0x0;
    }
    (((struct o46_ushort *)((*(int *)(((int)stk + 28)))))->v) = 0x0;
    *(unsigned short *)(((int)stk + 2)) = (buCalcCRC((*(int *)(((int)stk + 32))), (*(int *)(((int)stk + 4)))));
    (((struct o46_ushort *)((*(int *)(((int)stk + 28)))))->v) = (*(short *)(((int)stk + 0)));
    if ((*(short *)(((int)stk + 2))) != (*(short *)(((int)stk + 0)))) {
        return 0xFFFFFF20;
    }
    return 0x0;
}

int FUN_0c067898(int a4)
{
    int stk[11];
    register int t0;
    register float t9;
    register int t18;
    register int t23;
    register int t28;
    register int t35;
    register int t48;
    register int t60;
    register int t61;

    t0 = FUN_0c05f42e();
    (((struct o20_float *)(((int)stk + 0)))->v) = (FUN_0c073b40(0xC2B9CBC, 0xC17596C));
    (((struct o4_float *)((((int)stk + 0) + 0x20)))->v) = (FUN_0c073b40(0xC2B9CBC, 0xC17597C));
    (((struct o8_float *)((((int)stk + 0) + 0x20)))->v) = (FUN_0c073b40(0xC2B9CBC, 0xC17598C));
    FUN_0c07ff00();
    FUN_0c06e700(((int)stk + 0), (0xB0 + a4), -0.200000003f);
    nlAddVector(((int)stk + 0), (0xBC + a4));
    FUN_0c073c40((0xBC + a4), ((int)stk + 0), 0.800000012f);
    nlAddVector((0xB0 + a4), (0xBC + a4));
    (((struct oB8_float *)(a4))->v) = 0.0f;
    t9 = FUN_0c073c60((0xB0 + a4));
    if (t9 > 3.0f) {
        FUN_0c073c40((0xB0 + a4), (0xB0 + a4), (3.0f / t9));
    }
    if (0.00100000005f > t9) {
        FUN_0c07ff00();
    }
    t18 = FUN_0c05d0d8(((((struct oB0_float *)(a4))->v)));
    if (t18 != 0) {
        FUN_0c07ff00();
    }
    t23 = FUN_0c05d0d8(((((struct oB4_float *)(a4))->v)));
    if (t23 != 0) {
        FUN_0c07ff00();
    }
    t28 = FUN_0c05d0d8(((((struct oB8_float *)(a4))->v)));
    if (t28 != 0) {
        FUN_0c07ff00();
    }
    nlAddVector(t0, (0xB0 + a4));
    *(unsigned int *)(((int)stk + 12)) = (0xC8 + a4);
    *(unsigned int *)(((int)stk + 16)) = (0xCC + a4);
    *(unsigned int *)(((int)stk + 20)) = (int)(-(((((struct o8_float *)((((int)stk + 0) + 0x20)))->v)) * 2500.0f));
    *(unsigned int *)(((int)stk + 24)) = 0x14;
    *(unsigned int *)(((int)stk + 28)) = 0x55;
    FUN_0c067804((((int)stk + 0) + 0xC));
    t35 = *(int *)(((int)stk + 12));
    if ((int)(*(int *)((t35 + 0x0))) > (int)0xE38) {
        *(unsigned int *)((t35 + 0x0)) = 0xE38;
    } else {
        if ((int)(*(int *)((t35 + 0x0))) < (int)0xFFFFFC72) {
            *(unsigned int *)((t35 + 0x0)) = 0xFFFFFC72;
        }
    }
    *(unsigned int *)((t0 + 0x1C)) = ((*(int *)((t0 + 0x1C))) + (*(int *)(((*(int *)(((int)stk + 12))) + 0x0))));
    *(unsigned int *)(((int)stk + 12)) = (0xD0 + a4);
    *(unsigned int *)(((int)stk + 16)) = (0xD4 + a4);
    *(unsigned int *)(((int)stk + 20)) = (int)(-(((((struct o20_float *)(((int)stk + 0)))->v)) * 2000.0f));
    *(unsigned int *)(((int)stk + 24)) = 0xA;
    *(unsigned int *)(((int)stk + 28)) = 0x46;
    FUN_0c067804((((int)stk + 0) + 0xC));
    t48 = *(int *)(((int)stk + 12));
    if ((int)(*(int *)((t48 + 0x0))) > (int)0xAAA) {
        *(unsigned int *)((t48 + 0x0)) = 0xAAA;
    } else {
        if ((int)(*(int *)((t48 + 0x0))) < (int)0xFFFFF556) {
            *(unsigned int *)((t48 + 0x0)) = 0xFFFFF556;
        }
    }
    *(unsigned int *)((t0 + 0x20)) = ((*(int *)((t0 + 0x20))) + (*(int *)(((*(int *)(((int)stk + 12))) + 0x0))));
    *(unsigned int *)(((int)stk + 12)) = (0xD8 + a4);
    *(unsigned int *)(((int)stk + 16)) = (0xDC + a4);
    *(unsigned int *)(((int)stk + 20)) = (int)(((((struct o8_float *)((((int)stk + 0) + 0x20)))->v)) * 5000.0f);
    *(unsigned int *)(((int)stk + 24)) = 0xA;
    *(unsigned int *)(((int)stk + 28)) = 0x46;
    t60 = FUN_0c067804((((int)stk + 0) + 0xC));
    t61 = *(int *)(((int)stk + 12));
    if ((int)(*(int *)((t61 + 0x0))) > (int)0x1554) {
        *(unsigned int *)((t61 + 0x0)) = 0x1554;
    } else {
        if ((int)(*(int *)((t61 + 0x0))) < (int)0xFFFFEAAC) {
            *(unsigned int *)((t61 + 0x0)) = 0xFFFFEAAC;
        }
    }
    *(unsigned int *)((t0 + 0x2C)) = ((*(int *)((t0 + 0x2C))) + (*(int *)(((*(int *)(((int)stk + 12))) + 0x0))));
    return t60;
}

int kmiCreateGlobalParameter(float f4)
{
    int t0;
    register int t6;
    register int t11;
    register float u19;
    register int t85;
    register int t89;

    t0 = (((struct o0_int *)0xC300DEC)->v);
    (((struct o30_uint *)0xC300E2C)->v) = (*(int *)((((((((((unsigned int)((unsigned int)(0x20000000 & t0) >> 16) >> 8) | ((unsigned int)((unsigned int)((unsigned int)(0x1000000 & t0) >> 16) >> 2) >> 2)) | ((unsigned int)((unsigned int)(0x40 & t0) >> 2) >> 1)) | ((unsigned int)((unsigned int)(0x20 & t0) >> 2) >> 1)) | ((unsigned int)((unsigned int)(0x10 & t0) >> 2) >> 1)) | ((unsigned int)(0x4 & t0) >> 2)) << 2) + 0xC174174)));
    (((struct o0_uint *)0xC174134)->v) = ((((struct o0_int *)0xC300DEC)->v));
    t6 = (((struct o0_int *)0xC300DEC)->v);
    *(unsigned int *)0xC2D0C9C = ((unsigned int)((unsigned int)(t6 & 0x7000000) >> 16) >> 8);
    if ((((unsigned int)((unsigned int)(t6 & 0x7000000) >> 16) >> 8) & 1) != 0) {
        (((struct o4_uint *)0xC174134)->v) = ((((struct o0_int *)0xC300E2C)->v));
        t85 = 0x40;
        t89 = 0xC174154;
    } else {
        (((struct o4_uint *)0xC174134)->v) = ((((struct o10_int *)0xC300DEC)->v));
        (((struct o8_uint *)0xC174134)->v) = ((((struct o14_int *)0xC300DEC)->v));
        (((struct oC_uint *)0xC174134)->v) = ((((struct o18_int *)0xC300DEC)->v));
        t11 = (((struct o30_int *)0xC300E2C)->v);
        t85 = t11;
        t89 = 0xC174154;
        if (t11 != 0) {
            if (t11 != 1) {
                if (t11 != 2) {
                    if (t11 != 3) {
                        if (t11 != 4) {
                            t85 = t11;
                            t89 = 0xC174144;
                            if (t11 == 16) {
                                (((struct o10_uint *)0xC174134)->v) = ((((((int)(((((struct o20_float *)0xC300DEC)->v)) * 255.0f) << 16) << 8) | ((int)(((((struct o24_float *)0xC300DEC)->v)) * 255.0f) << 16)) | ((int)(((((struct o28_float *)0xC300DEC)->v)) * 255.0f) << 8)) | (int)(((((struct o2C_float *)0xC300DEC)->v)) * 255.0f));
                                u19 = (((struct o3C_float *)0xC300DEC)->v);
                                (((struct o14_uint *)0xC174134)->v) = ((((((int)(((((struct o30_float *)0xC300DEC)->v)) * 255.0f) << 16) << 8) | ((int)(((((struct o34_float *)0xC300DEC)->v)) * 255.0f) << 16)) | ((int)(((((struct o38_float *)0xC300DEC)->v)) * 255.0f) << 8)) | (int)(u19 * 255.0f));
                                t85 = (int)(u19 * 255.0f);
                                t89 = 0xC174154;
                            }
                        } else {
                            (((struct o10_uint *)0xC174134)->v) = ((((struct o4_int *)0xC300E2C)->v));
                            (((struct o14_uint *)0xC174134)->v) = ((((struct o8_int *)0xC300E2C)->v));
                            (((struct o20_uint *)0xC174134)->v) = ((((struct o20_int *)0xC300DEC)->v));
                            (((struct o24_uint *)0xC174134)->v) = ((((struct o24_int *)0xC300DEC)->v));
                            (((struct o28_uint *)0xC174134)->v) = ((((struct o28_int *)0xC300DEC)->v));
                            (((struct o2C_uint *)0xC174134)->v) = ((((struct o2C_int *)0xC300DEC)->v));
                            (((struct o30_uint *)0xC174134)->v) = ((((struct o10_int *)0xC300E2C)->v));
                            (((struct o34_uint *)0xC174134)->v) = ((((struct o14_int *)0xC300E2C)->v));
                            (((struct o38_uint *)0xC174134)->v) = ((((struct o18_int *)0xC300E2C)->v));
                            (((struct o3C_uint *)0xC174134)->v) = ((((struct o1C_int *)0xC300E2C)->v));
                            t85 = 0x48;
                            t89 = 0xC174174;
                        }
                    } else {
                        (((struct o10_uint *)0xC174134)->v) = ((((struct o4_int *)0xC300E2C)->v));
                        (((struct o14_uint *)0xC174134)->v) = ((((struct o8_int *)0xC300E2C)->v));
                        t85 = 0x48;
                        t89 = 0xC174154;
                    }
                } else {
                    (((struct o20_uint *)0xC174134)->v) = ((((struct o20_int *)0xC300DEC)->v));
                    (((struct o24_uint *)0xC174134)->v) = ((((struct o24_int *)0xC300DEC)->v));
                    (((struct o28_uint *)0xC174134)->v) = ((((struct o28_int *)0xC300DEC)->v));
                    (((struct o2C_uint *)0xC174134)->v) = ((((struct o2C_int *)0xC300DEC)->v));
                    (((struct o30_uint *)0xC174134)->v) = ((((struct o30_int *)0xC300DEC)->v));
                    (((struct o34_uint *)0xC174134)->v) = ((((struct o34_int *)0xC300DEC)->v));
                    (((struct o38_uint *)0xC174134)->v) = ((((struct o38_int *)0xC300DEC)->v));
                    t85 = (((struct o3C_int *)0xC300DEC)->v);
                    (((struct o3C_uint *)0xC174134)->v) = t85;
                    t89 = 0xC174174;
                }
            } else {
                (((struct o10_uint *)0xC174134)->v) = ((((struct o20_int *)0xC300DEC)->v));
                (((struct o14_uint *)0xC174134)->v) = ((((struct o24_int *)0xC300DEC)->v));
                (((struct o18_uint *)0xC174134)->v) = ((((struct o28_int *)0xC300DEC)->v));
                t85 = (((struct o2C_int *)0xC300DEC)->v);
                (((struct o1C_uint *)0xC174134)->v) = t85;
                t89 = 0xC174154;
            }
        }
    }
    (((struct o0_uint *)0xC2D0C28)->v) = (*(int *)0xC2D0C9C);
    (((struct o4_uint *)0xC2D0C28)->v) = (t89 - 0xC174134);
    return t85;
}
