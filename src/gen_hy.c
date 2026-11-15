/* Straight-line functions with calls and guards (batch gen_hy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c070730(float);
float FUN_0c073b40(int, int);
float FUN_0c073c60(int);
int nlOuterProduct(int, int, int);
float nlUnitVectorsd(int, int);
float FUN_0c05ba98(int a4, int a5, int a6, int a7);

float FUN_0c05ba98(int a4, int a5, int a6, int a7)
{
    int stk[10];

    register int R0;
    register int R1;
    register int R2;
    register int R3;
    register float F3;
    register float F4;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    v0_2 = a4;
    v0_3 = a5;
    v0_1 = a6;
    v0_0 = a7;
    *(unsigned int *)(((int)stk + 0)) = v0_3;
    w0_0 = *(float *)0xC05BBAC;
    w0_2 = nlUnitVectorsd(v0_2, (((int)stk + 0) + 0x1C));
    v0_1 = (v0_1);
    v0_0 = (v0_0);
    w0_1 = (w0_2);
    w0_3 = (w0_0);
    if ((w0_0 > w0_2)) goto L_C05BB1A;
    w0_0 = nlUnitVectorsd((*(int *)(((int)stk + 0))), (((int)stk + 0) + 0x10));
    w0_1 = (w0_0);
    if ((w0_3 > w0_0)) goto L_C05BB1A;
    nlOuterProduct((((int)stk + 0) + 0x1C), (((int)stk + 0) + 0x10), v0_1);
    w0_0 = FUN_0c073c60(v0_1);
    w0_1 = (w0_0);
    if ((w0_3 > w0_0)) goto L_C05BB1A;
    nlOuterProduct((((int)stk + 0) + 0x10), v0_1, (((int)stk + 0) + 0x4));
    w0_0 = FUN_0c073b40((((int)stk + 0) + 0x1C), (((int)stk + 0) + 0x10));
    *(unsigned int *)((v0_0 + 0x0)) = (FUN_0c070730(w0_0));
    w0_0 = FUN_0c073b40((((int)stk + 0) + 0x4), (((int)stk + 0) + 0x1C));
    w0_1 = (w0_0);
    if ((!(0.0f > w0_0))) goto L_C05BB28;
    *(unsigned int *)((v0_0 + 0x0)) = (-(*(int *)((v0_0 + 0x0))));
    L_C05BB28:;
    return w0_1;
    L_C05BB1A:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(v0_1) = *(struct mv3 *)(0xC10D9E0); }
    *(unsigned int *)((v0_0 + 0x0)) = 0x0;
    goto L_C05BB28;
}
