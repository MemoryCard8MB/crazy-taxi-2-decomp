/* Straight-line functions with calls and guards (batch gen_aa): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o4_int { char p[0x4]; int v; };
int FUN_0c050720(void);
int FUN_0c07ada0(int, int, int, float, float);
int FUN_0c052ba6(void);

int FUN_0c052ba6(void)
{
    register int t1;
    register int t2;
    register int t4;
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    t4 = (((struct o0_int *)0xC2B2A34)->v);
    if (t4 == 0) {
        *(float *)0xC2B292C = ((*(float *)0xC2B292C) + 0.5f);
    } else {
        if ((int)t4 > (int)((((struct o4_int *)0xC2B2A34)->v))) {
            *(float *)0xC2B292C = ((*(float *)0xC2B292C) - 0.300000012f);
        }
    }
    u0 = *(float *)0xC2B292C;
    if (!(1.0f > u0)) {
        *(float *)0xC2B292C = 1.0f;
        (((struct o0_uint *)0xC2B2A34)->v) = (((((struct o0_int *)0xC2B2A34)->v)) + 0x1);
        t1 = 0xC2B2A34;
        t2 = t4;
        u1 = u0;
        u2 = 1.0f;
    } else {
        if (!(u0 > 0.0f)) {
            *(float *)0xC2B292C = 0.0f;
            FUN_0c050720();
        } else {
            t1 = 0xC2B2A34;
            u3 = u0;
            u0 = 1.0f;
        }
        t2 = t4;
        u1 = u3;
        u2 = u0;
    }
    return FUN_0c07ada0(0xC2B2900, t1, t2, u1, u2);
}
