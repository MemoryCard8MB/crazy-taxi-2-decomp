/* Straight-line functions with calls and guards (batch gen_id): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_int { char p[0x24]; int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o30_int { char p[0x30]; int v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c01d7b0(void);
int FUN_0c01e3cc(int);
int FUN_0c01e6f0(void);
int FUN_0c01e9e2(int, int);
int FUN_0c01ff48(int, int);
int FUN_0c0200f0(int);
int FUN_0c020176(void);
int FUN_0c020244(void);
int FUN_0c0209b6(void);
int FUN_0c020b54(void);
int FUN_0c027f28(int);
int FUN_0c027fbe(float, float);
int FUN_0c02803a(int, int, int, int);
float FUN_0c02806c(int);
int FUN_0c02842e(int);
int FUN_0c047a4a(int);
int FUN_0c048262(int);
int FUN_0c048d70(int);
int FUN_0c052dba(int, int, float, float);
int FUN_0c058f64(int, int, int, int);
int FUN_0c06f240(void);
int FUN_0c06f550(int, int, int);
int FUN_0c072230(int, int);
int FUN_0c073360(void);
int FUN_0c073a30(float, float, float);
int FUN_0c073a60(int);
int gdc_FadeManStreamSong(int, int, int, int, int, int);
int gdc_FileLoad(int, int, int);
int mpvvlc_InitMbai(void);
int nlInitEvent(void);
int nlInitHeapMemory(int, int);
int nlObjPut(int);
int nlObjPutCheapEnvMap(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAZ(int);
int pfSize(float, float);
int FUN_0c053992(void);
int FUN_0c01c290(void);
int FUN_0c01bca2(void);

int FUN_0c053992(void)
{
    int stk[31];
    register float u4;
    register float u9;
    register int t19;
    register int t61;
    register int t62;
    register int t63;
    register int t28;

    nlPushMatrix(0x0);
    FUN_0c073a30(0.0f, 0.0f, -38.0f);
    if ((int)((((struct o0_int *)0xC2B2D24)->v)) >= (int)0x78) {
        nlObjPut(0xC3F99B0);
        (((struct o28_uint *)0xC2B2C08)->v) = 0x2005;
        u4 = (((struct o0_float *)0xC053BD4)->v);
        FUN_0c052dba(0xC2B2BFC, 0x1B, ((((struct o8_float *)0xC053BD4)->v)), u4);
        FUN_0c052dba(0xC2B2BFC, 0x1C, ((((struct oC_float *)0xC053BD4)->v)), u4);
        u9 = (((struct o10_float *)0xC053BD4)->v);
        (((struct o0_float *)0xC2B2C08)->v) = (((((struct o0_float *)0xC2B2C08)->v)) - u9);
        FUN_0c052dba(0xC2B2BFC, 0x5F, ((((struct o18_float *)0xC053BD4)->v)), ((((struct o14_float *)0xC053BD4)->v)));
        (((struct o0_float *)0xC2B2C08)->v) = (((((struct o0_float *)0xC2B2C08)->v)) - u9);
        FUN_0c052dba(0xC2B2BFC, 0x20, ((((struct o20_float *)0xC053BD4)->v)), ((((struct o1C_float *)0xC053BD4)->v)));
        (((struct o0_float *)0xC2B2C08)->v) = (((((struct o0_float *)0xC2B2C08)->v)) + 0.0399999991f);
        t61 = 0xFFFFFFFF;
        t62 = 0xFFFFFFFF;
        t63 = 0xFFFFFFFF;
    } else {
        t19 = 0x0;
        for (;;) {
            FUN_0c073360();
            nlRotateAZ((t19 * 0x1999));
            *(unsigned int *)(((int)stk + 0)) = (((t19 << 1) + t19) << 2);
            FUN_0c072230(0xC2B2D28, ((((t19 << 1) + t19) << 2) + (((int)stk + 0) + 0x4)));
            nlPopMatrix(0x1);
            if (((((struct o8_float *)0xC2B2D24)->v)) > 0.0f) {
                if (((int)t19 >= (int)0x3) && ((int)t19 <= (int)0x7)) {
                    t28 = ((*(short *)((((((t19 << 2) + t19) << 2) + 0xC2B2C5C) + 0xC))) + 0x222);
                } else {
                    t28 = ((*(short *)((((((t19 << 2) + t19) << 2) + 0xC2B2C5C) + 0xC))) - 0x222);
                }
                *(unsigned short *)((((((t19 << 2) + t19) << 2) + 0xC2B2C5C) + 0xC)) = t28;
            }
            nlPushMatrix(0x0);
            FUN_0c073a60(((*(int *)(((int)stk + 0))) + (((int)stk + 0) + 0x4)));
            nlRotateAX((unsigned short)(*(short *)((((((t19 << 2) + t19) << 2) + 0xC2B2C5C) + 0xC))));
            nlObjPutCheapEnvMap((*(int *)((((t19 << 2) + 0xC132080) + 0x0))));
            nlObjPut((*(int *)((((t19 << 2) + 0xC132080) + 0x0))));
            nlPopMatrix(0x1);
            t19 = (t19 + 0x1);
            if ((int)t19 >= (int)0xA) {
                break;
            }
        }
        if (((((struct o8_float *)0xC2B2D24)->v)) > 0.0f) {
            (((struct o8_float *)0xC2B2D24)->v) = (((((struct o8_float *)0xC2B2D24)->v)) - 0.300000012f);
        }
        (((struct o0_uint *)0xC2B2D24)->v) = (((((struct o0_int *)0xC2B2D24)->v)) + 0x1);
        t61 = 0xFF000000;
        t62 = 0xFF000000;
        t63 = 0xFF000000;
    }
    FUN_0c06f550(t61, t62, t63);
    return (nlPopMatrix(0x1));
}

int FUN_0c01c290(void)
{
    int stk[7];
    register int t14;
    register float u21;
    register int t54;
    register int t56;
    register int t60;
    register int t66;
    int t59;

    *(unsigned int *)0xC177EF0 = 0xC177EF4;
    nlInitHeapMemory(0xC177EF4, 0x30000);
    nlInitEvent();
    FUN_0c01e6f0();
    if (((((struct o24_int *)0xC1EC71C)->v)) != 0) {
        if (((((struct o0_int *)0xC1EC71C)->v)) == 2) {
            FUN_0c020b54();
        } else {
            FUN_0c0209b6();
        }
    }
    mpvvlc_InitMbai();
    t14 = (((struct o0_int *)0xC1EC71C)->v);
    if ((*(int *)0xC11D048) != t14) {
        *(unsigned int *)0xC11D048 = t14;
        if (((((struct o24_int *)0xC1EC71C)->v)) != 0) {
            FUN_0c027f28(0x0);
            FUN_0c02803a(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
            pfSize(1.0f, 1.0f);
            u21 = (-((FUN_0c02806c(0xC0974F0)) * 0.5f));
            FUN_0c027fbe((u21 + 320.0f), 240.0f);
            FUN_0c02842e(0xC0974F0);
            FUN_0c06f240();
            FUN_0c06f240();
        }
        FUN_0c01ff48(((((struct o0_int *)0xC1EC71C)->v)), 0x0);
        FUN_0c020176();
        FUN_0c0200f0(((((struct o0_int *)0xC1EC71C)->v)));
        FUN_0c048d70(((((struct o0_int *)0xC1EC71C)->v)));
    } else {
        if (t14 == 2) {
            FUN_0c020176();
            FUN_0c0200f0(((((struct o0_int *)0xC1EC71C)->v)));
        }
        FUN_0c020244();
    }
    t54 = (((struct o0_int *)0xC1EC71C)->v);
    if (((((struct o24_int *)0xC1EC71C)->v)) == 0) {
        t56 = 0xC09750C;
        if (t54 == 0) {
            t56 = 0xC0974FC;
        }
        t66 = (gdc_FileLoad(0xC318000, t56, 0x10000));
    } else {
        t66 = t54;
        if ((t54 != 2) && (t59 = *(int *)0xC2AC2F0, t59 == 0)) {
            t60 = 0xC09752C;
            if (t54 == 0) {
                t60 = 0xC09751C;
            }
            t66 = (gdc_FileLoad(0xC318000, t60, 0x10000));
        }
    }
    return t66;
}

int FUN_0c01bca2(void)
{
    int stk[6];
    register int t2;
    register int t4;
    register int t8;

    (((struct o30_uint *)0xC1EC71C)->v) = (((((struct o30_int *)0xC1EC71C)->v)) + 0x1);
    t2 = 0x2;
    if (((((struct o0_int *)0xC1EC71C)->v)) == 0) {
        t2 = 0x1;
    }
    t4 = FUN_0c048262(t2);
    if (t4 == 0) {
        *(unsigned int *)(((int)stk + 0)) = 0xC01D7B0;
        FUN_0c01d7b0();
    }
    t8 = *(int *)0xC1ECC90;
    switch (t8) {
    case 0:
        if ((int)(*(int *)0xC1EC848) < (int)0xBB8) {
        } else {
            *(unsigned int *)0xC1ECC90 = ((*(int *)0xC1ECC90) + 0x1);
        }
        break;
    case 1:
        if ((int)(*(int *)0xC1EC848) >= (int)((*(int *)((0xC09743C + (((((struct o0_int *)0xC1EC71C)->v)) << 2)))) - 600)) {
            *(volatile int *)0xC1EC71C;
            FUN_0c01e9e2(0x0, 0x2BC);
            *(unsigned int *)0xC1ECC90 = ((*(int *)0xC1ECC90) + 0x1);
        }
        break;
    case 2:
        if ((int)(*(int *)0xC1EC848) >= (int)((*(int *)((0xC09743C + (((((struct o0_int *)0xC1EC71C)->v)) << 2)))) - 400)) {
            FUN_0c058f64(0xC11CFFC, 0x0, 0x78, 0x0);
            *(unsigned int *)0xC1ECC90 = ((*(int *)0xC1ECC90) + 0x1);
        }
        gdc_FadeManStreamSong(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4));
        break;
    case 3:
        gdc_FadeManStreamSong(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4));
        break;
    }
    if ((int)(*(int *)0xC1EC848) >= (int)(*(int *)((0xC09743C + (((((struct o0_int *)0xC1EC71C)->v)) << 2))))) {
        (((struct o28_uint *)0xC1EC71C)->v) = 0x8;
        FUN_0c047a4a(0x0);
        return FUN_0c01e6f0();
    }
    return FUN_0c01e3cc(0x0);
}
