/* Straight-line functions with calls and guards (batch gen_ch): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c026be8(int, int);
float FUN_0c072140(int);
float FUN_0c072148(int);
int FUN_0c072290(int, int);
int FUN_0c072ff0(void);
int FUN_0c073360(void);
int nlGetPushedMatrix(int);
int nlMvObjPut(int, int);
int nlPopMatrix(int);
int FUN_0c030b6c(int a4);

int FUN_0c030b6c(int a4)
{
    int stk[9];
    register int t1;
    register float u2;
    register float t3;
    register float t9;
    register float u17;
    int t13;

    *(unsigned int *)(((int)stk + 8)) = a4;
    FUN_0c026be8(((int)stk + 0), (((int)stk + 0) + 0x4));
    t1 = *(int *)(((int)stk + 0));
    *(unsigned int *)(((int)stk + 0)) = (t1 & 0x7FFF);
    u2 = 4096.0f;
    u2 = u2 + 0.75f * (float)(t1 & 0x7FFF);
    *(unsigned int *)(((int)stk + 0)) = (int)u2;
    t3 = FUN_0c072148((int)u2);
    *(float *)(((int)stk + 24)) = (t3 * (FUN_0c072140((*(int *)(((int)stk + 4))))));
    *(float *)(((int)stk + 28)) = (FUN_0c072140((*(int *)(((int)stk + 0)))));
    t9 = FUN_0c072148((*(int *)(((int)stk + 0))));
    *(float *)(((int)stk + 32)) = (t9 * (FUN_0c072148((*(int *)(((int)stk + 4))))));
    u17 = 50.0f;
    if (((*(int *)0xC1EC71C) != 2) && (t13 = *(int *)0xC2ADEB4, (int)t13 < (int)0xE6)) {
        u17 = 25.0f;
    }
    *(float *)0xC289C78 = u17;
    FUN_0c073360();
    FUN_0c072ff0();
    FUN_0c072290((((int)stk + 0) + 0x18), 0xC289C7C);
    nlGetPushedMatrix(0x0);
    FUN_0c072ff0();
    nlMvObjPut((*(int *)((((*(int *)(((int)stk + 8))) << 2) + 0xC12A47C))), 0xC289C64);
    return (nlPopMatrix(0x1));
}
