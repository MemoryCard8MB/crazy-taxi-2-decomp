/* Straight-line functions with calls and guards (batch gen_cj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o13_uchar { char p[0x13]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o18_float { char p[0x18]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o20_float { char p[0x20]; float v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o38_ushort { char p[0x38]; unsigned short v; };
struct o3A_ushort { char p[0x3A]; unsigned short v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o4C_int { char p[0x4C]; int v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_int { char p[0x84]; int v; };
struct o88_int { char p[0x88]; int v; };
struct oAC_int { char p[0xAC]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oE0_int { char p[0xE0]; int v; };
struct oF8_int { char p[0xF8]; int v; };
struct oF8_uint { char p[0xF8]; unsigned int v; };
int ADXB_EntryData(int, int, int);
int ADXB_GetFormat(int);
int ADXB_Start(int);
int ExecWindow(void);
int Exec_LCD(void);
int FUN_0c01a7a4(void);
int FUN_0c01aa30(void);
int FUN_0c01c4e2(void);
int FUN_0c01e474(void);
int FUN_0c01e6f8(int);
int FUN_0c01ecaa(int);
extern int FUN_0c01f098();
int FUN_0c02022a(void);
int FUN_0c026ce6(void);
int FUN_0c027f28(int);
int FUN_0c027fbe(float, float);
int FUN_0c02802a(float);
int FUN_0c02803a(int, int, int, int);
float FUN_0c02806c(int);
int FUN_0c02842e(int);
int FUN_0c030eb4(void);
int FUN_0c030eee(float, float, float);
int FUN_0c030f66(int);
int FUN_0c0339c0(int);
int FUN_0c0339fc(int);
int FUN_0c033b12(int);
int FUN_0c034320(int, int);
int FUN_0c0343b8(int, int);
int FUN_0c0397ec(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c03e07c(void);
int FUN_0c03e52a(void);
int FUN_0c03e5f8(void);
int FUN_0c03e792(int, int);
int FUN_0c03e81a(void);
int FUN_0c05045a(void);
int FUN_0c057bb4(int);
int FUN_0c058ca6(int, int);
int FUN_0c058d4e(void);
int FUN_0c058f64(int, int, int, int);
int FUN_0c05f434(void);
int FUN_0c05f470(int, int, float, float);
int FUN_0c05f4c8(int);
int FUN_0c0620ac(int);
int FUN_0c065080(int);
int FUN_0c0656b6(int);
int FUN_0c0673da(int);
int FUN_0c067494(int, int);
int FUN_0c068304(int);
float FUN_0c0683b0(int, int, float);
int FUN_0c06a1d0(int);
int FUN_0c06b3d8(int, int, int, int);
int FUN_0c06f240(void);
int FUN_0c06f940(void);
int FUN_0c06f960(int);
int FUN_0c070080(void);
int FUN_0c072b60(int);
int FUN_0c073a30(float, float, float);
int FUN_0c073c40(int, int, float);
int FUN_0c076230(float, float, float);
int FUN_0c07ada0(int);
int FUN_0c07fdc8(void);
int FUN_0c07ff00(void);
int FUN_0c08f2a2(int, int);
int FUN_0c08fc00(int);
int FUN_0c14a2ba(void);
int FUN_0c162006(int);
int FUN_0c16201e(int);
int FUN_0c16ad54(int);
int FUN_0c16ad6c(int);
int FUN_0c16ada2(int, int, int, int, int);
int Put_Time_Bonus_Sprite(int);
int SJ_SplitChunk(int, int, int);
int SetHelicopter(void);
int Voice_ShutUp(int);
extern void _builtin_ftrv(float *, float *);
extern int _builtin_get_imask(void);
extern void _builtin_prefetch(void *);
extern void _builtin_set_imask(int);
int _lsfts(int, int, int);
int _mvito4b(int, int);
int buIsFormat(int);
int gdFsClose(int);
int gdFsCreateHnG(int, int, int, int);
int gdFsGetLE4(int);
int gdFsGetTokenSize(int, int, int);
int gdFsMemcpy(int, int, int);
int gdFsReadWG(int, int, int);
int gdFsStrncmpi(int, int, int);
int memcpy(int, int, int);
int nlAddVector(int, int);
float nlLength(int, int);
int nlObjPutUseViewMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRenderTextureBegin(int);
int nlRotateAY(int);
int paletteUpload(void);
int pfSize(float, float);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
void FUN_0c01b026(int a4, int a5, int a6, int a7);
int gdFsSearchPath(int a4, int a5, int a6, int a7);
int mwlRnaAddWrPos(int a4, int a5, int a6, int a7);
float displayTriangle_tex_spd(int a4, int a5, int a6);
int gdFsReinitG(int a4, int a5, int a6, int a7);
int FUN_0c05626c(void);
int FUN_0c03df88(int a4, int a5, int a6, int a7);
int FUN_0c03f03c(void);
float FUN_0c083880(int a4, int a5, int a6);
float FUN_0c086b60(int a4, int a5, int a6);
int FUN_0c095bb8(int a4, int a5, int a6, float f4, float f5);
int kmiGetNativeRegOBPSize(int a4);
int FUN_0c01f5fc(void);
void FUN_0c02f0a2(void);
int FUN_0c065366(int a4, int a5);
int FUN_0c069230(int a4, int a5, int a6, int a7);
int FUN_0c07b430(float f4, float f5, float f6, float f7);
int adxsjd_decexec_start(int a4, int a5, int a6, int a7);
int FUN_0c08fc6c(int a4, int a5);
int syG2DmaReset(int a4);
int FUN_0c039c90(void);
int FUN_0c064f92(int a4);
int FUN_0c06c35c(int a4, int a5, int a6, int a7);
int vmsfs_isformat(int a4);
int FUN_0c0521dc(int a4, int a5, int a6, int a7);
int vmsfs_xfind(int a4, int a5);

void FUN_0c01b026(int a4, int a5, int a6, int a7)
{
    int stk[1];

    register int R0;
    register int R1;
    register int R2;
    register int R3;
    int R8;
    register float F4;
    register float F5;
    register float F6;
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
    FUN_0c07ff00();
    FUN_0c07ff00();
    FUN_0c07ff00();
    (((struct o28_uint *)0xC1EC718)->v) = 0x0;
    (((struct o2C_uint *)0xC1EC718)->v) = 0x0;
    *(unsigned int *)0xC11CFF8 = 0x0;
    FUN_0c01aa30();
    v0_0 = (0xC11CFC0);
    v0_6 = (0xC1EC758);
    v0_1 = (0x0);
    v0_2 = (0xC1EC740);
    v0_3 = (0xC1EC750);
    v0_4 = (0xC1EC744);
    if (((*(int *)0xC2A4658) != 0)) goto L_C01B06C;
    *(unsigned int *)((v0_3 + 0x0)) = v0_1;
    L_C01B070:;
    FUN_0c07ff00();
    FUN_0c07ff00();
    FUN_0c07ff00();
    *(unsigned int *)(((int)stk + 0)) = v0_6;
    v0_5 = (0x3);
    v0_0 = (0xC1EC83C);
    R8 = (0x7);
    w0_0 = (1.0f);
    L_C01B09C:;
    FUN_0c01a7a4();
    FUN_0c076230(w0_0, w0_0, w0_0);
    FUN_0c03e81a();
    FUN_0c03e52a();
    v0_7 = *(int *)(((((*(int *)((v0_2 + 0x0))) & R8) << 2) + 0xC09739C));
    v0_6 = (v0_7);
    if ((v0_7 != 0)) goto L_C01B0CE;
    *(unsigned int *)((v0_2 + 0x0)) = ((*(int *)((v0_2 + 0x0))) + 0x1);
    *(unsigned int *)((v0_4 + 0x0)) = v0_1;
    L_C01B0D2:;
    FUN_0c03e5f8();
    Exec_LCD();
    FUN_0c057bb4((unsigned char)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x2C))));
    FUN_0c02022a();
    FUN_0c058d4e();
    FUN_0c06f960(0xC1EC84C);
    *(unsigned int *)((v0_0 + 0x0)) = ((*(int *)((v0_0 + 0x0))) + 0x1);
    if (((int)((((struct o0_int *)0xC1EC718)->v)) <= (int)v0_5)) goto L_C01B112;
    FUN_0c01e474();
    L_C01B112:;
    FUN_0c070080();
    FUN_0c06f240();
    FUN_0c06f940();
    paletteUpload();
    goto L_C01B09C;
    L_C01B0CE:;
    v0_6 = ((int (*)(int, int, int, int, float, float, float))(v0_6))(v0_3, a5, a6, a7, F4, F5, F6);
    goto L_C01B0D2;
    L_C01B06C:;
    *(unsigned int *)((v0_3 + 0x0)) = 0x1;
    goto L_C01B070;
}

int gdFsSearchPath(int a4, int a5, int a6, int a7)
{
    int stk[6];

    register int R1;
    register int R2;
    register int R3;
    int R8;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    v0_6 = a4;
    v0_1 = a5;
    v0_0 = a6;
    v0_3 = a7;
    *(unsigned int *)(((int)stk + 8)) = v0_1;
    *(unsigned int *)(((int)stk + 16)) = v0_0;
    *(unsigned int *)(((int)stk + 20)) = 0x1;
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    *(unsigned int *)(((int)stk + 0)) = (0x800 + v0_6);
    v0_5 = v0_6;
    v0_1 = (0x0);
    v0_2 = (0x1);
    v0_3 = ((v0_3 + 0x1));
    v0_4 = ((0x800 + v0_6));
    v0_6 = (0x0);
    R8 = (0x1);
    v0_5 = v0_5;
    L_C15CEE4:;
    v0_6 = (v0_4);
    if (((unsigned int)v0_4 >= (unsigned int)(*(int *)(((int)stk + 0))))) goto L_C15CF02;
    if (((unsigned int)((((unsigned char)(*(signed char *)((v0_6 + 0x0))) + ((unsigned char)(*(signed char *)((v0_6 + 0x0))) & 0x1)) + 0x8) + v0_4) < (unsigned int)(*(int *)(((int)stk + 0))))) goto L_C15CF2C;
    L_C15CF02:;
    gdFsMemcpy(v0_4, (v0_5 - ((v0_5 - v0_4) + 0x800)), ((v0_5 - v0_4) + 0x800));
    v0_7 = (gdFsReadWG((*(int *)(((int)stk + 8))), 0x1, v0_5)) != 0;
    v0_6 = ((v0_5 - ((v0_5 - v0_4) + 0x800)));
    if (v0_7) goto L_C15CFA0;
    *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x1);
    v0_4 = (v0_6);
    L_C15CF2C:;
    gdFsMemcpy((v0_6 + 0x6), (((int)stk + 0) + 0x4), 0x2);
    if (((unsigned short)(*(short *)(((int)stk + 4))) != (*(int *)(((int)stk + 20))))) goto L_C15CF84;
    if ((v0_2 == 1)) goto L_C15CF5E;
    if (((unsigned char)(*(signed char *)((v0_6 + 0x0))) != v0_1)) goto L_C15CF84;
    v0_7 = (gdFsStrncmpi((v0_6 + 0x8), v0_3, v0_1)) == 0;
    if (v0_7) goto L_C15CF84;
    L_C15CF5E:;
    *(unsigned int *)(((int)stk + 20)) = v0_2;
    v0_7 = (*(signed char *)(((v0_3 + v0_1) + 0x0))) != 0;
    v0_3 = ((v0_3 + v0_1));
    if (v0_7) goto L_C15CF74;
    v0_0 = ((gdFsGetLE4((v0_6 + 0x2))));
    L_C15CFA2:;
    return v0_0;
    L_C15CF74:;
    if ((v0_2 == 1)) goto L_C15CF7C;
    v0_3 = ((v0_3 + 0x1));
    L_C15CF7C:;
    v0_1 = ((gdFsGetTokenSize(v0_3, 0xC171310, v0_0)));
    L_C15CF84:;
    v0_7 = *(signed char *)((v0_6 + 0x0));
    v0_8 = *(int *)(((int)stk + 12));
    *(unsigned int *)(((int)stk + 12)) = (v0_8 + ((((unsigned char)v0_7 & R8) + (unsigned char)v0_7) + 0x8));
    v0_2 = ((v0_2 + 0x1));
    v0_4 = ((v0_4 + ((((unsigned char)v0_7 & R8) + (unsigned char)v0_7) + 0x8)));
    v0_6 = ((unsigned char)v0_7);
    if (((int)(v0_8 + ((((unsigned char)v0_7 & R8) + (unsigned char)v0_7) + 0x8)) < (int)(*(int *)(((int)stk + 16))))) goto L_C15CEE4;
    L_C15CFA0:;
    v0_0 = (0x0);
    goto L_C15CFA2;
}

int mwlRnaAddWrPos(int a4, int a5, int a6, int a7)
{
    int stk[8];
    register int t4;
    register int t16;
    register int t17;
    register int t29;
    register int t33;
    register int t1;
    register int t2;
    register int t3;
    register int t10;
    register int t11;
    register int t12;
    register int t15;

    FUN_0c16ad54(((int)stk + 4));
    t4 = 0x0;
    for (;;) {
        if ((int)t4 >= (int)(unsigned char)(*(signed char *)((a4 + 0x3)))) {
            break;
        }
        t2 = a4;
        t3 = t4;
        t2 = (t2 + 0x10);
        t3 = (t3 << 2);
        t3 = (t3 + t2);
        t1 = (*(int *)((t3 + 0x0)));
        if (t1 == 0) {
            *(int *)((int)stk + 0) = 0xC17173C;
            FUN_0c16ada2(0x0, 0x0, 0x0, 0x0, 0xC17173C);
        } else {
            t10 = t1;
            t11 = t2;
            t12 = t3;
        }
        t1 = t10;
        t4 = (t4 + 0x1);
        t2 = t11;
        t3 = t12;
    }
    t16 = 0xC16ADA2;
    t17 = 0x0;
    for (;;) {
        if ((int)t17 >= (int)(unsigned char)(*(signed char *)((a4 + 0x3)))) {
            break;
        }
        *(unsigned int *)(((int)stk + 24)) = (*(int *)((((a4 + 0x18) + ((t17 << 2) << 1)) + 0x0)));
        *(unsigned int *)(((int)stk + 28)) = (*(int *)(((((t17 << 2) << 1) + (a4 + 0x18)) + 0x4)));
        SJ_SplitChunk((((int)stk + 4) + 0x14), ((int)((int)((*(int *)((a4 + 0x3C))) * (*(int *)((a4 + 0x8)))) / (int)0x8)), (((int)stk + 4) + 0xC));
        t15 = a4;
        t16 = t17;
        t15 = (t15 + 0x10);
        t16 = (t16 << 2);
        t15 = (t15 + t16);
        t15 = (*(int *)((t15 + 0x0)));
        t29 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t15 + 0x0))) + 0x20)))))(t15, 0x0, (((int)stk + 4) + 0xC), a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
        t15 = a4;
        t15 = (t15 + 0x10);
        t15 = (t15 + t16);
        t15 = (*(int *)((t15 + 0x0)));
        t33 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t15 + 0x0))) + 0x1C)))))(t15, 0x1, (((int)stk + 4) + 0x4), a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
        t17 = (t17 + 0x1);
    }
    *(unsigned int *)((a4 + 0x2C)) = ((int)((int)((*(int *)((a4 + 0x2C))) + (*(int *)((a4 + 0x3C)))) % (int)(*(int *)((a4 + 0x28)))));
    *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + (*(int *)((a4 + 0x3C))));
    (((struct o4C_uint *)(a4))->v) = (((((struct o4C_int *)(a4))->v)) + (*(int *)((a4 + 0x3C))));
    *(unsigned int *)((a4 + 0x3C)) = 0x0;
    return (FUN_0c16ad6c(((int)stk + 4)));
}

float displayTriangle_tex_spd(int a4, int a5, int a6)
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
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u7;
    register float u8;
    float u14[4];
    register float u123;
    register float u124;
    register float u125;
    register float u126;
    float u38[4];
    float u54[4];
    float u70[4];
    float u85[4];
    float u101[4];
    float u117[4];

    t0 = *(int *)((a4 + 0x0));
    t1 = (a4 + 0x4);
    t2 = ((a4 + 0x4) + 0x20);
    if (((*(int *)(((a4 + 0x4) + 0x0))) & 1) == 0) {
        t1 = ((*(int *)(((a4 + 0x4) + 0x4))) + (((a4 + 0x4) + 0x20) - 24));
        t2 = (((a4 + 0x4) + 0x20) - 24);
    }
    u0 = *(float *)((t1 + 0x0));
    u1 = *(float *)(((t1 + 0x0) + 4));
    *(volatile float *)(((t1 + 0x8) + 0x0));
    u2 = *(float *)((((t1 + 0x8) + 0x0) + 4));
    *(volatile float *)((((t1 + 0x8) + 0x8) + 0x0));
    u3 = *(float *)(((((t1 + 0x8) + 0x8) + 0x0) + 4));
    u4 = (((struct o8_float *)(((t1 + 0x8) + 0x8)))->v);
    u5 = *(float *)((((((t1 + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    u14[0] = u1;
    u14[1] = u0;
    u14[2] = u2;
    u14[3] = 1.0f;
    _builtin_ftrv(u14, u14);
    t1 = 0x3;
    t3 = t2;
    t2 = a5;
    t4 = (a6 + 0x20);
    t5 = t0;
    u0 = u5;
    u1 = u4;
    u2 = u3;
    u3 = u14[0];
    u4 = u14[1];
    u5 = u14[2];
    for (;;) {
        *(float *)(((t4 - 0x8) + 0x0)) = 0.0f;
        *(float *)((((t4 - 0x8) + 0x0) + 4)) = u2;
        t4 = (t4 - 0x8);
        t1 = (t1 - 0x1);
        t0 = *(int *)((t3 + 0x0));
        t3 = (t3 + 0x4);
        t6 = *(int *)((t3 + 0x0));
        t3 = (t3 + 0x4);
        if (t1 != 0) {
            t7 = (t6 + t3);
            if ((t0 & 1) != 0) {
                t8 = t3;
                t3 = (t3 + 0x18);
                t7 = (t8 - 8);
            }
            t3 = (t3 + 0x20);
            u6 = *(float *)((t7 + 0x0));
            u7 = *(float *)(((t7 + 0x0) + 4));
            _builtin_prefetch((void *)t3);
            *(volatile float *)(((t7 + 0x8) + 0x0));
            u8 = *(float *)((((t7 + 0x8) + 0x0) + 4));
            u5 = (u5 * (1.0f / u3));
            *(volatile float *)((((t7 + 0x8) + 0x8) + 0x0));
            u2 = (*(float *)(((((t7 + 0x8) + 0x8) + 0x0) + 4)));
            u4 = (u4 * (1.0f / u3));
            *(float *)(((t4 - 0x8) + 0x0)) = u1;
            *(float *)((((t4 - 0x8) + 0x0) + 4)) = u0;
            t8 = t4;
            t4 = (t4 - 0x8);
            u38[0] = u7;
            u38[1] = u6;
            u38[2] = u8;
            u38[3] = 1.0f;
            _builtin_ftrv(u38, u38);
            *(float *)(((t4 - 0x8) + 0x0)) = (1.0f / u3);
            *(float *)((((t4 - 0x8) + 0x0) + 4)) = u5;
            t4 = (t4 - 0x8);
            t3 = (t3 - 32);
            *(float *)(((t4 - 0x8) + 0x0)) = u4;
            *(float *)((((t4 - 0x8) + 0x0) + 4)) = u3;
            t4 = (t4 - 0x8);
            *(unsigned int *)((t4 + 0x0)) = t8;
            u0 = (*(float *)((((((t7 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
            u1 = ((((struct o8_float *)(((t7 + 0x8) + 0x8)))->v));
            t1 = (t1 - 0x1);
            _builtin_prefetch((void *)t4);
            t4 = (t4 + 0x40);
            *(float *)(((t4 - 0x8) + 0x0)) = 0.0f;
            *(float *)((((t4 - 0x8) + 0x0) + 4)) = u2;
            t4 = (t4 - 0x8);
            t7 = *(int *)((t3 + 0x0));
            t3 = (t3 + 0x4);
            t8 = *(int *)((t3 + 0x0));
            t3 = (t3 + 0x4);
            if (t1 != 0) {
                t9 = (t8 + t3);
                if ((t7 & 1) != 0) {
                    t10 = t3;
                    t3 = (t3 + 0x18);
                    t9 = (t10 - 8);
                }
                t3 = (t3 + 0x20);
                u3 = (*(float *)(((t9 + 0x0) + 4)));
                u4 = (*(float *)((t9 + 0x0)));
                _builtin_prefetch((void *)t3);
                *(volatile float *)(((t9 + 0x8) + 0x0));
                u5 = (*(float *)((((t9 + 0x8) + 0x0) + 4)));
                *(volatile float *)((((t9 + 0x8) + 0x8) + 0x0));
                u2 = (*(float *)(((((t9 + 0x8) + 0x8) + 0x0) + 4)));
                *(float *)(((t4 - 0x8) + 0x0)) = u1;
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = u0;
                t10 = t4;
                t4 = (t4 - 0x8);
                u54[0] = u3;
                u54[1] = u4;
                u54[2] = u5;
                u54[3] = 1.0f;
                _builtin_ftrv(u54, u54);
                u3 = u54[0];
                u4 = u54[1];
                u5 = u54[2];
                *(float *)(((t4 - 0x8) + 0x0)) = (1.0f / u38[0]);
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = (u38[2] * (1.0f / u38[0]));
                t4 = (t4 - 0x8);
                t3 = (t3 - 32);
                *(float *)(((t4 - 0x8) + 0x0)) = (u38[1] * (1.0f / u38[0]));
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = u38[0];
                t4 = (t4 - 0x8);
                t2 = (t2 + 0x40);
                *(unsigned int *)((t4 + 0x0)) = t10;
                u0 = (*(float *)((((((t9 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
                u1 = ((((struct o8_float *)(((t9 + 0x8) + 0x8)))->v));
                _builtin_prefetch((void *)t4);
                t4 = (t4 + 0x40);
                continue;
            }
            t5 = (t5 - 0x1);
            if ((t5 != 0)) {
                t1 = 0x3;
                t9 = (t8 + t3);
                if ((t7 & 1) != 0) {
                    t7 = t3;
                    t3 = (t3 + 0x18);
                    t9 = (t7 - 8);
                }
                t3 = (t3 + 0x20);
                u3 = (*(float *)(((t9 + 0x0) + 4)));
                u4 = (*(float *)((t9 + 0x0)));
                _builtin_prefetch((void *)t3);
                *(volatile float *)(((t9 + 0x8) + 0x0));
                u5 = (*(float *)((((t9 + 0x8) + 0x0) + 4)));
                *(volatile float *)((((t9 + 0x8) + 0x8) + 0x0));
                u2 = (*(float *)(((((t9 + 0x8) + 0x8) + 0x0) + 4)));
                *(float *)(((t4 - 0x8) + 0x0)) = u1;
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = u0;
                t7 = (t4 >> 1);
                t4 = (t4 - 0x8);
                u70[0] = u3;
                u70[1] = u4;
                u70[2] = u5;
                u70[3] = 1.0f;
                _builtin_ftrv(u70, u70);
                u3 = u70[0];
                u4 = u70[1];
                u5 = u70[2];
                *(float *)(((t4 - 0x8) + 0x0)) = (1.0f / u38[0]);
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = (u38[2] * (1.0f / u38[0]));
                t4 = (t4 - 0x8);
                t3 = (t3 - 32);
                *(float *)(((t4 - 0x8) + 0x0)) = (u38[1] * (1.0f / u38[0]));
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = u38[0];
                t4 = (t4 - 0x8);
                t2 = (t2 + 0x40);
                *(unsigned int *)((t4 + 0x0)) = t7;
                u0 = (*(float *)((((((t9 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
                u1 = ((((struct o8_float *)(((t9 + 0x8) + 0x8)))->v));
                _builtin_prefetch((void *)t4);
                t4 = (t4 + 0x40);
                continue;
            }
            u123 = u38[2]; u124 = (1.0f / u38[0]); u125 = u38[0]; u126 = u38[1]; break;
        }
        t5 = (t5 - 0x1);
        if ((t5 != 0)) {
            t1 = 0x3;
            t7 = (t6 + t3);
            if ((t0 & 1) != 0) {
                t0 = t3;
                t3 = (t3 + 0x18);
                t7 = (t0 - 8);
            }
            t3 = (t3 + 0x20);
            u6 = *(float *)((t7 + 0x0));
            u7 = *(float *)(((t7 + 0x0) + 4));
            _builtin_prefetch((void *)t3);
            *(volatile float *)(((t7 + 0x8) + 0x0));
            u8 = *(float *)((((t7 + 0x8) + 0x0) + 4));
            u5 = (u5 * (1.0f / u3));
            *(volatile float *)((((t7 + 0x8) + 0x8) + 0x0));
            u2 = (*(float *)(((((t7 + 0x8) + 0x8) + 0x0) + 4)));
            u4 = (u4 * (1.0f / u3));
            *(float *)(((t4 - 0x8) + 0x0)) = u1;
            *(float *)((((t4 - 0x8) + 0x0) + 4)) = u0;
            t0 = (t4 >> 1);
            t4 = (t4 - 0x8);
            u85[0] = u7;
            u85[1] = u6;
            u85[2] = u8;
            u85[3] = 1.0f;
            _builtin_ftrv(u85, u85);
            *(float *)(((t4 - 0x8) + 0x0)) = (1.0f / u3);
            *(float *)((((t4 - 0x8) + 0x0) + 4)) = u5;
            t4 = (t4 - 0x8);
            t3 = (t3 - 32);
            *(float *)(((t4 - 0x8) + 0x0)) = u4;
            *(float *)((((t4 - 0x8) + 0x0) + 4)) = u3;
            t4 = (t4 - 0x8);
            *(unsigned int *)((t4 + 0x0)) = t0;
            u0 = (*(float *)((((((t7 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
            u1 = ((((struct o8_float *)(((t7 + 0x8) + 0x8)))->v));
            t1 = (t1 - 0x1);
            _builtin_prefetch((void *)t4);
            t4 = (t4 + 0x40);
            *(float *)(((t4 - 0x8) + 0x0)) = 0.0f;
            *(float *)((((t4 - 0x8) + 0x0) + 4)) = u2;
            t4 = (t4 - 0x8);
            t0 = *(int *)((t3 + 0x0));
            t3 = (t3 + 0x4);
            t6 = *(int *)((t3 + 0x0));
            t3 = (t3 + 0x4);
            if (t1 != 0) {
                t7 = (t6 + t3);
                if ((t0 & 1) != 0) {
                    t8 = t3;
                    t3 = (t3 + 0x18);
                    t7 = (t8 - 8);
                }
                t3 = (t3 + 0x20);
                u3 = (*(float *)(((t7 + 0x0) + 4)));
                u4 = (*(float *)((t7 + 0x0)));
                _builtin_prefetch((void *)t3);
                *(volatile float *)(((t7 + 0x8) + 0x0));
                u5 = (*(float *)((((t7 + 0x8) + 0x0) + 4)));
                *(volatile float *)((((t7 + 0x8) + 0x8) + 0x0));
                u2 = (*(float *)(((((t7 + 0x8) + 0x8) + 0x0) + 4)));
                *(float *)(((t4 - 0x8) + 0x0)) = u1;
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = u0;
                t8 = t4;
                t4 = (t4 - 0x8);
                u101[0] = u3;
                u101[1] = u4;
                u101[2] = u5;
                u101[3] = 1.0f;
                _builtin_ftrv(u101, u101);
                u3 = u101[0];
                u4 = u101[1];
                u5 = u101[2];
                *(float *)(((t4 - 0x8) + 0x0)) = (1.0f / u85[0]);
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = (u85[2] * (1.0f / u85[0]));
                t4 = (t4 - 0x8);
                t3 = (t3 - 32);
                *(float *)(((t4 - 0x8) + 0x0)) = (u85[1] * (1.0f / u85[0]));
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = u85[0];
                t4 = (t4 - 0x8);
                t2 = (t2 + 0x40);
                *(unsigned int *)((t4 + 0x0)) = t8;
                u0 = (*(float *)((((((t7 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
                u1 = ((((struct o8_float *)(((t7 + 0x8) + 0x8)))->v));
                _builtin_prefetch((void *)t4);
                t4 = (t4 + 0x40);
                continue;
            }
            t5 = (t5 - 0x1);
            if ((t5 != 0)) {
                t1 = 0x3;
                t7 = (t6 + t3);
                if ((t0 & 1) != 0) {
                    t0 = t3;
                    t3 = (t3 + 0x18);
                    t7 = (t0 - 8);
                }
                t3 = (t3 + 0x20);
                u3 = (*(float *)(((t7 + 0x0) + 4)));
                u4 = (*(float *)((t7 + 0x0)));
                _builtin_prefetch((void *)t3);
                *(volatile float *)(((t7 + 0x8) + 0x0));
                u5 = (*(float *)((((t7 + 0x8) + 0x0) + 4)));
                *(volatile float *)((((t7 + 0x8) + 0x8) + 0x0));
                u2 = (*(float *)(((((t7 + 0x8) + 0x8) + 0x0) + 4)));
                *(float *)(((t4 - 0x8) + 0x0)) = u1;
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = u0;
                t0 = (t4 >> 1);
                t4 = (t4 - 0x8);
                u117[0] = u3;
                u117[1] = u4;
                u117[2] = u5;
                u117[3] = 1.0f;
                _builtin_ftrv(u117, u117);
                u3 = u117[0];
                u4 = u117[1];
                u5 = u117[2];
                *(float *)(((t4 - 0x8) + 0x0)) = (1.0f / u85[0]);
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = (u85[2] * (1.0f / u85[0]));
                t4 = (t4 - 0x8);
                t3 = (t3 - 32);
                *(float *)(((t4 - 0x8) + 0x0)) = (u85[1] * (1.0f / u85[0]));
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = u85[0];
                t4 = (t4 - 0x8);
                t2 = (t2 + 0x40);
                *(unsigned int *)((t4 + 0x0)) = t0;
                u0 = (*(float *)((((((t7 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
                u1 = ((((struct o8_float *)(((t7 + 0x8) + 0x8)))->v));
                _builtin_prefetch((void *)t4);
                t4 = (t4 + 0x40);
                continue;
            }
            u123 = u85[2]; u124 = (1.0f / u85[0]); u125 = u85[0]; u126 = u85[1]; break;
        }
        u5 = (u5 * (1.0f / u3));
        *(float *)(((t4 - 0x8) + 0x0)) = u1;
        *(float *)((((t4 - 0x8) + 0x0) + 4)) = u0;
        t0 = (t4 >> 1);
        t4 = (t4 - 0x8);
        u4 = (u4 * (1.0f / u3));
        *(float *)(((t4 - 0x8) + 0x0)) = (1.0f / u3);
        *(float *)((((t4 - 0x8) + 0x0) + 4)) = u5;
        t4 = (t4 - 0x8);
        t2 = (t2 + 0x20);
        *(float *)(((t4 - 0x8) + 0x0)) = u4;
        *(float *)((((t4 - 0x8) + 0x0) + 4)) = u3;
        t4 = (t4 - 0x8);
        t3 = (t3 - 8);
        *(unsigned int *)((t4 + 0x0)) = t0;
        _builtin_prefetch((void *)t4);
        t4 = (t4 + 0x20);
        return u0;
    }
    *(float *)(((t4 - 0x8) + 0x0)) = u1;
    *(float *)((((t4 - 0x8) + 0x0) + 4)) = u0;
    *(float *)((((t4 - 0x8) - 0x8) + 0x0)) = u124;
    *(float *)(((((t4 - 0x8) - 0x8) + 0x0) + 4)) = (u123 * u124);
    *(float *)(((((t4 - 0x8) - 0x8) - 0x8) + 0x0)) = (u126 * u124);
    *(float *)((((((t4 - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = u125;
    *(unsigned int *)(((((t4 - 0x8) - 0x8) - 0x8) + 0x0)) = (t4 >> 1);
    _builtin_prefetch((void *)(((t4 - 0x8) - 0x8) - 0x8));
    return u0;
}

int gdFsReinitG(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(int *)0xC1737EC;
    if (t0 == 0) {
        return 0xFFFFFFFF;
    }
    t1 = 0x0;
    t2 = (0x1080 + t0);
    for (;;) {
        if ((int)t1 >= (int)((*(int *)(((*(int *)0xC1737EC) + 0x0))) + 0x1)) {
            break;
        }
        gdFsClose(t2);
        t1 = (t1 + 0x1);
        t2 = (t2 + 0x54);
    }
    t1 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    t2 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)(((*(int *)0xC1737EC) + 0xC))) + 0x0)))))(t0, a5, a6, a7);
    (((struct o38_ushort *)((*(int *)0xC1737EC)))->v) = 0x0;
    *(unsigned int *)(((*(int *)0xC1737EC) + 0x20)) = 0x0;
    *(unsigned int *)(((*(int *)0xC1737EC) + 0x1C)) = 0x0;
    (((struct o3A_ushort *)((*(int *)0xC1737EC)))->v) = 0x0;
    *(unsigned int *)(((*(int *)0xC1737EC) + 0x34)) = 0x0;
    t0 = 0x3A;
    t2 = ((*(int *)0xC1737EC) + 0x1080);
    t3 = 0x0;
    for (;;) {
        if ((int)t3 >= (int)((*(int *)(((*(int *)0xC1737EC) + 0x0))) + 0x1)) {
            break;
        }
        t0 = 0x4C;
        *(unsigned short *)((t2 + t0)) = 0x0;
        t3 = (t3 + 0x1);
        *(unsigned int *)((t2 + 0x0)) = (*(int *)0xC1737EC);
        t2 = (t2 + 0x54);
    }
    t0 = *(int *)0xC1737EC;
    *(unsigned int *)((t0 + 0x14)) = (0x1080 + t0);
    t0 = *(int *)0xC1737EC;
    *(unsigned int *)((t0 + 0x18)) = ((0x1080 + t0) + 0x54);
    gdFsCreateHnG((*(int *)(((*(int *)0xC1737EC) + 0x14))), 0x0, 0x0, 0x0);
    _builtin_set_imask(((unsigned int)(((t1 & 0xF) << 2) << 2) >> 4));
    return FUN_0c14a2ba();
}

int FUN_0c05626c(void)
{
    register int t4;
    register int t5;
    int t6;
    register int t8;

    (((struct oC_float *)0xC2B3110)->v) = (float)(((((struct o0_int *)0xC2B3164)->v)) + 0xAA);
    (((struct o14_float *)0xC2B3110)->v) = (((((struct o10_float *)0xC2B3164)->v)) + 1.0f);
    (((struct o18_float *)0xC2B3110)->v) = (((((struct o10_float *)0xC2B3164)->v)) + 1.0f);
    (((struct o20_float *)0xC2B3110)->v) = 0.0f;
    (((struct o28_float *)0xC2B3110)->v) = 1.0f;
    (((struct o38_uint *)0xC2B3110)->v) = 0x200A;
    (((struct o2C_uint *)0xC2B3110)->v) = 0x0;
    t4 = (FUN_0c076230(0.75f, 0.75f, 0.75f));
    t5 = 0x0;
    t6 = 0x0;
    for (;;) {
        t8 = (((struct o0_int *)0xC2B3110)->v);
        if ((int)t8 > (int)(((t6 << 1) + t6) + 0x34)) {
            if ((int)t8 <= (int)0x58) {
                t4 = 0x3;
                t4 = ((int)((int)t8 % (int)t4));
                if (t4 == 0) {
                    t4 = 0x3;
                    t4 = ((int)((int)t8 % (int)t4));
                    if ((t4 == 0) && (t6 == 0)) {
                        t4 = (FUN_0c058ca6(0x205A9, 0x0));
                        *(unsigned int *)0xC1321F0 = ((*(int *)0xC1321F0) + 0x1);
                    }
                }
            }
            if ((int)t6 >= (int)0x5) {
                t5 = 0x10;
            }
            t4 = 0x4;
            *(float *)((0xC2B3114 + t4)) = (float)(((t6 * 0x1E) + t5) + 0x50);
            t4 = 0xC132264;
            (((struct o4_uint *)0xC2B3110)->v) = (*(int *)(((t6 << 2) + t4)));
            t4 = (FUN_0c07ada0(0xC2B3114));
        }
        t6 = (t6 + 0x1);
        if ((int)t6 >= (int)0xB) {
            break;
        }
    }
    return FUN_0c026ce6();
}

int FUN_0c03df88(int a4, int a5, int a6, int a7)
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

    *(float *)0xC2A5858 = 10.0f;
    t0 = *(int *)0xC2A46D8;
    (((struct o24_uint *)0xC2A4680)->v) = t0;
    t1 = 0xC2A46D8;
    t2 = t0;
    t0 = 0x0;
    for (;;) {
        if ((int)t0 >= (int)((((struct o0_int *)0xC2A4680)->v))) {
            break;
        }
        t2 = 0xC2A4680;
        t2 = (t2 + 0x4);
        t1 = (*(int *)((((t0 << 2) + t2) + 0x0)));
        t0 = (t0 + 0x1);
        t1 = (t1 << 2);
        t1 = (t1 << 1);
        t1 = (t1 + ((((struct o24_int *)0xC2A4680)->v)));
        t2 = (*(int *)((t1 + 0x8)));
        (((struct o24_uint *)0xC2A4680)->v) = t2;
    }
    t2 = 0xC03E048;
    t3 = t1;
    t1 = t0;
    t0 = 0x0;
    t4 = 0x0;
    u0 = 10.0f;
    for (;;) {
        if ((int)t4 >= (int)(*(int *)((((((struct o24_int *)0xC2A4680)->v)) + 0x4)))) {
            break;
        }
        t5 = t4;
        t5 = (t5 << 2);
        t5 = (t5 << 1);
        t5 = (t5 + ((((struct o24_int *)0xC2A4680)->v)));
        t5 = (*(int *)((t5 + 0xC)));
        if (t5 != 0) {
            t3 = (*(int *)((((((((struct o0_int *)0xC2A4680)->v)) << 2) + 0xC2A4684) + 0x0)));
            if (t4 != t3) {
                t0 = t4;
                t1 = 0x0;
            } else {
                t1 = 0x1;
                t0 = t4;
            }
            t2 = (((int (*)(int, int, int, int))(t5))(t1, t0, a6, a7));
        } else {
            t5 = t3;
            t6 = t1;
            t7 = t0;
            u1 = u0;
        }
        u0 = u1;
        t3 = t5;
        t4 = (t4 + 0x1);
        t1 = t6;
        t0 = t7;
    }
    t3 = *(int *)((((((struct o24_int *)0xC2A4680)->v)) + 0x0));
    t4 = t2;
    if (t3 != 0) {
        t4 = (((int (*)(int, int, int, int))(t3))(t1, t0, a6, a7));
    }
    return t4;
}

int FUN_0c03f03c(void)
{
    int stk[4];
    register int t1;
    int t24;
    register int t28;
    register int t37;
    int t6;
    register int t25;

    FUN_0c033b12(0x1);
    t1 = (((struct o24_int *)0xC2A464C)->v);
    if (((((struct o4_int *)0xC2A464C)->v)) == 0) {
        if (((t1 & 0x1) != 0) && (t6 = (((struct o18_int *)0xC2A46C8)->v), t6 == 0)) {
            FUN_0c03e07c();
        }
        if (((((struct o0_int *)0xC2A464C)->v)) == 1) {
            (((struct o4_uint *)0xC2A464C)->v) = ((((struct o0_int *)0xC2A464C)->v));
            FUN_0c030eb4();
            FUN_0c030eee(0.400000006f, 0.400000006f, 0.400000006f);
            FUN_0c02802a(0.800000012f);
            nlRenderTextureBegin(0x0);
        }
        t37 = 0x0;
    } else {
        t24 = (((struct o14_int *)0xC2A46C8)->v);
        if (((t24 != 0xC0B384C) && (t24 != 0xC0B3824)) || ((t25 = (((struct o0_int *)0xC2A46C8)->v), (t25 & 8) != 0) || ((t1 & 0x1) == 0))) {
        } else {
            (((struct o0_uint *)0xC2A464C)->v) = 0x0;
        }
        t28 = (((struct o0_int *)0xC2A464C)->v);
        if (t28 == 0) {
            (((struct o4_uint *)0xC2A464C)->v) = t28;
            FUN_0c0339fc(0x0);
            FUN_0c03e792(0x8, 0x1);
            FUN_0c01e6f8(0x0);
            FUN_0c01ecaa(0x0);
            t37 = 0x0;
        } else {
            FUN_0c030f66(0x3);
            ExecWindow();
            t37 = 0x1;
        }
    }
    return t37;
}

float FUN_0c083880(int a4, int a5, int a6)
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
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u7;
    register float u8;
    register float u9;
    float u14[4];
    register float u124;
    register float u125;
    register float u126;
    register float u127;
    float u39[4];
    float u55[4];
    float u71[4];
    float u86[4];
    float u102[4];
    float u118[4];

    t0 = *(int *)((a4 + 0x0));
    t1 = (a4 + 0x4);
    t2 = ((a4 + 0x4) + 0x20);
    if (((*(int *)(((a4 + 0x4) + 0x0))) & 1) == 0) {
        t1 = ((*(int *)(((a4 + 0x4) + 0x4))) + (((a4 + 0x4) + 0x20) - 24));
        t2 = (((a4 + 0x4) + 0x20) - 24);
    }
    u0 = *(float *)((t1 + 0x0));
    u1 = *(float *)(((t1 + 0x0) + 4));
    *(volatile float *)(((t1 + 0x8) + 0x0));
    u2 = (((struct o8_float *)((t1 + 0x8)))->v);
    u3 = *(float *)(((((t1 + 0x8) + 0x8) + 0x0) + 4));
    u4 = (((struct o8_float *)(((t1 + 0x8) + 0x8)))->v);
    u5 = *(float *)((((((t1 + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    u14[0] = u1;
    u14[1] = u0;
    u14[2] = (*(float *)((((t1 + 0x8) + 0x0) + 4)));
    u14[3] = 1.0f;
    _builtin_ftrv(u14, u14);
    t1 = 0x3;
    t3 = t2;
    t2 = a5;
    t4 = (a6 + 0x20);
    t5 = t0;
    u0 = u5;
    u1 = u4;
    u4 = u3;
    u3 = u2;
    u2 = u14[0];
    u5 = u14[1];
    u6 = u14[2];
    for (;;) {
        *(float *)(((t4 - 0x8) + 0x0)) = u3;
        *(float *)((((t4 - 0x8) + 0x0) + 4)) = u4;
        t4 = (t4 - 0x8);
        t1 = (t1 - 0x1);
        t0 = *(int *)((t3 + 0x0));
        t3 = (t3 + 0x4);
        t6 = *(int *)((t3 + 0x0));
        t3 = (t3 + 0x4);
        if (t1 != 0) {
            t7 = (t6 + t3);
            if ((t0 & 1) != 0) {
                t8 = t3;
                t3 = (t3 + 0x18);
                t7 = (t8 - 8);
            }
            t3 = (t3 + 0x20);
            u7 = *(float *)((t7 + 0x0));
            u8 = *(float *)(((t7 + 0x0) + 4));
            _builtin_prefetch((void *)t3);
            *(volatile float *)(((t7 + 0x8) + 0x0));
            u9 = *(float *)((((t7 + 0x8) + 0x0) + 4));
            u6 = (u6 * (1.0f / u2));
            u4 = (*(float *)(((((t7 + 0x8) + 0x8) + 0x0) + 4)));
            u3 = ((((struct o8_float *)((t7 + 0x8)))->v));
            u5 = (u5 * (1.0f / u2));
            *(float *)(((t4 - 0x8) + 0x0)) = u1;
            *(float *)((((t4 - 0x8) + 0x0) + 4)) = u0;
            t8 = t4;
            t4 = (t4 - 0x8);
            u39[0] = u8;
            u39[1] = u7;
            u39[2] = u9;
            u39[3] = 1.0f;
            _builtin_ftrv(u39, u39);
            *(float *)(((t4 - 0x8) + 0x0)) = (1.0f / u2);
            *(float *)((((t4 - 0x8) + 0x0) + 4)) = u6;
            t4 = (t4 - 0x8);
            t3 = (t3 - 32);
            *(float *)(((t4 - 0x8) + 0x0)) = u5;
            *(float *)((((t4 - 0x8) + 0x0) + 4)) = u2;
            t4 = (t4 - 0x8);
            *(unsigned int *)((t4 + 0x0)) = t8;
            u0 = (*(float *)((((((t7 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
            u1 = ((((struct o8_float *)(((t7 + 0x8) + 0x8)))->v));
            t1 = (t1 - 0x1);
            _builtin_prefetch((void *)t4);
            t4 = (t4 + 0x40);
            *(float *)(((t4 - 0x8) + 0x0)) = u3;
            *(float *)((((t4 - 0x8) + 0x0) + 4)) = u4;
            t4 = (t4 - 0x8);
            t7 = *(int *)((t3 + 0x0));
            t3 = (t3 + 0x4);
            t8 = *(int *)((t3 + 0x0));
            t3 = (t3 + 0x4);
            if (t1 != 0) {
                t9 = (t8 + t3);
                if ((t7 & 1) != 0) {
                    t10 = t3;
                    t3 = (t3 + 0x18);
                    t9 = (t10 - 8);
                }
                t3 = (t3 + 0x20);
                u2 = (*(float *)(((t9 + 0x0) + 4)));
                u5 = (*(float *)((t9 + 0x0)));
                _builtin_prefetch((void *)t3);
                *(volatile float *)(((t9 + 0x8) + 0x0));
                u6 = (*(float *)((((t9 + 0x8) + 0x0) + 4)));
                u4 = (*(float *)(((((t9 + 0x8) + 0x8) + 0x0) + 4)));
                u3 = ((((struct o8_float *)((t9 + 0x8)))->v));
                *(float *)(((t4 - 0x8) + 0x0)) = u1;
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = u0;
                t10 = t4;
                t4 = (t4 - 0x8);
                u55[0] = u2;
                u55[1] = u5;
                u55[2] = u6;
                u55[3] = 1.0f;
                _builtin_ftrv(u55, u55);
                u2 = u55[0];
                u5 = u55[1];
                u6 = u55[2];
                *(float *)(((t4 - 0x8) + 0x0)) = (1.0f / u39[0]);
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = (u39[2] * (1.0f / u39[0]));
                t4 = (t4 - 0x8);
                t3 = (t3 - 32);
                *(float *)(((t4 - 0x8) + 0x0)) = (u39[1] * (1.0f / u39[0]));
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = u39[0];
                t4 = (t4 - 0x8);
                t2 = (t2 + 0x40);
                *(unsigned int *)((t4 + 0x0)) = t10;
                u0 = (*(float *)((((((t9 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
                u1 = ((((struct o8_float *)(((t9 + 0x8) + 0x8)))->v));
                _builtin_prefetch((void *)t4);
                t4 = (t4 + 0x40);
                continue;
            }
            t5 = (t5 - 0x1);
            if ((t5 != 0)) {
                t1 = 0x3;
                t9 = (t8 + t3);
                if ((t7 & 1) != 0) {
                    t7 = t3;
                    t3 = (t3 + 0x18);
                    t9 = (t7 - 8);
                }
                t3 = (t3 + 0x20);
                u2 = (*(float *)(((t9 + 0x0) + 4)));
                u5 = (*(float *)((t9 + 0x0)));
                _builtin_prefetch((void *)t3);
                *(volatile float *)(((t9 + 0x8) + 0x0));
                u6 = (*(float *)((((t9 + 0x8) + 0x0) + 4)));
                u4 = (*(float *)(((((t9 + 0x8) + 0x8) + 0x0) + 4)));
                u3 = ((((struct o8_float *)((t9 + 0x8)))->v));
                *(float *)(((t4 - 0x8) + 0x0)) = u1;
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = u0;
                t7 = (t4 >> 1);
                t4 = (t4 - 0x8);
                u71[0] = u2;
                u71[1] = u5;
                u71[2] = u6;
                u71[3] = 1.0f;
                _builtin_ftrv(u71, u71);
                u2 = u71[0];
                u5 = u71[1];
                u6 = u71[2];
                *(float *)(((t4 - 0x8) + 0x0)) = (1.0f / u39[0]);
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = (u39[2] * (1.0f / u39[0]));
                t4 = (t4 - 0x8);
                t3 = (t3 - 32);
                *(float *)(((t4 - 0x8) + 0x0)) = (u39[1] * (1.0f / u39[0]));
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = u39[0];
                t4 = (t4 - 0x8);
                t2 = (t2 + 0x40);
                *(unsigned int *)((t4 + 0x0)) = t7;
                u0 = (*(float *)((((((t9 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
                u1 = ((((struct o8_float *)(((t9 + 0x8) + 0x8)))->v));
                _builtin_prefetch((void *)t4);
                t4 = (t4 + 0x40);
                continue;
            }
            u124 = u39[2]; u125 = (1.0f / u39[0]); u126 = u39[0]; u127 = u39[1]; break;
        }
        t5 = (t5 - 0x1);
        if ((t5 != 0)) {
            t1 = 0x3;
            t7 = (t6 + t3);
            if ((t0 & 1) != 0) {
                t0 = t3;
                t3 = (t3 + 0x18);
                t7 = (t0 - 8);
            }
            t3 = (t3 + 0x20);
            u7 = *(float *)((t7 + 0x0));
            u8 = *(float *)(((t7 + 0x0) + 4));
            _builtin_prefetch((void *)t3);
            *(volatile float *)(((t7 + 0x8) + 0x0));
            u9 = *(float *)((((t7 + 0x8) + 0x0) + 4));
            u6 = (u6 * (1.0f / u2));
            u4 = (*(float *)(((((t7 + 0x8) + 0x8) + 0x0) + 4)));
            u3 = ((((struct o8_float *)((t7 + 0x8)))->v));
            u5 = (u5 * (1.0f / u2));
            *(float *)(((t4 - 0x8) + 0x0)) = u1;
            *(float *)((((t4 - 0x8) + 0x0) + 4)) = u0;
            t0 = (t4 >> 1);
            t4 = (t4 - 0x8);
            u86[0] = u8;
            u86[1] = u7;
            u86[2] = u9;
            u86[3] = 1.0f;
            _builtin_ftrv(u86, u86);
            *(float *)(((t4 - 0x8) + 0x0)) = (1.0f / u2);
            *(float *)((((t4 - 0x8) + 0x0) + 4)) = u6;
            t4 = (t4 - 0x8);
            t3 = (t3 - 32);
            *(float *)(((t4 - 0x8) + 0x0)) = u5;
            *(float *)((((t4 - 0x8) + 0x0) + 4)) = u2;
            t4 = (t4 - 0x8);
            *(unsigned int *)((t4 + 0x0)) = t0;
            u0 = (*(float *)((((((t7 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
            u1 = ((((struct o8_float *)(((t7 + 0x8) + 0x8)))->v));
            t1 = (t1 - 0x1);
            _builtin_prefetch((void *)t4);
            t4 = (t4 + 0x40);
            *(float *)(((t4 - 0x8) + 0x0)) = u3;
            *(float *)((((t4 - 0x8) + 0x0) + 4)) = u4;
            t4 = (t4 - 0x8);
            t0 = *(int *)((t3 + 0x0));
            t3 = (t3 + 0x4);
            t6 = *(int *)((t3 + 0x0));
            t3 = (t3 + 0x4);
            if (t1 != 0) {
                t7 = (t6 + t3);
                if ((t0 & 1) != 0) {
                    t8 = t3;
                    t3 = (t3 + 0x18);
                    t7 = (t8 - 8);
                }
                t3 = (t3 + 0x20);
                u2 = (*(float *)(((t7 + 0x0) + 4)));
                u5 = (*(float *)((t7 + 0x0)));
                _builtin_prefetch((void *)t3);
                *(volatile float *)(((t7 + 0x8) + 0x0));
                u6 = (*(float *)((((t7 + 0x8) + 0x0) + 4)));
                u4 = (*(float *)(((((t7 + 0x8) + 0x8) + 0x0) + 4)));
                u3 = ((((struct o8_float *)((t7 + 0x8)))->v));
                *(float *)(((t4 - 0x8) + 0x0)) = u1;
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = u0;
                t8 = t4;
                t4 = (t4 - 0x8);
                u102[0] = u2;
                u102[1] = u5;
                u102[2] = u6;
                u102[3] = 1.0f;
                _builtin_ftrv(u102, u102);
                u2 = u102[0];
                u5 = u102[1];
                u6 = u102[2];
                *(float *)(((t4 - 0x8) + 0x0)) = (1.0f / u86[0]);
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = (u86[2] * (1.0f / u86[0]));
                t4 = (t4 - 0x8);
                t3 = (t3 - 32);
                *(float *)(((t4 - 0x8) + 0x0)) = (u86[1] * (1.0f / u86[0]));
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = u86[0];
                t4 = (t4 - 0x8);
                t2 = (t2 + 0x40);
                *(unsigned int *)((t4 + 0x0)) = t8;
                u0 = (*(float *)((((((t7 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
                u1 = ((((struct o8_float *)(((t7 + 0x8) + 0x8)))->v));
                _builtin_prefetch((void *)t4);
                t4 = (t4 + 0x40);
                continue;
            }
            t5 = (t5 - 0x1);
            if ((t5 != 0)) {
                t1 = 0x3;
                t7 = (t6 + t3);
                if ((t0 & 1) != 0) {
                    t0 = t3;
                    t3 = (t3 + 0x18);
                    t7 = (t0 - 8);
                }
                t3 = (t3 + 0x20);
                u2 = (*(float *)(((t7 + 0x0) + 4)));
                u5 = (*(float *)((t7 + 0x0)));
                _builtin_prefetch((void *)t3);
                *(volatile float *)(((t7 + 0x8) + 0x0));
                u6 = (*(float *)((((t7 + 0x8) + 0x0) + 4)));
                u4 = (*(float *)(((((t7 + 0x8) + 0x8) + 0x0) + 4)));
                u3 = ((((struct o8_float *)((t7 + 0x8)))->v));
                *(float *)(((t4 - 0x8) + 0x0)) = u1;
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = u0;
                t0 = (t4 >> 1);
                t4 = (t4 - 0x8);
                u118[0] = u2;
                u118[1] = u5;
                u118[2] = u6;
                u118[3] = 1.0f;
                _builtin_ftrv(u118, u118);
                u2 = u118[0];
                u5 = u118[1];
                u6 = u118[2];
                *(float *)(((t4 - 0x8) + 0x0)) = (1.0f / u86[0]);
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = (u86[2] * (1.0f / u86[0]));
                t4 = (t4 - 0x8);
                t3 = (t3 - 32);
                *(float *)(((t4 - 0x8) + 0x0)) = (u86[1] * (1.0f / u86[0]));
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = u86[0];
                t4 = (t4 - 0x8);
                t2 = (t2 + 0x40);
                *(unsigned int *)((t4 + 0x0)) = t0;
                u0 = (*(float *)((((((t7 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
                u1 = ((((struct o8_float *)(((t7 + 0x8) + 0x8)))->v));
                _builtin_prefetch((void *)t4);
                t4 = (t4 + 0x40);
                continue;
            }
            u124 = u86[2]; u125 = (1.0f / u86[0]); u126 = u86[0]; u127 = u86[1]; break;
        }
        u6 = (u6 * (1.0f / u2));
        *(float *)(((t4 - 0x8) + 0x0)) = u1;
        *(float *)((((t4 - 0x8) + 0x0) + 4)) = u0;
        t0 = (t4 >> 1);
        t4 = (t4 - 0x8);
        u5 = (u5 * (1.0f / u2));
        *(float *)(((t4 - 0x8) + 0x0)) = (1.0f / u2);
        *(float *)((((t4 - 0x8) + 0x0) + 4)) = u6;
        t4 = (t4 - 0x8);
        t2 = (t2 + 0x20);
        *(float *)(((t4 - 0x8) + 0x0)) = u5;
        *(float *)((((t4 - 0x8) + 0x0) + 4)) = u2;
        t4 = (t4 - 0x8);
        t3 = (t3 - 8);
        *(unsigned int *)((t4 + 0x0)) = t0;
        _builtin_prefetch((void *)t4);
        t4 = (t4 + 0x20);
        return u0;
    }
    *(float *)(((t4 - 0x8) + 0x0)) = u1;
    *(float *)((((t4 - 0x8) + 0x0) + 4)) = u0;
    *(float *)((((t4 - 0x8) - 0x8) + 0x0)) = u125;
    *(float *)(((((t4 - 0x8) - 0x8) + 0x0) + 4)) = (u124 * u125);
    *(float *)(((((t4 - 0x8) - 0x8) - 0x8) + 0x0)) = (u127 * u125);
    *(float *)((((((t4 - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = u126;
    *(unsigned int *)(((((t4 - 0x8) - 0x8) - 0x8) + 0x0)) = (t4 >> 1);
    _builtin_prefetch((void *)(((t4 - 0x8) - 0x8) - 0x8));
    return u0;
}

float FUN_0c086b60(int a4, int a5, int a6)
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
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u7;
    register float u8;
    register float u9;
    float u14[4];
    register float u124;
    register float u125;
    register float u126;
    register float u127;
    float u39[4];
    float u55[4];
    float u71[4];
    float u86[4];
    float u102[4];
    float u118[4];

    t0 = *(int *)((a4 + 0x0));
    t1 = (a4 + 0x4);
    t2 = ((a4 + 0x4) + 0x20);
    if (((*(int *)(((a4 + 0x4) + 0x0))) & 1) == 0) {
        t1 = ((*(int *)(((a4 + 0x4) + 0x4))) + (((a4 + 0x4) + 0x20) - 24));
        t2 = (((a4 + 0x4) + 0x20) - 24);
    }
    u0 = *(float *)((t1 + 0x0));
    u1 = *(float *)(((t1 + 0x0) + 4));
    *(volatile float *)(((t1 + 0x8) + 0x0));
    u2 = (((struct o8_float *)((t1 + 0x8)))->v);
    u3 = *(float *)(((((t1 + 0x8) + 0x8) + 0x0) + 4));
    u4 = (((struct o8_float *)(((t1 + 0x8) + 0x8)))->v);
    u5 = *(float *)((((((t1 + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    u14[0] = u1;
    u14[1] = u0;
    u14[2] = (*(float *)((((t1 + 0x8) + 0x0) + 4)));
    u14[3] = 1.0f;
    _builtin_ftrv(u14, u14);
    t1 = 0x3;
    t3 = t2;
    t2 = a5;
    t4 = (a6 + 0x20);
    t5 = t0;
    u0 = u5;
    u1 = u4;
    u4 = u3;
    u3 = u2;
    u2 = u14[0];
    u5 = u14[1];
    u6 = u14[2];
    for (;;) {
        *(float *)(((t4 - 0x8) + 0x0)) = u3;
        *(float *)((((t4 - 0x8) + 0x0) + 4)) = u4;
        t4 = (t4 - 0x8);
        t1 = (t1 - 0x1);
        t0 = *(int *)((t3 + 0x0));
        t3 = (t3 + 0x4);
        t6 = *(int *)((t3 + 0x0));
        t3 = (t3 + 0x4);
        if (t1 != 0) {
            t7 = (t6 + t3);
            if ((t0 & 1) != 0) {
                t8 = t3;
                t3 = (t3 + 0x18);
                t7 = (t8 - 8);
            }
            t3 = (t3 + 0x20);
            u7 = *(float *)((t7 + 0x0));
            u8 = *(float *)(((t7 + 0x0) + 4));
            _builtin_prefetch((void *)t3);
            *(volatile float *)(((t7 + 0x8) + 0x0));
            u9 = *(float *)((((t7 + 0x8) + 0x0) + 4));
            u6 = (u6 * (1.0f / u2));
            u4 = (*(float *)(((((t7 + 0x8) + 0x8) + 0x0) + 4)));
            u3 = ((((struct o8_float *)((t7 + 0x8)))->v));
            u5 = (u5 * (1.0f / u2));
            *(float *)(((t4 - 0x8) + 0x0)) = u1;
            *(float *)((((t4 - 0x8) + 0x0) + 4)) = u0;
            t8 = t4;
            t4 = (t4 - 0x8);
            u39[0] = u8;
            u39[1] = u7;
            u39[2] = u9;
            u39[3] = 1.0f;
            _builtin_ftrv(u39, u39);
            *(float *)(((t4 - 0x8) + 0x0)) = (1.0f / u2);
            *(float *)((((t4 - 0x8) + 0x0) + 4)) = u6;
            t4 = (t4 - 0x8);
            t3 = (t3 - 32);
            *(float *)(((t4 - 0x8) + 0x0)) = u5;
            *(float *)((((t4 - 0x8) + 0x0) + 4)) = u2;
            t4 = (t4 - 0x8);
            *(unsigned int *)((t4 + 0x0)) = t8;
            u0 = (*(float *)((((((t7 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
            u1 = ((((struct o8_float *)(((t7 + 0x8) + 0x8)))->v));
            t1 = (t1 - 0x1);
            _builtin_prefetch((void *)t4);
            t4 = (t4 + 0x40);
            *(float *)(((t4 - 0x8) + 0x0)) = u3;
            *(float *)((((t4 - 0x8) + 0x0) + 4)) = u4;
            t4 = (t4 - 0x8);
            t7 = *(int *)((t3 + 0x0));
            t3 = (t3 + 0x4);
            t8 = *(int *)((t3 + 0x0));
            t3 = (t3 + 0x4);
            if (t1 != 0) {
                t9 = (t8 + t3);
                if ((t7 & 1) != 0) {
                    t10 = t3;
                    t3 = (t3 + 0x18);
                    t9 = (t10 - 8);
                }
                t3 = (t3 + 0x20);
                u2 = (*(float *)(((t9 + 0x0) + 4)));
                u5 = (*(float *)((t9 + 0x0)));
                _builtin_prefetch((void *)t3);
                *(volatile float *)(((t9 + 0x8) + 0x0));
                u6 = (*(float *)((((t9 + 0x8) + 0x0) + 4)));
                u4 = (*(float *)(((((t9 + 0x8) + 0x8) + 0x0) + 4)));
                u3 = ((((struct o8_float *)((t9 + 0x8)))->v));
                *(float *)(((t4 - 0x8) + 0x0)) = u1;
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = u0;
                t10 = t4;
                t4 = (t4 - 0x8);
                u55[0] = u2;
                u55[1] = u5;
                u55[2] = u6;
                u55[3] = 1.0f;
                _builtin_ftrv(u55, u55);
                u2 = u55[0];
                u5 = u55[1];
                u6 = u55[2];
                *(float *)(((t4 - 0x8) + 0x0)) = (1.0f / u39[0]);
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = (u39[2] * (1.0f / u39[0]));
                t4 = (t4 - 0x8);
                t3 = (t3 - 32);
                *(float *)(((t4 - 0x8) + 0x0)) = (u39[1] * (1.0f / u39[0]));
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = u39[0];
                t4 = (t4 - 0x8);
                t2 = (t2 + 0x40);
                *(unsigned int *)((t4 + 0x0)) = t10;
                u0 = (*(float *)((((((t9 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
                u1 = ((((struct o8_float *)(((t9 + 0x8) + 0x8)))->v));
                _builtin_prefetch((void *)t4);
                t4 = (t4 + 0x40);
                continue;
            }
            t5 = (t5 - 0x1);
            if ((t5 != 0)) {
                t1 = 0x3;
                t9 = (t8 + t3);
                if ((t7 & 1) != 0) {
                    t7 = t3;
                    t3 = (t3 + 0x18);
                    t9 = (t7 - 8);
                }
                t3 = (t3 + 0x20);
                u2 = (*(float *)(((t9 + 0x0) + 4)));
                u5 = (*(float *)((t9 + 0x0)));
                _builtin_prefetch((void *)t3);
                *(volatile float *)(((t9 + 0x8) + 0x0));
                u6 = (*(float *)((((t9 + 0x8) + 0x0) + 4)));
                u4 = (*(float *)(((((t9 + 0x8) + 0x8) + 0x0) + 4)));
                u3 = ((((struct o8_float *)((t9 + 0x8)))->v));
                *(float *)(((t4 - 0x8) + 0x0)) = u1;
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = u0;
                t7 = (t4 >> 1);
                t4 = (t4 - 0x8);
                u71[0] = u2;
                u71[1] = u5;
                u71[2] = u6;
                u71[3] = 1.0f;
                _builtin_ftrv(u71, u71);
                u2 = u71[0];
                u5 = u71[1];
                u6 = u71[2];
                *(float *)(((t4 - 0x8) + 0x0)) = (1.0f / u39[0]);
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = (u39[2] * (1.0f / u39[0]));
                t4 = (t4 - 0x8);
                t3 = (t3 - 32);
                *(float *)(((t4 - 0x8) + 0x0)) = (u39[1] * (1.0f / u39[0]));
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = u39[0];
                t4 = (t4 - 0x8);
                t2 = (t2 + 0x40);
                *(unsigned int *)((t4 + 0x0)) = t7;
                u0 = (*(float *)((((((t9 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
                u1 = ((((struct o8_float *)(((t9 + 0x8) + 0x8)))->v));
                _builtin_prefetch((void *)t4);
                t4 = (t4 + 0x40);
                continue;
            }
            u124 = u39[2]; u125 = (1.0f / u39[0]); u126 = u39[0]; u127 = u39[1]; break;
        }
        t5 = (t5 - 0x1);
        if ((t5 != 0)) {
            t1 = 0x3;
            t7 = (t6 + t3);
            if ((t0 & 1) != 0) {
                t0 = t3;
                t3 = (t3 + 0x18);
                t7 = (t0 - 8);
            }
            t3 = (t3 + 0x20);
            u7 = *(float *)((t7 + 0x0));
            u8 = *(float *)(((t7 + 0x0) + 4));
            _builtin_prefetch((void *)t3);
            *(volatile float *)(((t7 + 0x8) + 0x0));
            u9 = *(float *)((((t7 + 0x8) + 0x0) + 4));
            u6 = (u6 * (1.0f / u2));
            u4 = (*(float *)(((((t7 + 0x8) + 0x8) + 0x0) + 4)));
            u3 = ((((struct o8_float *)((t7 + 0x8)))->v));
            u5 = (u5 * (1.0f / u2));
            *(float *)(((t4 - 0x8) + 0x0)) = u1;
            *(float *)((((t4 - 0x8) + 0x0) + 4)) = u0;
            t0 = (t4 >> 1);
            t4 = (t4 - 0x8);
            u86[0] = u8;
            u86[1] = u7;
            u86[2] = u9;
            u86[3] = 1.0f;
            _builtin_ftrv(u86, u86);
            *(float *)(((t4 - 0x8) + 0x0)) = (1.0f / u2);
            *(float *)((((t4 - 0x8) + 0x0) + 4)) = u6;
            t4 = (t4 - 0x8);
            t3 = (t3 - 32);
            *(float *)(((t4 - 0x8) + 0x0)) = u5;
            *(float *)((((t4 - 0x8) + 0x0) + 4)) = u2;
            t4 = (t4 - 0x8);
            *(unsigned int *)((t4 + 0x0)) = t0;
            u0 = (*(float *)((((((t7 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
            u1 = ((((struct o8_float *)(((t7 + 0x8) + 0x8)))->v));
            t1 = (t1 - 0x1);
            _builtin_prefetch((void *)t4);
            t4 = (t4 + 0x40);
            *(float *)(((t4 - 0x8) + 0x0)) = u3;
            *(float *)((((t4 - 0x8) + 0x0) + 4)) = u4;
            t4 = (t4 - 0x8);
            t0 = *(int *)((t3 + 0x0));
            t3 = (t3 + 0x4);
            t6 = *(int *)((t3 + 0x0));
            t3 = (t3 + 0x4);
            if (t1 != 0) {
                t7 = (t6 + t3);
                if ((t0 & 1) != 0) {
                    t8 = t3;
                    t3 = (t3 + 0x18);
                    t7 = (t8 - 8);
                }
                t3 = (t3 + 0x20);
                u2 = (*(float *)(((t7 + 0x0) + 4)));
                u5 = (*(float *)((t7 + 0x0)));
                _builtin_prefetch((void *)t3);
                *(volatile float *)(((t7 + 0x8) + 0x0));
                u6 = (*(float *)((((t7 + 0x8) + 0x0) + 4)));
                u4 = (*(float *)(((((t7 + 0x8) + 0x8) + 0x0) + 4)));
                u3 = ((((struct o8_float *)((t7 + 0x8)))->v));
                *(float *)(((t4 - 0x8) + 0x0)) = u1;
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = u0;
                t8 = t4;
                t4 = (t4 - 0x8);
                u102[0] = u2;
                u102[1] = u5;
                u102[2] = u6;
                u102[3] = 1.0f;
                _builtin_ftrv(u102, u102);
                u2 = u102[0];
                u5 = u102[1];
                u6 = u102[2];
                *(float *)(((t4 - 0x8) + 0x0)) = (1.0f / u86[0]);
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = (u86[2] * (1.0f / u86[0]));
                t4 = (t4 - 0x8);
                t3 = (t3 - 32);
                *(float *)(((t4 - 0x8) + 0x0)) = (u86[1] * (1.0f / u86[0]));
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = u86[0];
                t4 = (t4 - 0x8);
                t2 = (t2 + 0x40);
                *(unsigned int *)((t4 + 0x0)) = t8;
                u0 = (*(float *)((((((t7 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
                u1 = ((((struct o8_float *)(((t7 + 0x8) + 0x8)))->v));
                _builtin_prefetch((void *)t4);
                t4 = (t4 + 0x40);
                continue;
            }
            t5 = (t5 - 0x1);
            if ((t5 != 0)) {
                t1 = 0x3;
                t7 = (t6 + t3);
                if ((t0 & 1) != 0) {
                    t0 = t3;
                    t3 = (t3 + 0x18);
                    t7 = (t0 - 8);
                }
                t3 = (t3 + 0x20);
                u2 = (*(float *)(((t7 + 0x0) + 4)));
                u5 = (*(float *)((t7 + 0x0)));
                _builtin_prefetch((void *)t3);
                *(volatile float *)(((t7 + 0x8) + 0x0));
                u6 = (*(float *)((((t7 + 0x8) + 0x0) + 4)));
                u4 = (*(float *)(((((t7 + 0x8) + 0x8) + 0x0) + 4)));
                u3 = ((((struct o8_float *)((t7 + 0x8)))->v));
                *(float *)(((t4 - 0x8) + 0x0)) = u1;
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = u0;
                t0 = (t4 >> 1);
                t4 = (t4 - 0x8);
                u118[0] = u2;
                u118[1] = u5;
                u118[2] = u6;
                u118[3] = 1.0f;
                _builtin_ftrv(u118, u118);
                u2 = u118[0];
                u5 = u118[1];
                u6 = u118[2];
                *(float *)(((t4 - 0x8) + 0x0)) = (1.0f / u86[0]);
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = (u86[2] * (1.0f / u86[0]));
                t4 = (t4 - 0x8);
                t3 = (t3 - 32);
                *(float *)(((t4 - 0x8) + 0x0)) = (u86[1] * (1.0f / u86[0]));
                *(float *)((((t4 - 0x8) + 0x0) + 4)) = u86[0];
                t4 = (t4 - 0x8);
                t2 = (t2 + 0x40);
                *(unsigned int *)((t4 + 0x0)) = t0;
                u0 = (*(float *)((((((t7 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
                u1 = ((((struct o8_float *)(((t7 + 0x8) + 0x8)))->v));
                _builtin_prefetch((void *)t4);
                t4 = (t4 + 0x40);
                continue;
            }
            u124 = u86[2]; u125 = (1.0f / u86[0]); u126 = u86[0]; u127 = u86[1]; break;
        }
        u6 = (u6 * (1.0f / u2));
        *(float *)(((t4 - 0x8) + 0x0)) = u1;
        *(float *)((((t4 - 0x8) + 0x0) + 4)) = u0;
        t0 = (t4 >> 1);
        t4 = (t4 - 0x8);
        u5 = (u5 * (1.0f / u2));
        *(float *)(((t4 - 0x8) + 0x0)) = (1.0f / u2);
        *(float *)((((t4 - 0x8) + 0x0) + 4)) = u6;
        t4 = (t4 - 0x8);
        t2 = (t2 + 0x20);
        *(float *)(((t4 - 0x8) + 0x0)) = u5;
        *(float *)((((t4 - 0x8) + 0x0) + 4)) = u2;
        t4 = (t4 - 0x8);
        t3 = (t3 - 8);
        *(unsigned int *)((t4 + 0x0)) = t0;
        _builtin_prefetch((void *)t4);
        t4 = (t4 + 0x20);
        return u0;
    }
    *(float *)(((t4 - 0x8) + 0x0)) = u1;
    *(float *)((((t4 - 0x8) + 0x0) + 4)) = u0;
    *(float *)((((t4 - 0x8) - 0x8) + 0x0)) = u125;
    *(float *)(((((t4 - 0x8) - 0x8) + 0x0) + 4)) = (u124 * u125);
    *(float *)(((((t4 - 0x8) - 0x8) - 0x8) + 0x0)) = (u127 * u125);
    *(float *)((((((t4 - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = u126;
    *(unsigned int *)(((((t4 - 0x8) - 0x8) - 0x8) + 0x0)) = (t4 >> 1);
    _builtin_prefetch((void *)(((t4 - 0x8) - 0x8) - 0x8));
    return u0;
}

int FUN_0c095bb8(int a4, int a5, int a6, float f4, float f5)
{
    int stk[3];
    register int t1;
    register int t4;
    register int t5;
    register int t16;
    register int t17;
    register int t18;
    register int t19;
    register int t20;
    register int t25;

    (((struct o4_float *)(((int)stk + 0)))->v) = f5;
    (((struct o8_float *)(((int)stk + 0)))->v) = f4;
    t1 = 0x1;
    if (((unsigned short)(*(short *)((((((int)stk + 0) + 0x4) + 0x6) + 0x0))) & 0x8000) == 0x8000) {
        t1 = 0xFFFFFFFF;
    }
    *(unsigned char *)((a4 + 0x0)) = t1;
    *(unsigned short *)((a5 + 0x0)) = (*(short *)((((((int)stk + 0) + 0x4) + 0x6) + 0x0)));
    t4 = *(short *)((a5 + 0x0));
    t5 = _builtin_get_fpscr();
    *(unsigned short *)((a5 + 0x0)) = ((int)(t4 & 0x7FF0) >> 4);
    _builtin_set_fpscr((t5 & 0xFFE7FFFF));
    _mvito4b(((int)stk + 0), (((((int)stk + 0) + 0x4) + 0x6) - 2));
    _builtin_set_fpscr(((_builtin_get_fpscr()) & 0xFFE7FFFF));
    memcpy(a6, (((int)stk + 0) + 0x1), 0x3);
    _builtin_set_fpscr(((_builtin_get_fpscr()) & 0xFFE7FFFF));
    _mvito4b(((int)stk + 0), (((((int)stk + 0) + 0x4) + 0x6) - 6));
    _builtin_set_fpscr(((_builtin_get_fpscr()) & 0xFFE7FFFF));
    memcpy((a6 + 0x3), ((int)stk + 0), 0x4);
    _builtin_set_fpscr(((_builtin_get_fpscr()) & 0xFFE7FFFF));
    _lsfts(a6, 0x7, 0x3);
    if ((int)(*(short *)((a5 + 0x0))) > 0) {
        t16 = *(signed char *)((a6 + 0x0));
        *(unsigned char *)((a6 + 0x0)) = (t16 | 0x80);
        t25 = (t16 | 0x80);
    } else {
        t17 = *(short *)((a5 + 0x0));
        *(unsigned short *)((a5 + 0x0)) = (t17 + 0x1);
        t18 = *(signed char *)((a6 + 0x0));
        *(unsigned char *)((a6 + 0x0)) = (t18 & 0x7F);
        t19 = (t18 & 0x7F);
        t20 = (t17 + 0x1);
        for (;;) {
            if (((unsigned char)(*(signed char *)((a6 + 0x0))) & 0x80) != 0) {
                break;
            }
            t20 = (_builtin_get_fpscr());
            t20 = (t20 & 0xFFE7FFFF);
            _builtin_set_fpscr(t20);
            t19 = (_lsfts(a6, 0x7, 0x1));
            t20 = (*(short *)((a5 + 0x0)));
            t20 = (t20 - 1);
            *(unsigned short *)((a5 + 0x0)) = t20;
        }
        t25 = t19;
    }
    return t25;
}

int kmiGetNativeRegOBPSize(int a4)
{
    int stk[7];
    register int t1;
    register int t3;
    register int t7;
    register int t8;
    register int t16;

    t1 = (((struct o4_int *)0xC16FCE0)->v);
    *(unsigned int *)(((((int)stk + 0) + 0xC) + 0x0)) = ((((struct o0_int *)0xC16FCE0)->v));
    *(unsigned int *)(((((int)stk + 0) + 0xC) + 0x4)) = t1;
    t3 = (((struct oC_int *)0xC16FCE0)->v);
    *(unsigned int *)(((((int)stk + 0) + 0xC) + 0x8)) = ((((struct o8_int *)0xC16FCE0)->v));
    *(unsigned int *)(((((int)stk + 0) + 0xC) + 0xC)) = t3;
    *(unsigned int *)(((int)stk + 4)) = (((unsigned int)((unsigned int)a4 >> 16) >> 1) & 0x3);
    *(unsigned int *)(((int)stk + 0)) = (((unsigned int)a4 >> 21) & 0x3);
    *(unsigned int *)(((int)stk + 8)) = (((unsigned int)a4 >> 23) & 0x3);
    t7 = (((struct o4_int *)0xC300D2C)->v);
    t8 = (((struct o0_int *)0xC300D2C)->v);
    t16 = (t8 * t7);
    if (((*(int *)0xC3008D4) & 32) != 0) {
        t16 = ((t8 * t7) + (t8 * t7));
        if (((((struct o8_int *)0xC300D2C)->v)) != 0) {
            t16 = ((t8 * t7) << 2);
        }
    }
    *(unsigned int *)0xC2D0C24 = ((((((((*(int *)(((((int)stk + 0) + 0xC) + ((*(int *)(((int)stk + 4))) << 2)))) + (*(int *)(((((int)stk + 0) + 0xC) + ((((unsigned int)((unsigned int)((unsigned int)a4 >> 16) >> 2) >> 1) & 0x3) << 2))))) + (*(int *)(((((int)stk + 0) + 0xC) + ((*(int *)(((int)stk + 0))) << 2))))) + (*(int *)(((((int)stk + 0) + 0xC) + ((*(int *)(((int)stk + 8))) << 2))))) + (*(int *)(((((int)stk + 0) + 0xC) + ((0x3 & ((unsigned int)((unsigned int)((unsigned int)a4 >> 16) >> 8) >> 1)) << 2))))) << 2) + 0x18) * t16);
    return ((0x3 & ((unsigned int)((unsigned int)((unsigned int)a4 >> 16) >> 8) >> 1)) << 2);
}

int FUN_0c01f5fc(void)
{
    int stk[12];
    register int t0;
    register float u1;
    register float u2;
    register float u4;
    register float u9;
    register int t17;
    register int t18;
    register float u25;
    register int t37;

    t0 = ((int (*)(void))(FUN_0c01f098))();
    u1 = (((struct o0_float *)0xC01F804)->v);
    u2 = (((struct o4_float *)0xC01F804)->v);
    u4 = (((struct o8_float *)0xC01F804)->v);
    if ((*(int *)0xC1EC740) != 0) {
        FUN_0c027f28(0x0);
        FUN_0c02803a(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
        pfSize(1.0f, 1.0f);
        u9 = (-((FUN_0c02806c(0xC09AE68)) * u2));
        FUN_0c027fbe((u9 + u1), u4);
        FUN_0c02842e(0xC09AE74);
        FUN_0c01c4e2();
    }
    t17 = (FUN_0c06f240());
    t18 = 0x1;
    for (;;) {
        if ((*(int *)0xC2707DC) == 0) {
            break;
        }
        t17 = (((int (*)(int, int, int, int, int, int, int, int, int, int, int))(FUN_0c01f098))(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
        if ((*(int *)0xC1EC740) != 0) {
            t17 = (FUN_0c027f28(0x0));
            t17 = (pfSize(1.0f, 1.0f));
            u25 = (-((FUN_0c02806c(0xC09AE68)) * u2));
            t17 = (FUN_0c027fbe((u25 + u1), u4));
            t17 = (FUN_0c02842e(0xC09AE74));
            t17 = 0x3C;
            t17 = ((int)((int)t18 % (int)t17));
            if (t17 == 0) {
                *(unsigned int *)0xC11D094 = ((*(int *)0xC11D094) + 0x1);
            }
            t17 = (FUN_0c01c4e2());
        }
        t18 = (t18 + 0x1);
        t17 = (FUN_0c06f240());
    }
    t37 = FUN_0c06f240();
    *(unsigned int *)0xC11D094 = 0x0;
    return t37;
}

void FUN_0c02f0a2(void)
{
    if (((((struct o14_int *)0xC277824)->v)) == 0) {
        if (((((struct o18_int *)0xC277824)->v)) == 0) {
            if ((*(int *)0xC17591C) == 8) {
                SetHelicopter();
                FUN_0c058ca6(0x8A9, 0x0);
    return;
            }
            return;
        }
        return;
    }
    if (((((struct o18_int *)0xC277824)->v)) == 0) {
        FUN_0c073c40(0xC277820, 0xC1758E4, 1000.0f);
        (((struct o0_float *)0xC277824)->v) = (((((struct o0_float *)0xC277824)->v)) + 200.0f);
        nlAddVector(0xC277820, 0xC175930);
        FUN_0c07ff00();
        if ((*(int *)0xC17591C) != 8) {
            (((struct o18_uint *)0xC277824)->v) = (((((struct o18_int *)0xC277824)->v)) + 0x1);
            FUN_0c07ff00();
            (((struct o0_float *)0xC277824)->v) = (((((struct o0_float *)0xC277824)->v)) + 2000.0f);
        }
    }
}

int FUN_0c065366(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    register int t3;
    int t4;
    register int t5;
    register float u0;
    register float u1;

    FUN_0c067494(a5, 0x1);
    (((struct oF8_uint *)(a5))->v) = (((((struct oF8_int *)(a5))->v)) - 1);
    t5 = *(int *)(((((*(int *)((a5 + 0x10))) - 35) << 2) + 0xC10EAD8));
    if (((*(int *)((a5 + 0x0))) != t5) && (t0 = *(int *)((a5 + 0x14)), t0 != t5)) {
        if (((int)((((struct oF8_int *)(a5))->v)) > 0) && (t1 = *(signed char *)(((a5 + 0x3F) + 0x0)), (t1 & 16) == 0)) {
            return t1;
        }
        return FUN_0c068304(a5);
    }
    u0 = 0.209999993f;
    if ((((int)(*(int *)((a4 + 0x8))) > (int)0x1) && (t2 = *(int *)((a4 + 0x14)), t2 == 0)) || (t3 = (((struct oF8_int *)(a5))->v), (int)t3 <= 0)) {
        u0 = 0.419999987f;
    }
    u1 = FUN_0c0683b0(a5, (0xE8 + a5), u0);
    t0 = 0xC06546C;
    if (3.0f > u1) {
        if (((int)(*(int *)((a4 + 0x8))) > (int)0x1) && (t4 = *(int *)((a4 + 0x14)), t4 == 0)) {
            FUN_0c05f470(a5, ((((struct oE0_int *)(a5))->v)), 0.0f, 10.0f);
            FUN_0c0656b6(a5);
        } else {
            FUN_0c05f470(a5, ((((struct oE0_int *)(a5))->v)), 10.0f, 10.0f);
        }
        (((struct o8_float *)(a5))->v) = 1.0f;
        (((struct o80_uint *)(a5))->v) = (((((struct o80_int *)(a5))->v)) + 0x1);
        t0 = 0x80;
    }
    return t0;
}

int FUN_0c069230(int a4, int a5, int a6, int a7)
{
    int stk[9];
    register int t0;
    register int t2;
    register int t18;
    register int t32;

    *(unsigned int *)(((int)stk + 0)) = a4;
    t0 = (((struct o0_int *)0xC2BA694)->v);
    if (((int)t0 >= 0) && ((int)t0 < (int)0x6)) {
        t2 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((t0 << 2) + 0xC110308)))))(a4, a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    }
    if (((*(signed char *)0xC2BA6A7) & 4) != 0) {
        nlPushMatrix(0xC17596C);
        FUN_0c0673da(0x3);
        if ((int)(*(int *)0xC175C80) >= (int)0x10) {
            FUN_0c073a30(-8.0f, 0.0f, 0.0f);
            nlRotateAY(0x8000);
        }
        FUN_0c05f4c8(0xC2BA5B0);
        t18 = FUN_0c05f434();
        FUN_0c072b60((0x200 + t18));
        nlObjPutUseViewMatrix(0xC3C47D8);
        nlPopMatrix(0x1);
    }
    if (((*(signed char *)0xC2BA6A7) & 128) != 0) {
        (((struct o18_uint *)0xC2BA5F0)->v) = (*(int *)(((int)stk + 0)));
        FUN_0c0620ac(0xC2BA5F0);
    }
    t32 = *(signed char *)0xC2BA6A7;
    if ((t32 & 32) != 0) {
        nlPushMatrix(0xC17596C);
        FUN_0c0673da(((((struct o88_int *)(((((struct o0_int *)0xC2BA5F0)->v))))->v)));
        FUN_0c05f4c8(0xC2BA654);
        if (((*(signed char *)0xC2BA693) & 16) != 0) {
            (((struct o13_uchar *)0xC2BA694)->v) = ((*(signed char *)0xC2BA6A7) & 0xDF);
        }
        return nlPopMatrix(0x1);
    }
    return t32;
}

int FUN_0c07b430(float f4, float f5, float f6, float f7)
{
    register float u3;
    register float u8;
    register float u13;
    register float u18;
    register int t20;
    register int t22;
    register int t24;
    register int t26;

    u3 = (f4 * 255.0f);
    if ((f4 * 255.0f) > 2.14748365e+09f) {
        u3 = (((f4 * 255.0f)) + -4.2949673e+09f);
    }
    u8 = (f5 * 255.0f);
    if ((f5 * 255.0f) > 2.14748365e+09f) {
        u8 = (((f5 * 255.0f)) + -4.2949673e+09f);
    }
    u13 = (f6 * 255.0f);
    if ((f6 * 255.0f) > 2.14748365e+09f) {
        u13 = (((f6 * 255.0f)) + -4.2949673e+09f);
    }
    u18 = (f7 * 255.0f);
    if ((f7 * 255.0f) > 2.14748365e+09f) {
        u18 = (((f7 * 255.0f)) + -4.2949673e+09f);
    }
    t20 = (int)u3;
    if ((unsigned int)(int)u3 > (unsigned int)0xFF) {
        t20 = 0xFF;
    }
    t22 = (int)u8;
    if ((unsigned int)(int)u8 > (unsigned int)0xFF) {
        t22 = 0xFF;
    }
    t24 = (int)u13;
    if ((unsigned int)(int)u13 > (unsigned int)0xFF) {
        t24 = 0xFF;
    }
    t26 = (int)u18;
    if ((unsigned int)(int)u18 > (unsigned int)0xFF) {
        t26 = 0xFF;
    }
    return ((((((t20 << 8) | t22) << 8) | t24) << 8) | t26);
}

int adxsjd_decexec_start(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t2 = *(int *)((a4 + 0x4));
    t3 = *(int *)((a4 + 0x8));
    if ((*(signed char *)((a4 + 0x3))) == 1) {
        t4 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t3 + 0x0))) + 0x24)))))(t3, 0x1, a6, a7);
        if (t4 == 0) {
            *(unsigned char *)((a4 + 0x1)) = 0x3;
            return 0x3;
        }
        t4 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t3 + 0x0))) + 0x18)))))(t3, 0x1, 0x7FFFFFFF, (a4 + 0x14));
        t4 = ADXB_GetFormat(t2);
        if ((t4 == 0) && (t0 = *(int *)((a4 + 0x18)), (int)t0 >= (int)0x2)) {
            t0 = *(short *)(((*(int *)((a4 + 0x14))) + 0x0));
            if ((unsigned short)((unsigned char)((int)t0 >> 8) | ((t0 << 8) & 0xFF00)) != 0x8001) {
                t0 = FUN_0c16201e(a4);
                if ((int)(*(int *)((a4 + 0x34))) >= (int)t0) {
                    *(unsigned char *)((a4 + 0x1)) = 0x3;
                    t0 = *(int *)(((*(int *)((t3 + 0x0))) + 0x1C));
                    return ((int (*)(int, int, int, int))(t0))(t3, 0x1, (a4 + 0x14), a7);
                }
                t0 = FUN_0c162006(a4);
                t4 = *(int *)((a4 + 0xC));
                t5 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t4 + 0x0))) + 0x24)))))(t4, 0x0, a6, a7);
                if ((int)((unsigned int)t5 >> 1) < (int)t0) {
                    t0 = *(int *)(((*(int *)((t3 + 0x0))) + 0x1C));
                    return ((int (*)(int, int, int, int))(t0))(t3, 0x1, (a4 + 0x14), a7);
                }
                ADXB_EntryData(t2, (*(int *)((a4 + 0x14))), (*(int *)((a4 + 0x18))));
                return ADXB_Start(t2);
            }
            *(unsigned char *)((a4 + 0x1)) = 0x3;
            t0 = *(int *)(((*(int *)((t3 + 0x0))) + 0x1C));
            return ((int (*)(int, int, int, int))(t0))(t3, 0x1, (a4 + 0x14), a7);
        }
        t0 = FUN_0c16201e(a4);
        if ((int)(*(int *)((a4 + 0x34))) >= (int)t0) {
            *(unsigned char *)((a4 + 0x1)) = 0x3;
            t0 = *(int *)(((*(int *)((t3 + 0x0))) + 0x1C));
            return ((int (*)(int, int, int, int))(t0))(t3, 0x1, (a4 + 0x14), a7);
        }
        t0 = FUN_0c162006(a4);
        t4 = *(int *)((a4 + 0xC));
        t5 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t4 + 0x0))) + 0x24)))))(t4, 0x0, a6, a7);
        if ((int)((unsigned int)t5 >> 1) < (int)t0) {
            t0 = *(int *)(((*(int *)((t3 + 0x0))) + 0x1C));
            return ((int (*)(int, int, int, int))(t0))(t3, 0x1, (a4 + 0x14), a7);
        }
    } else {
        t0 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t3 + 0x0))) + 0x18)))))(t3, 0x1, 0x7FFFFFFF, (a4 + 0x14));
        t0 = ADXB_GetFormat(t2);
        if ((t0 == 0) && (t1 = *(int *)((a4 + 0x18)), (int)t1 >= (int)0x2)) {
            t0 = *(short *)(((*(int *)((a4 + 0x14))) + 0x0));
            if ((unsigned short)((unsigned char)((int)t0 >> 8) | ((t0 << 8) & 0xFF00)) != 0x8001) {
                t0 = FUN_0c16201e(a4);
                if ((int)(*(int *)((a4 + 0x34))) >= (int)t0) {
                    *(unsigned char *)((a4 + 0x1)) = 0x3;
                    t0 = *(int *)(((*(int *)((t3 + 0x0))) + 0x1C));
                    return ((int (*)(int, int, int, int))(t0))(t3, 0x1, (a4 + 0x14), a7);
                }
                t0 = FUN_0c162006(a4);
                t1 = *(int *)((a4 + 0xC));
                t4 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x24)))))(t1, 0x0, a6, a7);
                if ((int)((unsigned int)t4 >> 1) < (int)t0) {
                    t0 = *(int *)(((*(int *)((t3 + 0x0))) + 0x1C));
                    return ((int (*)(int, int, int, int))(t0))(t3, 0x1, (a4 + 0x14), a7);
                }
                ADXB_EntryData(t2, (*(int *)((a4 + 0x14))), (*(int *)((a4 + 0x18))));
                return ADXB_Start(t2);
            }
            *(unsigned char *)((a4 + 0x1)) = 0x3;
            t0 = *(int *)(((*(int *)((t3 + 0x0))) + 0x1C));
            return ((int (*)(int, int, int, int))(t0))(t3, 0x1, (a4 + 0x14), a7);
        }
        t0 = FUN_0c16201e(a4);
        if ((int)(*(int *)((a4 + 0x34))) >= (int)t0) {
            *(unsigned char *)((a4 + 0x1)) = 0x3;
            t0 = *(int *)(((*(int *)((t3 + 0x0))) + 0x1C));
            return ((int (*)(int, int, int, int))(t0))(t3, 0x1, (a4 + 0x14), a7);
        }
        t0 = FUN_0c162006(a4);
        t1 = *(int *)((a4 + 0xC));
        t4 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x24)))))(t1, 0x0, a6, a7);
        if ((int)((unsigned int)t4 >> 1) < (int)t0) {
            t0 = *(int *)(((*(int *)((t3 + 0x0))) + 0x1C));
            return ((int (*)(int, int, int, int))(t0))(t3, 0x1, (a4 + 0x14), a7);
        }
    }
    ADXB_EntryData(t2, (*(int *)((a4 + 0x14))), (*(int *)((a4 + 0x18))));
    return ADXB_Start(t2);
}

int FUN_0c08fc6c(int a4, int a5)
{
    register int t16;

    *(unsigned char *)((((a4 + 0x1) - 1) + 0x0)) = (FUN_0c08fc00(((int)((int)(unsigned short)(*(short *)((a5 + 0x0))) / (int)0x64))));
    *(unsigned char *)(((((a4 + 0x1) + 0x1) - 1) + 0x0)) = (FUN_0c08fc00(((int)((int)(unsigned short)(*(short *)((a5 + 0x0))) % (int)0x64))));
    *(unsigned char *)((((((a4 + 0x1) + 0x1) + 0x1) - 1) + 0x0)) = (FUN_0c08fc00((unsigned char)(*(signed char *)((a5 + 0x2)))));
    *(unsigned char *)(((((((a4 + 0x1) + 0x1) + 0x1) + 0x1) - 1) + 0x0)) = (FUN_0c08fc00((unsigned char)(*(signed char *)((a5 + 0x3)))));
    *(unsigned char *)((((((((a4 + 0x1) + 0x1) + 0x1) + 0x1) + 0x1) - 1) + 0x0)) = (FUN_0c08fc00((unsigned char)(*(signed char *)((a5 + 0x4)))));
    *(unsigned char *)(((((((((a4 + 0x1) + 0x1) + 0x1) + 0x1) + 0x1) + 0x1) - 1) + 0x0)) = (FUN_0c08fc00((unsigned char)(*(signed char *)((a5 + 0x5)))));
    *(unsigned char *)((((((((((a4 + 0x1) + 0x1) + 0x1) + 0x1) + 0x1) + 0x1) + 0x1) - 1) + 0x0)) = (FUN_0c08fc00((unsigned char)(*(signed char *)((a5 + 0x6)))));
    t16 = *(signed char *)((a5 + 0x7));
    *(unsigned char *)(((((((((((a4 + 0x1) + 0x1) + 0x1) + 0x1) + 0x1) + 0x1) + 0x1) + 0x1) - 1) + 0x0)) = (*(signed char *)((0xC1182B0 + ((unsigned char)t16 & 0x7))));
    return ((unsigned char)t16 & 0x7);
}

int syG2DmaReset(int a4)
{
    register int t0;
    register int t1;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    t1 = *(int *)((a4 + 0x0));
    *(unsigned int *)((((t1 * 0x34) + ((*(int *)0xC1743EC) + 0x4)) + 0x0)) = t1;
    *(unsigned int *)(((((*(int *)((a4 + 0x0))) * 0x34) + ((*(int *)0xC1743EC) + 0x4)) + 0x28)) = 0x0;
    *(unsigned int *)(((((*(int *)((a4 + 0x0))) * 0x34) + ((*(int *)0xC1743EC) + 0x4)) + 0x2C)) = 0x0;
    *(unsigned int *)(((((*(int *)((a4 + 0x0))) * 0x34) + ((*(int *)0xC1743EC) + 0x4)) + 0x30)) = 0x0;
    *(unsigned int *)(((((*(int *)((a4 + 0x0))) * 0x34) + ((*(int *)0xC1743EC) + 0x4)) + 0x4)) = 0x0;
    *(unsigned int *)(((((*(int *)((a4 + 0x0))) * 0x34) + ((*(int *)0xC1743EC) + 0x4)) + 0x8)) = 0x0;
    *(unsigned int *)(((((*(int *)((a4 + 0x0))) * 0x34) + ((*(int *)0xC1743EC) + 0x4)) + 0xC)) = 0x0;
    *(unsigned int *)(((((*(int *)((a4 + 0x0))) * 0x34) + ((*(int *)0xC1743EC) + 0x4)) + 0x10)) = 0x0;
    *(unsigned int *)(((((*(int *)((a4 + 0x0))) * 0x34) + ((*(int *)0xC1743EC) + 0x4)) + 0x14)) = 0x0;
    *(unsigned int *)(((((*(int *)((a4 + 0x0))) * 0x34) + ((*(int *)0xC1743EC) + 0x4)) + 0x18)) = 0x3;
    *(unsigned int *)(((((*(int *)((a4 + 0x0))) * 0x34) + ((*(int *)0xC1743EC) + 0x4)) + 0x1C)) = 0x0;
    *(unsigned int *)(((((*(int *)((a4 + 0x0))) * 0x34) + ((*(int *)0xC1743EC) + 0x4)) + 0x20)) = 0x0;
    *(unsigned int *)(((((((*(int *)((a4 + 0x0))) << 2) << 2) << 1) + (*(int *)(((*(int *)0xC1743EC) + 0x0)))) + 0x14)) = 0x0;
    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
    return 0x0;
}

int FUN_0c039c90(void)
{
    int stk[2];
    register int t0;
    register int t5;
    register int t12;
    int t29;
    register int t60;

    t0 = FUN_0c034320(0x1, 0x0);
    if (t0 != 0) {
        t5 = *(int *)0xC2A4F94;
        if ((t5 & 1) != 0) {
            FUN_0c0397ec(0x1, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        } else {
            if ((t5 & 2) != 0) {
                FUN_0c0397ec(0x1, 0x1, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
            } else {
                t12 = *(int *)0xC2A4F94;
                if ((t12 & 4) != 0) {
                    FUN_0c0397ec(0x1, 0x2, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
                } else {
                    if ((t12 & 8) != 0) {
                        FUN_0c0397ec(0x1, 0x3, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
                    } else {
                        if (((*(int *)0xC2A4F94) & 32) != 0) {
                            FUN_0c0397ec(0x1, 0x4, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
                        }
                    }
                }
            }
        }
    } else {
        t29 = *(int *)0xC2A4F94;
        if ((0x1 & t29) != 0) {
            FUN_0c0397ec(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        } else {
            if ((0x2 & t29) != 0) {
                FUN_0c0397ec(0x0, 0x1, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
            } else {
                if ((0x4 & t29) != 0) {
                    FUN_0c0397ec(0x0, 0x2, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
                } else {
                    if ((0x8 & t29) != 0) {
                        FUN_0c0397ec(0x0, 0x3, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
                    } else {
                        if ((t29 & 0x20) != 0) {
                            FUN_0c0397ec(0x0, 0x4, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
                        }
                    }
                }
            }
        }
    }
    FUN_0c0339c0(0x0);
    t60 = FUN_0c0343b8(0x1, 0x0);
    if (t60 == 3) {
        *(unsigned int *)0xC2A4F94 = ((*(int *)0xC2A4F94) & 0xFFFFFFD0);
    }
    return t60;
}

int FUN_0c064f92(int a4)
{
    int stk[6];
    register float t4;
    register int t25;
    register int t48;
    register int t52;

    FUN_0c07fdc8();
    if (((*(signed char *)(((((((struct oAC_int *)(a4))->v)) + 0x63) + 0x0))) & 2) != 0) {
        t4 = nlLength((a4 + 0x70), 0xC175930);
        if (t4 > (*(float *)((((int)stk + 0) + (((((struct o80_int *)(a4))->v)) << 2))))) {
            t52 = 0x80;
            if ((int)((((struct o80_int *)(a4))->v)) > (int)0x1) {
                (((struct o80_uint *)(a4))->v) = (((((struct o80_int *)(a4))->v)) - 1);
                t52 = (FUN_0c065080(a4));
            }
        } else {
            t52 = 0x4;
            if (((((struct o4_float *)((((int)stk + 0) + (((((struct o80_int *)(a4))->v)) << 2))))->v)) > t4) {
                (((struct o80_uint *)(a4))->v) = (((((struct o80_int *)(a4))->v)) + 0x1);
                FUN_0c065080(a4);
                t52 = 0x84;
                if (((((struct o84_int *)(a4))->v)) == 0) {
                    t25 = (((struct o80_int *)(a4))->v);
                    t52 = t25;
                    if (t25 == 4) {
                        t52 = (FUN_0c06a1d0((*(int *)((a4 + 0x10)))));
                    }
                }
            }
        }
    } else {
        t48 = (((struct o80_int *)(a4))->v);
        t52 = t48;
        if (t48 != 1) {
            (((struct o80_uint *)(a4))->v) = 0x1;
            t52 = (FUN_0c065080(a4));
        }
    }
    return t52;
}

int FUN_0c06c35c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    FUN_0c06b3d8(0xC2BB34C, 0x1, 0x0, 0xC06C41C);
    t0 = *(signed char *)0xC2BB353;
    if ((t0 & 128) != 0) {
        t1 = *(int *)0xC2BB354;
        if (((int)t1 >= 0) && ((int)t1 < (int)0x2)) {
            t1 = *(int *)((((*(int *)0xC2BB354) << 2) + 0xC112970));
            return ((int (*)(int, int, int, int))(t1))(0xC2BB354, a5, a6, a7);
        }
        return t0;
    }
    return t0;
}

int vmsfs_isformat(int a4)
{
    int stk[3];
    register int t4;
    register int t8;

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 0)) = (((*(int *)(((int)stk + 8))) * 0x154) + 0xC2C8D2C);
    if ((*(signed char *)(((((*(int *)(((int)stk + 8))) * 0x154) + 0xC2C8D2C) + 0x2))) == 0) {
        return 0xFFFFFF01;
    }
    t4 = vmsio_isready((*(int *)(((int)stk + 8))));
    if (t4 == 0) {
        vmsfs_unmount((*(int *)(((int)stk + 8))));
        return 0xFFFFFF01;
    }
    t8 = vmsio_ismount((*(int *)(((int)stk + 8))));
    if (t8 == 0) {
        return 0xFFFFFF01;
    }
    if ((*(signed char *)((((*(int *)(((int)stk + 8))) * 0x154) + 0xC2C8D34))) == 0) {
        return 0xFFFFFF01;
    }
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 4))) >= (int)0x10) {
            if ((*(int *)((((*(int *)(((int)stk + 8))) << 2) + 0xC2C97CC))) != 0) {
                return 0xFFFFFF03;
            }
            return 0x0;
        }
        if ((unsigned char)(*(signed char *)(((*(int *)(((int)stk + 4))) + (*(int *)(((*(int *)(((int)stk + 0))) + 0x20)))))) != 85) {
            break;
        }
        *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x1);
    }
    *(unsigned char *)(((*(int *)(((int)stk + 0))) + 0xB)) = 0x0;
    *(unsigned char *)(((*(int *)(((int)stk + 0))) + 0xC)) = 0x0;
    return 0xFFFFFF03;
}

int FUN_0c0521dc(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(int *)0xC2B1E00;
    if (t0 == 2) {
        (((struct o18_uint *)0xC2B2690)->v) = 0x0;
        if ((int)(*(int *)0xC2B1E00) >= (int)0x1) {
            t1 = t0;
            if ((*(int *)0xC1ECD10) == 0) {
                if ((*(int *)0xC2B29F4) == 1) {
                    Voice_ShutUp(0x0);
                    FUN_0c058f64(0xC131F40, 0x0, 0x78, 0x0);
                }
                t2 = (int)((int)(*(int *)0xC2B29F4) % (int)0x3C);
                t3 = t2;
                if ((int)t2 < (int)0x1E) {
                    (((struct o0_float *)0xC2B2690)->v) = 1.0f;
                    (((struct o4_float *)0xC2B2690)->v) = 1.0f;
                    (((struct o24_uint *)0xC2B2690)->v) = 0xA;
                    t3 = (Put_Time_Bonus_Sprite(0x5));
                }
                t1 = t3;
            }
            t2 = *(int *)0xC2B29F4;
            *(unsigned int *)0xC2B29F4 = (t2 + 0x1);
            if ((int)(t2 + 0x1) >= (int)0xB4) {
                return FUN_0c05045a();
            }
            return t1;
        }
        return t0;
    }
    if (t0 == 1) {
        (((struct o18_uint *)0xC2B2690)->v) = 0x0;
        if ((int)(*(int *)0xC2B1E00) >= (int)0x1) {
            t1 = t0;
            if ((*(int *)0xC1ECD10) == 0) {
                if ((*(int *)0xC2B29F4) == 1) {
                    Voice_ShutUp(0x0);
                    FUN_0c058f64(0xC131F40, 0x0, 0x78, 0x0);
                }
                t2 = (int)((int)(*(int *)0xC2B29F4) % (int)0x3C);
                t3 = t2;
                if ((int)t2 < (int)0x1E) {
                    (((struct o0_float *)0xC2B2690)->v) = 1.0f;
                    (((struct o4_float *)0xC2B2690)->v) = 1.0f;
                    (((struct o24_uint *)0xC2B2690)->v) = 0xA;
                    t3 = (Put_Time_Bonus_Sprite(0x2));
                }
                t1 = t3;
            }
            t2 = *(int *)0xC2B29F4;
            *(unsigned int *)0xC2B29F4 = (t2 + 0x1);
            if ((int)(t2 + 0x1) >= (int)0xB4) {
                return FUN_0c05045a();
            }
            return t1;
        }
        return t0;
    }
    return FUN_0c05045a();
}

int vmsfs_xfind(int a4, int a5)
{
    int stk[15];
    register int t3;
    register int t7;
    register int t11;
    register int t14;
    register int t15;

    *(unsigned int *)(((int)stk + 56)) = a4;
    *(unsigned int *)(((int)stk + 52)) = a5;
    if ((*(signed char *)((((*(int *)(((int)stk + 56))) * 0x154) + 0xC2C8D2E))) == 0) {
        return 0xFFFFFF01;
    }
    t3 = vmsio_isready((*(int *)(((int)stk + 56))));
    if (t3 == 0) {
        vmsfs_unmount((*(int *)(((int)stk + 56))));
        return 0xFFFFFF01;
    }
    t7 = vmsio_ismount((*(int *)(((int)stk + 56))));
    if (t7 == 0) {
        return 0xFFFFFF01;
    }
    if ((*(signed char *)((((*(int *)(((int)stk + 56))) * 0x154) + 0xC2C8D34))) == 0) {
        return 0xFFFFFF01;
    }
    t11 = buIsFormat((*(int *)(((int)stk + 56))));
    if ((int)t11 < 0) {
        return 0xFFFFFF03;
    }
    t14 = FUN_0c08f2a2((*(int *)(((int)stk + 56))), ((int)stk + 0));
    *(unsigned int *)(((int)stk + 44)) = t14;
    if ((int)t14 < 0) {
        return 0xFFFFFF05;
    }
    *(unsigned int *)(((int)stk + 48)) = 0x0;
    t15 = 0x0;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 48))) >= (int)0xC) {
            break;
        }
        t14 = (*(int *)(((int)stk + 48)));
        t15 = ((int)stk + 0);
        t15 = (t15 + 0x10);
        t15 = (t15 + (*(int *)(((int)stk + 48))));
        *(unsigned char *)(((*(int *)(((int)stk + 52))) + t14)) = (*(signed char *)((t15 + 0x0)));
        t15 = (*(int *)(((int)stk + 48)));
        t15 = (t15 + 0x1);
        *(unsigned int *)(((int)stk + 48)) = t15;
    }
    *(unsigned char *)(((*(int *)(((int)stk + 52))) + 0xC)) = 0x0;
    return 0x0;
}
