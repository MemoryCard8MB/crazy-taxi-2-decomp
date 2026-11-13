/* Straight-line functions with calls and guards (batch gen_f): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c073a40(int);
int FUN_0c073e10(int);
int nlMultiMatrix(int);
int nlOuterProduct(int, int, int);
int nlSubVector3op(int, int, int);
int nlLookAtUp_L(int a4, int a5, int a6);
int memcpy(int a4, int a5, int a6, int a7);

int nlLookAtUp_L(int a4, int a5, int a6)
{
    int stk[27];

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a6;
    nlSubVector3op((((int)stk + 0) + 0x8), a5, (*(int *)(((int)stk + 0))));
    nlOuterProduct((*(int *)(((int)stk + 4))), (((int)stk + 0) + 0x8), (((int)stk + 0) + 0x20));
    nlOuterProduct((((int)stk + 0) + 0x8), (((int)stk + 0) + 0x20), (((int)stk + 0) + 0x14));
    FUN_0c073e10((((int)stk + 0) + 0x20));
    FUN_0c073e10((((int)stk + 0) + 0x14));
    FUN_0c073e10((((int)stk + 0) + 0x8));
    *(float *)(((int)stk + 44)) = (*(float *)(((int)stk + 32)));
    *(float *)(((int)stk + 60)) = (*(float *)(((int)stk + 36)));
    *(float *)(((int)stk + 76)) = (*(float *)(((int)stk + 40)));
    *(float *)(((int)stk + 92)) = 0.0f;
    *(float *)(((int)stk + 48)) = (*(float *)(((int)stk + 20)));
    *(float *)(((int)stk + 64)) = (*(float *)(((int)stk + 24)));
    *(float *)(((int)stk + 80)) = (*(float *)(((int)stk + 28)));
    *(float *)(((int)stk + 96)) = 0.0f;
    *(float *)(((int)stk + 52)) = (*(float *)(((int)stk + 8)));
    *(float *)(((int)stk + 68)) = (*(float *)(((int)stk + 12)));
    *(float *)(((int)stk + 84)) = (*(float *)(((int)stk + 16)));
    *(float *)(((int)stk + 100)) = 0.0f;
    *(float *)(((int)stk + 56)) = 0.0f;
    *(float *)(((int)stk + 72)) = 0.0f;
    *(float *)(((int)stk + 88)) = 0.0f;
    *(float *)(((int)stk + 104)) = 1.0f;
    nlMultiMatrix((((int)stk + 0) + 0x2C));
    return (FUN_0c073a40((*(int *)(((int)stk + 0)))));
}

int memcpy(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    if ((a4 != a5) && ((unsigned int)a6 > (unsigned int)0x0)) {
        if ((unsigned int)a4 < (unsigned int)a5) {
            if ((0x1 & ((a4 | a5) | a6)) == 0) {
                if ((((a4 | a5) | a6) & 0x3) == 0) {
                    t0 = a5;
                    t1 = ((unsigned int)a6 >> 2);
                    t2 = a4;
                    for (;;) {
                        t3 = *(int *)((t0 + 0x0));
                        t0 = (t0 + 0x4);
                        t1 = (t1 - 1);
                        *(unsigned int *)((t2 + 0x0)) = t3;
                        t2 = (t2 + 0x4);
                        if (t1 == 0) {
                            break;
                        }
                    }
                } else {
                    t0 = a5;
                    t1 = ((unsigned int)a6 >> 1);
                    t2 = a4;
                    for (;;) {
                        t3 = *(short *)((t0 + 0x0));
                        t0 = (t0 + 0x2);
                        t1 = (t1 - 1);
                        *(unsigned short *)((t2 + 0x0)) = t3;
                        t2 = (t2 + 0x2);
                        if (t1 == 0) {
                            break;
                        }
                    }
                }
            } else {
                t0 = a5;
                t1 = a6;
                t2 = a4;
                for (;;) {
                    t3 = *(signed char *)((t0 + 0x0));
                    t0 = (t0 + 0x1);
                    t1 = (t1 - 1);
                    *(unsigned char *)((t2 + 0x0)) = t3;
                    t2 = (t2 + 0x1);
                    if (t1 == 0) {
                        break;
                    }
                }
            }
        } else {
            if ((0x1 & ((a4 | a5) | a6)) == 0) {
                if ((((a4 | a5) | a6) & 0x3) == 0) {
                    t0 = (a4 + a6);
                    t1 = ((unsigned int)a6 >> 2);
                    t2 = (a5 + a6);
                    for (;;) {
                        t2 = (t2 - 4);
                        t1 = (t1 - 0x1);
                        *(unsigned int *)(((t0 - 0x4) + 0x0)) = (*(int *)((t2 + 0x0)));
                        t0 = (t0 - 0x4);
                        if (t1 == 0) {
                            break;
                        }
                    }
                } else {
                    t0 = (a5 + a6);
                    t1 = ((unsigned int)a6 >> 1);
                    t2 = (a4 + a6);
                    for (;;) {
                        t0 = (t0 - 2);
                        t1 = (t1 - 0x1);
                        *(unsigned short *)(((t2 - 0x2) + 0x0)) = (*(short *)((t0 + 0x0)));
                        t2 = (t2 - 0x2);
                        if (t1 == 0) {
                            break;
                        }
                    }
                }
            } else {
                t0 = (a4 + a6);
                t1 = a6;
                t2 = (a5 + a6);
                for (;;) {
                    t2 = (t2 - 1);
                    t1 = (t1 - 0x1);
                    *(unsigned char *)(((t0 - 0x1) + 0x0)) = (*(signed char *)((t2 + 0x0)));
                    t0 = (t0 - 0x1);
                    if (t1 == 0) {
                        break;
                    }
                }
            }
        }
    }
    return a4;
}
