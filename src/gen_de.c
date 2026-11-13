/* Straight-line functions with calls and guards (batch gen_de): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c16ada2(int, int, int, int, int);
int mwRnaSetSfreq(int a4, int a5, int a6, int a7);

int mwRnaSetSfreq(int a4, int a5, int a6, int a7)
{
    register int t1;
    register int t4;

    if (a4 == 0) {
        return (FUN_0c16ada2(a4, a5, a6, a7, 0xC171714));
    }
    t1 = *(int *)((a4 + 0x38));
    t4 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x24)))))(t1, a5, a6, a7);
    *(unsigned int *)((a4 + 0xC)) = a5;
    return t4;
}
