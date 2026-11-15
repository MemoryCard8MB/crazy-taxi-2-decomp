/* Straight-line functions with calls and guards (batch gen_ii): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c058f64(int, int, int, int);
int FUN_0c059074(int);
int FUN_0c069e54(int);
int Voice_ShutUp(int);
int FUN_0c06a242(int a4);
int FUN_0c06a2a0(int a4);
int FUN_0c06aa94(int a4);

int FUN_0c06a242(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c069e54(a4);
    t1 = FUN_0c059074(0x3);
    if (t1 == 0) {
        t2 = *(int *)((((a4 - 35) << 2) + 0xC10E5D0));
        *(unsigned int *)0xC13B578 = (*(int *)((((((int)((int)t0 % (int)(*(int *)(((t2 << 2) + 0xC110A34))))) << 2) + (*(int *)(((t2 << 2) + 0xC13B568)))) + 0x0)));
        Voice_ShutUp(0x3);
        return FUN_0c058f64(0xC13B578, 0x3, 0x78, 0x0);
    }
    return t1;
}

int FUN_0c06a2a0(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c069e54(a4);
    t1 = FUN_0c059074(0x3);
    if (t1 == 0) {
        t2 = *(int *)((((a4 - 35) << 2) + 0xC10E5D0));
        *(unsigned int *)0xC13B5A0 = (*(int *)((((((int)((int)t0 % (int)(*(int *)(((t2 << 2) + 0xC110A88))))) << 2) + (*(int *)(((t2 << 2) + 0xC13B590)))) + 0x0)));
        Voice_ShutUp(0x3);
        return FUN_0c058f64(0xC13B5A0, 0x3, 0x78, 0x0);
    }
    return t1;
}

int FUN_0c06aa94(int a4)
{
    register int t0;

    t0 = *(int *)((((a4 - 35) << 2) + 0xC10E5D0));
    *(unsigned int *)0xC13BC14 = (*(int *)(((*(int *)(((t0 << 2) + 0xC13BC04))) + (((int)((int)(FUN_0c069e54(((a4 - 35) << 2))) % (int)(*(int *)(((t0 << 2) + 0xC1116C4))))) << 2))));
    Voice_ShutUp(0x3);
    return FUN_0c058f64(0xC13BC14, 0x3, (*(int *)(((t0 << 2) + 0xC11039C))), 0x0);
}
