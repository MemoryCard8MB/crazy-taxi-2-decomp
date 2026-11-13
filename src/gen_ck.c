/* Straight-line functions with calls and guards (batch gen_ck): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct oC_float { char p[0xC]; float v; };
int FUN_0c07ada0(int, int, int, int, float, float, float, float, float);
int FUN_0c03346e(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8);

int FUN_0c03346e(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register float u0;
    register float u1;

    u0 = *(float *)0xC2A5858;
    (((struct oC_float *)(a5))->v) = u0;
    t0 = 0xC;
    t1 = 0xC12B944;
    t2 = a5;
    t3 = a6;
    t4 = a4;
    u1 = u0;
    for (;;) {
        t5 = *(short *)((t4 + 0x0));
        if (t5 == 0) {
            break;
        }
        t1 = 0xC0B731C;
        *(unsigned int *)((a5 + 0x0)) = (unsigned short)t5;
        t0 = (*(signed char *)((t4 + 0x2)));
        t0 = (unsigned char)t0;
        t5 = t0;
        t0 = (t0 << 1);
        t0 = (t0 + t5);
        t0 = (t0 << 2);
        t0 = (t0 << 1);
        t1 = (t1 + t0);
        u1 = (*(float *)((t1 + 0x0)));
        t0 = 0x10;
        *(float *)((a5 + t0)) = u1;
        t0 = 0x4;
        u1 = (*(float *)((t1 + t0)));
        t0 = 0x14;
        *(float *)((a5 + t0)) = u1;
        t0 = 0x8;
        u1 = (*(float *)((t1 + t0)));
        t0 = 0x18;
        *(float *)((a5 + t0)) = u1;
        t0 = 0xC;
        u1 = (*(float *)((t1 + t0)));
        t0 = 0x1C;
        *(float *)((a5 + t0)) = u1;
        t0 = 0x10;
        u1 = (*(float *)((t1 + t0)));
        t0 = 0x20;
        *(float *)((a5 + t0)) = u1;
        t0 = 0x14;
        u1 = (*(float *)((t1 + t0)));
        t0 = 0x24;
        *(float *)((a5 + t0)) = u1;
        t0 = (*(signed char *)((t4 + 0x3)));
        t5 = (unsigned char)t0;
        t0 = (*(short *)((t4 + 0x4)));
        t0 = (t0 + a6);
        t6 = t0;
        t0 = 0x4;
        u1 = (float)t6;
        *(float *)((a5 + t0)) = u1;
        t0 = (*(short *)((t4 + 0x6)));
        t0 = (t0 + a7);
        t6 = t0;
        t0 = 0x8;
        u1 = (float)t6;
        *(float *)((a5 + t0)) = u1;
        t6 = a7;
        for (;;) {
            t7 = t5 == 0;
            t5 = (t5 - 1);
            if (t7) {
                break;
            }
            t1 = a5;
            t0 = (FUN_0c07ada0(t1, t2, t3, a7, f4, f5, f6, f7, f8));
            t1 = 0xC12B9A4;
            t2 = 0xC12B9A4;
            if ((unsigned int)t1 >= (unsigned int)0xC12B944) {
                for (;;) {
                    t7 = (*(int *)((a5 + 0x0)));
                    t6 = (*(int *)((t1 + 0x0)));
                    if ((int)t7 >= (int)t6) {
                        t3 = t2;
                        t6 = (*(int *)((t3 + 0x0)));
                        t7 = (*(int *)((a5 + 0x0)));
                        t0 = 0x4;
                        t1 = (*(int *)((t2 + 0x4)));
                        t7 = (t7 - t6);
                        u0 = (*(float *)((a5 + t0)));
                        t7 = (t7 << 2);
                        t7 = (t7 << 2);
                        t1 = (t1 + t7);
                        t6 = (*(short *)((t1 + 0x0)));
                        u1 = (float)t6;
                        u0 = (u0 + u1);
                        *(float *)((a5 + t0)) = u0;
                        break;
                    }
                    t1 = (t1 - 8);
                    t2 = (t2 - 8);
                    if ((unsigned int)t1 < (unsigned int)0xC12B944) {
                        break;
                    }
                }
            }
        }
        t4 = (t4 + 0x8);
    }
    return t0;
}
