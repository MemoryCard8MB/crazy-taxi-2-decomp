/* Straight-line functions with calls and guards (batch gen_bi): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_float { char p[0x20]; float v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2C_int { char p[0x2C]; int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o3C_uint { char p[0x3C]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o48_int { char p[0x48]; int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o60_float { char p[0x60]; float v; };
struct o60_int { char p[0x60]; int v; };
struct o64_float { char p[0x64]; float v; };
struct o64_int { char p[0x64]; int v; };
struct o68_float { char p[0x68]; float v; };
struct o68_int { char p[0x68]; int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int FUN_0c027f28(int);
int FUN_0c027fbe(float, float);
int FUN_0c027fdc(float);
int FUN_0c02803a(int, int, int, int);
extern float FUN_0c02806c();
int FUN_0c02842e(int);
int FUN_0c02877a(int);
int FUN_0c032a60(int, int, int);
int FUN_0c032dd4(int, int, int);
int FUN_0c0333c0(int);
int FUN_0c03386a(int);
int FUN_0c0339c0(int);
int FUN_0c0339fc(int);
int FUN_0c034320(int, int);
int FUN_0c0343b8(int, int);
int FUN_0c0345ec(int, int, int, float, float, float);
int FUN_0c035a20(int);
int FUN_0c035a5e(int, int, float, float);
int FUN_0c03e358(int, int);
int FUN_0c03f154(int);
int FUN_0c04b586(void);
int FUN_0c04c5b0(void);
int FUN_0c0584da(void);
int FUN_0c0584e2(void);
int FUN_0c0585ca(int, int);
int FUN_0c058688(int);
int FUN_0c05b3d4(int, int);
int FUN_0c0673da(int);
int FUN_0c06e700(int, int, float);
int FUN_0c06f0d0(int, int);
int FUN_0c06f240(void);
int FUN_0c06f550(int, int, int);
int FUN_0c070730(float);
int FUN_0c070890(float);
float FUN_0c070a10(int);
int FUN_0c070e60(void);
int FUN_0c07215c(int, int, int);
int FUN_0c072230(int, int);
int FUN_0c072290(int, int);
int FUN_0c073360(void);
int FUN_0c073a30(float, float, float);
int FUN_0c073a60(int);
float FUN_0c073b40(int, int);
int FUN_0c073c40(int, int, float);
int FUN_0c073e10(int);
int FUN_0c07b5a0(void);
int FUN_0c07fdc8(void);
int FUN_0c07ffac(int);
int FUN_0c07ffbc(int, int, int);
int MultiRot4Vec(int);
int buFindFirstFile(int, int);
int buFindNextFile(int, int);
int buGetDiskFree(int, int);
int buGetFileInfo(int, int, int);
int buGetFileSize(int, int);
int buIsExistFile(int, int);
int buIsReady(int);
int colliBoxAhead(int, int, int);
int kdGetDevice(int);
int kdGetStatus(int);
int kdIsChanged(int);
int kdSetBlockWrite(int, int, int, int, int, int, int);
int kdSetGetLastError(int, int, int, int, int);
int nlAddVector(int, int);
int nlCommonTextureGetNextTextureIndex(void);
int nlCreateTextureParam(int);
int nlGetAverageVector(int, int, int, float, float);
int nlGetMatrix(int);
int nlGetMatrix33on44(int);
extern int nlLoadTextureMem();
int nlLocate(int, int);
int nlMultiMatrix(int);
int nlObjPutUseViewMatrix(int);
int nlPopMatrix(int);
int nlPrintf(int, ...);
int nlPushMatrix(int);
int nlQuickInvertMatrix(void);
int nlRotateAY(int);
int nlSearchPalette(int, int);
float nlSin(int);
int nlSpriteSetVtxContext(int, int);
int nlSubVector3op(int, int, int);
float nlTan(int);
int nl_set_cnv_proj_pers(void);
int pdGetPeripheral(int);
int pfSize(float, float);
int set_event(int, int);
int vmsfb_sleep(int, int, int, int);
int vmsio_ismount(int);
int FUN_0c0491d8(float f4);
int FUN_0c036ce4(void);
int FUN_0c06c0aa(int a4, int a5, float f4, float f5);
int vmsio_block_write(int a4, int a5, int a6);
int FUN_0c039d7e(int a4, int a5);
int FUN_0c02b910(int a4, int a5);
void FUN_0c034e28(int a4, int a5, int a6, int a7, float f4);
int nlPerspectiveX(int a4, float f4, float f5, float f6);
int FUN_0c0668c6(int a4, int a5, int a6, int a7, float f4, float f5, float f6);
int FUN_0c07a6f0(int a4, int a5, int a6, int a7);


int FUN_0c036ce4(void)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = buIsReady(((((struct oC_int *)0xC2A4F9C)->v)));
    t1 = t0;
    if (t0 == 0) {
        FUN_0c03386a(0x4);
        t1 = (FUN_0c0339fc(0x0));
    }
    if ((*(int *)0xC2A46E8) != 0) {
        return t1;
    }
    t0 = FUN_0c03f154(0x0);
    t1 = 0xC0C0264;
    if (t0 == 0) {
    } else {
        t0 = FUN_0c03f154(0x0);
        t1 = 0xC12A93A;
        if (t0 == 1) {
            t1 = 0xC0C0274;
        }
    }
    t0 = FUN_0c034320(0x1, 0x14);
    if (t0 == 1) {
        (((struct o0_uint *)0xC2A4F9C)->v) = 0x0;
        FUN_0c03386a(0x6);
        FUN_0c035a20(0x4);
    }
    if (!((((((struct o2C_int *)0xC2A469C)->v)) & 4) == 0)) {
        if ((int)((((struct o0_int *)0xC2A4F9C)->v)) <= (int)0x3) {
            FUN_0c0345ec(0x224, 0x1, 0x0, 320.0f, 196.0f, (*(float *)0xC2A5858));
            FUN_0c0345ec(0x24, 0xC, 0x0, 320.0f, 262.0f, (*(float *)0xC2A5858));
            FUN_0c0345ec(0x24, 0xD, ((((((((struct oC_int *)0xC2A4F9C)->v)) << 2) << 2) << 1) + 0xC0B6010), 320.0f, 284.0f, (*(float *)0xC2A5858));
        }
        if (((((struct o0_int *)0xC2A4F9C)->v)) == 0) {
            t0 = (((struct oC_int *)0xC2A4F9C)->v);
            FUN_0c0585ca(((((t0 >> 1) << 1) + ((t0 >> 1) << 2)) + 0x1), 0x1);
            FUN_0c0584e2();
        }
        t0 = (((struct o0_int *)0xC2A4F9C)->v);
        (((struct o0_uint *)0xC2A4F9C)->v) = (t0 + 0x1);
        if (t0 == 3) {
            t0 = FUN_0c03f154(0x0);
            if ((int)t0 <= (int)0x1) {
                t0 = (FUN_0c032dd4(((((struct oC_int *)0xC2A4F9C)->v)), t1, 0x1EA0));
            } else {
                t0 = (FUN_0c032a60(((((struct oC_int *)0xC2A4F9C)->v)), 0xC12A93A, (((*(int *)0xC2AC5DC) << 2) + 0x300)));
            }
            FUN_0c058688(0x1);
            FUN_0c0584da();
            if (t0 != 0) {
                return FUN_0c03e358(t0, 0x0);
            }
            (((struct o2C_uint *)0xC2A469C)->v) = (((((struct o2C_int *)0xC2A469C)->v)) | 0x9);
            t0 = FUN_0c03f154(0x0);
            if ((int)t0 > (int)0x1) {
                (((struct o0_uint *)0xC2A469C)->v) = (((((struct o0_int *)0xC2A469C)->v)) | 0x8);
            }
        }
    }
    t0 = FUN_0c0343b8(0x1, 0x14);
    u0 = *(float *)0xC037074;
    if (t0 == 0) {
        return FUN_0c035a5e(0x4, 0x0, 320.0f, u0);
    }
    FUN_0c035a5e(0x4, 0x1, 320.0f, u0);
    if (t0 == 1) {
        FUN_0c03386a(0x4);
        return FUN_0c0339c0(0x0);
    }
    return t0;
}


int vmsio_block_write(int a4, int a5, int a6)
{
    int stk[17];

    register int R1;
    register int R7;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    int R1008;
    R1008 = *(int *)((int)stk + 8);
    v0_0 = a4;
    v0_1 = a5;
    v0_2 = a6;
    *(unsigned int *)(((int)stk + 64)) = v0_0;
    *(unsigned int *)(((int)stk + 60)) = v0_1;
    *(unsigned int *)(((int)stk + 56)) = v0_2;
    *(unsigned int *)(((int)stk + 20)) = (((*(int *)(((int)stk + 64))) * 0x154) + 0xC2C8D2C);
    v0_3 = (vmsio_ismount((*(int *)(((int)stk + 64))))) != 0;
    if (v0_3) goto L_C092C16;
    vmsfb_sleep(v0_0, v0_1, v0_2, R7);
    return 0xFFFFFF01;
    L_C092C16:;
    v0_3 = *(int *)((((*(int *)(((int)stk + 64))) << 2) + 0xC11833C));
    *(unsigned int *)(((int)stk + 48)) = v0_3;
    *(unsigned int *)(((int)stk + 28)) = (kdGetDevice(v0_3));
    *(unsigned int *)(((int)stk + 32)) = (*(int *)(((int)stk + 56)));
    *(unsigned int *)(((int)stk + 36)) = ((((struct o48_int *)((*(int *)(((*(int *)(((int)stk + 20))) + 0x1C)))))->v));
    *(unsigned int *)(((int)stk + 52)) = 0x0;
    *(unsigned int *)(((int)stk + 40)) = 0x0;
    L_C092D44:;
    if (((int)(*(int *)(((int)stk + 52))) >= (int)((((struct o40_int *)((*(int *)(((*(int *)(((int)stk + 20))) + 0x1C)))))->v)))) goto L_C092D56;
    L_C092C44:;
    L_C092CA8:;
    v0_3 = (kdIsChanged((*(int *)(((int)stk + 48))))) == 0;
    if (v0_3) goto L_C092C72;
    return 0xFFFFFF30;
    L_C092C72:;
    v0_4 = *(int *)(((int)stk + 36));
    v0_3 = (v0_4);
    if (((int)v0_4 >= 0)) goto L_C092C7A;
    v0_3 = ((v0_3 + 0x3));
    L_C092C7A:;
    R1008 = ((v0_3 >> 1) >> 1);
    v0_4 = (*(int *)(((int)stk + 32)));
    *(int *)((int)stk + 4) = v0_4;
    v0_5 = (*(int *)(((int)stk + 60)));
    *(int *)((int)stk + 0) = v0_5;
    v0_3 = kdSetBlockWrite((*(int *)(((int)stk + 48))), 0x2, 0x0, (*(int *)(((int)stk + 40))), v0_5, v0_4, ((v0_3 >> 1) >> 1));
    *(unsigned int *)(((int)stk + 44)) = v0_3;
    if (!(((int)v0_3 < 0))) goto L_C092CC8;
    vmsfb_sleep(v0_0, v0_1, v0_2, R7);
    goto L_C092CA8;
    L_C092CC8:;
    *(volatile int *)(((int)stk + 44));
    v0_3 = (kdGetStatus((*(int *)(((int)stk + 48))))) == 0;
    if (v0_3) goto L_C092CC2;
    *(unsigned int *)(((int)stk + 28)) = (kdGetDevice((*(int *)(((int)stk + 48)))));
    v0_3 = (kdIsChanged((*(int *)(((int)stk + 48))))) == 0;
    if (v0_3) goto L_C092D04;
    return 0xFFFFFF30;
    L_C092D04:;
    *(unsigned int *)(((int)stk + 24)) = (*(int *)(((*(int *)(((int)stk + 28))) + 0x8)));
    v0_4 = *(signed char *)(((*(int *)(((int)stk + 28))) + 0x4));
    v0_3 = ((unsigned char)v0_4);
    if (((unsigned char)v0_4 == 7)) goto L_C092D1E;
    if ((v0_3 == 0xFC)) goto L_C092D22;
    return 0xFFFFFF01;
    L_C092D22:;
    goto L_C092C44;
    L_C092D1E:;
    *(unsigned int *)(((int)stk + 32)) = ((*(int *)(((int)stk + 32))) + (*(int *)(((int)stk + 36))));
    *(unsigned int *)(((int)stk + 52)) = ((*(int *)(((int)stk + 52))) + 0x1);
    *(unsigned int *)(((int)stk + 40)) = ((*(int *)(((int)stk + 40))) + 0x1);
    goto L_C092D44;
    L_C092CC2:;
    vmsfb_sleep(v0_0, v0_1, v0_2, R7);
    goto L_C092CC8;
    L_C092D56:;
    L_C092DA0:;
    v0_3 = (kdIsChanged((*(int *)(((int)stk + 48))))) == 0;
    if (v0_3) goto L_C092D7C;
    return 0xFFFFFF30;
    L_C092D7C:;
    v0_3 = (*(int *)(((int)stk + 60)));
    R1008 = v0_3;
    v0_3 = kdSetGetLastError((*(int *)(((int)stk + 48))), 0x2, 0x0, (*(int *)(((int)stk + 40))), v0_3);
    *(unsigned int *)(((int)stk + 44)) = v0_3;
    if (!(((int)v0_3 < 0))) goto L_C092DC0;
    vmsfb_sleep(v0_0, v0_1, v0_2, R7);
    goto L_C092DA0;
    L_C092DC0:;
    *(volatile int *)(((int)stk + 44));
    v0_3 = (kdGetStatus((*(int *)(((int)stk + 48))))) == 0;
    if (v0_3) goto L_C092DBA;
    *(unsigned int *)(((int)stk + 28)) = (kdGetDevice((*(int *)(((int)stk + 48)))));
    v0_3 = (kdIsChanged((*(int *)(((int)stk + 48))))) == 0;
    if (v0_3) goto L_C092DFC;
    return 0xFFFFFF30;
    L_C092DFC:;
    v0_3 = (0xC1479E0);
    if (((*(int *)0xC1479E0) == 0)) goto L_C092E28;
    v0_3 = (((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)((v0_3 + 0x0)))))((*(int *)(((int)stk + 64))), (*(int *)(((int)stk + 60))), (((int)stk + 12) + 0x7), ((int)stk + 12), *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12), *(int *)((int)stk + 12 + 16), *(int *)((int)stk + 12 + 20), *(int *)((int)stk + 12 + 24))) != 0;
    if (v0_3) goto L_C092E24;
    *(unsigned char *)(((int)stk + 19)) = (*(signed char *)(((*(int *)(((int)stk + 28))) + 0x4)));
    *(unsigned int *)(((int)stk + 12)) = (*(int *)(((*(int *)(((int)stk + 28))) + 0xC)));
    L_C092E24:;
    L_C092E34:;
    v0_4 = *(signed char *)(((int)stk + 19));
    v0_3 = ((unsigned char)v0_4);
    if (((unsigned char)v0_4 == 7)) goto L_C092E4C;
    if ((v0_3 == 0xFC)) goto L_C092E56;
    if ((v0_3 == 0xFB)) goto L_C092E5A;
    return 0xFFFFFF01;
    L_C092E5A:;
    return 0xFFFFFF40;
    L_C092E56:;
    goto L_C092D56;
    L_C092E4C:;
    return 0x0;
    L_C092E28:;
    *(unsigned char *)(((int)stk + 19)) = (*(signed char *)(((*(int *)(((int)stk + 28))) + 0x4)));
    *(unsigned int *)(((int)stk + 12)) = (*(int *)(((*(int *)(((int)stk + 28))) + 0xC)));
    goto L_C092E34;
    L_C092DBA:;
    vmsfb_sleep(v0_0, v0_1, v0_2, R7);
    goto L_C092DC0;
}



void FUN_0c034e28(int a4, int a5, int a6, int a7, float f4)
{
    register float u4;
    int t6;
    register int t11;
    register float u21;
    register float u28;
    register int t22;
    register float u23;
    register float t32;
    register float u35;
    register float u33;
    register float u53;
    register int t42;
    register int t43;
    register float u44;
    register float u45;
    register float u79;
    register float u30;
    int t41;
    register float u54;
    register float u64;
    register float u60;
    register float u82;

    if (((a5 + (a7 * 0x2C)) + 0xC) == 0) {
        return;
    }
    FUN_0c02877a(0x1);
    FUN_0c027fdc(((((struct o0_float *)0xC2A5858)->v)));
    FUN_0c027f28((0xF & a4));
    u4 = (((struct o8_float *)((a5 + (a7 * 0x2C))))->v);
    pfSize(u4, u4);
    if ((0xF0 & a4) != 0) {
        t6 = *(int *)(((((int)(0xF0 & a4) >> 4) << 2) + 0xC0B72F0));
        t11 = t6;
        if ((0x100 & a4) != 0) {
            t11 = ((((((t6 & 0xFF0000) >> 1) & 0xFF0000) | (((t6 & 0xFF00) >> 1) & 0xFF00)) | (unsigned char)((unsigned int)(unsigned char)t6 >> 1)) | (0xFF000000 & t6));
        }
        FUN_0c02803a(t11, t11, t11, t11);
    }
    u21 = *(float *)(((a5 + (a7 * 0x2C)) + 0x0));
    u28 = u21;
    if ((0x20000 & a4) == 0) {
        t22 = (((struct o8_int *)0xC2A5858)->v);
        u23 = (u21 - (float)t22);
        if ((0x40000 & a4) != 0) {
            u23 = (u21 + (float)t22);
        }
        u28 = u23;
        u30 = (float)t22;
    }
    t32 = ((float (*)(int, float))(FUN_0c02806c))(((a5 + (a7 * 0x2C)) + 0xC), u30);
    u35 = (-(t32 * 0.5f));
    if ((0x200 & a4) != 0) {
    } else {
        u33 = 0.0f;
        if ((0x400 & a4) != 0) {
            u33 = (-t32);
        }
        u35 = u33;
    }
    FUN_0c027fbe((u28 + u35), ((((struct o4_float *)((a5 + (a7 * 0x2C))))->v)));
    FUN_0c02842e(((a5 + (a7 * 0x2C)) + 0xC));
    if (((a4 & 0x80000) != 0) && (t41 = *(int *)0xC1EC83C, (t41 & 16) != 0)) {
        u53 = t32;
        if ((int)a6 > 0) {
            t42 = 0x0;
            t43 = (0x0 + ((a5 + (a7 * 0x2C)) - (a7 * 0x2C)));
            u44 = f4;
            u45 = t32;
            for (;;) {
                u44 = (((float (*)(int, float))(FUN_0c02806c))((t43 + 0xC), u44));
                t42 = (t42 + 0x1);
                if (u44 > u45) {
                    u45 = u44;
                }
                t43 = (t43 + 0x2C);
                if ((int)t42 >= (int)a6) {
                    break;
                }
            }
            u53 = u45;
            u54 = u44;
        }
        if ((int)a7 > 0) {
            if ((0x200 & a4) != 0) {
                u64 = ((((-(u53 * 0.5f))) - (((float (*)(int, float))(FUN_0c02806c))(0xC0C01F0, u54))) + -5.0f);
            } else {
                if ((0x400 & a4) != 0) {
                    u60 = ((-u53) - (((float (*)(int, float))(FUN_0c02806c))(0xC0C01F0, u54)));
                } else {
                    u60 = (-(((float (*)(int, float))(FUN_0c02806c))(0xC0C01F0, u54)));
                }
                u64 = (u60 + -5.0f);
            }
            FUN_0c027fbe((u28 + u64), ((((struct o4_float *)(((a5 + (a7 * 0x2C)) - (a7 * 0x2C))))->v)));
            FUN_0c02842e(0xC0C01F4);
        }
        if ((int)a7 < (int)(a6 - 1)) {
            if ((0x200 & a4) != 0) {
                u82 = (((u53 * 0.5f)) + 5.0f);
            } else {
                u79 = (u53 + 5.0f);
                if ((0x400 & a4) != 0) {
                    u79 = 5.0f;
                }
                u82 = u79;
            }
            FUN_0c027fbe((u28 + u82), ((((struct o4_float *)(((a5 + (a7 * 0x2C)) - (a7 * 0x2C))))->v)));
            FUN_0c02842e(0xC0C01F0);
        }
    }
    FUN_0c02877a(0x0);
}

int nlPerspectiveX(int a4, float f4, float f5, float f6)
{
    int stk[22];
    register int t0;
    register float t4;
    register int t6;
    register float u14;
    register float u15;
    register float u24;
    register int t16;
    register int t26;
    register float t27;
    register float u30;
    register float u31;
    register float u32;
    register float u35;
    register float u36;
    register float u37;
    register float t39;
    register float t42;
    register float t43;
    register float u44;
    register float t45;
    register float t47;
    register float u49;
    register float u51;
    float R1000;
    int R1004;
    float R1008;
    float R1012;
    float R1016;
    float R1020;

    R1000 = *(float *)((int)stk + 0);
    R1004 = *(int *)((int)stk + 4);
    R1008 = *(float *)((int)stk + 8);
    R1012 = *(float *)((int)stk + 12);
    R1016 = *(float *)((int)stk + 16);
    R1020 = *(float *)((int)stk + 20);

    R1004 = a4;
    R1012 = f4;
    R1000 = f6;
    t0 = R1004;
    R1008 = (1.0f / (nlTan((t0 >> 1))));
    if (((((struct oC_float *)0xC1473C8)->v)) != 0.0f) {
        t4 = nlTan((t0 >> 1));
        t6 = FUN_0c070890((t4 * (((((struct oC_float *)0xC1473C8)->v)) + 1.0f)));
        R1020 = (1.0f / (FUN_0c070a10(t6)));
    } else {
        R1020 = (1.0f / (FUN_0c070a10((t0 >> 1))));
    }
    u14 = R1008;
    u15 = R1012;
    u24 = (1.0f / (u15 * u14));
    if (((((struct o10_float *)0xC1473C8)->v)) != 0.0f) {
        t16 = FUN_0c070890((1.0f / (u15 * u14)));
        R1004 = t16;
        u24 = ((nlTan(t16)) * (((((struct o10_float *)0xC1473C8)->v)) + 1.0f));
    }
    t26 = FUN_0c070890(u24);
    t27 = FUN_0c070a10(t26);
    (((struct oC_float *)0xC1473C8)->v) = 0.0f;
    (((struct o10_float *)0xC1473C8)->v) = 0.0f;
    u30 = (u15 * u14);
    u31 = ((R1008) * (R1020));
    u32 = (u30 * (1.0f / t27));
    (((struct o0_float *)0xC1473C8)->v) = (u31 * 0.5f);
    (((struct o4_float *)0xC1473C8)->v) = (u32 * 0.5f);
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
    R1016 = (float)(FUN_0c070890((t39 / (R1012))));
    (((struct o14_float *)0xC2BFBB0)->v) = 0.0f;
    (((struct o4_float *)0xC2BFBB0)->v) = 0.0f;
    (((struct o30_float *)0xC2BFBB0)->v) = 0.0f;
    (((struct o20_float *)0xC2BFBB0)->v) = 0.0f;
    t42 = FUN_0c070a10((t0 >> 1));
    (((struct o0_float *)0xC2BFBB0)->v) = t42;
    (((struct o10_float *)0xC2BFBB0)->v) = (-t42);
    t43 = nlSin((t0 >> 1));
    (((struct o18_float *)0xC2BFBB0)->v) = t43;
    (((struct o8_float *)0xC2BFBB0)->v) = t43;
    u44 = R1016;
    R1004 = (int)u44;
    t45 = FUN_0c070a10((int)u44);
    (((struct o24_float *)0xC2BFBB0)->v) = t45;
    (((struct o34_float *)0xC2BFBB0)->v) = (-t45);
    t47 = nlSin((R1004));
    (((struct o38_float *)0xC2BFBB0)->v) = t47;
    (((struct o28_float *)0xC2BFBB0)->v) = t47;
    (((struct o1C_float *)0xC2BFBB0)->v) = 0.0f;
    (((struct oC_float *)0xC2BFBB0)->v) = 0.0f;
    (((struct o3C_float *)0xC2BFBB0)->v) = 0.0f;
    (((struct o2C_float *)0xC2BFBB0)->v) = 0.0f;
    *(float *)(((int)stk + 24)) = (R1008);
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 32)) = 0.0f;
    *(float *)(((int)stk + 36)) = 0.0f;
    *(float *)(((int)stk + 40)) = 0.0f;
    *(float *)(((int)stk + 44)) = (u15 * u14);
    *(float *)(((int)stk + 48)) = 0.0f;
    *(float *)(((int)stk + 52)) = 0.0f;
    *(float *)(((int)stk + 56)) = 0.0f;
    *(float *)(((int)stk + 60)) = 0.0f;
    u49 = R1000;
    *(float *)(((int)stk + 64)) = ((f5 + u49) / (f5 - u49));
    *(float *)(((int)stk + 68)) = -1.0f;
    *(float *)(((int)stk + 72)) = 0.0f;
    *(float *)(((int)stk + 76)) = 0.0f;
    u51 = (f5 * (R1000));
    *(float *)(((int)stk + 80)) = ((u51 * (1.0f + 1.0f)) / (f5 - u49));
    *(float *)(((int)stk + 84)) = 0.0f;
    (((struct o0_float *)0xC2C4DBC)->v) = f5;
    (((struct o4_float *)0xC2C4DBC)->v) = (R1000);
    (((struct o8_float *)0xC2C4DBC)->v) = (1.0f / f5);
    (((struct o18_float *)0xC2BF8BC)->v) = f5;
    (((struct o0_float *)0xC2BF8BC)->v) = (-f5);
    (((struct o1C_float *)0xC2BF8BC)->v) = (R1000);
    (((struct o14_float *)0xC2BF8BC)->v) = (1.0f / f5);
    nlMultiMatrix((((int)stk + 0) + 0x18));
    return (nl_set_cnv_proj_pers());
}


int FUN_0c07a6f0(int a4, int a5, int a6, int a7)
{
    int stk[2];

    register int R1;
    register int R2;
    register int R3;
    register float F10;
    register float F14;
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
    int R1004;
    R1004 = *(int *)((int)stk + 4);
    v0_2 = a4;
    v0_3 = a5;
    v0_5 = a6;
    v0_6 = a7;
    R1004 = v0_3;
    v0_3 = ((((v0_5 << 2) << 2) + v0_2));
    v0_0 = (0x0);
    v0_4 = (v0_5);
    if ((v0_6 != 1)) goto L_C07A71A;
    v0_5 = ((*(int *)((v0_3 + 0xC))));
    L_C07A71A:;
    v0_8 = *(int *)0xC2BF8E4;
    v0_7 = ((v0_5 + v0_8));
    v0_1 = ((((v0_5 + v0_8) << 2) << 1));
    v0_2 = (0xC2BB3E8);
    if (((*(int *)((((*(int *)0xC2BB3E8) + (((v0_5 + v0_8) << 2) << 1)) + 0x0))) != 0)) goto L_C07A746;
    v0_5 = *(int *)((v0_2 + 0x0));
    *(int *)((int)stk + 0) = (0x4 + (v0_5 + v0_1));
    *(unsigned int *)(((0x4 + (v0_5 + v0_1)) + 0x0)) = (nlCommonTextureGetNextTextureIndex());
    L_C07A746:;
    v0_5 = *(int *)((v0_2 + 0x0));
    *(unsigned int *)(((v0_5 + v0_1) + 0x0)) = ((*(int *)(((v0_5 + v0_1) + 0x0))) + 0x1);
    v0_8 = (((struct o4_int *)0xC2C3E2C)->v);
    v0_1 = *(int *)((((*(int *)((v0_2 + 0x0))) + v0_1) + 0x4));
    v0_5 = (((v0_1 * 0x3C) + (*(int *)0xC2BF120)));
    v0_1 = (v0_1);
    v0_2 = (((v0_7 << 1) + v0_8));
    if (((*(short *)((((v0_7 << 1) + v0_8) + 0x0))) != -1)) goto L_C07A7A0;
    v0_8 = FUN_0c07b5a0();
    v0_2 = (v0_8);
    if ((v0_8 == -1)) goto L_C07A790;
    *(unsigned short *)(((v0_7 << 1) + ((((struct o4_int *)0xC2C3E2C)->v)))) = v0_2;
    L_C07A7A2:;
    if (((*(int *)((v0_5 + 0x2C))) != 0)) goto L_C07A7BC;
    v0_3 = ((int (*)(int, int, int, int))(nlLoadTextureMem))(v0_3, v0_1, (*(int *)((v0_3 + 0x8))), v0_6);
    nlCreateTextureParam(v0_1);
    *(unsigned int *)((v0_5 + 0x38)) = v0_1;
    v0_0 = ((v0_0 | v0_3));
    L_C07A7BC:;
    *(unsigned int *)((v0_5 + 0x2C)) = ((*(int *)((v0_5 + 0x2C))) + 0x1);
    nlSpriteSetVtxContext(((((v0_2 << 2) << 2) << 1) + ((((struct o14_int *)0xC2C3E2C)->v))), v0_1);
    if (!(((R1004) != 0))) goto L_C07A94C;
    v0_1 = (((struct o14_int *)0xC2C3E2C)->v);
    v0_4 = *(int *)(((v0_4 << 2) + (R1004)));
    v0_3 = *(int *)((((((v0_2 << 2) << 2) << 1) + v0_1) + 0xC));
    *(unsigned short *)((((((v0_2 << 2) << 2) << 1) + v0_1) + 0x16)) = 0xFFFF;
    v0_5 = (v0_4);
    v0_1 = (((((v0_2 << 2) << 2) << 1) + v0_1));
    v0_2 = ((0x7 & ((unsigned int)v0_3 >> 27)));
    if (((*(int *)0xC147340) == 0)) goto L_C07A80E;
    if ((v0_2 == 5)) goto L_C07A93C;
    if ((v0_2 != 6)) goto L_C07A94C;
    goto L_C07A93C;
    L_C07A94C:;
    v0_0 = (v0_0);
    L_C07A94E:;
    return v0_0;
    L_C07A93C:;
    *(unsigned int *)((v0_1 + 0xC)) = (((*(int *)((v0_1 + 0xC))) & 0xF81FFFFF) | (v0_5 << 21));
    goto L_C07A94C;
    L_C07A80E:;
    v0_3 = (0xC2BFCC8);
    if (((*(int *)0xC2BFCC8) != 0)) goto L_C07A81A;
    goto L_C07A94C;
    L_C07A81A:;
    if ((v0_2 == 5)) goto L_C07A82A;
    if ((v0_2 == 6)) goto L_C07A82A;
    goto L_C07A94C;
    L_C07A82A:;
    if (((int)v0_5 < (int)((((struct o0_short *)0xC2C4DA4)->v)))) goto L_C07A836;
    goto L_C07A94C;
    L_C07A836:;
    *(unsigned short *)((v0_1 + 0x16)) = v0_5;
    v0_4 = (((struct o14_int *)0xC2C4DA4)->v);
    v0_3 = (((((v0_5 << 1) + v0_5) << 2) + (*(int *)((v0_3 + 0x0)))));
    v0_2 = ((v0_4 + ((v0_5 << 2) << 1)));
    if (((*(short *)(((v0_4 + ((v0_5 << 2) << 1)) + 0x4))) == 0)) goto L_C07A8C0;
    *(unsigned short *)((v0_2 + 0x4)) = ((*(short *)((v0_2 + 0x4))) + 0x1);
    v0_5 = ((*(short *)((v0_2 + 0x0))));
    L_C07A912:;
    *(unsigned int *)((v0_1 + 0xC)) = (((*(int *)((v0_1 + 0xC))) & 0xF81FFFFF) | (v0_5 << 21));
    goto L_C07A94C;
    L_C07A8C0:;
    *(unsigned char *)((v0_2 + 0x2)) = (*(signed char *)((v0_3 + 0x2)));
    *(unsigned char *)((v0_2 + 0x3)) = ((int)((*(int *)((v0_3 + 0x8))) + 0xF) >> 4);
    *(unsigned short *)((v0_2 + 0x4)) = 0x1;
    *(unsigned short *)((v0_2 + 0x6)) = v0_5;
    v0_5 = *(int *)((v0_3 + 0x8));
    v0_4 = nlSearchPalette((*(short *)((v0_3 + 0x2))), v0_5);
    v0_7 = (v0_5);
    v0_5 = (v0_4);
    if (((int)v0_4 < 0)) goto L_C07A910;
    *(unsigned short *)((v0_2 + 0x0)) = v0_5;
    FUN_0c06f0d0(v0_5, v0_7);
    FUN_0c07215c(((v0_5 << 2) << 2), (*(int *)((v0_3 + 0x4))), v0_7);
    goto L_C07A912;
    L_C07A910:;
    v0_5 = (0x0);
    goto L_C07A912;
    L_C07A790:;
    (((struct o0_uint *)0xC2C3E2C)->v) = 0x3;
    v0_0 = (0x2);
    goto L_C07A94E;
    L_C07A7A0:;
    v0_2 = ((*(short *)((v0_2 + 0x0))));
    goto L_C07A7A2;
}

int FUN_0c0491d8(float f4)
{
    register int t0;

    (((struct o4_uint *)0xC2ADEB4)->v) = 0xFFFFFFFF;
    (((struct o24_uint *)0xC2ADF4C)->v) = 0xFFFFFFFF;
    (((struct o28_uint *)0xC2ADF4C)->v) = 0xFFFFFFFF;
    t0 = *(int *)0xC1EC71C;
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                (((struct o4_uint *)0xC2ADF0C)->v) = 0x0;
                (((struct o18_uint *)0xC2ADF0C)->v) = 0x1;
                (((struct oC_uint *)0xC2ADF0C)->v) = 0x0;
                (((struct o8_uint *)0xC2ADF0C)->v) = 0x0;
                (((struct o10_uint *)0xC2ADF0C)->v) = 0x0;
                (((struct o14_uint *)0xC2ADF0C)->v) = 0x0;
                (((struct o24_uint *)0xC2ADF0C)->v) = 0x1;
                (((struct o28_uint *)0xC2ADF0C)->v) = 0x1;
                (((struct o2C_float *)0xC2ADF0C)->v) = 0.0f;
                (((struct o30_float *)0xC2ADF0C)->v) = 0.0f;
                (((struct o34_float *)0xC2ADF0C)->v) = 1.0f;
                (((struct o38_float *)0xC2ADF0C)->v) = 1.0f;
                (((struct o0_uint *)0xC2ADF0C)->v) = 0x0;
                for (;;) {
                    FUN_0c06f550(0xFF606060, 0xFF606060, 0xFF606060);
                    nlLocate(0xA, 0x1E);
                    nlPrintf(0xC10C34C);
                    nlPrintf(0xC10C358);
                    nlPrintf(0xC10C370);
                    nlPrintf(0xC10C390);
                    FUN_0c06f240();
                }
            }
            for (;;) {
                FUN_0c06f550(0xFF606060, 0xFF606060, 0xFF606060);
                nlLocate(0xA, 0x1E);
                nlPrintf(0xC10C34C);
                nlPrintf(0xC10C358);
                nlPrintf(0xC10C370);
                nlPrintf(0xC10C390);
                FUN_0c06f240();
            }
        }
        (((struct o4_uint *)0xC2ADF0C)->v) = 0xC1013C4;
        (((struct o18_uint *)0xC2ADF0C)->v) = 0xD7;
        (((struct oC_uint *)0xC2ADF0C)->v) = 0xC1308E4;
        (((struct o8_uint *)0xC2ADF0C)->v) = 0xC130844;
        (((struct o10_uint *)0xC2ADF0C)->v) = 0xC130C40;
        (((struct o14_uint *)0xC2ADF0C)->v) = 0xC130F9C;
        (((struct o24_uint *)0xC2ADF0C)->v) = 0x5;
        (((struct o28_uint *)0xC2ADF0C)->v) = 0x8;
        (((struct o2C_float *)0xC2ADF0C)->v) = -8736.86035f;
        (((struct o30_float *)0xC2ADF0C)->v) = -11384.2002f;
        (((struct o34_float *)0xC2ADF0C)->v) = 3183.53198f;
        (((struct o38_float *)0xC2ADF0C)->v) = 2761.7876f;
        (((struct o3C_uint *)0xC2ADF0C)->v) = 0xC1032FC;
        (((struct o0_uint *)0xC2ADF4C)->v) = 0xC1031FC;
        (((struct o4_uint *)0xC2ADF4C)->v) = 0x36;
        (((struct o8_uint *)0xC2ADF4C)->v) = 0x8;
        (((struct o0_uint *)0xC2ADF0C)->v) = 0x0;
        (((struct oC_uint *)0xC2ADF4C)->v) = 0xC1312F8;
        (((struct o10_uint *)0xC2ADF4C)->v) = 0xC1313D0;
        FUN_0c04c5b0();
    } else {
        (((struct o4_uint *)0xC2ADF0C)->v) = 0xC0F82E8;
        (((struct o18_uint *)0xC2ADF0C)->v) = 0xD4;
        (((struct oC_uint *)0xC2ADF0C)->v) = 0xC12FE54;
        (((struct o8_uint *)0xC2ADF0C)->v) = 0xC12FDC4;
        (((struct o10_uint *)0xC2ADF0C)->v) = 0xC1301A4;
        (((struct o14_uint *)0xC2ADF0C)->v) = 0xC1304F4;
        (((struct o24_uint *)0xC2ADF0C)->v) = 0x6;
        (((struct o28_uint *)0xC2ADF0C)->v) = 0x6;
        (((struct o2C_float *)0xC2ADF0C)->v) = -11907.4004f;
        (((struct o30_float *)0xC2ADF0C)->v) = -14630.5996f;
        (((struct o34_float *)0xC2ADF0C)->v) = 4431.4668f;
        (((struct o38_float *)0xC2ADF0C)->v) = 4202.5332f;
        (((struct o3C_uint *)0xC2ADF0C)->v) = 0x0;
        (((struct o0_uint *)0xC2ADF4C)->v) = 0x0;
        (((struct o4_uint *)0xC2ADF4C)->v) = 0x1;
        (((struct o8_uint *)0xC2ADF4C)->v) = 0x1;
        (((struct o0_uint *)0xC2ADF0C)->v) = 0x0;
        (((struct oC_uint *)0xC2ADF4C)->v) = 0x0;
        (((struct o10_uint *)0xC2ADF4C)->v) = 0x0;
    }
    (((struct o18_uint *)0xC2ADEB4)->v) = 0xFFFFFFFF;
    (((struct o14_uint *)0xC2ADEB4)->v) = 0xFFFFFFFF;
    (((struct o10_uint *)0xC2ADEB4)->v) = 0xFFFFFFFF;
    (((struct o20_uint *)0xC2ADF4C)->v) = 0xFFFFFFFF;
    (((struct o1C_uint *)0xC2ADF4C)->v) = 0xFFFFFFFF;
    (((struct o18_uint *)0xC2ADF4C)->v) = 0xFFFFFFFF;
    t0 = 0xC2ADED0;
    for (;;) {
        *(unsigned int *)((t0 + 0x0)) = 0xFFFFFFFF;
        t0 = (t0 + 0x4);
        if ((unsigned int)t0 >= (unsigned int)0xC2ADF0C) {
            break;
        }
    }
    (((struct o14_uint *)0xC2ADF4C)->v) = 0x0;
    (((struct o8_uint *)0xC2ADEB4)->v) = 0x0;
    (((struct oC_uint *)0xC2ADEB4)->v) = 0x0;
    (((struct o0_uint *)0xC2ADEB4)->v) = 0x0;
    return FUN_0c04b586();
}

