/* Straight-line functions with calls and guards (batch gen_bx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c08bbe4(int, int);
int FUN_0c08f3b8(int);
int FUN_0c08f5d8(int);
int FUN_0c08f824(int, int, int);
int FUN_0c08f87c(int, int, int);
int vmsfs_write_retry(int, int, int);
int FUN_0c08ed3c(int a4, int a5, int a6, int a7);

int FUN_0c08ed3c(int a4, int a5, int a6, int a7)
{
    int stk[7];

    register int R0;
    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int T_;
    register int v0_0;
    register int v0_1;
    v0_1 = a4;
    v0_0 = a6;
    *(unsigned int *)(((int)stk + 24)) = v0_1;
    v0_1 = *(int *)(((int)stk + 24));
    *(unsigned int *)(((int)stk + 0)) = ((v0_1 * 0x154) + 0xC2C8D2C);
    *(unsigned short *)(((int)stk + 18)) = (*(short *)(((*(int *)((((v0_1 * 0x154) + 0xC2C8D2C) + 0x1C))) + 0x14)));
    *(unsigned int *)(((int)stk + 4)) = (*(int *)(((*(int *)(((*(int *)(((int)stk + 0))) + 0x1C))) + 0x18)));
    *(unsigned short *)(((int)stk + 22)) = (*(short *)(((int)stk + 18)));
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    L_C08EDBC:;
    if (!(((int)(*(int *)(((int)stk + 12))) < (int)(*(int *)(((int)stk + 4)))))) goto L_C08EDC4;
    *(unsigned short *)(((int)stk + 20)) = (FUN_0c08f87c((*(int *)(((int)stk + 24))), (unsigned short)(*(short *)(((int)stk + 22))), v0_0));
    FUN_0c08f824((*(int *)(((int)stk + 24))), (unsigned short)(*(short *)(((int)stk + 22))), 0xFFFC);
    if (((unsigned short)(*(short *)(((int)stk + 20))) != 0xFFFA)) goto L_C08EDA4;
    goto L_C08EDC4;
    L_C08EDC4:;
    *(unsigned short *)(((int)stk + 22)) = (*(short *)(((int)stk + 18)));
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    L_C08EE86:;
    if (((int)(*(int *)(((int)stk + 12))) < (int)(*(int *)(((int)stk + 4))))) goto L_C08EDD0;
    if (((unsigned short)(*(short *)(((int)stk + 18))) == (*(int *)(((*(int *)(((*(int *)(((int)stk + 0))) + 0x1C))) + 0x14))))) goto L_C08EEBC;
    v0_0 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC2C8D28) + 0x10)))))((*(int *)(((*(int *)(((int)stk + 0))) + 0x20))), 0x4A, (*(short *)(((int)stk + 18))), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    FUN_0c08f5d8((*(int *)(((int)stk + 24))));
    FUN_0c08f3b8((*(int *)(((int)stk + 24))));
    L_C08EEBC:;
    return 0x0;
    L_C08EDD0:;
    L_C08EE2E:;
    v0_0 = vmsfs_write_retry((*(int *)(((int)stk + 24))), (unsigned short)(*(short *)(((int)stk + 22))), ((*(int *)(((*(int *)(((int)stk + 0))) + 0x28))) + (((*(int *)(((int)stk + 12))) << 8) << 1)));
    *(unsigned int *)(((int)stk + 8)) = v0_0;
    if ((v0_0 != 0)) goto L_C08EDF8;
    if (((*(int *)(((int)stk + 12))) != 0)) goto L_C08EE4A;
    *(unsigned short *)(((int)stk + 18)) = (*(short *)(((int)stk + 22)));
    L_C08EE4A:;
    FUN_0c08f824((*(int *)(((int)stk + 24))), (unsigned short)(*(short *)(((int)stk + 22))), 0xFFFA);
    if (((*(int *)(((int)stk + 12))) == ((*(int *)(((int)stk + 4))) - 1))) goto L_C08EE80;
    v0_0 = FUN_0c08bbe4((*(int *)(((int)stk + 24))), 0xFFFC);
    *(unsigned short *)(((int)stk + 20)) = v0_0;
    FUN_0c08f824((*(int *)(((int)stk + 24))), (unsigned short)(*(short *)(((int)stk + 22))), v0_0);
    *(unsigned short *)(((int)stk + 22)) = (*(short *)(((int)stk + 20)));
    L_C08EE80:;
    *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x1);
    goto L_C08EE86;
    L_C08EDF8:;
    if (((*(int *)(((int)stk + 8))) != 0xFFFFFF01)) goto L_C08EE14;
    return (*(int *)(((int)stk + 8)));
    L_C08EE14:;
    FUN_0c08f824((*(int *)(((int)stk + 24))), (unsigned short)(*(short *)(((int)stk + 22))), 0xFFFF);
    *(unsigned short *)(((int)stk + 22)) = (FUN_0c08bbe4((*(int *)(((int)stk + 24))), 0xFFFC));
    goto L_C08EE2E;
    L_C08EDA4:;
    if (((unsigned short)(*(short *)(((int)stk + 20))) != 0xFFFC)) goto L_C08EDB2;
    goto L_C08EDC4;
    L_C08EDB2:;
    *(unsigned short *)(((int)stk + 22)) = (*(short *)(((int)stk + 20)));
    *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x1);
    goto L_C08EDBC;
}
