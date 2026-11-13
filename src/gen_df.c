/* Straight-line functions with calls and guards (batch gen_df): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADX_DecodeSteFloat(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4, float f5, float f6);

int ADX_DecodeSteFloat(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4, float f5, float f6)
{
    int stk[6];
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    register float u15;
    register float u16;
    register float u17;
    register float u18;
    register float u19;
    register float u20;
    register float u21;
    register float u22;
    register int t25;
    register int t26;
    register int t27;
    register float u28;
    register float u30;
    register float u31;
    register float u33;
    register int t34;
    register int t36;
    register int t37;
    register float u38;
    register float u41;
    register float u42;
    register float u44;
    register int t12;
    register float u13;
    register float u14;

    t0 = *(short *)((a7 + 0x0));
    *(unsigned int *)(((int)stk + 16)) = (a7 + 0x2);
    t1 = *(short *)(((a7 + 0x2) + 0x0));
    t2 = *(short *)((a9 + 0x0));
    *(unsigned int *)(((int)stk + 20)) = (a9 + 0x2);
    t3 = *(short *)(((a9 + 0x2) + 0x0));
    *(unsigned int *)(((int)stk + 0)) = 0x0;
    *(unsigned int *)(((int)stk + 8)) = 0x1;
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    *(unsigned int *)(((int)stk + 12)) = (((int)((unsigned int)((int)((unsigned int)a5 + (unsigned int)0x0)) + ((((int)0x0 > (int)a5)) ? 1u : 0u))) >> 1);
    t8 = 0x0;
    t9 = a6;
    t10 = a4;
    t11 = a8;
    u15 = (float)(t1 << 16);
    u16 = (float)((((short)(a11 >> 0)) << 2) << 2);
    u17 = 65536.0f;
    u18 = f5;
    u19 = f6;
    u20 = (float)(t0 << 16);
    u21 = (float)(t2 << 16);
    u22 = (float)(t3 << 16);
    for (;;) {
        if ((int)(*(int *)(((int)stk + 0))) < (int)(*(int *)(((int)stk + 12)))) {
            t25 = *(short *)((t10 + 0x0));
            if (((short)((unsigned char)((int)t25 >> 8) | ((t25 << 8) & 0xFFFFFF00)) & 0x8000) != 0) {
                break;
            }
            t10 = (t10 + 0x2);
            u16 = (float)(int)(((short)((unsigned char)((int)t25 >> 8) | ((t25 << 8) & 0xFFFFFF00)) & 0x1FFF) + 0x1);
            u19 = u16;
            t26 = 0x0;
            for (;;) {
                u16 = ((float)((((short)(a11 >> 0)) << 2) << 2) / 65536.0f);
                u16 = (u16 * u15);
                t27 = *(signed char *)((t10 + 0x0));
                t10 = (t10 + 0x1);
                u13 = ((float)((((short)(a10 >> 0)) << 2) << 2) / 65536.0f);
                t8 = 0xC172FD0;
                u28 = u16;
                u28 = u28 + u13 * u20;
                u16 = u28;
                u17 = (*(float *)((((unsigned char)t27 << 2) + t8)));
                t12 = ((unsigned char)t27 << 2);
                u13 = u19;
                u18 = u20;
                u30 = u16;
                u30 = u30 + u13 * u17;
                u16 = u30;
                u13 = ((float)((((short)(a10 >> 0)) << 2) << 2) / 65536.0f);
                t8 = 0xC1733D0;
                u14 = u16;
                u16 = ((float)((((short)(a11 >> 0)) << 2) << 2) / 65536.0f);
                u16 = (u16 * u18);
                u15 = u14;
                u31 = u16;
                u31 = u31 + u13 * u14;
                u16 = u31;
                u13 = u19;
                *(unsigned short *)((t9 + 0x0)) = ((unsigned int)(int)u14 >> 16);
                t9 = (t9 + 0x2);
                u17 = (*(float *)((t12 + t8)));
                u33 = u16;
                u33 = u33 + u13 * u17;
                u16 = u33;
                u17 = u16;
                u20 = u16;
                t26 = (t26 + 0x2);
                *(unsigned short *)((t9 + 0x0)) = (short)((unsigned int)(int)u17 >> 16);
                t9 = (t9 + 0x2);
                if ((int)t26 >= (int)0x20) {
                    break;
                }
            }
            t34 = *(short *)((t10 + 0x0));
            t12 = t34;
            t12 = ((int)t12 >> 8);
            t12 = (unsigned char)t12;
            t12 = (t12 | ((t34 << 8) & 0xFFFFFF00));
            if ((0x8000 & (short)t12) != 0) {
                t8 = (*(int *)(((int)stk + 8)));
                return t8;
            }
            t10 = (t10 + 0x2);
            u16 = (float)(((short)t12 & 0x1FFF) + 0x1);
            u19 = u16;
            t36 = 0x0;
            for (;;) {
                u16 = ((float)((((short)(a11 >> 0)) << 2) << 2) / 65536.0f);
                u16 = (u16 * u22);
                t37 = *(signed char *)((t10 + 0x0));
                t10 = (t10 + 0x1);
                u13 = ((float)((((short)(a10 >> 0)) << 2) << 2) / 65536.0f);
                t8 = 0xC172FD0;
                u38 = u16;
                u38 = u38 + u13 * u21;
                u16 = u38;
                u17 = (*(float *)((((unsigned char)t37 << 2) + t8)));
                t12 = ((unsigned char)t37 << 2);
                u13 = u19;
                u18 = u21;
                u41 = u16;
                u41 = u41 + u13 * u17;
                u16 = u41;
                u13 = ((float)((((short)(a10 >> 0)) << 2) << 2) / 65536.0f);
                t8 = 0xC1733D0;
                u14 = u16;
                u16 = ((float)((((short)(a11 >> 0)) << 2) << 2) / 65536.0f);
                u16 = (u16 * u18);
                u22 = u14;
                u42 = u16;
                u42 = u42 + u13 * u14;
                u16 = u42;
                u13 = u19;
                *(unsigned short *)((t11 + 0x0)) = ((unsigned int)(int)u14 >> 16);
                t11 = (t11 + 0x2);
                u17 = (*(float *)((t12 + t8)));
                u44 = u16;
                u44 = u44 + u13 * u17;
                u16 = u44;
                u17 = u16;
                u21 = u16;
                t36 = (t36 + 0x2);
                *(unsigned short *)((t11 + 0x0)) = (short)((unsigned int)(int)u17 >> 16);
                t11 = (t11 + 0x2);
                if ((int)t36 >= (int)0x20) {
                    break;
                }
            }
            *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + 0x1);
            *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x2);
            *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x2);
            continue;
        }
        t8 = a5;
        *(unsigned short *)((a7 + 0x0)) = ((unsigned int)(int)u20 >> 16);
        *(unsigned short *)(((*(int *)(((int)stk + 16))) + 0x0)) = ((unsigned int)(int)u15 >> 16);
        *(unsigned short *)((a9 + 0x0)) = (short)((unsigned int)(int)u21 >> 16);
        *(unsigned short *)(((*(int *)(((int)stk + 20))) + 0x0)) = ((unsigned int)(int)u22 >> 16);
        return t8;
    }
    return (*(int *)(((int)stk + 4)));
}
