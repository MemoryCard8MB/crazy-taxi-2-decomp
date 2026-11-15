/* Straight-line functions with calls and guards (batch gen_ho): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o44_int { char p[0x44]; int v; };
struct o48_int { char p[0x48]; int v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c073c40(int, int, float);
int FUN_0c075740(int, int, int, int, int, int, int, int, int, int, float, float, float, float, float, float, float, float);
int FUN_0c078810(int, int, int);
int nlAddVector(int, int);
int nlAddVector3op(int, int, int);
int nlObjPutUseViewMatrix(int);
int nlTriPutSetClipping(int, float, float, float, float);
int nlTriPutSetPoint(int, int, float, float, float, float, float, float, float, float);
int nlTriPutTextureInit(int, int, int);
int FUN_0c02cf88(int a4);

int FUN_0c02cf88(int a4)
{
    int stk[15];

    register int R0;
    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R7;
    register float F3;
    register float F4;
    register float F5;
    register float F6;
    register float F7;
    register float F8;
    register float F9;
    register float F10;
    register float F11;
    register float F14;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    v0_0 = a4;
    nlTriPutTextureInit(0xC274808, 0xFFFFFFFF, 0x0);
    v0_1 = ((((struct o48_int *)(v0_0))->v));
    *(int *)((int)stk + 20) = v0_1;
    *(int *)((int)stk + 16) = 0x0;
    *(int *)((int)stk + 12) = 0x0;
    *(int *)((int)stk + 8) = 0x0;
    *(int *)((int)stk + 4) = 0x0;
    *(int *)((int)stk + 0) = 0x0;
    v0_2 = (((struct o44_int *)(v0_0))->v);
    v0_3 = *(int *)0xC270F50;
    w0_0 = (((struct o8_float *)(((v0_2 * 0x1C) + v0_3)))->v);
    w0_1 = (((struct o4_float *)(((v0_2 * 0x1C) + v0_3)))->v);
    FUN_0c075740(0xC274808, 0x2, 0x0, 0xFFFFFFFF, 0x0, 0x0, 0x0, 0x0, 0x0, v0_1, 0.5f, 0.5f, w0_1, w0_0, ((((struct oC_float *)(((v0_2 * 0x1C) + v0_3)))->v)), 0.0f, 0.0f, 0.0f);
    *(unsigned int *)0xC274828 = ((*(int *)0xC274828) | 0xC0);
    v0_1 = (((struct o44_int *)(v0_0))->v);
    v0_2 = *(int *)0xC270F50;
    w0_0 = (((struct o4_float *)(((v0_1 * 0x1C) + v0_2)))->v);
    w0_1 = (((struct o8_float *)(((v0_1 * 0x1C) + v0_2)))->v);
    w0_2 = (((struct oC_float *)(((v0_1 * 0x1C) + v0_2)))->v);
    FUN_0c073c40(((int)stk + 24), v0_0, 0.00999999978f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 24) + 0xC)) = *(struct mv3 *)(0xC0A2D08); }
    v0_1 = (0xC073AD0);
    v0_1 = ((((0xFF000000 | ((unsigned char)(int)(w0_0 * 255.0f) << 16)) | ((unsigned char)(int)(w0_1 * 255.0f) << 8)) | (unsigned char)(int)(w0_2 * 255.0f)));
    v0_2 = (0x0);
    v0_3 = (0xC274808);
    v0_0 = (v0_0);
    v0_4 = (0xC073AF0);
    v0_4 = (0xC073C40);
    w0_0 = (0.0f);
    L_C02D0B0:;
    if (((int)v0_2 < (int)((((struct o48_int *)(v0_0))->v)))) goto L_C02D064;
    nlTriPutSetClipping(v0_3, ((((struct o14_float *)(v0_0))->v)), ((((struct o4_float *)((v0_0 + 0x14)))->v)), ((((struct o8_float *)((v0_0 + 0x14)))->v)), ((((struct o10_float *)(v0_0))->v)));
    nlObjPutUseViewMatrix(v0_3);
    FUN_0c073c40((((int)stk + 24) + 0xC), (((int)stk + 24) + 0xC), (1.0f / (float)((((struct o48_int *)(v0_0))->v))));
    FUN_0c073c40((((int)stk + 24) + 0x18), v0_0, (((((struct o10_float *)(v0_0))->v)) * 0.100000001f));
    nlAddVector((((int)stk + 24) + 0x18), (((int)stk + 24) + 0xC));
    return (FUN_0c078810((((int)stk + 24) + 0x18), (((int)stk + 24) + 0xC), v0_1));
    L_C02D064:;
    v0_4 = *(int *)(((v0_2 << 2) + 0xC1294CC));
    nlAddVector3op((((int)stk + 24) + 0x18), ((int)stk + 24), ((((v0_4 << 1) + v0_4) << 2) + (v0_0 + 0x14)));
    nlAddVector((((int)stk + 24) + 0xC), (((int)stk + 24) + 0x18));
    nlTriPutSetPoint(v0_3, v0_2, (*(float *)(((int)stk + 48))), (*(float *)(((int)stk + 52))), (*(float *)(((int)stk + 56))), (*(float *)((v0_0 + 0x0))), ((((struct o4_float *)(v0_0))->v)), ((((struct o8_float *)(v0_0))->v)), w0_0, w0_0);
    v0_2 = ((v0_2 + 0x1));
    goto L_C02D0B0;
}
