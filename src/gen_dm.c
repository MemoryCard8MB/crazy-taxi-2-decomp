/* Straight-line functions with calls and guards (batch gen_dm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[4]; } Stk4;
struct o0_float { float v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int FUN_0c072230(int, int);
int FUN_0c072290(int, int);
int FUN_0c075bd0(int);
int FUN_0c075c00(int);
int FUN_0c079700(int, int);
int kmSetCheapShadowMode(int);
int kmiReadRegister(int);
int kmiWriteRegister(int, int);
int nlInvertMatrix(int);
int nlMvLoadFlatMatrix(void);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlTransposeMatrix(void);
int nlMvObjPut(int a4, int a5);
int kmiInitializeFog(void);
int kmSetPaletteData(int a4);
int kmSetStrideWidth(int a4);
int kmiResetBoard(void);
int kmSetFogDensity(int a4);
int kmSetColorClampValue(Stk4 s);
int FUN_0c15c60c(void);
int FUN_0c075ba0(int a4);
int kmSetFogTableColor(Stk4 s);
int kmSetBorderColor(Stk4 s);

int nlMvObjPut(int a4, int a5)
{
    int stk[6];
    register int t17;
    register float u21;
    register int t29;
    register int t31;

    *(unsigned int *)(((int)stk + 0)) = 0xC074E20;
    nlPushMatrix(0x0);
    kmSetCheapShadowMode((*(int *)((a5 + 0x10))));
    (((struct o0_float *)0xC2C3DF0)->v) = ((((struct o18_float *)(a5))->v));
    (((struct o4_float *)0xC2C3DF0)->v) = ((((struct o1C_float *)(a5))->v));
    (((struct o8_float *)0xC2C3DF0)->v) = ((((struct o20_float *)(a5))->v));
    nlTransposeMatrix();
    FUN_0c072290(0xC2C3DF0, 0xC2C3DF0);
    nlTransposeMatrix();
    if (((*(int *)((a5 + 0x0))) & 1) != 0) {
        nlPushMatrix(0x0);
        nlInvertMatrix(0x0);
        FUN_0c072230((a5 + 0x18), 0xC2C3E00);
        nlPopMatrix(0x1);
    }
    t17 = ((int (*)(void))((*(int *)(((int)stk + 0)))))();
    nlMvLoadFlatMatrix();
    if (((*(int *)((a5 + 0x0))) & 1) == 0) {
        u21 = (((struct o14_float *)(a5))->v);
        (((struct o20_float *)0xC2C3DF0)->v) = (((((struct o0_float *)0xC2C3DF0)->v)) * (-u21));
        (((struct o24_float *)0xC2C3DF0)->v) = (((((struct o4_float *)0xC2C3DF0)->v)) * (-u21));
        (((struct o28_float *)0xC2C3DF0)->v) = (((((struct o8_float *)0xC2C3DF0)->v)) * (-u21));
        FUN_0c072290(0xC2C3E10, 0xC2C3E10);
    }
    t29 = a4;
    for (;;) {
        if ((*(int *)((t29 + 0x0))) == 0) {
            break;
        }
        (((struct oC_uint *)0xC2C3DF0)->v) = 0x0;
        t31 = *(int *)((t29 + 0x0));
        t29 = (t29 + 0x4);
        FUN_0c079700(t31, a5);
    }
    return nlPopMatrix(0x1);
}

int kmiInitializeFog(void)
{
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    kmiWriteRegister(0xB8, 0xFF07);
    kmiWriteRegister(0xB4, 0x7F7F7F);
    kmiWriteRegister(0xB0, 0x7F7F7F);
    t3 = 0x200;
    t4 = 0xFE;
    t5 = 0xFF;
    for (;;) {
        t6 = kmiWriteRegister(t3, (unsigned short)(((unsigned char)t5 << 8) | (unsigned char)t4));
        t5 = (t5 - 1);
        t3 = (t3 + 0x4);
        t4 = (t4 - 1);
        if ((int)t5 <= (int)0x7F) {
            break;
        }
    }
    return t6;
}

int kmSetPaletteData(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = 0x0;
    t1 = a4;
    t2 = 0x1000;
    for (;;) {
        t3 = *(int *)((t1 + 0x0));
        t1 = (t1 + 0x4);
        kmiWriteRegister(t2, t3);
        t0 = (t0 + 0x1);
        t2 = (t2 + 0x4);
        if ((int)t0 >= (int)0x400) {
            break;
        }
    }
    return 0x0;
}

int kmSetStrideWidth(int a4)
{
    register int t0;

    t0 = kmiReadRegister(0xE4);
    kmiWriteRegister(0xE4, (((int)(a4 & 0x3E0) >> 5) | (t0 & 0xFFFFFFE0)));
    return 0x0;
}

int kmiResetBoard(void)
{
    kmiWriteRegister(0x8, 0x3);
    kmiWriteRegister(0x0, 0x0);
    return (kmiWriteRegister(0x8, 0x0));
}

int kmSetFogDensity(int a4)
{
    kmiWriteRegister(0xB8, a4);
    return 0x0;
}

int kmSetColorClampValue(Stk4 s)
{
    kmiWriteRegister(0xBC, s.w[0]);
    kmiWriteRegister(0xC0, s.w[1]);
    return 0x0;
}

int FUN_0c15c60c(void)
{
    kmiWriteRegister(0x8, 0x1);
    return kmiWriteRegister(0x8, 0x0);
}

int FUN_0c075ba0(int a4)
{
    kmSetCheapShadowMode(a4);
    FUN_0c075bd0(0x1);
    return FUN_0c075c00(0x1);
}

int kmSetFogTableColor(Stk4 s)
{
    kmiWriteRegister(0xB0, s.w[0]);
    return 0x0;
}

int kmSetBorderColor(Stk4 s)
{
    kmiWriteRegister(0x40, s.w[0]);
    return 0x0;
}
