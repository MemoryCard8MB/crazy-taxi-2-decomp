/* Straight-line functions with calls and guards (batch gen_im): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c14dfa0(int, int);
int FUN_0c14e02a(int);
int FUN_0c14e0be(int, int, int, int);
int FUN_0c01e5f8(int a4, int a5, int a6, int a7, int a8);

int FUN_0c01e5f8(int a4, int a5, int a6, int a7, int a8)
{
    int stk[2];

    register int R0;
    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    v0_2 = a4;
    v0_3 = a5;
    v0_0 = a6;
    v0_1 = a7;
    *(unsigned int *)(((int)stk + 0)) = v0_0;
    *(unsigned int *)(((int)stk + 4)) = v0_1;
    v0_0 = ((v0_3 << 2));
    if ((v0_2 != 1)) goto L_C01E614;
    v0_2 = (0xC1ECD54);
    L_C01E616:;
    v0_3 = (0xC14DFA0);
    v0_2 = ((v0_2 + v0_0));
    L_C01E628:;
    v0_3 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 4)) = (v0_3 - 1);
    if ((((v0_3 - 1) + 0x1) != 0)) goto L_C01E61C;
    FUN_0c14e0be((*(int *)((v0_2 + 0x0))), a8, v0_0, v0_1);
    return FUN_0c14e02a((*(int *)((v0_2 + 0x0))));
    L_C01E61C:;
    v0_3 = *(int *)(((int)stk + 0));
    *(unsigned int *)(((int)stk + 0)) = (v0_3 + 0x20);
    FUN_0c14dfa0((*(int *)((v0_2 + 0x0))), ((v0_3 + 0x20) - 32));
    goto L_C01E628;
    L_C01E614:;
    v0_2 = (0xC1ECD64);
    goto L_C01E616;
}
