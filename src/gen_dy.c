/* Straight-line functions with calls and guards (batch gen_dy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o40_ushort { char p[0x40]; unsigned short v; };
int thunk_mwRnaSetOutVol(int, int, int, int);
int ADXT_SetOutVol(int a4, int a5, int a6, int a7);

int ADXT_SetOutVol(int a4, int a5, int a6, int a7)
{
    (((struct o40_ushort *)(a4))->v) = a5;
    return thunk_mwRnaSetOutVol((*(int *)((a4 + 0xC))), a5, a6, a7);
}
