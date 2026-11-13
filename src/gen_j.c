/* Straight-line functions with calls and guards (batch gen_j): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c08bc96(int, int, int, int);
int FUN_0c08f87c(int, int);
int FUN_0c08f518(int a4);

int FUN_0c08f518(int a4)
{
    int stk[7];
    register int t0;
    register int t15;
    register int t18;
    register int t24;
    register int t28;
    register int t32;

    *(unsigned int *)(((int)stk + 24)) = a4;
    t0 = *(int *)(((int)stk + 24));
    *(unsigned int *)(((int)stk + 0)) = ((t0 * 0x154) + 0xC2C8D2C);
    *(unsigned int *)(((int)stk + 16)) = (*(int *)(((*(int *)((((t0 * 0x154) + 0xC2C8D2C) + 0x1C))) + 0x1C)));
    *(unsigned int *)(((int)stk + 12)) = (((*(int *)(((*(int *)(((*(int *)(((int)stk + 0))) + 0x1C))) + 0x1C))) + (*(int *)(((*(int *)(((*(int *)(((int)stk + 0))) + 0x1C))) + 0x20)))) - 1);
    *(unsigned int *)(((int)stk + 4)) = (*(int *)(((*(int *)(((*(int *)(((int)stk + 0))) + 0x1C))) + 0x10)));
    for (;;) {
        t15 = FUN_0c08bc96((*(int *)(((int)stk + 24))), 0xFFFC, (*(int *)(((int)stk + 16))), (*(int *)(((int)stk + 12))));
        *(unsigned int *)(((int)stk + 8)) = t15;
        if ((int)t15 < 0) {
            break;
        }
        *(unsigned int *)(((int)stk + 20)) = 0x0;
        for (;;) {
            if ((int)(*(int *)(((int)stk + 20))) >= (int)(*(int *)(((int)stk + 4)))) {
                t18 = *(int *)(((int)stk + 4));
                if ((*(int *)(((int)stk + 20))) == t18) {
                    return (((*(int *)(((int)stk + 8))) - t18) + 0x1);
                }
                t24 = FUN_0c08bc96((*(int *)(((int)stk + 24))), 0xFFFC, (*(int *)(((int)stk + 16))), (*(int *)(((int)stk + 12))));
                *(unsigned int *)(((int)stk + 8)) = t24;
                if ((int)t24 < 0) {
                    return 0xFFFFFFFF;
                }
                *(unsigned int *)(((int)stk + 20)) = 0x0;
                continue;
            }
            t28 = FUN_0c08f87c((*(int *)(((int)stk + 24))), ((*(int *)(((int)stk + 8))) - (*(int *)(((int)stk + 20)))));
            if ((unsigned short)t28 != 0xFFFC) {
                break;
            }
            *(unsigned int *)(((int)stk + 20)) = ((*(int *)(((int)stk + 20))) + 0x1);
        }
        *(unsigned int *)(((int)stk + 12)) = (((*(int *)(((int)stk + 8))) - (*(int *)(((int)stk + 20)))) - 1);
        t32 = *(int *)(((int)stk + 4));
        if ((*(int *)(((int)stk + 20))) == t32) {
            return (((*(int *)(((int)stk + 8))) - t32) + 0x1);
        }
    }
    return 0xFFFFFFFF;
}
