/* Straight-line functions with calls and guards (batch gen_hq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o80_int { char p[0x80]; int v; };
int FUN_0c05f470(int, int, float, float);
int FUN_0c065080(int a4, float f4, float f5);

int FUN_0c065080(int a4, float f4, float f5)
{
    int stk[25];

    register int R1;
    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register float w0_0;
    register float w0_1;
    v0_1 = a4;
    w0_0 = f4;
    w0_1 = f5;
    { struct mv8 { int w[8]; }; *(struct mv8 *)((((int)stk + 0) + 0x44)) = *(struct mv8 *)(0xC10FB14); }
    { struct mv4 { int w[4]; }; *(struct mv4 *)((((int)stk + 0) + 0x34)) = *(struct mv4 *)(0xC10FB34); }
    { struct mv7 { int w[7]; }; *(struct mv7 *)((((int)stk + 0) + 0x18)) = *(struct mv7 *)(0xC10FB44); }
    *(unsigned int *)(((int)stk + 0)) = 0x7;
    { struct mv5 { int w[5]; }; *(struct mv5 *)((((int)stk + 0) + 0x4)) = *(struct mv5 *)(0xC10FB60); }
    v0_5 = (((struct o80_int *)(v0_1))->v);
    v0_6 = (v0_5);
    v0_0 = (v0_1);
    v0_1 = (0x8);
    v0_2 = (0x4);
    v0_3 = ((((int)stk + 0) + 0x4));
    v0_4 = (0x5);
    if ((v0_5 == 2)) goto L_C0650DC;
    if ((v0_6 == 3)) goto L_C0650E4;
    if ((((*(signed char *)((v0_0 + 0xFE))) & 32) == 0)) goto L_C0650FA;
    v0_5 = ((((int)stk + 0) + 0x44));
    v0_6 = (v0_1);
    L_C065100:;
    *(unsigned int *)(((int)stk + 0)) = (((int (*)(int, int, int, int, float, float))((*(int *)((((*(int *)0xC1EC740) << 2) + 0xC110374)))))(v0_1, v0_2, v0_3, v0_4, w0_0, w0_1));
    v0_1 = FUN_0c05f470(v0_0, (*(int *)((v0_5 + (((int)((int)(*(int *)(((int)stk + 0))) % (int)v0_6)) << 2)))), 0.0f, 15.0f);
    *(unsigned int *)((v0_0 + 0xC)) = 0x1;
    return v0_1;
    L_C0650FA:;
    v0_5 = ((((int)stk + 0) + 0x34));
    v0_6 = (v0_2);
    goto L_C065100;
    L_C0650E4:;
    v0_5 = (v0_3);
    v0_6 = (v0_4);
    goto L_C065100;
    L_C0650DC:;
    v0_5 = ((((int)stk + 0) + 0x18));
    v0_6 = ((*(int *)(((int)stk + 0))));
    goto L_C065100;
}
