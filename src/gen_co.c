/* Straight-line functions with calls and guards (batch gen_co): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uint { unsigned int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int FUN_0c01ec7a(int);
int FUN_0c01ed38(int);
int FUN_0c01edbc(int, int);
int FUN_0c01ee10(int, int);
int FUN_0c072290(int, int);
int FUN_0c077660(int, int, int, int, int, int);
int FUN_0c08f9c4(int, int);
extern int FUN_0c16bab0();
int gdc_GetStreamVoiceStat2(int);
int gdc_StreamVoiceVol(int, int);
int kmiRegisterPhIntHandler(int);
extern int nlGetMatrix8();
int nlLoadMatrix8(int);
int nlLocate(int, int);
int nlMultiMatrixRevOrder8(int);
int nlPrintf(int, ...);
int nlTransposeMatrix(void);
int syRtcGetDate(int);
int FUN_0c08f788(int a4, int a5, int a6, int a7);
int FUN_0c058edc(int a4, int a5, int a6, int a7);
int kmiInitInterrupt(void);
int BupSave(int a4, int a5, int a6, int a7);
void FUN_0c165d48(int a4, int a5, int a6, int a7);
int FUN_0c05b372(void);
int FUN_0c0804f0(void);
int nlObjPutWorldMatrixMode(float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);

int FUN_0c08f788(int a4, int a5, int a6, int a7)
{
    int stk[7];
    register int t8;
    int t11;

    *(unsigned int *)(((int)stk + 24)) = a4;
    *(unsigned short *)(((((int)stk + 0) + 0x16) + 0x0)) = a5;
    *(unsigned int *)(((int)stk + 0)) = (((*(int *)(((int)stk + 24))) * 0x154) + 0xC2C8D2C);
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 4))) >= (int)(*(int *)(((*(int *)(((*(int *)(((int)stk + 0))) + 0x1C))) + 0x30)))) {
            return (unsigned short)(*(short *)(((int)stk + 22)));
        }
        t8 = FUN_0c08f9c4((*(int *)(((int)stk + 24))), (*(int *)(((int)stk + 4))));
        *(unsigned int *)(((int)stk + 16)) = t8;
        *(unsigned int *)(((int)stk + 8)) = (unsigned char)(*(signed char *)((t8 + 0x0)));
        if (((*(int *)(((int)stk + 8))) != 51) && (t11 = *(int *)(((int)stk + 8)), t11 != 0xCC)) {
            *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x1);
            continue;
        }
        *(unsigned short *)(((int)stk + 14)) = (((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC2C8D28) + 0xC)))))((*(int *)(((int)stk + 16))), 0x2, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
        if ((*(short *)(((int)stk + 22))) == (*(short *)(((int)stk + 14)))) {
            break;
        }
        *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x1);
    }
    return 0xFFFFFFFF;
}


int kmiInitInterrupt(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = kmiRegisterPhIntHandler(0xC166B10);
    *(unsigned int *)0xC300ABC = 0x0;
    *(unsigned int *)0xC300B80 = 0x0;
    (((struct o0_uint *)0xC300C48)->v) = 0x0;
    (((struct o4_uint *)0xC300C48)->v) = 0x0;
    (((struct o4_uint *)0xC306DE8)->v) = 0x0;
    (((struct o8_uint *)0xC306DE8)->v) = 0x0;
    (((struct oC_uint *)0xC306DE8)->v) = 0x0;
    (((struct o10_uint *)0xC306DE8)->v) = 0x0;
    (((struct o14_uint *)0xC306DE8)->v) = 0x0;
    (((struct o18_uint *)0xC306DE8)->v) = 0x0;
    (((struct o1C_uint *)0xC306DE8)->v) = 0x0;
    (((struct o20_uint *)0xC306DE8)->v) = 0x0;
    (((struct o24_uint *)0xC306DE8)->v) = 0x0;
    *(unsigned int *)0xC306E3C = 0x0;
    (((struct o0_uint *)0xC306DE8)->v) = 0x0;
    t1 = 0x0;
    for (;;) {
        t2 = (0xC306E18 + t1);
        t1 = (t1 + 0x4);
        *(unsigned int *)((t2 + 0x0)) = 0x0;
        if ((unsigned int)t1 >= (unsigned int)0x14) {
            break;
        }
    }
    return t0;
}

int BupSave(int a4, int a5, int a6, int a7)
{
    int stk[11];

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 12)) = a5;
    *(unsigned int *)(((int)stk + 16)) = a6;
    *(unsigned int *)(((int)stk + 20)) = a7;
    syRtcGetDate((((int)stk + 8) + 0x10));
    { struct mvb8 { char b[8]; }; *(struct mvb8 *)((((int)stk + 8) + 0x1C)) = *(struct mvb8 *)((((int)stk + 8) + 0x10)); }
    *(int *)((int)stk + 4) = 0x80000010;
    *(int *)((int)stk + 0) = (((int)stk + 4) + 0x20);
    return (FUN_0c077660((*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 12))), (*(int *)(((int)stk + 16))), (*(int *)(((int)stk + 20))), (((int)stk + 4) + 0x20), 0x80000010));
}

void FUN_0c165d48(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;

    if (a4 == 0) {
        t1 = ((int (*)(int, int, int, int, int))(FUN_0c16bab0))(a4, a5, a6, a7, 0xC1718DC);
        return;
    }
    if (((int)a5 >= 0) && (t0 = *(int *)((a4 + 0x18)), (int)a5 <= (int)t0)) {
        *(unsigned int *)((a4 + 0x14)) = a5;
        return;
    }
    t0 = ((int (*)(int, int, int, int, int, int))(FUN_0c16bab0))(a4, a5, a6, a7, 0xC171968, a5);
}

int FUN_0c05b372(void)
{
    register int t1;

    nlLocate(0x5, 0x3A);
    t1 = *(int *)0xC2B967C;
    return (nlPrintf(0xC10D65C, ((*(int *)((((((t1 << 2) << 1) + t1) << 2) + 0xC2B928C))) << 2)));
}

int FUN_0c0804f0(void)
{
    nlTransposeMatrix();
    FUN_0c072290(0xC2C41B0, 0xC2C41C8);
    FUN_0c072290(0xC147800, 0xC0910C0);
    return nlTransposeMatrix();
}

int nlObjPutWorldMatrixMode(float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    register int t0;

    t0 = ((int (*)(int, float, float, float, float, float, float, float, float))(nlGetMatrix8))(0xC2C3CD8, f4, f5, f6, f7, f8, f9, f10, f11);
    nlMultiMatrixRevOrder8(0xC2BFC48);
    t0 = ((int (*)(int))(nlGetMatrix8))(0xC2BFC08);
    return nlLoadMatrix8(0xC2C3CD8);
}
