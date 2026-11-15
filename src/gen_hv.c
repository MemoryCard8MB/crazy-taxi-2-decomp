/* Straight-line functions with calls and guards (batch gen_hv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o3C0_int { char p[0x3C0]; int v; };
struct o8A_short { char p[0x8A]; short v; };
int FUN_0c026ce6(void);
int FUN_0c02e42a(int, int, int);
int FUN_0c072230(int, int);
int FUN_0c073360(void);
int FUN_0c073c40(int, int, float);
int nlPopMatrix(int);
int nlRotateAY(int);
int FUN_0c04c354(int a4, int a5, int a6, float f4);

int FUN_0c04c354(int a4, int a5, int a6, float f4)
{
    int stk[7];

    register int R1;
    register int R2;
    register int R3;
    register float F3;
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
    register float w0_2;
    register float w0_3;
    v0_0 = a5;
    v0_0 = a6;
    w0_0 = f4;
    v0_0 = (0xC2ADF74);
    v0_1 = (0xC1758B4);
    if (((*(int *)0xC175C74) != 4)) goto L_C04C386;
    if (((*(int *)0xC2ADF74) != 0)) goto L_C04C386;
    *(unsigned int *)((v0_0 + 0x0)) = 0x1;
    L_C04C386:;
    v0_3 = (((struct o3C0_int *)(v0_1))->v);
    v0_2 = (v0_3);
    if ((v0_3 == 4)) goto L_C04C392;
    *(unsigned int *)((v0_0 + 0x0)) = 0x0;
    L_C04C392:;
    v0_4 = *(int *)((v0_0 + 0x0));
    v0_3 = (v0_4);
    if (!(((int)v0_4 > 0))) goto L_C04C516;
    v0_2 = (0xC02E42A);
    v0_2 = (0xC026CE6);
    if (((int)v0_3 >= (int)0x4)) goto L_C04C41E;
    v0_2 = (v0_3);
    if (((int)v0_3 < 0)) goto L_C04C3B0;
    v0_2 = ((v0_2 & 0x1));
    goto L_C04C3BA;
    L_C04C516:;
    return v0_2;
    L_C04C3BA:;
    if ((v0_2 != 1)) goto L_C04C41E;
    v0_2 = (0xC04C470);
    v0_3 = ((0x1A4 + v0_1));
    v0_4 = (0x210);
    v0_5 = (0x84);
    w0_0 = ((1.0f + 1.0f));
    w0_1 = (0.200000003f);
    L_C04C3CE:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x10)) = *(struct mv3 *)((v0_3 + 0x5C)); }
    *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) - w0_0);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x4)) = *(struct mv3 *)((0x100 + v0_1)); }
    FUN_0c073c40((((int)stk + 0) + 0x4), (((int)stk + 0) + 0x4), w0_1);
    FUN_0c02e42a((((int)stk + 0) + 0x10), (((int)stk + 0) + 0x4), 0x4);
    v0_6 = (unsigned int)(v0_3 + v0_5) < (unsigned int)((0x1A4 + v0_1) + v0_4);
    v0_2 = ((FUN_0c026ce6()));
    v0_3 = ((v0_3 + v0_5));
    if (v0_6) goto L_C04C3CE;
    L_C04C41E:;
    v0_3 = *(int *)((v0_0 + 0x0));
    v0_2 = (v0_3);
    if ((v0_3 != 1)) goto L_C04C510;
    *(unsigned int *)(((int)stk + 0)) = 0x4;
    v0_2 = (0xC04C48C);
    v0_3 = (0x0);
    v0_4 = (0xC073650);
    v0_5 = (0xC073360);
    w0_2 = (5.0f);
    w0_3 = (0.800000012f);
    w0_0 = (-1.0f);
    w0_1 = (-0.800000012f);
    L_C04C43E:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x10)) = *(struct mv3 *)(0xC10C608); }
    v0_2 = (v0_3);
    if (((int)v0_3 < 0)) goto L_C04C494;
    v0_2 = ((v0_2 & 0x1));
    L_C04C49E:;
    if ((v0_2 == 0)) goto L_C04C4A8;
    *(float *)(((int)stk + 16)) = w0_1;
    L_C04C4AC:;
    FUN_0c073360();
    nlRotateAY((unsigned short)((((struct o8A_short *)(v0_1))->v)));
    FUN_0c072230((((int)stk + 0) + 0x10), (((int)stk + 0) + 0x10));
    nlPopMatrix(0x1);
    *(float *)(((int)stk + 20)) = w0_0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x4)) = *(struct mv3 *)((((((((v0_3 << 2) << 2) << 1) + v0_3) << 2) + (0x1A4 + v0_1)) + 0x5C)); }
    *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + w0_2);
    FUN_0c02e42a((((int)stk + 0) + 0x4), (((int)stk + 0) + 0x10), 0x3);
    v0_4 = (int)(v0_3 + 0x1) < (int)(*(int *)(((int)stk + 0)));
    v0_2 = ((FUN_0c026ce6()));
    v0_3 = ((v0_3 + 0x1));
    if (v0_4) goto L_C04C43E;
    L_C04C510:;
    *(unsigned int *)((v0_0 + 0x0)) = ((*(int *)((v0_0 + 0x0))) + 0x1);
    goto L_C04C516;
    L_C04C4A8:;
    *(float *)(((int)stk + 16)) = w0_3;
    goto L_C04C4AC;
    L_C04C494:;
    v0_2 = (((~(((~v0_2) + 0x1) & 0x1)) + 0x1));
    goto L_C04C49E;
    L_C04C3B0:;
    v0_2 = (((~(((~v0_2) + 0x1) & 0x1)) + 0x1));
    goto L_C04C3BA;
}
