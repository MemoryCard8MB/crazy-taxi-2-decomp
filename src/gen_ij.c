/* Straight-line functions with calls and guards (batch gen_ij): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c058f64(int, int, int, int);
int FUN_0c069e54(void);
int Voice_ShutUp(int);
int FUN_0c069f70(void);
int FUN_0c06a00c(void);
int FUN_0c069fbe(void);

int FUN_0c069f70(void)
{
    register int t0;

    t0 = *(int *)0xC2B9C2C;
    *(unsigned int *)0xC13B470 = (*(int *)(((*(int *)((((t0 - 1) << 2) + 0xC13B450))) + (((int)((int)(FUN_0c069e54()) % (int)(*(int *)((((t0 - 1) << 2) + 0xC110700))))) << 2))));
    Voice_ShutUp(0x1);
    return FUN_0c058f64(0xC13B470, 0x1, (*(int *)((((t0 - 1) << 2) + 0xC11037C))), 0x0);
}

int FUN_0c06a00c(void)
{
    register int t0;

    t0 = *(int *)0xC2B9C2C;
    *(unsigned int *)0xC13B4E0 = (*(int *)(((*(int *)((((t0 - 1) << 2) + 0xC13B4C0))) + (((int)((int)(FUN_0c069e54()) % (int)(*(int *)((((t0 - 1) << 2) + 0xC1108E4))))) << 2))));
    Voice_ShutUp(0x1);
    return FUN_0c058f64(0xC13B4E0, 0x1, (*(int *)((((t0 - 1) << 2) + 0xC11037C))), 0x0);
}

int FUN_0c069fbe(void)
{
    register int t0;

    t0 = *(int *)0xC2B9C2C;
    *(unsigned int *)0xC13B4A8 = (*(int *)(((*(int *)((((t0 - 1) << 2) + 0xC13B488))) + (((int)((int)(FUN_0c069e54()) % (int)(*(int *)((((t0 - 1) << 2) + 0xC110824))))) << 2))));
    Voice_ShutUp(0x1);
    return FUN_0c058f64(0xC13B4A8, 0x1, (*(int *)((((t0 - 1) << 2) + 0xC11037C))), 0x0);
}
