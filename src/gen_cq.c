/* Straight-line functions with calls and guards (batch gen_cq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o42_short { char p[0x42]; short v; };
struct o44_short { char p[0x44]; short v; };
int ADXT_SetOutVol(int, int);
int FUN_0c01e742(int);
int FUN_0c01ea8e(int);
int FUN_0c161fee(int);
int gdc_GetVolGainMute(int);
int thunk_kmSetFogTable_0c071a70(int);
int thunk_mwRnaSetOutPan(int, int, int);
int FUN_0c01eb14(void);
int adxt_set_outpan(int a4);
int nlFogTableOff(void);

int FUN_0c01eb14(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t4;

    t0 = *(signed char *)0xC1ECD50;
    if ((*(int *)0xC2A464C) == 1) {
        t1 = gdc_GetVolGainMute(t0);
        ADXT_SetOutVol((*(int *)0xC1ECD64), t1);
        *(unsigned int *)0xC11D0C4 = 0x1;
    } else {
        if ((*(int *)0xC11D0C4) == 1) {
            t1 = gdc_GetVolGainMute(t0);
            ADXT_SetOutVol((*(int *)0xC1ECD64), t1);
            *(unsigned int *)0xC11D0C4 = 0x0;
        }
    }
    t0 = (((struct o0_int *)0xC2690E4)->v);
    t1 = (((struct o4_int *)0xC2690E4)->v);
    if (t0 != 1) {
        t2 = t0;
        if (t0 != 2) {
        } else {
            t0 = (((struct o10_int *)0xC2690E4)->v);
            if ((int)t0 < (int)0x3C) {
                t2 = ((~(((~(t1 + 0x1)) + 0x1) & 0x3)) + 0x1);
                if ((int)(t1 + 0x1) >= 0) {
                    t2 = ((t1 + 0x1) & 0x3);
                }
                (((struct o4_uint *)0xC2690E4)->v) = t2;
                t2 = (FUN_0c01ea8e(0xC2690E8));
            } else {
                t4 = gdc_GetVolGainMute((int)(((float)t0 / (*(float *)0xC01ECE4)) * (float)(*(signed char *)0xC1ECD50)));
                t2 = (ADXT_SetOutVol((*(int *)0xC1ECD64), t4));
            }
            (((struct o10_uint *)0xC2690E4)->v) = (((((struct o10_int *)0xC2690E4)->v)) - 1);
        }
        t0 = t2;
    } else {
        t2 = FUN_0c01e742(0x0);
        if ((int)t2 >= (int)(*(int *)(((t1 << 2) + 0xC099888)))) {
            (((struct o0_uint *)0xC2690E4)->v) = 0x2;
            (((struct o10_uint *)0xC2690E4)->v) = 0xB4;
        }
        t0 = 0xC099888;
    }
    return t0;
}

int adxt_set_outpan(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c161fee((*(int *)((a4 + 0x4))));
    if (t0 == 1) {
        t0 = *(int *)((a4 + 0xC));
        t1 = 0x0;
        if (((((struct o42_short *)(a4))->v)) == -128) {
        } else {
            t1 = ((((struct o42_short *)(a4))->v));
        }
        t2 = (thunk_mwRnaSetOutPan(t0, 0x0, t1));
    } else {
        t0 = 0xFFFFFFF1;
        if (((((struct o42_short *)(a4))->v)) == -128) {
        } else {
            t0 = ((((struct o42_short *)(a4))->v));
        }
        thunk_mwRnaSetOutPan((*(int *)((a4 + 0xC))), 0x0, t0);
        t0 = 0xF;
        if (((((struct o44_short *)(a4))->v)) == -128) {
        } else {
            t0 = ((((struct o44_short *)(a4))->v));
        }
        t2 = (thunk_mwRnaSetOutPan((*(int *)((a4 + 0xC))), 0x1, t0));
    }
    return t2;
}

int nlFogTableOff(void)
{
    int stk[128];
    register int t0;

    t0 = ((int)stk + 0);
    for (;;) {
        *(float *)((t0 + 0x0)) = 0.0f;
        t0 = (t0 + 0x4);
        if ((unsigned int)t0 >= (unsigned int)(0x200 + ((int)stk + 0))) {
            break;
        }
    }
    return (thunk_kmSetFogTable_0c071a70(((int)stk + 0)));
}
