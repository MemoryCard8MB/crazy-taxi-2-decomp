/* Straight-line functions with calls and guards (batch gen_hf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[6]; } Stk6;
struct o4_float { char p[0x4]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_int { char p[0x84]; int v; };
struct oAC_int { char p[0xAC]; int v; };
int FUN_0c065080(int);
int FUN_0c06a1d0(int);
float nlLength(int, int, Stk6);
int FUN_0c064f92(int a4);

int FUN_0c064f92(int a4)
{
    int stk[6];
    register float t3;
    register int t24;
    register int t47;
    register int t55;

    { struct mv6 { int w[6]; }; *(struct mv6 *)(((int)stk + 0)) = *(struct mv6 *)(0xC10FAFC); }
    if (((*(signed char *)(((((((struct oAC_int *)(a4))->v)) + 0x63) + 0x0))) & 2) != 0) {
        t3 = nlLength((a4 + 0x70), 0xC175930, *(Stk6 *)(((int)stk + 0)));
        if (t3 > (*(float *)((((int)stk + 0) + (((((struct o80_int *)(a4))->v)) << 2))))) {
            t55 = 0x80;
            if ((int)((((struct o80_int *)(a4))->v)) > (int)0x1) {
                (((struct o80_uint *)(a4))->v) = (((((struct o80_int *)(a4))->v)) - 1);
                t55 = (FUN_0c065080(a4));
            }
        } else {
            t55 = 0x4;
            if (((((struct o4_float *)((((int)stk + 0) + (((((struct o80_int *)(a4))->v)) << 2))))->v)) > t3) {
                (((struct o80_uint *)(a4))->v) = (((((struct o80_int *)(a4))->v)) + 0x1);
                FUN_0c065080(a4);
                t55 = 0x84;
                if (((((struct o84_int *)(a4))->v)) == 0) {
                    t24 = (((struct o80_int *)(a4))->v);
                    t55 = t24;
                    if (t24 == 4) {
                        t55 = (FUN_0c06a1d0((*(int *)((a4 + 0x10)))));
                    }
                }
            }
        }
    } else {
        t47 = (((struct o80_int *)(a4))->v);
        t55 = t47;
        if (t47 != 1) {
            (((struct o80_uint *)(a4))->v) = 0x1;
            t55 = (FUN_0c065080(a4));
        }
    }
    return t55;
}
