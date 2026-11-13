int FUN_0c16f778(int, int, int, int, int);
void kdRecvFrame(void);

/* manual: the generator passed only the stack argument to FUN_0c16f778; the original passes r4, r5, the signed low byte of r6, r7 and the stack argument */
int FUN_0c16d948(int a4, int a5, int a6, int a7, int a8)
{
    int r;
    signed char c = (signed char)a6;
    r = FUN_0c16f778(a4, a5, (int)c, a7, a8);
    if (*(int *)(*(int *)0xC30817C + 0x10E8) != 0) {
        kdRecvFrame();
    }
    return r;
}

int FUN_0c16f7d4(int, int, int, int, int, int);

/* manual: generated C passed the wrong third argument; the original passes r4, the signed low byte of r5, r6, r7 and the two stack arguments */
int FUN_0c16d9e6(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int r;
    signed char c = (signed char)a5;
    r = FUN_0c16f7d4(a4, (int)c, a6, a7, a8, a9);
    if (*(int *)(*(int *)0xC30817C + 0x10E8) != 0) {
        kdRecvFrame();
    }
    return r;
}

int syG2Write(int, int, int, int, int, int);
int FUN_0c07d864(int);
int FUN_0c07d904(int);

/* manual: the generator gave syG2Write five arguments; the original pushes two stack arguments (1, 1) */
int FUN_0c07d728(int a4, int a5, int a6, int a7)
{
    int t0;
    int t4;
    unsigned int *q;

    t0 = -1;
    if ((*(int *)a4 & 0x1) == 0) {
    } else {
        t0 = -2;
        if ((a5 & 0x1F) != 0) {
        } else {
            t0 = -3;
            if ((a6 & 0x1F) != 0) {
            } else {
                t0 = -4;
                if ((0x1F & a7) != 0) {
                } else {
                    t4 = *(int *)0xC2C3E78;
                    if (t4 == 0) {
                        syG2Write(a5, a6, 0x4, ((unsigned int)a7 >> 2), 0x1, 0x1);
                        *(unsigned int *)a4 = (*(int *)a4) & 0xFFFFFCFF;
                        t0 = 0;
                    } else {
                        t0 = -128;
                        if (t4 == 1) {
                            t4 = FUN_0c07d864(a4);
                            t0 = -5;
                            if (t4 != 0x100) {
                            } else {
                                *(unsigned int *)(a4 + 0x4) = a5;
                                *(unsigned int *)(a4 + 0x8) = a6;
                                *(unsigned int *)(a4 + 0xC) = a7;
                                *(unsigned int *)a4 = (*(int *)a4) | 0x200;
                                *(unsigned int *)(*(int *)0xC2C4128) = a4;
                                if (*(int *)0xC2C4128 == *(int *)0xC2C412C) {
                                    FUN_0c07d904(a4);
                                }
                                t4 = *(int *)0xC2C4128;
                                *(unsigned int *)0xC2C4128 = t4 + 0x4;
                                if ((t4 + 0x4) == 0xC2C4128) {
                                    *(unsigned int *)0xC2C4128 = 0xC2C40E8;
                                }
                                t0 = 0;
                            }
                        }
                    }
                }
            }
        }
    }
    return t0;
}

int mpdrv_setcmd(int, int, int, int, int, int);

/* manual: mpdrv_setcmd takes two stack arguments (a8, a9); the generated C passed one. r6 is the address of the saved argument words */
int FUN_0c16f700(int a4, int a5, int a6, int a7)
{
    int stk[3];
    stk[0] = a5;
    stk[1] = a6;
    stk[2] = a7;
    return mpdrv_setcmd(a4, 0x9, (int)stk, 0x1, a6, a7);
}

/* manual: as FUN_0c16f700; the buffer holds 0x800 and a5, the stack arguments are a5 and 1 */
int FUN_0c16f752(int a4, int a5)
{
    int stk[2];
    stk[0] = 0x800;
    stk[1] = a5;
    return mpdrv_setcmd(a4, 0x11, (int)stk, 0x1, a5, 0x1);
}

/* manual: as FUN_0c16f700; r5 is the signed low byte of a6, the buffer holds a5, that byte and a7, the stack arguments are a7 and a8 */
int FUN_0c16f7aa(int a4, int a5, int a6, int a7, int a8)
{
    int stk[3];
    signed char c = (signed char)a6;
    stk[0] = a5;
    *(signed char *)&stk[1] = c;
    stk[2] = a7;
    return mpdrv_setcmd(a4, (int)c, (int)stk, 0x1, a7, a8);
}
