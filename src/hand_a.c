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

int syG2AicaFifoIsEmpty(int);
int syG2FifoIsEmpty(int);

/* manual: polls syG2AicaFifoIsEmpty until it reports 1 through the word it is given, then counts the wait at +0x110 of the
   structure at 0xC1743EC */
int syG2AicaFifoWaitEmpty(void)
{
    volatile int st;

    do {
        do {
            syG2AicaFifoIsEmpty((int)&st);
        } while (st != 1);
        *(int *)(*(int *)0xC1743EC + 0x110) += 1;
    } while (st != 1);
    return 0;
}

/* manual: as syG2AicaFifoWaitEmpty, for syG2FifoIsEmpty and the counter at +0x10C */
int FUN_0c16880c(void)
{
    volatile int st;

    do {
        do {
            syG2FifoIsEmpty((int)&st);
        } while (st != 1);
        *(int *)(*(int *)0xC1743EC + 0x10C) += 1;
    } while (st != 1);
    return 0;
}

extern void _builtin_ld_ext(float (*)[4]);
extern void _builtin_st_ext(float (*)[4]);

/* manual: scales the current matrix (the back register bank): rows 0-3 by x, 4-7 by y, 8-11 by z; the original pops the three
   arguments into xf15 in turn and keeps xf15 itself in FPUL */
void nlScale(float x, float y, float z)
{
    float m[16];
    int i;

    _builtin_st_ext((float (*)[4])m);
    for (i = 0; i < 4; i++) {
        m[i] = m[i] * x;
        m[4 + i] = m[4 + i] * y;
        m[8 + i] = m[8 + i] * z;
    }
    _builtin_ld_ext((float (*)[4])m);
}

/* manual: compares 512 bytes and returns -1 if any differ, else 0; it reads the byte of a4 before the byte of a5 every time,
   which volatile keeps (the compiler reordered the two loads) */
int vmsfs_memcmp(int a4, int a5)
{
    volatile signed char *p = (volatile signed char *)a4;
    volatile signed char *q = (volatile signed char *)a5;
    int r = 0;
    int i;

    for (i = 0; i < 0x200; i++) {
        signed char c = *p;
        if (c != *q) {
            r = -1;
        }
        p++;
        q++;
    }
    return r;
}

int FUN_0c06219e(int a4, int a5, int a6, int a7);

/* manual: no caller uses a result (each overwrites r0), so none is declared. */
/* manual: r6 and r7 pass through to FUN_0c06219e (which hands them on): -1 and the best rank when bit 0x40 of +0x63 is set,
   otherwise the caller's a6 and a7 as they came in. The handler call through the table at 0xC10ECF4 also gets r5-r7 unchanged. */
void FUN_0c0620ac(int a4, int a5, int a6, int a7)
{
    signed char *flags = (signed char *)(a4 + 0x63);
    int r6 = a6;
    int r7 = a7;
    int best = 0;
    int i, n, rank, st;

    if ((*flags & 0x80) != 0) {
        *(int *)(a4 + 0xC) = *(int *)(a4 + 0x10);
        *flags = *flags & 0x7F;
    }
    st = *(int *)(a4 + 0xC);
    if (st >= 0 && st < 13) {
        ((int (*)(int, int, int, int))(*(int *)(0xC10ECF4 + (*(int *)(a4 + 0xC) << 2))))(a4, a5, a6, a7);
    }
    if ((*flags & 0x40) != 0) {
        r6 = -1;
        r7 = -1;
        n = *(int *)(a4 + 0x4);
        for (i = 0; i < n; i = i + 1, n = *(int *)(a4 + 0x4)) {
            if ((*(signed char *)(*(int *)a4 + (i << 8) + 0xFE) & 0x80) != 0) {
                rank = -1;
            } else {
                rank = *(int *)(0xC10ED28 + (*(int *)(*(int *)a4 + (i << 8) + 0x88) << 2));
            }
            if (r7 < rank) {
                best = i;
                r7 = rank;
            }
        }
        for (i = 0; i < *(int *)(a4 + 0x4); i++) {
            signed char *p = (signed char *)(*(int *)a4 + (i << 8) + 0xFF);
            if (i == best) {
                *p = *p | 0x40;
            } else {
                *p = *p & 0xBF;
            }
        }
    }
    for (i = 0; i < *(int *)(a4 + 0x8); i++) {
        FUN_0c06219e(a4, i, r6, r7);
    }
}

typedef struct { int w[3]; } Stk3;
int FUN_0c04bd7c(int a4, int a5);
float nlLength(int a, int b);

/* manual: the point comes by value on the stack (the original hands its address, the entry SP, to FUN_0c04bd7c and nlLength);
   r5 passes through to FUN_0c04bd7c. Returns 1 when an entry of the 24-byte table at *0xC177D18 (count at 0xC177D20, kind not
   7 or -1, same group as the point) has its position (20-byte records from *0xC177D1C) within r of the point. */
int FUN_0c016a22(int a4, int a5, Stk3 v, float r)
{
    int grp, i;
    int *e;
    int pos;

    grp = FUN_0c04bd7c((int)&v, a5);
    pos = *(int *)0xC177D1C;
    e = *(int **)0xC177D18;
    for (i = 0; i < *(int *)0xC177D20; i++, e += 6, pos += 20) {
        if (e[0] != 7 && e[0] != -1 && e[1] == grp) {
            if (r > nlLength(pos, (int)&v)) {
                return 1;
            }
        }
    }
    return 0;
}

int send_message_in_current_mode(int s);
int syIntAdrChk_printh(int v);

/* manual: prints the header (r4, as passed), then n words of the table at *0xC30BA60 from index start, each followed by the
   separator at 0xC172E78, then the line end at 0xC172E70 */
void syIntAdrChk_dumpline(int head, int start, int n)
{
    int i;

    send_message_in_current_mode(head);
    for (i = start; i < start + n; i++) {
        syIntAdrChk_printh((*(int **)0xC30BA60)[i]);
        send_message_in_current_mode(0xC172E78);
    }
    send_message_in_current_mode(0xC172E70);
}
