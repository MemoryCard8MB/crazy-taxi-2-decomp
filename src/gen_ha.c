/* Straight-line functions with calls and guards (batch gen_ha): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o0_float { float v; };
struct o4_float { char p[0x4]; float v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c018b1c(int);
int FUN_0c018b22(int, int);
int FUN_0c018c18(int);
int FUN_0c018c2a(float, float);
int FUN_0c018c8a(float, float);
int FUN_0c029b12(int, Stk3, float);
int FUN_0c06e700(int, int, float);
int FUN_0c073c40(int, int, float);
int camSetTarget(int, int);
int nlAddVector(int, int);
int FUN_0c05cb64(int a4);

int FUN_0c05cb64(int a4)
{
    int stk[3];
    register float u5;
    register int t10;
    register float u28;
    register int t32;

    if (a4 != 0) {
        FUN_0c018b1c(0x1);
        FUN_0c073c40(((int)stk + 0), 0xC17598C, 30.0f);
        nlAddVector(((int)stk + 0), 0xC17599C);
        FUN_0c018b22(((int)stk + 0), 0x0);
        u5 = 5.0f;
        u5 = u5 + 3.0f * (*(float *)0xC175A14);
        FUN_0c073c40(((int)stk + 0), 0xC17598C, u5);
        FUN_0c06e700(((int)stk + 0), 0xC17597C, 2.5f);
        FUN_0c018c18(((int)stk + 0));
        FUN_0c018c2a(0.0f, 0.967499971f);
        *(float *)0xC177D9C = 41.0f;
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(0xC177D38); }
        t10 = FUN_0c029b12(((int)stk + 0), *(Stk3 *)(((int)stk + 0)), 50.0f);
        if ((*(int *)((t10 + 0x1C))) == -1) {
            FUN_0c018c18(0xC10D9BC);
            FUN_0c018c2a(0.0f, 0.0f);
            t32 = 0x1;
        } else {
            t32 = 0x0;
            if (((((struct o4_float *)(t10))->v)) > (*(float *)(((int)stk + 4)))) {
                *(float *)(((int)stk + 4)) = ((((struct o4_float *)(t10))->v));
                t32 = 0x1;
            }
        }
        u28 = (((struct o0_float *)0xC05CD4C)->v);
        if ((*(float *)(((int)stk + 4))) > ((*(float *)0xC1759A0) + u28)) {
            *(float *)(((int)stk + 4)) = ((*(float *)0xC1759A0) + u28);
            t32 = 0x1;
        }
        if (t32 != 0) {
            FUN_0c018b22(((int)stk + 0), 0x0);
        }
    }
    camSetTarget(0xC17599C, 0x0);
    return (FUN_0c018c8a(((((struct oC_float *)0xC05CD4C)->v)), 0.0f));
}
