/* Straight-line functions with calls and guards (batch gen_hz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int FUN_0c01422e(int);
int FUN_0c04b1e6(void);
void gdc_CoursePointLoadReq(Stk3, float);
int FUN_0c01f95a(int a4);

int FUN_0c01f95a(int a4)
{
    int stk[11];

    register int R1;
    register int R2;
    register int R3;
    register float F4;
    register int T_;
    register int v0_0;
    register int v0_1;
    v0_0 = a4;
    v0_0 = *(int *)0xC1EC71C;
    v0_1 = (v0_0);
    if ((v0_0 == 0)) goto L_C01F972;
    if ((v0_1 == 1)) goto L_C01F97C;
    if ((v0_1 == 2)) goto L_C01F998;
    L_C01F99E:;
    return v0_1;
    L_C01F998:;
    v0_1 = ((FUN_0c04b1e6()));
    goto L_C01F99E;
    L_C01F97C:;
    FUN_0c01422e(((int)stk + 12));
    L_C01F982:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(((int)stk + 12)); }
    gdc_CoursePointLoadReq(*(Stk3 *)(((int)stk + 0)), (*(float *)0xC01FA9C));
    v0_1 = 0x0;     /* manual: gdc_CoursePointLoadReq returns nothing; the original returns its leftover r0 here */
    goto L_C01F99E;
    L_C01F972:;
    FUN_0c01422e(((int)stk + 12));
    goto L_C01F982;
}
