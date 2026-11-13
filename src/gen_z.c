/* Straight-line functions with calls and guards (batch gen_z): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c031138(void);
int FUN_0c07ada0(int, float);
int FUN_0c162436(int);
int FUN_0c162464(int);
int FUN_0c16bab0(int);
int FUN_0c16bc88(int a4);
int PutShotLandmark(void);

int FUN_0c16bc88(int a4)
{
    register int t1;
    register int t3;
    register int t15;

    if ((*(int *)((a4 + 0x28))) == 0) {
        return FUN_0c16bab0(0xC17213C);
    }
    t1 = *(int *)((a4 + 0x20));
    t3 = FUN_0c162436((*(int *)((a4 + 0x28))));
    if (t3 == 4) {
        *(unsigned char *)((a4 + 0x1)) = 0x3;
        t15 = 0x3;
    } else {
        if (t3 == 2) {
            t15 = FUN_0c162464((*(int *)((a4 + 0x28))));
            *(unsigned int *)((((((t1 << 2) << 2) << 2) + (a4 + 0x38)) + 0x3C)) = t15;
        } else {
            if (t3 == 3) {
                *(unsigned int *)((((((t1 << 2) << 2) << 2) + (a4 + 0x38)) + 0x3C)) = (*(int *)((a4 + 0x2C)));
                *(unsigned int *)((((((t1 << 2) << 2) << 2) + (a4 + 0x38)) + 0x38)) = 0x2;
            }
            t15 = t3;
        }
    }
    return t15;
}

int PutShotLandmark(void)
{
    int stk[20];

    FUN_0c031138();
    *(unsigned int *)(((int)stk + 0)) = 0x6A;
    *(float *)(((int)stk + 4)) = 500.0f;
    *(float *)(((int)stk + 8)) = 128.0f;
    *(float *)(((int)stk + 12)) = 0.300000012f;
    *(float *)(((int)stk + 20)) = 1.0f;
    *(float *)(((int)stk + 16)) = 1.0f;
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 24)) = 0.0f;
    *(float *)(((int)stk + 36)) = 1.0f;
    *(float *)(((int)stk + 32)) = 1.0f;
    *(unsigned int *)(((int)stk + 40)) = 0x0;
    *(float *)(((int)stk + 44)) = 1.0f;
    *(unsigned int *)(((int)stk + 52)) = 0x725;
    *(unsigned int *)(((int)stk + 48)) = 0x0;
    return (FUN_0c07ada0(((int)stk + 0), 1.0f));
}
