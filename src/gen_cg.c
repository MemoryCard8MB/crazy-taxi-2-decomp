/* Straight-line functions with calls and guards (batch gen_cg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[2]; } Stk2;
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o118_short { char p[0x118]; short v; };
struct o11C_int { char p[0x11C]; int v; };
struct o11C_uint { char p[0x11C]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o234_uint { char p[0x234]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o34_float { char p[0x34]; float v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_int { char p[0x40]; int v; };
struct o44_int { char p[0x44]; int v; };
struct o48_short { char p[0x48]; short v; };
struct o4A_short { char p[0x4A]; short v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o63_uchar { char p[0x63]; unsigned char v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o7C_ushort { char p[0x7C]; unsigned short v; };
struct o7E_ushort { char p[0x7E]; unsigned short v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o80_ushort { char p[0x80]; unsigned short v; };
struct o84_int { char p[0x84]; int v; };
struct o84_uint { char p[0x84]; unsigned int v; };
struct o9C_uint { char p[0x9C]; unsigned int v; };
struct oA8_ushort { char p[0xA8]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oD0_float { char p[0xD0]; float v; };
struct oD4_int { char p[0xD4]; int v; };
int ADXPD_SetCoef(int, int, int);
int ADX_DecodeInfoExADPCM2(int, int, int);
int ADX_DecodeInfoExLoop(int, int, int, int, int, int, int, int, int);
int FUN_0c029b12(int, float);
int FUN_0c030eb4(void);
int FUN_0c0345ec(int, int, int, float, float, float);
int FUN_0c03e4d0(int);
int FUN_0c03f154(int);
int FUN_0c03fa18(int, int, int, int);
int FUN_0c046466(void);
int FUN_0c046d8c(int, int, int, int, int);
int FUN_0c0471c4(int, int, int, int);
int FUN_0c047216(int);
int FUN_0c04739a(int);
int FUN_0c047624(int);
extern int FUN_0c0476dc();
int FUN_0c0599b0(int, int);
float FUN_0c059b62(int, int, float);
int FUN_0c05f434(void);
int FUN_0c05f6fe(int);
int FUN_0c05f72a(int);
int FUN_0c066cc6(int, int);
int FUN_0c0673da(int);
int FUN_0c067494(int, int);
int FUN_0c06a2fe(int, int, int);
int FUN_0c071920(int);
float FUN_0c072140(int);
int FUN_0c072148(int);
int FUN_0c0721f0(int, int);
int FUN_0c072230(int, int);
int FUN_0c072fe0(void);
int FUN_0c073a30(float, float, float);
int FUN_0c073a60(int);
float FUN_0c073c80(int);
int FUN_0c07fdc8(void);
int FUN_0c07ff00(void);
int FUN_0c08f87c(int, int);
int FUN_0c095b84(int, int, int);
int FUN_0c16137e(int, int, int, int, int, int, int, int, int, int);
int SetMotionBlurStrength(float);
extern void _builtin_ftrv(float *, float *);
extern int _builtin_get_imask(void);
extern void _builtin_prefetch(void *);
extern void _builtin_set_imask(int);
int _rsfts(int, int, int);
int _sub(int, int, int, int);
int buIsFormat(int);
int buIsReady(int);
int kmGetCurrentVertexOffset(int);
int kmiBGPlaneCountWords(int);
int kmiBGPlaneSetPCW(int, int, int);
int kmiMemCopy8(int, int, int);
extern int memcpy();
int memset(int, int, int);
int nlAddVector(int, int);
int nlFree(int, int, int);
int nlGetAverageVector(int, int, int, float, float);
int nlGetMatrix(int);
int nlGetMatrix33on44(int);
float nlLength(int, int);
int nlLineCalcColor(int, int);
int nlLineClipNear(int, int);
int nlLineDrawThick(int, int, int, int);
int nlLineSendHeader(int);
int nlLocate(int, int);
int nlMalloc(int);
int nlMultiMatrix8(int);
int nlObjPutUseViewMatrix(int);
int nlPopMatrix(int);
int nlPrintf(int, ...);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlSubVector3op(int, int, int);
int nlUnitMatrix(void);
int psgTimeDispInit(void);
int vmsfs_init_work_new(int, int, int);
int vmsfs_init_work_normal(int, int, int);
int vmsfs_setdevicetype(int);
int vmsfs_setretry(int);
int vmsfs_unmount(int);
int vmsio_init(void);
int vmsio_ismount(int);
int vmsio_isready(int);
int FUN_0c02bcf8(int a4);
int FUN_0c059c64(int a4, int a5, int a6, int a7, float f4);
int FUN_0c07e210(int a4, int a5);
int _its(int a4, int a5, int a6, int a7);
int FUN_0c06356c(int a4);
float FUN_0c04ca94(void);
int nldispstripTexSub(int a4, int a5);
int FUN_0c0464f0(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10);
int vmsfs_sysdiskfree(int a4);
int kmSetUserClipping(int a4, int a5, int a6, int a7, int a8, int a9);
int FUN_0c15e33c(int a4, int a5);
int ADXB_DecodeHeaderAdx(int a4, int a5, int a6);
int FUN_0c011838(int a4, int a5, int a6, int a7, float f4, float f5);
int pcarRejoinLane(int a4);
int FUN_0c0666c0(int a4);
float displayStrip_tex_spd(int a4, int a5, int a6);
int vmsfs_init(int a4, int a5, int a6);
int FUN_0c01422e(int a4);
int nlSingleLineSub(int a4, int a5, int a6, int a7);
int FUN_0c155b78(int a4, int a5);
int FUN_0c03e5f8(void);
int FUN_0c0551a0(void);
float FUN_0c086a50(int a4, int a5, int a6);
int kmiProcessVertex_09(int a4);
int gdc_CoursePointChk(Stk2 s, float f4);
int FUN_0c030f66(int a4);


int FUN_0c059c64(int a4, int a5, int a6, int a7, float f4)
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

    t3 = nlMalloc((((a5 << 1) + a5) << 2));
    t4 = t3;
    t5 = 0x0;
    t6 = 0x0;
    if ((int)a5 > 0) {
        t7 = 0x0;
        t8 = 0x0;
        for (;;) {
            u1 = *(float *)(((t7 + a4) + 0x0));
            t8 = (t8 + 0x1);
            *(float *)(((t7 + t3) + 0x0)) = u1;
            u0 = (((struct o4_float *)((t7 + a4)))->v);
            (((struct o4_float *)((t7 + t3)))->v) = u0;
            t10 = (t7 + a4);
            t9 = (t7 + t3);
            t7 = (t7 + 0xC);
            if ((int)t8 >= (int)a5) {
                break;
            }
        }
        t4 = 0x4;
        t5 = t7;
        t6 = t8;
        t7 = t9;
        t8 = t10;
        u2 = u0;
        u0 = u1;
    }
    t9 = t4;
    t4 = t5;
    t5 = t6;
    t6 = t7;
    t7 = t8;
    t8 = 0x0;
    u1 = u2;
    u2 = u0;
    u0 = f4;
    for (;;) {
        if ((int)t8 >= (int)(a5 - 1)) {
            break;
        }
        t10 = a5;
        t10 = (t10 - t8);
        t10 = (t10 - 1);
        t7 = 0x0;
        t5 = 0x0;
        t5 = (t5 + t3);
        t4 = t5;
        if ((int)t10 > 0) {
            for (;;) {
                t9 = 0xC;
                u1 = (*(float *)((t5 + 0x0)));
                u2 = (*(float *)((t5 + t9)));
                t7 = (t7 + 0x1);
                if (u1 > u2) {
                    t6 = t4;
                    t6 = (t6 + 0xC);
                    u2 = (*(float *)((t4 + 0x0)));
                    t9 = 0x4;
                    u0 = (*(float *)((t6 + 0x0)));
                    *(float *)((t6 + 0x0)) = u2;
                    *(float *)((t4 + 0x0)) = u0;
                    u2 = (*(float *)((t4 + t9)));
                    u0 = (*(float *)((t6 + t9)));
                    *(float *)((t6 + t9)) = u2;
                    *(float *)((t4 + t9)) = u0;
                }
                t4 = (t4 + 0xC);
                t5 = (t5 + 0xC);
                if ((int)t7 >= (int)t10) {
                    break;
                }
            }
        }
        t8 = (t8 + 0x1);
    }
    t4 = (FUN_0c0599b0(t3, a5));
    t5 = t0;
    t0 = t1;
    t1 = t2;
    t2 = 0x0;
    t6 = t10;
    for (;;) {
        if ((int)t2 >= (int)a7) {
            break;
        }
        t6 = t2;
        t6 = (t6 << 2);
        t0 = a5;
        u0 = (float)t2;
        t6 = (t6 + a6);
        u1 = u0;
        t5 = t3;
        u2 = (FUN_0c059b62(t5, t0, u0));
        t0 = 0x0;
        t0 = (t0 + a4);
        t1 = 0x0;
        *(float *)((t6 + 0x0)) = u2;
        t5 = t0;
        if ((int)a5 > 0) {
            for (;;) {
                u0 = (*(float *)((t0 + 0x0)));
                t1 = (t1 + 0x1);
                if (u1 == u0) {
                    t4 = 0x4;
                    u0 = (*(float *)((t5 + t4)));
                    *(float *)((t6 + 0x0)) = u0;
                    t7 = t4;
                }
                t4 = t7;
                t5 = (t5 + 0xC);
                t0 = (t0 + 0xC);
                if ((int)t1 >= (int)a5) {
                    break;
                }
            }
            t7 = t4;
            u1 = u0;
        }
        u0 = u1;
        t4 = t7;
        u0 = 0.0f;
        if (u0 > ((*(float *)((t6 + 0x0))))) {
            *(float *)((t6 + 0x0)) = 0.0f;
        }
        u0 = (*(float *)((t6 + 0x0)));
        t2 = (t2 + 0x1);
        if (u0 > 1.0f) {
            *(float *)((t6 + 0x0)) = 1.0f;
        }
    }
    return nlFree(t3, t0, t1);
}

int FUN_0c07e210(int a4, int a5)
{
    int stk[10];
    register int t0;
    register int t1;
    register int t3;
    register int t4;
    register int t42;
    register int t14;
    register int t15;
    register int t16;
    register int t35;
    register int t37;
    register int t39;
    register int t27;
    register float u28;
    int R1000;
    int R1004;

    R1000 = *(int *)((int)stk + 0);
    R1004 = *(int *)((int)stk + 4);

    t0 = (((struct o8_int *)0xC2BBAC8)->v);
    t1 = *(int *)((t0 + 0x0));
    R1004 = (t1 << 2);
    t3 = *(int *)((t0 + 0x4));
    t4 = *(int *)(((t1 << 2) + ((((struct o0_int *)0xC2BBAC8)->v))));
    (((struct o0_uint *)0xFF000038)->v) = ((unsigned int)((unsigned int)t4 >> 16) >> 8);
    (((struct o4_uint *)0xFF000038)->v) = ((unsigned int)((unsigned int)t4 >> 16) >> 8);
    R1000 = ((t4 & 0x3FFFFFF) | 0xE0000000);
    kmiMemCopy8(((t4 & 0x3FFFFFF) | 0xE0000000), ((((struct o4_int *)0xC2BBAC8)->v)), t3);
    _builtin_prefetch((void *)(R1000));
    if (t3 == 64) {
        _builtin_prefetch((void *)((R1000) + 0x20));
    }
    t42 = (((struct o0_int *)0xC2BBAC8)->v);
    t14 = R1004;
    *(unsigned int *)((t14 + t42)) = ((*(int *)((t14 + t42))) + (((unsigned int)t3 >> 2) << 2));
    *(unsigned int *)(((int)stk + 8)) = 0xE0000000;
    if ((int)a4 > 0) {
        t15 = a4;
        t16 = a5;
        for (;;) {
            if (t15 == 1) {
                t14 = 0xF0000000;
                *(unsigned int *)(((int)stk + 8)) = t14;
            }
            if ((*(int *)0xC2C413C) != 0) {
                t14 = 0xC072230;
                FUN_0c072230(t16, (((int)stk + 0) + 0xC));
                u28 = (*(float *)(((int)stk + 20)));
            } else {
                *(float *)(((int)stk + 12)) = (*(float *)((t16 + 0x0)));
                *(float *)(((int)stk + 16)) = ((((struct o4_float *)(t16))->v));
                t27 = t14;
                u28 = ((((struct o8_float *)(t16))->v));
            }
            t14 = t27;
            *(float *)(((int)stk + 20)) = (1.0f / u28);
            *(float *)(((int)stk + 24)) = ((((struct oC_float *)(t16))->v));
            *(float *)(((int)stk + 28)) = ((((struct o10_float *)(t16))->v));
            t14 = (*(int *)((t16 + 0x14)));
            *(unsigned int *)(((int)stk + 32)) = t14;
            *(unsigned int *)(((int)stk + 36)) = (*(int *)((t16 + 0x18)));
            t35 = *(int *)((((((struct o8_int *)0xC2BBAC8)->v)) + 0x0));
            R1000 = (t35 << 2);
            t37 = *(int *)(((t35 << 2) + ((((struct o0_int *)0xC2BBAC8)->v))));
            (((struct o0_uint *)0xFF000038)->v) = ((unsigned int)((unsigned int)t37 >> 16) >> 8);
            (((struct o4_uint *)0xFF000038)->v) = ((unsigned int)((unsigned int)t37 >> 16) >> 8);
            t14 = 0xC155A80;
            kmiMemCopy8(((t37 & 0x3FFFFFF) | 0xE0000000), (((int)stk + 0) + 0x8), 0x20);
            _builtin_prefetch((void *)((t37 & 0x3FFFFFF) | 0xE0000000));
            t39 = (((struct o0_int *)0xC2BBAC8)->v);
            t15 = (t15 - 1);
            t14 = (R1000);
            *(unsigned int *)((t14 + t39)) = ((*(int *)((t14 + t39))) + 0x20);
            t16 = (t16 + 0x1C);
            if ((int)t15 <= 0) {
                break;
            }
        }
        t42 = t39;
    }
    return t42;
}

int _its(int a4, int a5, int a6, int a7)
{
    int stk[11];
    register int t0;
    register int t1;
    register int t3;
    register int t6;
    register int t7;
    register int t14;
    register int t15;
    register int t16;
    register int t27;
    register int t31;
    register int t35;
    register int t36;
    register int t28;
    int R1000;
    int R1004;
    int R1008;
    int R1012;
    int R1016;
    int R1020;
    int R1024;

    R1000 = *(int *)((int)stk + 0);
    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);
    R1016 = *(int *)((int)stk + 16);
    R1020 = *(int *)((int)stk + 20);
    R1024 = *(int *)((int)stk + 24);

    R1012 = a5;
    R1000 = a6;
    R1024 = 0x1;
    t0 = R1012;
    t1 = R1000;
    *(unsigned char *)(((t1 + t0) + 0x0)) = 0x0;
    t6 = ((int (*)(int, int, int, int))(memcpy))((((int)stk + 0) + 0x24), a4, 0x8, a7);
    t3 = R1000;
    R1004 = (t3 - 1);
    R1020 = ((((t3 - 1) << 2) << 1) + 0xC118494);
    R1016 = ((R1004) + 0x1);
    t7 = (t1 + t0);
    for (;;) {
        if ((int)(R1004) < 0) {
            return t6;
        }
        t6 = 0x5;
        t6 = ((int)((int)(R1016) / (int)t6));
        t6 = (t6 + 0x1);
        t6 = (t6 << 1);
        t14 = (0x8 - t6);
        t15 = (0x8 - (0x8 - t6));
        t6 = (((int (*)(int, int, int))(memcpy))(((0x8 - t6) + (((int)stk + 0) + 0x1C)), ((R1020) + (0x8 - t6)), (0x8 - (0x8 - t6))));
        R1008 = 0x0;
        R1000 = 0x0;
        t16 = 0x8;
        for (;;) {
            t6 = (FUN_0c095b84((t14 + (((int)stk + 0) + 0x24)), (t14 + (((int)stk + 0) + 0x1C)), t15));
            if ((int)t6 >= 0) {
                t6 = (_sub(0x0, (t14 + (((int)stk + 0) + 0x24)), (t14 + (((int)stk + 0) + 0x1C)), t15));
                R1024 = t6;
                R1008 = ((R1008) + t16);
            }
            t16 = ((int)((unsigned int)((int)((unsigned int)t16 + (unsigned int)0x0)) + ((((int)0x0 > (int)t16)) ? 1u : 0u)));
            t16 = (t16 >> 1);
            if (t16 != 0) {
                t6 = (_rsfts((t14 + (((int)stk + 0) + 0x1C)), t15, 0x1));
                t27 = R1000;
                R1000 = (t27 + 0x1);
                if ((int)(t27 + 0x1) >= (int)0x4) {
                    t28 = (t27 + 0x1); break;
                }
                continue;
            }
            break;
        }
        t31 = R1008;
        if ((R1024) == 0) {
            break;
        }
        *(unsigned char *)(((t7 - 0x1) + 0x0)) = (t31 + 0x30);
        t7 = (t7 - 0x1);
        R1004 = ((R1004) - 1);
        R1020 = ((R1020) - 8);
        R1016 = ((R1016) - 1);
    }
    *(unsigned char *)(((t7 - 0x1) + 0x0)) = (t31 + 0x30);
    t35 = t28;
    t36 = (t7 - 0x1);
    for (;;) {
        t36 = (t36 - 1);
        if ((unsigned int)t36 < (unsigned int)(R1012)) {
            break;
        }
        t35 = 0x30;
        *(unsigned char *)((t36 + 0x0)) = t35;
    }
    return t6;
}

int FUN_0c06356c(int a4)
{
    int stk[8];
    register int t1;
    register int t3;
    register int t16;
    register int t19;
    register int t20;
    register int t22;
    register int t24;
    register int t25;
    register int t26;
    register int t27;
    register int t34;
    register int t38;
    register int t52;
    register int t54;
    register int t58;
    register int t18;
    register int t21;
    register int t23;
    register int t49;

    t1 = (nlPushMatrix(0x0));
    t3 = 0x0;
    for (;;) {
        if ((int)t3 >= (int)(*(int *)((a4 + 0x4)))) {
            break;
        }
        t27 = (*(int *)((a4 + 0x0)));
        t25 = t3;
        t1 = 0x80;
        t25 = (t25 << 8);
        t27 = (t27 + t25);
        *(unsigned int *)((t27 + t1)) = 0x0;
        t1 = (FUN_0c05f72a(t27));
        t1 = (FUN_0c05f6fe(t27));
        t1 = (nlUnitMatrix());
        t1 = 0x88;
        t1 = (FUN_0c0673da((*(int *)((((*(int *)((a4 + 0x0))) + t25) + t1)))));
        t1 = (nlGetMatrix((((*(int *)((a4 + 0x0))) + t25) + 0x40)));
        t3 = (t3 + 0x1);
    }
    t16 = (nlPopMatrix(0x1));
    t19 = t18;
    t20 = 0x0;
    t22 = t21;
    t24 = t23;
    t26 = t3;
    for (;;) {
        if ((int)t20 >= (int)(*(int *)((a4 + 0x4)))) {
            break;
        }
        t26 = 0xC175C80;
        t27 = 0x10;
        t19 = 0x2000;
        t24 = 0xC2B9EE8;
        t25 = 0xC1758B4;
        t22 = t25;
        if ((int)(*(int *)((t26 + 0x0))) < (int)t27) {
            t26 = 0x1000;
        } else {
            t26 = 0x9000;
        }
        t16 = 0x8A;
        t34 = *(short *)((t22 + t16));
        t16 = t19;
        t16 = ((int)((int)(unsigned short)(((*(int *)((t24 + 0x0))) - t34) + t26) / (int)t16));
        t27 = t16;
        t19 = t16;
        t16 = 0xF4;
        t38 = ((t20 << 8) + ((*(int *)((a4 + 0x0)))));
        t20 = (t20 + 0x1);
        *(unsigned int *)((t38 + t16)) = t19;
    }
    if ((*(int *)0xC1EC740) == 1) {
        psgTimeDispInit();
        (((struct o63_uchar *)(a4))->v) = ((*(signed char *)(((a4 + 0x63) + 0x0))) | 0x40);
    } else {
        t49 = t24;
    }
    t52 = *(int *)((a4 + 0x4));
    t54 = 0xFFFFFFFF;
    if ((int)(*(int *)((a4 + 0x8))) > (int)0x1) {
    } else {
        t54 = (*(int *)((a4 + 0x18)));
    }
    t58 = FUN_0c06a2fe((*(int *)(((*(int *)((a4 + 0x0))) + 0x10))), t52, t54);
    *(unsigned int *)((a4 + 0xC)) = ((*(int *)((a4 + 0xC))) + 0x1);
    return t58;
}

float FUN_0c04ca94(void)
{
    int stk[3];
    register float t1;
    register float u3;
    register float u4;
    register int t5;
    register int t6;
    register int t19;
    register int t20;
    register float u7;

    nlSubVector3op(((int)stk + 0), 0xC177D38, 0xC10C764);
    *(float *)(((int)stk + 4)) = 0.0f;
    t1 = FUN_0c073c80(((int)stk + 0));
    if (!(t1 > ((((struct o0_float *)0xC04CCD0)->v)))) {
        u3 = (((struct o14_float *)0xC04CCD0)->v);
        u4 = (((struct o18_float *)0xC04CCD0)->v);
        t5 = 0x0;
        t6 = 0xC10C614;
        for (;;) {
            if ((*(int *)((0xC10C614 + ((((t5 << 1) + t5) << 2) << 1)))) == -1) {
                break;
            }
            nlPushMatrix(0x0);
            FUN_0c073a60((t6 + 0xC));
            nlRotateAY((*(int *)((t6 + 0x8))));
            t19 = *(int *)0xC2ADEB4;
            t20 = *(int *)((t6 + 0x4));
            u7 = (FUN_0c072140((int)(((float)((int)((int)((*(int *)0xC2ADEB4) + (*(int *)((t6 + 0x4)))) % (int)0x46)) / u3) * u4)));
            FUN_0c072148((int)(((float)((int)((int)(t19 + t20) % (int)0x46)) / u3) * u4));
            FUN_0c073a30(0.0f, (u7 * ((((struct o2C_float *)0xC04CCD0)->v))), 0.0f);
            nlRotateAX((int)(u7 * ((((struct o34_float *)0xC04CCD0)->v))));
            nlRotateAZ((int)(u7 * ((((struct o3C_float *)0xC04CCD0)->v))));
            nlObjPutUseViewMatrix((*(int *)((((*(int *)((t6 + 0x0))) << 2) + 0xC13161C))));
            nlPopMatrix(0x1);
            t6 = (t6 + 0x18);
            t5 = (t5 + 0x1);
        }
    }
    return t1;
}

int nldispstripTexSub(int a4, int a5)
{
    int stk[10];
    register int t0;
    register int t1;
    register int t3;
    register int t4;
    register int t41;
    register int t14;
    register int t15;
    register int t16;
    register int t34;
    register int t36;
    register int t38;
    register int t27;
    register float u28;
    int R1000;
    int R1004;

    R1000 = *(int *)((int)stk + 0);
    R1004 = *(int *)((int)stk + 4);

    t0 = (((struct o8_int *)0xC2BBAC8)->v);
    t1 = *(int *)((t0 + 0x0));
    R1004 = (t1 << 2);
    t3 = *(int *)((t0 + 0x4));
    t4 = *(int *)(((t1 << 2) + ((((struct o0_int *)0xC2BBAC8)->v))));
    (((struct o0_uint *)0xFF000038)->v) = ((unsigned int)((unsigned int)t4 >> 16) >> 8);
    (((struct o4_uint *)0xFF000038)->v) = ((unsigned int)((unsigned int)t4 >> 16) >> 8);
    R1000 = ((t4 & 0x3FFFFFF) | 0xE0000000);
    kmiMemCopy8(((t4 & 0x3FFFFFF) | 0xE0000000), ((((struct o4_int *)0xC2BBAC8)->v)), t3);
    _builtin_prefetch((void *)(R1000));
    if (t3 == 64) {
        _builtin_prefetch((void *)((R1000) + 0x20));
    }
    t41 = (((struct o0_int *)0xC2BBAC8)->v);
    t14 = R1004;
    *(unsigned int *)((t14 + t41)) = ((*(int *)((t14 + t41))) + (((unsigned int)t3 >> 2) << 2));
    *(unsigned int *)(((int)stk + 8)) = 0xE0000000;
    if ((int)a4 > 0) {
        t15 = a4;
        t16 = a5;
        for (;;) {
            if (t15 == 1) {
                t14 = 0xF0000000;
                *(unsigned int *)(((int)stk + 8)) = t14;
            }
            if ((*(int *)0xC2C413C) != 0) {
                t14 = 0xC072230;
                FUN_0c072230(t16, (((int)stk + 0) + 0xC));
                u28 = (*(float *)(((int)stk + 20)));
            } else {
                *(float *)(((int)stk + 12)) = (*(float *)((t16 + 0x0)));
                *(float *)(((int)stk + 16)) = ((((struct o4_float *)(t16))->v));
                t27 = t14;
                u28 = ((((struct o8_float *)(t16))->v));
            }
            t14 = t27;
            *(float *)(((int)stk + 20)) = (1.0f / u28);
            *(float *)(((int)stk + 24)) = ((((struct oC_float *)(t16))->v));
            *(float *)(((int)stk + 28)) = ((((struct o10_float *)(t16))->v));
            t14 = (*(int *)((t16 + 0x14)));
            *(unsigned int *)(((int)stk + 32)) = t14;
            t34 = *(int *)((((((struct o8_int *)0xC2BBAC8)->v)) + 0x0));
            R1000 = (t34 << 2);
            t36 = *(int *)(((t34 << 2) + ((((struct o0_int *)0xC2BBAC8)->v))));
            (((struct o0_uint *)0xFF000038)->v) = ((unsigned int)((unsigned int)t36 >> 16) >> 8);
            (((struct o4_uint *)0xFF000038)->v) = ((unsigned int)((unsigned int)t36 >> 16) >> 8);
            t14 = 0xC155A80;
            kmiMemCopy8(((t36 & 0x3FFFFFF) | 0xE0000000), (((int)stk + 0) + 0x8), 0x20);
            _builtin_prefetch((void *)((t36 & 0x3FFFFFF) | 0xE0000000));
            t38 = (((struct o0_int *)0xC2BBAC8)->v);
            t15 = (t15 - 1);
            t14 = (R1000);
            *(unsigned int *)((t14 + t38)) = ((*(int *)((t14 + t38))) + 0x20);
            t16 = (t16 + 0x1C);
            if ((int)t15 <= 0) {
                break;
            }
        }
        t41 = t38;
    }
    return t41;
}

int FUN_0c0464f0(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10)
{
    register int t0;
    register int t1;
    register int t2;
    int t3;
    register int t4;

    if (a4 != 0) {
        return ((int (*)(int, int, int, int))(FUN_0c0476dc))(0x5, a5, a6, a7);
    }
    (((struct o8_uint *)0xC2AC614)->v) = 0x0;
    (((struct oC_uint *)0xC2AC614)->v) = 0x0;
    (((struct o10_uint *)0xC2AC614)->v) = 0x2;
    (((struct o0_uint *)0xC2AC614)->v) = 0x0;
    (((struct o4_uint *)0xC2AC614)->v) = 0x0;
    (((struct o0_uint *)0xC12D2A8)->v) = 0xFFFFFFFF;
    (((struct o4_uint *)0xC12D2A8)->v) = 0x0;
    (((struct oC_uint *)0xC12D2A8)->v) = 0x0;
    FUN_0c0471c4(0xFFFFFFFF, 0x0, a6, a7);
    FUN_0c047216(0x0);
    FUN_0c04739a(0x0);
    FUN_0c030eb4();
    (((struct o0_float *)0xC2ADA54)->v) = 0.5f;
    SetMotionBlurStrength(0.5f);
    t4 = 0x0;
    if (((*(int *)0xC1EC740) != 0) && ((t0 = *(int *)0xC1EC740, t0 != 1) || (t1 = *(int *)0xC1ECD10, t1 != 0))) {
        t4 = 0x4;
    }
    FUN_0c047624(t4);
    t0 = ((int (*)(int))(FUN_0c0476dc))(0x1);
    t0 = ((int (*)(int))(FUN_0c0476dc))(0x5);
    t0 = 0x3;
    if (((*(int *)0xC1EC740) != 0) && ((t2 = (((struct o4_int *)0xC2AC2F0)->v), t2 != 1) && (t3 = (((struct o0_int *)0xC2AC2F0)->v), t3 != 1))) {
        t0 = 0x2;
    }
    t1 = ((int (*)(int))(FUN_0c0476dc))(t0);
    (((struct oC_uint *)0xC2ADA54)->v) = 0x0;
    return t1;
}

int vmsfs_sysdiskfree(int a4)
{
    int stk[4];
    register int t4;
    register int t8;
    register int t12;
    register int t17;
    register int t18;
    register int t26;

    *(unsigned int *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 0)) = (((*(int *)(((int)stk + 12))) * 0x154) + 0xC2C8D2C);
    if ((*(signed char *)(((((*(int *)(((int)stk + 12))) * 0x154) + 0xC2C8D2C) + 0x2))) == 0) {
        return 0xFFFFFF01;
    }
    t4 = vmsio_isready((*(int *)(((int)stk + 12))));
    if (t4 == 0) {
        vmsfs_unmount((*(int *)(((int)stk + 12))));
        return 0xFFFFFF01;
    }
    t8 = vmsio_ismount((*(int *)(((int)stk + 12))));
    if (t8 == 0) {
        return 0xFFFFFF01;
    }
    if ((*(signed char *)((((*(int *)(((int)stk + 12))) * 0x154) + 0xC2C8D34))) == 0) {
        return 0xFFFFFF01;
    }
    t12 = buIsFormat((*(int *)(((int)stk + 12))));
    if ((int)t12 < 0) {
        return 0xFFFFFF03;
    }
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    *(unsigned int *)(((int)stk + 8)) = 0x0;
    for (;;) {
        t17 = *(int *)(((*(int *)(((*(int *)(((int)stk + 0))) + 0x1C))) + 0x2C));
        t18 = *(int *)(((*(int *)(((*(int *)(((int)stk + 0))) + 0x1C))) + 0x10));
        if ((int)(*(int *)(((int)stk + 8))) >= (int)(((int)((unsigned int)((int)((unsigned int)(t18 * (t17 + 0x1)) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t18 * (t17 + 0x1)))) ? 1u : 0u))) >> 1)) {
            break;
        }
        t26 = FUN_0c08f87c((*(int *)(((int)stk + 12))), (*(int *)(((int)stk + 8))));
        if ((unsigned short)t26 == 0xFFFC) {
            *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x1);
        }
        *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x1);
    }
    return (*(int *)(((int)stk + 4)));
}

int kmSetUserClipping(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int stk[11];
    register int t0;
    int t4;
    register int t5;
    register int t8;
    register int t11;
    register int t12;
    register int t13;
    register int t14;
    register int t29;
    register int t31;
    int R1000;
    int R1004;
    int R1008;

    R1000 = *(int *)((int)stk + 0);
    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);

    R1008 = a6;
    R1004 = a7;
    t0 = kmGetCurrentVertexOffset(a5);
    if (t0 != 8) {
        t4 = *(int *)(((*(int *)((a4 + 0x4))) + 0x0));
        t5 = 0xA0000000;
        if ((a5 & 0x1) != 0) {
            t5 = 0x81000040;
        }
        *(unsigned int *)0xC174274 = ((0x830000 & t4) | t5);
        t8 = *(int *)(((a5 << 2) + (*(int *)((a4 + 0x0)))));
        (((struct o0_uint *)0xFF000038)->v) = ((unsigned int)((unsigned int)t8 >> 16) >> 8);
        (((struct o4_uint *)0xFF000038)->v) = ((unsigned int)((unsigned int)t8 >> 16) >> 8);
        kmiMemCopy8(((t8 & 0x3FFFFFF) | 0xE0000000), 0xC174274, 0x20);
        _builtin_prefetch((void *)((t8 & 0x3FFFFFF) | 0xE0000000));
        t12 = *(int *)((a4 + 0x0));
        t11 = *(int *)(((a5 << 2) + t12));
        *(unsigned int *)(((a5 << 2) + t12)) = (t11 + 0x20);
        R1000 = 0x2;
        t13 = (t11 + 0x20);
        t14 = ((t8 & 0x3FFFFFF) | 0xE0000000);
        for (;;) {
            if ((R1000) == 0) {
                break;
            }
            t12 = (*(int *)((a4 + 0x0)));
            t14 = *(int *)(((a5 << 2) + t12));
            (((struct o0_uint *)0xFF000038)->v) = ((unsigned int)((unsigned int)t14 >> 16) >> 8);
            (((struct o4_uint *)0xFF000038)->v) = ((unsigned int)((unsigned int)t14 >> 16) >> 8);
            t13 = 0xC155A80;
            t14 = (t14 & 0x3FFFFFF);
            t14 = (t14 | 0xE0000000);
            t12 = (kmiMemCopy8(t14, 0xC174294, 0x40));
            _builtin_prefetch((void *)t14);
            t14 = (t14 + 0x20);
            _builtin_prefetch((void *)t14);
            t12 = (*(int *)((a4 + 0x0)));
            *(unsigned int *)(((a5 << 2) + t12)) = ((*(int *)(((a5 << 2) + t12))) + 0x40);
            t13 = (R1000);
            t13 = (t13 - 1);
            R1000 = t13;
        }
    }
    *(unsigned int *)(((((int)stk + 0) + 0xC) + 0x0)) = 0x20000000;
    *(unsigned int *)(((((int)stk + 0) + 0xC) + 0x10)) = (R1008);
    *(unsigned int *)(((((int)stk + 0) + 0xC) + 0x14)) = (R1004);
    *(unsigned int *)(((((int)stk + 0) + 0xC) + 0x18)) = a8;
    *(unsigned int *)(((((int)stk + 0) + 0xC) + 0x1C)) = a9;
    t29 = *(int *)(((a5 << 2) + (*(int *)((a4 + 0x0)))));
    (((struct o0_uint *)0xFF000038)->v) = ((unsigned int)((unsigned int)t29 >> 16) >> 8);
    (((struct o4_uint *)0xFF000038)->v) = ((unsigned int)((unsigned int)t29 >> 16) >> 8);
    kmiMemCopy8(((t29 & 0x3FFFFFF) | 0xE0000000), (((int)stk + 0) + 0xC), 0x20);
    _builtin_prefetch((void *)((t29 & 0x3FFFFFF) | 0xE0000000));
    t31 = *(int *)((a4 + 0x0));
    *(unsigned int *)(((a5 << 2) + t31)) = ((*(int *)(((a5 << 2) + t31))) + 0x20);
    return 0x0;
}

int FUN_0c15e33c(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t27;
    register int t3;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    *(unsigned int *)((a4 + 0x0)) = 0x0;
    t1 = *(int *)0xC1743EC;
    t27 = 0x90101;
    if ((*(int *)((((a5 * 0x34) + (t1 + 0x4)) + 0x28))) == 1) {
    } else {
        t3 = *(int *)((((a5 * 0x34) + (t1 + 0x4)) + 0x0));
        *(unsigned int *)((((t3 * 0x34) + (t1 + 0x4)) + 0x0)) = t3;
        *(unsigned int *)(((((*(int *)((((a5 * 0x34) + (t1 + 0x4)) + 0x0))) * 0x34) + ((*(int *)0xC1743EC) + 0x4)) + 0x28)) = 0x0;
        *(unsigned int *)(((((*(int *)((((a5 * 0x34) + (t1 + 0x4)) + 0x0))) * 0x34) + ((*(int *)0xC1743EC) + 0x4)) + 0x2C)) = 0x0;
        *(unsigned int *)(((((*(int *)((((a5 * 0x34) + (t1 + 0x4)) + 0x0))) * 0x34) + ((*(int *)0xC1743EC) + 0x4)) + 0x30)) = 0x0;
        *(unsigned int *)(((((*(int *)((((a5 * 0x34) + (t1 + 0x4)) + 0x0))) * 0x34) + ((*(int *)0xC1743EC) + 0x4)) + 0x4)) = 0x0;
        *(unsigned int *)(((((*(int *)((((a5 * 0x34) + (t1 + 0x4)) + 0x0))) * 0x34) + ((*(int *)0xC1743EC) + 0x4)) + 0x8)) = 0x0;
        *(unsigned int *)(((((*(int *)((((a5 * 0x34) + (t1 + 0x4)) + 0x0))) * 0x34) + ((*(int *)0xC1743EC) + 0x4)) + 0xC)) = 0x0;
        *(unsigned int *)(((((*(int *)((((a5 * 0x34) + (t1 + 0x4)) + 0x0))) * 0x34) + ((*(int *)0xC1743EC) + 0x4)) + 0x10)) = 0x0;
        *(unsigned int *)(((((*(int *)((((a5 * 0x34) + (t1 + 0x4)) + 0x0))) * 0x34) + ((*(int *)0xC1743EC) + 0x4)) + 0x14)) = 0x0;
        *(unsigned int *)(((((*(int *)((((a5 * 0x34) + (t1 + 0x4)) + 0x0))) * 0x34) + ((*(int *)0xC1743EC) + 0x4)) + 0x18)) = 0x3;
        *(unsigned int *)(((((*(int *)((((a5 * 0x34) + (t1 + 0x4)) + 0x0))) * 0x34) + ((*(int *)0xC1743EC) + 0x4)) + 0x1C)) = 0x0;
        *(unsigned int *)(((((*(int *)((((a5 * 0x34) + (t1 + 0x4)) + 0x0))) * 0x34) + ((*(int *)0xC1743EC) + 0x4)) + 0x20)) = 0x0;
        *(unsigned int *)((((a5 * 0x34) + (t1 + 0x4)) + 0x28)) = 0x1;
        *(unsigned int *)((a4 + 0x0)) = ((a5 * 0x34) + (t1 + 0x4));
        t27 = 0x0;
    }
    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
    return t27;
}

int ADXB_DecodeHeaderAdx(int a4, int a5, int a6)
{
    int stk[7];
    register int t0;
    register int t20;
    register int t1;
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

    *(unsigned short *)((a4 + 0x2)) = 0x1;
    R1020 = (a4 + 0x10);
    R1016 = (a4 + 0x18);
    R1012 = (a4 + 0x14);
    R1008 = (a4 + 0xE);
    R1004 = (a4 + 0xF);
    *(int *)((int)stk + 0) = (a4 + 0xD);
    t0 = FUN_0c16137e(a5, a6, (((int)stk + 0) + 0x18), (a4 + 0xC), (a4 + 0xD), (a4 + 0xF), (a4 + 0xE), (a4 + 0x14), (a4 + 0x18), (a4 + 0x10));
    t20 = 0x0;
    if ((int)t0 >= 0) {
        t1 = ADX_DecodeInfoExADPCM2(a5, a6, (a4 + 0x1C));
        t20 = 0x0;
        if ((int)t1 < 0) {
        } else {
            ADXPD_SetCoef((*(int *)((a4 + 0x8))), (*(int *)((a4 + 0x14))), (*(short *)((a4 + 0x1C))));
            R1020 = (a4 + 0x34);
            R1016 = (a4 + 0x30);
            R1012 = (a4 + 0x2C);
            R1008 = (a4 + 0x28);
            R1004 = (a4 + 0x26);
            ADX_DecodeInfoExLoop(a5, a6, (a4 + 0x20), (a4 + 0x24), (a4 + 0x26), (a4 + 0x28), (a4 + 0x2C), (a4 + 0x30), (a4 + 0x34));
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
            (((struct oA8_ushort *)(a4))->v) = 0x0;
            memset((a4 + 0x4C), 0x0, 0x4);
            t20 = (*(short *)(((int)stk + 24)));
        }
    }
    return t20;
}

int FUN_0c011838(int a4, int a5, int a6, int a7, float f4, float f5)
{
    register int t0;
    register float u0;
    register float u1;

    if ((int)(*(int *)0xC175C80) < (int)0x10) {
        (((struct o80_ushort *)((0x1A4 + a4)))->v) = ((((struct o118_short *)(a4))->v));
        (((struct o80_ushort *)(((0x1A4 + a4) + 0x84)))->v) = ((((struct o118_short *)(a4))->v));
        t0 = (((struct o118_short *)(a4))->v);
        if (((int)t0 < (int)0x500) && ((int)t0 > (int)0xFFFFFB00)) {
            (((struct o80_ushort *)((((0x1A4 + a4) + 0x84) + 0x84)))->v) = (int)((float)((((struct o118_short *)(a4))->v)) * 0.25f);
            (((struct o80_ushort *)(((((0x1A4 + a4) + 0x84) + 0x84) + 0x84)))->v) = (int)((float)((((struct o118_short *)(a4))->v)) * 0.25f);
        } else {
            if ((int)((((struct o118_short *)(a4))->v)) > 0) {
                u0 = ((float)(((((struct o118_short *)(a4))->v)) - 1280) * 0.100000001f);
                u0 = -u0;
                (((struct o80_ushort *)((((0x1A4 + a4) + 0x84) + 0x84)))->v) = (int)(u0 + 320.0f);
                t0 = 0xFFFFFB00;
                u0 = 320.0f;
            } else {
                u1 = ((float)(((((struct o118_short *)(a4))->v)) + 0x500) * 0.100000001f);
                u1 = -u1;
                (((struct o80_ushort *)((((0x1A4 + a4) + 0x84) + 0x84)))->v) = (int)(u1 + -320.0f);
                t0 = 0x500;
                u0 = -320.0f;
            }
            u1 = ((float)(((((struct o118_short *)(a4))->v)) + t0) * 0.100000001f);
            u1 = -u1;
            (((struct o80_ushort *)(((((0x1A4 + a4) + 0x84) + 0x84) + 0x84)))->v) = (int)(u1 + u0);
        }
    } else {
        (((struct o80_ushort *)(((0x1A4 + a4) + 0x18C)))->v) = (-((((struct o118_short *)(a4))->v)));
        (((struct o80_ushort *)((((0x1A4 + a4) + 0x18C) - 0x84)))->v) = (-((((struct o118_short *)(a4))->v)));
        (((struct o80_ushort *)(((((0x1A4 + a4) + 0x18C) - 0x84) - 0x84)))->v) = (int)((float)((((struct o118_short *)(a4))->v)) * 0.100000001f);
        (((struct o80_ushort *)((((((0x1A4 + a4) + 0x18C) - 0x84) - 0x84) - 0x84)))->v) = (int)((float)((((struct o118_short *)(a4))->v)) * 0.100000001f);
    }
    return 0x80;
}

int pcarRejoinLane(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = (((struct o84_int *)(a4))->v);
    if (((t0 & 0xC00) != 0x400) && ((t0 & 0xC00) != 0x800)) {
        t0 = FUN_0c046466();
        t1 = t0;
        if ((t0 & 0x3FF) == 0) {
            (((struct o84_uint *)(a4))->v) = (((((struct o84_int *)(a4))->v)) & 0xFFFFF3FF);
            t0 = (((struct o80_int *)(a4))->v);
            if (((*(int *)(((*(int *)((((((t0 << 1) + t0) << 2) + (*(int *)0xC2ADA7C)) + 0x8))) + 0x0))) & 0x4000) != 0) {
                (((struct o84_uint *)(a4))->v) = (((((struct o84_int *)(a4))->v)) | 0x800);
            } else {
                (((struct o84_uint *)(a4))->v) = (((((struct o84_int *)(a4))->v)) | 0x400);
            }
            (((struct o11C_uint *)(a4))->v) = 0x10E;
            t1 = 0x11C;
        }
        t0 = t1;
    } else {
        if ((float)((((struct o11C_int *)(a4))->v)) > 150.0f) {
            (((struct o11C_uint *)(a4))->v) = (((((struct o11C_int *)(a4))->v)) - 1);
            t1 = 0x11C;
        } else {
            FUN_0c046d8c(0x2, 0x0, (0x80 + a4), (0xD4 + a4), (0x8C + a4));
            t2 = FUN_0c03fa18(((((struct o80_int *)(a4))->v)), (((((struct oD4_int *)(a4))->v)) - 2), 0x0, 0x8);
            t1 = t2;
            if (t2 == 0) {
                *(unsigned int *)((a4 + 0xC)) = 0xC0440A4;
                (((struct o84_uint *)(a4))->v) = (((((struct o84_int *)(a4))->v)) & 0xFFFFFFEF);
                u0 = 0.0599999987f;
                u0 = u0 + 0.00999999978f * ((1000.0f / ((((struct oB4_float *)(a4))->v))));
                (((struct oD0_float *)(a4))->v) = u0;
                t1 = 0xD0;
            }
        }
        t0 = t1;
    }
    return t0;
}


float displayStrip_tex_spd(int a4, int a5, int a6)
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
    register float u162;
    register float u163;
    register float u164;
    register float u165;
    register int t34;
    float u43[4];
    register int t55;
    float u65[4];
    register int t78;
    float u88[4];
    register int t101;
    float u110[4];
    register int t122;
    float u132[4];
    register int t145;
    float u155[4];

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
    t1 = t0;
    t0 = t2;
    t2 = a5;
    t3 = (a6 + 0x20);
    u0 = u5;
    u1 = u4;
    u2 = u3;
    u3 = u14[0];
    u4 = u14[1];
    u5 = u14[2];
    for (;;) {
        *(float *)(((t3 - 0x8) + 0x0)) = 0.0f;
        *(float *)((((t3 - 0x8) + 0x0) + 4)) = u2;
        t3 = (t3 - 0x8);
        t1 = (t1 - 0x1);
        t4 = *(int *)((t0 + 0x0));
        t0 = (t0 + 0x4);
        t5 = *(int *)((t0 + 0x0));
        t0 = (t0 + 0x4);
        if (t1 != 0) {
            if ((t4 & 1) != 0) {
                t6 = t0;
                t0 = (t0 + 0x18);
                t34 = (t6 - 8);
            } else {
                t34 = (t5 + t0);
            }
            t0 = (t0 + 0x20);
            u6 = *(float *)((t34 + 0x0));
            u7 = *(float *)(((t34 + 0x0) + 4));
            _builtin_prefetch((void *)t0);
            *(volatile float *)(((t34 + 0x8) + 0x0));
            u8 = *(float *)((((t34 + 0x8) + 0x0) + 4));
            u5 = (u5 * (1.0f / u3));
            *(volatile float *)((((t34 + 0x8) + 0x8) + 0x0));
            u2 = (*(float *)(((((t34 + 0x8) + 0x8) + 0x0) + 4)));
            u4 = (u4 * (1.0f / u3));
            *(float *)(((t3 - 0x8) + 0x0)) = u1;
            *(float *)((((t3 - 0x8) + 0x0) + 4)) = u0;
            t6 = t3;
            t3 = (t3 - 0x8);
            u43[0] = u7;
            u43[1] = u6;
            u43[2] = u8;
            u43[3] = 1.0f;
            _builtin_ftrv(u43, u43);
            *(float *)(((t3 - 0x8) + 0x0)) = (1.0f / u3);
            *(float *)((((t3 - 0x8) + 0x0) + 4)) = u5;
            t3 = (t3 - 0x8);
            t0 = (t0 - 32);
            *(float *)(((t3 - 0x8) + 0x0)) = u4;
            *(float *)((((t3 - 0x8) + 0x0) + 4)) = u3;
            t3 = (t3 - 0x8);
            *(unsigned int *)((t3 + 0x0)) = t6;
            u0 = (*(float *)((((((t34 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
            u1 = ((((struct o8_float *)(((t34 + 0x8) + 0x8)))->v));
            t1 = (t1 - 0x1);
            _builtin_prefetch((void *)t3);
            t3 = (t3 + 0x40);
            *(float *)(((t3 - 0x8) + 0x0)) = 0.0f;
            *(float *)((((t3 - 0x8) + 0x0) + 4)) = u2;
            t3 = (t3 - 0x8);
            t6 = *(int *)((t0 + 0x0));
            t0 = (t0 + 0x4);
            t7 = *(int *)((t0 + 0x0));
            t0 = (t0 + 0x4);
            if (t1 != 0) {
                if ((t6 & 1) != 0) {
                    t8 = t0;
                    t0 = (t0 + 0x18);
                    t55 = (t8 - 8);
                } else {
                    t55 = (t7 + t0);
                }
                t0 = (t0 + 0x20);
                u3 = (*(float *)(((t55 + 0x0) + 4)));
                u4 = (*(float *)((t55 + 0x0)));
                _builtin_prefetch((void *)t0);
                *(volatile float *)(((t55 + 0x8) + 0x0));
                u5 = (*(float *)((((t55 + 0x8) + 0x0) + 4)));
                *(volatile float *)((((t55 + 0x8) + 0x8) + 0x0));
                u2 = (*(float *)(((((t55 + 0x8) + 0x8) + 0x0) + 4)));
                *(float *)(((t3 - 0x8) + 0x0)) = u1;
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = u0;
                t8 = t3;
                t3 = (t3 - 0x8);
                u65[0] = u3;
                u65[1] = u4;
                u65[2] = u5;
                u65[3] = 1.0f;
                _builtin_ftrv(u65, u65);
                u3 = u65[0];
                u4 = u65[1];
                u5 = u65[2];
                *(float *)(((t3 - 0x8) + 0x0)) = (1.0f / u43[0]);
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = (u43[2] * (1.0f / u43[0]));
                t3 = (t3 - 0x8);
                t0 = (t0 - 32);
                *(float *)(((t3 - 0x8) + 0x0)) = (u43[1] * (1.0f / u43[0]));
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = u43[0];
                t3 = (t3 - 0x8);
                t2 = (t2 + 0x40);
                *(unsigned int *)((t3 + 0x0)) = t8;
                u0 = (*(float *)((((((t55 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
                u1 = ((((struct o8_float *)(((t55 + 0x8) + 0x8)))->v));
                _builtin_prefetch((void *)t3);
                t3 = (t3 + 0x40);
                continue;
            }
            t1 = t7;
            if (((int)t6 > 0) && ((t6 & 128) != 0)) {
                t6 = *(int *)((t0 + 0x0));
                t0 = (t0 + 0x4);
                t7 = *(int *)((t0 + 0x0));
                t0 = (t0 + 0x4);
                if ((t6 & 1) != 0) {
                    t6 = t0;
                    t0 = (t0 + 0x18);
                    t78 = (t6 - 8);
                } else {
                    t78 = (t7 + t0);
                }
                t0 = (t0 + 0x20);
                u3 = (*(float *)(((t78 + 0x0) + 4)));
                u4 = (*(float *)((t78 + 0x0)));
                _builtin_prefetch((void *)t0);
                *(volatile float *)(((t78 + 0x8) + 0x0));
                u5 = (*(float *)((((t78 + 0x8) + 0x0) + 4)));
                *(volatile float *)((((t78 + 0x8) + 0x8) + 0x0));
                u2 = (*(float *)(((((t78 + 0x8) + 0x8) + 0x0) + 4)));
                *(float *)(((t3 - 0x8) + 0x0)) = u1;
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = u0;
                t6 = (t3 >> 1);
                t3 = (t3 - 0x8);
                u88[0] = u3;
                u88[1] = u4;
                u88[2] = u5;
                u88[3] = 1.0f;
                _builtin_ftrv(u88, u88);
                u3 = u88[0];
                u4 = u88[1];
                u5 = u88[2];
                *(float *)(((t3 - 0x8) + 0x0)) = (1.0f / u43[0]);
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = (u43[2] * (1.0f / u43[0]));
                t3 = (t3 - 0x8);
                t0 = (t0 - 32);
                *(float *)(((t3 - 0x8) + 0x0)) = (u43[1] * (1.0f / u43[0]));
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = u43[0];
                t3 = (t3 - 0x8);
                t2 = (t2 + 0x40);
                *(unsigned int *)((t3 + 0x0)) = t6;
                u0 = (*(float *)((((((t78 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
                u1 = ((((struct o8_float *)(((t78 + 0x8) + 0x8)))->v));
                _builtin_prefetch((void *)t3);
                t3 = (t3 + 0x40);
                continue;
            }
            u162 = u43[2]; u163 = (1.0f / u43[0]); u164 = u43[0]; u165 = u43[1]; break;
        }
        t1 = t5;
        if (((int)t4 > 0) && ((t4 & 128) != 0)) {
            t4 = *(int *)((t0 + 0x0));
            t0 = (t0 + 0x4);
            t5 = *(int *)((t0 + 0x0));
            t0 = (t0 + 0x4);
            if ((t4 & 1) != 0) {
                t4 = t0;
                t0 = (t0 + 0x18);
                t101 = (t4 - 8);
            } else {
                t101 = (t5 + t0);
            }
            t0 = (t0 + 0x20);
            u6 = *(float *)((t101 + 0x0));
            u7 = *(float *)(((t101 + 0x0) + 4));
            _builtin_prefetch((void *)t0);
            *(volatile float *)(((t101 + 0x8) + 0x0));
            u8 = *(float *)((((t101 + 0x8) + 0x0) + 4));
            u5 = (u5 * (1.0f / u3));
            *(volatile float *)((((t101 + 0x8) + 0x8) + 0x0));
            u2 = (*(float *)(((((t101 + 0x8) + 0x8) + 0x0) + 4)));
            u4 = (u4 * (1.0f / u3));
            *(float *)(((t3 - 0x8) + 0x0)) = u1;
            *(float *)((((t3 - 0x8) + 0x0) + 4)) = u0;
            t4 = (t3 >> 1);
            t3 = (t3 - 0x8);
            u110[0] = u7;
            u110[1] = u6;
            u110[2] = u8;
            u110[3] = 1.0f;
            _builtin_ftrv(u110, u110);
            *(float *)(((t3 - 0x8) + 0x0)) = (1.0f / u3);
            *(float *)((((t3 - 0x8) + 0x0) + 4)) = u5;
            t3 = (t3 - 0x8);
            t0 = (t0 - 32);
            *(float *)(((t3 - 0x8) + 0x0)) = u4;
            *(float *)((((t3 - 0x8) + 0x0) + 4)) = u3;
            t3 = (t3 - 0x8);
            *(unsigned int *)((t3 + 0x0)) = t4;
            u0 = (*(float *)((((((t101 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
            u1 = ((((struct o8_float *)(((t101 + 0x8) + 0x8)))->v));
            t1 = (t1 - 0x1);
            _builtin_prefetch((void *)t3);
            t3 = (t3 + 0x40);
            *(float *)(((t3 - 0x8) + 0x0)) = 0.0f;
            *(float *)((((t3 - 0x8) + 0x0) + 4)) = u2;
            t3 = (t3 - 0x8);
            t4 = *(int *)((t0 + 0x0));
            t0 = (t0 + 0x4);
            t5 = *(int *)((t0 + 0x0));
            t0 = (t0 + 0x4);
            if (t1 != 0) {
                if ((t4 & 1) != 0) {
                    t6 = t0;
                    t0 = (t0 + 0x18);
                    t122 = (t6 - 8);
                } else {
                    t122 = (t5 + t0);
                }
                t0 = (t0 + 0x20);
                u3 = (*(float *)(((t122 + 0x0) + 4)));
                u4 = (*(float *)((t122 + 0x0)));
                _builtin_prefetch((void *)t0);
                *(volatile float *)(((t122 + 0x8) + 0x0));
                u5 = (*(float *)((((t122 + 0x8) + 0x0) + 4)));
                *(volatile float *)((((t122 + 0x8) + 0x8) + 0x0));
                u2 = (*(float *)(((((t122 + 0x8) + 0x8) + 0x0) + 4)));
                *(float *)(((t3 - 0x8) + 0x0)) = u1;
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = u0;
                t6 = t3;
                t3 = (t3 - 0x8);
                u132[0] = u3;
                u132[1] = u4;
                u132[2] = u5;
                u132[3] = 1.0f;
                _builtin_ftrv(u132, u132);
                u3 = u132[0];
                u4 = u132[1];
                u5 = u132[2];
                *(float *)(((t3 - 0x8) + 0x0)) = (1.0f / u110[0]);
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = (u110[2] * (1.0f / u110[0]));
                t3 = (t3 - 0x8);
                t0 = (t0 - 32);
                *(float *)(((t3 - 0x8) + 0x0)) = (u110[1] * (1.0f / u110[0]));
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = u110[0];
                t3 = (t3 - 0x8);
                t2 = (t2 + 0x40);
                *(unsigned int *)((t3 + 0x0)) = t6;
                u0 = (*(float *)((((((t122 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
                u1 = ((((struct o8_float *)(((t122 + 0x8) + 0x8)))->v));
                _builtin_prefetch((void *)t3);
                t3 = (t3 + 0x40);
                continue;
            }
            t1 = t5;
            if (((int)t4 > 0) && ((t4 & 128) != 0)) {
                t4 = *(int *)((t0 + 0x0));
                t0 = (t0 + 0x4);
                t5 = *(int *)((t0 + 0x0));
                t0 = (t0 + 0x4);
                if ((t4 & 1) != 0) {
                    t4 = t0;
                    t0 = (t0 + 0x18);
                    t145 = (t4 - 8);
                } else {
                    t145 = (t5 + t0);
                }
                t0 = (t0 + 0x20);
                u3 = (*(float *)(((t145 + 0x0) + 4)));
                u4 = (*(float *)((t145 + 0x0)));
                _builtin_prefetch((void *)t0);
                *(volatile float *)(((t145 + 0x8) + 0x0));
                u5 = (*(float *)((((t145 + 0x8) + 0x0) + 4)));
                *(volatile float *)((((t145 + 0x8) + 0x8) + 0x0));
                u2 = (*(float *)(((((t145 + 0x8) + 0x8) + 0x0) + 4)));
                *(float *)(((t3 - 0x8) + 0x0)) = u1;
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = u0;
                t4 = (t3 >> 1);
                t3 = (t3 - 0x8);
                u155[0] = u3;
                u155[1] = u4;
                u155[2] = u5;
                u155[3] = 1.0f;
                _builtin_ftrv(u155, u155);
                u3 = u155[0];
                u4 = u155[1];
                u5 = u155[2];
                *(float *)(((t3 - 0x8) + 0x0)) = (1.0f / u110[0]);
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = (u110[2] * (1.0f / u110[0]));
                t3 = (t3 - 0x8);
                t0 = (t0 - 32);
                *(float *)(((t3 - 0x8) + 0x0)) = (u110[1] * (1.0f / u110[0]));
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = u110[0];
                t3 = (t3 - 0x8);
                t2 = (t2 + 0x40);
                *(unsigned int *)((t3 + 0x0)) = t4;
                u0 = (*(float *)((((((t145 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
                u1 = ((((struct o8_float *)(((t145 + 0x8) + 0x8)))->v));
                _builtin_prefetch((void *)t3);
                t3 = (t3 + 0x40);
                continue;
            }
            u162 = u110[2]; u163 = (1.0f / u110[0]); u164 = u110[0]; u165 = u110[1]; break;
        }
        u5 = (u5 * (1.0f / u3));
        u4 = (u4 * (1.0f / u3));
        *(float *)(((t3 - 0x8) + 0x0)) = u1;
        *(float *)((((t3 - 0x8) + 0x0) + 4)) = u0;
        t4 = (t3 >> 1);
        t3 = (t3 - 0x8);
        t0 = (t0 - 8);
        *(float *)(((t3 - 0x8) + 0x0)) = (1.0f / u3);
        *(float *)((((t3 - 0x8) + 0x0) + 4)) = u5;
        t3 = (t3 - 0x8);
        t2 = (t2 + 0x20);
        *(float *)(((t3 - 0x8) + 0x0)) = u4;
        *(float *)((((t3 - 0x8) + 0x0) + 4)) = u3;
        t3 = (t3 - 0x8);
        *(unsigned int *)((t3 + 0x0)) = t4;
        _builtin_prefetch((void *)t3);
        t3 = (t3 + 0x20);
        return u0;
    }
    *(float *)(((t3 - 0x8) + 0x0)) = u1;
    *(float *)((((t3 - 0x8) + 0x0) + 4)) = u0;
    *(float *)((((t3 - 0x8) - 0x8) + 0x0)) = u163;
    *(float *)(((((t3 - 0x8) - 0x8) + 0x0) + 4)) = (u162 * u163);
    *(float *)(((((t3 - 0x8) - 0x8) - 0x8) + 0x0)) = (u165 * u163);
    *(float *)((((((t3 - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = u164;
    *(unsigned int *)(((((t3 - 0x8) - 0x8) - 0x8) + 0x0)) = (t3 >> 1);
    _builtin_prefetch((void *)(((t3 - 0x8) - 0x8) - 0x8));
    return u0;
}

int vmsfs_init(int a4, int a5, int a6)
{
    int stk[9];
    register int t1;
    register int t8;
    register int t37;
    int R1000;
    int R1020;
    int R1024;
    int R1028;
    int R1032;

    R1000 = *(int *)((int)stk + 0);
    R1020 = *(int *)((int)stk + 20);
    R1024 = *(int *)((int)stk + 24);
    R1028 = *(int *)((int)stk + 28);
    R1032 = *(int *)((int)stk + 32);

    R1032 = a4;
    R1028 = a5;
    R1024 = a6;
    *(unsigned int *)0xC2C8D28 = 0xC2C8D14;
    R1020 = 0x0;
    t1 = 0xC2C8D28;
    for (;;) {
        if ((int)(R1020) >= (int)0x8) {
            break;
        }
        t1 = (R1020);
        t1 = (t1 << 2);
        *(unsigned int *)((t1 + (0xC2C97CC))) = 0x0;
        t1 = (R1020);
        t1 = (t1 + 0x1);
        R1020 = t1;
    }
    memset(0xC2C8D14, 0x0, 0x14);
    memset(0xC2C8D2C, 0x0, 0xAA0);
    vmsfs_setdevicetype(0x0);
    (((struct o8_uint *)0xC2CDC8C)->v) = 0x0;
    R1020 = 0x0;
    R1000 = 0x1;
    t8 = 0x1;
    for (;;) {
        if ((int)(R1020) >= (int)0x8) {
            break;
        }
        if (((R1028) & (R1000)) != 0) {
            t8 = 0xC2CDC94;
            *(unsigned int *)((t8 + 0x0)) = ((*(int *)((t8 + 0x0))) + 0x1);
        }
        R1020 = ((R1020) + 0x1);
        t8 = (R1000);
        t8 = (t8 << 1);
        R1000 = t8;
    }
    if ((R1024) != 0) {
        vmsfs_init_work_normal((R1032), (R1028), (R1024));
        *(unsigned int *)(((*(int *)0xC2C8D28) + 0x8)) = 0x0;
    } else {
        vmsfs_init_work_new((R1032), (R1028), (R1024));
        *(unsigned int *)(((*(int *)0xC2C8D28) + 0x8)) = 0x1;
    }
    (((struct o0_uint *)0xC2CDC8C)->v) = 0x8;
    (((struct o4_uint *)0xC2CDC8C)->v) = 0x0;
    vmsfs_setretry(0xA);
    t37 = (((struct o0_int *)0xC2CDC8C)->v);
    memset(0xC2CDA4C, 0x0, (((((t37 << 2) << 1) + t37) << 2) << 1));
    vmsio_init();
    return 0x0;
}


int nlSingleLineSub(int a4, int a5, int a6, int a7)
{
    int stk[12];
    register int t15;
    register int t16;
    register float u17;
    register float u21;
    register float u25;
    register float u26;
    register float u30;
    register float u34;
    register int t36;
    register int t37;
    register int t38;

    *(unsigned int *)(((int)stk + 44)) = a6;
    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 8)) = (nlLineSendHeader(a7));
    nlPushMatrix(0xC1475E8);
    nlMultiMatrix8(((((struct oC_int *)0xC2BF960)->v)));
    if ((0x2 & a7) != 0) {
        nlMultiMatrix8(((((struct o0_int *)0xC2BF960)->v)));
    }
    FUN_0c072fe0();
    FUN_0c0721f0((*(int *)(((int)stk + 0))), (((int)stk + 0) + 0x1C));
    FUN_0c0721f0((*(int *)(((int)stk + 4))), (((int)stk + 0) + 0xC));
    nlPopMatrix(0x1);
    t15 = nlLineClipNear((((int)stk + 0) + 0x1C), (((int)stk + 0) + 0xC));
    if (t15 != 0) {
        t16 = nlLineCalcColor((((int)stk + 0) + 0x1C), (((int)stk + 0) + 0xC));
        if (t16 == 0) {
            return 0x0;
        }
        u17 = *(float *)(((int)stk + 36));
        u21 = ((((struct o0_float *)0xC2C3D9C)->v));
        u21 = u21 + ((1.0f / u17)) * (*(float *)(((int)stk + 28)));
        *(float *)(((int)stk + 28)) = u21;
        u25 = ((((struct o4_float *)0xC2C3D9C)->v));
        u25 = u25 + ((1.0f / u17)) * (*(float *)(((int)stk + 32)));
        *(float *)(((int)stk + 32)) = u25;
        u26 = *(float *)(((int)stk + 20));
        u30 = ((((struct o0_float *)0xC2C3D9C)->v));
        u30 = u30 + ((1.0f / u26)) * (*(float *)(((int)stk + 12)));
        *(float *)(((int)stk + 12)) = u30;
        u34 = ((((struct o4_float *)0xC2C3D9C)->v));
        u34 = u34 + ((1.0f / u26)) * (*(float *)(((int)stk + 16)));
        *(float *)(((int)stk + 16)) = u34;
        t36 = nlLineDrawThick((*(int *)(((int)stk + 8))), (((int)stk + 0) + 0x1C), (((int)stk + 0) + 0xC), (((int)stk + 0) + 0x2C));
        t37 = *(int *)0xC2D0C3C;
        t38 = t37;
        if ((a7 & 0x1) != 0) {
            t38 = (t37 + 0x8);
        }
        *(unsigned int *)((t38 + 0x0)) = (((*(int *)((t38 + 0x0))) & 0xFC000000) | (t36 & 0x3FFFFFF));
        return 0x1;
    }
    return 0x0;
}

int FUN_0c155b78(int a4, int a5)
{

    register int R3;
    register int R7;
    register int R10;
    register int R11;
    register int R12;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    v0_0 = a4;
    v0_2 = a5;
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C155C00;
    if ((v0_1 == 1)) goto L_C155C08;
    if ((v0_1 == 2)) goto L_C155C10;
    if ((v0_1 == 3)) goto L_C155C18;
    if ((v0_1 == 4)) goto L_C155C20;
    if ((v0_1 != 5)) goto L_C155B96;
    v0_1 = (0x25C);
    v0_2 = (0xC1560A8);
    L_C155C74:;
    *(unsigned int *)((v0_0 + v0_1)) = v0_2;
    L_C155C7E:;
    return v0_1;
    L_C155B96:;
    if ((v0_1 != 6)) goto L_C155B9E;
    v0_1 = (0x264);
    v0_2 = (0xC1560AC);
    L_C155C7C:;
    *(unsigned int *)((v0_0 + v0_1)) = v0_2;
    goto L_C155C7E;
    L_C155B9E:;
    if ((v0_1 != 7)) goto L_C155BA6;
    v0_1 = (0x26C);
    v0_2 = (0xC1560B0);
    goto L_C155C74;
    L_C155BA6:;
    if ((v0_1 != 8)) goto L_C155BAE;
    v0_1 = (0x274);
    v0_2 = (0xC1560B4);
    goto L_C155C7C;
    L_C155BAE:;
    goto L_C155C7E;
    L_C155C20:;
    v0_1 = (0x254);
    v0_2 = (0xC1560A4);
    goto L_C155C7C;
    L_C155C18:;
    v0_1 = (0x24C);
    v0_2 = (0xC1560A0);
    goto L_C155C74;
    L_C155C10:;
    v0_1 = (0x244);
    v0_2 = (0xC15607A);
    goto L_C155C7C;
    L_C155C08:;
    v0_1 = (0x23C);
    v0_2 = (0xC156076);
    goto L_C155C74;
    L_C155C00:;
    (((struct o234_uint *)(v0_0))->v) = 0xC156072;
    v0_1 = (0x234);
    goto L_C155C7E;
}

int FUN_0c03e5f8(void)
{
    int t0;
    int t1;
    int t3;
    register int t4;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    u0 = *(float *)0xC2A5858;
    u1 = 0.0f;
    if ((((((struct o0_int *)0xC1EC740)->v)) == 0) && (t0 = (((struct o4_int *)0xC1EC740)->v), t0 != 5)) {
        u1 = 16.0f;
    }
    *(float *)0xC2A5858 = 0.100000001f;
    t0 = 0xC03E67C;
    if ((((((struct o0_int *)0xC1EC740)->v)) == 0) && (t1 = (((struct o4_int *)0xC1EC740)->v), (t1 & 0xFFFFFFFE) == 0)) {
    } else {
        t1 = FUN_0c03e4d0(0x0);
        t3 = 0x1;
        if (t1 == 0) {
        } else {
            t1 = 0x0;
            if (((int)(*(int *)0xC2A4FAC) >= 0) && (t0 = *(int *)0xC2A46E4, t0 != 0)) {
                t0 = buIsReady((*(int *)0xC2A4FAC));
                t4 = 0x0;
                if (t0 == 0) {
                    t4 = 0x2;
                }
                t1 = t4;
            }
            t3 = t1;
        }
        t1 = *(int *)0xC1EC83C;
        t0 = t1;
        if (((t1 & 32) != 0) && (t3 != 0)) {
            FUN_0c0345ec(0x34, 0x11, 0x0, ((((struct o4_float *)0xC03E7A8)->v)), (u1 + ((((struct o0_float *)0xC03E7A8)->v))), (*(float *)0xC2A5858));
            u2 = *(float *)0xC2A5858;
            u3 = (((struct oC_float *)0xC03E7A8)->v);
            u4 = (((struct o10_float *)0xC03E7A8)->v);
            t1 = 0x12;
            t4 = 0x0;
            if (t3 == 1) {
            } else {
                t1 = 0x13;
                t4 = (((((*(int *)0xC2A4FAC) << 2) << 2) << 1) + 0xC0B6010);
            }
            t0 = (FUN_0c0345ec(0x34, t1, t4, u3, (u1 + u4), u2));
        }
    }
    *(float *)0xC2A5858 = u0;
    return t0;
}

int FUN_0c0551a0(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t0 = *(int *)0xC1EC720;
    t1 = ((t0 * 0x3C0) + 0xC28F530);
    if ((*(int *)0xC175C84) == 0) {
    } else {
        t2 = 0xC29072C;
        if (t0 == 0) {
            t2 = 0xC28FFFC;
        }
        t1 = t2;
    }
    t0 = 0xC2B2F7C;
    t2 = t1;
    for (;;) {
        *(unsigned int *)((t0 + 0x0)) = (*(int *)((t2 + 0x0)));
        t0 = (t0 + 0x4);
        t2 = (t2 + 0x10);
        if ((unsigned int)t0 >= (unsigned int)0xC2B2FCC) {
            break;
        }
    }
    t0 = 0x1;
    t2 = 0x0;
    for (;;) {
        if ((unsigned int)(*(int *)(((((t2 << 2) << 1) + (0x140 + t1)) + 0x4))) > (unsigned int)(*(int *)(((((t0 << 2) << 1) + (0x140 + t1)) + 0x4)))) {
            t2 = t0;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x50) {
            break;
        }
    }
    if ((int)(t2 - 1) >= 0) {
        t0 = (0x140 + t1);
        t3 = 0xC2B2FCC;
        t4 = 0x0;
        for (;;) {
            t5 = *(int *)((t0 + 0x0));
            t4 = (t4 + 0x1);
            t0 = (t0 + 0x8);
            *(unsigned int *)((t3 + 0x0)) = t5;
            t3 = (t3 + 0x4);
            if ((int)t4 > (int)(t2 - 1)) {
                break;
            }
        }
    }
    if (t2 != 79) {
        if ((unsigned int)(((t2 << 2) + 0xC2B2F7C) + 0x50) < (unsigned int)0xC2B3108) {
            t0 = (((t2 << 2) + 0xC2B2F7C) + 0x50);
            t3 = ((((t2 << 2) << 1) + (0x140 + t1)) + 0x8);
            for (;;) {
                *(unsigned int *)((t0 + 0x0)) = (*(int *)((t3 + 0x0)));
                t0 = (t0 + 0x4);
                t3 = (t3 + 0x8);
                if ((unsigned int)t0 >= (unsigned int)0xC2B3108) {
                    break;
                }
            }
        }
    }
    *(unsigned int *)0xC2B3108 = 0x0;
    *(unsigned int *)0xC2B2DDC = 0x64;
    *(unsigned int *)0xC1EC860 = 0x64;
    return 0x18C;
}

float FUN_0c086a50(int a4, int a5, int a6)
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
    register float u163;
    register float u164;
    register float u165;
    register float u166;
    register int t35;
    float u44[4];
    register int t56;
    float u66[4];
    register int t79;
    float u89[4];
    register int t102;
    float u111[4];
    register int t123;
    float u133[4];
    register int t146;
    float u156[4];

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
    t1 = t0;
    t0 = t2;
    t2 = a5;
    t3 = (a6 + 0x20);
    u0 = u5;
    u1 = u4;
    u4 = u3;
    u3 = u2;
    u2 = u14[0];
    u5 = u14[1];
    u6 = u14[2];
    for (;;) {
        *(float *)(((t3 - 0x8) + 0x0)) = u3;
        *(float *)((((t3 - 0x8) + 0x0) + 4)) = u4;
        t3 = (t3 - 0x8);
        t1 = (t1 - 0x1);
        t4 = *(int *)((t0 + 0x0));
        t0 = (t0 + 0x4);
        t5 = *(int *)((t0 + 0x0));
        t0 = (t0 + 0x4);
        if (t1 != 0) {
            if ((t4 & 1) != 0) {
                t6 = t0;
                t0 = (t0 + 0x18);
                t35 = (t6 - 8);
            } else {
                t35 = (t5 + t0);
            }
            t0 = (t0 + 0x20);
            u7 = *(float *)((t35 + 0x0));
            u8 = *(float *)(((t35 + 0x0) + 4));
            _builtin_prefetch((void *)t0);
            *(volatile float *)(((t35 + 0x8) + 0x0));
            u9 = *(float *)((((t35 + 0x8) + 0x0) + 4));
            u6 = (u6 * (1.0f / u2));
            u4 = (*(float *)(((((t35 + 0x8) + 0x8) + 0x0) + 4)));
            u3 = ((((struct o8_float *)((t35 + 0x8)))->v));
            u5 = (u5 * (1.0f / u2));
            *(float *)(((t3 - 0x8) + 0x0)) = u1;
            *(float *)((((t3 - 0x8) + 0x0) + 4)) = u0;
            t6 = t3;
            t3 = (t3 - 0x8);
            u44[0] = u8;
            u44[1] = u7;
            u44[2] = u9;
            u44[3] = 1.0f;
            _builtin_ftrv(u44, u44);
            *(float *)(((t3 - 0x8) + 0x0)) = (1.0f / u2);
            *(float *)((((t3 - 0x8) + 0x0) + 4)) = u6;
            t3 = (t3 - 0x8);
            t0 = (t0 - 32);
            *(float *)(((t3 - 0x8) + 0x0)) = u5;
            *(float *)((((t3 - 0x8) + 0x0) + 4)) = u2;
            t3 = (t3 - 0x8);
            *(unsigned int *)((t3 + 0x0)) = t6;
            u0 = (*(float *)((((((t35 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
            u1 = ((((struct o8_float *)(((t35 + 0x8) + 0x8)))->v));
            t1 = (t1 - 0x1);
            _builtin_prefetch((void *)t3);
            t3 = (t3 + 0x40);
            *(float *)(((t3 - 0x8) + 0x0)) = u3;
            *(float *)((((t3 - 0x8) + 0x0) + 4)) = u4;
            t3 = (t3 - 0x8);
            t6 = *(int *)((t0 + 0x0));
            t0 = (t0 + 0x4);
            t7 = *(int *)((t0 + 0x0));
            t0 = (t0 + 0x4);
            if (t1 != 0) {
                if ((t6 & 1) != 0) {
                    t8 = t0;
                    t0 = (t0 + 0x18);
                    t56 = (t8 - 8);
                } else {
                    t56 = (t7 + t0);
                }
                t0 = (t0 + 0x20);
                u2 = (*(float *)(((t56 + 0x0) + 4)));
                u5 = (*(float *)((t56 + 0x0)));
                _builtin_prefetch((void *)t0);
                *(volatile float *)(((t56 + 0x8) + 0x0));
                u6 = (*(float *)((((t56 + 0x8) + 0x0) + 4)));
                u4 = (*(float *)(((((t56 + 0x8) + 0x8) + 0x0) + 4)));
                u3 = ((((struct o8_float *)((t56 + 0x8)))->v));
                *(float *)(((t3 - 0x8) + 0x0)) = u1;
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = u0;
                t8 = t3;
                t3 = (t3 - 0x8);
                u66[0] = u2;
                u66[1] = u5;
                u66[2] = u6;
                u66[3] = 1.0f;
                _builtin_ftrv(u66, u66);
                u2 = u66[0];
                u5 = u66[1];
                u6 = u66[2];
                *(float *)(((t3 - 0x8) + 0x0)) = (1.0f / u44[0]);
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = (u44[2] * (1.0f / u44[0]));
                t3 = (t3 - 0x8);
                t0 = (t0 - 32);
                *(float *)(((t3 - 0x8) + 0x0)) = (u44[1] * (1.0f / u44[0]));
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = u44[0];
                t3 = (t3 - 0x8);
                t2 = (t2 + 0x40);
                *(unsigned int *)((t3 + 0x0)) = t8;
                u0 = (*(float *)((((((t56 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
                u1 = ((((struct o8_float *)(((t56 + 0x8) + 0x8)))->v));
                _builtin_prefetch((void *)t3);
                t3 = (t3 + 0x40);
                continue;
            }
            t1 = t7;
            if (((int)t6 > 0) && ((t6 & 128) != 0)) {
                t6 = *(int *)((t0 + 0x0));
                t0 = (t0 + 0x4);
                t7 = *(int *)((t0 + 0x0));
                t0 = (t0 + 0x4);
                if ((t6 & 1) != 0) {
                    t6 = t0;
                    t0 = (t0 + 0x18);
                    t79 = (t6 - 8);
                } else {
                    t79 = (t7 + t0);
                }
                t0 = (t0 + 0x20);
                u2 = (*(float *)(((t79 + 0x0) + 4)));
                u5 = (*(float *)((t79 + 0x0)));
                _builtin_prefetch((void *)t0);
                *(volatile float *)(((t79 + 0x8) + 0x0));
                u6 = (*(float *)((((t79 + 0x8) + 0x0) + 4)));
                u4 = (*(float *)(((((t79 + 0x8) + 0x8) + 0x0) + 4)));
                u3 = ((((struct o8_float *)((t79 + 0x8)))->v));
                *(float *)(((t3 - 0x8) + 0x0)) = u1;
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = u0;
                t6 = (t3 >> 1);
                t3 = (t3 - 0x8);
                u89[0] = u2;
                u89[1] = u5;
                u89[2] = u6;
                u89[3] = 1.0f;
                _builtin_ftrv(u89, u89);
                u2 = u89[0];
                u5 = u89[1];
                u6 = u89[2];
                *(float *)(((t3 - 0x8) + 0x0)) = (1.0f / u44[0]);
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = (u44[2] * (1.0f / u44[0]));
                t3 = (t3 - 0x8);
                t0 = (t0 - 32);
                *(float *)(((t3 - 0x8) + 0x0)) = (u44[1] * (1.0f / u44[0]));
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = u44[0];
                t3 = (t3 - 0x8);
                t2 = (t2 + 0x40);
                *(unsigned int *)((t3 + 0x0)) = t6;
                u0 = (*(float *)((((((t79 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
                u1 = ((((struct o8_float *)(((t79 + 0x8) + 0x8)))->v));
                _builtin_prefetch((void *)t3);
                t3 = (t3 + 0x40);
                continue;
            }
            u163 = u44[2]; u164 = (1.0f / u44[0]); u165 = u44[0]; u166 = u44[1]; break;
        }
        t1 = t5;
        if (((int)t4 > 0) && ((t4 & 128) != 0)) {
            t4 = *(int *)((t0 + 0x0));
            t0 = (t0 + 0x4);
            t5 = *(int *)((t0 + 0x0));
            t0 = (t0 + 0x4);
            if ((t4 & 1) != 0) {
                t4 = t0;
                t0 = (t0 + 0x18);
                t102 = (t4 - 8);
            } else {
                t102 = (t5 + t0);
            }
            t0 = (t0 + 0x20);
            u7 = *(float *)((t102 + 0x0));
            u8 = *(float *)(((t102 + 0x0) + 4));
            _builtin_prefetch((void *)t0);
            *(volatile float *)(((t102 + 0x8) + 0x0));
            u9 = *(float *)((((t102 + 0x8) + 0x0) + 4));
            u6 = (u6 * (1.0f / u2));
            u4 = (*(float *)(((((t102 + 0x8) + 0x8) + 0x0) + 4)));
            u3 = ((((struct o8_float *)((t102 + 0x8)))->v));
            u5 = (u5 * (1.0f / u2));
            *(float *)(((t3 - 0x8) + 0x0)) = u1;
            *(float *)((((t3 - 0x8) + 0x0) + 4)) = u0;
            t4 = (t3 >> 1);
            t3 = (t3 - 0x8);
            u111[0] = u8;
            u111[1] = u7;
            u111[2] = u9;
            u111[3] = 1.0f;
            _builtin_ftrv(u111, u111);
            *(float *)(((t3 - 0x8) + 0x0)) = (1.0f / u2);
            *(float *)((((t3 - 0x8) + 0x0) + 4)) = u6;
            t3 = (t3 - 0x8);
            t0 = (t0 - 32);
            *(float *)(((t3 - 0x8) + 0x0)) = u5;
            *(float *)((((t3 - 0x8) + 0x0) + 4)) = u2;
            t3 = (t3 - 0x8);
            *(unsigned int *)((t3 + 0x0)) = t4;
            u0 = (*(float *)((((((t102 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
            u1 = ((((struct o8_float *)(((t102 + 0x8) + 0x8)))->v));
            t1 = (t1 - 0x1);
            _builtin_prefetch((void *)t3);
            t3 = (t3 + 0x40);
            *(float *)(((t3 - 0x8) + 0x0)) = u3;
            *(float *)((((t3 - 0x8) + 0x0) + 4)) = u4;
            t3 = (t3 - 0x8);
            t4 = *(int *)((t0 + 0x0));
            t0 = (t0 + 0x4);
            t5 = *(int *)((t0 + 0x0));
            t0 = (t0 + 0x4);
            if (t1 != 0) {
                if ((t4 & 1) != 0) {
                    t6 = t0;
                    t0 = (t0 + 0x18);
                    t123 = (t6 - 8);
                } else {
                    t123 = (t5 + t0);
                }
                t0 = (t0 + 0x20);
                u2 = (*(float *)(((t123 + 0x0) + 4)));
                u5 = (*(float *)((t123 + 0x0)));
                _builtin_prefetch((void *)t0);
                *(volatile float *)(((t123 + 0x8) + 0x0));
                u6 = (*(float *)((((t123 + 0x8) + 0x0) + 4)));
                u4 = (*(float *)(((((t123 + 0x8) + 0x8) + 0x0) + 4)));
                u3 = ((((struct o8_float *)((t123 + 0x8)))->v));
                *(float *)(((t3 - 0x8) + 0x0)) = u1;
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = u0;
                t6 = t3;
                t3 = (t3 - 0x8);
                u133[0] = u2;
                u133[1] = u5;
                u133[2] = u6;
                u133[3] = 1.0f;
                _builtin_ftrv(u133, u133);
                u2 = u133[0];
                u5 = u133[1];
                u6 = u133[2];
                *(float *)(((t3 - 0x8) + 0x0)) = (1.0f / u111[0]);
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = (u111[2] * (1.0f / u111[0]));
                t3 = (t3 - 0x8);
                t0 = (t0 - 32);
                *(float *)(((t3 - 0x8) + 0x0)) = (u111[1] * (1.0f / u111[0]));
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = u111[0];
                t3 = (t3 - 0x8);
                t2 = (t2 + 0x40);
                *(unsigned int *)((t3 + 0x0)) = t6;
                u0 = (*(float *)((((((t123 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
                u1 = ((((struct o8_float *)(((t123 + 0x8) + 0x8)))->v));
                _builtin_prefetch((void *)t3);
                t3 = (t3 + 0x40);
                continue;
            }
            t1 = t5;
            if (((int)t4 > 0) && ((t4 & 128) != 0)) {
                t4 = *(int *)((t0 + 0x0));
                t0 = (t0 + 0x4);
                t5 = *(int *)((t0 + 0x0));
                t0 = (t0 + 0x4);
                if ((t4 & 1) != 0) {
                    t4 = t0;
                    t0 = (t0 + 0x18);
                    t146 = (t4 - 8);
                } else {
                    t146 = (t5 + t0);
                }
                t0 = (t0 + 0x20);
                u2 = (*(float *)(((t146 + 0x0) + 4)));
                u5 = (*(float *)((t146 + 0x0)));
                _builtin_prefetch((void *)t0);
                *(volatile float *)(((t146 + 0x8) + 0x0));
                u6 = (*(float *)((((t146 + 0x8) + 0x0) + 4)));
                u4 = (*(float *)(((((t146 + 0x8) + 0x8) + 0x0) + 4)));
                u3 = ((((struct o8_float *)((t146 + 0x8)))->v));
                *(float *)(((t3 - 0x8) + 0x0)) = u1;
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = u0;
                t4 = (t3 >> 1);
                t3 = (t3 - 0x8);
                u156[0] = u2;
                u156[1] = u5;
                u156[2] = u6;
                u156[3] = 1.0f;
                _builtin_ftrv(u156, u156);
                u2 = u156[0];
                u5 = u156[1];
                u6 = u156[2];
                *(float *)(((t3 - 0x8) + 0x0)) = (1.0f / u111[0]);
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = (u111[2] * (1.0f / u111[0]));
                t3 = (t3 - 0x8);
                t0 = (t0 - 32);
                *(float *)(((t3 - 0x8) + 0x0)) = (u111[1] * (1.0f / u111[0]));
                *(float *)((((t3 - 0x8) + 0x0) + 4)) = u111[0];
                t3 = (t3 - 0x8);
                t2 = (t2 + 0x40);
                *(unsigned int *)((t3 + 0x0)) = t4;
                u0 = (*(float *)((((((t146 + 0x8) + 0x8) + 0x8) + 0x0) + 4)));
                u1 = ((((struct o8_float *)(((t146 + 0x8) + 0x8)))->v));
                _builtin_prefetch((void *)t3);
                t3 = (t3 + 0x40);
                continue;
            }
            u163 = u111[2]; u164 = (1.0f / u111[0]); u165 = u111[0]; u166 = u111[1]; break;
        }
        u6 = (u6 * (1.0f / u2));
        u5 = (u5 * (1.0f / u2));
        *(float *)(((t3 - 0x8) + 0x0)) = u1;
        *(float *)((((t3 - 0x8) + 0x0) + 4)) = u0;
        t4 = (t3 >> 1);
        t3 = (t3 - 0x8);
        t0 = (t0 - 8);
        *(float *)(((t3 - 0x8) + 0x0)) = (1.0f / u2);
        *(float *)((((t3 - 0x8) + 0x0) + 4)) = u6;
        t3 = (t3 - 0x8);
        t2 = (t2 + 0x20);
        *(float *)(((t3 - 0x8) + 0x0)) = u5;
        *(float *)((((t3 - 0x8) + 0x0) + 4)) = u2;
        t3 = (t3 - 0x8);
        *(unsigned int *)((t3 + 0x0)) = t4;
        _builtin_prefetch((void *)t3);
        t3 = (t3 + 0x20);
        return u0;
    }
    *(float *)(((t3 - 0x8) + 0x0)) = u1;
    *(float *)((((t3 - 0x8) + 0x0) + 4)) = u0;
    *(float *)((((t3 - 0x8) - 0x8) + 0x0)) = u164;
    *(float *)(((((t3 - 0x8) - 0x8) + 0x0) + 4)) = (u163 * u164);
    *(float *)(((((t3 - 0x8) - 0x8) - 0x8) + 0x0)) = (u166 * u164);
    *(float *)((((((t3 - 0x8) - 0x8) - 0x8) + 0x0) + 4)) = u165;
    *(unsigned int *)(((((t3 - 0x8) - 0x8) - 0x8) + 0x0)) = (t3 >> 1);
    _builtin_prefetch((void *)(((t3 - 0x8) - 0x8) - 0x8));
    return u0;
}

int kmiProcessVertex_09(int a4)
{
    int stk[4];
    register int t3;
    register int t5;
    register int t31;
    int R1000;
    int R1004;
    int R1008;
    int R1012;

    R1000 = *(int *)((int)stk + 0);
    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);

    R1004 = (*(int *)((a4 + 0x0)));
    R1008 = (*(int *)((a4 + 0x4)));
    R1012 = (*(int *)((a4 + 0x8)));
    t3 = (((struct o4_int *)0xC300A6C)->v);
    R1000 = ((((struct o8_int *)0xC300A6C)->v));
    t5 = (((struct oC_int *)0xC300A6C)->v);
    (((struct o0_uint *)0xC300974)->v) = t3;
    (((struct o4_uint *)0xC300974)->v) = (R1000);
    (((struct o8_uint *)0xC300974)->v) = t5;
    (((struct oC_uint *)0xC300974)->v) = (*(int *)(((R1004) + 0x4)));
    (((struct o10_uint *)0xC300974)->v) = (*(int *)(((R1004) + 0x8)));
    (((struct o14_uint *)0xC300974)->v) = (*(int *)(((R1004) + 0xC)));
    (((struct o18_uint *)0xC300974)->v) = (*(int *)(((R1004) + 0x10)));
    (((struct o1C_uint *)0xC300974)->v) = (*(int *)(((R1008) + 0x4)));
    (((struct o20_uint *)0xC300974)->v) = (*(int *)(((R1008) + 0x8)));
    (((struct o24_uint *)0xC300974)->v) = (*(int *)(((R1008) + 0xC)));
    (((struct o28_uint *)0xC300974)->v) = (*(int *)(((R1008) + 0x10)));
    (((struct o2C_uint *)0xC300974)->v) = (*(int *)(((R1012) + 0x4)));
    (((struct o30_uint *)0xC300974)->v) = (*(int *)(((R1012) + 0x8)));
    (((struct o34_uint *)0xC300974)->v) = (*(int *)(((R1012) + 0xC)));
    (((struct o38_uint *)0xC300974)->v) = (*(int *)(((R1012) + 0x10)));
    (((struct o0_uint *)0xC300A6C)->v) = 0x3C;
    t31 = kmiBGPlaneCountWords(t3);
    kmiBGPlaneSetPCW(t31, 0x0, 0x0);
    (((struct o14_uint *)0xC300A6C)->v) = (*(int *)(((R1004) + 0xC)));
    return 0x0;
}


