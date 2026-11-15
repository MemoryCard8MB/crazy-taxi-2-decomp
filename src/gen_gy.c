/* Straight-line functions with calls and guards (batch gen_gy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o10_float { char p[0x10]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o42_short { char p[0x42]; short v; };
struct o42_ushort { char p[0x42]; unsigned short v; };
struct o44_int { char p[0x44]; int v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o58_int { char p[0x58]; int v; };
struct o5C_int { char p[0x5C]; int v; };
int FUN_0c04e152(int, int, int);
int FUN_0c05f37e(int, int, int);
int FUN_0c072230(int, int);
int FUN_0c073360(void);
int FUN_0c073a60(int);
int nlAddVector(int, int);
int nlPopMatrix(int);
int nlRotateAY(int);
int FUN_0c04e192(int a4, int a5, float f4, float f5);

int FUN_0c04e192(int a4, int a5, float f4, float f5)
{
    int stk[9];
    register int t77;
    register int t3;
    register int t4;
    register int t6;
    register float u15;
    register float u11;

    *(float *)(((int)stk + 24)) = 0.0f;
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 32)) = 0.0f;
    t77 = 0x42;
    if (((unsigned short)((((struct o42_short *)(a4))->v)) & 0x100) == 0) {
    } else {
        (((struct o42_ushort *)(a4))->v) = (((((struct o42_short *)(a4))->v)) & 0xFF00);
        t3 = *(int *)0xC2B1B94;
        if ((unsigned int)(unsigned short)(t3 - (*(int *)((a4 + 0x30)))) < (unsigned int)0x8000) {
            t4 = *(int *)((a4 + 0x30));
            u11 = ((float)t4 + (((float)(unsigned short)(t3 - t4) * 0.0399999991f)));
        } else {
            t6 = *(int *)((a4 + 0x30));
            u11 = ((float)t6 - (((float)((-(unsigned short)(t3 - t6)) + 0xFFFF) * 0.0399999991f)));
        }
        *(unsigned int *)((a4 + 0x30)) = ((int)u11 & 0xFFFF);
        u15 = (((struct o48_float *)(a4))->v);
        (((struct o48_float *)(a4))->v) = (u15 + ((((struct o4C_float *)(a4))->v)));
        *(unsigned int *)(((int)stk + 12)) = (*(int *)((((unsigned char)(*(signed char *)(((0x41 + a4) + 0x0))) << 2) + (*(int *)((0xC131728 + ((unsigned char)(*(signed char *)((a4 + 0x40))) << 2)))))));
        if ((*(signed char *)((a4 + 0x40))) == 0) {
            if (((((struct o48_float *)(a4))->v)) > ((float)((((struct o44_int *)(a4))->v)) + -1.0f)) {
                (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) - ((float)((((struct o44_int *)(a4))->v)) + -1.0f));
                (((struct o42_ushort *)(a4))->v) = (((((struct o42_short *)(a4))->v)) | 0x2);
            }
            if (((((struct o58_int *)(a4))->v)) != 0) {
                (((struct o1C_float *)(a4))->v) = (((((struct o1C_float *)(a4))->v)) + -0.0408333316f);
                (((struct o10_float *)(a4))->v) = (((((struct o10_float *)(a4))->v)) + ((((struct o1C_float *)(a4))->v)));
                t77 = 0x10;
            } else {
                (((struct o1C_float *)(a4))->v) = 0.0f;
                t77 = 0x1C;
            }
        } else {
            if (((((struct o48_float *)(a4))->v)) > ((float)((((struct o44_int *)(a4))->v)) + -1.0f)) {
                (((struct o48_float *)(a4))->v) = ((float)((((struct o44_int *)(a4))->v)) + -1.0f);
                (((struct o42_ushort *)(a4))->v) = (((((struct o42_short *)(a4))->v)) | 0x1);
                (((struct o4C_float *)(a4))->v) = 1.0f;
                FUN_0c04e152(a4, 0x0, ((((struct o5C_int *)(a4))->v)));
                (((struct o18_float *)(a4))->v) = 0.0f;
                (((struct o20_float *)(a4))->v) = 0.0f;
                t77 = 0x20;
            } else {
                *(float *)(((int)stk + 16)) = u15;
                *(float *)(((int)stk + 20)) = ((((struct o4C_float *)(a4))->v));
                FUN_0c05f37e((((int)stk + 0) + 0xC), 0x0, (((int)stk + 0) + 0x18));
                FUN_0c073360();
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(0xC10C8F0); }
                nlRotateAY((*(int *)((a4 + 0x30))));
                FUN_0c073a60((((int)stk + 0) + 0x18));
                FUN_0c072230(((int)stk + 0), ((int)stk + 0));
                (((struct o18_float *)(a4))->v) = ((*(float *)(((int)stk + 0))) * 1.60000002f);
                (((struct o20_float *)(a4))->v) = ((*(float *)(((int)stk + 8))) * 1.60000002f);
                if (((((struct o58_int *)(a4))->v)) != 0) {
                    (((struct o1C_float *)(a4))->v) = (((((struct o1C_float *)(a4))->v)) + -0.0408333316f);
                } else {
                    (((struct o1C_float *)(a4))->v) = 0.0f;
                }
                nlAddVector((a4 + 0xC), (a4 + 0x18));
                t77 = (nlPopMatrix(0x1));
            }
        }
    }
    return t77;
}
