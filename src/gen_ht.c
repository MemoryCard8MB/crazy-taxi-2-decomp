/* Straight-line functions with calls and guards (batch gen_ht): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int InsertRankRecord(int a4, int a5, int a6, int a7);

int InsertRankRecord(int a4, int a5, int a6, int a7)
{

    register int R1;
    register int R2;
    register int R3;
    register int R10;
    register int R11;
    register int R12;
    register int R13;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    v0_0 = a4;
    v0_1 = a5;
    v0_2 = a6;
    v0_3 = a7;
    v0_4 = R13;
    v0_6 = R12;
    v0_7 = R11;
    v0_8 = R10;
    v0_5 = (int)(v0_3 - 1) < 0;
    R13 = (0x0);
    v0_4 = ((v0_3 - 1));
    v0_3 = ((v0_3 - 1));
    if (v0_5) goto L_C03EA20;
    L_C03E98C:;
    if (((int)v0_0 <= 0)) goto L_C03E9D6;
    v0_5 = *(int *)((v0_1 + 0x0));
    v0_6 = *(int *)((((((v0_3 << 1) + v0_3) << 2) + v0_2) + 0x0));
    R10 = (v0_5);
    R11 = (((((v0_3 << 1) + v0_3) << 2) + v0_2));
    R12 = (v0_6);
    if (((unsigned int)v0_5 > (unsigned int)v0_6)) goto L_C03E9B6;
    if ((R10 != R12)) goto L_C03E9B0;
    v0_5 = (int)(*(int *)((v0_1 + 0x4))) < (int)(*(int *)((R11 + 0x4)));
    if (v0_5) goto L_C03E9B6;
    L_C03E9B0:;
    v0_5 = (R12);
    if ((R12 != -1)) goto L_C03EA20;
    L_C03E9B6:;
    if (((int)v0_3 >= (int)v0_4)) goto L_C03EA18;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((v0_3 << 1) + v0_3) << 2) + v0_2) + 0xC)) = *(struct mv3 *)(((((v0_3 << 1) + v0_3) << 2) + v0_2)); }
    L_C03EA18:;
    v0_5 = (int)(v0_3 - 1) >= 0;
    R13 = ((R13 + 0x1));
    v0_3 = ((v0_3 - 1));
    if (v0_5) goto L_C03E98C;
    L_C03EA20:;
    if ((R13 == 0)) goto L_C03EA40;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((v0_3 << 1) + v0_3) << 2) + v0_2) + 0xC)) = *(struct mv3 *)(v0_1); }
    v0_5 = ((v0_3 + 0x1));
    L_C03EA42:;
    return v0_5;
    L_C03EA40:;
    v0_5 = (0xFFFFFFFF);
    goto L_C03EA42;
    L_C03E9D6:;
    v0_5 = *(int *)((v0_1 + 0x0));
    v0_6 = *(int *)((((((v0_3 << 1) + v0_3) << 2) + v0_2) + 0x0));
    R10 = (v0_5);
    R11 = (((((v0_3 << 1) + v0_3) << 2) + v0_2));
    R12 = (v0_6);
    if (((unsigned int)v0_5 < (unsigned int)v0_6)) goto L_C03E9FC;
    if ((R10 != R12)) goto L_C03E9F6;
    v0_5 = (int)(*(int *)((v0_1 + 0x4))) < (int)(*(int *)((R11 + 0x4)));
    if (v0_5) goto L_C03E9FC;
    L_C03E9F6:;
    v0_5 = (R12);
    if ((R12 != -1)) goto L_C03EA20;
    L_C03E9FC:;
    if (((int)v0_3 >= (int)v0_4)) goto L_C03EA18;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((v0_3 << 1) + v0_3) << 2) + v0_2) + 0xC)) = *(struct mv3 *)(((((v0_3 << 1) + v0_3) << 2) + v0_2)); }
    goto L_C03EA18;
}
