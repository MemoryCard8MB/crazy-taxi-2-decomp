/* Straight-line functions with calls and guards (batch gen_t): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o44_int { char p[0x44]; int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
int FUN_0c026ce6(void);
int FUN_0c029866(int, int, int, float);
int FUN_0c058ca6(int, int);
int FUN_0c061bae(void);
int FUN_0c069e54(void);
int FUN_0c076230(float, float, float);
int FUN_0c07ada0(int);
float FUN_0c07ff00(void);
int nlCloseEvent(int);
int nlMalloc(int);
int set_event(int, int);
int FUN_0c033948(int a4, int a5, int a6);
int FUN_0c055b84(void);
int FUN_0c0297f4(int a4, int a5, float f4);
int setObjGroupOpen(int a4);
int FUN_0c06a1d0(int a4);

int FUN_0c033948(int a4, int a5, int a6)
{
    register float u0;
    register float u1;
    register float u27;
    register float u4;
    register float u5;
    register float u12;

    u0 = *(float *)0xC2A5794;
    u1 = (((struct o0_float *)0xC2A5870)->v);
    u27 = u1;
    if (u0 != u1) {
        if (((((struct o4_float *)0xC2A5870)->v)) > _builtin_fabsf((u1 - u0))) {
            *(float *)0xC2A5794 = ((((struct o0_float *)0xC2A5870)->v));
        } else {
            u4 = (((struct o0_float *)0xC2A5870)->v);
            u5 = *(float *)0xC2A5794;
            u12 = (*(float *)0xC2A5794);
            u12 = u12 + ((((struct o4_float *)0xC2A5870)->v)) * (float)(((u4 - u5) > 0.0f) - (0.0f > (u4 - u5)));
            *(float *)0xC2A5794 = u12;
        }
        u27 = _builtin_fabsf((u1 - u0));
    }
    if ((*(float *)0xC2A5794) != 0.0f) {
        FUN_0c076230(0.0f, 0.0f, 0.0f);
        FUN_0c07ada0(0xC2A5768);
        return FUN_0c026ce6();
    }
    return 0x2C;
}

int FUN_0c055b84(void)
{
    register int t4;

    (((struct o0_uint *)0xC2B3114)->v) = 0x1A;
    (((struct o8_float *)0xC2B3114)->v) = (float)(((((struct o0_int *)0xC2B3164)->v)) + 0x7B);
    (((struct o10_float *)0xC2B3114)->v) = (((((struct o10_float *)0xC2B3164)->v)) + 1.0f);
    (((struct o14_float *)0xC2B3114)->v) = (((((struct o10_float *)0xC2B3164)->v)) + 1.0f);
    (((struct o1C_float *)0xC2B3114)->v) = 0.0f;
    (((struct o24_float *)0xC2B3114)->v) = 1.0f;
    (((struct o34_uint *)0xC2B3114)->v) = 0x200A;
    (((struct o28_uint *)0xC2B3114)->v) = 0x0;
    FUN_0c076230(1.0f, 1.0f, 1.0f);
    t4 = 0x0;
    for (;;) {
        (((struct o4_float *)0xC2B3114)->v) = (float)t4;
        FUN_0c07ada0(0xC2B3114);
        t4 = (t4 + 0x9);
        if ((int)t4 >= (int)0x288) {
            break;
        }
    }
    return FUN_0c026ce6();
}

int FUN_0c0297f4(int a4, int a5, float f4)
{
    int stk[3];
    register int t0;
    register float u2;
    register float u4;
    register float u7;
    register float u10;

    *(float *)(((int)stk + 8)) = 1.0f;
    t0 = FUN_0c029866(a4, a5, ((int)stk + 0), f4);
    if (t0 != 0) {
        u2 = *(float *)(((int)stk + 8));
        u4 = (*(float *)((a4 + 0x0)));
        u4 = u4 + u2 * (*(float *)((a5 + 0x0)));
        (((struct o0_float *)0xC270F9C)->v) = u4;
        u7 = ((((struct o4_float *)(a4))->v));
        u7 = u7 + u2 * ((((struct o4_float *)(a5))->v));
        (((struct o4_float *)0xC270F9C)->v) = u7;
        u10 = ((((struct o8_float *)(a4))->v));
        u10 = u10 + u2 * ((((struct o8_float *)(a5))->v));
        (((struct o8_float *)0xC270F9C)->v) = u10;
        *(volatile int *)(((int)stk + 0));
        (((struct o18_float *)0xC270F9C)->v) = (FUN_0c07ff00());
        (((struct o1C_uint *)0xC270F9C)->v) = ((((struct o44_int *)((*(int *)(((int)stk + 0)))))->v));
    } else {
        (((struct o1C_uint *)0xC270F9C)->v) = 0xFFFFFFFF;
    }
    return 0xC270F9C;
}

int setObjGroupOpen(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t4;

    t0 = set_event(0x1C, 0xC02FCDC);
    if (t0 != 0) {
        t1 = nlMalloc((((short)(*(short *)((a4 + 0x10))) * (short)0x70) + 0x4));
        if (t1 != 0) {
            *(unsigned int *)((t0 + 0x0)) = t1;
            *(unsigned int *)((t1 + 0x0)) = 0x0;
            *(unsigned int *)((t0 + 0x14)) = a4;
            *(unsigned int *)((a4 + 0x1C)) = (t1 + 0x4);
            *(unsigned int *)((t0 + 0x18)) = (t1 + 0x4);
            t1 = 0x0;
            for (;;) {
                t2 = *(short *)((a4 + 0x10));
                if ((int)t1 >= (int)t2) {
                    break;
                }
                t4 = (t1 * 0x70);
                t1 = (t1 + 0x1);
                t4 = (t4 + ((*(int *)((t0 + 0x18)))));
                (((struct o68_uint *)(t4))->v) = 0xFFFFFFFF;
            }
            return t2;
        }
        return nlCloseEvent(t0);
    }
    return t0;
}

int FUN_0c06a1d0(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = *(int *)0xC1ECCA8;
    if (t0 == 1) {
        t1 = *(int *)((((a4 - 35) << 2) + 0xC10E5D0));
        t2 = FUN_0c061bae();
        if (t2 != 0) {
            t2 = *(int *)(((t1 << 2) + 0xC13B558));
            t3 = ((int)((int)(FUN_0c069e54()) % (int)(*(int *)(((t1 << 2) + 0xC1109E4)))));
            t4 = t2;
        } else {
            t2 = *(int *)(((t1 << 2) + 0xC13B548));
            t3 = ((int)((int)(FUN_0c069e54()) % (int)(*(int *)(((t1 << 2) + 0xC1109E4)))));
            t4 = t2;
        }
        t1 = *(int *)((t4 + (t3 << 2)));
        if (t1 != 0) {
            return FUN_0c058ca6(t1, 0x1);
        }
        return (t3 << 2);
    }
    return t0;
}
