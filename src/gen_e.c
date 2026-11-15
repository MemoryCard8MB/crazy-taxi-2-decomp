/* Straight-line functions with calls and guards (batch gen_e): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o18_float { char p[0x18]; float v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_int { char p[0x20]; int v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o30_int { char p[0x30]; int v; };
struct o34_float { char p[0x34]; float v; };
struct o34_int { char p[0x34]; int v; };
struct o34_ushort { char p[0x34]; unsigned short v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o3E_ushort { char p[0x3E]; unsigned short v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o60_float { char p[0x60]; float v; };
struct o64_float { char p[0x64]; float v; };
struct o68_float { char p[0x68]; float v; };
struct o74_uint { char p[0x74]; unsigned int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_int { char p[0x84]; int v; };
struct o84_uint { char p[0x84]; unsigned int v; };
struct oA4_short { char p[0xA4]; short v; };
struct oA6_short { char p[0xA6]; short v; };
struct oA8_short { char p[0xA8]; short v; };
struct oAC_int { char p[0xAC]; int v; };
struct oB4_float { char p[0xB4]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oC0_int { char p[0xC0]; int v; };
struct oD0_float { char p[0xD0]; float v; };
struct oD4_int { char p[0xD4]; int v; };
int FUN_0c028280(int);
int FUN_0c031b94(int, int, int, int);
int FUN_0c03209c(int, int, int, int, int, int);
int FUN_0c034e28(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c036904(void);
int FUN_0c038e3a(int, int, int, int, float, float, float, float, float);
int FUN_0c0391d2(int, int, int, int, float, float, float, float, float);
int FUN_0c03b1ec(int, int, int, int, int, int);
int FUN_0c03e776(void);
int FUN_0c03e792(int, int);
int FUN_0c03f9d0(int, int);
int FUN_0c0435e2(int, int);
int FUN_0c0438c0(int);
int FUN_0c046466(void);
int FUN_0c052eca(void);
int FUN_0c058f64(int, int, int, int);
int FUN_0c05f470(int, int, float, float);
extern int FUN_0c069e54();
int FUN_0c06a820(int, int, int);
int FUN_0c06f550(int, int, int);
int FUN_0c0704c0(int, int, int, float);
int FUN_0c070730(float);
float FUN_0c072140(int);
float FUN_0c072148(int);
int FUN_0c072230(int, int);
int FUN_0c072290(int, int);
int FUN_0c073360(void);
int FUN_0c073a30(float, float, float);
int FUN_0c073a60(int);
float FUN_0c073b40(int, int);
int FUN_0c073c40(int, int, float);
float FUN_0c073c80(int);
float FUN_0c073e10(int);
int FUN_0c074f20(float);
int FUN_0c078810(int, int, int);
int FUN_0c078890(float);
int FUN_0c07b6c0(int, int);
int FUN_0c07b706(void);
int FUN_0c07b734(void);
int FUN_0c07b786(void);
int FUN_0c07b91c(int, int);
int FUN_0c07c5b8(int, int, int);
extern int FUN_0c07c738();
int FUN_0c07c8be(int);
int FUN_0c07fdc8(void);
int FUN_0c07ff00(void);
int FUN_0c07ffbc(int, int, int);
int FUN_0c08f204(int, int, int);
int FUN_0c08f87c(int, int);
int FUN_0c08f9c4(int, int);
int FUN_0c08fabc(int, int);
int FUN_0c160598(int, int);
int FUN_0c16a4e4(int, int, int);
int FUN_0c16c2e2(int);
int FUN_0c16c338(int, int, int);
int ReflectColliWallBox(int, int, int, int);
int SJUNI_Lock(void);
int SJUNI_Unlock(int, int);
int Voice_ShutUp(int);
extern void _builtin_ftrv(float *, float *);
extern void _builtin_ld_ext(float (*)[4]);
extern void _builtin_prefetch(void *);
extern void _builtin_st_ext(float (*)[4]);
int buGetFileSize(int, int);
int buIsFormat(int);
int fmMngMcpy4(int, int, int);
int fmMngNum2Bit(int, int, int);
int fmcalccrc(int, int);
int gdCiGetGdfsWork(void);
int memcpy(int, int, int);
int memset(int, int, int);
int nlArcTan2(float, float);
int nlGetMatrix33on44(int);
int nlMatrixMode(int);
int nlMultiMatrix(int);
int nlMvClipEdge(int, int, int);
int nlObjPutUseViewMatrix(int);
int nlOuterProduct(int, int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlSetWindowSize(float, float, float, float);
int nlSubVector(int, int);
int nlSubVector3op(int, int, int);
int nl_set_cnv_proj_pers(void);
int set_event(int, int);
int strlen(int);
int syG2Write(int, int, int, int, int, int);
int thunk_FUN_0c160706(int, int, int);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
int FUN_0c02842e(int a4);
int FUN_0c0366f4(int a4);
int FUN_0c0343b8(int a4, int a5, int a6);
int FUN_0c0426b8(int a4);
int FUN_0c041070(int a4, int a5);
int FUN_0c04e45e(int a4, int a5);
float FUN_0c074e20(void);
int fmMngAddData(int a4);
void SJUNI_PutChunk(int a4, int a5, int a6, int a7);
float FUN_0c01145c(float f4, float f5, float f6, float f7);
int FUN_0c06823e(int a4, int a5, int a6, int a7);
int nlMvCalcEdgeA(int a4, int a5);
int FUN_0c07beb4(int a4, int a5);
int vmsfs_scanfile(int a4, int a5, int a6);
int gdCiLoadDirInfo(int a4, int a5);
int FUN_0c05bc98(int a4, float f4);
int FUN_0c06a620(int a4, int a5, int a6);
int kmiUpdateRenderStatus(void);
int FUN_0c01a0a4(void);
int ColliWallTest(void);
int FUN_0c03425e(int a4, int a5, int a6, int a7);
int FUN_0c04b4c4(int a4);
int FUN_0c058be4(int a4);
int FUN_0c07c080(int a4, int a5, int a6);
int vmsfs_fisexist(int a4, int a5);
int FUN_0c15c95a(int a4, int a5);
int FUN_0c032150(int a4);
int FUN_0c039282(int a4, int a5, int a6, int a7, int a8, float f4, float f5, float f6, float f7, float f8);
int FUN_0c067160(int a4, int a5, int a6, int a7);
int FUN_0c044edc(int a4, int a5, int a6);
int FUN_0c05305e(int a4, int a5, float f4);
int FUN_0c058d4e(int a4, int a5);
int nlSearchPalette(int a4, int a5);
int nlRenderTextureBegin(int a4);
int FUN_0c0659a2(int a4, int a5);
int FUN_0c078cb0(int a4);
int kmfSetTimeOutCount(int a4, int a5);

int FUN_0c02842e(int a4)
{
    register int t0;
    int t1;
    register int t2;
    register int t3;

    t0 = a4;
    for (;;) {
        if ((*(signed char *)((t0 + 0x0))) == 0) {
            break;
        }
        t1 = (*(signed char *)((t0 + 0x0)));
        if (t1 == 92) {
            t1 = ((((struct o4_int *)0xC270D14)->v));
            t2 = ((((struct o0_int *)0xC270D14)->v));
            if ((t1 != 5) && (t1 != 9)) {
                if ((t1 != 6) && (t1 != 10)) {
                    if ((t1 == 7) || (t1 == 11)) {
                        (((struct o0_uint *)0xC270D14)->v) = (((((struct o0_int *)0xC270D14)->v)) + 0x1200);
                        t0 = (t0 + 0x1);
                    }
                } else {
                    (((struct o0_uint *)0xC270D14)->v) = (((((struct o0_int *)0xC270D14)->v)) + 0xC00);
                    t0 = (t0 + 0x1);
                }
            } else {
                (((struct o0_uint *)0xC270D14)->v) = (((((struct o0_int *)0xC270D14)->v)) + 0x600);
                t0 = (t0 + 0x1);
            }
            t3 = *(signed char *)((t0 + 0x0));
            t0 = (t0 + 0x1);
            t1 = (FUN_0c028280(t3));
            (((struct o0_uint *)0xC270D14)->v) = t2;
        } else {
            t2 = *(signed char *)((t0 + 0x0));
            t0 = (t0 + 0x1);
            t1 = (FUN_0c028280(t2));
        }
    }
    return t1;
}

int FUN_0c0366f4(int a4)
{
    int stk[5];
    register int t2;
    register int t3;
    register int t22;
    register int t29;

    *(unsigned int *)(((int)stk + 4)) = a4;
    if ((int)(*(int *)0xC1EC720) >= (int)0x2) {
        *(unsigned int *)0xC1EC720 = 0x0;
        *(unsigned int *)0xC2A4664 = 0x0;
    }
    t2 = *(int *)0xC1EC720;
    t3 = *(int *)0xC2A4664;
    *(unsigned int *)(((int)stk + 0)) = (((t2 << 2) + t2) + t3);
    if ((*(int *)(((int)stk + 4))) == 0) {
        if ((((int)0x1 << (int)(((t2 << 2) + t2) + t3)) & 0x0) != 0) {
            FUN_0c03425e(0x0, ((int)stk + 0), 0xA, 0x0);
        }
    } else {
        FUN_0c03425e(0x0, ((int)stk + 0), 0xA, 0x0);
    }
    t22 = 0x213;
    if ((*(int *)(((int)stk + 4))) != 0) {
        t22 = 0x80213;
    }
    FUN_0c034e28(t22, 0xC0B4E04, 0xA, (*(int *)(((int)stk + 0))), *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    *(unsigned int *)0xC1EC720 = ((int)((int)(*(int *)(((int)stk + 0))) / (int)0x5));
    t29 = (int)((int)(*(int *)(((int)stk + 0))) % (int)0x5);
    *(unsigned int *)0xC2A4664 = t29;
    return t29;
}


int FUN_0c0426b8(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = (((struct o80_int *)(a4))->v);
    t1 = *(int *)(((*(int *)((((((t0 << 1) + t0) << 2) + (*(int *)0xC2ADA7C)) + 0x4))) + 0x0));
    t0 = 0x2;
    if ((int)(t1 - 14) > (int)0x2) {
        t0 = (t1 - 14);
    }
    t1 = (((struct oD4_int *)(a4))->v);
    if (((int)t1 < (int)t0) && ((int)t1 > 0)) {
        (((struct o84_uint *)(a4))->v) = (((((struct o84_int *)(a4))->v)) & 0xFFFF8DFF);
        t0 = 0x84;
    } else {
        t1 = 0x84;
        if ((((((struct o84_int *)(a4))->v)) & 0x1000) == 0) {
            (((struct o84_uint *)(a4))->v) = (((((struct o84_int *)(a4))->v)) | 0x1000);
            (((struct o84_uint *)(a4))->v) = (((((struct o84_int *)(a4))->v)) & 0xFFFFF3FF);
            t2 = (((struct o80_int *)(a4))->v);
            t1 = *(int *)((((((t2 << 1) + t2) << 2) + (*(int *)0xC2ADA7C)) + 0x8));
            if ((*(short *)((t1 + 0x6))) != 0) {
                t2 = FUN_0c046466();
                if ((t2 & 1) != 0) {
                    (((struct o84_uint *)(a4))->v) = (((((struct o84_int *)(a4))->v)) | 0x200);
                }
            }
            if ((((((struct o84_int *)(a4))->v)) & 0x200) == 0) {
                t2 = (short)((unsigned int)(*(int *)((t1 + 0x0))) >> 16);
            } else {
                t2 = ((int)(*(int *)((t1 + 0x0))) >> 18);
            }
            if ((t2 & 0x3) == 2) {
                (((struct o84_uint *)(a4))->v) = (((((struct o84_int *)(a4))->v)) | 0x4000);
                t1 = 0x84;
            } else {
                t1 = (t2 & 0x3);
                if ((t2 & 0x3) == 1) {
                    (((struct o84_uint *)(a4))->v) = (((((struct o84_int *)(a4))->v)) | 0x2000);
                    t1 = 0x84;
                }
            }
        }
        t0 = t1;
    }
    return t0;
}


int FUN_0c04e45e(int a4, int a5)
{
    int stk[5];
    register float t2;
    register int t23;
    register float t6;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    nlSubVector3op((((int)stk + 0) + 0x8), 0xC175930, (*(int *)(((int)stk + 0))));
    t2 = FUN_0c073c80((((int)stk + 0) + 0x8));
    *(float *)(((*(int *)(((int)stk + 4))) + 0x0)) = t2;
    t23 = 0x1;
    if (160000.0f > t2) {
    } else {
        t23 = 0x0;
        if (t2 > 2560000.0f) {
        } else {
            nlSubVector3op((((int)stk + 0) + 0x8), 0xC177D38, (*(int *)(((int)stk + 0))));
            t6 = FUN_0c073c80((((int)stk + 0) + 0x8));
            t23 = 0x2;
            if (160000.0f > t6) {
            } else {
                t23 = 0x5;
                if (t2 > 2560000.0f) {
                } else {
                    t23 = 0x4;
                    if (t2 > (*(float *)0xC04E674)) {
                        t23 = 0x3;
                    }
                }
            }
        }
    }
    return t23;
}

float FUN_0c074e20(void)
{
    register int t0;
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
    register float u10;
    register float u11;
    register float u12;
    register float u13;
    register float u14;
    register float u15;
    float u17[16];
    float u18[4];
    float u19[16];
    float u20[16];
    float u21[4];
    float u22[16];
    float u23[4];
    float u24[16];
    float u25[4];
    float u26[16];
    float u43[16];
    float u44[4];
    float u45[16];
    float u46[16];
    float u47[4];
    float u48[16];
    float u49[4];
    float u50[16];
    float u51[4];
    float u52[16];

    t0 = *(int *)0xC2BF96C;
    u0 = *(float *)((t0 + 0x0));
    u1 = *(float *)(((t0 + 0x0) + 4));
    u2 = (((struct o8_float *)(t0))->v);
    u3 = *(float *)((((t0 + 0x8) + 0x0) + 4));
    u4 = (((struct o8_float *)((t0 + 0x8)))->v);
    u5 = *(float *)(((((t0 + 0x8) + 0x8) + 0x0) + 4));
    u6 = (((struct o8_float *)(((t0 + 0x8) + 0x8)))->v);
    u7 = *(float *)((((((t0 + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    u8 = (((struct o8_float *)((((t0 + 0x8) + 0x8) + 0x8)))->v);
    u9 = *(float *)(((((((t0 + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    u10 = (((struct o8_float *)(((((t0 + 0x8) + 0x8) + 0x8) + 0x8)))->v);
    u11 = *(float *)((((((((t0 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    u12 = (((struct o8_float *)((((((t0 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8)))->v);
    u13 = *(float *)(((((((((t0 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    u14 = (((struct o8_float *)(((((((t0 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8)))->v);
    u15 = *(float *)((((((((((t0 + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x0) + 4));
    _builtin_prefetch((void *)0xC2BFB70);
    u17[0] = u1;
    u17[1] = u0;
    u17[2] = u3;
    u17[3] = u2;
    u17[4] = u5;
    u17[5] = u4;
    u17[6] = u7;
    u17[7] = u6;
    u17[8] = u9;
    u17[9] = u8;
    u17[10] = u11;
    u17[11] = u10;
    u17[12] = u13;
    u17[13] = u12;
    u17[14] = u15;
    u17[15] = u14;
    _builtin_st_ext((float (*)[4])u19);
    u18[0] = u19[0];
    u18[1] = u19[1];
    u18[2] = u19[2];
    u18[3] = u19[3];
    _builtin_ld_ext((float (*)[4])u17);
    _builtin_ftrv(u18, u18);
    u20[0] = u1;
    u20[1] = u0;
    u20[2] = u3;
    u20[3] = u2;
    u20[4] = u5;
    u20[5] = u4;
    u20[6] = u7;
    u20[7] = u6;
    u20[8] = u9;
    u20[9] = u8;
    u20[10] = u11;
    u20[11] = u10;
    u20[12] = u13;
    u20[13] = u12;
    u20[14] = u15;
    u20[15] = u14;
    u21[0] = u19[4];
    u21[1] = u19[5];
    u21[2] = u19[6];
    u21[3] = u19[7];
    _builtin_ld_ext((float (*)[4])u20);
    _builtin_ftrv(u21, u21);
    u22[0] = u1;
    u22[1] = u0;
    u22[2] = u3;
    u22[3] = u2;
    u22[4] = u5;
    u22[5] = u4;
    u22[6] = u7;
    u22[7] = u6;
    u22[8] = u9;
    u22[9] = u8;
    u22[10] = u11;
    u22[11] = u10;
    u22[12] = u13;
    u22[13] = u12;
    u22[14] = u15;
    u22[15] = u14;
    u23[0] = u19[8];
    u23[1] = u19[9];
    u23[2] = u19[10];
    u23[3] = u19[11];
    _builtin_ld_ext((float (*)[4])u22);
    _builtin_ftrv(u23, u23);
    u24[0] = u1;
    u24[1] = u0;
    u24[2] = u3;
    u24[3] = u2;
    u24[4] = u5;
    u24[5] = u4;
    u24[6] = u7;
    u24[7] = u6;
    u24[8] = u9;
    u24[9] = u8;
    u24[10] = u11;
    u24[11] = u10;
    u24[12] = u13;
    u24[13] = u12;
    u24[14] = u15;
    u24[15] = u14;
    u25[0] = u19[12];
    u25[1] = u19[13];
    u25[2] = u19[14];
    u25[3] = u19[15];
    _builtin_ld_ext((float (*)[4])u24);
    _builtin_ftrv(u25, u25);
    _builtin_prefetch((void *)0xC2BFB90);
    _builtin_st_ext((float (*)[4])u26);
    u26[0] = u18[0];
    u26[1] = u18[1];
    u26[2] = u18[2];
    u26[3] = u18[3];
    u26[4] = u21[0];
    u26[5] = u21[1];
    u26[6] = u21[2];
    u26[7] = u21[3];
    u26[8] = u23[0];
    u26[9] = u23[1];
    u26[10] = u23[2];
    u26[11] = u23[3];
    u26[12] = u25[0];
    u26[13] = u25[1];
    u26[14] = u25[2];
    u26[15] = u25[3];
    _builtin_ld_ext((float (*)[4])u26);
    u0 = (((struct o0_float *)0xC2BFB70)->v);
    u1 = (((struct o4_float *)0xC2BFB70)->v);
    u2 = (((struct o8_float *)0xC2BFB70)->v);
    u3 = (((struct oC_float *)0xC2BFB70)->v);
    u4 = (((struct o10_float *)0xC2BFB70)->v);
    u5 = (((struct o14_float *)0xC2BFB70)->v);
    u6 = (((struct o18_float *)0xC2BFB70)->v);
    u7 = (((struct o1C_float *)0xC2BFB70)->v);
    u8 = (((struct o20_float *)0xC2BFB70)->v);
    u9 = (((struct o24_float *)0xC2BFB70)->v);
    u10 = (((struct o28_float *)0xC2BFB70)->v);
    u11 = (((struct o2C_float *)0xC2BFB70)->v);
    u12 = (((struct o30_float *)0xC2BFB70)->v);
    u13 = (((struct o34_float *)0xC2BFB70)->v);
    u14 = (((struct o38_float *)0xC2BFB70)->v);
    u15 = (((struct o3C_float *)0xC2BFB70)->v);
    u43[0] = u0;
    u43[1] = u1;
    u43[2] = u2;
    u43[3] = u3;
    u43[4] = u4;
    u43[5] = u5;
    u43[6] = u6;
    u43[7] = u7;
    u43[8] = u8;
    u43[9] = u9;
    u43[10] = u10;
    u43[11] = u11;
    u43[12] = u12;
    u43[13] = u13;
    u43[14] = u14;
    u43[15] = u15;
    _builtin_st_ext((float (*)[4])u45);
    u44[0] = u45[0];
    u44[1] = u45[1];
    u44[2] = u45[2];
    u44[3] = u45[3];
    _builtin_ld_ext((float (*)[4])u43);
    _builtin_ftrv(u44, u44);
    u46[0] = u0;
    u46[1] = u1;
    u46[2] = u2;
    u46[3] = u3;
    u46[4] = u4;
    u46[5] = u5;
    u46[6] = u6;
    u46[7] = u7;
    u46[8] = u8;
    u46[9] = u9;
    u46[10] = u10;
    u46[11] = u11;
    u46[12] = u12;
    u46[13] = u13;
    u46[14] = u14;
    u46[15] = u15;
    u47[0] = u45[4];
    u47[1] = u45[5];
    u47[2] = u45[6];
    u47[3] = u45[7];
    _builtin_ld_ext((float (*)[4])u46);
    _builtin_ftrv(u47, u47);
    u48[0] = u0;
    u48[1] = u1;
    u48[2] = u2;
    u48[3] = u3;
    u48[4] = u4;
    u48[5] = u5;
    u48[6] = u6;
    u48[7] = u7;
    u48[8] = u8;
    u48[9] = u9;
    u48[10] = u10;
    u48[11] = u11;
    u48[12] = u12;
    u48[13] = u13;
    u48[14] = u14;
    u48[15] = u15;
    u49[0] = u45[8];
    u49[1] = u45[9];
    u49[2] = u45[10];
    u49[3] = u45[11];
    _builtin_ld_ext((float (*)[4])u48);
    _builtin_ftrv(u49, u49);
    u50[0] = u0;
    u50[1] = u1;
    u50[2] = u2;
    u50[3] = u3;
    u50[4] = u4;
    u50[5] = u5;
    u50[6] = u6;
    u50[7] = u7;
    u50[8] = u8;
    u50[9] = u9;
    u50[10] = u10;
    u50[11] = u11;
    u50[12] = u12;
    u50[13] = u13;
    u50[14] = u14;
    u50[15] = u15;
    u51[0] = u45[12];
    u51[1] = u45[13];
    u51[2] = u45[14];
    u51[3] = u45[15];
    _builtin_ld_ext((float (*)[4])u50);
    _builtin_ftrv(u51, u51);
    _builtin_st_ext((float (*)[4])u52);
    u52[0] = u44[0];
    u52[1] = u44[1];
    u52[2] = u44[2];
    u52[3] = u44[3];
    u52[4] = u47[0];
    u52[5] = u47[1];
    u52[6] = u47[2];
    u52[7] = u47[3];
    u52[8] = u49[0];
    u52[9] = u49[1];
    u52[10] = u49[2];
    u52[11] = u49[3];
    u52[12] = u51[0];
    u52[13] = u51[1];
    u52[14] = u51[2];
    u52[15] = u51[3];
    _builtin_ld_ext((float (*)[4])u52);
    return u0;
}

int fmMngAddData(int a4)
{
    register int t0;
    register int t3;
    register int t4;

    t0 = 0xFFFFFFFA;
    if ((*(short *)((a4 + 0x2))) == 0) {
        (((struct o34_ushort *)(a4))->v) = (*(int *)((a4 + 0x28)));
        thunk_FUN_0c160706((*(int *)((a4 + 0x30))), ((a4 + 0x34) + 0x2), 0x3C);
        (((struct o3E_ushort *)((a4 + 0x34)))->v) = (fmcalccrc(0x3E, (a4 + 0x34)));
        fmMngMcpy4((a4 + 0x34), ((*(int *)((a4 + 0xC))) + (((((*(int *)((a4 + 0x28))) + 0x1) << 2) << 2) << 2)), 0x40);
        t0 = 0xFFFFFFF6;
        if ((int)(*(int *)((a4 + 0x10))) >= (int)(*(int *)((a4 + 0x14)))) {
        } else {
            t0 = *(int *)((a4 + 0x14));
            fmMngNum2Bit(((*(int *)((a4 + 0x10))) + 0x1), ((*(int *)((a4 + 0xC))) + ((((t0 + 0x1) << 2) << 2) << 2)), (*(int *)((a4 + 0x18))));
            t3 = FUN_0c16a4e4(((*(int *)((a4 + 0x4))) + ((((t0 + 0x1) << 2) << 2) << 2)), ((*(int *)((a4 + 0xC))) + ((((t0 + 0x1) << 2) << 2) << 2)), ((((*(int *)((a4 + 0x18))) << 2) << 2) << 2));
            t0 = 0xFFFFFFFE;
            if (t3 == ((((*(int *)((a4 + 0x18))) << 2) << 2) << 2)) {
                t3 = *(int *)((a4 + 0x10));
                *(unsigned int *)((a4 + 0x10)) = ((*(int *)((a4 + 0x10))) + 0x1);
                t4 = FUN_0c16a4e4(((*(int *)((a4 + 0x4))) + ((((t3 + 0x1) << 2) << 2) << 2)), (a4 + 0x34), 0x40);
                t3 = 0x0;
                if (t4 != 64) {
                    t3 = 0xFFFFFFFE;
                }
                t0 = t3;
            }
        }
    }
    return t0;
}


float FUN_0c01145c(float f4, float f5, float f6, float f7)
{
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    if ((int)(*(int *)0xC175C80) < (int)0x8) {
        u0 = (f4 * 0.00600000005f);
        if (!(f4 > 2000.0f)) {
        } else {
            if (!(f4 > 6000.0f)) {
                u1 = 12.0f;
                u1 = u1 + 0.000750000007f * ((f4 + -2000.0f));
                u2 = u1;
            } else {
                u2 = (15.0f - (((f4 + -6000.0f) * 0.00600000005f)));
            }
            u0 = u2;
        }
        u1 = u0;
    } else {
        u0 = (f4 * 0.00549999997f);
        if (!(f4 > 2000.0f)) {
        } else {
            if (!(f4 > ((((struct o0_float *)0xC0115E8)->v)))) {
                u2 = ((((struct o4_float *)0xC0115E8)->v));
                u2 = u2 + ((((struct o8_float *)0xC0115E8)->v)) * ((f4 + -2000.0f));
                u3 = u2;
            } else {
                u3 = (((((struct o14_float *)0xC0115E8)->v)) - (((f4 + ((((struct oC_float *)0xC0115E8)->v))) * ((((struct o10_float *)0xC0115E8)->v)))));
            }
            u0 = u3;
        }
        u1 = u0;
    }
    return u1;
}


int nlMvCalcEdgeA(int a4, int a5)
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

    t0 = (((struct o0_int *)0xC2C3DD0)->v);
    u0 = *(float *)0xC079A78;
    t1 = (((struct o8_int *)0xC2C3DD0)->v);
    u1 = *(float *)0xC2C4DBC;
    t2 = (((struct o4_int *)0xC2C3DD0)->v);
    t3 = 0xC079A78;
    if ((int)a5 > 0) {
        t4 = a4;
        t5 = 0x0;
        t6 = t1;
        t1 = t2;
        t2 = t0;
        for (;;) {
            FUN_0c072230(t4, t2);
            *(float *)((t1 + 0x0)) = ((*(float *)((t2 + 0x0))) + ((((struct o0_float *)0xC2C3E10)->v)));
            (((struct o4_float *)(t1))->v) = (((((struct o4_float *)(t2))->v)) + ((((struct o4_float *)0xC2C3E10)->v)));
            (((struct o8_float *)(t1))->v) = (((((struct o8_float *)(t2))->v)) + ((((struct o8_float *)0xC2C3E10)->v)));
            u2 = (((struct o8_float *)(t2))->v);
            if (u1 > u2) {
                (((struct oC_float *)(t2))->v) = u0;
            } else {
                (((struct oC_float *)(t2))->v) = (1.0f / u2);
            }
            u2 = (((struct o8_float *)(t1))->v);
            if (u1 > u2) {
                (((struct oC_float *)(t1))->v) = u0;
            } else {
                (((struct oC_float *)(t1))->v) = (1.0f / u2);
            }
            t0 = nlMvClipEdge(t2, t1, t6);
            t5 = (t5 + 0x1);
            t2 = (t2 + 0x10);
            t6 = (t6 + 0x10);
            t4 = (t4 + 0xC);
            t1 = (t1 + 0x10);
            if ((int)t5 >= (int)a5) {
                break;
            }
        }
        t3 = t0;
    }
    return t3;
}

int FUN_0c07beb4(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t0 = FUN_0c07b91c(a4, a5);
    t1 = t0;
    if (t0 == 0) {
        t0 = 0x0;
        for (;;) {
            t2 = FUN_0c07c5b8(a5, 0x1100A0, 0x0);
            if (t2 != 0) {
                t0 = (t0 + 0x1);
                if ((int)t0 >= (int)0x400000) {
                    break;
                }
                continue;
            }
            t2 = *(int *)((a4 + 0x8));
            t3 = *(int *)((a4 + 0x4));
            if ((*(int *)((((signed char)(((a5 << 1) + a5) << 2) + 0xC2C3F88) + 0x0))) == t3) {
                *(unsigned int *)((((signed char)(((a5 << 1) + a5) << 2) + 0xC2C3F88) + 0x0)) = (t3 | 0x80000000);
                FUN_0c07b6c0((t3 | 0x80000000), ((a5 << 2) + 0xA0800060));
                t4 = FUN_0c07b706();
                if (t4 == 0) {
                    t5 = FUN_0c07b734();
                    if (t5 == 0) {
                        t0 = a5;
                        t0 = (t0 << 1);
                        t0 = (t0 + a5);
                        t0 = (t0 << 2);
                        t0 = (signed char)t0;
                        t0 = (t0 + 0xC2C3F88);
                        syG2Write(a4, (*(int *)((t0 + 0x4))), 0x4, ((unsigned int)t2 >> 2), 0x1, 0x1);
                        FUN_0c07b6c0((*(int *)((t0 + 0x8))), ((*(int *)((t0 + 0x4))) + 0x8));
                        t6 = FUN_0c07b786();
                        if (t6 != 0) {
                            return t6;
                        }
                        return 0x0;
                    }
                    return t5;
                }
                return t4;
            }
            *(unsigned int *)((((signed char)(((a5 << 1) + a5) << 2) + 0xC2C3F88) + 0x0)) = t3;
            FUN_0c07b6c0(t3, ((a5 << 2) + 0xA0800060));
            t3 = FUN_0c07b706();
            if (t3 == 0) {
                t4 = FUN_0c07b734();
                if (t4 == 0) {
                    t0 = a5;
                    t0 = (t0 << 1);
                    t0 = (t0 + a5);
                    t0 = (t0 << 2);
                    t0 = (signed char)t0;
                    t0 = (t0 + 0xC2C3F88);
                    syG2Write(a4, (*(int *)((t0 + 0x4))), 0x4, ((unsigned int)t2 >> 2), 0x1, 0x1);
                    FUN_0c07b6c0((*(int *)((t0 + 0x8))), ((*(int *)((t0 + 0x4))) + 0x8));
                    t2 = FUN_0c07b786();
                    if (t2 != 0) {
                        return t2;
                    }
                    return 0x0;
                }
                return t4;
            }
            return t3;
        }
        t1 = 0xFFFFFF00;
    }
    return t1;
}

int vmsfs_scanfile(int a4, int a5, int a6)
{
    int stk[20];
    register int t2;
    register int t7;
    register int t9;
    register int t14;
    register int t20;

    (((struct o4C_uint *)(((int)stk + 0)))->v) = a4;
    (((struct o48_uint *)(((int)stk + 0)))->v) = a5;
    (((struct o44_uint *)(((int)stk + 0)))->v) = a6;
    t2 = FUN_0c08f204((*(int *)(((int)stk + 76))), (*(int *)(((int)stk + 72))), ((int)stk + 0));
    *(unsigned int *)(((int)stk + 48)) = t2;
    if ((int)t2 < 0) {
        return 0xFFFFFF05;
    }
    *(unsigned int *)(((int)stk + 44)) = (FUN_0c08f9c4((*(int *)(((int)stk + 76))), (*(int *)(((int)stk + 48)))));
    *(unsigned int *)(((int)stk + 56)) = (*(int *)(((int)stk + 12)));
    t7 = *(int *)(((int)stk + 68));
    *(unsigned int *)(((int)stk + 68)) = (t7 + 0x2);
    t9 = *(int *)(((int)stk + 56));
    *(unsigned short *)((((t7 + 0x2) - 2) + 0x0)) = t9;
    *(unsigned int *)(((int)stk + 64)) = 0x0;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 64))) >= (int)(*(int *)(((int)stk + 40)))) {
            break;
        }
        t9 = 0xC08F87C;
        t14 = FUN_0c08f87c((*(int *)(((int)stk + 76))), (*(int *)(((int)stk + 56))));
        *(unsigned int *)(((int)stk + 52)) = (unsigned short)t14;
        *(unsigned int *)(((int)stk + 56)) = (unsigned short)t14;
        t9 = (*(int *)(((int)stk + 68)));
        t9 = (t9 + 0x2);
        *(unsigned int *)(((int)stk + 68)) = t9;
        t9 = (t9 - 2);
        *(unsigned short *)((t9 + 0x0)) = (*(int *)(((int)stk + 56)));
        t9 = (*(int *)(((int)stk + 64)));
        t9 = (t9 + 0x1);
        *(unsigned int *)(((int)stk + 64)) = t9;
    }
    t20 = FUN_0c08fabc((*(int *)(((int)stk + 76))), (*(int *)(((int)stk + 72))));
    *(unsigned int *)(((int)stk + 60)) = t20;
    if ((int)t20 < 0) {
        return t20;
    }
    return (*(int *)(((int)stk + 48)));
}

int gdCiLoadDirInfo(int a4, int a5)
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

    if (a4 == 0) {
        FUN_0c16c338(0xC1721C8, 0xC17452C, 0x1);
        FUN_0c16c2e2(0x0);
        t0 = 0x0;
    } else {
        if (a5 == 0) {
            FUN_0c16c338(0xC1721C8, 0xC17456C, 0x2);
            FUN_0c16c2e2(0x0);
            t1 = 0x0;
        } else {
            t2 = gdCiGetGdfsWork();
            t3 = *(int *)((t2 + 0x10));
            t4 = t2;
            t2 = (t3 + 0x10);
            t5 = 0x0;
            t6 = 0x0;
            t7 = 0xC17451C;
            for (;;) {
                if ((int)t5 >= (int)(*(int *)((t3 + 0x0)))) {
                    break;
                }
                t7 = (t5 * 0x2C);
                t7 = (t7 + (t3 + 0x10));
                t4 = (*(signed char *)((t7 + 0x8)));
                t4 = (unsigned char)t4;
                if ((t4 & 0x2) == 0) {
                    t8 = t6;
                    t8 = (t8 << 1);
                    t2 = a4;
                    t8 = (t8 + t6);
                    t8 = (t8 << 2);
                    t8 = (t8 << 2);
                    t8 = (t8 + t2);
                    t4 = (memset((t8 + 0x9), 0x0, 0x21));
                    t2 = 0xC0800DC;
                    t4 = (strlen((t7 + 0xA)));
                    t4 = (memcpy((t8 + 0x9), (t7 + 0xA), t4));
                    t2 = (*(int *)((t7 + 0x4)));
                    t6 = (t6 + 0x1);
                    *(unsigned int *)((t8 + 0x2C)) = t2;
                    if ((int)t6 < (int)a5) {
                        t5 = (t5 + 0x1);
                        continue;
                    }
                    break;
                }
                t5 = (t5 + 0x1);
            }
            t1 = t6;
        }
        t0 = t1;
    }
    return t0;
}

int FUN_0c05bc98(int a4, float f4)
{
    nlPushMatrix(0x0);
    nlScale(f4, f4, f4);
    if (a4 != 0) {
        if (a4 != 1) {
        } else {
            FUN_0c078810(0xC10D9C8, 0xC10D9D4, 0xFFFF0000);
            FUN_0c078810(0xC10D9E0, 0xC10D9EC, 0xFF00FF00);
            FUN_0c078810(0xC10D9F8, 0xC10DA04, 0xFF0000FF);
        }
    } else {
        FUN_0c078810(0xC10D9BC, 0xC10D9C8, 0xFFFF0000);
        FUN_0c078810(0xC10D9BC, 0xC10D9E0, 0xFF00FF00);
        FUN_0c078810(0xC10D9BC, 0xC10D9F8, 0xFF0000FF);
    }
    return nlPopMatrix(0x1);
}

int FUN_0c06a620(int a4, int a5, int a6)
{
    register int t0;
    register int t10;

    t0 = *(int *)((((a4 - 35) << 2) + 0xC10E5D0));
    (((struct o0_uint *)0xC13B8DC)->v) = (*(int *)(((*(int *)((((*(int *)(((t0 << 2) + 0xC13B884))) + (a6 << 2)) + 0x0))) + (((int)((int)(((int (*)(int, int, int))(FUN_0c069e54))(((a4 - 35) << 2), a5, a6)) % (int)(*(int *)(((*(int *)(((t0 << 2) + 0xC13B894))) + (a6 << 2)))))) << 2))));
    Voice_ShutUp(0x2);
    t10 = FUN_0c058f64(0xC13B8DC, 0x2, (*(int *)(((t0 << 2) + 0xC11039C))), 0x0);
    if ((int)a5 > (int)0x1) {
        (((struct o18_uint *)0xC13B8DC)->v) = (*(int *)(((*(int *)(((t0 << 2) + (*(int *)((0xC13B8C4 + ((a5 - 2) << 2))))))) + (((int)((int)(((int (*)(void))(FUN_0c069e54))()) % (int)(*(int *)(((t0 << 2) + (*(int *)(((0xC13B8D0 + ((a5 - 2) << 2)) + 0x0)))))))) << 2))));
        Voice_ShutUp(0x3);
        return FUN_0c058f64(0xC13B8F4, 0x3, (*(int *)(((t0 << 2) + 0xC1103AC))), 0x0);
    }
    return t10;
}

int kmiUpdateRenderStatus(void)
{
    int t0;
    register int t1;
    register int t2;

    t2 = 0x0;
    for (;;) {
        if (((*(int *)(((t2 << 2) + 0xC300C1C))) != 5) && (t0 = *(int *)(((t2 << 2) + 0xC300C1C)), t0 != -3)) {
            t2 = (t2 + 0x1);
            if ((int)t2 >= (int)0x4) {
                return t0;
            }
            continue;
        }
        break;
    }
    *(unsigned int *)(((t2 << 2) + 0xC300C1C)) = 0x7;
    if (((((((struct o0_int *)0xC3008F0)->v)) & 0x1) != 1) && ((t1 = (((struct o0_int *)0xC3008F0)->v), (t1 & 0x2C) == 32) && (0x1 != 0))) {
        (((struct oC_uint *)0xA05F8044)->v) = (((((struct o30_int *)0xC300BD4)->v)) + ((((struct o0_int *)0xC300AE8)->v)));
        (((struct o10_uint *)0xA05F8044)->v) = (((((struct o34_int *)0xC300BD4)->v)) + ((((struct o4_int *)0xC300AE8)->v)));
    } else {
        if (((((struct o14_int *)0xC3008F0)->v)) != 1) {
            (((struct oC_uint *)0xA05F8044)->v) = ((*(int *)((((t2 & 0x1) << 2) + 0xC300C04))) + ((((struct o0_int *)0xC300AE8)->v)));
            (((struct o10_uint *)0xA05F8044)->v) = ((*(int *)((((t2 & 0x1) << 2) + 0xC300C04))) + ((((struct o4_int *)0xC300AE8)->v)));
        }
    }
    t0 = *(int *)(((t2 << 2) + 0xC300C1C));
    t1 = t0;
    if (t0 != -3) {
        t0 = (((struct o0_int *)0xC300B78)->v);
        t2 = t0;
        if (t0 == 1) {
            *(unsigned int *)0xA05F80E8 = ((((struct o0_int *)0xC300BD4)->v));
            (((struct o0_uint *)0xA05F8044)->v) = ((((struct o20_int *)0xC300B78)->v));
            (((struct o0_uint *)0xC300B78)->v) = 0x0;
            t2 = 0xC300B98;
        }
        t1 = t2;
    }
    return t1;
}

int FUN_0c01a0a4(void)
{
    register int t0;
    register float u0;
    register float u1;

    u0 = (((struct o34_float *)0xC1EC7F4)->v);
    if (!(u0 > (float)(unsigned char)(*(signed char *)0xC1EC770))) {
        t0 = *(signed char *)0xC1EC770;
        u1 = (((struct o4_float *)0xC1EC834)->v);
        (((struct o0_float *)0xC1EC7F4)->v) = (((float)(unsigned char)t0 - u0) / u1);
        (((struct oC_float *)0xC1EC7F4)->v) = (((float)(unsigned char)t0 - u0) / u1);
    } else {
        u1 = ((u0 - (float)(unsigned char)(*(signed char *)0xC1EC770)) / ((((struct o0_float *)0xC1EC834)->v)));
        u1 = -u1;
        (((struct o0_float *)0xC1EC7F4)->v) = u1;
        (((struct oC_float *)0xC1EC7F4)->v) = u1;
    }
    if (-1.0f > ((((struct oC_float *)0xC1EC7F4)->v))) {
        (((struct oC_float *)0xC1EC7F4)->v) = -1.0f;
    }
    if (((((struct oC_float *)0xC1EC7F4)->v)) > 1.0f) {
        (((struct oC_float *)0xC1EC7F4)->v) = 1.0f;
    }
    t0 = *(signed char *)0xC1EC771;
    u0 = (((struct o18_float *)0xC1EC7F4)->v);
    u1 = (((struct o20_float *)0xC1EC7F4)->v);
    (((struct o4_float *)0xC1EC7F4)->v) = (((float)(unsigned char)t0 - u0) / u1);
    (((struct o10_float *)0xC1EC7F4)->v) = (((float)(unsigned char)t0 - u0) / u1);
    if (0.0f > ((((struct o10_float *)0xC1EC7F4)->v))) {
        (((struct o10_float *)0xC1EC7F4)->v) = 0.0f;
    }
    if (((((struct o10_float *)0xC1EC7F4)->v)) > 1.0f) {
        (((struct o10_float *)0xC1EC7F4)->v) = 1.0f;
    }
    t0 = *(signed char *)0xC1EC772;
    u0 = (((struct o24_float *)0xC1EC7F4)->v);
    u1 = (((struct o2C_float *)0xC1EC7F4)->v);
    (((struct o8_float *)0xC1EC7F4)->v) = (((float)(unsigned char)t0 - u0) / u1);
    (((struct o14_float *)0xC1EC7F4)->v) = (((float)(unsigned char)t0 - u0) / u1);
    if (0.0f > ((((struct o14_float *)0xC1EC7F4)->v))) {
        (((struct o14_float *)0xC1EC7F4)->v) = 0.0f;
    }
    if (((((struct o14_float *)0xC1EC7F4)->v)) > 1.0f) {
        (((struct o14_float *)0xC1EC7F4)->v) = 1.0f;
    }
    return 0x1A;
}


int FUN_0c03425e(int a4, int a5, int a6, int a7)
{
    int stk[1];

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
    register int v0_6;
    v0_0 = a4;
    v0_1 = a5;
    v0_2 = a6;
    R7 = a7;
    *(unsigned int *)(((int)stk + 0)) = ((v0_0 * 0x2C) + 0xC2A4680);
    v0_3 = (0x0);
    if (((*(int *)0xC2A46E0) != 1)) goto L_C034282;
    if ((v0_0 == 0)) goto L_C034312;
    L_C034282:;
    v0_4 = ((v0_2 - 1));
    if (((int)(*(int *)((v0_1 + 0x0))) < (int)v0_2)) goto L_C03428E;
    *(unsigned int *)((v0_1 + 0x0)) = v0_4;
    L_C03428E:;
    if ((((*(int *)(((*(int *)(((int)stk + 0))) + 0x1C))) & 4) == 0)) goto L_C0342FE;
    v0_5 = (0xC2A4670);
    v0_0 = ((*(int *)((v0_1 + 0x0))));
    v0_2 = (0x1);
    if ((((*(int *)0xC2A4670) & 32) != 0)) goto L_C0342AE;
    if (((*(int *)((v0_5 + 0x8))) != 0)) goto L_C0342C6;
    if ((((*(int *)((v0_5 + 0x4))) & 32) == 0)) goto L_C0342C6;
    L_C0342AE:;
    if (((int)v0_0 <= 0)) goto L_C0342C6;
    L_C0342B2:;
    v0_6 = (((int)v0_2 << (int)(v0_0 - 1)) & R7) != 0;
    v0_0 = ((v0_0 - 1));
    if (v0_6) goto L_C0342C2;
    *(unsigned int *)((v0_1 + 0x0)) = v0_0;
    v0_3 = ((v0_3 + 0x1));
    L_C0342C6:;
    if ((((*(int *)((v0_5 + 0x0))) & 64) != 0)) goto L_C0342D8;
    if (((*(int *)((v0_5 + 0x8))) != 0)) goto L_C0342F0;
    if ((((*(int *)((v0_5 + 0x4))) & 64) == 0)) goto L_C0342F0;
    L_C0342D8:;
    if (((int)v0_0 >= (int)v0_4)) goto L_C0342F0;
    L_C0342DC:;
    v0_5 = (((int)v0_2 << (int)(v0_0 + 0x1)) & R7) != 0;
    v0_0 = ((v0_0 + 0x1));
    if (v0_5) goto L_C0342EC;
    *(unsigned int *)((v0_1 + 0x0)) = v0_0;
    v0_3 = ((v0_3 + 0x1));
    L_C0342F0:;
    if (((((int)v0_2 << (int)(*(int *)((v0_1 + 0x0)))) & R7) == 0)) goto L_C0342FE;
    v0_0 = (0xFFFFFFFF);
    goto L_C0342D8;
    L_C0342FE:;
    if ((v0_3 == 0)) goto L_C034312;
    FUN_0c07c8be(0x20DA9);
    if ((v0_3 == 0)) goto L_C034312;
    v0_0 = (0x1);
    L_C034314:;
    return v0_0;
    L_C034312:;
    v0_0 = (0x0);
    goto L_C034314;
    L_C0342EC:;
    if (((int)v0_0 < (int)v0_4)) goto L_C0342DC;
    goto L_C0342F0;
    L_C0342C2:;
    if (((int)v0_0 > 0)) goto L_C0342B2;
    goto L_C0342C6;
}

int FUN_0c04b4c4(int a4)
{
    register int t1;

    nlPushMatrix(0x0);
    t1 = *(int *)0xC2ADEB8;
    if ((unsigned int)t1 < (unsigned int)0xE) {
        switch ((t1 << 1)) {
            case 0:
            case 4:
            case 6:
            case 10:
            case 14:
            case 16:
            case 18:
            case 20:
            case 26:
            {
                FUN_0c073a60(0xC177D38);
                nlRotateAY(0x1000);
                nlObjPutUseViewMatrix(a4);
            }
                break;
            case 2:
            {
                FUN_0c0704c0(0xFFFF0000, 0xFFFF0000, 0xFFFF0000, 100000.0f);
                FUN_0c073a30(0.0f, 0.0f, (*(float *)0xC04B610));
                nlRotateAY(0x1000);
                nlScale((1.0f + 1.0f), (1.0f + 1.0f), (1.0f + 1.0f));
                FUN_0c074f20((1.0f + 1.0f));
                nlObjPutUseViewMatrix(a4);
            }
                break;
            default:
            {
                FUN_0c0704c0(0xFF000000, 0xFF000000, 0xFF000000, 100000.0f);
            }
                break;
        }
    } else {
        FUN_0c073a60(0xC177D38);
        nlRotateAY(0x1000);
        nlObjPutUseViewMatrix(a4);
    }
    return nlPopMatrix(0x1);
}

int FUN_0c058be4(int a4)
{
    int stk[3];
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    *(int *)((int)stk + 0) = a4;
    t0 = 0xC2B63CC;
    for (;;) {
        *(unsigned int *)((t0 + 0x0)) = 0x0;
        t0 = (t0 + 0x4);
        if ((unsigned int)t0 >= (unsigned int)0xC2B672C) {
            break;
        }
    }
    t1 = 0x0;
    t2 = 0xC2B63CC;
    for (;;) {
        *(unsigned int *)((0xC2B672C + t1)) = t2;
        *(unsigned int *)((0xC2B6738 + t1)) = t2;
        *(unsigned int *)((0xC2B6744 + t1)) = 0x0;
        t1 = (t1 + 0x4);
        t2 = (t2 + 0x120);
        if ((unsigned int)t1 >= (unsigned int)0xC) {
            break;
        }
    }
    t3 = ((int (*)(int, int, int, int, int))(FUN_0c07c738))(0x0, 0xA6, 0x0, 0xC2B6744, a4);
    t4 = ((int (*)(int, int, int, int, int, int, int))(FUN_0c07c738))(0x1, 0xA6, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8));
    t5 = ((int (*)(int, int, int, int, int, int, int))(FUN_0c07c738))(0x2, 0xA6, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8));
    t6 = ((int (*)(int, int, int, int, int, int, int))(FUN_0c07c738))(0x3, 0xA6, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8));
    FUN_0c07c5b8(0x0, 0x1100A0, 0x0);
    if ((*(int *)(((int)stk + 0))) == 0) {
        FUN_0c07c5b8(0x1, 0x1100A0, 0x0);
    }
    FUN_0c07c5b8(0x2, 0x1100A0, 0x0);
    FUN_0c07c5b8(0x3, 0x1100A0, 0x0);
    FUN_0c07c5b8(0x4, 0x1100A0, 0x0);
    FUN_0c07c5b8(0x5, 0x1100A0, 0x0);
    FUN_0c07c5b8(0x6, 0x1100A0, 0x0);
    FUN_0c07c5b8(0x7, 0x1100A0, 0x0);
    FUN_0c07c5b8(0x0, 0x1A0, 0x7F);
    FUN_0c03e776();
    return FUN_0c03e792(0x8, 0x1);
}

int FUN_0c07c080(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = FUN_0c07b91c(a4, a5);
    t1 = t0;
    if (t0 != 0) {
    } else {
        t0 = 0x0;
        for (;;) {
            t2 = FUN_0c07c5b8(a5, 0x1100A0, 0x0);
            if (t2 != 0) {
                t0 = (t0 + 0x1);
                if ((int)t0 >= (int)0x400000) {
                    break;
                }
                continue;
            }
            t0 = a5;
            t0 = (t0 << 1);
            t0 = (t0 + a5);
            t0 = (t0 << 2);
            t0 = (signed char)t0;
            t2 = *(int *)((a4 + 0x4));
            t0 = (t0 + 0xC2C3F88);
            if ((*(int *)((t0 + 0x0))) == t2) {
                *(unsigned int *)((t0 + 0x0)) = (t2 | 0x80000000);
                FUN_0c07b6c0((t2 | 0x80000000), ((a5 << 2) + 0xA0800060));
                t3 = *(int *)((t0 + 0x4));
                t4 = *(int *)0xC2C3EA4;
                *(unsigned int *)((t4 + 0x1C)) = t3;
                *(unsigned int *)((t4 + 0x18)) = t3;
            } else {
                *(unsigned int *)((t0 + 0x0)) = t2;
                FUN_0c07b6c0(t2, ((a5 << 2) + 0xA0800060));
                t2 = *(int *)((t0 + 0x4));
                t3 = *(int *)0xC2C3EA4;
                *(unsigned int *)((t3 + 0x1C)) = t2;
                *(unsigned int *)((t3 + 0x18)) = t2;
            }
            *(unsigned int *)(((*(int *)0xC2C3EA4) + 0x14)) = a4;
            *(unsigned int *)(((*(int *)0xC2C3EA4) + 0x0)) = 0x8001;
            *(unsigned int *)(((*(int *)0xC2C3EA4) + 0x4)) = a6;
            *(unsigned int *)(((*(int *)0xC2C3EA4) + 0x8)) = (*(int *)((t0 + 0x8)));
            *(unsigned int *)(((*(int *)0xC2C3EA4) + 0xC)) = (*(int *)((a4 + 0x8)));
            *(unsigned int *)(((*(int *)0xC2C3EA4) + 0x10)) = 0x0;
            return 0x0;
        }
        t1 = 0xFFFFFF00;
    }
    return t1;
}

int vmsfs_fisexist(int a4, int a5)
{
    int stk[14];
    register int t3;
    register int t7;
    register int t11;
    register int t14;

    *(unsigned int *)(((int)stk + 52)) = a4;
    *(unsigned int *)(((int)stk + 48)) = a5;
    if ((*(signed char *)((((*(int *)(((int)stk + 52))) * 0x154) + 0xC2C8D2E))) == 0) {
        return 0xFFFFFF01;
    }
    t3 = vmsio_isready((*(int *)(((int)stk + 52))));
    if (t3 == 0) {
        vmsfs_unmount((*(int *)(((int)stk + 52))));
        return 0xFFFFFF01;
    }
    t7 = vmsio_ismount((*(int *)(((int)stk + 52))));
    if (t7 == 0) {
        return 0xFFFFFF01;
    }
    if ((*(signed char *)((((*(int *)(((int)stk + 52))) * 0x154) + 0xC2C8D34))) == 0) {
        return 0xFFFFFF01;
    }
    t11 = buIsFormat((*(int *)(((int)stk + 52))));
    if ((int)t11 < 0) {
        return 0xFFFFFF03;
    }
    t14 = FUN_0c08f204((*(int *)(((int)stk + 52))), (*(int *)(((int)stk + 48))), ((int)stk + 0));
    if ((int)t14 >= 0) {
        return 0x0;
    }
    return 0xFFFFFF05;
}

int FUN_0c15c95a(int a4, int a5)
{
    int stk[4];

    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    v0_0 = a4;
    v0_3 = a5;
    v0_4 = FUN_0c160598(v0_0, ((int)stk + 0));
    v0_2 = (v0_4);
    v0_1 = (v0_3);
    v0_0 = (v0_4);
    v0_3 = ((*(int *)(((int)stk + 8))));
    if ((v0_4 == 0)) goto L_C15C98A;
    if ((v0_2 == 1)) goto L_C15C98E;
    if ((v0_2 == 2)) goto L_C15C998;
    if ((v0_2 == 3)) goto L_C15C99E;
    if ((v0_2 == 4)) goto L_C15C9A2;
    if ((v0_2 == -1)) goto L_C15C9A6;
    L_C15CA12:;
    return v0_0;
    L_C15C9A6:;
    *(unsigned int *)((v0_1 + 0x4)) = (*(int *)(((int)stk + 4)));
    v0_3 = *(int *)(((int)stk + 0));
    v0_2 = (v0_3);
    v0_0 = (0x5);
    if ((v0_3 == 0)) goto L_C15C9DE;
    if ((v0_2 == 1)) goto L_C15C9E4;
    if ((v0_2 == 2)) goto L_C15C9E8;
    if ((v0_2 == 3)) goto L_C15C9EC;
    if ((v0_2 == 4)) goto L_C15C9F0;
    if ((v0_2 == 5)) goto L_C15C9F4;
    if ((v0_2 == 6)) goto L_C15C9F8;
    if ((v0_2 == 7)) goto L_C15C9FC;
    if ((v0_2 == 11)) goto L_C15CA00;
    if ((v0_2 == 16)) goto L_C15CA04;
    if ((v0_2 == 32)) goto L_C15CA08;
    v0_2 = (0xFFFFFFE6);
    L_C15CA10:;
    *(unsigned int *)((v0_1 + 0x0)) = v0_2;
    goto L_C15CA12;
    L_C15CA08:;
    v0_2 = (0xFFFFFFDA);
    L_C15CA0A:;
    *(unsigned int *)((v0_1 + 0x0)) = v0_2;
    goto L_C15CA12;
    L_C15CA04:;
    v0_2 = (0xFFFFFFDC);
    goto L_C15CA10;
    L_C15CA00:;
    v0_2 = (0xFFFFFFDD);
    goto L_C15CA0A;
    L_C15C9FC:;
    v0_2 = (0xFFFFFFDE);
    goto L_C15CA10;
    L_C15C9F8:;
    v0_2 = (0xFFFFFFDF);
    goto L_C15CA0A;
    L_C15C9F4:;
    v0_2 = (0xFFFFFFE0);
    goto L_C15CA10;
    L_C15C9F0:;
    v0_2 = (0xFFFFFFE1);
    goto L_C15CA0A;
    L_C15C9EC:;
    v0_2 = (0xFFFFFFE2);
    goto L_C15CA10;
    L_C15C9E8:;
    v0_2 = (0xFFFFFFE3);
    goto L_C15CA0A;
    L_C15C9E4:;
    v0_2 = (0xFFFFFFE4);
    goto L_C15CA10;
    L_C15C9DE:;
    *(unsigned int *)((v0_1 + 0x0)) = 0xFFFFFFE5;
    goto L_C15CA12;
    L_C15C9A2:;
    v0_0 = (0x43);
    goto L_C15CA12;
    L_C15C99E:;
    v0_0 = (0x41);
    goto L_C15CA12;
    L_C15C998:;
    *(unsigned int *)((v0_1 + 0x0)) = v0_3;
    v0_0 = (0x1);
    goto L_C15CA12;
    L_C15C98E:;
    *(unsigned int *)((v0_1 + 0x0)) = v0_3;
    *(unsigned int *)((v0_1 + 0x8)) = (*(int *)(((int)stk + 12)));
    v0_0 = (0x4);
    goto L_C15CA12;
    L_C15C98A:;
    v0_0 = (0x0);
    goto L_C15CA12;
}

int FUN_0c032150(int a4)
{
    int stk[27];
    register int t0;
    register int t2;
    register int t27;
    register int t4;
    register int t7;
    register int t10;
    register int t12;
    register int t13;

    *(unsigned int *)(((int)stk + 8)) = a4;
    t0 = buGetFileSize(a4, 0xC0B33CC);
    if (t0 != 20) {
        return 0xFFFF0000;
    }
    *(int *)((int)stk + 4) = 0xC290B3C;
    *(int *)((int)stk + 0) = 0x14;
    t2 = FUN_0c03209c((*(int *)(((int)stk + 8))), 0xC0B33CC, (((int)stk + 0) + 0xC), 0xC290B44, 0x14, 0xC290B3C);
    t27 = t2;
    if (t2 == 0) {
        t4 = FUN_0c07ffbc(((*(int *)(((int)stk + 100))) + 0x106C), 0xC0B3034, 0xA);
        t27 = 0xFFFF0000;
        if (t4 == 0) {
            t7 = FUN_0c031b94(0x1, ((*(int *)(((int)stk + 100))) + 0x106C), 0xF38, ((*(int *)(((int)stk + 100))) + 0x1FA4));
            t27 = 0xFFFF0000;
            if (t7 != 1) {
            } else {
                memcpy(0xC293344, (*(int *)(((int)stk + 100))), 0x1FA8);
                *(unsigned char *)0xC2943DF = 0x1;
                t10 = 0xC293344;
                t12 = 0xC28DD0C;
                for (;;) { t13 = *(int *)t10; t10 = (t10 + 4); if ((unsigned int)((0xC293344 + 8104)) < (unsigned int)t10) break; *(unsigned int *)t12 = t13; t12 = (t12 + 4); }
                t27 = t2;
            }
        }
    }
    return t27;
}

int FUN_0c039282(int a4, int a5, int a6, int a7, int a8, float f4, float f5, float f6, float f7, float f8)
{
    register int t1;
    register float u12;
    register float u13;
    register int t5;

    t1 = a4;
    if (a4 == -20) {
        t1 = (FUN_0c07c8be(0xD05A9));
    } else {
        t5 = a7;
    }
    if ((int)a4 >= 0) {
        if ((int)a4 < (int)a5) {
            u12 = ((float)(a5 - a4) * (f8 - f7));
            u13 = ((u12 * (1.0f + 1.0f)) / (float)a5);
            return FUN_0c038e3a((a6 + (a5 - (a4 * a7))), 0x0, a8, t5, f4, f5, f6, (u13 + f7), (u13 + f7));
        }
        return FUN_0c0391d2((a4 - a5), a6, a8, t5, f4, f5, f6, f7, f8);
    }
    return t1;
}

int FUN_0c067160(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    (((struct o80_uint *)(a4))->v) = 0x3;
    t0 = 0x0;
    if ((int)(*(int *)((((((struct oAC_int *)(a4))->v)) + 0x8))) > (int)0x1) {
        t0 = 0x1;
    }
    t1 = *(int *)0xC1EC740;
    if (t0 != 0) {
        t2 = ((int (*)(int, int, int, int))((*(int *)((((t1 << 2) + 0xC110374) + 0x0)))))(t0, a4, a6, a7);
        t2 = (*(int *)0xC13B368);
        t3 = (((((struct o84_int *)(a4))->v)) << 2);
    } else {
        t2 = 0xC110048;
        t3 = (((((int (*)(int, int, int, int))((*(int *)((((t1 << 2) + 0xC110374) + 0x0)))))(t0, a4, a6, a7)) & 0x1) << 2);
    }
    FUN_0c05f470(a4, (*(int *)((t3 + t2))), 0.0f, 0.0f);
    if (((((struct o84_int *)(a4))->v)) == 0) {
        return FUN_0c06a820(0x1, (*(int *)((a4 + 0x10))), (*(int *)((((((struct oAC_int *)(a4))->v)) + 0x4))));
    }
    return 0x84;
}



int FUN_0c058d4e(int a4, int a5)
{
    int stk[1];
    register int t3;
    register int t4;
    register int t5;
    register int t19;
    register int t28;
    register int t0;
    register int t1;
    register int t2;
    register int t6;
    register int t7;
    register int t8;
    register int t23;
    register int t24;
    register int t26;

    t3 = a4;
    t4 = a5;
    t5 = 0x0;
    for (;;) {
        if ((int)t5 >= (int)0x3) {
            break;
        }
        t7 = t5;
        t7 = (t7 << 2);
        t8 = t5;
        t7 = (t7 << 1);
        t1 = 0xC2B63CC;
        t8 = (t8 << 2);
        t7 = (t7 + t5);
        t2 = t8;
        t7 = (t7 << 2);
        t6 = t8;
        t7 = (t7 << 2);
        t2 = (t2 + 0xC2B6744);
        *(unsigned int *)(((int)stk + 0)) = t2;
        t7 = (t7 << 1);
        t6 = (t6 + 0xC2B6738);
        t7 = (t7 + t1);
        for (;;) {
            t2 = (*(int *)(((int)stk + 0)));
            if ((int)(*(int *)((t2 + 0x0))) <= 0) {
                t23 = t1; t24 = t2; t26 = t3; break;
            }
            t2 = 0xC07C8BE;
            t3 = (*(int *)((t6 + 0x0)));
            t3 = (*(int *)((t3 + 0x0)));
            t0 = (FUN_0c07c8be(t3));
            t4 = t0;
            if (t0 != -1) {
                t3 = t8;
                t3 = (t3 + 0xC2B6738);
                t0 = t8;
                *(unsigned int *)(((*(int *)((t3 + 0x0))) + 0x0)) = 0x0;
                *(unsigned int *)((0xC2B6744 + t0)) = ((*(int *)((0xC2B6744 + t0))) - 1);
                t2 = (*(int *)((t3 + 0x0)));
                t2 = (t2 + 0x4);
                *(unsigned int *)((t3 + 0x0)) = t2;
                t19 = (t2 - t7);
                if ((int)(t2 - t7) < 0) {
                    t19 = ((t2 - t7) + 0x3);
                }
                t1 = 0x48;
                t3 = ((t19 >> 1) >> 1);
                if (((int)t3 >= (int)t1) || (t2 = 0xFFFFFFB8, (int)t3 <= (int)t2)) {
                    *(unsigned int *)((t6 + 0x0)) = t7;
                }
                continue;
            }
            break;
        }
        t0 = t4;
        t1 = t23;
        t2 = t24;
        t3 = t26;
        if (t0 != -1) {
            t5 = (t5 + 0x1);
            continue;
        }
        break;
    }
    t28 = 0xC2B660C;
    for (;;) {
        *(unsigned int *)((t28 + 0x0)) = 0x0;
        t28 = (t28 + 0x4);
        if ((unsigned int)t28 >= (unsigned int)0xC2B672C) {
            break;
        }
    }
    return t0;
}

int nlSearchPalette(int a4, int a5)
{
    register int t1;
    register int t2;
    register int t3;
    register int t5;
    register int t6;
    int t7;
    register int t11;
    register int t18;
    register int t13;
    register int t14;
    register int t32;
    register int t25;
    register int t29;
    register int t0;

    if (a4 == 16) {
        t1 = 0x0;
        t2 = 0x0;
        t3 = 0xFFFFFFFF;
        for (;;) {
            t5 = ((t2 << 2) << 2);
            t6 = 0x0;
            t7 = 0x1;
            for (;;) {
                if (((*(short *)((((t2 << 1) + 0xC2BB42C) + 0x0))) & t7) == 0) {
                    t11 = t1 == 0;
                    t1 = (t1 + 0x1);
                    if (t11) {
                        t3 = t5;
                    }
                    if ((int)t1 < (int)((int)(a5 + 0xF) >> 4)) {
                        t0 = 0x10;
                        t6 = (t6 + 0x1);
                        t7 = (t7 + t7);
                        t5 = (t5 + 0x1);
                        if ((int)t6 >= (int)t0) {
                            break;
                        }
                        continue;
                    }
                    break;
                }
                t1 = 0x0;
                t0 = 0x10;
                t6 = (t6 + 0x1);
                t7 = (t7 + t7);
                t5 = (t5 + 0x1);
                if ((int)t6 >= (int)t0) {
                    break;
                }
            }
            t0 = 0x4;
            t2 = (t2 + 0x1);
            if ((int)t2 >= (int)t0) {
                break;
            }
        }
        t25 = t3;
        t29 = t1;
    } else {
        t18 = 0x0;
        if ((unsigned int)0xC2BB42C < (unsigned int)0xC2BB434) {
            t13 = 0xC2BB42C;
            t14 = 0x0;
            for (;;) {
                if (((*(short *)((t13 + 0x0))) & (((int)0x1 << (int)((int)(a5 + 0xF) >> 4)) - 1)) == 0) {
                    break;
                }
                t13 = (t13 + 0x2);
                t14 = (t14 + 0x10);
                if ((unsigned int)t13 >= (unsigned int)0xC2BB434) {
                    if ((int)0x0 < (int)((int)(a5 + 0xF) >> 4)) {
                        return 0xFFFFFFFF;
                    }
                    return 0xFFFFFFFF;
                }
            }
            t25 = t14;
            t18 = ((int)(a5 + 0xF) >> 4);
        } else {
            t25 = 0xFFFFFFFF;
        }
        t29 = t18;
    }
    t32 = t25;
    if ((int)t29 < (int)((int)(a5 + 0xF) >> 4)) {
        t32 = 0xFFFFFFFF;
    }
    return t32;
}

int nlRenderTextureBegin(int a4)
{
    register int t0;
    int t1;
    register int t2;
    register int t3;

    t2 = (((struct o0_int *)0xC2BF920)->v);
    if ((int)((((struct o8_int *)0xC2BF920)->v)) >= 0) {
        (((struct o8_uint *)0xC2BF920)->v) = 0xFFFFFFFF;
        t3 = (nlSetWindowSize(((((struct oC_float *)0xC2BF920)->v)), ((((struct o10_float *)0xC2BF920)->v)), ((((struct o14_float *)0xC2BF920)->v)), ((((struct o18_float *)0xC2BF920)->v))));
    }
    if (((unsigned int)a4 <= (unsigned int)((((struct o4_int *)0xC2BF920)->v))) && ((t0 = *(int *)(((t2 + ((a4 << 2) << 2)) + 0x0)), (int)t0 >= 0) && (t1 = *(int *)(((t2 + ((a4 << 2) << 2)) + 0x4)), (int)t1 >= 0))) {
        (((struct o8_uint *)0xC2BF920)->v) = a4;
        (((struct oC_float *)0xC2BF920)->v) = ((((struct o8_float *)0xC2BFBF8)->v));
        (((struct o10_float *)0xC2BF920)->v) = ((((struct oC_float *)0xC2BFBF8)->v));
        (((struct o14_float *)0xC2BF920)->v) = ((((struct o0_float *)0xC2BFBF8)->v));
        (((struct o18_float *)0xC2BF920)->v) = ((((struct o4_float *)0xC2BFBF8)->v));
        nlSetWindowSize(0.0f, 0.0f, (float)(*(short *)(((t2 + ((a4 << 2) << 2)) + 0xC))), (float)(*(short *)(((t2 + ((a4 << 2) << 2)) + 0xE))));
        t0 = *(signed char *)0xC2BF93C;
        nlMatrixMode(0x3);
        nl_set_cnv_proj_pers();
        return nlMatrixMode(t0);
    }
    return t3;
}

int FUN_0c0659a2(int a4, int a5)
{

    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    v0_2 = a4;
    v0_0 = a5;
    if ((((*(signed char *)((v0_0 + 0xFF))) & 32) == 0)) goto L_C0659B6;
    v0_1 = (0x80);
    v0_2 = (0x2);
    L_C065A44:;
    *(unsigned int *)((v0_0 + v0_1)) = v0_2;
    L_C065A58:;
    return v0_1;
    L_C0659B6:;
    if ((((*(signed char *)((v0_0 + 0xFF))) & 4) == 0)) goto L_C065A24;
    v0_1 = (0xAC);
    v0_3 = (0x1);
    if (((int)(*(int *)((((((struct oAC_int *)(v0_0))->v)) + 0x8))) <= (int)0x1)) goto L_C0659D0;
    v0_5 = (v0_3);
    L_C0659D2:;
    v0_4 = (0xF);
    if ((v0_5 == 0)) goto L_C065A1E;
    v0_5 = (v0_3);
    v0_0 = (0x0);
    v0_3 = (0x0);
    L_C0659F8:;
    if (!(((int)v0_0 < (int)(*(int *)((v0_2 + 0x4)))))) goto L_C0659FE;
    v0_6 = (((struct o80_int *)(((v0_0 << 8) + (*(int *)((v0_2 + 0x0))))))->v);
    v0_1 = (v0_6);
    if ((v0_6 == 1)) goto L_C0659F6;
    v0_5 = (v0_3);
    goto L_C0659FE;
    L_C0659FE:;
    if ((v0_5 == 0)) goto L_C065A58;
    v0_0 = (v0_3);
    L_C065A14:;
    if (((int)v0_0 < (int)(*(int *)((v0_2 + 0x4))))) goto L_C065A06;
    goto L_C065A58;
    L_C065A06:;
    (((struct o80_uint *)(((v0_0 << 8) + (*(int *)((v0_2 + 0x0))))))->v) = v0_4;
    v0_1 = (0x80);
    v0_0 = ((v0_0 + 0x1));
    goto L_C065A14;
    L_C0659F6:;
    v0_0 = ((v0_0 + 0x1));
    goto L_C0659F8;
    L_C065A1E:;
    (((struct o80_uint *)(v0_0))->v) = v0_4;
    v0_1 = (0x80);
    goto L_C065A58;
    L_C0659D0:;
    v0_5 = (0x0);
    goto L_C0659D2;
    L_C065A24:;
    if ((((*(signed char *)((v0_0 + 0xFF))) & 8) == 0)) goto L_C065A36;
    v0_1 = (0x80);
    v0_2 = (0x4);
    goto L_C065A44;
    L_C065A36:;
    if ((((*(signed char *)((v0_0 + 0xFF))) & 16) == 0)) goto L_C065A48;
    v0_1 = (0x80);
    v0_2 = (0x7);
    goto L_C065A44;
    L_C065A48:;
    v0_2 = *(int *)0xC2B9C9C;
    v0_1 = (v0_2);
    if ((v0_2 != 2)) goto L_C065A58;
    (((struct o80_uint *)(v0_0))->v) = 0xB;
    v0_1 = (0x80);
    goto L_C065A58;
}

int FUN_0c078cb0(int a4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;

    u0 = (((struct o4_float *)(a4))->v);
    u1 = (((struct o8_float *)(a4))->v);
    u2 = (((struct o4_float *)0xC2C3D9C)->v);
    u3 = (((struct o8_float *)0xC2C3D9C)->v);
    u4 = *(float *)((a4 + 0x0));
    u5 = (((struct oC_float *)0xC2C3D9C)->v);
    t0 = 0x2;
    if (u4 > (((((struct o0_float *)0xC2C3D9C)->v)) * u1)) {
    } else {
        t1 = 0x0;
        if ((u3 * u1) > u4) {
            t1 = 0x1;
        }
        t0 = t1;
    }
    t1 = (t0 | 0x8);
    if (u0 > (u2 * u1)) {
    } else {
        t1 = t0;
        if ((u5 * u1) > u0) {
            t1 = (t0 | 0x4);
        }
    }
    return t1;
}

int kmfSetTimeOutCount(int a4, int a5)
{
    int t2;

    (((struct o4_uint *)0xC300AF4)->v) = a4;
    (((struct o0_uint *)0xC300AF4)->v) = a5;
    if (a5 == 0) {
        *(unsigned int *)0xC3008D4 = ((*(int *)0xC3008D4) | 0x10);
    } else {
        t2 = *(int *)0xA05F689C;
        if ((t2 != 4) && ((t2 != 5) && ((t2 != 6) && (t2 != 8)))) {
            *(unsigned int *)0xC3008D4 = ((*(int *)0xC3008D4) & 0xFFFFFFEF);
        } else {
            *(unsigned int *)0xC3008D4 = ((*(int *)0xC3008D4) | 0x10);
        }
    }
    return 0x0;
}
