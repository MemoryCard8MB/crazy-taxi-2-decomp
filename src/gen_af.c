/* Straight-line functions with calls and guards (batch gen_af): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10F4_int { char p[0x10F4]; int v; };
struct oFC0_int { char p[0xFC0]; int v; };
int FUN_0c072b60(int, int, int, int);
extern int _builtin_tas(char *);
int mpdrv_dpf(int, ...);
int nlGetMatrix(int);
void nlCopyMatrix(int a4, int a5, int a6, int a7);
int mpdrv_frame_recv_pre(void);

void nlCopyMatrix(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register float u3;

    if (a4 == 0) {
        if (a5 != 0) {
            FUN_0c072b60(a5, a5, a6, a7);
    return;
        }
        return;
    }
    if (a5 == 0) {
        nlGetMatrix(a4);
    return;
    }
    t0 = 0x10;
    t1 = a4;
    t2 = a5;
    for (;;) {
        u3 = *(float *)((t2 + 0x0));
        t2 = (t2 + 0x4);
        t0 = (t0 - 0x1);
        *(float *)((t1 + 0x0)) = u3;
        t1 = (t1 + 0x4);
        if (t0 == 0) {
            break;
        }
    }
}

int mpdrv_frame_recv_pre(void)
{
    register int t0;

    t0 = *(int *)0xC30817C;
    if (((((struct oFC0_int *)(t0))->v)) != 0) {
        return 0xFFFFFFFD;
    }
    if (((*(int *)((((((struct o10F4_int *)(t0))->v)) + 0x18))) & 1) != 0) {
        return 0xFFFFFFFF;
    }
    if (_builtin_tas((char *)(*(int *)0xC16A484)) == 0) {
        mpdrv_dpf(0xC171A40);
        return 0xFFFFFFFE;
    }
    return 0x0;
}
