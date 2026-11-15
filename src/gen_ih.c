/* Straight-line functions with calls and guards (batch gen_ih): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o14_int { char p[0x14]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int ADXT_SetOutVol(int, int);
int FUN_0c01e5cc(int, int, int);
int FUN_0c01e5f8(int, int, int, int, int);
int FUN_0c01e772(int);
int FUN_0c01e83e(int);
int FUN_0c058f64(int, int, int, int);
int FUN_0c059074(int);
int FUN_0c069e54(int);
int FUN_0c14e15c(int, int, int);
int FUN_0c14e8e4(int, int, int, int);
int FUN_0c14ec14(int, int, int);
int Voice_ShutUp(int, int);
int gdc_GetVolGainMute(int);
int FUN_0c069e78(int a4);
void gdc_FadeManStreamSong(int a4, int a5, int a6, int a7);
int FUN_0c01e990(int a4, int a5, int a6, int a7);
int gdc_PlayStreamSong(int a4, int a5, int a6, int a7);
int FUN_0c01ea8e(int a4, int a5, int a6, int a7);
int FUN_0c01eaea(int a4, int a5, int a6, int a7);
int FUN_0c01ee10(int a4, int a5, int a6, int a7);
int FUN_0c01e6f0(int a4, int a5, int a6, int a7);

int FUN_0c069e78(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c069e54(a4);
    t1 = FUN_0c059074(0x1);
    if ((t1 == 0) && ((t2 = *(int *)0xC2B9C2C, (int)a4 >= 0) && ((int)a4 < (int)0x3))) {
        *(unsigned int *)0xC13B3E0 = (*(int *)((((((int)((int)t0 % (int)(*(int *)((((*(int *)(((a4 << 2) + 0xC13B3D4))) + ((t2 - 1) << 2)) + 0x0))))) << 2) + (*(int *)((((*(int *)(((a4 << 2) + 0xC13B3C8))) + ((t2 - 1) << 2)) + 0x0)))) + 0x0)));
        Voice_ShutUp(0x1, ((t2 - 1) << 2));
        return FUN_0c058f64(0xC13B3E0, 0x1, (*(int *)((((t2 - 1) << 2) + 0xC11037C))), 0x0);
    }
    return t1;
}

void gdc_FadeManStreamSong(int a4, int a5, int a6, int a7)
{
    register int t6;
    register int t9;

    if (((((struct o0_int *)0xC2690D4)->v)) != 0) {
        if ((int)((((struct o4_int *)0xC2690D4)->v)) > 0) {
            (((struct o4_uint *)0xC2690D4)->v) = (((((struct o4_int *)0xC2690D4)->v)) - 1);
            return;
        }
        t6 = (((struct o8_int *)0xC2690D4)->v);
        if ((int)t6 > 0) {
            t9 = FUN_0c01e83e((int)(((float)t6 / (float)((((struct oC_int *)0xC2690D4)->v))) * (float)(*(signed char *)0xC1ECD50)));
            ADXT_SetOutVol((*(int *)0xC1ECD64), t9);
            (((struct o8_uint *)0xC2690D4)->v) = (((((struct o8_int *)0xC2690D4)->v)) - 1);
            return;
        }
        (((struct o0_uint *)0xC2690D4)->v) = 0x0;
        FUN_0c01e6f0(0xC2690D8, 0xC2690D4, a6, a7);
    return;
    }
}

int FUN_0c01e990(int a4, int a5, int a6, int a7)
{
    register int t6;

    *(unsigned int *)0xC2690D4 = 0x0;
    (((struct o0_uchar *)0xC1ECD50)->v) = (int)(((float)(unsigned char)(*(signed char *)0xC28ED9D) / ((((struct o0_float *)0xC01EB7C)->v))) * ((((struct o4_float *)0xC01EB7C)->v)));
    FUN_0c01e6f0(a4, a5, a6, a7);
    FUN_0c01e5f8(0x2, 0x0, a4, a5, a6);
    t6 = FUN_0c01e83e((*(signed char *)0xC1ECD50));
    return ADXT_SetOutVol(((((struct o14_int *)0xC1ECD50)->v)), t6);
}

int gdc_PlayStreamSong(int a4, int a5, int a6, int a7)
{
    register int t5;

    *(unsigned int *)0xC2690D4 = 0x0;
    (((struct o0_uchar *)0xC1ECD50)->v) = (int)(((float)(unsigned char)(*(signed char *)0xC28ED9D) / 8.0f) * 127.0f);
    FUN_0c01e6f0(a4, a5, a6, a7);
    FUN_0c14e15c(((((struct o14_int *)0xC1ECD50)->v)), 0x1, a4);
    t5 = FUN_0c01e83e((*(signed char *)0xC1ECD50));
    return ADXT_SetOutVol(((((struct o14_int *)0xC1ECD50)->v)), t5);
}

int FUN_0c01ea8e(int a4, int a5, int a6, int a7)
{
    int stk[1];
    register int t7;

    FUN_0c01e6f0(a4, a5, a6, a7);
    (((struct oC_uint *)0xC2690E4)->v) = 0x0;
    FUN_0c01e5cc(0x2, 0x0, ((((((((struct o4_int *)0xC2690E4)->v)) << 2) << 2) << 1) + 0xC0997C5));
    (((struct o8_uint *)0xC2690E4)->v) = (FUN_0c01e772(((((struct oC_int *)0xC2690E4)->v))));
    (((struct o0_uint *)0xC2690E4)->v) = 0x1;
    t7 = gdc_GetVolGainMute((*(signed char *)0xC1ECD50));
    return ADXT_SetOutVol((*(int *)0xC1ECD64), t7);
}

int FUN_0c01eaea(int a4, int a5, int a6, int a7)
{
    register int t1;
    register int t2;

    FUN_0c01e6f0(a4, a5, a6, a7);
    (((struct o0_uint *)0xC2690E4)->v) = 0x0;
    t1 = (((struct o4_int *)0xC2690E4)->v);
    t2 = ((~(((~(t1 + 0x1)) + 0x1) & 0x3)) + 0x1);
    if ((int)(t1 + 0x1) >= 0) {
        t2 = ((t1 + 0x1) & 0x3);
    }
    (((struct o4_uint *)0xC2690E4)->v) = t2;
    return t2;
}

int FUN_0c01ee10(int a4, int a5, int a6, int a7)
{
    int stk[2];

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned char *)(((int)stk + 4)) = a5;
    return FUN_0c14ec14((*(int *)((((*(int *)(((int)stk + 0))) << 2) + 0xC1ECD54))), 0x0, (*(signed char *)(((int)stk + 4))));
}

int FUN_0c01e6f0(int a4, int a5, int a6, int a7)
{
    return FUN_0c14e8e4((*(int *)0xC1ECD64), a5, a6, a7);
}
