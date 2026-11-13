/* Straight-line functions with calls and guards (batch gen_an): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c1616ce(int);
int FUN_0c15039c(int a4);
int FUN_0c1503f8(int a4);
int FUN_0c1503dc(int a4);
int FUN_0c150460(int a4);
int FUN_0c150444(int a4);

int FUN_0c15039c(int a4)
{
    if (a4 == 0) {
        FUN_0c1616ce(0xC170B4C);
        return 0xFFFFFFFD;
    }
    return (*(int *)((a4 + 0x14)));
}

int FUN_0c1503f8(int a4)
{
    if (a4 == 0) {
        FUN_0c1616ce(0xC170B9C);
        return 0xFFFFFFFD;
    }
    return (*(int *)((a4 + 0x10)));
}

int FUN_0c1503dc(int a4)
{
    if (a4 == 0) {
        FUN_0c1616ce(0xC170B70);
        return 0xFFFFFFFD;
    }
    return (*(int *)((a4 + 0xC)));
}

int FUN_0c150460(int a4)
{
    if (a4 == 0) {
        FUN_0c1616ce(0xC170C24);
        return 0xFFFFFFFD;
    }
    return (*(signed char *)((a4 + 0x1)));
}

int FUN_0c150444(int a4)
{
    if (a4 == 0) {
        FUN_0c1616ce(0xC170BF4);
        return 0xFFFFFFFD;
    }
    return (*(int *)((a4 + 0x20)));
}
