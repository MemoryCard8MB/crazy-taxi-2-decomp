/* Straight-line functions with calls and guards (batch gen_bh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_int { char p[0x20]; int v; };
struct o204_float { char p[0x204]; float v; };
struct o208_uint { char p[0x208]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2C_int { char p[0x2C]; int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o38_int { char p[0x38]; int v; };
struct o3C_int { char p[0x3C]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_float { char p[0x44]; float v; };
struct o44_int { char p[0x44]; int v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o48_int { char p[0x48]; int v; };
struct o48_short { char p[0x48]; short v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o48_ushort { char p[0x48]; unsigned short v; };
struct o4A_ushort { char p[0x4A]; unsigned short v; };
struct o4C_int { char p[0x4C]; int v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o50_ushort { char p[0x50]; unsigned short v; };
struct o52_short { char p[0x52]; short v; };
struct o52_ushort { char p[0x52]; unsigned short v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o70_uint { char p[0x70]; unsigned int v; };
struct o74_uint { char p[0x74]; unsigned int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oA0_int { char p[0xA0]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oF0_uint { char p[0xF0]; unsigned int v; };
struct oF4_uint { char p[0xF4]; unsigned int v; };
struct oF8_uint { char p[0xF8]; unsigned int v; };
int FUN_0c026c82(float, float, float);
int FUN_0c026ce6(void);
int FUN_0c027280(int);
int FUN_0c02e42a(int, int, int);
int FUN_0c031b94(int, int, int, int);
int FUN_0c031ede(int, int);
int FUN_0c031f1c(int, int, int);
int FUN_0c031f50(int, int);
int FUN_0c031f94(int, int);
int FUN_0c031fd8(int, int);
int FUN_0c032026(int, int);
int FUN_0c032436(int, int, int, int, int);
int FUN_0c03332c(int, int, int, int);
int FUN_0c04ba04(int);
int FUN_0c04ba42(int);
extern int FUN_0c052dba();
int FUN_0c058ca6(int, int);
int FUN_0c059908(int);
int FUN_0c06eea0(int);
int FUN_0c06f0d0(int, int);
int FUN_0c07215c(int, int, int);
int FUN_0c073360(void);
int FUN_0c073a60(int);
int FUN_0c073c40(int, int, float);
int FUN_0c075c60(int);
int FUN_0c076250(float, float, float);
extern int FUN_0c07ada0();
int FUN_0c07c8be(int);
int FUN_0c07ff00(void);
int FUN_0c0800c8(int, int);
int FUN_0c080770(void);
typedef struct { int w[63]; } Stk63;
int FUN_0c1675c0(Stk63 s);
int Put2DObjUp(int, float, float, float);
extern float _builtin_sqrtf(float);
int gdDecSubcode(int, int);
int gdFsGetDrvStatG(int, int, int, int);
int kdDevGetStorageInfo(int, int);
int kdGetDevice(int);
int kdGetDeviceInfo(int);
int kdGetStatus(int);
int kdIsChanged(int);
int kdRecognizeChanged(int);
int kdSetGetMediaInfo(void);
int kmiDMAtoTARequest(int, int, int, int, int);
int kmtex_TextureSize(int);
extern int memcpy();
int memset(int, int, int);
int nlAddVector(int, int);
int nlCloseEvent(int);
int nlCommonTextureGetNextTextureIndex(void);
int nlCreateTextureParam(int);
int nlLoadTextureMem(int, int, int, int);
int nlPopMatrix(int);
int nlSearchPalette(int, int);
int nlSetTextureParameter(int, int);
int syRtcGetDate(int);
int vmsfb_sleep(void);
int FUN_0c03256c(int a4, int a5, int a6, int a7);
int FUN_0c075000(int a4, int a5, int a6, int a7, int a8);
int FUN_0c02e0d6(int a4);
int vmsio_get_media_info(int a4, int a5, int a6, int a7);
int FUN_0c165fa0(void);
int FUN_0c054c7c(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8);
float FUN_0c0595b2(void);
int FUN_0c03f4bc(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9);
int FUN_0c04b73c(void);
int gdFsGetStatG(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10);
int kmiInitNTSC(void);
int FUN_0c1595e8(int a4, int a5, int a6, int a7);

int FUN_0c03256c(int a4, int a5, int a6, int a7)
{
    int stk[30];
    register int t0;
    register int t15;
    register int t16;
    register int t17;
    register int t18;
    register int t19;
    register int t29;
    register int t45;
    register int t46;
    register int t47;
    register int t48;
    register int t49;
    register int t58;
    int t73;
    register int t74;
    register int t75;
    register int t76;
    register int t77;
    register int t78;
    register int t79;
    register int t98;
    register int t116;
    register int t118;
    register int t123;
    register int t42;
    register int t109;
    register int t110;
    register int t111;
    register int t119;

    *(unsigned int *)(((int)stk + 8)) = a4;
    t0 = ((int (*)(int, int, int, int))(memcpy))(0xC28DD20, 0xC12A8EC, 0x8, a7);
    FUN_0c031ede(0xC28DD28, 0xC12A8F4);
    syRtcGetDate((((int)stk + 4) + 0x8));
    FUN_0c03332c(0xC28DDDE, 0x4, 0x3, (unsigned short)(*(short *)(((int)stk + 12))));
    FUN_0c03332c(0xC28DDE2, 0x2, 0x3, (unsigned char)(*(signed char *)(((int)stk + 14))));
    FUN_0c03332c(0xC28DDE4, 0x2, 0x3, (unsigned char)(*(signed char *)(((int)stk + 15))));
    FUN_0c03332c(0xC28DDE6, 0x2, 0x3, (unsigned char)(*(signed char *)(((int)stk + 16))));
    FUN_0c03332c(0xC28DDE8, 0x2, 0x3, (unsigned char)(*(signed char *)(((int)stk + 17))));
    t15 = FUN_0c03332c(0xC28DDEA, 0x2, 0x3, (unsigned char)(*(signed char *)(((int)stk + 18))));
    *(unsigned int *)(((int)stk + 4)) = 0xC28EDA8;
    t16 = 0xC28EDA8;
    t17 = 0xC28EDB0;
    t18 = 0xC03332C;
    t19 = 0xC28DF92;
    for (;;) {
        if ((unsigned int)t17 >= (unsigned int)(((*(int *)(((int)stk + 4))) + 0x8) + 0x1E0)) {
            break;
        }
        t18 = t17;
        t15 = (*(int *)((t18 + 0x0)));
        if (t15 != -1) {
            t15 = (FUN_0c031f1c(t19, (*(int *)((t18 + 0x0))), 0xFFFFFFFF));
            t15 = (FUN_0c031f50((t19 + 0x11), (*(int *)((t18 + 0x0)))));
            t15 = 0x1B;
            *(unsigned char *)((t19 + t15)) = 0x20;
            t15 = 0x1C;
            *(unsigned char *)((t19 + t15)) = 0x2F;
            t15 = (*(signed char *)((t18 + 0x8)));
            if ((int)t15 >= 0) {
                t15 = (t15 & 0x7);
            } else {
                t15 = (~t15);
                t15 = (t15 + 0x1);
                t15 = (t15 & 0x7);
                t15 = (~t15);
                t15 = (t15 + 0x1);
            }
            t29 = t15;
            t15 = 0xC12B728;
            t15 = (((int (*)(int, int, int))(memcpy))((t19 + 0x1D), (*(int *)(((t29 << 2) + t15))), 0x8));
            t15 = (*(signed char *)((t18 + 0x8)));
            if ((int)t15 < 0) {
                t15 = (t15 + 0x7);
            }
            t15 = (t15 >> 1);
            t15 = (t15 >> 1);
            t15 = (t15 >> 1);
            t15 = (((int (*)(int, int, int))(memcpy))((((t15 + 0x1) * 0x378) + t19), t19, 0x25));
        } else {
            t42 = t16;
        }
        t16 = t42;
        t17 = (t17 + 0x78);
        t19 = (t19 + 0x25);
    }
    t45 = t15;
    t46 = ((*(int *)(((int)stk + 4))) + 0x1E8);
    t47 = t18;
    t48 = 0xC28E026;
    for (;;) {
        t49 = *(int *)(((int)stk + 4));
        if ((unsigned int)t46 >= (unsigned int)((0x1E8 + t49) + 0x1E0)) {
            break;
        }
        t47 = t46;
        t45 = (*(int *)((t47 + 0x0)));
        if (t45 != -1) {
            t45 = (FUN_0c031f1c(t48, (*(int *)((t47 + 0x0))), 0xFFFFFFFF));
            t45 = (FUN_0c031f50((t48 + 0x11), (*(int *)((t47 + 0x0)))));
            t45 = 0x1B;
            *(unsigned char *)((t48 + t45)) = 0x20;
            t45 = 0x1C;
            *(unsigned char *)((t48 + t45)) = 0x2F;
            t45 = (*(signed char *)((t47 + 0x8)));
            if ((int)t45 >= 0) {
                t45 = (t45 & 0x7);
            } else {
                t45 = (~t45);
                t45 = (t45 + 0x1);
                t45 = (t45 & 0x7);
                t45 = (~t45);
                t45 = (t45 + 0x1);
            }
            t58 = t45;
            t45 = 0xC12B728;
            t45 = (((int (*)(int, int, int))(memcpy))((t48 + 0x1D), (*(int *)(((t58 << 2) + t45))), 0x8));
            t45 = (*(signed char *)((t47 + 0x8)));
            if ((int)t45 < 0) {
                t45 = (t45 + 0x7);
            }
            t45 = (t45 >> 1);
            t45 = (t45 >> 1);
            t45 = (t45 >> 1);
            t45 = (((int (*)(int, int, int))(memcpy))((((t45 + 0x1) * 0x378) + t48), t48, 0x25));
        }
        t46 = (t46 + 0x78);
        t48 = (t48 + 0x25);
    }
    t73 = t45;
    t74 = ((0x1E8 + t49) + 0x1E0);
    t75 = 0x1E0;
    t76 = t49;
    t77 = 0x0;
    t78 = t47;
    t79 = 0xC28E0BA;
    for (;;) {
        if ((int)t77 >= (int)0x10) {
            break;
        }
        t75 = 0x3C8;
        t78 = (*(int *)(((int)stk + 4)));
        t78 = (t78 + t75);
        t76 = (t77 * 0x3C);
        t78 = (t78 + t76);
        t73 = (*(int *)((t78 + 0x0)));
        if (t73 != -1) {
            if ((t77 != 0) && (t73 = t77, t73 != 3)) {
                if (t73 == 1) {
                    t73 = (FUN_0c031f1c(t79, (*(int *)((t78 + 0x0))), 0xFFFFFFFF));
                    t73 = (FUN_0c031fd8((t79 + 0x11), (*(int *)((t78 + 0x0)))));
                } else {
                    t73 = (FUN_0c031f1c(t79, (*(int *)((t78 + 0x0))), 0x1));
                    t73 = (FUN_0c032026((t79 + 0x11), (*(int *)((t78 + 0x0)))));
                    t73 = 0x1A;
                    *(unsigned char *)((t79 + t73)) = 0x20;
                    t73 = 0x1B;
                    *(unsigned char *)((t79 + t73)) = 0x20;
                }
            } else {
                t73 = (FUN_0c031f1c(t79, (*(int *)((t78 + 0x0))), 0xFFFFFFFF));
                t73 = (FUN_0c031f94((t79 + 0x11), (*(int *)((t78 + 0x0)))));
                t73 = 0x1B;
                *(unsigned char *)((t79 + t73)) = 0x20;
            }
            t73 = 0x1C;
            *(unsigned char *)((t79 + t73)) = 0x2F;
            t73 = (*(signed char *)((t78 + 0x8)));
            if ((int)t73 >= 0) {
                t73 = (t73 & 0x7);
            } else {
                t73 = (~t73);
                t73 = (t73 + 0x1);
                t73 = (t73 & 0x7);
                t73 = (~t73);
                t73 = (t73 + 0x1);
            }
            t98 = t73;
            t73 = 0xC12B728;
            t73 = (((int (*)(int, int, int))(memcpy))((t79 + 0x1D), (*(int *)(((t98 << 2) + t73))), 0x8));
            t73 = (*(signed char *)((t78 + 0x8)));
            if ((int)t73 < 0) {
                t73 = (t73 + 0x7);
            }
            t73 = (t73 >> 1);
            t73 = (t73 >> 1);
            t73 = (t73 >> 1);
            t73 = (((int (*)(int, int, int))(memcpy))((((t73 + 0x1) * 0x378) + t79), t79, 0x25));
        } else {
            t109 = t74;
            t110 = t75;
            t111 = t76;
        }
        t74 = t109;
        t75 = t110;
        t76 = t111;
        t77 = (t77 + 0x1);
        t79 = (t79 + 0x25);
    }
    FUN_0c031b94(0x0, 0xC28ED78, 0xF38, 0xC28FCB0);
    t116 = 0xC28DD0C;
    t118 = 0xC293344;
    for (;;) { t119 = *(int *)t116; t116 = (t116 + 4); if ((unsigned int)((0xC28DD0C + 8104)) < (unsigned int)t116) break; *(unsigned int *)t118 = t119; t118 = (t118 + 4); }
    memset((((int)stk + 4) + 0x14), 0x0, 0x60);
    FUN_0c0800c8((((int)stk + 4) + 0x14), 0xC12A900);
    FUN_0c0800c8((((int)stk + 4) + 0x26), 0xC12A910);
    t123 = ((int (*)(int, int, int))(memcpy))((((int)stk + 4) + 0x48), 0xC12A92A, 0x10);
    *(unsigned int *)(((int)stk + 92)) = 0xC12AA35;
    *(unsigned int *)(((int)stk + 96)) = 0xC12AA55;
    *(unsigned short *)(((int)stk + 100)) = 0x3;
    *(unsigned short *)(((int)stk + 102)) = 0x4;
    *(unsigned int *)(((int)stk + 104)) = 0x0;
    *(unsigned short *)(((int)stk + 108)) = 0x0;
    *(unsigned int *)(((int)stk + 112)) = 0xC293344;
    *(unsigned int *)(((int)stk + 116)) = 0x1FA8;
    *(int *)((int)stk + 0) = 0xC290B3C;
    return (FUN_0c032436((*(int *)(((int)stk + 8))), 0xC0B33CC, (((int)stk + 0) + 0x18), 0x14, 0xC290B3C));
}

int FUN_0c075000(int a4, int a5, int a6, int a7, int a8)
{
    int stk[5];

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
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    v0_7 = a4;
    v0_5 = a5;
    v0_6 = a6;
    v0_0 = a7;
    *(unsigned int *)(((int)stk + 12)) = v0_5;
    *(unsigned int *)(((int)stk + 8)) = 0x0;
    *(unsigned int *)(((int)stk + 16)) = 0x0;
    *(unsigned int *)((v0_0 + 0x0)) = 0x0;
    v0_1 = (v0_0);
    v0_2 = (0x0);
    if ((v0_6 != 0)) goto L_C075050;
    if (((int)(*(int *)((v0_7 + 0x0))) < 0)) goto L_C075030;
    if (((*(int *)((v0_7 + 0x18))) != 0)) goto L_C075040;
    L_C075030:;
    v0_0 = (0x0);
    L_C07529E:;
    return v0_0;
    L_C075040:;
    v0_3 = ((v0_7 + 0x18));
    L_C075052:;
    v0_7 = *(int *)((v0_3 + 0x20));
    v0_4 = v0_3;
    v0_5 = (v0_7);
    v0_3 = ((v0_3 + 0x50));
    v0_6 = (v0_7);
    v0_4 = v0_4;
    if (((int)v0_7 < 0)) goto L_C0750F2;
    if ((a8 != 1)) goto L_C075070;
    v0_6 = ((*(int *)(((((v0_6 << 2) << 2) + (*(int *)(((int)stk + 12)))) + 0xC))));
    L_C075070:;
    v0_8 = *(int *)0xC2BF8E4;
    *(unsigned int *)(((int)stk + 4)) = (((v0_6 + v0_8) << 2) << 1);
    v0_7 = (0xC2BB3E8);
    if (((*(int *)((((((v0_6 + v0_8) << 2) << 1) + (*(int *)0xC2BB3E8)) + 0x0))) != 0)) goto L_C07509E;
    v0_6 = *(int *)(((int)stk + 4));
    v0_8 = *(int *)((v0_7 + 0x0));
    *(int *)((int)stk + 0) = (0x4 + (v0_6 + v0_8));
    *(unsigned int *)(((0x4 + (v0_6 + v0_8)) + 0x0)) = (nlCommonTextureGetNextTextureIndex());
    L_C07509E:;
    v0_6 = *(int *)(((int)stk + 4));
    v0_8 = *(int *)((v0_7 + 0x0));
    *(unsigned int *)(((v0_6 + v0_8) + 0x0)) = ((*(int *)(((v0_6 + v0_8) + 0x0))) + 0x1);
    v0_8 = *(int *)((((*(int *)(((int)stk + 4))) + (*(int *)((v0_7 + 0x0)))) + 0x4));
    v0_9 = *(int *)0xC2BF120;
    v0_7 = (((v0_8 * 0x3C) + v0_9));
    v0_6 = (v0_8);
    if (((*(int *)((((v0_8 * 0x3C) + v0_9) + 0x2C))) != 0)) goto L_C0750EC;
    v0_8 = *(int *)(((int)stk + 12));
    *(unsigned int *)(((int)stk + 8)) = (((v0_5 << 2) << 2) + v0_8);
    *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) | (nlLoadTextureMem((((v0_5 << 2) << 2) + v0_8), v0_6, (*(int *)(((((v0_5 << 2) << 2) + v0_8) + 0x8))), v0_0)));
    nlCreateTextureParam(v0_6);
    *(unsigned int *)((v0_7 + 0x38)) = v0_6;
    *(unsigned int *)(((int)stk + 8)) = 0x1;
    L_C0750EC:;
    *(unsigned int *)((v0_7 + 0x2C)) = ((*(int *)((v0_7 + 0x2C))) + 0x1);
    L_C0750F2:;
    if (((int)v0_5 >= 0)) goto L_C075104;
    *(unsigned int *)((v0_4 + 0x0)) = ((*(int *)((v0_4 + 0x0))) | 0x1);
    *(unsigned int *)((v0_4 + 0x4)) = ((*(int *)((v0_4 + 0x4))) | 0x400000);
    L_C075104:;
    *(unsigned int *)((v0_4 + 0x0)) = (((*(int *)((v0_4 + 0x0))) & 0xFFFCFFFF) | ((((((struct o8_int *)0xC147340)->v)) << 16) | 0x8C0000));
    if (((int)v0_6 < 0)) goto L_C075130;
    nlSetTextureParameter(v0_4, v0_6);
    L_C075136:;
    v0_7 = (0x7);
    if ((((((struct o0_int *)0xC147340)->v)) == 0)) goto L_C075144;
    v0_5 = *(int *)((v0_4 + 0xC));
    v0_6 = (v0_7 & ((unsigned int)v0_5 >> 27)) == 5;
    v0_7 = ((v0_7 & ((unsigned int)v0_5 >> 27)));
    if (v0_6) goto L_C075264;
    if ((v0_7 != 6)) goto L_C075274;
    L_C075264:;
    *(unsigned int *)((v0_4 + 0xC)) = (((*(int *)((v0_4 + 0xC))) & 0xF81FFFFF) | ((*(int *)((v0_4 + 0x3C))) << 21));
    L_C075274:;
    FUN_0c080770();
    v0_5 = (((struct o4C_int *)(v0_4))->v);
    v0_4 = *(int *)(((v0_3 + v0_5) + 0x0));
    v0_3 = ((v0_3 + v0_5));
    v0_7 = (v0_4);
    if ((v0_4 != 0)) goto L_C075290;
    *(unsigned int *)((v0_1 + 0x0)) = v0_2;
    L_C07529C:;
    v0_0 = ((*(int *)(((int)stk + 16))));
    goto L_C07529E;
    L_C075290:;
    if (((*(int *)(((int)stk + 8))) != 0)) goto L_C07529A;
    goto L_C075052;
    L_C07529A:;
    *(unsigned int *)((v0_1 + 0x0)) = v0_3;
    goto L_C07529C;
    L_C075144:;
    v0_6 = *(int *)0xC2BFCC8;
    v0_7 = ((v0_7 & ((unsigned int)(*(int *)((v0_4 + 0xC))) >> 27)));
    v0_5 = (v0_6);
    if ((v0_6 != 0)) goto L_C075158;
    goto L_C075274;
    L_C075158:;
    if ((v0_7 == 5)) goto L_C075168;
    if ((v0_7 == 6)) goto L_C075168;
    goto L_C075274;
    L_C075168:;
    v0_8 = *(int *)((v0_4 + 0x3C));
    v0_7 = (v0_8);
    v0_6 = (0xC2C4DA0);
    if (((int)v0_8 < (int)(*(short *)0xC2C4DA4))) goto L_C075176;
    goto L_C075274;
    L_C075176:;
    v0_8 = *(int *)((v0_6 + 0x18));
    v0_5 = (((((v0_7 << 1) + v0_7) << 2) + v0_5));
    v0_6 = ((v0_8 + ((v0_7 << 2) << 1)));
    if (((*(short *)(((v0_8 + ((v0_7 << 2) << 1)) + 0x4))) == 0)) goto L_C0751A0;
    *(unsigned short *)((v0_6 + 0x4)) = ((*(short *)((v0_6 + 0x4))) + 0x1);
    v0_7 = ((*(short *)((v0_6 + 0x0))));
    L_C0751F2:;
    *(unsigned int *)((v0_4 + 0xC)) = (((*(int *)((v0_4 + 0xC))) & 0xF81FFFFF) | (v0_7 << 21));
    goto L_C075274;
    L_C0751A0:;
    *(unsigned char *)((v0_6 + 0x2)) = (*(signed char *)((v0_5 + 0x2)));
    *(unsigned char *)((v0_6 + 0x3)) = ((int)((*(int *)((v0_5 + 0x8))) + 0xF) >> 4);
    *(unsigned short *)((v0_6 + 0x4)) = 0x1;
    *(unsigned short *)((v0_6 + 0x6)) = v0_7;
    v0_7 = *(int *)((v0_5 + 0x8));
    *(unsigned int *)(((int)stk + 4)) = v0_7;
    v0_8 = nlSearchPalette((*(short *)((v0_5 + 0x2))), v0_7);
    v0_7 = (v0_8);
    if (((int)v0_8 < 0)) goto L_C0751F0;
    *(unsigned short *)((v0_6 + 0x0)) = v0_7;
    FUN_0c06f0d0(v0_7, (*(int *)(((int)stk + 4))));
    FUN_0c07215c(((v0_7 << 2) << 2), (*(int *)((v0_5 + 0x4))), (*(int *)(((int)stk + 4))));
    goto L_C0751F2;
    L_C0751F0:;
    v0_7 = (v0_2);
    goto L_C0751F2;
    L_C075130:;
    FUN_0c06eea0(v0_4);
    goto L_C075136;
    L_C075050:;
    v0_3 = (v0_6);
    goto L_C075052;
}

int FUN_0c02e0d6(int a4)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(int *)((((*(int *)((a4 + 0x34))) << 2) + 0xC1295E4));
    (((struct o44_float *)(t0))->v) = ((float)(*(int *)((a4 + 0x30))) * 0.0333333351f);
    FUN_0c073360();
    FUN_0c073a60((a4 + 0x14));
    if ((*(int *)((a4 + 0x38))) == 2) {
        FUN_0c026c82(0.800000012f, 0.600000024f, 0.300000012f);
        u0 = (((struct o2C_float *)(a4))->v);
        Put2DObjUp(t0, u0, (u0 * 0.699999988f), 4.0f);
        FUN_0c026ce6();
    } else {
        if ((*(int *)((a4 + 0x38))) == 1) {
            FUN_0c076250(0.800000012f, 0.800000012f, 1.0f);
            u0 = (((struct o2C_float *)(a4))->v);
            Put2DObjUp(t0, u0, (u0 * 0.699999988f), 4.0f);
            FUN_0c026ce6();
        } else {
            t1 = *(int *)((a4 + 0x38));
            if (t1 == 3) {
                FUN_0c076250(1.0f, 0.899999976f, 0.899999976f);
                (((struct o44_float *)(t0))->v) = ((float)(*(int *)((a4 + 0x30))) * 0.0500000007f);
                u0 = (((struct o2C_float *)(a4))->v);
                Put2DObjUp(t0, (u0 * 1.20000005f), (u0 * 0.560000002f), (1.0f + 1.0f));
                nlAddVector((a4 + 0x14), 0xC1759B4);
                FUN_0c026ce6();
                nlAddVector((a4 + 0x14), (a4 + 0x20));
                (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) * 0.949999988f);
                (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) * 0.949999988f);
                (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) + 0.0500000007f);
            } else {
                if (t1 == 4) {
                    FUN_0c076250(1.0f, 0.899999976f, 0.899999976f);
                    (((struct o44_float *)(t0))->v) = ((float)(*(int *)((a4 + 0x30))) * 0.0500000007f);
                    u0 = (((struct o2C_float *)(a4))->v);
                    Put2DObjUp(t0, (u0 * 0.800000012f), (u0 * 0.840000033f), (1.0f + 1.0f));
                    FUN_0c026ce6();
                } else {
                    u0 = (((struct o2C_float *)(a4))->v);
                    Put2DObjUp(t0, u0, (u0 * 0.600000024f), 4.0f);
                }
            }
        }
    }
    nlPopMatrix(0x1);
    t0 = *(int *)((a4 + 0x30));
    *(unsigned int *)((a4 + 0x30)) = (t0 - 1);
    if ((int)(t0 - 1) <= 0) {
        return nlCloseEvent(a4);
    }
    if ((*(int *)((a4 + 0x38))) != 3) {
        nlAddVector((a4 + 0x14), (a4 + 0x20));
        FUN_0c073c40((a4 + 0x20), (a4 + 0x20), 0.949999988f);
        (((struct o18_float *)(a4))->v) = (((((struct o18_float *)(a4))->v)) + 0.0500000007f);
    }
    u0 = 0.0900000036f;
    if ((*(int *)((a4 + 0x38))) == 0) {
        u0 = 0.0799999982f;
    }
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + u0);
    return 0x2C;
}

int vmsio_get_media_info(int a4, int a5, int a6, int a7)
{
    int stk[10];
    register int t1;
    register int t18;
    register int t22;
    register int t27;
    register int t31;
    register int t91;
    register int t92;

    *(unsigned int *)(((int)stk + 36)) = a4;
    *(unsigned int *)(((int)stk + 32)) = a5;
    t1 = *(int *)((((*(int *)(((int)stk + 36))) << 2) + 0xC11833C));
    *(unsigned int *)(((int)stk + 28)) = t1;
    *(unsigned int *)(((int)stk + 20)) = (kdGetDevice(t1));
    *(unsigned int *)(((int)stk + 16)) = (kdGetDeviceInfo((*(int *)(((int)stk + 28)))));
    if ((*(signed char *)(((*(int *)(((int)stk + 20))) + 0x0))) == 0) {
        vmsfb_sleep();
        return 0xFFFFFF01;
    }
    if (((*(int *)(((*(int *)(((int)stk + 16))) + 0x0))) & 2) == 0) {
        vmsfb_sleep();
        return 0xFFFFFF01;
    }
    kdRecognizeChanged((*(int *)(((int)stk + 28))));
    for (;;) {
        for (;;) {
            *(unsigned int *)(((int)stk + 20)) = (kdGetDevice((*(int *)(((int)stk + 28)))));
            t18 = kdSetGetMediaInfo();
            *(unsigned int *)(((int)stk + 24)) = t18;
            if ((int)t18 >= 0) {
                break;
            }
            vmsfb_sleep();
        }
        for (;;) {
            *(volatile int *)(((int)stk + 24));
            t22 = kdGetStatus((*(int *)(((int)stk + 28))));
            if (t22 != 0) {
                break;
            }
            vmsfb_sleep();
        }
        *(unsigned int *)(((int)stk + 20)) = (kdGetDevice((*(int *)(((int)stk + 28)))));
        t27 = kdIsChanged((*(int *)(((int)stk + 28))));
        if (t27 != 0) {
            break;
        }
        *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((*(int *)(((int)stk + 20))) + 0x8))) + 0x8);
        t31 = *(signed char *)(((*(int *)(((int)stk + 20))) + 0x4));
        if ((unsigned char)t31 != 8) {
            if ((unsigned char)t31 != 0xFC) {
                return 0xFFFFFF01;
            }
            continue;
        }
        *(unsigned int *)(((*(int *)(((int)stk + 32))) + 0x0)) = (unsigned short)(((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC2C8D28) + 0xC)))))((*(int *)(((int)stk + 0))), 0x0, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
        *(unsigned int *)((((*(int *)(((int)stk + 32))) + 0x4) + 0x0)) = (unsigned short)(((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC2C8D28) + 0xC)))))((*(int *)(((int)stk + 0))), 0x2, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
        *(unsigned int *)((((*(int *)(((int)stk + 32))) + 0x8) + 0x0)) = (unsigned short)(((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC2C8D28) + 0xC)))))((*(int *)(((int)stk + 0))), 0x4, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
        *(unsigned int *)((((*(int *)(((int)stk + 32))) + 0xC) + 0x0)) = (unsigned short)(((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC2C8D28) + 0xC)))))((*(int *)(((int)stk + 0))), 0x6, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
        *(unsigned int *)((((*(int *)(((int)stk + 32))) + 0x10) + 0x0)) = (unsigned short)(((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC2C8D28) + 0xC)))))((*(int *)(((int)stk + 0))), 0x8, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
        *(unsigned int *)((((*(int *)(((int)stk + 32))) + 0x14) + 0x0)) = (unsigned short)(((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC2C8D28) + 0xC)))))((*(int *)(((int)stk + 0))), 0xA, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
        *(unsigned int *)((((*(int *)(((int)stk + 32))) + 0x18) + 0x0)) = (unsigned short)(((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC2C8D28) + 0xC)))))((*(int *)(((int)stk + 0))), 0xC, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
        *(unsigned int *)((((*(int *)(((int)stk + 32))) + 0x1C) + 0x0)) = (unsigned short)(((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC2C8D28) + 0xC)))))((*(int *)(((int)stk + 0))), 0x10, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
        *(unsigned int *)((((*(int *)(((int)stk + 32))) + 0x20) + 0x0)) = (unsigned short)(((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC2C8D28) + 0xC)))))((*(int *)(((int)stk + 0))), 0x12, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
        *(unsigned int *)((((*(int *)(((int)stk + 32))) + 0x34) + 0x0)) = (unsigned short)(((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC2C8D28) + 0xC)))))((*(int *)(((int)stk + 0))), 0x14, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
        *(unsigned int *)(((*(int *)(((int)stk + 32))) + 0x38)) = 0x80;
        *(unsigned int *)(((*(int *)(((int)stk + 32))) + 0x24)) = (unsigned char)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0xE)));
        *(unsigned int *)(((*(int *)(((int)stk + 32))) + 0x28)) = (unsigned char)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0xF)));
        *(unsigned int *)(((*(int *)(((int)stk + 32))) + 0x2C)) = 0x1FF;
        t91 = kdGetDeviceInfo((*(int *)(((int)stk + 28))));
        *(unsigned int *)(((int)stk + 16)) = t91;
        t92 = kdDevGetStorageInfo((((int)stk + 0) + 0x4), t91);
        if ((int)t92 < 0) {
            vmsfb_sleep();
            return 0xFFFFFF01;
        }
        *(unsigned int *)(((*(int *)(((int)stk + 32))) + 0x3C)) = (unsigned short)(*(short *)(((int)stk + 10)));
        (((struct o40_uint *)((*(int *)(((int)stk + 32)))))->v) = (unsigned short)(*(short *)(((int)stk + 8)));
        (((struct o44_uint *)((*(int *)(((int)stk + 32)))))->v) = ((int)((int)0x200 / (int)(unsigned short)(*(short *)(((int)stk + 10)))));
        (((struct o48_uint *)((*(int *)(((int)stk + 32)))))->v) = ((int)((int)0x200 / (int)(unsigned short)(*(short *)(((int)stk + 8)))));
        return 0x0;
    }
    vmsfb_sleep();
    return 0xFFFFFF30;
}

int FUN_0c165fa0(void)
{
    int stk[3];

    register int R1;
    register int R2;
    register int R3;
    int R5;
    int R10;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    R10 = (0xF0FFFFFF);
    v0_0 = (0xC152700);
    v0_0 = (0x100);
    v0_1 = (0x10000000);
    v0_2 = (0x0);
    R5 = (0x1);
    v0_6 = (0x0);
    v0_7 = (0xA05F8144);
    v0_5 = (0x2);
    v0_4 = (0x4);
    L_C165FC6:;
    if (!(((*(int *)((0xC300C1C + (v0_6 << 2)))) == 1))) goto L_C16622A;
    if (((*(int *)0xC300ADC) == 0)) goto L_C165FE2;
    goto L_C16622A;
    L_C16622A:;
    v0_3 = (int)(v0_6 + 0x1) >= (int)v0_4;
    v0_6 = ((v0_6 + 0x1));
    if (v0_3) goto L_C166234;
    goto L_C165FC6;
    L_C166234:;
    v0_2 = (0x1);
    L_C166236:;
    return v0_2;
    L_C165FE2:;
    *(unsigned int *)0xC300ADC = R5;
    *(unsigned int *)(((v0_6 << 2) + 0xC300C1C)) = v0_5;
    (((struct o0_uint *)0xC300C34)->v) = v0_6;
    *(unsigned int *)(((int)stk + 8)) = (v0_6 & R5);
    *(unsigned int *)0xC306E34 = (*(int *)0xFFD8000C);
    *(unsigned int *)0xA05F8008 = R5;
    *(unsigned int *)0xA05F8008 = v0_2;
    v0_3 = *(int *)(((int)stk + 8));
    (((struct o0_uint *)0xA05F8124)->v) = (*(int *)(((((v0_3 << 2) << 2) << 1) + 0xC300D48)));
    (((struct o8_uint *)0xA05F8124)->v) = (*(int *)(((((v0_3 << 2) << 2) << 1) + 0xC300D4C)));
    (((struct o4_uint *)0xA05F8124)->v) = (*(int *)(((((v0_3 << 2) << 2) << 1) + 0xC300D54)));
    (((struct oC_uint *)0xA05F8124)->v) = (*(int *)(((((v0_3 << 2) << 2) << 1) + 0xC300D58)));
    *(unsigned int *)0xA05F8164 = (*(int *)(((((v0_3 << 2) << 2) << 1) + 0xC300D50)));
    *(unsigned int *)((v0_7 + 0x0)) = 0x80000000;
    *(volatile int *)((v0_7 + 0x0));
    (((struct o4_uint *)0xC300C34)->v) = v0_2;
    (((struct o8_uint *)0xC300C34)->v) = v0_2;
    *(unsigned int *)0xC306DF0 = v0_2;
    v0_2 = (0xC300CA0);
    v0_3 = ((v0_6 << 2));
    if (((*(int *)(((v0_6 << 2) + 0xC300CA0))) == 0)) goto L_C166074;
    (((struct o4_uint *)0xC300C34)->v) = (((((struct o4_int *)0xC300C34)->v)) | R5);
    *(int *)((int)stk + 0) = ((int)stk + 4);
    v0_6 = kmiDMAtoTARequest(v0_1, (*(int *)((v0_3 + 0xC300C50))), ((*(int *)((v0_3 + v0_2))) + 0x20), 0x10, ((int)stk + 4));
    v0_2 = (v0_6);
    if ((v0_6 != v0_0)) goto L_C166074;
    L_C166226:;
    v0_2 = (0x0);
    goto L_C166236;
    L_C166074:;
    if (!(((*(int *)((v0_3 + 0xC300CB0))) != 0))) goto L_C166170;
    (((struct o4_uint *)0xC300C34)->v) = (((((struct o4_int *)0xC300C34)->v)) | v0_5);
    if ((((((struct o0_int *)0xC300D04)->v)) != 1)) goto L_C1660C0;
    *(unsigned int *)((((((struct o4_int *)0xC300D04)->v)) + 0x0)) = (((*(int *)((((((struct o4_int *)0xC300D04)->v)) + 0x0))) & R10) | 0x1000000);
    *(int *)((int)stk + 0) = ((int)stk + 4);
    v0_5 = kmiDMAtoTARequest(v0_1, ((((struct o4_int *)0xC300D04)->v)), ((((struct o8_int *)0xC300D04)->v)), 0x10, ((int)stk + 4));
    v0_2 = (v0_5);
    if ((v0_5 != v0_0)) goto L_C1660C0;
    goto L_C166226;
    L_C166170:;
    v0_2 = (0xC300CC0);
    if (((*(int *)((v0_3 + 0xC300CC0))) == 0)) goto L_C16619A;
    (((struct o4_uint *)0xC300C34)->v) = (((((struct o4_int *)0xC300C34)->v)) | v0_4);
    *(int *)((int)stk + 0) = ((int)stk + 4);
    v0_4 = kmiDMAtoTARequest(v0_1, (*(int *)((v0_3 + 0xC300C70))), ((*(int *)((v0_3 + v0_2))) + 0x20), 0x10, ((int)stk + 4));
    v0_2 = (v0_4);
    if ((v0_4 == v0_0)) goto L_C166226;
    L_C16619A:;
    if (((*(int *)((v0_3 + 0xC300CD0))) == 0)) goto L_C1661FA;
    (((struct o4_uint *)0xC300C34)->v) = (((((struct o4_int *)0xC300C34)->v)) | 0x8);
    if ((((((struct o0_int *)0xC300D04)->v)) != 1)) goto L_C1661DE;
    *(unsigned int *)((((((struct o4_int *)0xC300D04)->v)) + 0x0)) = (((*(int *)((((((struct o4_int *)0xC300D04)->v)) + 0x0))) & R10) | 0x3000000);
    *(int *)((int)stk + 0) = ((int)stk + 4);
    v0_4 = kmiDMAtoTARequest(v0_1, ((((struct o4_int *)0xC300D04)->v)), ((((struct o8_int *)0xC300D04)->v)), 0x10, ((int)stk + 4));
    v0_2 = (v0_4);
    if ((v0_4 == v0_0)) goto L_C166226;
    L_C1661DE:;
    *(int *)((int)stk + 0) = ((int)stk + 4);
    v0_4 = kmiDMAtoTARequest(v0_1, (*(int *)((v0_3 + 0xC300C80))), ((*(int *)((v0_3 + 0xC300CD0))) + 0x20), 0x10, ((int)stk + 4));
    v0_2 = (v0_4);
    if ((v0_4 == v0_0)) goto L_C166226;
    L_C1661FA:;
    if (((*(int *)((v0_3 + 0xC300CE0))) == 0)) goto L_C166234;
    (((struct o4_uint *)0xC300C34)->v) = (((((struct o4_int *)0xC300C34)->v)) | 0x10);
    *(int *)((int)stk + 0) = ((int)stk + 4);
    v0_0 = (kmiDMAtoTARequest(v0_1, (*(int *)((v0_3 + 0xC300C90))), ((*(int *)((v0_3 + 0xC300CE0))) + 0x20), 0x10, ((int)stk + 4))) != v0_0;
    if (v0_0) goto L_C166234;
    goto L_C166226;
    L_C1660C0:;
    *(int *)((int)stk + 0) = ((int)stk + 4);
    v0_5 = *(int *)((v0_3 + 0xC300CB0));
    *(unsigned int *)(((int)stk + 0)) = ((int)stk + 4);
    v0_2 = (0xC300CB0);
    v0_6 = ((v0_5 + 0x20));
    v0_7 = (0x10);
    v0_5 = kmiDMAtoTARequest(v0_1, (*(int *)((v0_3 + (v0_2 - 80)))), v0_6, v0_7, *(int *)((int)stk + 0));
    v0_2 = (v0_5);
    if ((v0_5 == v0_0)) goto L_C166226;
    goto L_C166170;
}

int FUN_0c054c7c(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    int t4;
    int t5;
    register int t6;
    register float u0;

    t0 = (((struct o38_int *)0xC2B2DAC)->v);
    if ((int)t0 <= (int)0x1) {
        t1 = (((struct o3C_int *)0xC2B2DAC)->v);
        t2 = t1;
        if ((int)t1 <= (int)0x1) {
        } else {
            t1 = t0;
            t3 = a7;
            if (t0 != 3) {
                t4 = (((struct o2C_int *)0xC2B2DAC)->v);
                t5 = (((struct o0_int *)0xC1ECCD0)->v);
                (((struct o2C_uint *)0xC2B2DAC)->v) = (t4 + t5);
                t6 = (((struct o8_int *)0xC1ECCD0)->v);
                (((struct o2C_uint *)0xC2B2DAC)->v) = ((t4 + t5) + t6);
                if ((int)((t4 + t5) + t6) > (int)0x98967F) {
                    (((struct o2C_uint *)0xC2B2DAC)->v) = 0x98967F;
                }
                (((struct o0_uint *)0xC1ECCD0)->v) = 0x0;
                (((struct o8_uint *)0xC1ECCD0)->v) = 0x0;
                t1 = 0xC1ECCA8;
                t3 = 0x98967F;
            }
            u0 = ((((struct o4_float *)0xC2B2DAC)->v));
            u0 = u0 + 32.0f * ((((struct o14_float *)0xC2B2DAC)->v));
            t4 = (((struct o2C_int *)0xC2B2DAC)->v);
            (((struct o8_float *)0xC2B2E8C)->v) = (u0 + 52.0f);
            t5 = (int)((int)((int)((int)t4 / (int)0xF4240)) % (int)0xA);
            if ((0x0 == 0) && (t5 == 0)) {
                (((struct o0_uint *)0xC2B2E8C)->v) = 0x144;
                t6 = 0x0;
            } else {
                (((struct o0_uint *)0xC2B2E8C)->v) = (*(int *)((0xC10CD3C + (t5 << 2))));
                t6 = 0x1;
            }
            (((struct o4_float *)0xC2B2E8C)->v) = (((((struct o0_float *)0xC2B2DAC)->v)) + 496.0f);
            t5 = ((int (*)(int, int, int, int, float, float, float, float, float))(FUN_0c07ada0))(0xC2B2E8C, 0x0, t1, t3, f4, f5, f6, f7, f8);
            t1 = (int)((int)((int)((int)t4 / (int)0x186A0)) % (int)0xA);
            t3 = t6;
            if ((t6 != 0) || (t1 != 0)) {
                (((struct o0_uint *)0xC2B2E8C)->v) = (*(int *)((0xC10CD3C + (t1 << 2))));
                t3 = 0x1;
            }
            (((struct o4_float *)0xC2B2E8C)->v) = (((((struct o0_float *)0xC2B2DAC)->v)) + 512.0f);
            t1 = ((int (*)(int))(FUN_0c07ada0))(0xC2B2E8C);
            t1 = (int)((int)((int)((int)t4 / (int)0x2710)) % (int)0xA);
            t5 = t3;
            if ((t3 != 0) || (t1 != 0)) {
                (((struct o0_uint *)0xC2B2E8C)->v) = (*(int *)((0xC10CD3C + (t1 << 2))));
                t5 = 0x1;
            }
            (((struct o4_float *)0xC2B2E8C)->v) = (((((struct o0_float *)0xC2B2DAC)->v)) + 536.0f);
            t1 = ((int (*)(int))(FUN_0c07ada0))(0xC2B2E8C);
            t1 = (int)((int)((int)((int)t4 / (int)0x3E8)) % (int)0xA);
            if ((t5 != 0) || (t1 != 0)) {
                (((struct o0_uint *)0xC2B2E8C)->v) = (*(int *)((0xC10CD3C + (t1 << 2))));
            }
            (((struct o4_float *)0xC2B2E8C)->v) = (((((struct o0_float *)0xC2B2DAC)->v)) + 552.0f);
            t1 = ((int (*)(int))(FUN_0c07ada0))(0xC2B2E8C);
            (((struct o4_float *)0xC2B2E8C)->v) = (((((struct o0_float *)0xC2B2DAC)->v)) + 568.0f);
            (((struct o0_uint *)0xC2B2E8C)->v) = (*(int *)((0xC10CD3C + (((int)((int)((int)((int)t4 / (int)0x64)) % (int)0xA)) << 2))));
            t1 = ((int (*)(int))(FUN_0c07ada0))(0xC2B2E8C);
            (((struct o4_float *)0xC2B2E8C)->v) = (((((struct o0_float *)0xC2B2DAC)->v)) + 592.0f);
            (((struct o0_uint *)0xC2B2E8C)->v) = (*(int *)((0xC10CD3C + (((int)((int)((int)((int)t4 / (int)0xA)) % (int)0xA)) << 2))));
            t1 = ((int (*)(int))(FUN_0c07ada0))(0xC2B2E8C);
            (((struct o4_float *)0xC2B2E8C)->v) = (((((struct o0_float *)0xC2B2DAC)->v)) + 608.0f);
            (((struct o0_uint *)0xC2B2E8C)->v) = (*(int *)((0xC10CD3C + (((int)((int)t4 % (int)0xA)) << 2))));
            t1 = ((int (*)(int))(FUN_0c07ada0))(0xC2B2E8C);
            (((struct o4_float *)0xC2B2E8C)->v) = (((((struct o0_float *)0xC2B2DAC)->v)) + 524.0f);
            if ((int)t4 >= (int)0x186A0) {
                (((struct o0_uint *)0xC2B2E8C)->v) = ((((struct o4_int *)0xC10CD64)->v));
            } else {
                (((struct o0_uint *)0xC2B2E8C)->v) = ((((struct oC_int *)0xC10CD64)->v));
            }
            t1 = ((int (*)(int))(FUN_0c07ada0))(0xC2B2E8C);
            (((struct o4_float *)0xC2B2E8C)->v) = (((((struct o0_float *)0xC2B2DAC)->v)) + ((((struct o0_float *)0xC054FD8)->v)));
            (((struct o0_uint *)0xC2B2E8C)->v) = ((((struct o0_int *)0xC10CD64)->v));
            t1 = ((int (*)(int))(FUN_0c07ada0))(0xC2B2E8C);
            (((struct o4_float *)0xC2B2E8C)->v) = (((((struct o0_float *)0xC2B2DAC)->v)) + ((((struct o4_float *)0xC054FD8)->v)));
            (((struct o0_uint *)0xC2B2E8C)->v) = 0x147;
            t1 = ((int (*)(int))(FUN_0c07ada0))(0xC2B2E8C);
            (((struct o4_float *)0xC2B2E8C)->v) = (((((struct o0_float *)0xC2B2DAC)->v)) + ((((struct o8_float *)0xC054FD8)->v)));
            (((struct o0_uint *)0xC2B2E8C)->v) = 0x148;
            t2 = (((int (*)(int))(FUN_0c07ada0))(0xC2B2E8C));
        }
        t1 = t2;
    } else {
        t2 = t0;
        t3 = a7;
        if (t0 != 3) {
            t0 = (((struct o2C_int *)0xC2B2DAC)->v);
            t4 = (((struct o0_int *)0xC1ECCD0)->v);
            (((struct o2C_uint *)0xC2B2DAC)->v) = (t0 + t4);
            t5 = (((struct o8_int *)0xC1ECCD0)->v);
            (((struct o2C_uint *)0xC2B2DAC)->v) = ((t0 + t4) + t5);
            if ((int)((t0 + t4) + t5) > (int)0x98967F) {
                (((struct o2C_uint *)0xC2B2DAC)->v) = 0x98967F;
            }
            (((struct o0_uint *)0xC1ECCD0)->v) = 0x0;
            (((struct o8_uint *)0xC1ECCD0)->v) = 0x0;
            t2 = 0xC1ECCA8;
            t3 = 0x98967F;
        }
        u0 = ((((struct o4_float *)0xC2B2DAC)->v));
        u0 = u0 + 32.0f * ((((struct o14_float *)0xC2B2DAC)->v));
        t0 = (((struct o2C_int *)0xC2B2DAC)->v);
        (((struct o8_float *)0xC2B2E8C)->v) = (u0 + 52.0f);
        t4 = (int)((int)((int)((int)t0 / (int)0xF4240)) % (int)0xA);
        if ((0x0 == 0) && (t4 == 0)) {
            (((struct o0_uint *)0xC2B2E8C)->v) = 0x144;
            t5 = 0x0;
        } else {
            (((struct o0_uint *)0xC2B2E8C)->v) = (*(int *)((0xC10CD3C + (t4 << 2))));
            t5 = 0x1;
        }
        (((struct o4_float *)0xC2B2E8C)->v) = (((((struct o0_float *)0xC2B2DAC)->v)) + 496.0f);
        t4 = ((int (*)(int, int, int, int, float, float, float, float, float))(FUN_0c07ada0))(0xC2B2E8C, 0x0, t2, t3, f4, f5, f6, f7, f8);
        t2 = (int)((int)((int)((int)t0 / (int)0x186A0)) % (int)0xA);
        t3 = t5;
        if ((t5 != 0) || (t2 != 0)) {
            (((struct o0_uint *)0xC2B2E8C)->v) = (*(int *)((0xC10CD3C + (t2 << 2))));
            t3 = 0x1;
        }
        (((struct o4_float *)0xC2B2E8C)->v) = (((((struct o0_float *)0xC2B2DAC)->v)) + 512.0f);
        t2 = ((int (*)(int))(FUN_0c07ada0))(0xC2B2E8C);
        t2 = (int)((int)((int)((int)t0 / (int)0x2710)) % (int)0xA);
        t4 = t3;
        if ((t3 != 0) || (t2 != 0)) {
            (((struct o0_uint *)0xC2B2E8C)->v) = (*(int *)((0xC10CD3C + (t2 << 2))));
            t4 = 0x1;
        }
        (((struct o4_float *)0xC2B2E8C)->v) = (((((struct o0_float *)0xC2B2DAC)->v)) + 536.0f);
        t2 = ((int (*)(int))(FUN_0c07ada0))(0xC2B2E8C);
        t2 = (int)((int)((int)((int)t0 / (int)0x3E8)) % (int)0xA);
        if ((t4 != 0) || (t2 != 0)) {
            (((struct o0_uint *)0xC2B2E8C)->v) = (*(int *)((0xC10CD3C + (t2 << 2))));
        }
        (((struct o4_float *)0xC2B2E8C)->v) = (((((struct o0_float *)0xC2B2DAC)->v)) + 552.0f);
        t2 = ((int (*)(int))(FUN_0c07ada0))(0xC2B2E8C);
        (((struct o4_float *)0xC2B2E8C)->v) = (((((struct o0_float *)0xC2B2DAC)->v)) + 568.0f);
        (((struct o0_uint *)0xC2B2E8C)->v) = (*(int *)((0xC10CD3C + (((int)((int)((int)((int)t0 / (int)0x64)) % (int)0xA)) << 2))));
        t2 = ((int (*)(int))(FUN_0c07ada0))(0xC2B2E8C);
        (((struct o4_float *)0xC2B2E8C)->v) = (((((struct o0_float *)0xC2B2DAC)->v)) + 592.0f);
        (((struct o0_uint *)0xC2B2E8C)->v) = (*(int *)((0xC10CD3C + (((int)((int)((int)((int)t0 / (int)0xA)) % (int)0xA)) << 2))));
        t2 = ((int (*)(int))(FUN_0c07ada0))(0xC2B2E8C);
        (((struct o4_float *)0xC2B2E8C)->v) = (((((struct o0_float *)0xC2B2DAC)->v)) + 608.0f);
        (((struct o0_uint *)0xC2B2E8C)->v) = (*(int *)((0xC10CD3C + (((int)((int)t0 % (int)0xA)) << 2))));
        t2 = ((int (*)(int))(FUN_0c07ada0))(0xC2B2E8C);
        (((struct o4_float *)0xC2B2E8C)->v) = (((((struct o0_float *)0xC2B2DAC)->v)) + 524.0f);
        if ((int)t0 >= (int)0x186A0) {
            (((struct o0_uint *)0xC2B2E8C)->v) = ((((struct o4_int *)0xC10CD64)->v));
        } else {
            (((struct o0_uint *)0xC2B2E8C)->v) = ((((struct oC_int *)0xC10CD64)->v));
        }
        t0 = ((int (*)(int))(FUN_0c07ada0))(0xC2B2E8C);
        (((struct o4_float *)0xC2B2E8C)->v) = (((((struct o0_float *)0xC2B2DAC)->v)) + ((((struct o0_float *)0xC054FD8)->v)));
        (((struct o0_uint *)0xC2B2E8C)->v) = ((((struct o0_int *)0xC10CD64)->v));
        t0 = ((int (*)(int))(FUN_0c07ada0))(0xC2B2E8C);
        (((struct o4_float *)0xC2B2E8C)->v) = (((((struct o0_float *)0xC2B2DAC)->v)) + ((((struct o4_float *)0xC054FD8)->v)));
        (((struct o0_uint *)0xC2B2E8C)->v) = 0x147;
        t0 = ((int (*)(int))(FUN_0c07ada0))(0xC2B2E8C);
        (((struct o4_float *)0xC2B2E8C)->v) = (((((struct o0_float *)0xC2B2DAC)->v)) + ((((struct o8_float *)0xC054FD8)->v)));
        (((struct o0_uint *)0xC2B2E8C)->v) = 0x148;
        t1 = (((int (*)(int))(FUN_0c07ada0))(0xC2B2E8C));
    }
    return t1;
}

float FUN_0c0595b2(void)
{
    int t0;
    register int t1;
    register int t2;
    register int t25;
    register int t31;
    register float u32;
    register float u33;
    register float u34;
    register float u35;
    register float u36;
    register float u37;
    register float u40;
    register int t45;
    register float u47;
    register int t48;
    register float u51;
    register int t52;
    register int t53;
    register float u55;
    register int t56;
    register int t60;
    register float u62;
    register int t63;
    register float u65;
    register float u67;
    register int t68;
    register float u71;
    int t72;
    int t73;
    register float u76;
    register float u79;
    register float u82;
    register float u84;
    register float u87;
    register int t88;
    register float u90;
    register int t91;
    register float u94;
    register int t95;
    register int t96;
    register float u98;
    register int t99;
    register int t103;
    register float u105;
    register int t106;
    register float u108;
    register float u110;
    register int t111;
    register float u114;
    int t115;
    int t116;
    register float u119;
    register float u122;
    register float u125;
    register float u127;
    register float u130;
    register float u170;
    register float u154;
    register float u140;

    t0 = (((struct o10_int *)0xC2B85F4)->v);
    t1 = (((struct oC_int *)0xC2B85F4)->v);
    t2 = *(int *)0xC2B8814;
    switch (t0) {
    case 1:
        if (t1 != 1) {
            (((struct o4_float *)0xC2B85F4)->v) = 60.0f;
            (((struct o0_float *)0xC2B85F4)->v) = 0.200000003f;
            (((struct oC_uint *)0xC2B85F4)->v) = 0x1;
        }
        break;
    case 0:
        if (t1 != 0) {
            if (t2 == 1) {
                (((struct o4_float *)0xC2B85F4)->v) = 60.0f;
                (((struct o0_float *)0xC2B85F4)->v) = 0.200000003f;
            } else {
                (((struct o4_float *)0xC2B85F4)->v) = 0.0f;
            }
            (((struct oC_uint *)0xC2B85F4)->v) = 0x0;
        }
        break;
    case 9:
        if (t1 != 9) {
            if (t2 == 1) {
                (((struct o4_float *)0xC2B85F4)->v) = 60.0f;
                (((struct o0_float *)0xC2B85F4)->v) = 0.200000003f;
            } else {
                (((struct o4_float *)0xC2B85F4)->v) = 0.0f;
            }
            (((struct oC_uint *)0xC2B85F4)->v) = 0x9;
        }
        break;
    default:
        if ((t0 != 2) && ((t0 != 3) && ((t0 != 10) && (t0 != 11)))) {
            (((struct oC_uint *)0xC2B85F4)->v) = 0x0;
        } else {
            if (t1 != t0) {
                (((struct oC_uint *)0xC2B85F4)->v) = t0;
                (((struct o4_float *)0xC2B85F4)->v) = 0.0f;
            }
        }
        break;
    }
    (((struct o10_uint *)0xC2B85F4)->v) = 0x0;
    if (((((struct oC_int *)0xC2B85F4)->v)) != (*(int *)0xC2B8814)) {
        *(unsigned int *)0xC2B8814 = 0x101;
        t25 = (((struct oC_int *)0xC2B85F4)->v);
        (((struct o8_uint *)0xC2B85F4)->v) = ((((t25 << 2) + t25) << 2) + 0xC132AFC);
    }
    if (((((struct oC_int *)0xC2B85F4)->v)) == 0) {
        t31 = 0x0;
        for (;;) {
            u32 = (((struct o0_float *)0xC177D38)->v);
            u33 = (((struct o4_float *)(((((t31 << 2) + t31) << 2) + 0xC132C00)))->v);
            u34 = (((struct o8_float *)(((((t31 << 2) + t31) << 2) + 0xC132C00)))->v);
            u35 = (((struct o8_float *)0xC177D38)->v);
            u36 = (((struct o10_float *)(((((t31 << 2) + t31) << 2) + 0xC132C00)))->v);
            u37 = (((struct oC_float *)(((((t31 << 2) + t31) << 2) + 0xC132C00)))->v);
            u40 = ((u34 - u35) * (u34 - u35));
            u40 = u40 + ((u33 - u32)) * ((u33 - u32));
            if (((u37 + u36) * (u37 + u36)) > u40) {
                break;
            }
            t31 = (t31 + 0x1);
            if ((int)t31 >= (int)0x4) {
                t31 = 0xC2B8818;
                if (0xFFFFFFFF == -1) {
                    t45 = 0x0;
                    for (;;) {
                        u47 = *(float *)((t45 + ((((struct o8_int *)0xC132B04)->v))));
                        t48 = (t31 + t45);
                        t45 = (t45 + 0x4);
                        *(float *)((t48 + 0x0)) = u47;
                        if ((unsigned int)t45 >= (unsigned int)0x204) {
                            break;
                        }
                    }
                    (((struct o208_uint *)(t31))->v) = ((((struct o4_int *)0xC132B04)->v));
                    (((struct o204_float *)(t31))->v) = ((((struct o0_float *)0xC132B04)->v));
                    return (u33 - u32);
                }
                u51 = (((struct oC_float *)0xC132BEC)->v);
                if ((u51 * u51) > u40) {
                    t52 = (((struct o0_int *)0xC132BEC)->v);
                    t53 = 0x0;
                    for (;;) {
                        u55 = *(float *)((t53 + (*(int *)((((((t52 << 2) + t52) << 2) + 0xC132AFC) + 0x10)))));
                        t56 = (t31 + t53);
                        t53 = (t53 + 0x4);
                        *(float *)((t56 + 0x0)) = u55;
                        if ((unsigned int)t53 >= (unsigned int)0x204) {
                            break;
                        }
                    }
                    (((struct o208_uint *)(t31))->v) = (*(int *)((((((t52 << 2) + t52) << 2) + 0xC132AFC) + 0xC)));
                    (((struct o204_float *)(t31))->v) = ((((struct o8_float *)(((((t52 << 2) + t52) << 2) + 0xC132AFC)))->v));
                    return (u33 - u32);
                }
                t60 = (((struct o0_int *)0xC132BEC)->v);
                u62 = ((_builtin_sqrtf(u40) - ((((struct oC_float *)0xC132BEC)->v))) / ((((struct o10_float *)0xC132BEC)->v)));
                u62 = -u62;
                t63 = 0x0;
                for (;;) {
                    u65 = *(float *)((t63 + ((((struct o8_int *)0xC132B04)->v))));
                    u67 = *(float *)((t63 + (*(int *)((((((t60 << 2) + t60) << 2) + 0xC132AFC) + 0x10)))));
                    t68 = (t31 + t63);
                    t63 = (t63 + 0x4);
                    u71 = u65;
                    u71 = u71 + ((u62 + 1.0f)) * ((u67 - u65));
                    *(float *)((t68 + 0x0)) = u71;
                    if ((unsigned int)t63 >= (unsigned int)0x204) {
                        break;
                    }
                }
                t72 = (((struct o4_int *)0xC132B04)->v);
                t73 = *(int *)((((((t60 << 2) + t60) << 2) + 0xC132AFC) + 0xC));
                u76 = (float)((unsigned int)(t72 & 0xFF0000) >> 16);
                u76 = u76 + ((u62 + 1.0f)) * ((float)(((unsigned int)(0xFF0000 & t73) >> 16) - ((unsigned int)(t72 & 0xFF0000) >> 16)));
                u79 = (float)((unsigned int)(0xFF00 & t72) >> 8);
                u79 = u79 + ((u62 + 1.0f)) * ((float)(((unsigned int)(0xFF00 & t73) >> 8) - ((unsigned int)(0xFF00 & t72) >> 8)));
                u82 = (float)(unsigned char)t72;
                u82 = u82 + ((u62 + 1.0f)) * ((float)((unsigned char)t73 - (unsigned char)t72));
                (((struct o208_uint *)(t31))->v) = (((0x0 + (((int)u76 & 0xFF) << 16)) + (((int)u79 & 0xFF) << 8)) + ((int)u82 & 0xFF));
                u84 = (((struct o0_float *)0xC132B04)->v);
                u87 = u84;
                u87 = u87 + ((u62 + 1.0f)) * ((((((struct o8_float *)(((((t60 << 2) + t60) << 2) + 0xC132AFC)))->v)) - u84));
                (((struct o204_float *)(t31))->v) = u87;
                return (u62 + 1.0f);
            }
        }
        if (t31 == -1) {
            t88 = 0x0;
            for (;;) {
                u90 = *(float *)((t88 + ((((struct o8_int *)0xC132B04)->v))));
                t91 = (0xC2B8818 + t88);
                t88 = (t88 + 0x4);
                *(float *)((t91 + 0x0)) = u90;
                if ((unsigned int)t88 >= (unsigned int)0x204) {
                    break;
                }
            }
            (((struct o4_uint *)0xC2B8A1C)->v) = ((((struct o4_int *)0xC132B04)->v));
            (((struct o0_float *)0xC2B8A1C)->v) = ((((struct o0_float *)0xC132B04)->v));
            u154 = (u33 - u32);
        } else {
            u94 = (((struct oC_float *)(((((t31 << 2) + t31) << 2) + 0xC132C00)))->v);
            if ((u94 * u94) > u40) {
                t95 = *(int *)((((((t31 << 2) + t31) << 2) + 0xC132C00) + 0x0));
                t96 = 0x0;
                for (;;) {
                    u98 = *(float *)((t96 + (*(int *)((((((t95 << 2) + t95) << 2) + 0xC132AFC) + 0x10)))));
                    t99 = (0xC2B8818 + t96);
                    t96 = (t96 + 0x4);
                    *(float *)((t99 + 0x0)) = u98;
                    if ((unsigned int)t96 >= (unsigned int)0x204) {
                        break;
                    }
                }
                (((struct o4_uint *)0xC2B8A1C)->v) = (*(int *)((((((t95 << 2) + t95) << 2) + 0xC132AFC) + 0xC)));
                (((struct o0_float *)0xC2B8A1C)->v) = ((((struct o8_float *)(((((t95 << 2) + t95) << 2) + 0xC132AFC)))->v));
                u140 = (u33 - u32);
            } else {
                t103 = *(int *)(((0xC132C00 + (((t31 << 2) + t31) << 2)) + 0x0));
                u105 = ((_builtin_sqrtf(u40) - ((((struct oC_float *)((0xC132C00 + (((t31 << 2) + t31) << 2))))->v))) / ((((struct o10_float *)((0xC132C00 + (((t31 << 2) + t31) << 2))))->v)));
                u105 = -u105;
                t106 = 0x0;
                for (;;) {
                    u108 = *(float *)((t106 + ((((struct o8_int *)0xC132B04)->v))));
                    u110 = *(float *)((t106 + (*(int *)((((((t103 << 2) + t103) << 2) + 0xC132AFC) + 0x10)))));
                    t111 = (0xC2B8818 + t106);
                    t106 = (t106 + 0x4);
                    u114 = u108;
                    u114 = u114 + ((u105 + 1.0f)) * ((u110 - u108));
                    *(float *)((t111 + 0x0)) = u114;
                    if ((unsigned int)t106 >= (unsigned int)0x204) {
                        break;
                    }
                }
                t115 = (((struct o4_int *)0xC132B04)->v);
                t116 = *(int *)((((((t103 << 2) + t103) << 2) + 0xC132AFC) + 0xC));
                u119 = (float)((unsigned int)(t115 & 0xFF0000) >> 16);
                u119 = u119 + ((u105 + 1.0f)) * ((float)(((unsigned int)(0xFF0000 & t116) >> 16) - ((unsigned int)(t115 & 0xFF0000) >> 16)));
                u122 = (float)((unsigned int)(0xFF00 & t115) >> 8);
                u122 = u122 + ((u105 + 1.0f)) * ((float)(((unsigned int)(0xFF00 & t116) >> 8) - ((unsigned int)(0xFF00 & t115) >> 8)));
                u125 = (float)(unsigned char)t115;
                u125 = u125 + ((u105 + 1.0f)) * ((float)((unsigned char)t116 - (unsigned char)t115));
                (((struct o4_uint *)0xC2B8A1C)->v) = (((0x0 + (((int)u119 & 0xFF) << 16)) + (((int)u122 & 0xFF) << 8)) + ((int)u125 & 0xFF));
                u127 = (((struct o0_float *)0xC132B04)->v);
                u130 = u127;
                u130 = u130 + ((u105 + 1.0f)) * ((((((struct o8_float *)(((((t103 << 2) + t103) << 2) + 0xC132AFC)))->v)) - u127));
                (((struct o0_float *)0xC2B8A1C)->v) = u130;
                u140 = (u105 + 1.0f);
            }
            u154 = u140;
        }
        u170 = u154;
    }
    return u170;
}

int FUN_0c03f4bc(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9)
{
    int stk[7];

    register int R1;
    register int R2;
    register int R3;
    register float F0;
    register float F1;
    register float F2;
    register float F3;
    register int T_;
    register int FPUL_;
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
    register float w0_3;
    register float w0_4;
    register float w0_5;
    register float w0_6;
    register float w0_7;
    v0_4 = a4;
    v0_3 = a5;
    v0_1 = a6;
    v0_2 = a7;
    w0_5 = f4;
    w0_3 = f5;
    w0_2 = f6;
    w0_0 = f7;
    w0_1 = f8;
    w0_4 = f9;
    *(float *)(((int)stk + 0)) = w0_0;
    v0_0 = (0x1);
    v0_4 = (v0_4);
    v0_5 = (v0_3);
    w0_3 = (w0_3);
    w0_5 = (w0_5);
    w0_6 = (w0_1);
    if (((int)v0_1 < 0)) goto L_C03F4EC;
    if (((int)v0_1 < (int)0x3)) goto L_C03F4F0;
    L_C03F4EC:;
    v0_0 = (0xFFFFFFFF);
    L_C03F746:;
    return v0_0;
    L_C03F4F0:;
    (((struct oC_float *)((((((v0_1 << 2) + v0_1) << 2) << 2) + 0xC2A58C0)))->v) = w0_2;
    (((struct o2C_float *)((((((v0_1 << 2) + v0_1) << 2) << 2) + 0xC2A58C0)))->v) = w0_4;
    v0_6 = ((v0_4 + v0_5));
    v0_7 = (((v0_1 << 2) + 0xC2A59B0));
    v0_3 = ((((((v0_1 << 2) + v0_1) << 2) << 2) + 0xC2A58C0));
    if ((v0_2 != 0)) goto L_C03F538;
    if (((int)(*(int *)((v0_7 + 0x0))) >= 0)) goto L_C03F526;
    FUN_0c07c8be(0x40DA9);
    L_C03F526:;
    if (((int)(*(int *)((v0_7 + 0x0))) >= (int)v0_6)) goto L_C03F534;
    *(unsigned int *)((v0_7 + 0x0)) = ((*(int *)((v0_7 + 0x0))) + 0x1);
    L_C03F564:;
    w0_4 = (0.0f);
    if (((int)(*(int *)((v0_7 + 0x0))) >= (int)v0_6)) goto L_C03F5E8;
    if (((int)(*(int *)((v0_7 + 0x0))) >= (int)v0_4)) goto L_C03F5D8;
    if ((v0_4 == 0)) goto L_C03F588;
    *(float *)(((int)stk + 0)) = ((*(float *)(((int)stk + 0))) * ((float)(*(int *)((v0_7 + 0x0))) / (float)v0_4));
    FPUL_ = (v0_4);
    L_C03F588:;
    if ((v0_5 == 0)) goto L_C03F5E8;
    w0_6 = (w0_4);
    L_C03F5E8:;
    w0_2 = *(float *)(((int)stk + 0));
    *(float *)(((int)stk + 4)) = (w0_3 - (((w0_6 + 0.5f) * 8.0f)));
    *(float *)(((int)stk + 16)) = (w0_3 + (((w0_6 + 0.5f) * 8.0f)));
    *(float *)(((int)stk + 12)) = (w0_5 - (((w0_2 + 0.5f) * 8.0f)));
    *(float *)(((int)stk + 8)) = (w0_5 + (((w0_2 + 0.5f) * 8.0f)));
    v0_7 = (0xC052DBA);
    w0_2 = (0.5f);
    if (((*(float *)(((int)stk + 0))) > 0.0f)) goto L_C03F632;
    if ((!(w0_6 > 0.0f))) goto L_C03F6FC;
    L_C03F632:;
    w0_7 = *(float *)(((int)stk + 0));
    *(float *)(((int)stk + 24)) = (w0_7 * (1.0f + 1.0f));
    (((struct o10_float *)(v0_3))->v) = (w0_7 * (1.0f + 1.0f));
    *(float *)(((int)stk + 20)) = (w0_6 * (1.0f + 1.0f));
    (((struct o14_float *)(v0_3))->v) = (w0_6 * (1.0f + 1.0f));
    (((struct o18_float *)(v0_3))->v) = 0.899999976f;
    (((struct o20_float *)(v0_3))->v) = 0.899999976f;
    (((struct o1C_float *)(v0_3))->v) = 0.899999976f;
    (((struct o24_float *)(v0_3))->v) = 0.899999976f;
    v0_4 = ((int (*)(int, int, int, int, float, float, float, float, float))(FUN_0c052dba))(v0_3, 0x67, v0_1, v0_2, w0_5, w0_3, w0_2, w0_0, w0_1);
    (((struct o10_float *)(v0_3))->v) = (*(float *)(((int)stk + 24)));
    (((struct o14_float *)(v0_3))->v) = 1.0f;
    (((struct o18_float *)(v0_3))->v) = 1.0f;
    (((struct o20_float *)(v0_3))->v) = 1.0f;
    (((struct o1C_float *)(v0_3))->v) = w0_4;
    (((struct o24_float *)(v0_3))->v) = 1.0f;
    v0_4 = ((int (*)(int, int, float, float))(FUN_0c052dba))(v0_3, 0x67, w0_5, (*(float *)(((int)stk + 4))));
    (((struct o1C_float *)(v0_3))->v) = 1.0f;
    (((struct o24_float *)(v0_3))->v) = w0_4;
    v0_4 = ((int (*)(int, int, float, float))(FUN_0c052dba))(v0_3, 0x67, w0_5, (*(float *)(((int)stk + 16))));
    (((struct o10_float *)(v0_3))->v) = 1.0f;
    (((struct o14_float *)(v0_3))->v) = (*(float *)(((int)stk + 20)));
    (((struct o18_float *)(v0_3))->v) = w0_4;
    (((struct o20_float *)(v0_3))->v) = 1.0f;
    (((struct o1C_float *)(v0_3))->v) = 1.0f;
    (((struct o24_float *)(v0_3))->v) = 1.0f;
    v0_4 = ((int (*)(int, int, float, float))(FUN_0c052dba))(v0_3, 0x67, (*(float *)(((int)stk + 12))), w0_3);
    (((struct o18_float *)(v0_3))->v) = 1.0f;
    (((struct o20_float *)(v0_3))->v) = w0_4;
    v0_4 = ((int (*)(int, int, float, float))(FUN_0c052dba))(v0_3, 0x67, (*(float *)(((int)stk + 8))), w0_3);
    (((struct o10_float *)(v0_3))->v) = 1.0f;
    (((struct o14_float *)(v0_3))->v) = 1.0f;
    (((struct o18_float *)(v0_3))->v) = w0_4;
    (((struct o20_float *)(v0_3))->v) = 1.0f;
    (((struct o1C_float *)(v0_3))->v) = w0_4;
    (((struct o24_float *)(v0_3))->v) = 1.0f;
    L_C03F6FC:;
    v0_1 = ((int (*)(int, int, int, int, float, float, float, float, float))(FUN_0c052dba))(v0_3, 0x67, v0_1, v0_2, (*(float *)(((int)stk + 12))), (*(float *)(((int)stk + 4))), w0_2, w0_0, w0_1);
    *(unsigned int *)((v0_3 + 0x28)) = 0xC000;
    v0_1 = ((int (*)(int, int, float, float))(FUN_0c052dba))(v0_3, 0x67, (*(float *)(((int)stk + 8))), (*(float *)(((int)stk + 4))));
    *(unsigned int *)((v0_3 + 0x28)) = 0x4000;
    v0_1 = ((int (*)(int, int, float, float))(FUN_0c052dba))(v0_3, 0x67, (*(float *)(((int)stk + 12))), (*(float *)(((int)stk + 16))));
    *(unsigned int *)((v0_3 + 0x28)) = 0x8000;
    v0_1 = ((int (*)(int, int, float, float))(FUN_0c052dba))(v0_3, 0x67, (*(float *)(((int)stk + 8))), (*(float *)(((int)stk + 16))));
    *(unsigned int *)((v0_3 + 0x28)) = 0x0;
    v0_0 = (v0_0);
    goto L_C03F746;
    L_C03F5D8:;
    w0_6 = ((w0_6 * ((float)((*(int *)((v0_7 + 0x0))) - v0_4) / (float)v0_5)));
    FPUL_ = (v0_5);
    goto L_C03F5E8;
    L_C03F534:;
    v0_0 = (0x2);
    goto L_C03F564;
    L_C03F538:;
    if (((int)(*(int *)((v0_7 + 0x0))) <= (int)v0_6)) goto L_C03F540;
    *(unsigned int *)((v0_7 + 0x0)) = v0_6;
    L_C03F540:;
    if (((int)(*(int *)((v0_7 + 0x0))) < (int)v0_6)) goto L_C03F54E;
    FUN_0c07c8be(0x50DA9);
    L_C03F54E:;
    if (((int)(*(int *)((v0_7 + 0x0))) < 0)) goto L_C03F55A;
    *(unsigned int *)((v0_7 + 0x0)) = ((*(int *)((v0_7 + 0x0))) - 1);
    L_C03F55A:;
    if (((int)(*(int *)((v0_7 + 0x0))) >= 0)) goto L_C03F564;
    v0_0 = (0x2);
    goto L_C03F746;
}

int FUN_0c04b73c(void)
{
    int stk[6];
    register int t5;
    register float u13;
    register int t16;
    register int t18;
    register int t19;
    register int t30;
    register float u38;
    register int t41;
    register int t43;
    register int t44;
    register int t55;
    register int t58;
    register int t63;
    register int t66;
    register int t77;
    register int t80;
    register int t85;
    register int t88;
    register float u6;
    float u7;
    float u8;
    register int t17;
    register float u31;
    float u32;
    float u33;
    register int t75;

    if ((*(int *)0xC175C84) == 1) {
        FUN_0c027280(0x5);
        FUN_0c059908(0x9);
    }
    t5 = FUN_0c04ba04(0xC175930);
    if ((t5 != 0) && (((u6 = *(float *)0xC175934, !(u6 > -3.0f)) && (u7 = (((struct o0_float *)0xC131610)->v), u7 > -3.0f)) || (!(-10.0f > u6) && (u8 = (((struct o0_float *)0xC131610)->v), -10.0f > u8)))) {
        u13 = 0.5f;
        if (-10.0f > ((((struct o0_float *)0xC131610)->v))) {
            u13 = 0.699999988f;
        }
        t16 = (FUN_0c07ff00());
        t18 = 0x4;
        t19 = 0xC175A58;
        for (;;) {
            if (t18 == 0) {
                break;
            }
            t17 = 0xC07FF00;
            t16 = 0xC;
            t16 = (FUN_0c07ff00());
            t16 = 0x4;
            *(float *)((((int)stk + 0) + t16)) = -3.0f;
            t16 = 0x10;
            *(float *)((((int)stk + 0) + t16)) = u13;
            t16 = (FUN_0c02e42a(((int)stk + 0), (((int)stk + 0) + 0xC), 0x5));
            t16 = 0x10;
            *(float *)((((int)stk + 0) + t16)) = (u13 * (1.0f + 1.0f));
            t16 = (FUN_0c02e42a(((int)stk + 0), (((int)stk + 0) + 0xC), 0x5));
            t17 = 0x84;
            t18 = (t18 - 1);
            t19 = (t19 + t17);
        }
        FUN_0c058ca6(0x6A9, 0x0);
    }
    t30 = FUN_0c04ba42(0xC175930);
    if ((t30 != 0) && (((u31 = *(float *)0xC175934, !(u31 > -20.0f)) && (u32 = (((struct o0_float *)0xC131610)->v), u32 > -20.0f)) || (!(-27.0f > u31) && (u33 = (((struct o0_float *)0xC131610)->v), -27.0f > u33)))) {
        u38 = 0.5f;
        if (-10.0f > ((((struct o0_float *)0xC131610)->v))) {
            u38 = 0.699999988f;
        }
        t41 = (FUN_0c07ff00());
        t43 = 0x4;
        t44 = 0xC175A58;
        for (;;) {
            if (t43 == 0) {
                break;
            }
            t41 = 0xC;
            t41 = (FUN_0c07ff00());
            t41 = 0x4;
            *(float *)((((int)stk + 0) + t41)) = -20.0f;
            t41 = 0x10;
            *(float *)((((int)stk + 0) + t41)) = u38;
            t41 = (FUN_0c02e42a(((int)stk + 0), (((int)stk + 0) + 0xC), 0x5));
            t41 = 0x10;
            *(float *)((((int)stk + 0) + t41)) = (u38 * (1.0f + 1.0f));
            t41 = (FUN_0c02e42a(((int)stk + 0), (((int)stk + 0) + 0xC), 0x5));
            t43 = (t43 - 1);
            t44 = (t44 + (0x84));
        }
        FUN_0c058ca6(0x6A9, 0x0);
    }
    t55 = FUN_0c04ba04(0xC177D38);
    if (t55 != 0) {
        t58 = 0x2;
        if ((*(int *)0xC175C84) == 1) {
            t58 = 0x6;
        }
        FUN_0c027280(t58);
    }
    t63 = FUN_0c04ba42(0xC177D38);
    if (t63 != 0) {
        t66 = 0x3;
        if ((*(int *)0xC175C84) == 1) {
            t66 = 0x7;
        }
        FUN_0c027280(t66);
    }
    FUN_0c07ff00();
    *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) + ((*(float *)(((int)stk + 16))) - ((((struct o4_float *)0xC131610)->v))));
    (((struct o4_float *)0xC131610)->v) = ((((struct o4_float *)(t75))->v));
    t77 = FUN_0c04ba04(t75);
    if (t77 != 0) {
        t80 = 0x2;
        if ((*(int *)0xC175C84) == 1) {
            t80 = 0xA;
        }
        FUN_0c059908(t80);
    }
    t85 = FUN_0c04ba42((((int)stk + 0) + 0xC));
    if (t85 != 0) {
        t88 = 0x3;
        if ((*(int *)0xC175C84) == 1) {
            t88 = 0xB;
        }
        FUN_0c059908(t88);
    }
    if ((*(int *)0xC2ADF0C) != 0) {
        FUN_0c027280(0x1);
        if ((*(int *)0xC175C84) == 1) {
            FUN_0c059908(0x1);
        }
    }
    (((struct o0_float *)0xC131610)->v) = (*(float *)0xC175934);
    FUN_0c075c60(0xC5C0000);
    return (FUN_0c075c60(0xC5C0458));
}

int gdFsGetStatG(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10)
{
    int stk[10];

    register int R1;
    register int R2;
    register int R3;
    register float F14;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_10;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    register float w0_0;
    v0_7 = a5;
    v0_4 = a6;
    v0_5 = a7;
    w0_0 = f10;
    *(unsigned int *)(((*(int *)0xC1737EC) + 0x20)) = 0x1;
    v0_2 = *(int *)(((*(int *)0xC1737EC) + 0x1C));
    v0_0 = (0x0);
    v0_1 = (0xC1737EC);
    v0_3 = (v0_2);
    if ((v0_2 != 0)) goto L_C149FB4;
    v0_6 = (0x0);
    L_C149FB6:;
    v0_9 = ((((int)stk + 0) + 0x1C));
    v0_2 = ((((int (*)(int, int, int, int, float, float, float, float, float, float, float))((*(int *)(((*(int *)(((*(int *)((v0_1 + 0x0))) + 0xC))) + 0x10)))))(v0_6, (((int)stk + 0) + 0x1C), v0_4, v0_5, f4, f5, f6, f7, f8, f9, w0_0)));
    if (!((v0_3 != 0))) goto L_C14A214;
    v0_10 = (v0_2);
    v0_8 = (0x2);
    if ((v0_2 == 0)) goto L_C14A006;
    if ((v0_10 == 1)) goto L_C14A006;
    if ((v0_10 != 65)) goto L_C149FE2;
    v0_4 = ((int (*)(int, int, int, int, float, float, float, float, float, float, float))((*(int *)(((*(int *)(((*(int *)((v0_1 + 0x0))) + 0xC))) + 0x24)))))((*(int *)((v0_3 + 0x3C))), ((int)stk + 0), v0_4, v0_5, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, w0_0);
    v0_6 = (v0_4);
    if ((v0_4 != 0)) goto L_C14A13E;
    if (((int)(*(int *)(((int)stk + 0))) <= 0)) goto L_C14A134;
    (((struct o4A_ushort *)(v0_3))->v) = v0_0;
    goto L_C14A138;
    L_C14A214:;
    *(unsigned int *)(((*(int *)((v0_1 + 0x0))) + 0x20)) = v0_0;
    return v0_2;
    L_C14A138:;
    *(unsigned int *)((v0_3 + 0x18)) = (*(int *)((v0_3 + 0x20)));
    goto L_C14A214;
    L_C14A134:;
    (((struct o4A_ushort *)(v0_3))->v) = v0_8;
    goto L_C14A138;
    L_C14A13E:;
    if ((v0_6 != 1)) goto L_C14A214;
    *(unsigned int *)((v0_3 + 0x18)) = (*(int *)(((int)stk + 0)));
    goto L_C14A214;
    L_C149FE2:;
    if ((v0_10 != 4)) goto L_C149FEA;
    (((struct o40_uint *)(v0_3))->v) = (*(int *)((v0_9 + 0x8)));
    if ((((((struct o48_short *)(v0_3))->v)) != 1)) goto L_C14A214;
    *(unsigned int *)((v0_3 + 0x18)) = (*(int *)((v0_9 + 0x0)));
    goto L_C14A214;
    L_C149FEA:;
    if ((v0_10 != 67)) goto L_C149FF2;
    goto L_C14A214;
    L_C149FF2:;
    if (!((v0_10 != 5))) goto L_C14A17C;
    if ((v0_10 != 64)) goto L_C14A002;
    goto L_C14A17C;
    L_C14A17C:;
    (((struct o50_ushort *)(v0_3))->v) = v0_2;
    (((struct o52_ushort *)(v0_3))->v) = (*(int *)((v0_9 + 0x0)));
    (((struct o44_uint *)(v0_3))->v) = (*(int *)((v0_9 + 0x4)));
    *(unsigned int *)((v0_3 + 0x3C)) = v0_0;
    *(unsigned int *)(((*(int *)((v0_1 + 0x0))) + 0x1C)) = v0_0;
    if ((((((struct o52_short *)(v0_3))->v)) != -29)) goto L_C14A1C8;
    if ((((((struct o44_int *)(v0_3))->v)) != 58)) goto L_C14A1B8;
    v0_7 = gdFsGetDrvStatG(v0_6, v0_7, v0_4, v0_5);
    v0_6 = (v0_7);
    if ((v0_7 == 6)) goto L_C14A1B0;
    if ((v0_6 != 0)) goto L_C14A1C8;
    L_C14A1B0:;
    (((struct o52_ushort *)(v0_3))->v) = 0xFFFFFFE9;
    L_C14A1C8:;
    v0_7 = (((struct o52_short *)(v0_3))->v);
    v0_6 = (v0_7);
    if ((v0_7 == -23)) goto L_C14A1D8;
    if ((v0_6 != -33)) goto L_C14A1DE;
    L_C14A1D8:;
    *(unsigned int *)(((*(int *)((v0_1 + 0x0))) + 0x34)) = 0x1;
    L_C14A1DE:;
    if (((*(int *)(((*(int *)((v0_1 + 0x0))) + 0x24))) == 0)) goto L_C14A1F4;
    v0_6 = *(int *)((v0_1 + 0x0));
    v0_6 = ((int (*)(int, int, int, int, float, float, float, float, float, float, float))((*(int *)((v0_6 + 0x24)))))((*(int *)((v0_6 + 0x28))), ((((struct o52_short *)(v0_3))->v)), v0_4, v0_5, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, w0_0);
    L_C14A1F4:;
    if (((*(int *)((v0_3 + 0x34))) == 0)) goto L_C14A214;
    v0_3 = ((int (*)(int, int, int, int, float, float, float, float, float, float, float))((*(int *)((v0_3 + 0x34)))))((*(int *)((v0_3 + 0x38))), ((((struct o52_short *)(v0_3))->v)), v0_4, v0_5, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, w0_0);
    goto L_C14A214;
    L_C14A1B8:;
    if ((((((struct o44_int *)(v0_3))->v)) != 0x104)) goto L_C14A1C8;
    (((struct o52_ushort *)(v0_3))->v) = 0xFFFFFFDB;
    goto L_C14A1C8;
    L_C14A002:;
    (((struct o50_ushort *)(v0_3))->v) = (unsigned char)v0_2;
    *(unsigned int *)((v0_3 + 0x3C)) = v0_0;
    *(unsigned int *)(((*(int *)((v0_1 + 0x0))) + 0x1C)) = v0_0;
    goto L_C14A214;
    L_C14A006:;
    v0_6 = (((struct o48_short *)(v0_3))->v);
    *(unsigned int *)(((*(int *)((v0_1 + 0x0))) + 0x1C)) = v0_0;
    (((struct o50_ushort *)(v0_3))->v) = v0_2;
    *(unsigned int *)((v0_3 + 0x3C)) = v0_0;
    (((struct o48_ushort *)(v0_3))->v) = v0_0;
    v0_6 = (v0_6);
    if ((v0_2 == 1)) goto L_C14A022;
    goto L_C14A214;
    L_C14A022:;
    v0_10 = (v0_6);
    if ((v0_6 != 1)) goto L_C14A05A;
    *(unsigned int *)((v0_3 + 0x18)) = (*(int *)((v0_9 + 0x0)));
    (((struct o4A_ushort *)(v0_3))->v) = v0_8;
    if (((*(int *)((v0_3 + 0x18))) != ((((*(int *)((v0_3 + 0x1C))) << 8) << 2) << 1))) goto L_C14A094;
    *(unsigned int *)((v0_3 + 0x14)) = ((*(int *)((v0_3 + 0x14))) + (*(int *)((v0_3 + 0x1C))));
    if (((*(int *)((v0_3 + 0x24))) != 0)) goto L_C14A050;
    goto L_C14A214;
    L_C14A050:;
    v0_3 = ((int (*)(int, int, int, int, float, float, float, float, float, float, float))((*(int *)((v0_3 + 0x24)))))((*(int *)((v0_3 + 0x28))), v0_7, v0_4, v0_5, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, w0_0);
    goto L_C14A214;
    L_C14A094:;
    (((struct o50_ushort *)(v0_3))->v) = 0x5;
    (((struct o52_ushort *)(v0_3))->v) = 0xFFFFFFED;
    (((struct o44_uint *)(v0_3))->v) = v0_0;
    goto L_C14A1C8;
    L_C14A05A:;
    if ((v0_10 == 3)) goto L_C14A078;
    v0_10 = (v0_6);
    if ((v0_6 != 4)) goto L_C14A07E;
    if (((*(int *)((v0_9 + 0x0))) != (*(int *)((v0_3 + 0x20))))) goto L_C14A094;
    *(unsigned int *)((v0_3 + 0x18)) = (*(int *)((v0_3 + 0x20)));
    *(unsigned int *)((v0_3 + 0x14)) = ((*(int *)((v0_3 + 0x14))) + (*(int *)((v0_3 + 0x1C))));
    L_C14A078:;
    (((struct o4A_ushort *)(v0_3))->v) = v0_8;
    goto L_C14A214;
    L_C14A07E:;
    if ((v0_10 != 7)) goto L_C14A0CA;
    v0_6 = (gdDecSubcode(((*(int *)((v0_1 + 0x0))) + 0x40), (((int)stk + 0) + 0x4))) == 0;
    if (v0_6) goto L_C14A0A6;
    goto L_C14A094;
    L_C14A0A6:;
    *(unsigned int *)(((*(int *)((v0_3 + 0x8))) + 0x0)) = (*(int *)(((int)stk + 4)));
    *(unsigned int *)(((*(int *)((v0_3 + 0x8))) + 0x4)) = (*(int *)(((int)stk + 8)));
    *(unsigned int *)(((*(int *)((v0_3 + 0x8))) + 0x8)) = (*(int *)(((int)stk + 12)));
    *(unsigned int *)(((*(int *)((v0_3 + 0x8))) + 0xC)) = (*(int *)(((int)stk + 16)));
    *(unsigned int *)(((*(int *)((v0_3 + 0x8))) + 0x10)) = ((*(int *)(((int)stk + 20))) & 0xFFFFFF);
    goto L_C14A214;
    L_C14A0CA:;
    if ((v0_6 == 8)) goto L_C14A0D4;
    goto L_C14A214;
    L_C14A0D4:;
    v0_7 = ((int (*)(int, int, int, int, float, float, float, float, float, float, float))(((((struct o48_int *)((*(int *)(((*(int *)((v0_1 + 0x0))) + 0xC)))))->v))))(0xC2D0CF8, 0xC2D0CFC, (*(int *)((v0_3 + 0x4))), 0xC2D0D00, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, w0_0);
    v0_6 = (v0_7);
    if ((v0_7 == 0)) goto L_C14A100;
    *(unsigned int *)((v0_3 + 0x3C)) = v0_6;
    (((struct o50_ushort *)(v0_3))->v) = 0x4;
    (((struct o48_ushort *)(v0_3))->v) = 0x6;
    *(unsigned int *)(((*(int *)((v0_1 + 0x0))) + 0x1C)) = v0_3;
    goto L_C14A214;
    L_C14A100:;
    (((struct o50_ushort *)(v0_3))->v) = 0x5;
    (((struct o52_ushort *)(v0_3))->v) = 0xFFFFFFE4;
    (((struct o44_uint *)(v0_3))->v) = v0_0;
    *(unsigned int *)(((*(int *)((v0_3 + 0x4))) + 0x0)) = v0_0;
    goto L_C14A1C8;
    L_C149FB4:;
    v0_6 = ((*(int *)((v0_3 + 0x3C))));
    goto L_C149FB6;
}

int kmiInitNTSC(void)
{
    int stk[126];
    register int t58;
    register int t65;
    register int t66;
    register int t67;
    register int t1;
    register int t7;
    register int t15;
    register int t21;
    register int t27;
    register int t68;

    *(unsigned int *)((((int)stk + 252) + 0x8)) = 0x359;
    if (((((((struct o20_int *)0xC3008D0)->v)) & 0x1) != 1) && ((t1 = (((struct o20_int *)0xC3008D0)->v), (t1 & 44) != 0) && (0x1 != 0))) {
        *(unsigned int *)((((int)stk + 252) + 0x14)) = 0x20C;
    } else {
        *(unsigned int *)((((int)stk + 252) + 0x14)) = 0x106;
    }
    *(unsigned int *)((((int)stk + 252) + 0x0)) = 0x7E;
    *(unsigned int *)((((int)stk + 252) + 0x4)) = 0x345;
    if (((((((struct o20_int *)0xC3008D0)->v)) & 0x1) != 1) && ((t7 = (((struct o20_int *)0xC3008D0)->v), (t7 & 44) != 0) && (0x1 != 0))) {
        *(unsigned int *)((((int)stk + 252) + 0xC)) = 0x24;
        *(unsigned int *)((((int)stk + 252) + 0x10)) = 0x204;
    } else {
        *(unsigned int *)((((int)stk + 252) + 0xC)) = 0x12;
        *(unsigned int *)((((int)stk + 252) + 0x10)) = 0x102;
    }
    *(unsigned int *)((((int)stk + 252) + 0x18)) = 0x3F;
    if ((((((struct o20_int *)0xC3008D0)->v)) & 32) != 0) {
        (((struct o74_uint *)(((int)stk + 252)))->v) = 0x104;
    } else {
        (((struct o74_uint *)(((int)stk + 252)))->v) = 0x102;
    }
    (((struct o78_uint *)(((int)stk + 252)))->v) = 0x15;
    if (((((((struct o20_int *)0xC3008D0)->v)) & 0x1) != 1) && ((t15 = (((struct o20_int *)0xC3008D0)->v), (t15 & 44) != 0) && (0x1 != 0))) {
        *(unsigned int *)((((int)stk + 252) + 0x1C)) = 0x6;
    } else {
        *(unsigned int *)((((int)stk + 252) + 0x1C)) = 0x3;
    }
    if (((((((struct o20_int *)0xC3008D0)->v)) & 0x1) != 1) && ((t21 = (((struct o20_int *)0xC3008D0)->v), (t21 & 44) != 0) && (0x1 != 0))) {
        *(unsigned int *)((((int)stk + 252) + 0x20)) = 0x16C;
    } else {
        *(unsigned int *)((((int)stk + 252) + 0x20)) = 0x319;
    }
    if (((((((struct o20_int *)0xC3008D0)->v)) & 0x1) != 1) && ((t27 = (((struct o20_int *)0xC3008D0)->v), (t27 & 44) != 0) && (0x1 != 0))) {
        *(unsigned int *)((((int)stk + 252) + 0x24)) = 0x1F;
    } else {
        *(unsigned int *)((((int)stk + 252) + 0x24)) = 0xF;
    }
    *(unsigned int *)((((int)stk + 252) + 0x28)) = 0x1;
    *(unsigned int *)((((int)stk + 252) + 0x2C)) = 0x0;
    if ((((((struct o20_int *)0xC3008D0)->v)) & 0x1) == 1) {
        if (0x0 != 0) {
            *(unsigned int *)((((int)stk + 252) + 0x30)) = 0x1;
        } else {
            *(unsigned int *)((((int)stk + 252) + 0x30)) = 0x0;
        }
    } else {
        if ((((((struct o20_int *)0xC3008D0)->v)) & 44) != 0) {
            if (0x1 != 0) {
                *(unsigned int *)((((int)stk + 252) + 0x30)) = 0x1;
            } else {
                *(unsigned int *)((((int)stk + 252) + 0x30)) = 0x0;
            }
        } else {
            if (0x0 != 0) {
                *(unsigned int *)((((int)stk + 252) + 0x30)) = 0x1;
            } else {
                *(unsigned int *)((((int)stk + 252) + 0x30)) = 0x0;
            }
        }
    }
    *(unsigned int *)((((int)stk + 252) + 0x34)) = 0x0;
    *(unsigned int *)((((int)stk + 252) + 0x38)) = 0x0;
    *(unsigned int *)((((int)stk + 252) + 0x3C)) = 0x0;
    (((struct o40_uint *)(((int)stk + 252)))->v) = 0x0;
    (((struct o44_uint *)(((int)stk + 252)))->v) = 0x0;
    if (((((struct o0_int *)0xC3008D0)->v)) == 6) {
        (((struct o70_uint *)(((int)stk + 252)))->v) = 0x16;
    } else {
        (((struct o70_uint *)(((int)stk + 252)))->v) = 0x1F;
    }
    if ((((((struct o20_int *)0xC3008D0)->v)) & 16) != 0) {
        (((struct o6C_uint *)(((int)stk + 252)))->v) = 0x0;
    } else {
        (((struct o6C_uint *)(((int)stk + 252)))->v) = 0x1;
    }
    (((struct o48_uint *)(((int)stk + 252)))->v) = 0x1;
    (((struct o4C_uint *)(((int)stk + 252)))->v) = 0x0;
    (((struct o50_uint *)(((int)stk + 252)))->v) = 0x0;
    (((struct o54_uint *)(((int)stk + 252)))->v) = 0x0;
    (((struct o58_uint *)(((int)stk + 252)))->v) = 0x0;
    (((struct o5C_uint *)(((int)stk + 252)))->v) = 0x0;
    (((struct o68_uint *)(((int)stk + 252)))->v) = 0x0;
    (((struct oF8_uint *)(((int)stk + 252)))->v) = 0xA4;
    (((struct o64_uint *)(((int)stk + 252)))->v) = 0x1E0;
    (((struct o60_uint *)(((int)stk + 252)))->v) = 0x0;
    if ((((((struct o20_int *)0xC3008D0)->v)) & 0x1) == 1) {
        if (0x0 != 0) {
            (((struct oF0_uint *)(((int)stk + 252)))->v) = 0x12;
        } else {
            (((struct oF0_uint *)(((int)stk + 252)))->v) = 0x11;
        }
    } else {
        if ((((((struct o20_int *)0xC3008D0)->v)) & 44) != 0) {
            if (0x1 != 0) {
                (((struct oF0_uint *)(((int)stk + 252)))->v) = 0x12;
            } else {
                (((struct oF0_uint *)(((int)stk + 252)))->v) = 0x11;
            }
        } else {
            if (0x0 != 0) {
                (((struct oF0_uint *)(((int)stk + 252)))->v) = 0x12;
            } else {
                (((struct oF0_uint *)(((int)stk + 252)))->v) = 0x11;
            }
        }
    }
    (((struct oF4_uint *)(((int)stk + 252)))->v) = 0x12;
    (((struct o8_uint *)0xC300BE8)->v) = 0xF0;
    t58 = *(int *)((((int)stk + 252) + 0xC));
    (((struct o0_uint *)0xC300BE8)->v) = ((((int)((unsigned int)((int)((unsigned int)t58 + (unsigned int)0x0)) + ((((int)0x0 > (int)t58)) ? 1u : 0u))) >> 1) + ((((struct o8_int *)0xC300BE8)->v)));
    (((struct o4_uint *)0xC300BE8)->v) = (*(int *)((((int)stk + 252) + 0xC)));
    /* manual: the original copies the 63-word block at stk+252 to the outgoing argument area (_quick_mvn) and passes it by value */
    return (FUN_0c1675c0(*(Stk63 *)((int)stk + 252)));
}

int FUN_0c1595e8(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    if (((0xFF00 & a7) != 0x1000) && ((0xFF00 & a7) != 0x1100)) {
        *(unsigned int *)((a4 + 0x0)) = 0x2;
    } else {
        *(unsigned int *)((a4 + 0x0)) = 0x3;
    }
    if (((0xFF00 & a7) != 0x500) && ((0xFF00 & a7) != 0x600)) {
        if (((0xFF00 & a7) != 0x700) && ((0xFF00 & a7) != 0x800)) {
            *(unsigned int *)((a4 + 0x4)) = 0x1;
            if ((unsigned char)a7 != 0) {
                if ((unsigned char)a7 != 1) {
                    if ((unsigned char)a7 != 2) {
                        if ((unsigned char)a7 != 3) {
                            t0 = 0x4;
                            if ((unsigned char)a7 != 4) {
                            } else {
                                *(unsigned int *)((a4 + 0x8)) = 0x20000000;
                                t0 = 0x0;
                            }
                            t1 = t0;
                        } else {
                            *(unsigned int *)((a4 + 0x8)) = 0x18000000;
                            t1 = 0x0;
                        }
                        t0 = t1;
                    } else {
                        *(unsigned int *)((a4 + 0x8)) = 0x10000000;
                        t0 = 0x0;
                    }
                    t1 = t0;
                } else {
                    *(unsigned int *)((a4 + 0x8)) = 0x8000000;
                    t1 = 0x0;
                }
                t0 = t1;
            } else {
                *(unsigned int *)((a4 + 0x8)) = 0x0;
                t0 = 0x0;
            }
            t1 = t0;
        } else {
            if (((((struct oA0_int *)((*(int *)0xC174098)))->v)) == 3) {
                *(unsigned int *)((a4 + 0x4)) = 0x3;
            } else {
                *(unsigned int *)((a4 + 0x4)) = 0x1;
            }
            *(unsigned int *)((a4 + 0x8)) = 0x30000000;
            t1 = 0x0;
        }
        t0 = t1;
    } else {
        if (((((struct oA0_int *)((*(int *)0xC174098)))->v)) == 3) {
            *(unsigned int *)((a4 + 0x4)) = 0x3;
        } else {
            *(unsigned int *)((a4 + 0x4)) = 0x1;
        }
        *(unsigned int *)((a4 + 0x8)) = 0x28000000;
        t0 = 0x0;
    }
    *(unsigned int *)((a4 + 0xC)) = a5;
    *(unsigned int *)((a4 + 0x10)) = a6;
    t1 = t0;
    if ((a5 != 8) && ((a5 != 16) && ((a5 != 32) && ((a5 != 64) && ((a5 != 0x80) && ((a5 != 0x100) && ((a5 != 0x200) && (a5 != 0x400)))))))) {
        t1 = 0x4;
    }
    t0 = t1;
    if ((a6 != 8) && ((a6 != 16) && ((a6 != 32) && ((a6 != 64) && ((a6 != 0x80) && ((a6 != 0x100) && ((a6 != 0x200) && (a6 != 0x400)))))))) {
        t0 = 0x4;
    }
    t1 = t0;
    if (((0xFF00 & a7) != 0x900) && (((0xFF00 & a7) != 0xB00) && (((0xFF00 & a7) != 0xD00) && (((0xFF00 & a7) != 0x500) && (((0xFF00 & a7) != 0x700) && (a5 != a6)))))) {
        t1 = 0x4;
    }
    *(unsigned int *)((a4 + 0x18)) = 0x0;
    if (((0xFF00 & a7) == 0xF00) || (((0xFF00 & a7) == 0x200) || (((0xFF00 & a7) == 0x400) || (((0xFF00 & a7) == 0x1100) || (((0xFF00 & a7) == 0x600) || ((0xFF00 & a7) == 0x800)))))) {
        *(unsigned int *)((a4 + 0x18)) = ((*(int *)((a4 + 0x18))) | 0x1);
    }
    if ((0xFF00 & a7) != 0xE00) {
        if (((0xFF00 & a7) == 0xF00) || (((0xFF00 & a7) == 0x100) || (((0xFF00 & a7) == 0x200) || ((0xFF00 & a7) == 0xD00)))) {
            *(unsigned int *)((a4 + 0x18)) = ((*(int *)((a4 + 0x18))) | 0x4);
        }
    } else {
        *(unsigned int *)((a4 + 0x18)) = ((*(int *)((a4 + 0x18))) | 0x4);
    }
    if (((0xFF00 & a7) == 0x300) || (((0xFF00 & a7) == 0x400) || (((0xFF00 & a7) == 0x1000) || ((0xFF00 & a7) == 0x1100)))) {
        *(unsigned int *)((a4 + 0x18)) = (((*(int *)((a4 + 0x18))) | 0x8) | 0x4);
    }
    if ((0xFF00 & a7) == 0xB00) {
        *(unsigned int *)((a4 + 0x18)) = ((*(int *)((a4 + 0x18))) | 0x10);
    }
    if (((0xFF00 & a7) == 0x500) || (((0xFF00 & a7) == 0x600) || (((0xFF00 & a7) == 0x700) || ((0xFF00 & a7) == 0x800)))) {
        *(unsigned int *)((a4 + 0x18)) = (((*(int *)((a4 + 0x18))) | 0x20) | 0x4);
    }
    kmtex_TextureSize(a4);
    return t1;
}
