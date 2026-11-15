/* Straight-line functions with calls and guards (batch gen_hg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[2]; } Stk2;
typedef struct { int w[3]; } Stk3;
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o100_float { char p[0x100]; float v; };
struct o104_float { char p[0x104]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o28_int { char p[0x28]; int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o34_uchar { char p[0x34]; unsigned char v; };
struct o38_float { char p[0x38]; float v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o3A_uchar { char p[0x3A]; unsigned char v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_short { char p[0x4]; short v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o44_int { char p[0x44]; int v; };
struct o44_ushort { char p[0x44]; unsigned short v; };
struct o46_ushort { char p[0x46]; unsigned short v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o5C_uchar { char p[0x5C]; unsigned char v; };
struct o6_short { char p[0x6]; short v; };
struct o60_float { char p[0x60]; float v; };
struct o62_uchar { char p[0x62]; unsigned char v; };
struct o64_float { char p[0x64]; float v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o68_float { char p[0x68]; float v; };
struct o6C_int { char p[0x6C]; int v; };
struct o70_float { char p[0x70]; float v; };
struct o74_uint { char p[0x74]; unsigned int v; };
struct o78_float { char p[0x78]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_int { char p[0x84]; int v; };
struct o84_uint { char p[0x84]; unsigned int v; };
struct o88_int { char p[0x88]; int v; };
struct o90_float { char p[0x90]; float v; };
struct o98_int { char p[0x98]; int v; };
struct oA4_short { char p[0xA4]; short v; };
struct oA6_short { char p[0xA6]; short v; };
struct oA8_short { char p[0xA8]; short v; };
struct oAA_short { char p[0xAA]; short v; };
struct oAC_int { char p[0xAC]; int v; };
struct oB4_float { char p[0xB4]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_float { char p[0xC4]; float v; };
struct oCC_float { char p[0xCC]; float v; };
struct oD0_float { char p[0xD0]; float v; };
struct oD4_int { char p[0xD4]; int v; };
struct oFC_int { char p[0xFC]; int v; };
struct oFC_uint { char p[0xFC]; unsigned int v; };
struct oFE_uchar { char p[0xFE]; unsigned char v; };
int CalcShadow4Normal(int, int);
int Exec_LCD(void);
int FUN_0c01422e(int);
int FUN_0c018b1c(int);
int FUN_0c018b22(int, int);
int FUN_0c01a7a4(void);
int FUN_0c01aa30(void);
int FUN_0c01c568(void);
int FUN_0c01e474(void);
int FUN_0c01e6f0(void);
int FUN_0c02022a(void);
float FUN_0c021040(int, int);
int FUN_0c029528(void);
int FUN_0c029866(int, int, int, float);
int FUN_0c029b12(int, float);
int FUN_0c02bcf8(int);
int FUN_0c02deca(int, int);
int FUN_0c03e52a(void);
int FUN_0c03e5f8(void);
int FUN_0c03e81a(void);
int FUN_0c03f9d0(int, int);
int FUN_0c040bec(int, int);
int FUN_0c0435e2(int, int);
int FUN_0c0438c0(int);
int FUN_0c04b1e6(void);
int FUN_0c04e88e(int);
int FUN_0c04e92c(void);
int FUN_0c057bb4(int);
int FUN_0c058d4e(void);
int FUN_0c05b3d4(int, int);
extern int FUN_0c05cd80();
int FUN_0c05f434(void);
int FUN_0c05f43a(int);
int FUN_0c05f44c(int, int);
int FUN_0c05f470(int, int, float, float);
int FUN_0c05f4c8(int);
int FUN_0c05f6fe(int);
int FUN_0c05f98c(void);
int FUN_0c05f9b0(float);
int FUN_0c05fab8(float, float);
int FUN_0c05fdfc(void);
int FUN_0c06002a(void);
int FUN_0c06017e(void);
int FUN_0c06032a(int);
int FUN_0c061bae(void);
int FUN_0c067b14(int);
int FUN_0c068794(int);
int FUN_0c069e78(int);
int FUN_0c06a14e(void);
int FUN_0c06cbc2(void);
int FUN_0c06e700(int, int, float);
int FUN_0c06f240(void);
int FUN_0c06f940(void);
int FUN_0c06f960(int);
int FUN_0c070080(void);
int FUN_0c070730(float);
float FUN_0c072140(int);
float FUN_0c072148(int);
int FUN_0c072230(int, int);
int FUN_0c072290(int, int);
int FUN_0c073010(void);
int FUN_0c073360(void);
int FUN_0c073a40(int);
int FUN_0c073a60(int);
float FUN_0c073b40(int, int);
int FUN_0c073c40(int, int, float);
float FUN_0c073c60(int);
float FUN_0c073e10(int);
int FUN_0c076130(float);
int FUN_0c076230(float, float, float);
int FUN_0c078810(int, int, int);
int FUN_0c078890(float);
int FUN_0c07ffac(int);
int FUN_0c0800c8(int, int);
int ReflectColliWallBox(int, int, int, int);
int SJUNI_Lock(void);
int SJUNI_Unlock(int, int);
int SJ_SplitChunk(int, int, int);
int SetColliObj(int, int);
int gdc_CoursePointLoadReq(Stk3, float);
int gdc_FadeManStreamSong(void);
int memset(int, int, int);
int nlAddVector(int, int);
int nlArcTan2(float, float);
int nlGetMatrix(int);
int nlGetMatrix33on44(int);
int nlInitMatrixStack(int, int, int);
float nlLength(int, int);
int nlLookAtUp(int, int, int);
int nlMultiMatrix(int);
int nlMultiMatrixRevOrder8(int);
int nlObjPutSetLightDirectionV(int);
int nlObjPutUseViewMatrix(int);
int nlOuterProduct(int, int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlQuickInvertMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlRotateAxe(int, int);
int nlSubVector(int, int);
int nlSubVector3op(int, int, int);
int nlUnitMatrix(void);
float nlUnitVectorsd(int, int);
int paletteUpload(void);
int set_event(int, int);
int strcat(int, int);
void FUN_0c01b026(void);
int FUN_0c06991a(int a4, int a5);
int FUN_0c064766(int a4, int a5, int a6);
int FUN_0c068166(int a4, int a5);
int FUN_0c05b596(int a4, int a5, int a6);
int SJUNI_GetChunk(int a4, int a5, int a6, int a7);
float FUN_0c03052c(int a4);
int FUN_0c041070(int a4, int a5);
void SJUNI_PutChunk(int a4, int a5, int a6, int a7);
int FUN_0c06040a(void);
int FUN_0c06823e(int a4, int a5, int a6, int a7);
int ColliWallTest(void);
int FUN_0c044edc(int a4, int a5, int a6);
int FUN_0c047624(int a4);
int FUN_0c065080(int a4);
void FUN_0c030760(int a4);
int FUN_0c047bda(int a4, int a5, int a6, int a7);
float FUN_0c020dbc(int a4, int a5, int a6, int a7, int a8);
int FUN_0c067718(int a4);
int FUN_0c023650(float f4, float f5, float f6);
int FUN_0c01e01e(int a4);
int FUN_0c05c984(int a4, int a5, float f4);
float FUN_0c05ba98(int a4, int a5, int a6, int a7);
float FUN_0c06c44a(int a4);
int FUN_0c024f94(float f4, float f5, float f6, float f7, float f8, float f9);
int FUN_0c01d3b4(void);
void calcColliCheck(int a4);
int FUN_0c060384(void);
int FUN_0c068f8a(int a4);
int CheckColliWallEdge(int a4, int a5);
int FUN_0c04f224(void);
void FUN_0c05ccce(int a4, int a5, int a6, int a7);
int FUN_0c0297f4(int a4, int a5, float f4);
int FUN_0c0607b2(void);
void FUN_0c067eee(int a4, int a5, float f4);
int SJUNI_IsGetChunk(int a4, int a5, int a6, int a7);
void SetHelicopter(void);
float FUN_0c030a26(int a4, float f4);
int FUN_0c16c338(int a4, int a5, int a6);
void FUN_0c0471c4(int a4, int a5, int a6, int a7);
void FUN_0c05c27a(int a4, int a5, int a6);
int FUN_0c01f95a(void);
int FUN_0c029574(int a4);
int nlInitMatrix(int a4, int a5);
void camSetTarget(int a4, int a5);

void FUN_0c01b026(void)
{
    register int t0;
    register int t1;

    { struct mv13 { int w[13]; }; *(struct mv13 *)(0xC1EC758) = *(struct mv13 *)(0xC11CFC0); }
    { struct mv13 { int w[13]; }; *(struct mv13 *)(0xC1EC78C) = *(struct mv13 *)(0xC11CFC0); }
    { struct mv13 { int w[13]; }; *(struct mv13 *)(0xC1EC7C0) = *(struct mv13 *)(0xC11CFC0); }
    (((struct o28_uint *)0xC1EC718)->v) = 0x0;
    (((struct o2C_uint *)0xC1EC718)->v) = 0x0;
    *(unsigned int *)0xC11CFF8 = 0x0;
    FUN_0c01aa30();
    if ((*(int *)0xC2A4658) == 0) {
        (((struct o38_uint *)0xC1EC718)->v) = 0x0;
        { struct mv13 { int w[13]; }; *(struct mv13 *)(0xC1EC758) = *(struct mv13 *)(0xC11CFC0); }
        { struct mv13 { int w[13]; }; *(struct mv13 *)(0xC1EC78C) = *(struct mv13 *)(0xC11CFC0); }
        { struct mv13 { int w[13]; }; *(struct mv13 *)(0xC1EC7C0) = *(struct mv13 *)(0xC11CFC0); }
        for (;;) {
            FUN_0c01a7a4();
            FUN_0c076230(1.0f, 1.0f, 1.0f);
            FUN_0c03e81a();
            FUN_0c03e52a();
            t0 = *(int *)((((((((struct o28_int *)0xC1EC718)->v)) & 0x7) << 2) + 0xC09739C));
            if (t0 == 0) {
                (((struct o28_uint *)0xC1EC718)->v) = (((((struct o28_int *)0xC1EC718)->v)) + 0x1);
                (((struct o2C_uint *)0xC1EC718)->v) = 0x0;
                FUN_0c03e5f8();
                Exec_LCD();
                FUN_0c057bb4((unsigned char)(*(signed char *)0xC1EC784));
                FUN_0c02022a();
                FUN_0c058d4e();
                FUN_0c06f960(0xC1EC84C);
                *(unsigned int *)0xC1EC83C = ((*(int *)0xC1EC83C) + 0x1);
                if ((int)((((struct o0_int *)0xC1EC718)->v)) > (int)0x3) {
                    FUN_0c01e474();
                    FUN_0c070080();
                    FUN_0c06f240();
                    FUN_0c06f940();
                    paletteUpload();
                    continue;
                }
                FUN_0c070080();
                FUN_0c06f240();
                FUN_0c06f940();
                paletteUpload();
                continue;
            }
            t1 = ((int (*)(void))(t0))();
            FUN_0c03e5f8();
            Exec_LCD();
            FUN_0c057bb4((unsigned char)(*(signed char *)0xC1EC784));
            FUN_0c02022a();
            FUN_0c058d4e();
            FUN_0c06f960(0xC1EC84C);
            *(unsigned int *)0xC1EC83C = ((*(int *)0xC1EC83C) + 0x1);
            if ((int)((((struct o0_int *)0xC1EC718)->v)) > (int)0x3) {
                FUN_0c01e474();
                FUN_0c070080();
                FUN_0c06f240();
                FUN_0c06f940();
                paletteUpload();
                continue;
            }
            FUN_0c070080();
            FUN_0c06f240();
            FUN_0c06f940();
            paletteUpload();
        }
    }
    (((struct o38_uint *)0xC1EC718)->v) = 0x1;
    { struct mv13 { int w[13]; }; *(struct mv13 *)(0xC1EC758) = *(struct mv13 *)(0xC11CFC0); }
    { struct mv13 { int w[13]; }; *(struct mv13 *)(0xC1EC78C) = *(struct mv13 *)(0xC11CFC0); }
    { struct mv13 { int w[13]; }; *(struct mv13 *)(0xC1EC7C0) = *(struct mv13 *)(0xC11CFC0); }
    for (;;) {
        FUN_0c01a7a4();
        FUN_0c076230(1.0f, 1.0f, 1.0f);
        FUN_0c03e81a();
        FUN_0c03e52a();
        t0 = *(int *)((((((((struct o28_int *)0xC1EC718)->v)) & 0x7) << 2) + 0xC09739C));
        if (t0 == 0) {
            (((struct o28_uint *)0xC1EC718)->v) = (((((struct o28_int *)0xC1EC718)->v)) + 0x1);
            (((struct o2C_uint *)0xC1EC718)->v) = 0x0;
            FUN_0c03e5f8();
            Exec_LCD();
            FUN_0c057bb4((unsigned char)(*(signed char *)0xC1EC784));
            FUN_0c02022a();
            FUN_0c058d4e();
            FUN_0c06f960(0xC1EC84C);
            *(unsigned int *)0xC1EC83C = ((*(int *)0xC1EC83C) + 0x1);
            if ((int)((((struct o0_int *)0xC1EC718)->v)) > (int)0x3) {
                FUN_0c01e474();
                FUN_0c070080();
                FUN_0c06f240();
                FUN_0c06f940();
                paletteUpload();
                continue;
            }
            FUN_0c070080();
            FUN_0c06f240();
            FUN_0c06f940();
            paletteUpload();
            continue;
        }
        t1 = ((int (*)(void))(t0))();
        FUN_0c03e5f8();
        Exec_LCD();
        FUN_0c057bb4((unsigned char)(*(signed char *)0xC1EC784));
        FUN_0c02022a();
        FUN_0c058d4e();
        FUN_0c06f960(0xC1EC84C);
        *(unsigned int *)0xC1EC83C = ((*(int *)0xC1EC83C) + 0x1);
        if ((int)((((struct o0_int *)0xC1EC718)->v)) > (int)0x3) {
            FUN_0c01e474();
            FUN_0c070080();
            FUN_0c06f240();
            FUN_0c06f940();
            paletteUpload();
            continue;
        }
        FUN_0c070080();
        FUN_0c06f240();
        FUN_0c06f940();
        paletteUpload();
    }
}

int FUN_0c06991a(int a4, int a5)
{
    int stk[6];
    register int t8;
    register int t25;
    register int t28;
    register int t29;
    register int t15;
    register int t19;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    int t7;
    register int t24;

    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0xC)) = *(struct mv3 *)(a5); }
    FUN_0c073360();
    t8 = 0x0;
    for (;;) {
        if ((int)t8 >= (int)(*(int *)((a4 + 0x4)))) {
            break;
        }
        t25 = t7;
        t28 = t3;
        t29 = t4;
        if (t8 != 0) {
            t6 = 0xC1EC740;
            t7 = 0xC110374;
            t4 = (*(int *)((t7 + ((*(int *)((t6 + 0x0))) << 2))));
            t1 = (((int (*)(void))(t4))());
            t2 = 0xC07FC48;
            t3 = 0xC073C40;
            t15 = (int)((int)t1 % (int)0x5);
            t2 = t15;
            FUN_0c073c40(((int)stk + 0), 0xC10D9C8, ((float)((t15 << 2) + t2) + ((*(float *)0xC069AA0))));
            t5 = (*(int *)((t7 + ((*(int *)((t6 + 0x0))) << 2))));
            t19 = ((int (*)(void))(t5))();
            t7 = 0x1FFF;
            t6 = 0x4000;
            t5 = t19;
            t4 = 0xC073650;
            nlRotateAY(((t19 & t7) + t6));
            t7 = 0xC072290;
            FUN_0c072290(((int)stk + 0), ((int)stk + 0));
            t7 = 0xC073AD0;
            nlAddVector((((int)stk + 0) + 0xC), ((int)stk + 0));
            t25 = 0xC073AD0;
            t28 = 0xC073C40;
            t29 = 0xC073650;
        } else {
            t24 = t1;
        }
        t1 = t24;
        t7 = t25;
        t2 = (*(int *)((a4 + 0x0)));
        t3 = t28;
        t4 = t29;
        t1 = t8;
        t1 = (t1 << 8);
        t1 = (t1 + t2);
        t2 = 0xC07FF00;
        t1 = (t1 + 0x70);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(t1) = *(struct mv3 *)((((int)stk + 0) + 0xC)); }
        t8 = (t8 + 0x1);
    }
    return (nlPopMatrix(0x1));
}

int FUN_0c064766(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    FUN_0c05b3d4(a4, 0x100);
    FUN_0c05f44c(a4, a5);
    FUN_0c05f470(a4, 0xC8D6458, 0.0f, 0.0f);
    *(unsigned int *)((a4 + 0xC)) = 0x1;
    *(unsigned int *)((a4 + 0x3C)) = ((*(int *)((a4 + 0x3C))) | 0x80000000);
    { struct mv16 { int w[16]; }; *(struct mv16 *)((a4 + 0x40)) = *(struct mv16 *)(0xC147388); }
    t0 = FUN_0c029b12(a6, 18.0f);
    if ((*(int *)((t0 + 0x1C))) != -1) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x70)) = *(struct mv3 *)(t0); }
        if ((*(int *)((t0 + 0x1C))) == 14) {
            (((struct oFE_uchar *)(a4))->v) = ((*(signed char *)(((0xFE + a4) + 0x0))) | 0x8);
        }
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x70)) = *(struct mv3 *)(a6); }
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x90 + a4)) = *(struct mv3 *)(0xC10D9E0); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xE8 + a4)) = *(struct mv3 *)(a6); }
    t0 = 0x1;
    if (((*(int *)(((((a5 - 35) << 2) + 0xC10E5D0) + 0x0))) & 0x1) != 0) {
        t0 = 0x0;
    }
    (((struct oFC_uint *)(a4))->v) = ((((((struct oFC_int *)(a4))->v)) & 0xFFDFFFFF) | ((unsigned int)((int)((unsigned int)t0 & 0x1)) << 21));
    t0 = 0x0;
    if (((*(int *)(((((a5 - 35) << 2) + 0xC10E5D0) + 0x0))) & 2) != 0) {
        t0 = 0x1;
    }
    t1 = (int)((unsigned int)t0 & 0x1);
    (((struct oFC_uint *)(a4))->v) = ((((((struct oFC_int *)(a4))->v)) & 0xFFEFFFFF) | ((unsigned int)t1 << 20));
    return t1;
}

int FUN_0c068166(int a4, int a5)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;

    t0 = FUN_0c029b12(a5, 18.0f);
    t1 = (((struct oAC_int *)(a4))->v);
    u0 = 3.40282347e+38f;
    if ((*(int *)((t0 + 0x1C))) != -1) {
        u1 = (((struct o4_float *)(a5))->v);
        u2 = (((struct o4_float *)(t0))->v);
        _builtin_fabsf((u1 - u2));
        u0 = _builtin_fabsf((u1 - u2));
    }
    if ((*(int *)((t1 + 0xC))) != 3) {
        t1 = *(signed char *)((a4 + 0xFE));
        if ((t1 & 64) != 0) {
            if (!(18.0f > u0)) {
                (((struct o70_float *)(a4))->v) = (*(float *)((a5 + 0x0)));
                (((struct o78_float *)(a4))->v) = ((((struct o8_float *)(a5))->v));
                return 0x78;
            }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x70)) = *(struct mv3 *)(t0); }
            return CalcShadow4Normal((0x90 + a4), (t0 + 0xC));
        }
        if (18.0f > u0) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x70)) = *(struct mv3 *)(t0); }
            return CalcShadow4Normal((0x90 + a4), (t0 + 0xC));
        }
        return t1;
    }
    if (!(18.0f > u0)) {
        (((struct o70_float *)(a4))->v) = (*(float *)((a5 + 0x0)));
        (((struct o78_float *)(a4))->v) = ((((struct o8_float *)(a5))->v));
        return 0x78;
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x70)) = *(struct mv3 *)(t0); }
    return CalcShadow4Normal((0x90 + a4), (t0 + 0xC));
}

int FUN_0c05b596(int a4, int a5, int a6)
{
    int stk[7];
    register float t0;
    register float u7;

    *(unsigned int *)(((int)stk + 0)) = a5;
    t0 = FUN_0c073b40(a4, a6);
    if (t0 == 0.0f) {
        *(float *)(((int)stk + 24)) = 3.40282347e+38f;
        *(float *)(((int)stk + 20)) = 3.40282347e+38f;
        *(float *)(((int)stk + 16)) = 3.40282347e+38f;
        u7 = 3.40282347e+38f;
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x4)) = *(struct mv3 *)((*(int *)(((int)stk + 0)))); }
        FUN_0c06e700((((int)stk + 0) + 0x4), a6, 0.219999999f);
        FUN_0c073c40((((int)stk + 0) + 0x10), a6, (1.0f / t0));
        u7 = ((FUN_0c073b40((((int)stk + 0) + 0x4), a6)) / t0);
    }
    FUN_0c073c40(0xC136818, a4, (-(*(float *)(((int)stk + 16)))));
    FUN_0c073c40(0xC136828, a4, (-(*(float *)(((int)stk + 20)))));
    FUN_0c073c40(0xC136838, a4, (-(*(float *)(((int)stk + 24)))));
    FUN_0c073c40(0xC136848, a4, u7);
    (((struct o0_float *)0xC136818)->v) = (((((struct o0_float *)0xC136818)->v)) + 1.0f);
    (((struct o14_float *)0xC136818)->v) = (((((struct o14_float *)0xC136818)->v)) + 1.0f);
    (((struct o28_float *)0xC136818)->v) = (((((struct o28_float *)0xC136818)->v)) + 1.0f);
    return (nlMultiMatrixRevOrder8(0xC136818));
}

int SJUNI_GetChunk(int a4, int a5, int a6, int a7)
{
    int stk[11];
    register int t3;
    register int t39;

    *(unsigned int *)(((int)stk + 0)) = a6;
    if (((int)a5 >= 0) && ((int)a5 < (int)0x4)) {
        *(unsigned int *)(((int)stk + 4)) = (SJUNI_Lock());
        t3 = *(int *)((((a4 + 0x18) + (a5 << 2)) + 0x0));
        if (t3 != 0) {
            { struct mv2 { int w[2]; }; *(struct mv2 *)((((int)stk + 0) + 0x10)) = *(struct mv2 *)((t3 + 0x8)); }
            if ((int)(*(int *)(((int)stk + 20))) <= (int)(*(int *)(((int)stk + 0)))) {
                { struct mv2 { int w[2]; }; *(struct mv2 *)(a7) = *(struct mv2 *)((((int)stk + 0) + 0x10)); }
                *(unsigned int *)((((a5 << 2) + (a4 + 0x18)) + 0x0)) = (*(int *)((t3 + 0x0)));
                *(unsigned int *)((t3 + 0x0)) = (*(int *)((a4 + 0x14)));
                *(unsigned int *)((a4 + 0x14)) = t3;
            } else {
                if ((*(signed char *)((a4 + 0x5))) == 1) {
                    SJ_SplitChunk((((int)stk + 0) + 0x10), (*(int *)(((int)stk + 0))), (((int)stk + 0) + 0x10));
                    { struct mv2 { int w[2]; }; *(struct mv2 *)(a7) = *(struct mv2 *)((((int)stk + 0) + 0x10)); }
                    { struct mv2 { int w[2]; }; *(struct mv2 *)((t3 + 0x8)) = *(struct mv2 *)((((int)stk + 0) + 0x8)); }
                } else {
                    *(unsigned int *)((a7 + 0x0)) = 0x0;
                    *(unsigned int *)((a7 + 0x4)) = 0x0;
                }
            }
        } else {
            *(unsigned int *)((a7 + 0x0)) = 0x0;
            *(unsigned int *)((a7 + 0x4)) = 0x0;
        }
        t39 = (SJUNI_Unlock(a4, (*(int *)(((int)stk + 4)))));
    } else {
        if ((*(int *)((a4 + 0x28))) != 0) {
            t39 = (((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)((a4 + 0x28)))))((*(int *)((a4 + 0x2C))), 0xFFFFFFFD, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
        }
        *(unsigned int *)((a7 + 0x0)) = 0x0;
        *(unsigned int *)((a7 + 0x4)) = 0x0;
    }
    return t39;
}

float FUN_0c03052c(int a4)
{
    int stk[3];
    register int t15;

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R13;
    register float F2;
    register float F3;
    register float F4;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    v0_1 = a4;
    w0_1 = nlLength((v0_1 + 0xC), (v0_1 + 0x58));
    v0_0 = (v0_1);
    w0_0 = (w0_1);
    if ((w0_1 > (1.0f + 1.0f))) goto L_C030554;
    w0_1 = (((struct o40_float *)(v0_0))->v);
    v0_1 = (0x40);
    w0_2 = (w0_1);
    if ((!(0.699999988f > w0_1))) goto L_C0305DC;
    L_C030554:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x58)) = *(struct mv3 *)((v0_0 + 0xC)); }
    v0_2 = set_event(0x84, 0xC0300D8);
    v0_1 = (v0_2);
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C0305EA;
    v0_2 = v0_0;
    v0_3 = (v0_1 + 0x14);
    for (;;) { t15 = *(int *)v0_2; v0_2 = (v0_2 + 4); if ((unsigned int)((v0_0 + 112)) < (unsigned int)v0_2) break; *(unsigned int *)v0_3 = t15; v0_3 = (v0_3 + 4); }
    FUN_0c073c40(((int)stk + 0), ((v0_1 + 0x14) + 0x3C), -8.0f);
    nlAddVector((v0_1 + 0x14), ((int)stk + 0));
    *(unsigned int *)(((v0_1 + 0x14) + 0x28)) = ((v0_1 + 0x14) + 0x30);
    (((struct o54_uint *)((v0_1 + 0x14)))->v) = 0xC1296F8;
    (((struct o64_uint *)((v0_1 + 0x14)))->v) = (*(int *)((((((struct o0_int *)0xC129CD4)->v)) + 0x0)));
    SetColliObj((v0_1 + 0x14), 0x15);
    FUN_0c073c40(((int)stk + 0), (v0_0 + 0x3C), 11.0f);
    nlAddVector(v0_0, ((int)stk + 0));
    (((struct o54_uint *)(v0_0))->v) = 0xC1297AC;
    (((struct o64_uint *)(v0_0))->v) = (*(int *)((((((struct o14_int *)0xC129CD4)->v)) + 0x0)));
    v0_1 = (0x64);
    L_C0305EA:;
    return w0_0;
    L_C0305DC:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x58)) = *(struct mv3 *)((v0_0 + 0xC)); }
    goto L_C0305EA;
}

int FUN_0c041070(int a4, int a5)
{
    int stk[4];
    register int t15;
    register int t18;
    register int t21;
    register int t24;

    *(unsigned int *)(((int)stk + 0)) = a5;
    FUN_0c073360();
    nlRotateAZ((-(unsigned short)((((struct oA8_short *)(a4))->v))));
    nlRotateAX((-(unsigned short)((((struct oA4_short *)(a4))->v))));
    nlRotateAY((-(unsigned short)((((struct oA6_short *)(a4))->v))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x4)) = *(struct mv3 *)((0xE0 + a4)); }
    nlSubVector((((int)stk + 0) + 0x4), (0x8C + a4));
    FUN_0c072290((((int)stk + 0) + 0x4), (((int)stk + 0) + 0x4));
    nlPopMatrix(0x1);
    *(unsigned int *)(((*(int *)(((int)stk + 0))) + 0x0)) = (short)(nlArcTan2((*(float *)(((int)stk + 4))), (*(float *)(((int)stk + 12)))));
    t15 = *(int *)(((*(int *)(((int)stk + 0))) + 0x0));
    t18 = 0xFFFFEC00;
    if ((int)(int)((float)t15 * 0.600000024f) < (int)0xFFFFEC00) {
    } else {
        t18 = (int)((float)t15 * 0.600000024f);
        if ((int)(int)((float)t15 * 0.600000024f) > (int)0x1400) {
            t18 = 0x1400;
        }
    }
    t21 = (((struct oC0_int *)(a4))->v);
    t24 = 0xFFFFFFC0;
    if ((int)(int)((float)(t18 - t21) * 0.400000006f) < (int)0xFFFFFFC0) {
    } else {
        t24 = (int)((float)(t18 - t21) * 0.400000006f);
        if ((int)(int)((float)(t18 - t21) * 0.400000006f) > (int)0x40) {
            t24 = 0x40;
        }
    }
    return t24;
}

void SJUNI_PutChunk(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;

    if (((int)a5 >= 0) && ((int)a5 < (int)0x4)) {
        if (((int)(*(int *)((a6 + 0x4))) > 0) && (t0 = *(int *)((a6 + 0x0)), t0 != 0)) {
            t0 = SJUNI_Lock();
            t5 = ((a5 << 2) + (a4 + 0x18));
            t6 = 0x0;
            t7 = t1;
            for (;;) {
                if ((*(int *)((t5 + 0x0))) == 0) {
                    break;
                }
                t7 = (*(int *)((t5 + 0x0)));
                t5 = t7;
                t6 = t7;
            }
            if (((*(signed char *)((a4 + 0x5))) == 1) && ((t6 != 0) && (t2 = *(int *)((t6 + 0x8)), t3 = *(int *)((t6 + 0xC)), t4 = *(int *)((a6 + 0x0)), (t2 + t3) == t4))) {
                *(unsigned int *)((t6 + 0xC)) = ((*(int *)((t6 + 0xC))) + (*(int *)((a6 + 0x4))));
            } else {
                t1 = *(int *)((a4 + 0x14));
                if (t1 == 0) {
                    if ((*(int *)((a4 + 0x28))) != 0) {
                        t2 = ((int (*)(int, int, int, int))((*(int *)((a4 + 0x28)))))((*(int *)((a4 + 0x2C))), 0xFFFFFFFD, t7, 0x0);
                    }
                } else {
                    *(unsigned int *)((a4 + 0x14)) = (*(int *)((t1 + 0x0)));
                    *(unsigned int *)((t1 + 0x0)) = 0x0;
                    { struct mv2 { int w[2]; }; *(struct mv2 *)((t1 + 0x8)) = *(struct mv2 *)(a6); }
                    *(unsigned int *)((t5 + 0x0)) = t1;
                }
            }
            SJUNI_Unlock(a4, t0);
    return;
        }
        return;
    }
    if ((*(int *)((a4 + 0x28))) != 0) {
        ((int (*)(int, int, int, int))((*(int *)((a4 + 0x28)))))((*(int *)((a4 + 0x2C))), 0xFFFFFFFD, a6, a7);
    return;
    }
}

int FUN_0c06040a(void)
{
    int stk[2];
    register int t2;
    register int t3;
    register float u7;
    register int t9;
    register float u10;
    register float u16;
    register float u13;
    register float u11;
    register int t23;

    { struct mv2 { int w[2]; }; *(struct mv2 *)(((int)stk + 0)) = *(struct mv2 *)(0xC10E868); }
    t2 = ((int (*)(void))((*(int *)(((((*(int *)0xC2B9CA0) << 2) + ((int)stk + 0)) + 0x0)))))();
    t3 = *(int *)0xC175C80;
    if ((int)t3 < (int)0x8) {
        t23 = (FUN_0c05f98c());
    } else {
        if ((int)t3 < (int)0x10) {
            FUN_0c05f98c();
            t23 = (FUN_0c05f9b0(0.0f));
        } else {
            u7 = *(float *)0xC060588;
            t9 = *(int *)((((((struct o0_int *)0xC2B9C1C)->v)) + 0x0));
            u10 = (((struct o4_float *)0xC2B9C1C)->v);
            u16 = 0.0f;
            if (((u10 - (float)t9) + u7) > 0.0f) {
                u13 = 0.0f;
                if (!(0.0f > (((u10 - (float)t9) + u7) / u7))) {
                    u11 = (((u10 - (float)t9) + u7) / u7);
                    if ((((u10 - (float)t9) + u7) / u7) > 1.0f) {
                        u11 = 1.0f;
                    }
                    u13 = u11;
                }
                u16 = u13;
            }
            t23 = (FUN_0c05fab8(u16, u16));
        }
    }
    return t23;
}

int FUN_0c06823e(int a4, int a5, int a6, int a7)
{
    int stk[11];
    register float t1;
    register float t10;
    register int t14;
    register float t16;
    register int t17;

    *(unsigned int *)(((int)stk + 0)) = a6;
    *(unsigned int *)(((int)stk + 4)) = a7;
    nlSubVector3op((((int)stk + 0) + 0x20), a5, (a4 + 0x70));
    t1 = FUN_0c073e10((((int)stk + 0) + 0x20));
    if ((*(float *)0xC068364) > t1) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x20)) = *(struct mv3 *)(0xC10DA04); }
    }
    *(float *)(((int)stk + 20)) = (-((((struct o60_float *)(a4))->v)));
    *(float *)(((int)stk + 24)) = (-((((struct o64_float *)(a4))->v)));
    *(float *)(((int)stk + 28)) = (-((((struct o68_float *)(a4))->v)));
    t10 = FUN_0c073b40((((int)stk + 0) + 0x20), (((int)stk + 0) + 0x14));
    t14 = (int)((int)((FUN_0c070730(t10)) * (*(int *)(((int)stk + 0)))) / (int)(*(int *)(((int)stk + 4))));
    nlOuterProduct((((int)stk + 0) + 0x20), 0xC10D9E0, (((int)stk + 0) + 0x8));
    t16 = FUN_0c073b40((((int)stk + 0) + 0x14), (((int)stk + 0) + 0x8));
    t17 = t14;
    if (0.0f > t16) {
        t17 = (-t14);
    }
    FUN_0c073360();
    nlRotateAY(t17);
    nlMultiMatrix((a4 + 0x40));
    nlGetMatrix33on44((a4 + 0x40));
    return (nlPopMatrix(0x1));
}

int ColliWallTest(void)
{
    int stk[5];

    *(float *)(((int)stk + 12)) = (FUN_0c072148(((((struct o10_int *)0xC129464)->v))));
    *(float *)(((int)stk + 16)) = (FUN_0c072140(((((struct o10_int *)0xC129464)->v))));
    (((struct o0_float *)0xC1294A8)->v) = ((((struct o0_float *)0xC129464)->v));
    (((struct o4_float *)0xC1294A8)->v) = 0.0f;
    (((struct o8_float *)0xC1294A8)->v) = ((((struct o4_float *)0xC129464)->v));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC129490) = *(struct mv3 *)(0xC0A2D08); }
    FUN_0c078890(3.0f);
    FUN_0c073c40(((int)stk + 0), 0xC1294A8, 100.0f);
    FUN_0c078810(0xC0A2D08, ((int)stk + 0), 0xFFFF7F7F);
    *(float *)(((int)stk + 0)) = ((*(float *)(((int)stk + 12))) * 10.0f);
    *(float *)(((int)stk + 4)) = 0.0f;
    *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 16))) * 10.0f);
    FUN_0c078810(0xC0A2D08, ((int)stk + 0), 0xFF7FFFFF);
    ReflectColliWallBox(0xC12949C, 0xC12946C, (((int)stk + 0) + 0xC), 0x0);
    FUN_0c073c40(((int)stk + 0), 0xC1294A8, 100.0f);
    FUN_0c078810(0xC0A2D08, ((int)stk + 0), 0xFFFF7FFF);
    FUN_0c073c40(((int)stk + 0), 0xC129490, 100000.0f);
    return (FUN_0c078810(0xC0A2D08, ((int)stk + 0), 0xFF7FFF7F));
}

int FUN_0c044edc(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;

    t0 = set_event(0x12C, 0xC045284);
    if (t0 != 0) {
        t1 = *(int *)0xC2A59C0;
        *(unsigned int *)0xC2A59C0 = (t1 + 0x1);
        (((struct o74_uint *)(t0))->v) = ((t1 + 0x1) - 1);
        *(unsigned int *)0xC2AB7EC = ((*(int *)0xC2AB7EC) + 0x1);
        (((struct o78_uint *)(t0))->v) = a4;
        (((struct o80_uint *)(t0))->v) = a5;
        if (a6 == 0) {
            t1 = (((struct o80_int *)(t0))->v);
            t2 = *(int *)0xC2ADA7C;
            t3 = *(int *)(((*(int *)((((((t1 << 1) + t1) << 2) + t2) + 0x4))) + 0x0));
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x8C + t0)) = *(struct mv3 *)((((((t3 << 1) + t3) << 2) + (*(int *)((((((t1 << 1) + t1) << 2) + t2) + 0x0)))) - 120)); }
        } else {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x8C + t0)) = *(struct mv3 *)(a6); }
        }
        FUN_0c0438c0(t0);
        u0 = ((((struct o4_float *)0xC04500C)->v));
        u0 = u0 + ((((struct o8_float *)0xC04500C)->v)) * ((((((struct o0_float *)0xC04500C)->v)) / ((((struct oB4_float *)(t0))->v))));
        (((struct oD0_float *)(t0))->v) = u0;
        FUN_0c03f9d0(((((struct o80_int *)(t0))->v)), ((((struct oD4_int *)(t0))->v)));
        FUN_0c0435e2(t0, ((((struct o84_int *)(t0))->v)));
    }
    return t0;
}

int FUN_0c047624(int a4)
{
    int t0;

    (((struct o0_uint *)0xC12D2A0)->v) = a4;
    if ((a4 != 1) && ((a4 != 2) && (a4 != 3))) {
        t0 = (((struct o8_int *)0xC1EC71C)->v);
        if ((t0 != 14) && (t0 != 15)) {
            (((struct o4_uint *)0xC12D2A0)->v) = 0x1C20;
        } else {
            (((struct o4_uint *)0xC12D2A0)->v) = 0x6270;
        }
    } else {
        (((struct o4_uint *)0xC12D2A0)->v) = 0x1518;
    }
    if (((((struct o0_int *)0xC1EC71C)->v)) == 0) {
        (((struct o0_uint *)0xC2ADA64)->v) = 0xC0C36A0;
        (((struct o4_uint *)0xC2ADA64)->v) = 0xC12F748;
        t0 = (int)((int)(*(int *)0xC175C80) / (int)0x8);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC12F8EC) = *(struct mv3 *)((0xC0F33AC + (((t0 << 1) + t0) << 2))); }
    } else {
        (((struct o0_uint *)0xC2ADA64)->v) = 0xC0DB3E0;
        (((struct o4_uint *)0xC2ADA64)->v) = 0xC12F8F8;
        t0 = (int)((int)(*(int *)0xC175C80) / (int)0x8);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC12FA9C) = *(struct mv3 *)((0xC0F33D0 + (((t0 << 1) + t0) << 2))); }
    }
    if ((*(int *)0xC2AC2F0) == 0) {
        *(unsigned int *)0xC2AC5DC = 0x0;
    }
    return 0xC2AC2F0;
}

int FUN_0c065080(int a4)
{
    int stk[25];
    register int t0;
    register int t20;
    register int t11;
    register int t12;

    { struct mv8 { int w[8]; }; *(struct mv8 *)((((int)stk + 0) + 0x44)) = *(struct mv8 *)(0xC10FB14); }
    { struct mv4 { int w[4]; }; *(struct mv4 *)((((int)stk + 0) + 0x34)) = *(struct mv4 *)(0xC10FB34); }
    { struct mv7 { int w[7]; }; *(struct mv7 *)((((int)stk + 0) + 0x18)) = *(struct mv7 *)(0xC10FB44); }
    *(unsigned int *)(((int)stk + 0)) = 0x7;
    { struct mv5 { int w[5]; }; *(struct mv5 *)((((int)stk + 0) + 0x4)) = *(struct mv5 *)(0xC10FB60); }
    t0 = (((struct o80_int *)(a4))->v);
    if (t0 != 2) {
        t11 = (((int)stk + 0) + 0x4);
        t12 = 0x5;
        if (t0 != 3) {
            t11 = (((int)stk + 0) + 0x34);
            t12 = 0x4;
            if (((*(signed char *)((a4 + 0xFE))) & 32) != 0) {
                t11 = (((int)stk + 0) + 0x44);
                t12 = 0x8;
            }
        }
    } else {
        t11 = (((int)stk + 0) + 0x18);
        t12 = (*(int *)(((int)stk + 0)));
    }
    *(unsigned int *)(((int)stk + 0)) = (((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)((((*(int *)0xC1EC740) << 2) + 0xC110374)))))(0x8, 0x4, (((int)stk + 0) + 0x4), 0x5, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
    t20 = FUN_0c05f470(a4, (*(int *)((t11 + (((int)((int)(*(int *)(((int)stk + 0))) % (int)t12)) << 2)))), 0.0f, 15.0f);
    *(unsigned int *)((a4 + 0xC)) = 0x1;
    return t20;
}

void FUN_0c030760(int a4)
{
    int stk[6];
    register float t0;
    register int t1;
    register int t2;
    register int t4;
    register int t5;

    t0 = nlLength((a4 + 0xC), (a4 + 0x58));
    if (t0 > (1.0f + 1.0f)) {
        t1 = set_event(0x84, 0xC0300D8);
        if (t1 != 0) {
            t2 = a4;
            t4 = (t1 + 0x14);
            for (;;) { t5 = *(int *)t2; t2 = (t2 + 4); if ((unsigned int)((a4 + 112)) < (unsigned int)t2) break; *(unsigned int *)t4 = t5; t4 = (t4 + 4); }
            FUN_0c073c40((((int)stk + 0) + 0xC), ((t1 + 0x14) + 0x3C), 8.0f);
            nlAddVector((t1 + 0x14), (((int)stk + 0) + 0xC));
            *(unsigned int *)(((t1 + 0x14) + 0x28)) = ((t1 + 0x14) + 0x30);
            (((struct o54_uint *)((t1 + 0x14)))->v) = 0xC129A58;
            (((struct o64_uint *)((t1 + 0x14)))->v) = (*(int *)((((((struct o0_int *)0xC129D34)->v)) + 0x0)));
            SetColliObj((t1 + 0x14), 0x15);
            FUN_0c073c40((((int)stk + 0) + 0xC), ((t1 + 0x14) + 0x3C), -8.0f);
            nlAddVector(a4, (((int)stk + 0) + 0xC));
            (((struct o54_uint *)(a4))->v) = 0xC129A7C;
            (((struct o64_uint *)(a4))->v) = (*(int *)((((((struct o4_int *)0xC129D34)->v)) + 0x0)));
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x58)) = *(struct mv3 *)((a4 + 0xC)); }
    }
}

int FUN_0c047bda(int a4, int a5, int a6, int a7)
{
    register int t18;
    register int t19;

    t18 = 0xC12D2B8;
    t19 = 0x5A;
    if (a4 == 1) {
    } else {
        t18 = 0xC12DF60;
        t19 = 0x5A;
        if (a4 == 2) {
        } else {
            t18 = a4;
            t19 = a7;
            if (a4 == 3) {
                t18 = 0xC12F1A8;
                if ((*(int *)0xC1EC71C) == 0) {
                    t18 = 0xC12EC08;
                }
                t19 = 0x28;
            }
        }
    }
    if ((int)a5 > (int)t19) {
        return 0x0;
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(a6) = *(struct mv3 *)(((((*(int *)(((((((a5 << 2) << 1) + a5) << 2) + t18) + 0x8))) * 0x3D0) + (*(int *)0xC2ADA64)) + 0x80)); }
    return 0x1;
}

float FUN_0c020dbc(int a4, int a5, int a6, int a7, int a8)
{
    int stk[7];

    register int R1;
    register int R2;
    register int R3;
    register float F0;
    register float F2;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    v0_3 = a4;
    v0_0 = a5;
    v0_1 = a6;
    v0_2 = a7;
    *(unsigned int *)(((int)stk + 4)) = v0_0;
    *(unsigned int *)(((int)stk + 0)) = v0_1;
    *(unsigned int *)(((int)stk + 8)) = v0_2;
    w0_0 = (((struct o0_float *)0xC020F1C)->v);
    v0_1 = (((struct o0_int *)0xC27091C)->v);
    *(unsigned int *)(((*(int *)(((int)stk + 0))) + 0x0)) = 0xFFFFFFFF;
    *(unsigned int *)(((int)stk + 12)) = (((a8 == 0)) ? 1 : 0);
    v0_7 = ((((a8 == 0)) ? 1 : 0));
    v0_0 = (0x0);
    v0_1 = (v0_1);
    v0_2 = (0x0);
    v0_3 = (v0_3);
    w0_0 = (w0_0);
    L_C020E4C:;
    if (((int)v0_0 < (int)((((struct o4_int *)0xC27091C)->v)))) goto L_C020DF6;
    return w0_0;
    L_C020DF6:;
    if (((*(int *)((v0_1 + 0x0))) == 0)) goto L_C020E48;
    v0_7 = *(int *)(((*(int *)((v0_1 + 0x4))) + 0x0));
    v0_4 = (v0_7);
    v0_5 = (v0_2);
    v0_6 = ((*(int *)((v0_1 + 0x0))));
    if (((int)v0_7 <= 0)) goto L_C020E48;
    L_C020E08:;
    if (((*(int *)(((int)stk + 12))) != 0)) goto L_C020E1E;
    v0_7 = (0xC020F20);
    if ((!(((((struct o4_float *)0xC020F1C)->v)) > (((((struct o4_float *)(v0_6))->v)) - ((((struct o4_float *)(v0_3))->v)))))) goto L_C020E40;
    L_C020E1E:;
    w0_1 = nlLength(v0_3, v0_6);
    w0_2 = (w0_1);
    if ((!(w0_0 > w0_1))) goto L_C020E40;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((*(int *)(((int)stk + 4)))) = *(struct mv3 *)(v0_6); }
    *(unsigned int *)(((*(int *)(((int)stk + 0))) + 0x0)) = v0_0;
    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x0)) = v0_5;
    w0_0 = (w0_2);
    L_C020E40:;
    v0_7 = (int)(v0_5 + 0x1) < (int)v0_4;
    v0_5 = ((v0_5 + 0x1));
    v0_6 = ((v0_6 + 0xC));
    if (v0_7) goto L_C020E08;
    L_C020E48:;
    v0_0 = ((v0_0 + 0x1));
    v0_1 = ((v0_1 + 0xC));
    goto L_C020E4C;
}

int FUN_0c067718(int a4)
{
    int stk[4];
    register int t0;
    register int t18;
    register int t19;

    t0 = (((struct oAC_int *)(a4))->v);
    if (((*(signed char *)((a4 + 0xFF))) & 2) != 0) {
        *(unsigned int *)((a4 + 0x34)) = 0xC067898;
    }
    nlPushMatrix(0xC17596C);
    nlMultiMatrix((a4 + 0x40));
    FUN_0c05f4c8(a4);
    nlPopMatrix(0x1);
    if (((*(signed char *)((a4 + 0xFF))) & 64) != 0) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x34)) = *(struct mv3 *)(((FUN_0c05f434()) + 0x30)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((0xB0 + (FUN_0c05f434()))); }
        FUN_0c068794(t0);
    }
    if (((*(signed char *)((a4 + 0xFF))) & 1) != 0) {
        FUN_0c067b14(a4);
    }
    t18 = *(signed char *)((a4 + 0xFE));
    if ((t18 & 8) != 0) {
        t19 = FUN_0c05f434();
        nlPushMatrix((0x80 + t19));
        nlObjPutUseViewMatrix(0xC3BC430);
        return nlPopMatrix(0x1);
    }
    return t18;
}

int FUN_0c023650(float f4, float f5, float f6)
{
    register int t0;
    register int t25;

    t0 = set_event(0x6C, 0xC023718);
    t25 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x14)) = 0x0;
        (((struct o1C_float *)(t0))->v) = f4;
        (((struct o20_float *)(t0))->v) = f5;
        (((struct o24_float *)(t0))->v) = f6;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)(0xC09741C); }
        (((struct o34_uchar *)(t0))->v) = (*(signed char *)0xC097434);
        *(unsigned char *)(((t0 + 0x34) + 0x1)) = (*(signed char *)0xC097435);
        *(unsigned char *)(((t0 + 0x34) + 0x2)) = (*(signed char *)0xC097436);
        *(unsigned char *)(((t0 + 0x34) + 0x3)) = (*(signed char *)0xC097437);
        *(unsigned char *)(((t0 + 0x34) + 0x4)) = (*(signed char *)0xC097438);
        *(unsigned char *)(((t0 + 0x34) + 0x5)) = (*(signed char *)0xC097439);
        (((struct o3A_uchar *)(t0))->v) = (*(signed char *)0xC097434);
        *(unsigned char *)(((t0 + 0x3A) + 0x1)) = (*(signed char *)0xC097435);
        *(unsigned char *)(((t0 + 0x3A) + 0x2)) = (*(signed char *)0xC097436);
        *(unsigned char *)(((t0 + 0x3A) + 0x3)) = (*(signed char *)0xC097437);
        *(unsigned char *)(((t0 + 0x3A) + 0x4)) = (*(signed char *)0xC097438);
        *(unsigned char *)(((t0 + 0x3A) + 0x5)) = (*(signed char *)0xC097439);
        (((struct o40_float *)(t0))->v) = 30.0f;
        *(unsigned int *)((t0 + 0x18)) = 0x0;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x44)) = *(struct mv3 *)(0xC09741C); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x50)) = *(struct mv3 *)(0xC09741C); }
        (((struct o5C_uchar *)(t0))->v) = (*(signed char *)0xC097434);
        *(unsigned char *)(((t0 + 0x5C) + 0x1)) = (*(signed char *)0xC097435);
        *(unsigned char *)(((t0 + 0x5C) + 0x2)) = (*(signed char *)0xC097436);
        *(unsigned char *)(((t0 + 0x5C) + 0x3)) = (*(signed char *)0xC097437);
        *(unsigned char *)(((t0 + 0x5C) + 0x4)) = (*(signed char *)0xC097438);
        *(unsigned char *)(((t0 + 0x5C) + 0x5)) = (*(signed char *)0xC097439);
        (((struct o62_uchar *)(t0))->v) = (*(signed char *)0xC097434);
        *(unsigned char *)(((t0 + 0x62) + 0x1)) = (*(signed char *)0xC097435);
        *(unsigned char *)(((t0 + 0x62) + 0x2)) = (*(signed char *)0xC097436);
        *(unsigned char *)(((t0 + 0x62) + 0x3)) = (*(signed char *)0xC097437);
        *(unsigned char *)(((t0 + 0x62) + 0x4)) = (*(signed char *)0xC097438);
        *(unsigned char *)(((t0 + 0x62) + 0x5)) = (*(signed char *)0xC097439);
        (((struct o68_float *)(t0))->v) = 20.0f;
        t25 = 0x68;
    }
    return t25;
}

int FUN_0c01e01e(int a4)
{
    register int t0;
    register float u0;
    register float u1;
    register float u2;

    (((struct o30_float *)0xC1ECCEC)->v) = (((((struct o30_float *)0xC1ECCEC)->v)) + (FUN_0c021040(0xC1ECD20, ((*(int *)((((((((struct o98_int *)(a4))->v)) << 2) + (0xB8 + a4)) + 0x0))) + 0x4))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC1ECD20) = *(struct mv3 *)(((*(int *)((((((((struct o98_int *)(a4))->v)) << 2) + (0xB8 + a4)) + 0x0))) + 0x4)); }
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
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x8)) = *(struct mv3 *)(0xC177D38); }
    FUN_0c06e700((((int)stk + 0) + 0x8), (((int)stk + 0) + 0x34), f4);
    FUN_0c018b22((((int)stk + 0) + 0x8), 0x1);
    return (nlPopMatrix(0x1));
}

float FUN_0c05ba98(int a4, int a5, int a6, int a7)
{
    int stk[10];
    register float u0;
    register float t1;
    register float t3;
    register float t5;
    register float t7;
    register float t9;
    register float u28;
    register float u22;
    register float u16;

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
                u16 = t9;
            } else {
                { struct mv3 { int w[3]; }; *(struct mv3 *)(a6) = *(struct mv3 *)(0xC10D9E0); }
                *(unsigned int *)((a7 + 0x0)) = 0x0;
                u16 = t5;
            }
            u22 = u16;
        } else {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(a6) = *(struct mv3 *)(0xC10D9E0); }
            *(unsigned int *)((a7 + 0x0)) = 0x0;
            u22 = t3;
        }
        u28 = u22;
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(a6) = *(struct mv3 *)(0xC10D9E0); }
        *(unsigned int *)((a7 + 0x0)) = 0x0;
        u28 = t1;
    }
    return u28;
}

float FUN_0c06c44a(int a4)
{
    register float t2;
    register float t4;
    register int t12;

    *(unsigned int *)((a4 + 0x0)) = ((*(int *)((a4 + 0x0))) + 0x1);
    { struct mv16 { int w[16]; }; *(struct mv16 *)((a4 + 0x4)) = *(struct mv16 *)(0xC147388); }
    t2 = nlLength(0xC175930, ((((struct o0_int *)0xC13C2F4)->v)));
    t4 = nlLength(0xC175930, (((((struct oC_int *)0xC13C2F4)->v)) + 0x24));
    if (t2 > t4) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x34)) = *(struct mv3 *)(((((struct o0_int *)0xC13C2F4)->v))); }
        (((struct o4C_float *)(a4))->v) = ((((struct o0_float *)0xC06C5E8)->v));
        (((struct o50_float *)(a4))->v) = ((((struct o4_float *)0xC06C5E8)->v));
        t12 = 0x1;
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x34)) = *(struct mv3 *)((((((struct oC_int *)0xC13C2F4)->v)) + 0x24)); }
        (((struct o4C_float *)(a4))->v) = ((((struct o8_float *)0xC06C5E8)->v));
        (((struct o50_float *)(a4))->v) = ((((struct oC_float *)0xC06C5E8)->v));
        t12 = 0x0;
    }
    (((struct o54_uint *)(a4))->v) = t12;
    (((struct o44_float *)(a4))->v) = 0.0f;
    (((struct o48_float *)(a4))->v) = ((((struct o10_float *)0xC06C5E8)->v));
    return t4;
}

int FUN_0c024f94(float f4, float f5, float f6, float f7, float f8, float f9)
{
    register int t0;
    register int t2;

    t0 = set_event(0x4C, 0xC025088);
    t2 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x14)) = 0x0;
        (((struct o1C_float *)(t0))->v) = f4;
        (((struct o20_float *)(t0))->v) = f5;
        (((struct o24_float *)(t0))->v) = f6;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)(0xC09741C); }
        (((struct o34_float *)(t0))->v) = 40.0f;
        (((struct o18_float *)(t0))->v) = 1.0f;
        (((struct o38_float *)(t0))->v) = f7;
        (((struct o3C_float *)(t0))->v) = f8;
        (((struct o40_float *)(t0))->v) = f9;
        (((struct o46_ushort *)(t0))->v) = 0x0;
        (((struct o44_ushort *)(t0))->v) = 0x0;
        *(unsigned int *)0xC2709AC = ((*(int *)0xC2709AC) + 0x1);
        t2 = 0x44;
    }
    return t2;
}

int FUN_0c01d3b4(void)
{
    int stk[9];

    (((struct o8_uint *)0xC1EC744)->v) = (((((struct o8_int *)0xC1EC744)->v)) + 0x1);
    *(float *)(((int)stk + 24)) = 0.0f;
    *(float *)(((int)stk + 28)) = 1.0f;
    *(float *)(((int)stk + 32)) = 0.0f;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0xC)) = *(struct mv3 *)(0xC09741C); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(0xC09741C); }
    *(float *)(((int)stk + 8)) = 10.0f;
    nlLookAtUp((((int)stk + 0) + 0xC), ((int)stk + 0), (((int)stk + 0) + 0x18));
    FUN_0c04e88e(0xC175C80);
    if ((*(int *)0xC2B1CFC) == 6) {
        FUN_0c04e92c();
        FUN_0c06cbc2();
        (((struct o0_uint *)0xC1EC744)->v) = 0x0;
        FUN_0c01e6f0();
        FUN_0c01c568();
        FUN_0c01f95a();
    }
    return (gdc_FadeManStreamSong());
}

void calcColliCheck(int a4)
{

    register int R1;
    register int R2;
    register int R3;
    register int R14;
    register float F2;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register float w0_0;
    register float w0_1;
    v0_0 = a4;
    v0_1 = R14;
    v0_2 = ((((struct oC4_float *)(v0_0))->v)) != 0.0f;
    R14 = (v0_0);
    if (v0_2) goto L_C0434E6;
    w0_0 = (((struct o0_float *)0xC043530)->v);
    v0_0 = !(w0_0 > _builtin_fabsf(((((struct oCC_float *)(R14))->v))));
    w0_0 = (w0_0);
    if (v0_0) goto L_C0434E6;
    w0_0 = (((struct o4_float *)0xC043530)->v);
    v0_0 = !(w0_0 > _builtin_fabsf(((((struct o60_float *)(R14))->v))));
    w0_0 = (w0_0);
    if (v0_0) goto L_C0434E6;
    v0_0 = (int)(FUN_0c07ffac(((((struct oAA_short *)(R14))->v)))) >= (int)0x10;
    if (v0_0) goto L_C0434E6;
    v0_0 = !(((((struct o4_float *)0xC043530)->v)) > _builtin_fabsf(((((struct o100_float *)(R14))->v))));
    if (v0_0) goto L_C0434E6;
    w0_0 = (((struct o104_float *)(R14))->v);
    w0_1 = (((struct o90_float *)(R14))->v);
    v0_0 = !(((((struct oC_float *)0xC043530)->v)) > _builtin_fabsf((w0_1 - w0_0)));
    w0_0 = (_builtin_fabsf((w0_1 - w0_0)));
    if (v0_0) goto L_C0434E6;
    (((struct o84_uint *)(R14))->v) = (((((struct o84_int *)(R14))->v)) & 0xFFFFFFFB);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x98 + R14)) = *(struct mv3 *)(0xC0C3670); }
    L_C0434F0:;
    return;
    L_C0434E6:;
    (((struct o84_uint *)(R14))->v) = (((((struct o84_int *)(R14))->v)) | 0x4);
    v0_0 = (0x84);
    goto L_C0434F0;
}

int FUN_0c060384(void)
{
    int stk[15];
    register int t0;
    register int t2;
    register int t19;
    register int t17;
    register int t18;

    { struct mv15 { int w[15]; }; *(struct mv15 *)(((int)stk + 0)) = *(struct mv15 *)(0xC10E82C); }
    t0 = (((struct o0_int *)0xC2B9C9C)->v);
    if (((int)t0 >= 0) && ((int)t0 < (int)0xF)) {
        t2 = ((int (*)(void))((*(int *)((((t0 << 2) + ((int)stk + 0)) + 0x0)))))();
    }
    FUN_0c05fdfc();
    (((struct oC_uint *)0xC2B9C9C)->v) = (FUN_0c06002a());
    if ((int)((((struct oC_int *)0xC2B9C9C)->v)) >= 0) {
        FUN_0c069e78(((((struct oC_int *)0xC2B9C9C)->v)));
    }
    if (((*(int *)0xC1EC720) != 2) && ((t17 = *(int *)0xC1ECCB4, t17 == 0x258) || (t18 = *(int *)0xC1ECCB4, t18 == 0x12C))) {
        t19 = FUN_0c061bae();
        if (t19 == 0) {
            FUN_0c06032a(0x1);
        }
    }
    return (FUN_0c040bec(0x1, 0x0));
}

int FUN_0c068f8a(int a4)
{
    int stk[4];
    register float t4;
    register float t5;

    *(unsigned int *)(((int)stk + 0)) = a4;
    nlSubVector3op((((int)stk + 0) + 0x4), ((*(int *)((((*(int *)0xC1EC71C) << 2) + 0xC13B108))) + (((a4 << 1) + a4) << 2)), 0xC175930);
    *(float *)(((int)stk + 8)) = 0.0f;
    t4 = FUN_0c073e10((((int)stk + 0) + 0x4));
    if (0.00100000005f > t4) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x4)) = *(struct mv3 *)(0xC17598C); }
        *(float *)(((int)stk + 8)) = 0.0f;
        t5 = FUN_0c073e10((((int)stk + 0) + 0x4));
        if (0.00100000005f > t5) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x4)) = *(struct mv3 *)(0xC10D9F8); }
        }
    }
    return (nlArcTan2((-(*(float *)(((int)stk + 4)))), (*(float *)(((int)stk + 12)))));
}

int CheckColliWallEdge(int a4, int a5)
{
    register int t0;
    float u0;
    register float u1;
    register float u2;

    t0 = *(int *)((a4 + 0x0));
    u1 = (((struct o4_float *)(t0))->v);
    if (!(u1 > ((((struct o14_float *)(a5))->v)))) {
        if (!((((((struct o18_float *)(a5))->v)) - ((((struct o14_float *)(a4))->v))) > u1)) {
            u1 = ((((((struct o8_float *)(a5))->v)) - (*(float *)((t0 + 0x0)))) * ((((struct o4_float *)(a5))->v)));
            u2 = ((((((struct oC_float *)(a5))->v)) - ((((struct o8_float *)(t0))->v))) * (*(float *)((a5 + 0x0))));
            if (((u1 - u2) > 0.0f) && (u0 = (((struct o1C_float *)(a5))->v), u0 > (u1 - u2))) {
                { struct mv2 { int w[2]; }; *(struct mv2 *)((a4 + 0x4)) = *(struct mv2 *)(a5); }
                u0 = (((((struct o4_float *)(a5))->v)) * ((((struct o8_float *)(t0))->v)));
                u0 = u0 + (*(float *)((t0 + 0x0))) * (*(float *)((a5 + 0x0)));
                (((struct o10_float *)(a4))->v) = (u0 + ((((struct o10_float *)(a5))->v)));
                return 0x1;
            }
            return 0x0;
        }
        return 0x0;
    }
    return 0x0;
}

int FUN_0c04f224(void)
{
    int stk[6];

    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0xC)) = *(struct mv3 *)(0xC10C914); }
    FUN_0c073360();
    nlRotateAY((unsigned short)((((struct o6_short *)0xC2B1D5C)->v)));
    nlRotateAX((unsigned short)((((struct o4_short *)0xC2B1D5C)->v)));
    FUN_0c072230((((int)stk + 0) + 0xC), 0xC2B1D50);
    nlPopMatrix(0x1);
    nlObjPutSetLightDirectionV(0xC2B1D50);
    FUN_0c076130(((((struct o0_float *)0xC2B1D5C)->v)));
    FUN_0c073360();
    nlRotateAY(0xA80);
    nlRotateAX(0x3000);
    FUN_0c072290((((int)stk + 0) + 0xC), ((int)stk + 0));
    FUN_0c05f43a(((int)stk + 0));
    return (nlPopMatrix(0x1));
}

void FUN_0c05ccce(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    if (a4 != 0) {
        t0 = ((int (*)(int, int, int, int))(FUN_0c05cd80))(a4, a5, a6, a7);
        (((struct o10_uint *)0xC136D68)->v) = 0x0;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC2B96E8) = *(struct mv3 *)(0xC17599C); }
    }
    if (((((struct o10_int *)0xC136D68)->v)) != 0) {
        t0 = (((struct oC_int *)0xC136D68)->v);
        if (((int)t0 >= 0) && ((int)t0 < (int)0x4)) {
        } else {
            t1 = ((int (*)(int))(FUN_0c05cd80))(t0);
        }
        t0 = (*(int *)(((((((struct oC_int *)0xC136D68)->v)) << 2) + 0xC2B96D8)));
    } else {
        t0 = ((((struct o0_int *)0xC136D68)->v));
    }
    t1 = ((int (*)(int, int, int, int))((*(int *)(((((t0 << 2) << 1) + 0xC10DBC8) + 0x0)))))(0xC1758B4, (*(int *)(((((t0 << 2) << 1) + 0xC10DBC8) + 0x4))), a6, a7);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC2B96E8) = *(struct mv3 *)(0xC17599C); }
}

int FUN_0c0297f4(int a4, int a5, float f4)
{
    int stk[3];
    register int t0;
    register float u2;
    register float u4;
    register float u7;
    register float u10;

    *(float *)(((int)stk + 8)) = 1.0f;
    t0 = FUN_0c029866(a4, a5, ((int)stk + 0), f4);
    if (t0 != 0) {
        u2 = *(float *)(((int)stk + 8));
        u4 = (*(float *)((a4 + 0x0)));
        u4 = u4 + u2 * (*(float *)((a5 + 0x0)));
        (((struct o0_float *)0xC270F9C)->v) = u4;
        u7 = ((((struct o4_float *)(a4))->v));
        u7 = u7 + u2 * ((((struct o4_float *)(a5))->v));
        (((struct o4_float *)0xC270F9C)->v) = u7;
        u10 = ((((struct o8_float *)(a4))->v));
        u10 = u10 + u2 * ((((struct o8_float *)(a5))->v));
        (((struct o8_float *)0xC270F9C)->v) = u10;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC270FA8) = *(struct mv3 *)((*(int *)(((int)stk + 0)))); }
        (((struct o18_float *)0xC270F9C)->v) = u2;
        (((struct o1C_uint *)0xC270F9C)->v) = ((((struct o44_int *)((*(int *)(((int)stk + 0)))))->v));
    } else {
        (((struct o1C_uint *)0xC270F9C)->v) = 0xFFFFFFFF;
    }
    return 0xC270F9C;
}

int FUN_0c0607b2(void)
{
    int stk[2];

    { struct mv2 { int w[2]; }; *(struct mv2 *)(((int)stk + 0)) = *(struct mv2 *)(0xC10E880); }
    if (((((struct o0_int *)0xC2B9CA0)->v)) == 0) {
        FUN_0c05f6fe(0xC2B9C1C);
        FUN_0c05f470(0xC2B9C1C, (*(int *)((((((((struct o10_int *)0xC2B9CA0)->v)) << 2) + ((int)stk + 0)) + 0x0))), 0.0f, 5.0f);
        (((struct o0_float *)0xC2B9C24)->v) = 1.0f;
        (((struct o4_uint *)0xC2B9C24)->v) = 0x0;
        FUN_0c06a14e();
        (((struct o0_uint *)0xC2B9CA0)->v) = (((((struct o0_int *)0xC2B9CA0)->v)) + 0x1);
    }
    if (((*(signed char *)0xC2B9C5B) & 16) != 0) {
        FUN_0c06017e();
    }
    return (FUN_0c05f98c());
}

void FUN_0c067eee(int a4, int a5, float f4)
{
    register int t0;
    register float u0;

    (((struct o1C_float *)(a4))->v) = ((((struct o0_float *)0xC068070)->v));
    (((struct o20_float *)(a4))->v) = ((((struct o4_float *)0xC068070)->v));
    *(unsigned int *)((a4 + 0x24)) = 0x0;
    if (!(0.0f > f4)) {
        u0 = (((struct o8_float *)0xC068070)->v);
        t0 = 0x0;
        if ((int)(int)(f4 * u0) < 0) {
        } else {
            t0 = (int)(f4 * u0);
            if ((int)(int)(f4 * u0) > (int)0x4) {
                t0 = 0x4;
            }
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x4C)) = *(struct mv3 *)(((((t0 << 1) + t0) << 2) + 0xC110218)); }
    } else {
        t0 = *(int *)((a4 + 0x4));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x4C)) = *(struct mv3 *)(((((t0 << 1) + t0) << 2) + 0xC110254)); }
    }
}

int SJUNI_IsGetChunk(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t4;
    register int t7;
    register int t11;

    *(unsigned int *)((a7 + 0x0)) = 0x0;
    if (((int)a5 >= 0) && ((int)a5 < (int)0x4)) {
        t4 = *(int *)((((a5 << 2) + (a4 + 0x18)) + 0x0));
        if (t4 != 0) {
            { struct mv2 { int w[2]; }; *(struct mv2 *)(((int)stk + 0)) = *(struct mv2 *)((t4 + 0x8)); }
            *(unsigned int *)((a7 + 0x0)) = (*(int *)((((int)stk + 0) + 0x4)));
            t7 = *(int *)((((int)stk + 0) + 0x4));
            if ((*(signed char *)((a4 + 0x5))) == 1) {
                if ((int)t7 < (int)a6) {
                    return 0x0;
                }
                return 0x1;
            }
            if (t7 == a6) {
                return 0x1;
            }
            return 0x0;
        }
        return 0x0;
    }
    if ((*(int *)((a4 + 0x28))) != 0) {
        t11 = ((int (*)(int, int, int, int))((*(int *)((a4 + 0x28)))))((*(int *)((a4 + 0x2C))), 0xFFFFFFFD, a6, a7);
    }
    return 0x0;
}

void SetHelicopter(void)
{
    register int t0;

    t0 = set_event(0x5C, 0xC02EBF0);
    *(unsigned int *)0xC277838 = t0;
    if (t0 != 0) {
        (((struct o14_float *)(t0))->v) = ((((struct o0_float *)0xC02F108)->v));
        (((struct o18_float *)(t0))->v) = ((((struct o4_float *)0xC02F108)->v));
        (((struct o1C_float *)(t0))->v) = ((((struct o8_float *)0xC02F108)->v));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x20)) = *(struct mv3 *)(0xC0A2D08); }
        (((struct o58_uint *)(t0))->v) = 0x0;
        { struct mv9 { int w[9]; }; *(struct mv9 *)((t0 + 0x2C)) = *(struct mv9 *)(0xC0A2D20); }
        (((struct o50_float *)(t0))->v) = ((((struct o18_float *)0xC02F108)->v));
        (((struct o54_uint *)(t0))->v) = 0x0;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC277820) = *(struct mv3 *)((t0 + 0x14)); }
    }
}

float FUN_0c030a26(int a4, float f4)
{
    register float t2;
    register float u27;

    if ((*(int *)(((((((struct o6C_int *)(a4))->v)) << 2) + 0xC27909C))) == 0) {
        t2 = nlLength((a4 + 0xC), (a4 + 0x58));
        if (!(t2 > (1.0f + 1.0f))) {
            if ((*(float *)0xC030AE4) > ((((struct o40_float *)(a4))->v))) {
                *(unsigned int *)(((((((struct o6C_int *)(a4))->v)) << 2) + 0xC27909C)) = 0x1;
                *(unsigned int *)0xC2791B8 = ((*(int *)0xC2791B8) - 1);
            } else {
                { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x58)) = *(struct mv3 *)((a4 + 0xC)); }
            }
        } else {
            *(unsigned int *)(((((((struct o6C_int *)(a4))->v)) << 2) + 0xC27909C)) = 0x1;
            *(unsigned int *)0xC2791B8 = ((*(int *)0xC2791B8) - 1);
        }
        u27 = t2;
    }
    return u27;
}

int FUN_0c16c338(int a4, int a5, int a6)
{
    int stk[13];

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 0)) = a6;
    { struct mv10 { int w[10]; }; *(struct mv10 *)((((int)stk + 0) + 0xC)) = *(struct mv10 *)(0xC1721DC); }
    memset(0xC30B6D0, 0x0, 0x81);
    FUN_0c0800c8(0xC30B6D0, (*(int *)(((int)stk + 8))));
    strcat(0xC30B6D0, 0xC172204);
    strcat(0xC30B6D0, (*(int *)(((((*(int *)(((int)stk + 0))) << 2) + (((int)stk + 0) + 0xC)) + 0x0))));
    strcat(0xC30B6D0, 0xC172208);
    return (strcat(0xC30B6D0, (*(int *)(((*(int *)(((int)stk + 4))) + 0x4)))));
}

void FUN_0c0471c4(int a4, int a5, int a6, int a7)
{
    register int t1;

    if ((int)a4 < 0) {
        *(unsigned int *)0xC2AD2A8 = 0x0;
    } else {
        t1 = *(int *)0xC2AD2A8;
        if ((int)t1 < (int)0xC8) {
            *(unsigned int *)((((t1 << 2) << 2) + 0xC2AC628)) = a4;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((((*(int *)0xC2AD2A8) << 2) << 2) + 0xC2AC628) + 0x4)) = *(struct mv3 *)(a5); }
            *(unsigned int *)0xC2AD2A8 = ((*(int *)0xC2AD2A8) + 0x1);
        }
    }
}

void FUN_0c05c27a(int a4, int a5, int a6)
{
    int stk[2];

    if ((*(int *)((a5 + 0x0))) == a6) {
        *(unsigned int *)((a5 + 0x0)) = (*(int *)((a6 + 0x0)));
        *(unsigned int *)((a6 + 0x4)) = (*(int *)((a5 + 0x4)));
        *(unsigned int *)((a5 + 0x4)) = a6;
        *(unsigned int *)((a6 + 0x4)) = a5;
    } else {
        if ((*(int *)((a5 + 0x4))) == a6) {
            *(unsigned int *)((a5 + 0x4)) = (*(int *)((a6 + 0x4)));
            *(unsigned int *)((a6 + 0x0)) = (*(int *)((a5 + 0x0)));
            *(unsigned int *)((a5 + 0x0)) = a6;
            *(unsigned int *)((a6 + 0x4)) = a5;
        } else {
            { struct mv2 { int w[2]; }; *(struct mv2 *)(((int)stk + 0)) = *(struct mv2 *)(a5); }
            { struct mv2 { int w[2]; }; *(struct mv2 *)(a5) = *(struct mv2 *)(a6); }
            { struct mv2 { int w[2]; }; *(struct mv2 *)(a6) = *(struct mv2 *)(((int)stk + 0)); }
        }
    }
}

int FUN_0c01f95a(void)
{
    int stk[11];
    register int t0;
    register int t14;

    t0 = *(int *)0xC1EC71C;
    if (t0 != 0) {
        if (t0 != 1) {
            t14 = t0;
            if (t0 != 2) {
            } else {
                t14 = (FUN_0c04b1e6());
            }
        } else {
            FUN_0c01422e(((int)stk + 12));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(((int)stk + 12)); }
            t14 = (gdc_CoursePointLoadReq(*(Stk3 *)(((int)stk + 0)), (*(float *)0xC01FA9C)));
        }
    } else {
        FUN_0c01422e(((int)stk + 12));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(((int)stk + 12)); }
        t14 = (gdc_CoursePointLoadReq(*(Stk3 *)(((int)stk + 0)), (*(float *)0xC01FA9C)));
    }
    return t14;
}

int FUN_0c029574(int a4)
{
    register int t2;
    register int t4;
    register int t6;
    register int t7;

    if ((int)a4 < 0) {
        return FUN_0c029528();
    }
    t2 = a4;
    if ((int)a4 >= (int)(*(int *)0xC09DFA0)) {
        t2 = 0x0;
    }
    t4 = 0xC09DF24;
    t6 = 0xC270F54;
    for (;;) { t7 = *(int *)t4; t4 = (t4 + 4); if ((unsigned int)((0xC09DF24 + 68)) < (unsigned int)t4) break; *(unsigned int *)t6 = t7; t6 = (t6 + 4); }
    (((struct o0_uint *)0xC270F2C)->v) = (*(int *)(((t2 << 2) + 0xC128D78)));
    { struct mv8 { int w[8]; }; *(struct mv8 *)(0xC270F30) = *(struct mv8 *)((((((*(int *)(((t2 << 2) + 0xC09DF68))) << 2) << 2) << 1) + 0xC1131F8)); }
    (((struct o24_uint *)0xC270F2C)->v) = 0xC113578;
    return FUN_0c02bcf8(t2);
}

int nlInitMatrix(int a4, int a5)
{
    register int t2;

    nlInitMatrixStack(0xC2BF958, 0xC2BF970, 0x3);
    nlInitMatrixStack(0xC2BF964, 0xC2BFA30, 0x3);
    t2 = nlInitMatrixStack(0xC2BF94C, a4, (a5 + 0x1));
    *(unsigned char *)0xC2BF93C = 0x1;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC2BF940) = *(struct mv3 *)(0xC2BF94C); }
    return t2;
}

void camSetTarget(int a4, int a5)
{
    if (a5 != 0) {
        if (a5 == 1) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC177E14) = *(struct mv3 *)(0xC0A2D08); }
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC177E20) = *(struct mv3 *)(a4); }
        return;
    }
    FUN_0c02deca(0xC177E08, a4);
}
