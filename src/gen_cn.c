/* Straight-line functions with calls and guards (batch gen_cn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[2]; } Stk2;
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_uchar { char p[0x1C]; unsigned char v; };
struct o24_short { char p[0x24]; short v; };
struct o28_float { char p[0x28]; float v; };
struct o2A_short { char p[0x2A]; short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int FUN_0c03425e(int, int, int, int);
int FUN_0c034e28(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c03e700(void);
int FUN_0c03f154(int);
int FUN_0c052d5c(int, int, int);
int FUN_0c055440(void);
int FUN_0c055548(void);
int FUN_0c0577d4(void);
int FUN_0c057aec(int, int, int);
int FUN_0c057f3c(int);
int FUN_0c05872e(int, int);
int FUN_0c058782(int, int, int, int, int);
int FUN_0c058f64(int, int, int, int);
float FUN_0c05b422(int, float);
int FUN_0c05fab8(float, float);
extern int FUN_0c069e54();
int FUN_0c06e700(int, int, float);
int FUN_0c06eea0(int);
int FUN_0c073360(void);
int FUN_0c073a30(float, float, float);
float FUN_0c073b40(int, int);
int FUN_0c073c40(int, int, float);
int FUN_0c074f20(float);
int FUN_0c07fdc8(void);
int FUN_0c07ff00(void);
int FUN_0c08f204(int, int, int);
int FUN_0c08f3b8(int);
int FUN_0c08f470(int);
int FUN_0c08f518(int);
int FUN_0c08f824(int, int, int);
int FUN_0c08f87c(int, int);
int FUN_0c08f9c4(int, int);
int FUN_0c08f9f6(int, int);
int FUN_0c08fabc(int, int);
int FUN_0c096138(int, int);
int FUN_0c096228(int, int, int);
int FUN_0c14b704(int, int, int);
int FUN_0c14ce88(int);
int FUN_0c14e916(int);
int FUN_0c14e9a8(int, int, int);
int FUN_0c14eb7e(int);
int FUN_0c14fd82(int, int);
int FUN_0c14ff0c(int);
int FUN_0c1500d2(int, int, int);
int FUN_0c150308(int, int, int);
int FUN_0c150460(int);
int FUN_0c16c90c(int);
int Init_Result_Standard_Sprite(void);
int SJRBF_Lock(void);
int SJRBF_Unlock(int, int);
int SJUNI_Lock(void);
int SJUNI_Unlock(int, int);
int SJ_SplitChunk(int, int, int);
int Voice_ShutUp(int);
float _app_coss(float);
float _app_sins(float);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int _div64(int, int, int, int);
float _in_fmods(int, float, float);
int _mult64(int, int, int, int);
int _pd_peripheral_error(int, int, int);
int _pd_peripheral_set_id(int, int);
int _pd_peripheral_set_null(int);
int _power(int, int, int);
int _rsfts(int, int, int);
int cvFsError(int, int, int, int);
int gdFsGet1DirEnt(int, int);
int gdFsReadWG(int, int, int);
int kdGetDevice(int);
int kdGetDeviceInfo(int);
int kdSetHandler(int, int);
int kmiFBallocQueue(int, int, int, int);
int kmyConvertAddress64to32(int);
int lcdSync(int);
int memcpy(int, int, int);
int memset(int, int, int);
int nlFree(int);
int nlMalloc(int);
int nlMatrixMode(int);
int nlMultiMatrixRevOrder8(int);
int nlObjPut(int);
int nlPerspective(int, float, float, float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlSetTextureParameter(int, int);
int nlUnitMatrix(void);
int pdGetPeripheral(int);
int strlen(int);
int strncmp(int, int, int);
int vmsfs_c_init(int);
int vmsfs_init(int, int, int);
int _calcnpw(int a4, int a5, int a6, int a7);
int pdExecPeripheralServerUser(void);
void Exec_LCD(int a4, int a5, int a6, int a7);
int FUN_0c058518(void);
int FUN_0c06170e(int a4, int a5, int a6, int a7);
int vmsfs_fwrite(int a4, int a5, int a6, int a7);
int kmiFBallocEx(int a4, int a5, int a6);
int SJRBF_GetChunk(int a4, int a5, int a6, int a7);
int cvFsGetFreeSize(int a4);
int FUN_0c055318(int a4);
int nlObjPutSetGarbagedTexture_Sub(int a4, int a5, int a6);
float _in_coss(float f4);
int gdFsGetDirEnt(int a4, int a5, int a6, int a7);
int FUN_0c0360a2(int a4);
int FUN_0c05b596(int a4, int a5, int a6);
int buInit(int a4, int a5, int a6, int a7);
int kmChangeContextDSTBlendMode(int a4);
int trigger(int a4, int a5);
int FUN_0c01e772(int a4);
int FUN_0c06a754(int a4, int a5, int a6);
int FUN_0c06cc10(void);
int SJUNI_GetChunk(int a4, int a5, int a6, int a7);
int ADX_DecodeInfoSpsd(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14);
int Model_Put_Sprite3D(int a4, int a5, int a6, Stk2 s, float f4);
int FUN_0c08d87e(int a4, int a5);
int FUN_0c08f134(int a4, int a5, int a6, int a7);
int FUN_0c08f5d8(int a4, int a5, int a6, int a7);
int FUN_0c14cdfc(void);

int _calcnpw(int a4, int a5, int a6, int a7)
{
    int stk[8];
    register int t10;
    register int t12;
    register int t16;
    register int t14;
    register int t19;
    register int t20;

    *(unsigned short *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 12)) = a7;
    *(unsigned short *)(((int)stk + 16)) = 0x8;
    if ((int)a6 > 0) {
        _power(a6, ((int)stk + 0), (((int)stk + 0) + 0x14));
        _div64(((int)stk + 0), (((int)stk + 0) + 0x14), (*(short *)(((int)stk + 4))), (*(int *)(((int)stk + 8))));
    } else {
        _power((-a6), ((int)stk + 0), (((int)stk + 0) + 0x14));
        _mult64(((int)stk + 0), (((int)stk + 0) + 0x14), (*(short *)(((int)stk + 4))), (*(int *)(((int)stk + 8))));
    }
    t10 = *(short *)(((int)stk + 0));
    t12 = (int)(short)((short)(0x3F - t10) / (short)(*(short *)(((int)stk + 16))));
    FUN_0c096228((((int)stk + 0) + 0x14), 0x9, (0x42 - (short)(0x3F - t10)));
    t16 = 0x8;
    if ((int)0x8 >= (int)(short)t12) {
        t14 = 0x8;
        for (;;) {
            t14 = (short)t14;
            *(unsigned char *)(((((int)stk + 0) + 0x14) + t14)) = (*(signed char *)(((((short)t14 - (short)t12) + (((int)stk + 0) + 0x14)) + 0x0)));
            t14 = (t14 - 1);
            if ((int)(short)t14 < (int)(short)t12) {
                break;
            }
        }
        t16 = t14;
    }
    if ((int)(short)t16 >= 0) {
        t19 = t16;
        t20 = (((short)t16 + (((int)stk + 0) + 0x14)) + 0x1);
        for (;;) {
            t19 = (t19 - 1);
            *(unsigned char *)(((t20 - 0x1) + 0x0)) = 0x0;
            t20 = (t20 - 0x1);
            if ((int)(short)t19 < 0) {
                break;
            }
        }
    }
    _rsfts((((int)stk + 0) + 0x14), 0x9, ((0x3F - t10) - ((t12 << 2) << 1)));
    *(unsigned short *)(((int)stk + 0)) = 0x3F;
    FUN_0c096138((((int)stk + 0) + 0x14), 0x40);
    return (memcpy((*(int *)(((int)stk + 12))), (((int)stk + 0) + 0x14), 0x8));
}

int pdExecPeripheralServerUser(void)
{
    register int t0;
    int t1;
    register int t2;
    register int t3;
    int t4;
    register int t5;
    register int t6;
    register int t8;
    register int t9;

    t2 = 0x0;
    for (;;) {
        t4 = kdGetDevice(t2);
        t5 = kdGetDeviceInfo(t2);
        *(unsigned int *)((((t2 * 0x34) + 0xC2D0D28) + 0x30)) = t5;
        *(unsigned int *)((((t2 * 0x34) + 0xC2D0D28) + 0x2C)) = (*(int *)((((t2 * 0x34) + 0xC2D0D28) + 0x8)));
        *(unsigned int *)(((0xC2D1208 + (t2 << 2)) + 0x0)) = (_pd_peripheral_error(((t2 * 0x34) + 0xC2D0D28), t5, t4));
        t6 = (int)((int)t2 % (int)0x6);
        if (t6 == 0) {
            if ((((*(int *)((t5 + 0x0))) & 33) != 0) && ((t0 = *(signed char *)((t4 + 0x2)), t0 == 0) && (t1 = *(signed char *)((t4 + 0x4)), (unsigned char)t1 == 8))) {
                _pd_peripheral_set_id(((t2 * 0x34) + 0xC2D0D28), t5);
                t3 = (FUN_0c14b704(((t2 * 0x34) + 0xC2D0D28), t4, t2));
            } else {
                t3 = (_pd_peripheral_set_null(((t2 * 0x34) + 0xC2D0D28)));
            }
            *(unsigned int *)((((t2 * 0x34) + 0xC2D0D28) + 0xC)) = (~(*(int *)((((t2 * 0x34) + 0xC2D0D28) + 0x8))));
            if ((*(int *)0xC2D1268) == 0) {
                t4 = *(int *)((((t2 * 0x34) + 0xC2D0D28) + 0x2C));
                t8 = *(int *)((((t2 * 0x34) + 0xC2D0D28) + 0x8));
                *(unsigned int *)((((t2 * 0x34) + 0xC2D0D28) + 0x10)) = (t8 & (t4 ^ t8));
                t9 = ((t4 ^ t8) & (*(int *)((((t2 * 0x34) + 0xC2D0D28) + 0xC))));
            } else {
                t4 = *(int *)((((t2 * 0x34) + 0xC2D0D28) + 0x2C));
                t8 = *(int *)((((t2 * 0x34) + 0xC2D0D28) + 0x8));
                *(unsigned int *)((((t2 * 0x34) + 0xC2D0D28) + 0x10)) = (t8 | ((t4 ^ t8) ^ 0xFFFFFFFF));
                t9 = (((t4 ^ t8) ^ 0xFFFFFFFF) | (*(int *)((((t2 * 0x34) + 0xC2D0D28) + 0xC))));
            }
            *(unsigned int *)((((t2 * 0x34) + 0xC2D0D28) + 0x14)) = t9;
        } else {
            *(unsigned int *)((((t2 * 0x34) + 0xC2D0D28) + 0x24)) = (t5 + 0x14);
            t3 = t6;
        }
        t2 = (t2 + 0x1);
        if ((int)t2 >= (int)0x18) {
            break;
        }
    }
    return t3;
}

/* manual: the original ends in a tail branch into FUN_0c058518 (bf 0x0c058518), a function of its own. The generated C had
   inlined it and called two of its branch targets (0C05858C, 0C058594) as functions: in a build from C those run a copy of
   the original that pops FUN_0c058518's frame and stores through its r13, which the C never set up. */
void Exec_LCD(int a4, int a5, int a6, int a7)
{
    register int t2;

    if ((*(int *)0xC2B33C4) != 0) {
        return;
    }
    t2 = (((struct o0_int *)0xC2B337C)->v);
    if ((0x2 & t2) == 2) {
        return;
    }
    if ((0x4 & t2) == 4) {
        return;
    }
    FUN_0c058518();
}

int FUN_0c06170e(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t2;
    register float u31;
    int t32;

    t0 = (((struct o4_int *)0xC2B9C9C)->v);
    if (((int)t0 >= 0) && ((int)t0 < (int)0x4)) {
        t2 = ((int (*)(int, int, int, int))((*(int *)(((t0 << 2) + 0xC10E954)))))(0xC1758B4, a5, a6, a7);
    }
    if (0.0f > ((((struct o8_float *)0xC2B9C1C)->v))) {
        (((struct o8_float *)0xC2B9C1C)->v) = 0.0f;
    } else {
        if (((((struct o8_float *)0xC2B9C1C)->v)) > 3.5f) {
            (((struct o8_float *)0xC2B9C1C)->v) = 3.5f;
        }
    }
    if (((*(signed char *)0xC2B9C5B) & 32) != 0) {
        (((struct o4_float *)0xC2B9C1C)->v) = (((((struct o4_float *)0xC2B9C1C)->v)) + ((((struct o8_float *)0xC2B9C1C)->v)));
        (((struct o4_float *)0xC2B9C1C)->v) = (FUN_0c05b422((*(int *)((((((struct o0_int *)0xC2B9C1C)->v)) + 0x0))), ((((struct o4_float *)0xC2B9C1C)->v))));
        (((struct o18_float *)0xC2B9C1C)->v) = ((((struct o4_float *)0xC2B9C1C)->v));
    }
    if ((((((struct o0_int *)0xC1759D8)->v)) == 0) && ((u31 = (((struct o3C_float *)0xC1759D8)->v), 0.100000001f > u31) && (t32 = *(signed char *)0xC2B9C5B, (t32 & 32) == 0))) {
        (((struct o0_uint *)0xC2B9C9C)->v) = 0xD;
        (((struct o4_uint *)0xC2B9C9C)->v) = 0x0;
    }
    return FUN_0c05fab8(1.0f, 1.0f);
}

int vmsfs_fwrite(int a4, int a5, int a6, int a7)
{
    int stk[8];
    register int t7;
    register int t10;
    register int t18;
    register int t23;
    register int t31;

    *(unsigned int *)(((int)stk + 28)) = a4;
    *(unsigned int *)(((int)stk + 24)) = a5;
    *(unsigned int *)(((int)stk + 20)) = a6;
    if ((*(int *)(((int)stk + 28))) == 0) {
        return 0xFFFFFF00;
    }
    if ((*(signed char *)((((*(int *)(((*(int *)(((int)stk + 28))) + 0x28))) * 0x154) + 0xC2C8D2E))) == 0) {
        return 0xFFFFFF01;
    }
    t7 = *(int *)(((*(int *)(((int)stk + 28))) + 0x4));
    if (t7 != 1) {
        if (t7 != 2) {
            return 0xFFFFFF0B;
        }
        *(unsigned int *)(((int)stk + 4)) = 0xC08CCF8;
        *(unsigned int *)(((int)stk + 8)) = (*(int *)(((int)stk + 24)));
        t10 = *(int *)(((*(int *)(((int)stk + 28))) + 0x28));
        *(unsigned int *)(((int)stk + 0)) = ((t10 * 0x154) + 0xC2C8D2C);
        *(unsigned int *)((((t10 * 0x154) + 0xC2C8D2C) + 0x30)) = 0x1;
        *(unsigned int *)(((*(int *)(((int)stk + 0))) + 0x34)) = (*(int *)(((int)stk + 20)));
        *(unsigned int *)(((int)stk + 16)) = 0x0;
        for (;;) {
            if ((int)(*(int *)(((int)stk + 16))) >= (int)(*(int *)(((int)stk + 20)))) {
                return 0x0;
            }
            t18 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((int)stk + 4)))))((*(int *)(((int)stk + 28))), (*(int *)(((int)stk + 8))), a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
            *(unsigned int *)(((int)stk + 12)) = t18;
            if ((int)t18 < 0) {
                break;
            }
            *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x200);
            *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + 0x1);
        }
        return t18;
    }
    *(unsigned int *)(((int)stk + 4)) = 0xC08CB58;
    *(unsigned int *)(((int)stk + 8)) = (*(int *)(((int)stk + 24)));
    t23 = *(int *)(((*(int *)(((int)stk + 28))) + 0x28));
    *(unsigned int *)(((int)stk + 0)) = ((t23 * 0x154) + 0xC2C8D2C);
    *(unsigned int *)((((t23 * 0x154) + 0xC2C8D2C) + 0x30)) = 0x1;
    *(unsigned int *)(((*(int *)(((int)stk + 0))) + 0x34)) = (*(int *)(((int)stk + 20)));
    *(unsigned int *)(((int)stk + 16)) = 0x0;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 16))) >= (int)(*(int *)(((int)stk + 20)))) {
            return 0x0;
        }
        t31 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((int)stk + 4)))))((*(int *)(((int)stk + 28))), (*(int *)(((int)stk + 8))), a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
        *(unsigned int *)(((int)stk + 12)) = t31;
        if ((int)t31 < 0) {
            break;
        }
        *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x200);
        *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + 0x1);
    }
    return t31;
}

int kmiFBallocEx(int a4, int a5, int a6)
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
    if (((*(int *)0xC3008D4) & 4) != 0) {
        t0 = 0x0;
        if ((unsigned int)((((struct o0_int *)0xC173DFC)->v)) <= (unsigned int)((((struct o14_int *)0xC173DFC)->v))) {
            t0 = 0x1;
        }
        t2 = (kmiFBallocQueue(t0, (t1 << 1), a5, 0x8));
    } else {
        t2 = (kmiFBallocQueue(0x0, (t1 << 1), a5, 0x8));
    }
    if (t2 == 0) {
        t0 = *(int *)((a5 + 0x1C));
        *(unsigned int *)((a5 + 0x14)) = t1;
        *(unsigned int *)((a5 + 0x1C)) = (kmyConvertAddress64to32(t0));
        *(unsigned int *)((a6 + 0x14)) = t1;
        *(unsigned int *)(((a6 + 0x1C) + 0x0)) = (kmyConvertAddress64to32((t0 + 0x4)));
    }
    return t2;
}

int SJRBF_GetChunk(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t0 = SJRBF_Lock();
    if (a5 == 0) {
        t1 = *(int *)((a4 + 0x20));
        t2 = *(int *)((a4 + 0x14));
        t3 = *(int *)((a4 + 0x24));
        t4 = *(int *)((a4 + 0x10));
        t5 = ((t1 - t2) + t3);
        if ((int)t4 < (int)((t1 - t2) + t3)) {
            t5 = t4;
        }
        *(unsigned int *)((a7 + 0x4)) = t5;
        t1 = a6;
        if ((int)t5 < (int)a6) {
            t1 = t5;
        }
        *(unsigned int *)((a7 + 0x4)) = t1;
        *(unsigned int *)((a7 + 0x0)) = ((*(int *)((a4 + 0x1C))) + (*(int *)((a4 + 0x14))));
        *(unsigned int *)((a4 + 0x14)) = ((int)((int)((*(int *)((a4 + 0x14))) + (*(int *)((a7 + 0x4)))) % (int)(*(int *)((a4 + 0x20)))));
        *(unsigned int *)((a4 + 0x10)) = ((*(int *)((a4 + 0x10))) - (*(int *)((a7 + 0x4))));
    } else {
        if (a5 == 1) {
            t1 = *(int *)((a4 + 0x20));
            t2 = *(int *)((a4 + 0x18));
            t3 = *(int *)((a4 + 0x24));
            t4 = *(int *)((a4 + 0xC));
            t5 = ((t1 - t2) + t3);
            if ((int)t4 < (int)((t1 - t2) + t3)) {
                t5 = t4;
            }
            *(unsigned int *)((a7 + 0x4)) = t5;
            t1 = a6;
            if ((int)t5 < (int)a6) {
                t1 = t5;
            }
            *(unsigned int *)((a7 + 0x4)) = t1;
            *(unsigned int *)((a7 + 0x0)) = ((*(int *)((a4 + 0x1C))) + (*(int *)((a4 + 0x18))));
            *(unsigned int *)((a4 + 0x18)) = ((int)((int)((*(int *)((a4 + 0x18))) + (*(int *)((a7 + 0x4)))) % (int)(*(int *)((a4 + 0x20)))));
            *(unsigned int *)((a4 + 0xC)) = ((*(int *)((a4 + 0xC))) - (*(int *)((a7 + 0x4))));
        } else {
            *(unsigned int *)((a7 + 0x4)) = 0x0;
            *(unsigned int *)((a7 + 0x0)) = 0x0;
            if ((*(int *)((a4 + 0x28))) != 0) {
                t1 = ((int (*)(int, int, int, int))((*(int *)((a4 + 0x28)))))((*(int *)((a4 + 0x2C))), 0xFFFFFFFD, a6, a7);
            }
        }
    }
    return SJRBF_Unlock(a4, t0);
}

int cvFsGetFreeSize(int a4)
{
    int stk[9];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R7;
    register int R8;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    v0_3 = a4;
    v0_0 = (((int)stk + 0));
    v0_1 = (v0_3);
    if ((v0_3 == 0)) goto L_C16CC74;
    if (((*(signed char *)((v0_1 + 0x0))) != 0)) goto L_C16CC82;
    L_C16CC74:;
    FUN_0c16c90c(v0_0);
    if (((*(signed char *)((v0_0 + 0x0))) == 0)) goto L_C16CCA0;
    L_C16CC94:;
    v0_1 = strlen(v0_0);
    v0_2 = (v0_1);
    if (!(((int)v0_1 > 0))) goto L_C16CCA0;
    v0_4 = (0xC30B854);
    v0_1 = (0xC30B854);
    v0_3 = (0xC30B854);
    v0_5 = (0xC30BA54);
    if (((unsigned int)0xC30B854 >= (unsigned int)0xC30BA54)) goto L_C16CD10;
    goto L_C16CCD8;
    L_C16CCA0:;
    cvFsError(0xC172734, R5, R6, R7);
    L_C16CD04:;
    v0_0 = (0x0);
    L_C16CD12:;
    return v0_0;
    L_C16CCD8:;
    v0_6 = (strncmp(v0_0, (v0_1 + 0x4), v0_2)) != 0;
    if (v0_6) goto L_C16CD08;
    v0_6 = *(int *)((v0_4 + 0x0));
    v0_7 = (v0_6);
    if ((v0_6 == 0)) goto L_C16CCFE;
    if (((*(int *)((v0_7 + 0xC))) == 0)) goto L_C16CD08;
    R8 = ((((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)((v0_7 + 0xC)))))(v0_3, R5, R6, R7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24))));
    L_C16CD08:;
    v0_6 = (unsigned int)(v0_1 + 0x10) < (unsigned int)v0_5;
    v0_4 = ((v0_4 + 0x10));
    v0_1 = ((v0_1 + 0x10));
    if (v0_6) goto L_C16CCD8;
    L_C16CD10:;
    v0_0 = (R8);
    goto L_C16CD12;
    L_C16CCFE:;
    cvFsError(0xC172758, R5, R6, R7);
    v0_1 = (0xC172758);
    goto L_C16CD04;
    L_C16CC82:;
    v0_2 = strlen(v0_1);
    memcpy(v0_0, v0_1, (v0_2 + 0x1));
    goto L_C16CC94;
}

int FUN_0c055318(int a4)
{
    int t0;
    register int t1;

    nlMatrixMode(0x3);
    nlUnitMatrix();
    nlPerspective(0x1D28, 1.33333337f, 0.300000012f, 300.0f);
    nlMatrixMode(0x1);
    if ((*(int *)0xC1EC720) != 2) {
        t1 = FUN_0c03f154(0x1);
        if (t1 != 0) {
            t1 = FUN_0c03f154(0x1);
            if (t1 == 4) {
                *(unsigned int *)0xC2B1E0C = 0x1;
            } else {
                *(unsigned int *)0xC2B1E0C = 0x0;
            }
        } else {
            *(unsigned int *)0xC2B1E0C = 0x1;
        }
    } else {
        *(unsigned int *)0xC2B1E0C = 0x1;
    }
    t1 = 0xC2B3288;
    for (;;) {
        *(unsigned int *)((t1 + 0x0)) = 0x0;
        t1 = (t1 + 0x4);
        if ((unsigned int)t1 >= (unsigned int)0xC2B32B0) {
            break;
        }
    }
    t1 = ((~(((~a4) + 0x1) & 0x7)) + 0x1);
    if ((int)a4 >= 0) {
        t1 = (a4 & 0x7);
    }
    *(unsigned int *)0xC2B310C = t1;
    Init_Result_Standard_Sprite();
    FUN_0c055548();
    t1 = *(int *)0xC1EC860;
    *(unsigned int *)0xC2B31F8 = t1;
    FUN_0c052d5c(0xC2B31E8, t1, 0x3);
    if (((int)(*(int *)0xC2B31F8) < (int)0x64) && (t0 = *(int *)0xC2B1E0C, t0 != 0)) {
        FUN_0c055440();
        FUN_0c0577d4();
    }
    (((struct o0_uint *)0xC2B3274)->v) = 0x0;
    (((struct o4_uint *)0xC2B3274)->v) = 0x0;
    (((struct o8_uint *)0xC2B3274)->v) = 0x0;
    (((struct oC_uint *)0xC2B3274)->v) = 0x0;
    (((struct o10_uint *)0xC2B3274)->v) = 0x0;
    return 0xC2B3274;
}

int nlObjPutSetGarbagedTexture_Sub(int a4, int a5, int a6)
{
    int stk[3];
    register int t36;
    register int t2;
    register int t3;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t26;
    register int t17;
    register int t4;
    int t14;
    register int t15;

    *(unsigned int *)(((int)stk + 0)) = a6;
    t5 = *(int *)((a4 + 0x0));
    t36 = 0x0;
    if (((int)t5 >= 0) && (t3 = *(int *)((a4 + 0x18)), t3 != 0)) {
        *(unsigned int *)(((int)stk + 4)) = ((((a5 == 0)) ? 1 : 0) ^ 0x1);
        t2 = ((((a5 == 0)) ? 1 : 0) ^ 0x1);
        t6 = a4;
        t7 = 0x0;
        t8 = (a4 + 0x18);
        for (;;) {
            t9 = *(int *)((t8 + 0x20));
            t10 = t8;
            t8 = (t8 + 0x50);
            t26 = t9;
            if ((int)t9 >= 0) {
                t5 = (*(int *)(((int)stk + 0)));
                t17 = t9;
                if ((t5 != 0) && (t14 = *(int *)(((int)stk + 4)), t15 = (t5 == 0), t5 = t14, t5 != 0)) {
                    t5 = t9;
                    t5 = (t5 << 2);
                    t5 = (t5 << 2);
                    t5 = (t5 + a5);
                    t17 = (*(int *)((t5 + 0xC)));
                }
                t3 = 0xC2BF8E4;
                t2 = 0xC2BB3E8;
                t4 = (*(int *)((t3 + 0x0)));
                t5 = (*(int *)((t2 + 0x0)));
                t6 = (t17 + t4);
                t6 = (t6 << 2);
                t6 = (t6 << 1);
                t6 = (t6 + t5);
                t4 = (*(int *)((t6 + 0x0)));
                if (t4 == 0) {
                    t7 = 0x1;
                    t26 = 0xFFFFFFFF;
                } else {
                    t26 = (*(int *)((t6 + 0x4)));
                }
            }
            t4 = (*(int *)((t10 + 0xC)));
            t4 = (t4 & 0x7E00000);
            *(unsigned int *)(((int)stk + 8)) = t4;
            if ((int)t26 >= 0) {
                t4 = 0xC06ECD0;
                t6 = t10;
                t2 = (nlSetTextureParameter(t6, t26));
            } else {
                t4 = 0xC06EEA0;
                t6 = t10;
                t2 = (FUN_0c06eea0(t6));
            }
            t2 = 0x4C;
            t5 = (*(int *)(((int)stk + 8)));
            t4 = (*(int *)((t10 + 0xC)));
            t4 = (t4 | t5);
            *(unsigned int *)((t10 + 0xC)) = t4;
            t3 = (*(int *)((t10 + t2)));
            t8 = (t8 + t3);
            t6 = (*(int *)((t8 + 0x0)));
            if (t6 == 0) {
                break;
            }
        }
        t36 = t7;
    }
    return t36;
}

float _in_coss(float f4)
{
    int stk[2];
    register int t1;
    int t15;
    register float u18;
    register float t21;
    register int t22;
    register float u26;
    int t28;
    register float u56;
    register float u49;
    register float u42;
    register float u35;

    *(float *)(((int)stk + 4)) = f4;
    t1 = 0x0;
    if ((int)(*(int *)(((int)stk + 4))) < 0) {
        t1 = 0x8;
    }
    t15 = (t1 | 0x4);
    if (f4 == 0.0f) {
    } else {
        t15 = (t1 | 0x2);
        if (((*(int *)(((int)stk + 4))) & 0x7FFFFFFF) == 0x7F800000) {
        } else {
            t15 = t1;
            if (f4 != f4) {
                t15 = (t1 | 0x1);
            }
        }
    }
    if ((0x3 & t15) != 0) {
        return ((((struct o0_float *)0xC11851C)->v));
    }
    u18 = f4;
    if ((0x8 & t15) != 0) {
        u18 = (-f4);
    }
    t21 = _in_fmods(((int)stk + 0), u18, ((((struct o2C_float *)0xC11851C)->v)));
    t22 = *(int *)(((int)stk + 0));
    *(unsigned int *)(((int)stk + 0)) = (t22 & 0x7);
    u26 = t21;
    if (((t22 & 0x7) & 1) != 0) {
        u26 = ((*(float *)0xC118578) + t21);
    }
    t28 = *(int *)(((int)stk + 0));
    if ((t28 != 0) && (t28 != 7)) {
        if ((t28 != 1) && (t28 != 2)) {
            if ((t28 != 3) && (t28 != 4)) {
                if ((t28 != 5) && (t28 != 6)) {
                } else {
                    u35 = (_app_sins(u26));
                }
                u42 = u35;
            } else {
                u42 = (-(_app_coss(u26)));
            }
            u49 = u42;
        } else {
            u49 = (-(_app_sins(u26)));
        }
        u56 = u49;
    } else {
        u56 = (_app_coss(u26));
    }
    return u56;
}

int gdFsGetDirEnt(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t27;
    register int t3;
    register int t4;
    register int t5;
    register int t7;
    register int t12;
    register int t15;
    register int t6;
    register int t8;
    int t9;
    int t17;
    register int t23;
    int t24;
    register int t25;
    int t26;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    t27 = 0x0;
    if ((*(int *)((a6 + 0x8))) != a5) {
        *(unsigned int *)((a6 + 0x8)) = (*(int *)(((int)stk + 0)));
        t3 = *(int *)((a6 + 0x4));
        *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 4))) + 0x800);
        t4 = a7;
        t5 = (a6 + 0x10);
        t7 = 0x0;
        for (;;) {
            if ((int)t4 <= 0) {
                *(unsigned int *)((a6 + 0x0)) = t7;
                if ((t7 == t3) && ((t4 != 0) && ((t4 != 0x800) || ((t8 = *(int *)(((int)stk + 8)), (unsigned int)t6 < (unsigned int)t8) && (t9 = *(signed char *)((t6 + 0x0)), t9 != 0))))) {
                    *(unsigned int *)((a6 + 0x8)) = 0x0;
                    return 0xFFFFFFF4;
                }
                return 0x0;
            }
            t12 = gdFsReadWG((*(int *)(((int)stk + 0))), 0x1, (*(int *)(((int)stk + 4))));
            if (t12 != 0) {
                break;
            }
            t6 = (*(int *)(((int)stk + 4)));
            if ((int)t7 < (int)t3) {
                for (;;) {
                    t15 = gdFsGet1DirEnt(t6, t5);
                    if (t15 != 0) {
                        if ((t7 == 0) && (t17 = *(int *)((t5 + 0x4)), t17 != t4)) {
                            t4 = (*(int *)((t5 + 0x4)));
                        }
                        t6 = (t6 + t15);
                        t5 = (t5 + 0x2C);
                        t7 = (t7 + 0x1);
                        if (((unsigned int)t6 < (unsigned int)(*(int *)(((int)stk + 8)))) && ((int)t7 < (int)t3)) continue;
                        break;
                    }
                    break;
                }
                if ((int)t7 < (int)t3) {
                    t4 = (t4 - 0x800);
                    *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + 0x1);
                    continue;
                }
                *(unsigned int *)((a6 + 0x0)) = t7;
                if ((t7 == t3) && ((t4 != 0) && ((t4 != 0x800) || ((t23 = *(int *)(((int)stk + 8)), (unsigned int)t6 < (unsigned int)t23) && (t24 = *(signed char *)((t6 + 0x0)), t24 != 0))))) {
                    *(unsigned int *)((a6 + 0x8)) = 0x0;
                    return 0xFFFFFFF4;
                }
                return 0x0;
            }
            *(unsigned int *)((a6 + 0x0)) = t7;
            if ((t7 == t3) && ((t4 != 0) && ((t4 != 0x800) || ((t25 = *(int *)(((int)stk + 8)), (unsigned int)t6 < (unsigned int)t25) && (t26 = *(signed char *)((t6 + 0x0)), t26 != 0))))) {
                *(unsigned int *)((a6 + 0x8)) = 0x0;
                return 0xFFFFFFF4;
            }
            return 0x0;
        }
        *(unsigned int *)((a6 + 0x8)) = 0x0;
        t27 = t12;
    }
    return t27;
}

int FUN_0c0360a2(int a4)
{
    int stk[6];
    register int t0;
    register int t1;
    register int t4;
    register int t5;
    register int t25;
    register int t40;
    register int t28;
    register int t29;
    register int t36;
    register int t37;

    *(unsigned char *)(((int)stk + 4)) = 0x0;
    t0 = FUN_0c03e700();
    t1 = (((int)stk + 0) + 0x4);
    if (t0 == 1) {
        t1 = 0xC28EDA0;
    }
    t4 = *(int *)0xC2A46E0;
    *(unsigned int *)(((int)stk + 0)) = (unsigned char)(*(signed char *)((t1 + 0x0)));
    if (a4 != 0) {
        t5 = FUN_0c03425e((((t4 == 1)) ? 1 : 0), ((int)stk + 0), 0x2, 0x0);
        if (t5 == 1) {
            *(unsigned char *)((t1 + 0x0)) = (*(int *)(((int)stk + 0)));
            if ((((t4 == 1)) ? 1 : 0) == 0) {
                if ((*(int *)(((int)stk + 0))) != 0) {
                    FUN_0c057aec(0x2, 0x1, 0x0);
                } else {
                    FUN_0c057f3c(0x2);
                }
            }
        }
    }
    if ((((t4 == 1)) ? 1 : 0) == 1) {
        if (a4 != 0) {
            t40 = (FUN_0c034e28(0xA0230, 0xC0B3C28, 0x2, (*(int *)(((int)stk + 0))), *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28)));
        } else {
            t25 = FUN_0c03e700();
            if (t25 == 1) {
                t28 = 0x20220;
                t29 = (*(int *)(((int)stk + 0)));
            } else {
                t28 = 0x20240;
                t29 = (*(int *)(((int)stk + 0)));
            }
            t40 = (FUN_0c034e28(t28, 0xC0B3C28, 0x2, t29, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28)));
        }
    } else {
        if (a4 != 0) {
            t36 = 0xC0213;
            t37 = (*(int *)(((int)stk + 0)));
        } else {
            t36 = 0x40213;
            t37 = (*(int *)(((int)stk + 0)));
        }
        t40 = (FUN_0c034e28(t36, 0xC0B5250, 0x2, t37, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28)));
    }
    return t40;
}


int buInit(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t2;
    register int t5;

    t0 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    (((struct o14_uint *)0xC2C3D18)->v) = a5;
    (((struct o10_uint *)0xC2C3D18)->v) = a6;
    (((struct o0_uint *)0xC2C3D18)->v) = 0x0;
    (((struct o4_uint *)0xC2C3D18)->v) = 0x0;
    (((struct o8_uint *)0xC2C3D18)->v) = 0x0;
    (((struct oC_uint *)0xC2C3D18)->v) = 0x0;
    vmsfs_c_init(a5);
    t2 = vmsfs_init(a4, a5, a6);
    kdSetHandler((*(int *)0xC113E70), 0xC076A42);
    if ((t2 == 0) && (a7 != 0)) {
        t5 = ((int (*)(void))(a7))();
    }
    *(unsigned int *)0xC147530 = 0x1;
    _builtin_set_imask(((unsigned int)(((t0 & 0xF) << 2) << 2) >> 4));
    return t2;
}

int kmChangeContextDSTBlendMode(int a4)
{
    if ((unsigned int)a4 < (unsigned int)0xC) {
        switch ((a4 << 1)) {
            case 0:
            {
                *(unsigned int *)0xC300E00 = (((*(int *)0xC300E00) & 0x1FFFFFFF) | 0xA0000000);
                *(unsigned int *)0xC300E00 = ((0xE3FFFFFF & (*(int *)0xC300E00)) | 0x10000000);
            }
                break;
            case 2:
            {
                *(unsigned int *)0xC300E00 = (((*(int *)0xC300E00) & 0x1FFFFFFF) | 0x80000000);
                *(unsigned int *)0xC300E00 = ((0xE3FFFFFF & (*(int *)0xC300E00)) | 0x14000000);
            }
                break;
            case 4:
            {
                *(unsigned int *)0xC300E00 = ((0xE3FFFFFF & (*(int *)0xC300E00)) | 0x18000000);
            }
                break;
            case 6:
            case 10:
            {
            }
                break;
            case 8:
            {
                *(unsigned int *)0xC300E00 = ((0xE3FFFFFF & (*(int *)0xC300E00)) | 0x1C000000);
            }
                break;
            case 12:
            {
                *(unsigned int *)0xC300E00 = ((0xE3FFFFFF & (*(int *)0xC300E00)) | 0x14000000);
            }
                break;
            case 14:
            {
                *(unsigned int *)0xC300E00 = ((0xE3FFFFFF & (*(int *)0xC300E00)) | 0xC000000);
            }
                break;
            case 16:
            {
                *(unsigned int *)0xC300E00 = ((0xE3FFFFFF & (*(int *)0xC300E00)) | 0x10000000);
            }
                break;
            case 18:
            {
                *(unsigned int *)0xC300E00 = ((0xE3FFFFFF & (*(int *)0xC300E00)) | 0x8000000);
            }
                break;
            case 20:
            {
                *(unsigned int *)0xC300E00 = ((0xE3FFFFFF & (*(int *)0xC300E00)) | 0x4000000);
            }
                break;
            default:
            {
                *(unsigned int *)0xC300E00 = (0xE3FFFFFF & (*(int *)0xC300E00));
            }
                break;
        }
    }
    *(unsigned int *)0xC17413C = (*(int *)0xC300E00);
    return 0x0;
}

int trigger(int a4, int a5)
{
    int stk[2];
    register int t2;
    register int t3;
    int t4;
    register int t6;
    register int t5;
    register int t15;
    int t16;

    *(unsigned char *)(((int)stk + 0)) = (*(signed char *)(((*(int *)0xC30817C) + 0xFB0)));
    t2 = 0xFB0;
    t3 = a4;
    t4 = a5;
    t6 = 0x0;
    for (;;) {
        if ((int)t6 >= (int)0x4) {
            t2 = 0x0;
            return t2;
        }
        if ((((int)0x1 << (int)t6) & (unsigned char)(*(signed char *)(((int)stk + 0)))) != 0) {
            t3 = 0xC1713F8;
            t3 = (t3 + t6);
            *(unsigned int *)(((int)stk + 4)) = t3;
            t3 = (*(signed char *)((t3 + 0x0)));
            t3 = (unsigned char)t3;
            t2 = (kdGetDevice(t3));
            t3 = (*(int *)(((int)stk + 4)));
            t5 = t2;
            t3 = (*(signed char *)((t3 + 0x0)));
            t3 = (unsigned char)t3;
            t2 = (kdGetDeviceInfo(t3));
            t3 = t2;
            t2 = t6;
            *(unsigned char *)((0xC3027A4 + t2)) = (*(signed char *)((0xC3027A8 + t2)));
            if ((((*(int *)((t3 + 0x0))) & 0x80) != 0) && ((t15 = *(signed char *)((t5 + 0x2)), t2 = t15, t2 == 0) && (t16 = *(signed char *)((t5 + 0x4)), t2 = t16, t2 = (unsigned char)t2, t2 == 8))) {
                t3 = (*(int *)((t5 + 0x8)));
                t2 = (*(signed char *)((t3 + 0x8)));
                t2 = (t2 & 0x4);
                t3 = t2;
                t2 = t6;
                *(unsigned char *)((0xC3027A8 + t2)) = t3;
                t4 = (*(signed char *)((0xC3027A4 + t2)));
                t4 = (t4 ^ t3);
                t3 = (unsigned char)t3;
                if ((t3 == 0) && (t4 = (unsigned char)t4, t4 != 0)) {
                    break;
                }
                t6 = (t6 + 0x1);
                continue;
            }
            t6 = (t6 + 0x1);
            continue;
        }
        t6 = (t6 + 0x1);
    }
    return (t6 + 0x1);
}

int FUN_0c01e772(int a4)
{
    int stk[4];
    register int t1;
    register int t11;
    register int t2;

    *(unsigned int *)(((int)stk + 4)) = a4;
    t1 = FUN_0c14e916((*(int *)(((a4 << 2) + 0xC1ECD64))));
    t11 = 0x58764;
    if ((int)t1 >= (int)0x2) {
        t2 = *(int *)(((int)stk + 4));
        *(unsigned int *)(((int)stk + 12)) = ((t2 << 2) + 0xC1ECD64);
        FUN_0c14e9a8((*(int *)((((t2 << 2) + 0xC1ECD64) + 0x0))), ((int)stk + 0), (((int)stk + 0) + 0x8));
        t11 = (int)((float)((FUN_0c14eb7e((*(int *)(((*(int *)(((int)stk + 12))) + 0x0))))) - (*(int *)(((int)stk + 0)))) * 0.00136054424f);
    }
    return t11;
}

int FUN_0c06a754(int a4, int a5, int a6)
{
    register int t0;
    register int t10;

    t0 = *(int *)((((a4 - 35) << 2) + 0xC10E5D0));
    (((struct o0_uint *)0xC13BA6C)->v) = (*(int *)(((*(int *)((((*(int *)(((t0 << 2) + 0xC13B94C))) + (a6 << 2)) + 0x0))) + (((int)((int)(((int (*)(int, int, int))(FUN_0c069e54))(((a4 - 35) << 2), a5, a6)) % (int)(*(int *)(((*(int *)(((t0 << 2) + 0xC13B95C))) + (a6 << 2)))))) << 2))));
    Voice_ShutUp(0x2);
    t10 = FUN_0c058f64(0xC13BA6C, 0x2, (*(int *)(((t0 << 2) + 0xC11039C))), 0x0);
    if ((int)a5 > (int)0x1) {
        (((struct o18_uint *)0xC13BA6C)->v) = (*(int *)(((*(int *)(((a6 << 2) + (*(int *)((((*(int *)(((t0 << 2) + 0xC13BA4C))) + ((a5 - 2) << 2)) + 0x0)))))) + (((int)((int)(((int (*)(void))(FUN_0c069e54))()) % (int)(*(int *)(((*(int *)(((*(int *)(((t0 << 2) + 0xC13BA5C))) + ((a5 - 2) << 2)))) + (a6 << 2)))))) << 2))));
        Voice_ShutUp(0x3);
        return FUN_0c058f64(0xC13BA84, 0x3, (*(int *)(((t0 << 2) + 0xC1103AC))), 0x0);
    }
    return t10;
}



int ADX_DecodeInfoSpsd(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14)
{
    int stk[1];
    register int t4;
    register int t16;
    register int t24;

    *(unsigned short *)((a6 + 0x0)) = (((unsigned char)(*(signed char *)((a4 + 0x7))) << 2) << 2);
    *(unsigned char *)((a10 + 0x0)) = (((*(signed char *)((a4 + 0x9))) & 0x3) + 0x1);
    *(unsigned int *)((a11 + 0x0)) = (unsigned short)((((struct o2A_short *)(a4))->v));
    *(unsigned char *)(((int)stk + 0)) = (*(signed char *)((a4 + 0x8)));
    t4 = *(signed char *)(((int)stk + 0));
    if ((unsigned char)t4 != 0) {
        if ((unsigned char)t4 != 1) {
            if (((unsigned char)t4 == 2) || ((unsigned char)t4 == 3)) {
                *(unsigned char *)((a8 + 0x0)) = 0x4;
                *(unsigned char *)((a9 + 0x0)) = (*(signed char *)((a10 + 0x0)));
                *(unsigned int *)((a13 + 0x0)) = 0x2;
                *(unsigned int *)((a12 + 0x0)) = ((*(int *)(((a4 + 0xC) + 0x0))) << 1);
                *(unsigned short *)((a14 + 0x0)) = 0x2;
            }
        } else {
            *(unsigned char *)((a8 + 0x0)) = 0x8;
            *(unsigned char *)((a9 + 0x0)) = (*(signed char *)((a10 + 0x0)));
            *(unsigned int *)((a13 + 0x0)) = 0x1;
            *(unsigned int *)((a12 + 0x0)) = (*(int *)(((a4 + 0xC) + 0x0)));
            *(unsigned short *)((a14 + 0x0)) = 0x1;
        }
    } else {
        *(unsigned char *)((a8 + 0x0)) = 0x10;
        *(unsigned char *)((a9 + 0x0)) = ((*(signed char *)((a10 + 0x0))) << 1);
        *(unsigned int *)((a13 + 0x0)) = 0x1;
        t16 = *(int *)(((a4 + 0xC) + 0x0));
        *(unsigned int *)((a12 + 0x0)) = (((int)((unsigned int)((int)((unsigned int)t16 + (unsigned int)0x0)) + ((((int)0x0 > (int)t16)) ? 1u : 0u))) >> 1);
        *(unsigned short *)((a14 + 0x0)) = 0x0;
    }
    *(unsigned char *)((a9 + 0x0)) = 0x2;
    *(unsigned int *)((a13 + 0x0)) = 0x1;
    t24 = *(int *)(((a4 + 0xC) + 0x0));
    *(unsigned int *)((a12 + 0x0)) = (((int)((unsigned int)((int)((unsigned int)t24 + (unsigned int)0x0)) + ((((int)0x0 > (int)t24)) ? 1u : 0u))) >> 1);
    *(unsigned char *)((a8 + 0x0)) = 0x10;
    *(unsigned char *)((a7 + 0x0)) = 0xFFFFFFFF;
    return 0x0;
}

int Model_Put_Sprite3D(int a4, int a5, int a6, Stk2 s, float f4)
{
    int stk[14];

    stk[4] = s.w[0];
    stk[5] = s.w[1];
    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 12)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    nlMatrixMode(0x3);
    nlPushMatrix(0xC10CAB8);
    nlMatrixMode(0x2);
    FUN_0c073360();
    nlMatrixMode(0x1);
    FUN_0c073360();
    FUN_0c073a30(((float)((*(int *)(((int)stk + 4))) - 320) * 0.00100000005f), ((float)(0xF0 - (*(int *)(((int)stk + 12)))) * 0.00100000005f), -0.600000024f);
    nlRotateAY((unsigned short)(*(short *)(((((int)stk + 4) + 0x24) + 0x2))));
    nlRotateAX((unsigned short)((((struct o24_short *)(((int)stk + 4)))->v)));
    nlRotateAZ((unsigned short)(*(short *)(((((int)stk + 4) + 0x24) + 0x4))));
    nlScale(f4, f4, f4);
    nlScale((f4 * 0.00100000005f), (f4 * 0.00100000005f), (f4 * 0.00100000005f));
    FUN_0c074f20((f4 * 0.00100000005f));
    nlObjPut((*(int *)(((int)stk + 8))));
    nlPopMatrix(0x1);
    nlMatrixMode(0x2);
    nlPopMatrix(0x1);
    nlMatrixMode(0x3);
    nlPopMatrix(0x1);
    return (nlMatrixMode(0x1));
}

int FUN_0c08d87e(int a4, int a5)
{
    int stk[19];
    register int t2;
    register int t8;
    register int t10;

    (((struct o48_uint *)(((int)stk + 0)))->v) = a4;
    (((struct o44_uint *)(((int)stk + 0)))->v) = a5;
    t2 = FUN_0c08f204((*(int *)(((int)stk + 72))), (*(int *)(((int)stk + 68))), ((int)stk + 0));
    *(unsigned int *)(((int)stk + 48)) = t2;
    if ((int)t2 < 0) {
        return 0xFFFFFF05;
    }
    *(unsigned int *)(((int)stk + 44)) = (FUN_0c08f9c4((*(int *)(((int)stk + 72))), (*(int *)(((int)stk + 48)))));
    t8 = FUN_0c08fabc((*(int *)(((int)stk + 72))), (*(int *)(((int)stk + 68))));
    *(unsigned int *)(((int)stk + 60)) = t8;
    if (t8 == 0) {
        *(unsigned int *)(((int)stk + 56)) = (*(int *)(((int)stk + 12)));
        *(unsigned int *)(((int)stk + 64)) = 0x0;
        t10 = 0x0;
        for (;;) {
            if ((int)(*(int *)(((int)stk + 64))) >= (int)(*(int *)(((int)stk + 40)))) {
                break;
            }
            t10 = 0xC08F87C;
            *(unsigned int *)(((int)stk + 52)) = (unsigned short)(FUN_0c08f87c((*(int *)(((int)stk + 72))), (*(int *)(((int)stk + 56)))));
            t10 = 0xC08F824;
            FUN_0c08f824((*(int *)(((int)stk + 72))), (*(int *)(((int)stk + 56))), 0xFFFC);
            *(unsigned int *)(((int)stk + 56)) = (*(int *)(((int)stk + 52)));
            t10 = (*(int *)(((int)stk + 64)));
            t10 = (t10 + 0x1);
            *(unsigned int *)(((int)stk + 64)) = t10;
        }
    }
    memset((*(int *)(((int)stk + 44))), 0x0, 0x20);
    FUN_0c08f9f6((*(int *)(((int)stk + 72))), (*(int *)(((int)stk + 48))));
    return 0x0;
}

int FUN_0c08f134(int a4, int a5, int a6, int a7)
{
    int stk[5];
    register int t4;
    register int t9;
    register int t14;
    register int t15;
    register int t20;
    register int t37;
    register int t41;
    register int t3;

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((*(int *)(((int)stk + 4))) + 0x4)) = (unsigned char)(*(signed char *)(((*(int *)(((int)stk + 8))) + 0x0)));
    *(unsigned int *)(((int)stk + 0)) = 0x0;
    t4 = 0x0;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 0))) >= (int)0xC) {
            break;
        }
        t3 = (*(int *)(((int)stk + 4)));
        t4 = (*(int *)(((int)stk + 0)));
        t9 = ((t3 + 0x10) + t4);
        t4 = (*(int *)(((int)stk + 8)));
        t3 = (*(int *)(((int)stk + 0)));
        t3 = (t3 + t4);
        t3 = (*(signed char *)((t3 + 0x4)));
        *(unsigned char *)((t9 + 0x0)) = t3;
        t4 = (*(int *)(((int)stk + 0)));
        t4 = (t4 + 0x1);
        *(unsigned int *)(((int)stk + 0)) = t4;
    }
    (((struct o1C_uchar *)((*(int *)(((int)stk + 4)))))->v) = 0x0;
    *(unsigned int *)(((int)stk + 0)) = 0x0;
    t14 = 0x1C;
    t15 = 0x0;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 0))) >= (int)0x8) {
            break;
        }
        t14 = (*(int *)(((int)stk + 4)));
        t15 = (*(int *)(((int)stk + 0)));
        t20 = ((t14 + 0x20) + t15);
        t15 = (*(int *)(((int)stk + 8)));
        t14 = (*(int *)(((int)stk + 0)));
        t14 = (t14 + t15);
        t14 = (t14 + 0x10);
        *(unsigned char *)((t20 + 0x0)) = (*(signed char *)((t14 + 0x0)));
        t15 = (*(int *)(((int)stk + 0)));
        t15 = (t15 + 0x1);
        *(unsigned int *)(((int)stk + 0)) = t15;
    }
    *(unsigned int *)((((*(int *)(((int)stk + 4))) + 0xC) + 0x0)) = (unsigned short)(((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC2C8D28) + 0xC)))))((*(int *)(((int)stk + 8))), 0x2, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
    *(unsigned int *)((((*(int *)(((int)stk + 4))) + 0x28) + 0x0)) = (unsigned short)(((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC2C8D28) + 0xC)))))((*(int *)(((int)stk + 8))), 0x18, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
    *(unsigned char *)(((*(int *)(((int)stk + 4))) + 0xA)) = (*(signed char *)(((*(int *)(((int)stk + 8))) + 0x1)));
    t37 = *(int *)(((int)stk + 4));
    t41 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC2C8D28) + 0xC)))))((*(int *)(((int)stk + 8))), 0x1A, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    *(unsigned short *)(((t37 + 0x8) + 0x0)) = t41;
    return t41;
}

int FUN_0c08f5d8(int a4, int a5, int a6, int a7)
{
    int stk[7];
    register int t2;
    register int t4;
    register int t13;

    *(unsigned int *)(((int)stk + 20)) = a4;
    *(unsigned int *)(((int)stk + 0)) = (((*(int *)(((int)stk + 20))) * 0x154) + 0xC2C8D2C);
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    for (;;) {
        t2 = FUN_0c08f470((*(int *)(((int)stk + 20))));
        *(unsigned int *)(((int)stk + 12)) = t2;
        if (t2 != 0xFFFFFF01) {
            if (t2 != 0xFFFFFF40) {
                break;
            }
            t4 = FUN_0c08f518((*(int *)(((int)stk + 20))));
            *(unsigned int *)(((int)stk + 8)) = t4;
            if ((int)t4 < 0) {
                return 0xFFFFFF40;
            }
            *(unsigned int *)(((*(int *)(((*(int *)(((int)stk + 0))) + 0x1C))) + 0xC)) = (*(int *)(((int)stk + 8)));
            t13 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC2C8D28) + 0x10)))))((*(int *)(((*(int *)(((int)stk + 0))) + 0x20))), 0x46, (*(int *)(((int)stk + 8))), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
            *(unsigned int *)(((int)stk + 16)) = 0x0;
            for (;;) {
                if ((int)(*(int *)(((int)stk + 16))) >= (int)(*(int *)(((*(int *)(((*(int *)(((int)stk + 0))) + 0x1C))) + 0x10)))) {
                    break;
                }
                FUN_0c08f824((*(int *)(((int)stk + 20))), ((*(int *)(((*(int *)(((*(int *)(((int)stk + 0))) + 0x1C))) + 0xC))) + (*(int *)(((int)stk + 16)))), 0xFFFA);
                *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + 0x1);
            }
            *(unsigned int *)(((int)stk + 4)) = 0x1;
            continue;
        }
        return 0xFFFFFF01;
    }
    
    if ((*(int *)(((int)stk + 4))) != 0) {
        FUN_0c08f3b8((*(int *)(((int)stk + 20))));
    }
    return 0x0;
}

int FUN_0c14cdfc(void)
{
    int stk[3];

    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    *(unsigned int *)(((int)stk + 8)) = 0x0;
    v0_0 = (0x1);
    v0_1 = (0x0);
    v0_2 = (0x0);
    L_C14CE12:;
    v0_3 = FUN_0c14ce88((((int)stk + 0) + 0x4));
    v0_4 = (v0_3);
    if ((v0_3 != 0)) goto L_C14CE20;
    v0_2 = (v0_0);
    L_C14CE20:;
    if ((v0_2 != 0)) goto L_C14CE3A;
    v0_3 = *(int *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 8)) = (v0_3 + 0x1);
    if (((int)((v0_3 + 0x1) - 1) < (int)0x32)) goto L_C14CE12;
    if ((v0_2 != 0)) goto L_C14CE3A;
    v0_0 = (0xFFFFFFFF);
    L_C14CE78:;
    return v0_0;
    L_C14CE3A:;
    *(unsigned int *)(((int)stk + 8)) = v0_1;
    v0_3 = (v0_1);
    v0_4 = (0x3);
    L_C14CE40:;
    v0_2 = (v0_1);
    L_C14CE42:;
    v0_5 = (FUN_0c14ce88(((int)stk + 0))) != 0;
    if (v0_5) goto L_C14CE5C;
    v0_5 = *(int *)(((int)stk + 0));
    v0_6 = (v0_5);
    if (((*(int *)(((int)stk + 4))) == v0_5)) goto L_C14CE56;
    *(unsigned int *)(((int)stk + 4)) = v0_6;
    L_C14CE5C:;
    if ((v0_2 != 3)) goto L_C14CE64;
    v0_3 = (v0_0);
    L_C14CE64:;
    if ((v0_3 != 0)) goto L_C14CE76;
    v0_2 = *(int *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 8)) = (v0_2 + 0x1);
    if (((int)((v0_2 + 0x1) - 1) < (int)0x32)) goto L_C14CE40;
    L_C14CE76:;
    v0_0 = ((*(int *)(((int)stk + 0))));
    goto L_C14CE78;
    L_C14CE56:;
    v0_5 = (int)(v0_2 + 0x1) < (int)v0_4;
    v0_2 = ((v0_2 + 0x1));
    if (v0_5) goto L_C14CE42;
    goto L_C14CE5C;
}
