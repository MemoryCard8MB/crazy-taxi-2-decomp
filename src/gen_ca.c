/* Straight-line functions with calls and guards (batch gen_ca): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o2_short { char p[0x2]; short v; };
struct o2_ushort { char p[0x2]; unsigned short v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_int { char p[0x28]; int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o30_int { char p[0x30]; int v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o38_int { char p[0x38]; int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_short { char p[0x4]; short v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o6_short { char p[0x6]; short v; };
struct o6_ushort { char p[0x6]; unsigned short v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o80_int { char p[0x80]; int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oD4_int { char p[0xD4]; int v; };
int FUN_0c018b22(int, int);
int FUN_0c01ec7a(int);
int FUN_0c01eeda(int);
int FUN_0c01fc54(int, int);
int FUN_0c01fcd0(void);
int FUN_0c01fd5c(void);
int FUN_0c01fd96(int);
int FUN_0c02024c(void);
int FUN_0c020368(int);
extern float FUN_0c02806c();
int FUN_0c029b12(int, float);
int FUN_0c038b04(int, int, float, float, float);
int FUN_0c03f154(int);
int FUN_0c05063e(void);
int FUN_0c058f64(int, int, int, int);
extern int FUN_0c069e54();
int FUN_0c06e700(int, int, float);
int FUN_0c06e990(int);
int FUN_0c06f550(int, int, int);
int FUN_0c073c40(int, int, float);
float FUN_0c073e10(int);
int FUN_0c07c8be(int);
int FUN_0c07ff00(void);
int FUN_0c08d87e(int, int);
int FUN_0c08eee0(int);
int FUN_0c08f204(int, int, int);
int FUN_0c08f5d8(int);
int FUN_0c08f8c0(int);
int FUN_0c08f9c4(int, int);
int FUN_0c08faa8(int, int);
int FUN_0c08fd60(int, int);
int FUN_0c08fe18(int);
int FUN_0c090e4c(int, int, int, int);
int FUN_0c16880c(void);
int Voice_ShutUp(int);
extern int _builtin_get_imask(void);
extern void _builtin_prefetch(void *);
extern void _builtin_set_imask(int);
int buIsFormat(int);
int camSetTarget(int, int);
int gdc_FileLoad(int, int, int);
int kmSetDisplayMode(int, int, int, int);
int kmSetPALEXTCallback(int);
int kmSetSystemConfiguration(int);
int kmStopDisplayFrameBuffer(void);
int kmiBGPlaneCountWords(int);
int kmiBGPlanePutColor(int, int, int);
int kmiBGPlanePutWord(int, int, int);
int kmiBGPlaneSetPCW(int, int, int);
int kmiFatalErrorEntry(int, int, int, int);
int nlAddVector3op(int, int, int);
int nlCharacter(int, int, int, int);
float nlLength(int, int);
int nlLoadDummyTexture(void);
int nlObjPutUseViewMatrix(int);
int nlSetWindowSize(float, float, float, float);
int nlSubVector3op(int, int, int);
int pfSize(float, float);
int syG2AicaFifoWaitEmpty(void);
int syG2DmaResumeAll(void);
int syG2DmaSuspendAll(void);
int vmsfs_c_progress(int, int, int, int);
int vmsfs_lockbank(int, int);
int vmsfs_mediainfo_retry(int, int);
int vmsfs_mount2(int);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
int adxamp_extract(int a4, int a5, int a6, int a7);
int FUN_0c0705c0(int a4, int a5);
int kmiProcessVertex_02(int a4);
int FUN_0c038f76(int a4, int a5, int a6, float f4, float f5, float f6, float f7, float f8);
int vmsfs_findnext(int a4, int a5);
int kmiErrorRecover(int a4, int a5, int a6, int a7);
int FUN_0c01ff48(int a4, int a5);
int syG2Read(int a4, int a5, int a6, int a7, int a8, int a9);
int FUN_0c06d8e6(float f4);
int kmiProcessVertex_04(int a4);
int FUN_0c055990(int a4, int a5, int a6, int a7);
int FUN_0c08d964(int a4, int a5);
int FUN_0c06ad62(int a4, int a5, int a6);
int FUN_0c071730(int a4, int a5, int a6);
int vmsfs_mount(int a4);
int vmsfs_fgettime(int a4, int a5, int a6);
int kmiGetPackOBPParam(int a4, int a5, int a6, int a7, int a8, int a9);
int ADX_DecodeInfoExLoop(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12);
int FUN_0c01f214(int a4, int a5, float f4);
int FUN_0c01ddd6(float f4);

int adxamp_extract(int a4, int a5, int a6, int a7)
{
    int stk[8];
    register int t0;
    register float u1;
    register int t3;
    register int t8;
    register int t9;
    register int t13;
    register int t15;
    register int t17;
    register int t18;
    register int t28;
    register int t30;
    register int t35;
    register int t36;
    register int t44;
    register int t45;
    register int t46;
    register int t47;
    register int t61;
    register int t67;
    register int t70;
    register int t16;

    t0 = *(int *)((a4 + 0x20));
    u1 = (((struct o24_float *)(a4))->v);
    for (;;) {
        if ((int)0x0 < (int)(*(int *)((a4 + 0x1C)))) {
            t3 = *(int *)((((a4 + 0x4) + 0x0) + 0x0));
            t8 = (int)((int)((unsigned int)(((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t3 + 0x0))) + 0x24)))))(t3, 0x1, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24))) >> 1) / (int)(int)((float)t0 * u1));
            t9 = *(int *)((((a4 + 0xC) + 0x0) + 0x0));
            t15 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t9 + 0x0))) + 0x24)))))(t9, 0x0, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
            t13 = ((unsigned int)((unsigned int)t15 >> 2) >> 2);
            if ((int)t8 < (int)((unsigned int)((unsigned int)t15 >> 2) >> 2)) {
                t13 = t8;
            }
            *(unsigned int *)(((int)stk + 12)) = t13;
            t17 = 0x0;
            t18 = 0x0;
            t17 = 0x0;
            for (;;) {
                if ((int)t18 >= (int)(*(int *)(((int)stk + 12)))) {
                    t17 = (t17 + 0x1);
                    if ((int)t17 < (int)(*(int *)((a4 + 0x1C)))) {
                        t18 = a4;
                        t18 = (t18 + 0x4);
                        t17 = (t17 << 2);
                        t18 = (t18 + t17);
                        t18 = (*(int *)((t18 + 0x0)));
                        t16 = (*(int *)((t18 + 0x0)));
                        t15 = (((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)((t16 + 0x24)))))(t18, 0x1, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
                        t28 = ((unsigned int)t15 >> 1);
                        t15 = (int)((float)t0 * u1);
                        t15 = ((int)((int)t28 / (int)t15));
                        t18 = t15;
                        t30 = *(int *)((((a4 + 0xC) + t17) + 0x0));
                        t16 = (*(int *)((t30 + 0x0)));
                        t15 = (((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)((t16 + 0x24)))))(t30, 0x0, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
                        if ((int)t18 < (int)((unsigned int)((unsigned int)t15 >> 2) >> 2)) {
                            *(unsigned int *)(((int)stk + 12)) = t18;
                            t18 = 0x0;
                            continue;
                        }
                        *(unsigned int *)(((int)stk + 12)) = ((unsigned int)((unsigned int)t15 >> 2) >> 2);
                        t18 = 0x0;
                        continue;
                    }
                    return t15;
                }
                *(unsigned int *)(((int)stk + 4)) = 0x0;
                t35 = 0x0;
                for (;;) {
                    if ((int)t35 >= (int)(int)((float)t0 * u1)) {
                        break;
                    }
                    t16 = a4;
                    t16 = (t16 + 0x4);
                    t16 = (t16 + t17);
                    t36 = *(int *)((t16 + 0x0));
                    *(unsigned int *)(((int)stk + 8)) = t36;
                    t16 = (*(int *)((t36 + 0x0)));
                    t15 = (((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)((t16 + 0x18)))))(t36, 0x1, (((int)((float)t0 * u1) - t35) << 1), (((int)stk + 0) + 0x18), *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
                    t16 = (*(int *)(((int)stk + 28)));
                    t16 = ((unsigned int)t16 >> 1);
                    *(unsigned int *)(((int)stk + 0)) = t16;
                    t45 = *(int *)(((int)stk + 24));
                    if ((int)t16 > 0) {
                        t44 = 0x0;
                        for (;;) {
                            t46 = *(short *)((t45 + 0x0));
                            t47 = t46;
                            if ((int)t46 < 0) {
                                t47 = (-t46);
                            }
                            t45 = (t45 + 0x2);
                            if ((int)t47 > (int)(*(int *)(((int)stk + 4)))) {
                                *(unsigned int *)(((int)stk + 4)) = t47;
                            }
                            t16 = (*(int *)(((int)stk + 0)));
                            t44 = (t44 + 0x1);
                            if ((int)t44 >= (int)t16) {
                                break;
                            }
                        }
                    }
                    t16 = (*(int *)((((a4 + 0x4) + t17) + 0x0)));
                    *(unsigned int *)(((int)stk + 8)) = t16;
                    t15 = (((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t16 + 0x0))) + 0x20)))))(t16, 0x0, (((int)stk + 0) + 0x18), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
                    t16 = (*(int *)(((int)stk + 0)));
                    t35 = (t35 + t16);
                }
                t61 = *(int *)((((a4 + 0xC) + t17) + 0x0));
                t16 = (*(int *)((t61 + 0x0)));
                t15 = (((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)((t16 + 0x18)))))(t61, 0x0, 0x10, (((int)stk + 0) + 0x10), *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
                t16 = (*(int *)(((int)stk + 20)));
                if (t16 == 0) {
                    break;
                }
                t16 = (*(int *)(((int)stk + 4)));
                t67 = *(int *)(((int)stk + 16));
                *(unsigned int *)((t67 + 0x0)) = t16;
                t16 = (*(int *)((((a4 + 0x14) + t17) + 0x0)));
                *(unsigned int *)((t67 + 0x4)) = t16;
                *(unsigned int *)((t67 + 0x8)) = (*(int *)((a4 + 0x20)));
                *(unsigned int *)((t67 + 0xC)) = (int)((float)t0 * u1);
                t70 = *(int *)((((a4 + 0xC) + t17) + 0x0));
                t16 = (*(int *)((t70 + 0x0)));
                t15 = (((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)((t16 + 0x20)))))(t70, 0x1, (((int)stk + 0) + 0x10), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
                t16 = a4;
                t16 = (t16 + 0x14);
                t16 = (t16 + t17);
                t18 = (t18 + 0x1);
                *(unsigned int *)((t16 + 0x0)) = ((*(int *)((t16 + 0x0))) + (int)((float)t0 * u1));
                t16 = (*(int *)((a4 + 0x2C)));
                t16 = (t16 + 0x1);
                *(unsigned int *)((a4 + 0x2C)) = t16;
            }
            break;
        }
        return 0x24;
    }
    for (;;) {
    }
}

int FUN_0c0705c0(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    (((struct o0_uint *)0xC2BB500)->v) = 0x0;
    if (a4 == 0) {
        (((struct o0_uint *)0xC2BB500)->v) = 0x1;
    }
    (((struct o4_uint *)0xC2BB500)->v) = 0x0;
    if ((a4 == 25) || ((a4 == 24) || ((a4 == 26) || (a4 == 27)))) {
        (((struct o4_uint *)0xC2BB500)->v) = 0x1;
    }
    kmStopDisplayFrameBuffer();
    (((struct o4_ushort *)0xC2BF8F0)->v) = 0x0;
    (((struct o6_ushort *)0xC2BF8F0)->v) = 0x0;
    if ((0x80 & a5) != 0) {
        (((struct o4_ushort *)0xC2BF8F0)->v) = 0x1;
    }
    if ((0x8000 & a5) != 0) {
        (((struct o6_ushort *)0xC2BF8F0)->v) = 0x1;
    }
    t0 = *(int *)((((a5 & 0xF) << 2) + 0xC113A08));
    if (((((struct o4_int *)0xC2BB500)->v)) == 1) {
        kmSetPALEXTCallback(0xC06F1E0);
    }
    kmSetDisplayMode((*(int *)((((((a4 << 1) + a4) << 2) + 0xC1138B8) + 0x4))), t0, ((((struct o4_short *)0xC2BF8F0)->v)), ((((struct o6_short *)0xC2BF8F0)->v)));
    (((struct o0_ushort *)0xC2BF8F0)->v) = (*(short *)((((((a4 << 1) + a4) << 2) + 0xC1138B8) + 0x8)));
    (((struct o2_ushort *)0xC2BF8F0)->v) = (*(short *)((((((a4 << 1) + a4) << 2) + 0xC1138B8) + 0xA)));
    t0 = kmSetSystemConfiguration(0xC2BB434);
    nlLoadDummyTexture();
    (((struct o28_uint *)0xC2BB500)->v) = 0x1;
    FUN_0c06f550(((((struct o0_int *)0xC14734C)->v)), ((((struct o4_int *)0xC14734C)->v)), ((((struct o8_int *)0xC14734C)->v)));
    t1 = (((struct o2_short *)0xC2BF8F0)->v);
    t2 = (((struct o0_short *)0xC2BF8F0)->v);
    if (0x0 != 0) {
        t3 = (short)t1;
        if (((((struct o6_short *)0xC2BF8F0)->v)) == 1) {
            t3 = ((short)t1 + (short)t1);
            if ((int)((short)t1 + (short)t1) > (int)0x1E0) {
                t3 = 0x1E0;
            }
        }
        nlSetWindowSize(0.0f, 0.0f, (float)t2, (float)t3);
    } else {
        nlSetWindowSize(0.0f, 0.0f, (float)t2, (float)(short)t1);
    }
    return t0;
}

int kmiProcessVertex_02(int a4)
{
    int stk[4];
    register int t3;
    register int t5;
    register float u14;
    register float u15;
    register float u23;
    register float u31;
    register int t32;

    *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x0)) = (*(int *)((a4 + 0x0)));
    *(unsigned int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0)) = (*(int *)((a4 + 0x4)));
    *(unsigned int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0)) = (*(int *)((a4 + 0x8)));
    t3 = (((struct o4_int *)0xC300A6C)->v);
    *(unsigned int *)(((int)stk + 0)) = ((((struct o8_int *)0xC300A6C)->v));
    t5 = (((struct oC_int *)0xC300A6C)->v);
    (((struct o0_uint *)0xC300974)->v) = t3;
    (((struct o4_uint *)0xC300974)->v) = (*(int *)(((int)stk + 0)));
    (((struct o8_uint *)0xC300974)->v) = t5;
    (((struct oC_uint *)0xC300974)->v) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0x4)));
    (((struct o10_uint *)0xC300974)->v) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0x8)));
    (((struct o14_uint *)0xC300974)->v) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0xC)));
    u14 = *(float *)0xC150E50;
    u15 = (((struct o18_float *)((*(int *)(((((int)stk + 0) + 0x4) + 0x0)))))->v);
    (((struct o18_uint *)0xC300974)->v) = ((((((int)(u15 * u14) << 16) << 8) | ((int)(u15 * u14) << 16)) | ((int)(u15 * u14) << 8)) | (int)(u15 * u14));
    (((struct o1C_uint *)0xC300974)->v) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0))) + 0x4)));
    (((struct o20_uint *)0xC300974)->v) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0))) + 0x8)));
    (((struct o24_uint *)0xC300974)->v) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0))) + 0xC)));
    u23 = (((struct o18_float *)((*(int *)((((((int)stk + 0) + 0x4) + 0x4) + 0x0)))))->v);
    (((struct o28_uint *)0xC300974)->v) = ((((((int)(u23 * u14) << 16) << 8) | ((int)(u23 * u14) << 16)) | ((int)(u23 * u14) << 8)) | (int)(u23 * u14));
    (((struct o2C_uint *)0xC300974)->v) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0))) + 0x4)));
    (((struct o30_uint *)0xC300974)->v) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0))) + 0x8)));
    (((struct o34_uint *)0xC300974)->v) = (*(int *)(((*(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0))) + 0xC)));
    u31 = (((struct o18_float *)((*(int *)((((((int)stk + 0) + 0x4) + 0x8) + 0x0)))))->v);
    (((struct o38_uint *)0xC300974)->v) = ((((((int)(u31 * u14) << 16) << 8) | ((int)(u31 * u14) << 16)) | ((int)(u31 * u14) << 8)) | (int)(u31 * u14));
    (((struct o0_uint *)0xC300A6C)->v) = 0x3C;
    t32 = kmiBGPlaneCountWords(t3);
    kmiBGPlaneSetPCW(t32, 0x0, 0x0);
    (((struct o14_uint *)0xC300A6C)->v) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0xC)));
    return 0x0;
}

int FUN_0c038f76(int a4, int a5, int a6, float f4, float f5, float f6, float f7, float f8)
{
    int stk[9];
    register int t1;
    register int t9;
    register int t10;
    register int t2;
    register int t4;
    register int t5;
    register int t7;
    register float u14;
    int t15;
    register float u16;
    register float u22;
    register float u19;
    register float u28;
    register float u26;
    int t34;
    register float u37;
    register int t50;

    *(unsigned int *)(((int)stk + 0)) = a5;
    if ((int)a4 < 0) {
    } else {
        t1 = (int)((int)a4 / (int)(*(int *)(((int)stk + 0))));
        t9 = a6;
        t10 = 0x0;
        if ((int)t1 > 0) {
            t2 = t1;
            t4 = a6;
            t5 = 0x0;
            for (;;) {
                if ((*(signed char *)((t4 + 0x0))) != 0) {
                    t2 = t5;
                    t5 = (t5 + 0x1);
                    t7 = *(signed char *)((t4 + 0x0));
                    t4 = (t4 + 0x1);
                    *(unsigned char *)(((((int)stk + 0) + 0x4) + t2)) = (t7);
                    if ((int)t5 >= (int)t1) {
                        break;
                    }
                    continue;
                }
                break;
            }
            t9 = t4;
            t10 = t5;
        }
        *(unsigned char *)(((((int)stk + 0) + 0x4) + t10)) = 0x0;
        u14 = ((((float (*)(int, float, float, float, float, float))(FUN_0c02806c))((((int)stk + 0) + 0x4), f4, f5, f6, f7, f8)) * f6);
        t15 = *(int *)0xC2A5894;
        u16 = (u14 * 0.5f);
        u22 = (f6 * 0.899999976f);
        if ((t15 != 0) && (t15 != 3)) {
            u19 = (f6 * 0.949999988f);
            if ((t15 != 1) && (t15 != 4)) {
                u19 = f6;
            }
            u22 = u19;
        }
        FUN_0c038b04(0x203, (((int)stk + 0) + 0x4), (f4 + u16), f5, u22);
        t50 = pfSize(1.0f, 1.0f);
        u28 = f4;
        if (t10 != 0) {
            u26 = f4;
            u26 = u26 + f6 * (((float (*)(int))(FUN_0c02806c))((((int)stk + 0) + 0x4)));
            u28 = u26;
        } else {
        }
        if ((*(signed char *)((t9 + 0x0))) != 0) {
            *(unsigned char *)(((((int)stk + 0) + 0x4) + 0x0)) = (*(signed char *)((t9 + 0x0)));
            *(unsigned char *)(((((int)stk + 0) + 0x4) + 0x1)) = 0x0;
            t34 = (int)((int)a4 % (int)(*(int *)(((int)stk + 0))));
            if (t34 != 0) {
                if (t34 != 3) {
                    u37 = (((f7 - f6) / (1.0f + 1.0f)) + f6);
                    if ((t34 != 1) && (t34 != 4)) {
                        u37 = f6;
                    }
                    t50 = (FUN_0c038b04(0x203, (((int)stk + 0) + 0x4), u28, f5, u37));
                } else {
                    t50 = (FUN_0c038b04(0x203, (((int)stk + 0) + 0x4), u28, f5, f7));
                }
            } else {
                *(unsigned int *)0xC2A5894 = 0x0;
                FUN_0c07c8be(0x605A9);
                t50 = (FUN_0c038b04(0x203, (((int)stk + 0) + 0x4), u28, f5, f7));
            }
        }
    }
    return t50;
}

int vmsfs_findnext(int a4, int a5)
{
    int stk[8];
    register int t4;
    register int t8;
    register int t12;
    register int t24;
    register int t25;
    register int t31;
    register int t35;
    register int t39;
    register int t44;
    register int t45;
    register int t51;
    int t40;

    *(unsigned int *)(((int)stk + 28)) = a4;
    *(unsigned int *)(((int)stk + 24)) = a5;
    *(unsigned int *)(((int)stk + 0)) = (((*(int *)(((int)stk + 28))) * 0x154) + 0xC2C8D2C);
    if ((*(signed char *)(((((*(int *)(((int)stk + 28))) * 0x154) + 0xC2C8D2C) + 0x2))) == 0) {
        return 0xFFFFFF01;
    }
    t4 = vmsio_isready((*(int *)(((int)stk + 28))));
    if (t4 == 0) {
        vmsfs_unmount((*(int *)(((int)stk + 28))));
        return 0xFFFFFF01;
    }
    t8 = vmsio_ismount((*(int *)(((int)stk + 28))));
    if (t8 == 0) {
        return 0xFFFFFF01;
    }
    if ((*(signed char *)((((*(int *)(((int)stk + 28))) * 0x154) + 0xC2C8D34))) == 0) {
        return 0xFFFFFF01;
    }
    t12 = buIsFormat((*(int *)(((int)stk + 28))));
    if ((int)t12 < 0) {
        return 0xFFFFFF03;
    }
    *(unsigned int *)(((int)stk + 4)) = (FUN_0c08f9c4((*(int *)(((int)stk + 28))), (*(int *)(((*(int *)(((int)stk + 0))) + 0x18)))));
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((*(int *)(((int)stk + 0))) + 0x18)));
    for (;;) {
        t24 = *(int *)(((int)stk + 20));
        if ((int)t24 >= (int)(*(int *)(((*(int *)(((*(int *)(((int)stk + 0))) + 0x1C))) + 0x30)))) {
            t25 = *(int *)(((int)stk + 12));
            if (t25 == 0) {
                return 0xFFFFFF05;
            }
            *(unsigned int *)(((int)stk + 16)) = 0x0;
            for (;;) {
                if ((int)(*(int *)(((int)stk + 16))) >= (int)0xC) {
                    break;
                }
                t24 = (*(int *)(((int)stk + 16)));
                t31 = ((*(int *)(((int)stk + 24))) + t24);
                t24 = (*(int *)(((int)stk + 4)));
                *(unsigned char *)((t31 + 0x0)) = (*(signed char *)((((*(int *)(((int)stk + 16))) + 0x4) + t24)));
                t25 = (*(int *)(((int)stk + 16)));
                t25 = (t25 + 0x1);
                *(unsigned int *)(((int)stk + 16)) = t25;
            }
            *(unsigned char *)(((*(int *)(((int)stk + 24))) + 0xC)) = 0x0;
            return 0x0;
        }
        t35 = *(int *)(((int)stk + 0));
        *(unsigned int *)((t35 + 0x18)) = ((*(int *)((t35 + 0x18))) + 0x1);
        *(unsigned char *)(((int)stk + 11)) = (*(signed char *)(((*(int *)(((int)stk + 4))) + 0x0)));
        t39 = *(signed char *)(((int)stk + 11));
        if (((unsigned char)t39 != 51) && (t40 = *(signed char *)(((int)stk + 11)), (unsigned char)t40 != 0xCC)) {
            *(unsigned int *)(((int)stk + 20)) = ((*(int *)(((int)stk + 20))) + 0x1);
            *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x20);
            continue;
        }
        break;
    }
    *(unsigned int *)(((int)stk + 12)) = 0x1;
    t45 = *(int *)(((int)stk + 12));
    if (t45 == 0) {
        return 0xFFFFFF05;
    }
    *(unsigned int *)(((int)stk + 16)) = 0x0;
    t44 = (unsigned char)t39;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 16))) >= (int)0xC) {
            break;
        }
        t44 = (*(int *)(((int)stk + 16)));
        t51 = ((*(int *)(((int)stk + 24))) + t44);
        t44 = (*(int *)(((int)stk + 4)));
        *(unsigned char *)((t51 + 0x0)) = (*(signed char *)((((*(int *)(((int)stk + 16))) + 0x4) + t44)));
        t45 = (*(int *)(((int)stk + 16)));
        t45 = (t45 + 0x1);
        *(unsigned int *)(((int)stk + 16)) = t45;
    }
    *(unsigned char *)(((*(int *)(((int)stk + 24))) + 0xC)) = 0x0;
    return 0x0;
}

int kmiErrorRecover(int a4, int a5, int a6, int a7)
{
    int stk[1];
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t32;
    register int t43;
    register int t44;
    register int t45;
    register int t42;
    register int t60;
    register int t63;

    if (a4 != 0) {
        if (a4 == 1) {
            *(unsigned int *)(((int)stk + 0)) = 0x0;
            t0 = 0x0;
            t1 = 0x0;
            t2 = 0x0;
            for (;;) {
                t3 = *(int *)(((int)stk + 0));
                if ((unsigned int)((*(int *)(((((t3 << 2) << 2) << 1) + 0xC300D4C))) - 2048) > (unsigned int)((*(int *)(((((t3 << 2) << 2) << 1) + 0xC300D54))) + 0x140)) {
                    if ((unsigned int)(*(int *)(((0xC306E10 + t0) + 0x0))) < (unsigned int)((*(int *)((t1 + 0xC300D4C))) - 2048)) {
                        *(unsigned int *)((t2 + 0xC300D4C)) = ((*(int *)((t2 + 0xC300D4C))) - 0x800);
                        *(unsigned int *)(((0xC300D58 + t2) + 0x0)) = ((*(int *)((t2 + 0xC300D4C))) - 192);
                    }
                    (((struct o0_uint *)0xC306DFC)->v) = 0x0;
                } else {
                    if ((unsigned int)((((struct o0_int *)0xC306DFC)->v)) > (unsigned int)0xA) {
                        kmiFatalErrorEntry(0x3, a5, a6, a7);
                    }
                }
                t32 = *(int *)(((int)stk + 0));
                t1 = (t1 + 0x20);
                *(unsigned int *)(((int)stk + 0)) = (t32 + 0x1);
                t2 = (t2 + 0x20);
                t0 = (t0 + 0x4);
                if ((int)(t32 + 0x1) >= (int)0x2) {
                    break;
                }
            }
        }
    } else {
        t43 = a4;
        t44 = 0x0;
        t45 = 0x0;
        for (;;) {
            if ((unsigned int)((*(int *)((t45 + 0xC300D58))) + 0x2000) < (unsigned int)((*(int *)((t45 + 0xC300D48))) - 192)) {
                *(unsigned int *)((t44 + 0xC300D58)) = ((*(int *)((t44 + 0xC300D58))) + 0x2000);
                t42 = (*(int *)((t44 + 0xC300D58)));
                t42 = (t42 + 0xC0);
                *(unsigned int *)((t44 + 0xC300D4C)) = t42;
                (((struct o4_uint *)0xC306DFC)->v) = 0x0;
                t60 = t42;
                t63 = t43;
            } else {
                if ((unsigned int)((((struct o4_int *)0xC306DFC)->v)) > (unsigned int)0x0) {
                    t43 = 0x3;
                    kmiFatalErrorEntry(t43, a5, a6, a7);
                } else {
                    t60 = t42;
                    t63 = t43;
                }
            }
            t42 = t60;
            t45 = (t45 + 0x20);
            t43 = t63;
            t44 = (t44 + 0x20);
            if ((unsigned int)t45 >= (unsigned int)0x40) {
                break;
            }
        }
    }
    return 0x0;
}

int FUN_0c01ff48(int a4, int a5)
{
    register int t6;

    if (a5 != -1) {
        FUN_0c02024c();
    }
    FUN_0c06e990(0x9C4);
    t6 = *(int *)0xC175C84;
    switch (a4) {
    case 0:
        if (t6 == 1) {
            gdc_FileLoad(0xCB60000, 0xC09AEFC, 0x0);
        } else {
            gdc_FileLoad(0xCB60000, 0xC09AF08, 0x0);
        }
        gdc_FileLoad(0xC5C0000, 0xC09AF14, 0x0);
        if (a5 != -1) {
            FUN_0c01fd5c();
        }
        FUN_0c01fd96(a4);
        FUN_0c01fcd0();
        FUN_0c01fc54(0xC146FF4, ((((struct o0_int *)0xC112BEC)->v)));
        gdc_FileLoad(0xC328000, 0xC09AF20, 0x0);
        break;
    case 1:
        gdc_FileLoad(0xCB60000, 0xC09AF2C, 0x0);
        gdc_FileLoad(0xC5C0000, 0xC09AF38, 0x0);
        if (a5 != -1) {
            FUN_0c01fd5c();
        }
        FUN_0c01fd96(a4);
        FUN_0c01fcd0();
        FUN_0c01fc54(0xC14707C, ((((struct o4_int *)0xC112BEC)->v)));
        gdc_FileLoad(0xC328000, 0xC09AF44, 0x0);
        break;
    case 2:
        gdc_FileLoad(0xCB60000, 0xC09AF50, 0x0);
        gdc_FileLoad(0xC5C0000, 0xC09AF5C, 0x0);
        if (a5 != -1) {
            FUN_0c01fd5c();
        }
        FUN_0c01fd96(a4);
        FUN_0c01fcd0();
        FUN_0c01fc54(0xC1472FC, ((((struct o8_int *)0xC112BEC)->v)));
        gdc_FileLoad(0xC328000, 0xC09AF68, 0x0);
        break;
    }
    FUN_0c06e990(0x5DC);
    return FUN_0c020368(a4);
}

int syG2Read(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int stk[2];
    register int t9;
    register int t15;
    register int t23;
    register int t28;
    register int t29;
    register int t30;
    register int t31;
    register int t44;
    register int t45;
    register int t46;
    register int t47;
    register int t58;
    register int t59;
    register int t60;
    register int t61;

    *(unsigned int *)(((int)stk + 0)) = a6;
    if (((((struct oD4_int *)((*(int *)0xC1743EC)))->v)) == 1) {
        *(unsigned int *)(((int)stk + 4)) = (_builtin_get_imask());
        _builtin_set_imask(0xF);
    }
    t9 = 0x0;
    if (a8 != 0) {
        t9 = 0x1;
        if (a8 != 1) {
            if (a8 != 2) {
            } else {
                t9 = 0xFFFFFFFF;
            }
        }
    }
    t15 = 0x0;
    if (a9 != 0) {
        t15 = 0x1;
        if (a9 != 1) {
            if (a9 != 2) {
            } else {
                t15 = 0xFFFFFFFF;
            }
        }
    }
    syG2DmaSuspendAll();
    FUN_0c16880c();
    if (((unsigned int)(0x1FFFFFFF & a4) >= (unsigned int)0x700000) && ((unsigned int)(0x1FFFFFFF & a4) <= (unsigned int)0x1000000)) {
        syG2AicaFifoWaitEmpty();
    }
    t23 = *(int *)(((int)stk + 0));
    if (t23 != 1) {
        if (t23 != 2) {
            if (t23 == 4) {
                if ((int)a7 > 0) {
                    t28 = 0x0;
                    t29 = a5;
                    t30 = a4;
                    for (;;) {
                        t31 = *(int *)((t30 + 0x0));
                        t28 = (t28 + 0x1);
                        t30 = (t30 + (t9 << 2));
                        *(unsigned int *)((t29 + 0x0)) = t31;
                        t29 = (t29 + (t15 << 2));
                        if ((int)t28 >= (int)a7) {
                            break;
                        }
                    }
                }
            }
        } else {
            if ((int)a7 > 0) {
                t44 = 0x0;
                t45 = a4;
                t46 = a5;
                for (;;) {
                    t47 = *(short *)((t45 + 0x0));
                    t44 = (t44 + 0x1);
                    t45 = (t45 + (t9 << 1));
                    *(unsigned short *)((t46 + 0x0)) = t47;
                    t46 = (t46 + (t15 << 1));
                    if ((int)t44 >= (int)a7) {
                        break;
                    }
                }
            }
        }
    } else {
        if ((int)a7 > 0) {
            t58 = 0x0;
            t59 = a4;
            t60 = a5;
            for (;;) {
                t61 = *(signed char *)((t59 + 0x0));
                t58 = (t58 + 0x1);
                t59 = (t59 + t9);
                *(unsigned char *)((t60 + 0x0)) = t61;
                t60 = (t60 + t15);
                if ((int)t58 >= (int)a7) {
                    break;
                }
            }
        }
    }
    syG2DmaResumeAll();
    if (((((struct oD4_int *)((*(int *)0xC1743EC)))->v)) == 1) {
        _builtin_set_imask(((unsigned int)((((*(int *)(((int)stk + 4))) & 0xF) << 2) << 2) >> 4));
    }
    return 0x0;
}

int FUN_0c06d8e6(float f4)
{
    int stk[9];
    register int t3;
    register int t6;
    register float u8;
    register float u9;
    register int t35;
    register float t40;
    register int t44;
    register int t75;
    register int t2;
    register int t4;
    register int t5;
    register int t26;
    register int t27;

    t3 = *(int *)(((*(int *)0xC13C358) + 0xC));
    if ((int)t3 <= (int)0x3) {
        t6 = 0x0;
        u8 = f4;
        u9 = 0.0f;
        for (;;) {
            if ((int)t6 >= (int)(*(int *)(((*(int *)0xC13C358) + 0x4)))) {
                break;
            }
            t5 = t6;
            t2 = 0x80;
            t5 = (t5 << 8);
            if ((int)(*(int *)((((*(int *)(((*(int *)0xC13C358) + 0x0))) + t5) + t2))) < (int)0x4) {
                u8 = ((nlLength(0xC17599C, (((*(int *)(((*(int *)0xC13C358) + 0x0))) + t5) + 0x70))));
            } else {
                u8 = 0.0f;
                t26 = t2;
                t27 = t3;
            }
            t2 = t26;
            t3 = t27;
            if (u8 > u9) {
                t4 = t6;
                u9 = u8;
            }
            t6 = (t6 + 0x1);
        }
        if (!(20.0f > u9)) {
            t35 = *(int *)0xC13C358;
            if ((int)((((struct o80_int *)(((*(int *)((t35 + 0x0))) + (t4 << 8))))->v)) >= (int)0x4) {
                *(unsigned int *)0xC2BB3D8 = 0x4;
                t75 = 0x80;
            } else {
                nlSubVector3op(((int)stk + 0), (((*(int *)((t35 + 0x0))) + (t4 << 8)) + 0x70), 0xC17599C);
                *(float *)(((int)stk + 4)) = 0.0f;
                t40 = FUN_0c073e10(((int)stk + 0));
                FUN_0c073c40(((int)stk + 0), ((int)stk + 0), (t40 + 15.0f));
                nlAddVector3op((((int)stk + 0) + 0x18), ((int)stk + 0), 0xC17599C);
                t44 = *(int *)(((FUN_0c029b12((((int)stk + 0) + 0x18), 10.0f)) + 0x1C));
                if (t44 != -1) {
                    FUN_0c07ff00();
                }
                *(float *)(((int)stk + 28)) = ((*(float *)(((int)stk + 28))) + 10.0f);
                FUN_0c018b22((((int)stk + 0) + 0x18), 0x0);
                FUN_0c07ff00();
                FUN_0c06e700((((int)stk + 0) + 0xC), 0xC17597C, 15.0f);
                t75 = camSetTarget((((int)stk + 0) + 0xC), 0x0);
                *(unsigned int *)0xC2BB3D8 = ((*(int *)0xC2BB3D8) + 0x1);
            }
        } else {
            *(unsigned int *)0xC2BB3D8 = 0x4;
            t75 = 0xC06DA80;
        }
    } else {
        *(unsigned int *)0xC2BB3D8 = 0x4;
    }
    return t75;
}

int kmiProcessVertex_04(int a4)
{
    int stk[3];
    register int t3;
    register int t4;
    register int t5;
    register int t14;
    register int t19;
    register int t28;
    register int t33;
    register int t42;
    register int t48;

    *(unsigned int *)((((int)stk + 0) + 0x0)) = (*(int *)((a4 + 0x0)));
    *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x0)) = (*(int *)((a4 + 0x4)));
    *(unsigned int *)(((((int)stk + 0) + 0x8) + 0x0)) = (*(int *)((a4 + 0x8)));
    t3 = (((struct o4_int *)0xC300A6C)->v);
    t4 = (((struct o8_int *)0xC300A6C)->v);
    t5 = (((struct oC_int *)0xC300A6C)->v);
    (((struct o0_uint *)0xC300974)->v) = t3;
    (((struct o4_uint *)0xC300974)->v) = t4;
    (((struct o8_uint *)0xC300974)->v) = t5;
    (((struct oC_uint *)0xC300974)->v) = (*(int *)(((*(int *)((((int)stk + 0) + 0x0))) + 0x4)));
    (((struct o10_uint *)0xC300974)->v) = (*(int *)(((*(int *)((((int)stk + 0) + 0x0))) + 0x8)));
    (((struct o14_uint *)0xC300974)->v) = (*(int *)(((*(int *)((((int)stk + 0) + 0x0))) + 0xC)));
    t14 = kmiBGPlanePutColor(t3, 0x6, (*(int *)(((*(int *)((((int)stk + 0) + 0x0))) + 0x10))));
    *(unsigned int *)(((t14 << 2) + 0xC300974)) = (*(int *)(((*(int *)((((int)stk + 0) + 0x0))) + 0x18)));
    t19 = kmiBGPlanePutWord(t3, (t14 + 0x1), (*(int *)(((*(int *)((((int)stk + 0) + 0x0))) + 0x1C))));
    *(unsigned int *)(((t19 << 2) + 0xC300974)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0x4)));
    *(unsigned int *)((((t19 + 0x1) << 2) + 0xC300974)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0x8)));
    *(unsigned int *)(((((t19 + 0x1) + 0x1) << 2) + 0xC300974)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0xC)));
    t28 = kmiBGPlanePutColor(t3, (((t19 + 0x1) + 0x1) + 0x1), (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0x10))));
    *(unsigned int *)(((t28 << 2) + 0xC300974)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x4) + 0x0))) + 0x18)));
    t33 = kmiBGPlanePutWord(t3, (t28 + 0x1), (*(int *)(((*(int *)((((int)stk + 0) + 0x0))) + 0x1C))));
    *(unsigned int *)(((t33 << 2) + 0xC300974)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x8) + 0x0))) + 0x4)));
    *(unsigned int *)((((t33 + 0x1) << 2) + 0xC300974)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x8) + 0x0))) + 0x8)));
    *(unsigned int *)(((((t33 + 0x1) + 0x1) << 2) + 0xC300974)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x8) + 0x0))) + 0xC)));
    t42 = kmiBGPlanePutColor(t3, (((t33 + 0x1) + 0x1) + 0x1), (*(int *)(((*(int *)(((((int)stk + 0) + 0x8) + 0x0))) + 0x10))));
    *(unsigned int *)(((t42 << 2) + 0xC300974)) = (*(int *)(((*(int *)(((((int)stk + 0) + 0x8) + 0x0))) + 0x18)));
    (((struct o0_uint *)0xC300A6C)->v) = ((kmiBGPlanePutWord(t3, (t42 + 0x1), (*(int *)(((*(int *)((((int)stk + 0) + 0x0))) + 0x1C))))) << 2);
    t48 = kmiBGPlaneCountWords(t3);
    kmiBGPlaneSetPCW(t48, 0x0, 0x0);
    (((struct o14_uint *)0xC300A6C)->v) = (*(int *)(((*(int *)((((int)stk + 0) + 0x0))) + 0xC)));
    return 0x0;
}

int FUN_0c055990(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    int t8;
    register int t9;

    if ((*(int *)0xC2B3110) == 0) {
        t9 = ((int (*)(int, int, int, int))(Voice_ShutUp))(0x0, a5, a6, a7);
        FUN_0c058f64(0xC1322EC, 0x0, 0x78, 0x0);
    }
    if (((int)(*(int *)0xC2B3110) >= (int)((((struct o0_int *)0xC2B31C4)->v))) && ((t0 = *(int *)0xC2B3204, t0 == 0) && ((t1 = (((struct o0_int *)0xC2B3248)->v), t1 == 1) && ((t2 = (((struct o4_int *)0xC2B3248)->v), t2 == 1) && ((t3 = (((struct o8_int *)0xC2B3248)->v), t3 == 1) && ((t4 = (((struct oC_int *)0xC2B3248)->v), t4 == 1) && ((t5 = (((struct o10_int *)0xC2B3248)->v), t5 == 1) && ((t6 = (((struct o14_int *)0xC2B3248)->v), t6 == 1) && ((t7 = (((struct o18_int *)0xC2B3248)->v), t7 == 1) && (t8 = (((struct o1C_int *)0xC2B3248)->v), t8 == 1)))))))))) {
        t0 = ((int (*)(int))(Voice_ShutUp))(0x0);
        if (((((struct o38_int *)0xC2B31C4)->v)) == 0) {
            if (((((struct o30_int *)0xC2B31C4)->v)) == 0x3E7) {
                FUN_0c058f64(0xC132304, 0x0, 0x78, 0x0);
            } else {
                t0 = 0xC13231C;
                if (((((struct o30_int *)0xC2B31C4)->v)) == 99) {
                } else {
                    t0 = (*(int *)(((((((struct o30_int *)0xC2B31C4)->v)) << 2) + 0xC1323DC)));
                }
                FUN_0c058f64(t0, 0x0, 0x78, 0x0);
            }
        }
        *(unsigned int *)0xC2B3204 = 0x1;
    }
    t0 = (((struct o30_int *)0xC2B31C4)->v);
    t1 = 0x7;
    if (t0 == 0x3E7) {
    } else {
        t2 = t0;
        if (t0 == 99) {
            t2 = 0x8;
        }
        t1 = t2;
    }
    t0 = (((struct o0_int *)0xC1EC720)->v);
    t2 = t0;
    if (t0 != 2) {
        t0 = FUN_0c03f154(0x1);
        t3 = t0;
        if (t0 != 0) {
            t0 = FUN_0c03f154(0x1);
            t4 = t0;
            if (t0 != 4) {
                if ((*(int *)0xC2B3110) == ((*(int *)(((t1 << 2) + 0xC1323FC))) + ((((struct o0_int *)0xC2B31C4)->v)))) {
                    FUN_0c01ec7a(0x0);
                }
                if ((*(int *)0xC2B3110) == (((*(int *)(((t1 << 2) + 0xC1323FC))) + ((((struct o0_int *)0xC2B31C4)->v))) + 0x3C)) {
                    (((struct o24_uint *)0xC1EC720)->v) = 0x2;
                }
                t4 = 0xC1323FC;
            }
            t3 = t4;
        }
        t2 = t3;
    }
    return t2;
}

int FUN_0c08d964(int a4, int a5)
{
    int stk[5];
    register int t0;
    register int t3;
    register int t10;
    register int t14;
    register int t18;
    register int t21;
    register int t28;
    register int t30;

    *(unsigned int *)(((int)stk + 16)) = a4;
    *(unsigned int *)(((int)stk + 12)) = a5;
    t0 = *(int *)(((int)stk + 16));
    *(unsigned int *)(((int)stk + 0)) = ((t0 * 0x154) + 0xC2C8D2C);
    *(unsigned int *)((((t0 * 0x154) + 0xC2C8D2C) + 0x30)) = 0x1;
    t3 = *(int *)(((*(int *)(((int)stk + 0))) + 0x4));
    *(unsigned int *)(((*(int *)(((int)stk + 0))) + 0x34)) = (*(int *)(((((((t3 << 1) + t3) << 2) << 2) << 1) + 0xC14785C)));
    if ((*(signed char *)(((((*(int *)(((int)stk + 16))) * 0x154) + 0xC2C8D2C) + 0x2))) == 0) {
        return 0xFFFFFF01;
    }
    t10 = vmsio_isready((*(int *)(((int)stk + 16))));
    if (t10 == 0) {
        vmsfs_unmount((*(int *)(((int)stk + 16))));
        return 0xFFFFFF01;
    }
    t14 = vmsio_ismount((*(int *)(((int)stk + 16))));
    if (t14 == 0) {
        return 0xFFFFFF01;
    }
    if ((*(signed char *)((((*(int *)(((int)stk + 16))) * 0x154) + 0xC2C8D34))) == 0) {
        return 0xFFFFFF01;
    }
    t18 = buIsFormat((*(int *)(((int)stk + 16))));
    if ((int)t18 < 0) {
        return 0xFFFFFF03;
    }
    t21 = FUN_0c08faa8((*(int *)(((int)stk + 16))), (*(int *)(((int)stk + 12))));
    if ((int)t21 < 0) {
        *(unsigned int *)(((int)stk + 8)) = 0xFFFFFF0B;
    } else {
        FUN_0c090e4c((*(int *)(((int)stk + 16))), 0x0, (((int)stk + 0) + 0x4), 0x0);
        vmsfs_lockbank((*(int *)(((int)stk + 16))), 0x1);
        t28 = FUN_0c08d87e((*(int *)(((int)stk + 16))), (*(int *)(((int)stk + 12))));
        *(unsigned int *)(((int)stk + 8)) = t28;
        if ((int)t28 < 0) {
        } else {
            t30 = FUN_0c08eee0((*(int *)(((int)stk + 16))));
            *(unsigned int *)(((int)stk + 8)) = t30;
            if ((int)t30 < 0) {
            } else {
                *(unsigned int *)(((int)stk + 8)) = (FUN_0c08f5d8((*(int *)(((int)stk + 16)))));
            }
        }
    }
    vmsfs_lockbank((*(int *)(((int)stk + 16))), (*(int *)(((int)stk + 4))));
    return (*(int *)(((int)stk + 8)));
}

int FUN_0c06ad62(int a4, int a5, int a6)
{
    register int t47;

    (((struct o0_uint *)0xC13BF74)->v) = (*(int *)((((((int)((int)(((int (*)(int, int, int))(FUN_0c069e54))(a4, a5, a6)) % (int)(*(int *)(((a4 << 2) + 0xC111E50))))) << 2) + ((*(int *)(((a4 << 2) + 0xC13BE94))))) + 0x0)));
    if ((int)a6 > (int)0x1) {
        (((struct o24_uint *)0xC13BF74)->v) = (*(int *)((((*(int *)(((a5 << 2) + (*(int *)((0xC13BEE4 + ((a6 - 2) << 2)))))))) + (((int)((int)(((int (*)(void))(FUN_0c069e54))()) % (int)(*(int *)(((a5 << 2) + (*(int *)(((0xC13BEF0 + ((a6 - 2) << 2)) + 0x0)))))))) << 2))));
        (((struct oC_uint *)0xC13BF74)->v) = (*(int *)((((((int)((int)(((int (*)(void))(FUN_0c069e54))()) % (int)(*(int *)(((a4 << 2) + 0xC112048))))) << 2) + ((*(int *)(((a4 << 2) + 0xC13BF1C))))) + 0x0)));
        if (a6 == 2) {
            (((struct o30_uint *)0xC13BF74)->v) = 0xFFFFFFFF;
        } else {
            (((struct o30_uint *)0xC13BF74)->v) = (*(int *)((((((int)((int)(((int (*)(void))(FUN_0c069e54))()) % (int)(*(int *)(((a5 << 2) + (*(int *)(((0xC13BF68 + ((a6 - 2) << 2)) + 0x0)))))))) << 2) + ((*(int *)(((a5 << 2) + (*(int *)((((a6 - 2) << 2) + 0xC13BF5C)))))))) + 0x0)));
        }
        Voice_ShutUp(0x2);
        t47 = 0xC1103AC;
    } else {
        (((struct o24_uint *)0xC13BF74)->v) = (*(int *)((((((int)((int)(((int (*)(void))(FUN_0c069e54))()) % (int)(*(int *)(((a5 << 2) + 0xC111ED0))))) << 2) + ((*(int *)(((a5 << 2) + 0xC13BEB4))))) + 0x0)));
        (((struct oC_uint *)0xC13BF74)->v) = (*(int *)((((*(int *)(((a4 << 2) + 0xC13BEFC)))) + (((int)((int)(((int (*)(void))(FUN_0c069e54))()) % (int)(*(int *)(((a4 << 2) + 0xC111FC4))))) << 2))));
        (((struct o30_uint *)0xC13BF74)->v) = 0xFFFFFFFF;
        Voice_ShutUp(0x2);
        t47 = 0xC11039C;
    }
    FUN_0c058f64(0xC13BF98, 0x2, (*(int *)(((a5 << 2) + t47))), 0x0);
    Voice_ShutUp(0x1);
    return (FUN_0c058f64(0xC13BF74, 0x1, (*(int *)(((a4 << 2) + 0xC11037C))), 0x0));
}

int FUN_0c071730(int a4, int a5, int a6)
{
    register int t1;
    int t4;
    register int t5;
    register int t13;
    register int t14;
    register int t15;
    register int t16;
    register int t17;
    register int t18;
    register int t19;
    register int t20;
    register int t21;
    register int t22;
    register int t55;
    register int t56;
    register int t50;
    register int t52;
    register int t53;

    t1 = 0x2;
    if (((((struct o14_int *)0xC2BB87C)->v)) != 0) {
        t1 = 0x0;
    }
    t4 = *(int *)(((t1 << 2) + (*(int *)0xC2D0C3C)));
    t5 = (((struct o0_int *)0xC2BB820)->v);
    t22 = (((struct o4_int *)0xC2BB820)->v);
    t19 = (((struct o8_int *)0xC2BB820)->v);
    (((struct o0_uint *)0xFF000038)->v) = ((unsigned int)((unsigned int)t4 >> 16) >> 8);
    (((struct o4_uint *)0xFF000038)->v) = ((unsigned int)((unsigned int)t4 >> 16) >> 8);
    *(unsigned int *)((((0x3FFFFFF & t4) | 0xE0000000) + 0x0)) = ((((struct o0_int *)0xC2BB87C)->v));
    *(unsigned int *)((((0x3FFFFFF & t4) | 0xE0000000) + 0x4)) = ((((struct o4_int *)0xC2BB87C)->v));
    *(unsigned int *)((((0x3FFFFFF & t4) | 0xE0000000) + 0x8)) = ((((struct o8_int *)0xC2BB87C)->v));
    t14 = (((struct oC_int *)0xC2BB87C)->v);
    *(unsigned int *)((((0x3FFFFFF & t4) | 0xE0000000) + 0xC)) = t14;
    *(unsigned int *)((((0x3FFFFFF & t4) | 0xE0000000) + 0x10)) = ((((struct o10_int *)0xC2BB87C)->v));
    _builtin_prefetch((void *)((0x3FFFFFF & t4) | 0xE0000000));
    t13 = 0xFF000038;
    t15 = 0xE0000000;
    t16 = 0xC2BB87C;
    t17 = t4;
    t18 = a6;
    t20 = a4;
    t21 = (((0x3FFFFFF & t4) | 0xE0000000) + 0x20);
    for (;;) {
        if ((*(signed char *)((t20 + 0x0))) == 0) {
            break;
        }
        t13 = (*(signed char *)((t20 + 0x0)));
        if (t13 != 32) {
            t13 = (*(signed char *)((t20 + 0x0)));
            t16 = 0x0;
            t18 = 0xC2BB834;
            t17 = (*(int *)((t18 + 0x0)));
            if (t13 == 10) {
                t22 = t16;
                if ((t5 & 0x1) != 0) {
                    t22 = t17;
                }
                t16 = 0xC2BB830;
                t19 = (t19 + (*(int *)((t16 + 0x0))));
                t50 = t14;
                t52 = t17;
                t53 = t18;
            } else {
                if (t13 == 13) {
                    t22 = t16;
                    if ((t5 & 0x1) != 0) {
                        t22 = t17;
                    }
                    t50 = t14;
                    t52 = t17;
                    t53 = t18;
                } else {
                    t18 = (*(signed char *)((t20 + 0x0)));
                    t17 = t19;
                    t16 = t22;
                    t13 = (nlCharacter(t16, t17, t18, t21));
                    t21 = t13;
                    t16 = 0xC2BB82C;
                    t15 = (*(int *)((t16 + 0x0)));
                    t22 = (t22 + t15);
                }
            }
        } else {
            t16 = 0xC2BB82C;
            t15 = (*(int *)((t16 + 0x0)));
            t22 = (t22 + t15);
            t50 = t14;
            t52 = t17;
            t53 = t18;
        }
        t14 = t50;
        t20 = (t20 + 0x1);
        t17 = t52;
        t18 = t53;
    }
    (((struct o4_uint *)0xC2BB820)->v) = t22;
    (((struct o8_uint *)0xC2BB820)->v) = t19;
    t55 = *(int *)0xC2D0C3C;
    t56 = *(int *)((((t1 << 2) + t55) + 0x0));
    *(unsigned int *)((((t1 << 2) + t55) + 0x0)) = ((t56 & 0xFC000000) | (t21 & 0x3FFFFFF));
    return ((t56 & 0xFC000000) | (t21 & 0x3FFFFFF));
}

int vmsfs_mount(int a4)
{
    register int t0;
    register int t1;

    if ((*(int *)(((*(int *)0xC2C8D28) + 0x8))) == 1) {
        return (vmsfs_mount2(a4));
    }
    if ((*(signed char *)(((a4 * 0x154) + 0xC2C8D2E))) == 0) {
        return 0xFFFFFF01;
    }
    *(unsigned int *)((((a4 * 0x154) + 0xC2C8D2C) + 0x30)) = 0x1;
    t0 = *(int *)((((a4 * 0x154) + 0xC2C8D2C) + 0x4));
    *(unsigned int *)((((a4 * 0x154) + 0xC2C8D2C) + 0x34)) = (*(int *)(((((((t0 << 1) + t0) << 2) << 2) << 1) + 0xC147844)));
    t0 = *(int *)((((a4 * 0x154) + 0xC2C8D2C) + 0x34));
    t1 = *(int *)((((a4 * 0x154) + 0xC2C8D2C) + 0x30));
    *(unsigned int *)((((a4 * 0x154) + 0xC2C8D2C) + 0x30)) = (t1 + 0x1);
    vmsfs_c_progress(a4, (*(int *)(((((((a4 << 2) << 2) << 2) << 1) + 0xC2C6914) + 0x8))), ((t1 + 0x1) - 1), t0);
    t0 = vmsfs_mediainfo_retry(a4, (*(int *)((((a4 * 0x154) + 0xC2C8D2C) + 0x1C))));
    if ((int)t0 < 0) {
        *(unsigned char *)((((a4 * 0x154) + 0xC2C8D2C) + 0x9)) = 0x0;
        *(unsigned char *)((((a4 * 0x154) + 0xC2C8D2C) + 0x8)) = 0x0;
        return 0xFFFFFF01;
    }
    t0 = FUN_0c08fe18(((a4 * 0x154) + 0xC2C8D2C));
    if ((int)t0 < 0) {
        return 0xFFFFFF83;
    }
    *(unsigned int *)(((*(int *)((((a4 * 0x154) + 0xC2C8D2C) + 0x1C))) + 0x30)) = (*(int *)(((*(int *)((((a4 * 0x154) + 0xC2C8D2C) + 0x1C))) + 0x1C)));
    *(unsigned char *)((((a4 * 0x154) + 0xC2C8D2C) + 0x9)) = 0x1;
    *(unsigned char *)((((a4 * 0x154) + 0xC2C8D2C) + 0x8)) = 0x1;
    *(unsigned char *)((((a4 * 0x154) + 0xC2C8D2C) + 0xA)) = 0x0;
    *(unsigned char *)((((a4 * 0x154) + 0xC2C8D2C) + 0xB)) = 0x0;
    *(unsigned char *)((((a4 * 0x154) + 0xC2C8D2C) + 0xC)) = 0x0;
    return (FUN_0c08f8c0(a4));
}

int vmsfs_fgettime(int a4, int a5, int a6)
{
    int stk[19];
    register int t3;
    register int t7;
    register int t11;
    register int t14;
    register int t17;
    register int t21;
    register int t22;

    (((struct o48_uint *)(((int)stk + 0)))->v) = a4;
    (((struct o44_uint *)(((int)stk + 0)))->v) = a5;
    (((struct o40_uint *)(((int)stk + 0)))->v) = a6;
    if ((*(signed char *)((((*(int *)(((int)stk + 72))) * 0x154) + 0xC2C8D2E))) == 0) {
        return 0xFFFFFF01;
    }
    t3 = vmsio_isready((*(int *)(((int)stk + 72))));
    if (t3 == 0) {
        vmsfs_unmount((*(int *)(((int)stk + 72))));
        return 0xFFFFFF01;
    }
    t7 = vmsio_ismount((*(int *)(((int)stk + 72))));
    if (t7 == 0) {
        return 0xFFFFFF01;
    }
    if ((*(signed char *)((((*(int *)(((int)stk + 72))) * 0x154) + 0xC2C8D34))) == 0) {
        return 0xFFFFFF01;
    }
    t11 = buIsFormat((*(int *)(((int)stk + 72))));
    if ((int)t11 < 0) {
        return 0xFFFFFF03;
    }
    t14 = FUN_0c08faa8((*(int *)(((int)stk + 72))), (*(int *)(((int)stk + 68))));
    if ((int)t14 < 0) {
        return 0xFFFFFF0B;
    }
    t17 = FUN_0c08f204((*(int *)(((int)stk + 72))), (*(int *)(((int)stk + 68))), (((int)stk + 0) + 0x8));
    *(unsigned int *)(((int)stk + 56)) = t17;
    if ((int)t17 < 0) {
        return 0xFFFFFF05;
    }
    t21 = FUN_0c08f9c4((*(int *)(((int)stk + 72))), (*(int *)(((int)stk + 56))));
    *(unsigned int *)(((int)stk + 52)) = t21;
    *(unsigned int *)(((int)stk + 60)) = 0x0;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 60))) >= (int)0x8) {
            break;
        }
        t22 = (*(int *)(((int)stk + 60)));
        t22 = (t22 + ((int)stk + 0));
        t21 = (*(int *)(((int)stk + 52)));
        *(unsigned char *)((t22 + 0x0)) = (*(signed char *)((((*(int *)(((int)stk + 60))) + 0x10) + t21)));
        t22 = (*(int *)(((int)stk + 60)));
        t22 = (t22 + 0x1);
        *(unsigned int *)(((int)stk + 60)) = t22;
    }
    FUN_0c08fd60((*(int *)(((int)stk + 64))), ((int)stk + 0));
    return 0x0;
}

int kmiGetPackOBPParam(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int stk[4];
    register int t0;
    register int t2;
    register int t4;
    register int t17;
    register int t19;
    register int t46;
    register int t47;
    int t48;
    register int t49;
    register int t50;
    register int t30;
    register int t33;
    register int t36;
    register int t39;
    register int t42;
    register int t57;

    t0 = (((struct o4_int *)0xC16FCB0)->v);
    *(unsigned int *)((((int)stk + 0) + 0x0)) = ((((struct o0_int *)0xC16FCB0)->v));
    *(unsigned int *)((((int)stk + 0) + 0x4)) = t0;
    t2 = (((struct oC_int *)0xC16FCB0)->v);
    *(unsigned int *)((((int)stk + 0) + 0x8)) = ((((struct o8_int *)0xC16FCB0)->v));
    *(unsigned int *)((((int)stk + 0) + 0xC)) = t2;
    t4 = *(int *)0xC300938;
    t33 = 0x0;
    if (a5 != 0) {
        t33 = 0x1;
    }
    t39 = 0x0;
    if (a7 != 0) {
        t39 = 0x1;
    }
    t42 = 0x0;
    if (a8 != 0) {
        t42 = 0x2;
    }
    if (a9 == 1) {
        t30 = 0x0;
        if (a4 != 0) {
            t30 = 0x2;
        }
        t36 = 0x0;
        if (a6 != 0) {
            t36 = 0x2;
        }
    } else {
        t19 = 0x0;
        if (a4 != 0) {
            t19 = 0x3;
        }
        t17 = 0x0;
        if (a6 != 0) {
            t17 = 0x3;
        }
        t30 = t19;
        t36 = t17;
        if ((a4 != 0) && (a6 != 0)) {
            t36 = 0x2;
            if ((unsigned int)a4 < (unsigned int)a6) {
                t19 = 0x2;
                t36 = t17;
            }
            t30 = t19;
        }
    }
    t46 = t39;
    t47 = t33;
    t48 = t42;
    t49 = t30;
    t50 = t36;
    if ((*(int *)0xC300C14) == 1) {
        if ((*(int *)0xC300CF0) == 32) {
            t30 = 0x3;
        }
        if ((*(int *)0xC300CF0) == 33) {
            t33 = 0x2;
        }
        if ((*(int *)0xC300CF0) == 34) {
            t36 = 0x3;
        }
        if ((*(int *)0xC300CF0) == 35) {
            t39 = 0x2;
        }
        if ((*(int *)0xC300CF0) == 36) {
            t42 = 0x3;
        }
        t46 = t39;
        t47 = t33;
        t48 = t42;
        t49 = t30;
        t50 = t36;
    }
    if (((*(int *)0xC3008D4) & 32) != 0) {
        t57 = 0x0;
        if ((t47 != 0) && ((t50 != 0) && (t48 != 0))) {
            t57 = 0x1;
        }
        *(unsigned int *)0xC300D34 = t57;
    }
    return ((unsigned char)t4 | ((((((((t49 << 16) << 1) & 0x60000) | ((((t47 << 16) << 2) << 1) & 0x180000)) | ((t50 << 21) & 0x600000)) | ((t46 << 23) & 0x1800000)) | ((((t48 << 16) << 8) << 1) & 0x6000000)) | 0x10000));
}

int ADX_DecodeInfoExLoop(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
    int stk[1];
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t6;
    register int t9;
    register int t10;
    register int t11;
    register int t12;
    register int t13;

    *(unsigned short *)((a7 + 0x0)) = 0x0;
    *(unsigned int *)(((int)stk + 0)) = 0x30;
    if ((int)a5 >= (int)0x30) {
        t0 = *(short *)((a4 + 0x0));
        *(unsigned int *)(((int)stk + 0)) = (unsigned short)t0;
        t1 = *(int *)(((int)stk + 0));
        *(unsigned short *)(((int)stk + 0)) = ((unsigned char)((int)(unsigned short)t0 >> 8) | ((t1 << 8) & 0xFF00));
        if ((unsigned short)((unsigned char)((int)(unsigned short)t0 >> 8) | ((t1 << 8) & 0xFF00)) == 0x8000) {
            t2 = *(short *)((a4 + 0x2));
            *(unsigned int *)(((int)stk + 0)) = t2;
            t3 = *(int *)(((int)stk + 0));
            *(unsigned int *)(((int)stk + 0)) = ((unsigned char)((int)t2 >> 8) | ((t3 << 8) & 0xFF00));
            if ((int)((unsigned char)((int)t2 >> 8) | ((t3 << 8) & 0xFF00)) < (int)0x2C) {
                return 0xFFFFFFFF;
            }
            t4 = *(short *)((a4 + 0x14));
            *(unsigned int *)(((int)stk + 0)) = t4;
            *(unsigned int *)((a6 + 0x0)) = ((unsigned char)((int)t4 >> 8) | (((*(int *)(((int)stk + 0))) << 8) & 0xFF00));
            t6 = *(short *)((a4 + 0x16));
            *(unsigned int *)(((int)stk + 0)) = t6;
            *(unsigned short *)((a7 + 0x0)) = ((unsigned char)((int)t6 >> 8) | (((*(int *)(((int)stk + 0))) << 8) & 0xFFFFFF00));
            if ((*(short *)((a7 + 0x0))) != 1) {
                return 0xFFFFFFFE;
            }
            t9 = *(short *)((a4 + 0x1A));
            *(unsigned short *)((a8 + 0x0)) = ((unsigned char)((int)t9 >> 8) | ((t9 << 8) & 0xFFFFFF00));
            t10 = *(int *)((a4 + 0x1C));
            *(unsigned int *)((a9 + 0x0)) = ((((unsigned char)(signed char)((unsigned int)((unsigned int)t10 >> 16) >> 8) | (((int)t10 >> 8) & 0xFF00)) | ((t10 << 8) & 0xFF0000)) | ((t10 << 16) << 8));
            t11 = *(int *)((a4 + 0x20));
            *(unsigned int *)((a10 + 0x0)) = ((((unsigned char)(signed char)((unsigned int)((unsigned int)t11 >> 16) >> 8) | (((int)t11 >> 8) & 0xFF00)) | ((t11 << 8) & 0xFF0000)) | ((t11 << 16) << 8));
            t12 = *(int *)((a4 + 0x24));
            *(unsigned int *)((a11 + 0x0)) = ((((unsigned char)(signed char)((unsigned int)((unsigned int)t12 >> 16) >> 8) | (((int)t12 >> 8) & 0xFF00)) | ((t12 << 8) & 0xFF0000)) | ((t12 << 16) << 8));
            t13 = *(int *)((a4 + 0x28));
            *(unsigned int *)((a12 + 0x0)) = ((((unsigned char)(signed char)((unsigned int)((unsigned int)t13 >> 16) >> 8) | (((int)t13 >> 8) & 0xFF00)) | ((t13 << 8) & 0xFF0000)) | ((t13 << 16) << 8));
            return 0x0;
        }
        return 0xFFFFFFFE;
    }
    return 0xFFFFFFFF;
}

int FUN_0c01f214(int a4, int a5, float f4)
{
    register int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register float u0;
    register float u1;

    if (a5 == 0) {
        t0 = (*(int *)(((a4 << 2) + ((((struct o0_int *)0xC2707E0)->v)))));
        t1 = 0xC1ECD40;
    } else {
        t0 = (*(int *)(((a4 << 2) + ((((struct o4_int *)0xC2707E0)->v)))));
        t1 = 0xC1ECD44;
    }
    t2 = *(int *)((((*(int *)((t1 + 0x0))) + (((a4 << 2) + a4) << 2)) + 0x10));
    t1 = 0x0;
    t3 = a5;
    t4 = 0xC26ECC0;
    for (;;) {
        if ((*(int *)((t4 + 0x4))) == t0) {
            break;
        }
        t3 = (*(int *)((t4 + 0x8)));
        t1 = (t1 + t3);
        t3 = (t3 + 0x1);
        t5 = t3;
        t3 = (t3 << 1);
        t3 = (t3 + t5);
        t1 = (t1 + 0x1);
        t3 = (t3 << 2);
        t3 = (t3 << 1);
        t4 = (t4 + t3);
        if ((int)t1 >= (int)0x120) {
            t1 = t2;
            t5 = FUN_0c01eeda(t1);
            t1 = t5;
            if (t5 != -1) {
                t6 = t1;
                t1 = (t1 << 1);
                t1 = (t1 + t6);
                t1 = (t1 << 2);
                t1 = (t1 << 1);
                t3 = 0x1;
                t1 = (t1 + 0xC26ECC0);
                *(unsigned char *)((t1 + 0x0)) = t3;
                *(unsigned int *)((t1 + 0x4)) = t0;
                u0 = (((struct o4_float *)0xC01F3D8)->v);
                u1 = (f4 * ((((struct o0_float *)0xC01F3D8)->v)));
                if (0.0f > (u0 - u1)) {
                    *(unsigned int *)((t1 + 0xC)) = (int)(0.0f + ((((struct o8_float *)0xC01F3D8)->v)));
                } else {
                    *(unsigned int *)((t1 + 0xC)) = (int)((u0 - u1) + ((((struct o8_float *)0xC01F3D8)->v)));
                }
                *(unsigned int *)((t1 + 0x10)) = ((*(int *)((t1 + 0x10))) + 0x1);
                *(unsigned int *)((t1 + 0x8)) = (t2 - 1);
                if (((int)t2 > (int)t3) && (t1 = (t1 + 0x18), (int)t3 < (int)t2)) {
                    for (;;) {
                        t3 = (t3 + 0x1);
                        *(unsigned char *)((t1 + 0x0)) = 0x0;
                        *(unsigned int *)((t1 + 0xC)) = 0x3E8;
                        *(unsigned int *)((t1 + 0x10)) = 0x0;
                        *(unsigned int *)((t1 + 0x8)) = 0x0;
                        *(unsigned int *)((t1 + 0x4)) = 0xFFFFFFFF;
                        t1 = (t1 + 0x18);
                        if ((int)t3 >= (int)t2) {
                            break;
                        }
                    }
                    return 0xC01F3E0;
                }
                return 0xC01F3E0;
            }
            return t5;
        }
    }
    t0 = *(signed char *)((t4 + 0x0));
    if ((unsigned char)t0 == 4) {
        t1 = (nlObjPutUseViewMatrix((*(int *)((t4 + 0x14)))));
    } else {
        t2 = (unsigned char)t0;
        if ((*(signed char *)((t4 + 0x0))) == 0) {
            t0 = nlObjPutUseViewMatrix((*(int *)((t4 + 0x14))));
            *(unsigned char *)((t4 + 0x0)) = 0x4;
            *(unsigned int *)((t4 + 0xC)) = 0x0;
            t2 = t0;
        }
        t1 = t2;
    }
    *(unsigned int *)((t4 + 0x10)) = ((*(int *)((t4 + 0x10))) + 0x1);
    return t1;
}

int FUN_0c01ddd6(float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;
    register float u2;

    (((struct o0_uint *)0xC1ECCAC)->v) = 0x1;
    (((struct o18_float *)0xC1ECCAC)->v) = f4;
    t0 = *(int *)0xC09773C;
    u0 = (f4 * 0.109999999f);
    t1 = (int)((int)((((struct o4_int *)0xC1ECCAC)->v)) / (int)0xE10);
    t2 = 0x28;
    if ((int)t1 < (int)0xA) {
        t2 = (t1 << 2);
    }
    u1 = *(float *)((0xC097700 + t2));
    u2 = ((u0 + ((float)t0 + 240.0f)) * u1);
    if (300.0f > ((u0 + ((float)t0 + 240.0f)) * u1)) {
        u2 = 300.0f;
    }
    t0 = (((struct o38_int *)0xC1ECCAC)->v);
    if ((int)t0 < (int)0xA) {
        (((struct o4_uint *)0xC1ECCEC)->v) = (*(int *)((0xC097670 + (t0 << 2))));
        (((struct o8_uint *)0xC1ECCEC)->v) = (*(int *)((0xC0976A0 + (((((struct o38_int *)0xC1ECCAC)->v)) << 2))));
        t0 = (*(int *)(((((((struct o38_int *)0xC1ECCAC)->v)) << 2) + 0xC0976D0)));
    } else {
        (((struct o4_uint *)0xC1ECCEC)->v) = ((((struct o0_int *)0xC097698)->v));
        (((struct o8_uint *)0xC1ECCEC)->v) = ((((struct o30_int *)0xC097698)->v));
        t0 = (*(int *)0xC0976F8);
    }
    (((struct oC_uint *)0xC1ECCEC)->v) = t0;
    t0 = (((struct o8_int *)0xC1ECCAC)->v);
    t1 = (((struct oC_int *)0xC1ECCAC)->v);
    if ((int)((((struct o4_int *)0xC1ECCEC)->v)) > (int)(t0 + t1)) {
        (((struct o4_uint *)0xC1ECCEC)->v) = (t0 + t1);
    }
    (((struct o0_uint *)0xC1ECCEC)->v) = (((((struct o4_int *)0xC1ECCEC)->v)) + (int)u2);
    (((struct oC_uint *)0xC1ECCAC)->v) = (((((struct oC_int *)0xC1ECCAC)->v)) + (int)u2);
    if (((((struct o24_int *)0xC1ECCEC)->v)) != 0) {
        if ((*(int *)0xC1EC720) == 2) {
            (((struct o0_uint *)0xC1ECCEC)->v) = ((((struct o8_int *)0xC1ECCAC)->v));
        }
        (((struct oC_uint *)0xC1ECCAC)->v) = 0x0;
    }
    (((struct o28_uint *)0xC1ECCAC)->v) = (((((struct o28_int *)0xC1ECCAC)->v)) + (int)(((((struct o18_float *)0xC1ECCAC)->v)) * (*(float *)0xC01DF98)));
    if ((*(int *)0xC1EC720) != 2) {
        FUN_0c05063e();
    }
    *(unsigned int *)0xC11D0BC = 0x1;
    (((struct o18_uint *)0xC1ECCEC)->v) = (((((struct o18_int *)0xC1ECCEC)->v)) + 0x1);
    return 0x5C;
}
