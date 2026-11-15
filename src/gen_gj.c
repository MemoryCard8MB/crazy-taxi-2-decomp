/* Straight-line functions with calls and guards (batch gen_gj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o2C_float { char p[0x2C]; float v; };
struct o40_float { char p[0x40]; float v; };
int FUN_0c070e60(void);
float FUN_0c070e80(void);
float getNearCoursePoint(int, int, int, int, float);
float nlLength(int, int);
int set_event(int, int);
float FUN_0c0468aa(int a4, int a5, float f4);
int SetBubble(int a4, int a5);
float setObjHitBeach(int a4);
void FUN_0c06bd3c(int a4);
void FUN_0c010080(void);

float FUN_0c0468aa(int a4, int a5, float f4)
{
    int stk[1];
    register int t1;
    register int t2;
    register float u3;
    register int t18;
    register float u25;
    register int t4;
    register int t5;
    register float u6;
    register float u7;
    register int t11;

    t1 = *(int *)((((((a4 << 1) + a4) << 2) + 0xC0F3530) + 0x8));
    t2 = *(int *)((((((a4 << 1) + a4) << 2) + 0xC0F3530) + 0x4));
    u3 = *(float *)0xC046AD4;
    t18 = 0x0;
    u25 = u3;
    if ((int)t2 < (int)(t1 + t2)) {
        t4 = 0x0;
        t5 = t2;
        u6 = f4;
        u7 = u3;
        for (;;) {
            *(unsigned int *)(((int)stk + 0)) = 0x0;
            u6 = (getNearCoursePoint(0x0, t5, ((int)stk + 0), a5, u6));
            if (u7 > u6) {
                t4 = t5;
                t4 = (t4 << 1);
                t4 = (t4 + t5);
                t11 = *(int *)(((int)stk + 0));
                t4 = (t4 << 2);
                u7 = u6;
                t4 = (t4 + (*(int *)0xC2ADA7C));
                t4 = (*(int *)((t4 + 0x0)));
                t4 = (t4 + (((t11 << 1) + t11) << 2));
            }
            t5 = (t5 + 0x1);
            if ((int)t5 >= (int)(t1 + t2)) {
                break;
            }
        }
        t18 = t4;
        u25 = u7;
    }
    if (t18 != 0) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(a5) = *(struct mv3 *)(t18); }
    }
    return u25;
}

int SetBubble(int a4, int a5)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;

    t0 = FUN_0c070e60();
    t1 = (t0 & 0x3);
    if ((t0 & 0x3) == 1) {
        t0 = set_event(0x3C, 0xC02E604);
        t1 = t0;
        if (t0 != 0) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x14)) = *(struct mv3 *)(a4); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x20)) = *(struct mv3 *)(a5); }
            u0 = *(float *)0xC02E844;
            u1 = u0;
            u1 = u1 + u0 * (FUN_0c070e80());
            (((struct o2C_float *)(t0))->v) = u1;
            *(unsigned int *)((t0 + 0x30)) = 0xA0;
            t1 = 0x2C;
        }
    }
    return t1;
}

float setObjHitBeach(int a4)
{
    register float t0;

    t0 = nlLength((a4 + 0xC), (a4 + 0x58));
    if (!(t0 > (1.0f + 1.0f))) {
        if (0.699999988f > ((((struct o40_float *)(a4))->v))) {
            *(unsigned int *)0xC2791BC = 0x1;
        } else {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x58)) = *(struct mv3 *)((a4 + 0xC)); }
        }
    } else {
        *(unsigned int *)0xC2791BC = 0x1;
    }
    return t0;
}

void FUN_0c06bd3c(int a4)
{
    *(unsigned int *)((a4 + 0x0)) = ((*(int *)((a4 + 0x0))) + 0x1);
    *(unsigned int *)((a4 + 0x4)) = (((int)((int)(a4 - 0xC2BA92C) / (int)0x6C)) << 2);
    { struct mv16 { int w[16]; }; *(struct mv16 *)((a4 + 0xC)) = *(struct mv16 *)(0xC147388); }
}

void FUN_0c010080(void)
{
    { struct mv7 { int w[7]; }; *(struct mv7 *)(0xC175404) = *(struct mv7 *)(0xC0969C4); }
}
