/* Straight-line functions with calls and guards (batch gen_ew): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int buAnalyzeBackupFileImage(int, int);
int nlLocate(int, int);
int nlPrintf(int, ...);
int DispBackupHeadInfo(int a4, int a5, int a6);

int DispBackupHeadInfo(int a4, int a5, int a6)
{
    int stk[51];

    register int R2;
    register int R3;
    register int R13;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    v0_0 = a4;
    v0_1 = a5;
    v0_2 = a6;
    *(unsigned int *)(((int)stk + 100)) = v0_0;
    *(unsigned int *)(((int)stk + 96)) = v0_1;
    *(unsigned int *)(((int)stk + 104)) = v0_2;
    v0_0 = buAnalyzeBackupFileImage((((int)stk + 96) + 0xC), v0_2);
    nlLocate((*(int *)(((int)stk + 100))), (*(int *)(((int)stk + 96))));
    v0_1 = v0_0;
    *(int *)((int)stk + 92) = v0_1;
    *(int *)((int)stk + 88) = 0xC0B32C0;
    v0_1 = ((nlPrintf(0xC0B32C0, v0_1)));
    v0_2 = (0xC071930);
    if ((v0_0 != 0)) goto L_C031AA2;
    nlLocate((*(int *)(((int)stk + 100))), ((*(int *)(((int)stk + 96))) + 0x1));
    *(int *)((int)stk + 92) = (((int)stk + 96) + 0xC);
    *(int *)((int)stk + 88) = 0xC0B32D8;
    nlPrintf(0xC0B32D8, (((int)stk + 96) + 0xC));
    *(int *)((int)stk + 84) = (((int)stk + 88) + 0x26);
    *(int *)((int)stk + 80) = 0xC0B32EC;
    nlPrintf(0xC0B32EC, (((int)stk + 88) + 0x26));
    *(int *)((int)stk + 76) = (((int)stk + 80) + 0x50);
    *(int *)((int)stk + 72) = 0xC0B3300;
    nlPrintf(0xC0B3300, (((int)stk + 80) + 0x50));
    v0_0 = (*(int *)(((int)stk + 176)));
    *(int *)((int)stk + 68) = v0_0;
    *(int *)((int)stk + 64) = 0xC0B3314;
    nlPrintf(0xC0B3314, v0_0);
    v0_0 = (*(int *)(((int)stk + 180)));
    *(int *)((int)stk + 60) = v0_0;
    *(int *)((int)stk + 56) = 0xC0B3328;
    nlPrintf(0xC0B3328, v0_0);
    v0_0 = *(short *)(((int)stk + 184));
    *(int *)((int)stk + 52) = (unsigned short)v0_0;
    *(int *)((int)stk + 48) = 0xC0B333C;
    nlPrintf(0xC0B333C, (unsigned short)v0_0);
    v0_0 = *(short *)(((int)stk + 186));
    *(int *)((int)stk + 44) = (unsigned short)v0_0;
    *(int *)((int)stk + 40) = 0xC0B3350;
    nlPrintf(0xC0B3350, (unsigned short)v0_0);
    v0_0 = (*(int *)(((int)stk + 188)));
    *(int *)((int)stk + 36) = v0_0;
    *(int *)((int)stk + 32) = 0xC0B3364;
    nlPrintf(0xC0B3364, v0_0);
    v0_0 = *(short *)(((int)stk + 192));
    *(int *)((int)stk + 28) = (unsigned short)v0_0;
    *(int *)((int)stk + 24) = 0xC0B3378;
    nlPrintf(0xC0B3378, (unsigned short)v0_0);
    v0_0 = *(short *)(((int)stk + 194));
    *(int *)((int)stk + 20) = (unsigned short)v0_0;
    *(int *)((int)stk + 16) = 0xC0B338C;
    nlPrintf(0xC0B338C, (unsigned short)v0_0);
    v0_0 = (*(int *)(((int)stk + 196)));
    *(int *)((int)stk + 12) = v0_0;
    *(int *)((int)stk + 8) = 0xC0B33A0;
    nlPrintf(0xC0B33A0, v0_0);
    v0_0 = (*(int *)(((int)stk + 200)));
    *(int *)((int)stk + 4) = v0_0;
    *(int *)((int)stk + 0) = 0xC0B33B4;
    v0_1 = ((nlPrintf(0xC0B33B4, v0_0)));
    L_C031AA2:;
    return v0_1;
}
