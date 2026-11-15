/* Straight-line functions with calls and guards (batch gen_ia): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o108C_short { char p[0x108C]; short v; };
struct o108C_ushort { char p[0x108C]; unsigned short v; };
struct o14_float { char p[0x14]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2C_int { char p[0x2C]; int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o30_float { char p[0x30]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
int FUN_0c032150(int);
int FUN_0c032210(int, int, int, int, int, int, int);
int FUN_0c0323d0(int, int, int, int);
int FUN_0c0331b8(int, int);
int FUN_0c03332c(int, int, int, int);
int FUN_0c033578(int, int, float, float, float);
int FUN_0c03378c(int, int, int, int, float);
int FUN_0c03386a(int);
int FUN_0c0339c0(int);
int FUN_0c0339fc(int);
int FUN_0c034320(int, int);
int FUN_0c0343b8(int, int);
int FUN_0c0345ec(int, int, int, float, float, float);
int FUN_0c0350a6(int, int, int, int, int, float, float);
int FUN_0c035a20(int);
int FUN_0c035a5e(int, int, float, float);
int FUN_0c03b318(int);
int FUN_0c03b5e0(float, float, float);
int FUN_0c03bc10(int, int, int, int, int, int, float, float, float);
int FUN_0c03e358(int, int);
int FUN_0c03e792(int, int);
int FUN_0c03ea54(void);
int FUN_0c03f154(int);
int FUN_0c0584da(void);
int FUN_0c0584e2(void);
int FUN_0c0585ca(int, int);
int FUN_0c058688(int);
int FUN_0c058ca6(int, int);
int FUN_0c058e20(void);
int FUN_0c078890(float);
int FUN_0c07ffbc(int, int, int);
int buIsExistFile(int, int);
int buIsReady(int);
int gdc_VolStreamSong(int);
int FUN_0c0372a0(int a4);
int FUN_0c03b324(void);

int FUN_0c0372a0(int a4)
{
    int stk[4];
    int t134;
    int t139;

    register int R0;
    register int R1;
    register int R2;
    register int R3;
    register int R7;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    v0_6 = a4;
    *(unsigned int *)(((int)stk + 12)) = 0xC2A46AC;
    v0_0 = (0xC2A4FA8);
    v0_1 = (0x2);
    if (((int)((((struct o0_int *)0xC2A4F80)->v)) < (int)0x2)) goto L_C037334;
    v0_2 = buIsReady((*(int *)((v0_0 + 0x0))));
    R0 = (v0_2);
    if ((v0_2 != 0)) goto L_C037334;
    FUN_0c03386a(0x4);
    return FUN_0c0339fc(0x0);
    L_C037334:;
    if (!((((((struct o4_int *)0xC2A46E4)->v)) == 0))) goto L_C037776;
    if ((((((struct o0_int *)0xC2A46E4)->v)) != 1)) goto L_C037358;
    (((struct o0_uint *)0xC2A46E4)->v) = v0_1;
    if ((((*(int *)(((*(int *)(((int)stk + 12))) + 0x1C))) & 6) == 0)) goto L_C037358;
    *(unsigned int *)(((*(int *)(((int)stk + 12))) + 0x1C)) = v0_1;
    goto L_C037358;
    L_C037776:;
    return R0;
    L_C037358:;
    (((struct o4_uint *)0xC2A4F80)->v) = ((((((struct o0_int *)0xC2A4F80)->v)) >> 1) << 1);
    v0_3 = FUN_0c034320(0x1, 0x14);
    v0_5 = (0x0);
    v0_2 = (0xC0773E8);
    v0_6 = (v0_3);
    v0_2 = (0xC2A4F9C);
    w0_0 = (320.0f);
    if ((v0_3 == 0)) goto L_C0373D2;
    if (!((v0_6 == 1))) goto L_C0376B6;
    v0_3 = (0xC0C0284);
    goto L_C037388;
    L_C0376B6:;
    v0_1 = FUN_0c0343b8(0x1, 0x14);
    v0_0 = (v0_1);
    w0_1 = (240.0f);
    if ((v0_1 != 0)) goto L_C037740;
    return FUN_0c035a5e(0x4, 0x0, w0_0, w0_1);
    L_C037740:;
    FUN_0c035a5e(0x4, 0x1, w0_0, w0_1);
    R0 = (v0_0);
    if ((v0_0 != 1)) goto L_C037776;
    FUN_0c03386a(0x4);
    return FUN_0c0339c0(0x0);
    L_C037388:;
    v0_1 = buIsExistFile((*(int *)((v0_0 + 0x0))), v0_3);
    v0_4 = (v0_1);
    if ((v0_1 == -1)) goto L_C037388;
    if ((v0_4 == 0)) goto L_C0373C0;
    if (!((v0_4 == 0xFFFFFF05))) goto L_C037624;
    return FUN_0c0339fc(0x6);
    L_C037624:;
    return FUN_0c03e358(v0_4, 0x0);
    L_C0373C0:;
    *(unsigned int *)((v0_2 + 0x0)) = v0_5;
    FUN_0c03386a(0x6);
    FUN_0c035a20(0x4);
    goto L_C0376B6;
    L_C0373D2:;
    v0_3 = (0xC28DD0C);
    if (((*(signed char *)0xC28EDA7) == 0)) goto L_C0373E0;
    *(unsigned int *)0xC2A465C = v0_5;
    L_C0373E0:;
    if (((int)(*(int *)((v0_2 + 0x0))) > (int)0x3)) goto L_C0374A6;
    v0_4 = (0xC2A5858);
    w0_1 = (196.0f);
    w0_2 = ((*(float *)0xC2A5858));
    if ((((((struct o8_int *)0xC2A4F80)->v)) != 0)) goto L_C037468;
    if ((((((struct oC_int *)0xC2A4F80)->v)) != 0)) goto L_C037468;
    v0_6 = (0x24);
    v0_7 = (0xD);
    v0_8 = ((((((*(int *)((v0_0 + 0x0))) << 2) << 2) << 1) + 0xC0B6010));
    w0_3 = (w0_0);
    w0_1 = (w0_1);
    L_C037472:;
    FUN_0c0345ec(v0_6, v0_7, v0_8, w0_3, w0_1, w0_2);
    FUN_0c0345ec(0x24, 0xC, 0x0, w0_0, 262.0f, (*(float *)((v0_4 + 0x0))));
    FUN_0c0345ec(0x24, 0xD, (((((*(int *)((v0_0 + 0x0))) << 2) << 2) << 1) + 0xC0B6010), w0_0, 284.0f, (*(float *)((v0_4 + 0x0))));
    L_C0374A6:;
    if (((*(int *)((v0_2 + 0x0))) != 0)) goto L_C0374C6;
    v0_4 = *(int *)((v0_0 + 0x0));
    FUN_0c0585ca(((((v0_4 >> 1) << 1) + ((v0_4 >> 1) << 2)) + 0x1), 0x0);
    FUN_0c0584e2();
    L_C0374C6:;
    v0_4 = *(int *)((v0_2 + 0x0));
    *(unsigned int *)((v0_2 + 0x0)) = (v0_4 + 0x1);
    if ((v0_4 == 3)) goto L_C0374D4;
    goto L_C0376B6;
    L_C0374D4:;
    v0_6 = FUN_0c032150((*(int *)((v0_0 + 0x0))));
    v0_4 = (v0_6);
    v0_2 = (v0_5);
    if ((v0_6 == 0)) goto L_C0374E6;
    L_C037614:;
    FUN_0c058688(0x0);
    FUN_0c0584da();
    if ((v0_4 == 0)) goto L_C037644;
    goto L_C037624;
    L_C037644:;
    FUN_0c03e792(0x8, 0x1);
    FUN_0c058e20();
    gdc_VolStreamSong(0x7F);
    FUN_0c03ea54();
    (((struct o0_uint *)0xC2A46E4)->v) = 0x3;
    v0_6 = (0x9);
    if (((int)((((struct o0_int *)0xC2A4F80)->v)) < (int)v0_1)) goto L_C037684;
    if ((((((struct o2C_int *)0xC2A4F80)->v)) != -2)) goto L_C037684;
    *(unsigned int *)0xC2A469C = (((*(int *)0xC2A469C) & 0xFFFFFFFB) | v0_6);
    L_C037684:;
    (((struct o2C_uint *)0xC2A4F80)->v) = (*(int *)((v0_0 + 0x0)));
    if ((v0_2 == 0)) goto L_C0376AE;
    return FUN_0c03e358(v0_4, v0_2);
    L_C0376AE:;
    v0_0 = *(int *)(((int)stk + 12));
    *(unsigned int *)((v0_0 + 0x1C)) = ((*(int *)((v0_0 + 0x1C))) | v0_6);
    goto L_C0376B6;
    L_C0374E6:;
    v0_7 = buIsExistFile((*(int *)((v0_0 + 0x0))), 0xC0C0264);
    v0_6 = (v0_7);
    if ((v0_7 == -1)) goto L_C0374E6;
    if ((v0_6 != 0)) goto L_C037508;
    v0_6 = (FUN_0c0323d0((*(int *)((v0_0 + 0x0))), 0xC0C0264, 0xC28FCB4, 0x5)) == 0;
    if (v0_6) goto L_C037508;
    v0_2 = (0x1);
    L_C037508:;
    v0_7 = buIsExistFile((*(int *)((v0_0 + 0x0))), 0xC0C0274);
    v0_6 = (v0_7);
    if ((v0_7 == -1)) goto L_C037508;
    if ((v0_6 != 0)) goto L_C03752A;
    v0_6 = (FUN_0c0323d0((*(int *)((v0_0 + 0x0))), 0xC0C0274, 0xC2903E4, 0x5)) == 0;
    if (v0_6) goto L_C03752A;
    v0_2 = ((v0_2 | v0_1));
    L_C03752A:;
    v0_7 = buIsExistFile((*(int *)((v0_0 + 0x0))), 0xC0C0294);
    v0_6 = (v0_7);
    if ((v0_7 == -1)) goto L_C03752A;
    if ((v0_6 != 0)) goto L_C037614;
    v0_6 = v0_5;
    *(int *)((int)stk + 8) = v0_6;
    v0_5 = v0_5;
    *(int *)((int)stk + 4) = v0_5;
    *(int *)((int)stk + 0) = 0x0;
    v0_5 = (FUN_0c032210((*(int *)((v0_0 + 0x0))), 0xC0C0294, 0xC290B14, 0x28, 0x0, v0_5, v0_6)) != 0;
    if (v0_5) goto L_C037610;
    v0_5 = (FUN_0c07ffbc(0xC290B14, 0xC0C02A4, 0xA)) != 0;
    if (v0_5) goto L_C037610;
    t134 = (((struct o0_int *)0xC290B34)->v);
    v0_6 = (0xC290B34);
    v0_5 = (((((unsigned short)((((struct o108C_short *)(v0_3))->v)) & t134) == t134)));
    if ((!v0_5)) goto L_C0375E6;
    t139 = *(int *)((v0_6 + 0x4));
    if ((((*(int *)(((((*(int *)0xC2A465C) * 0x788) + (0x109C + v0_3)) + 0x4))) & t139) != t139)) goto L_C0375E6;
    FUN_0c0331b8((*(int *)((v0_0 + 0x0))), 0xC0C0294);
    L_C0375E6:;
    (((struct o108C_ushort *)(v0_3))->v) = (((((struct o108C_short *)(v0_3))->v)) | ((((struct o0_int *)0xC290B34)->v)));
    v0_5 = *(int *)0xC2A465C;
    *(unsigned int *)((((v0_5 * 0x788) + (0x109C + v0_3)) + 0x4)) = ((*(int *)((((v0_5 * 0x788) + (0x109C + v0_3)) + 0x4))) | ((((struct o4_int *)0xC290B34)->v)));
    goto L_C037614;
    L_C037610:;
    v0_2 = ((v0_2 | 0x4));
    goto L_C037614;
    L_C037468:;
    v0_6 = (0x224);
    v0_7 = (0x2);
    v0_8 = (0x0);
    w0_3 = (w0_0);
    w0_1 = (w0_1);
    goto L_C037472;
}

int FUN_0c03b324(void)
{
    int stk[9];
    register int t2;
    register int t3;
    register int t5;
    register int t6;
    register int t29;
    register int t30;
    register int t48;
    register int t86;
    register int t52;
    register int t55;
    register int t57;
    register int t62;
    register float u74;

    *(float *)(((int)stk + 8)) = ((((struct o1C_float *)0xC2A583C)->v));
    (((struct o1C_float *)0xC2A583C)->v) = 0.300000012f;
    (((struct o0_uint *)0xC2A583C)->v) = (((((struct o0_int *)0xC2A583C)->v)) & 0xFFFFDFFF);
    t2 = (((struct o0_int *)0xC1EC720)->v);
    t3 = 0xC1EC724;
    if ((int)t2 <= (int)0x1) {
        t3 = 0xC2A4664;
    }
    t5 = *(int *)((t3 + 0x0));
    t6 = FUN_0c03b318(0x0);
    if (t6 != 1) {
        if (t6 != 2) {
            *(unsigned int *)0xC2A58AC = 0x4;
        } else {
            if ((*(int *)0xC2A58AC) != 2) {
                if ((*(int *)0xC2AC2F0) == 1) {
                    FUN_0c058ca6(0x804A9, 0x0);
                } else {
                    FUN_0c058ca6(0x904A9, 0x0);
                }
            }
            *(unsigned int *)0xC2A58AC = 0x2;
        }
    } else {
        *(unsigned int *)0xC2A58AC = 0x3;
    }
    t29 = FUN_0c03f154(0x0);
    if (t29 == 3) {
        t30 = FUN_0c03f154(0x1);
        if (t30 == 1) {
            *(int *)((int)stk + 4) = 0xC12A93A;
            *(int *)((int)stk + 0) = 0x0;
            FUN_0c03bc10((*(int *)0xC2A58AC), (((t2 << 2) + t2) + t5), (*(int *)0xC175C80), (*(int *)0xC2A4FC8), 0x0, 0xC12A93A, 284.0f, 40.0f, ((((struct o1C_float *)0xC2A583C)->v)));
        } else {
            *(int *)((int)stk + 4) = 0xC0C05F0;
            *(int *)((int)stk + 0) = 0x0;
            FUN_0c03bc10((*(int *)0xC2A58AC), (((t2 << 2) + t2) + t5), (*(int *)0xC175C80), 0xFFFFFFFF, 0x0, 0xC0C05F0, 284.0f, 40.0f, ((((struct o1C_float *)0xC2A583C)->v)));
        }
    } else {
        *(int *)((int)stk + 4) = 0xC0C05F0;
        *(int *)((int)stk + 0) = 0x0;
        FUN_0c03bc10((*(int *)0xC2A58AC), (((t2 << 2) + t2) + t5), (*(int *)0xC175C80), 0xFFFFFFFF, 0x0, 0xC0C05F0, 284.0f, 40.0f, ((((struct o1C_float *)0xC2A583C)->v)));
    }
    t48 = *(int *)0xC2AC2F0;
    t86 = t48;
    if (t48 != 1) {
    } else {
        if ((int)((((struct o0_int *)0xC1EC720)->v)) <= (int)0x1) {
            FUN_0c033578(0x30, 0xC0C0600, 442.0f, 80.0f, 1.0f);
            t52 = (((struct o0_int *)0xC2AC5E0)->v);
            if ((int)t52 < 0) {
                FUN_0c033578(0x80, 0xC0C08CC, 568.0f, 80.0f, 1.0f);
                t55 = FUN_0c03332c(0xC2A5868, 0x5, 0x0, (-((((struct o0_int *)0xC2AC5E0)->v))));
                FUN_0c033578(0x80, t55, 575.0f, 80.0f, 1.0f);
            } else {
                t57 = FUN_0c03332c(0xC2A5868, 0x5, 0x0, t52);
                FUN_0c033578(0x30, t57, 575.0f, 80.0f, 1.0f);
            }
        } else {
            FUN_0c033578(0x30, 0xC0C0610, 442.0f, 80.0f, 1.0f);
            *(int *)((int)stk + 4) = 0xC;
            t62 = (((struct o4_int *)0xC1EC720)->v);
            FUN_0c0350a6(0x30, ((((struct o4_int *)0xC2AC5E0)->v)), 0x8, (*(int *)(((((t62 << 1) + t62) << 2) + 0xC09C8F4))), 0xC, ((((struct o0_float *)0xC03B630)->v)), 80.0f);
        }
        FUN_0c078890(1.0f);
        *(float *)(((int)stk + 24)) = 442.0f;
        *(float *)(((int)stk + 12)) = ((((struct oC_float *)0xC03B630)->v));
        u74 = (((struct o10_float *)0xC03B630)->v);
        *(float *)(((int)stk + 16)) = u74;
        *(float *)(((int)stk + 28)) = u74;
        FUN_0c03378c((((int)stk + 8) + 0x10), (((int)stk + 8) + 0x4), ((int)(((((*(float *)0xC177D9C) * ((((struct o14_float *)0xC03B630)->v))) / ((((struct o1C_float *)0xC03B630)->v)))) + ((((struct o20_float *)0xC03B630)->v))) & 0xFFFF), 0xFFFFC500, ((((struct o1C_float *)0xC2A583C)->v)));
        t86 = (FUN_0c03b5e0(((((struct o30_float *)0xC03B630)->v)), ((((struct o2C_float *)0xC03B630)->v)), ((((struct o1C_float *)0xC2A583C)->v))));
    }
    (((struct o0_uint *)0xC2A583C)->v) = (((((struct o0_int *)0xC2A583C)->v)) | 0x2000);
    (((struct o1C_float *)0xC2A583C)->v) = (*(float *)(((int)stk + 8)));
    return t86;
}
