/* Straight-line functions with calls and guards (batch gen_fx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01ec7a(int);
int FUN_0c01ed38(int);
int FUN_0c01edbc(int, int);
int FUN_0c01ee10(int, int);
int gdc_GetStreamVoiceStat2(int);
int gdc_StreamVoiceVol(int, int);
int FUN_0c058edc(int a4);

int FUN_0c058edc(int a4)
{

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R13;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    v0_1 = a4;
    v0_0 = R13;
    v0_2 = (*(int *)(((*(int *)(((((v0_1 << 2) << 2) + 0xC2B6770) + 0x0))) + 0x4))) != (*(int *)(((((v0_1 << 2) << 2) + 0xC2B6770) + 0xC)));
    R13 = (v0_1);
    v0_0 = ((((v0_1 << 2) << 2) + 0xC2B6770));
    if (v0_2) goto L_C058F16;
    FUN_0c01edbc(R13, (*(int *)(((*(int *)((v0_0 + 0x0))) + 0x0))));
    gdc_StreamVoiceVol(R13, (*(int *)((v0_0 + 0x4))));
    v0_1 = FUN_0c01ee10(R13, (*(int *)((v0_0 + 0x8))));
    v0_2 = (v0_1);
    L_C058F56:;
    *(unsigned int *)((v0_0 + 0xC)) = ((*(int *)((v0_0 + 0xC))) + 0x1);
    return v0_2;
    L_C058F16:;
    v0_2 = *(int *)(((*(int *)((v0_0 + 0x0))) + 0x4));
    v0_1 = (int)v0_2 > (int)(*(int *)((v0_0 + 0xC)));
    v0_2 = (v0_2);
    if (v0_1) goto L_C058F56;
    v0_1 = (gdc_GetStreamVoiceStat2(R13)) == 0;
    if (v0_1) goto L_C058F42;
    v0_2 = FUN_0c01ed38(R13);
    v0_1 = (int)v0_2 < (int)(*(int *)(((*(int *)((v0_0 + 0x0))) + 0x8)));
    v0_2 = (v0_2);
    if (v0_1) goto L_C058F56;
    v0_1 = FUN_0c01ec7a(R13);
    v0_2 = (v0_1);
    goto L_C058F56;
    L_C058F42:;
    *(unsigned int *)((v0_0 + 0x0)) = ((*(int *)((v0_0 + 0x0))) + 0xC);
    *(unsigned int *)((v0_0 + 0xC)) = 0x0;
    v0_3 = *(int *)(((*(int *)((v0_0 + 0x0))) + 0x0));
    v0_2 = (v0_3);
    v0_1 = (0x0);
    if ((v0_3 != -1)) goto L_C058F56;
    *(unsigned int *)((v0_0 + 0x0)) = v0_1;
    goto L_C058F56;
}
