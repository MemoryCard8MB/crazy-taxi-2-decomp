/* Straight-line functions with calls and guards (batch gen_ad): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uint { unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
int FUN_0c058f64(int, int, int, int);
int FUN_0c069e54(void);
int FUN_0c07ada0(int, int, int, int, float, float, float, float, float);
int Voice_ShutUp(int);
int FUN_0c069fbe(void);
int FUN_0c06a00c(void);
int FUN_0c053c98(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8);

int FUN_0c069fbe(void)
{
    register int t0;

    t0 = *(int *)0xC2B9C2C;
    *(unsigned int *)0xC13B4A8 = (*(int *)(((*(int *)((((t0 - 1) << 2) + 0xC13B488))) + (((int)((int)(FUN_0c069e54()) % (int)(*(int *)((((t0 - 1) << 2) + 0xC110824))))) << 2))));
    Voice_ShutUp(0x1);
    return FUN_0c058f64(0xC13B4A8, 0x1, (*(int *)((((t0 - 1) << 2) + 0xC11037C))), 0x0);
}

int FUN_0c06a00c(void)
{
    register int t0;

    t0 = *(int *)0xC2B9C2C;
    *(unsigned int *)0xC13B4E0 = (*(int *)(((*(int *)((((t0 - 1) << 2) + 0xC13B4C0))) + (((int)((int)(FUN_0c069e54()) % (int)(*(int *)((((t0 - 1) << 2) + 0xC1108E4))))) << 2))));
    Voice_ShutUp(0x1);
    return FUN_0c058f64(0xC13B4E0, 0x1, (*(int *)((((t0 - 1) << 2) + 0xC11037C))), 0x0);
}

int FUN_0c053c98(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8)
{
    register int t0;
    register int t1;
    register int t5;

    t0 = 0xC132150;
    t1 = 0x0;
    for (;;) {
        (((struct o0_uint *)0xC2B2D5C)->v) = (*(int *)((t0 + 0x0)));
        (((struct o4_float *)0xC2B2D5C)->v) = (float)((*(int *)((t0 + 0x4))) + 0x7A);
        (((struct o8_float *)0xC2B2D5C)->v) = (float)((*(int *)((t0 + 0x8))) + 0x76);
        t0 = (t0 + 0xC);
        t5 = FUN_0c07ada0(0xC2B2D5C, a5, a6, a7, f4, f5, f6, f7, f8);
        t1 = (t1 + 0x1);
        if ((unsigned int)t1 >= (unsigned int)0xD) {
            break;
        }
    }
    return t5;
}
