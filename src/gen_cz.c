/* Straight-line functions with calls and guards (batch gen_cz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[2]; } Stk2;
typedef struct { int w[3]; } Stk3;
struct o0_int { int v; };
struct o28_float { char p[0x28]; float v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2C_int { char p[0x2C]; int v; };
struct o30_float { char p[0x30]; float v; };
struct o30_int { char p[0x30]; int v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
int End_Adv_Title_LOGO(void);
int FUN_0c01e3cc(int);
int FUN_0c01e990(int, int, int);
int FUN_0c026ce6(void);
int FUN_0c027f28(int);
int FUN_0c027fbe(float, float);
int FUN_0c02803a(int, int, int, int);
int FUN_0c028196(void);
int FUN_0c0281a4(int);
int FUN_0c0281d4(int, int);
int FUN_0c02842e(int);
int FUN_0c047bda(int, int, int);
int FUN_0c058f64(int, int, int, int);
int FUN_0c076250(float, float, float);
int Model_Put_Sprite3D(int, int, int, Stk2, float);
int gdc_CoursePointLoadReq(Stk3, float);
int nlCloseEvent(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int pfSize(float, float);
int FUN_0c0408f2(int a4, int a5, int a6, int a7, float f4);
int FUN_0c01bf10(void);

int FUN_0c0408f2(int a4, int a5, int a6, int a7, float f4)
{
    int stk[7];

    register int R1;
    register int R2;
    register int R3;
    register float F0;
    register float F2;
    register float F3;
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
    register float w0_3;
    register float w0_4;
    v0_1 = a4;
    v0_3 = a5;
    v0_2 = a6;
    v0_4 = a7;
    w0_0 = f4;
    v0_0 = (v0_1);
    if ((!(0.0f > ((((struct o2C_float *)(v0_1))->v))))) goto L_C04097C;
    w0_0 = (((struct o3C_float *)(v0_0))->v);
    w0_1 = (w0_0);
    if ((!(w0_0 > 100.0f))) goto L_C04097C;
    *(unsigned int *)0xC1ECCD8 = ((*(int *)0xC1ECCD8) + (*(int *)((v0_0 + 0x20))));
    v0_1 = ((nlCloseEvent(v0_0)));
    L_C040B7A:;
    return v0_1;
    L_C04097C:;
    (((struct o2C_float *)(v0_0))->v) = (((((struct o2C_float *)(v0_0))->v)) - 0.5f);
    (((struct o38_float *)(v0_0))->v) = (((((struct o38_float *)(v0_0))->v)) + ((((struct o28_float *)(v0_0))->v)));
    (((struct o3C_float *)(v0_0))->v) = (((((struct o3C_float *)(v0_0))->v)) - ((((struct o2C_float *)(v0_0))->v)));
    v0_1 = (0x30);
    w0_0 = (0.5f);
    w0_1 = (1.20000005f);
    if ((!(1.20000005f > ((((struct o30_float *)(v0_0))->v))))) goto L_C0409BC;
    *(float *)((v0_0 + v0_1)) = ((*(float *)((v0_0 + v0_1))) + 0.0250000004f);
    FPUL_ = (0x3CCCCCCD);
    L_C0409BC:;
    if (((*(int *)0xC177CE8) != 0)) goto L_C0409C8;
    goto L_C040B7A;
    L_C0409C8:;
    v0_3 = (0xC076250);
    w0_2 = (1.0f);
    if (((int)(*(int *)((v0_0 + 0x18))) > (int)0x1)) goto L_C0409DE;
    w0_3 = (0.699999988f);
    w0_4 = (0.300000012f);
    L_C0409EC:;
    FUN_0c076250(w0_2, w0_3, w0_4);
    L_C040A04:;
    nlPushMatrix(0x0);
    w0_2 = (((struct o38_float *)(v0_0))->v);
    *(unsigned short *)(((((int)stk + 16) + 0x4) + 0x4)) = 0x0;
    *(unsigned short *)(((((int)stk + 16) + 0x4) + 0x0)) = 0x0;
    w0_3 = (((struct o2C_float *)(v0_0))->v);
    *(unsigned short *)(((((int)stk + 16) + 0x4) + 0x2)) = ((((int)(w0_3 * w0_3) << 8) << 2) << 1);
    v0_3 = (0xC0537EC);
    v0_4 = ((int)w0_2);
    v0_3 = ((((int)stk + 16) + 0x4));
    v0_1 = (((((int)(w0_3 * w0_3) << 8) << 2) << 1));
    w0_3 = (w0_3);
    FPUL_ = ((int)w0_2);
    if (((*(int *)((v0_0 + 0x24))) != 1)) goto L_C040A80;
    *(unsigned char *)((((int)stk + 8) + 0x0)) = (*(signed char *)((v0_3 + 0x0)));
    *(unsigned char *)((((int)stk + 8) + 0x1)) = (*(signed char *)((v0_3 + 0x1)));
    *(unsigned char *)((((int)stk + 8) + 0x2)) = (*(signed char *)((v0_3 + 0x2)));
    *(unsigned char *)((((int)stk + 8) + 0x3)) = (*(signed char *)((v0_3 + 0x3)));
    *(unsigned char *)((((int)stk + 8) + 0x4)) = (*(signed char *)((v0_3 + 0x4)));
    *(unsigned char *)((((int)stk + 8) + 0x5)) = (*(signed char *)((v0_3 + 0x5)));
    v0_2 = (0xC3CBC10);
    L_C040A90:;
    Model_Put_Sprite3D(v0_4, (int)((((struct o3C_float *)(v0_0))->v)), v0_2, *(Stk2 *)(((int)stk + 8)), ((((struct o30_float *)(v0_0))->v)));
    *(unsigned short *)((v0_3 + 0x2)) = 0x0;
    *(unsigned char *)((((int)stk + 0) + 0x0)) = (*(signed char *)((v0_3 + 0x0)));
    *(unsigned char *)((((int)stk + 0) + 0x1)) = (*(signed char *)((v0_3 + 0x1)));
    *(unsigned char *)((((int)stk + 0) + 0x2)) = (*(signed char *)((v0_3 + 0x2)));
    *(unsigned char *)((((int)stk + 0) + 0x3)) = (*(signed char *)((v0_3 + 0x3)));
    *(unsigned char *)((((int)stk + 0) + 0x4)) = (*(signed char *)((v0_3 + 0x4)));
    *(unsigned char *)((((int)stk + 0) + 0x5)) = (*(signed char *)((v0_3 + 0x5)));
    Model_Put_Sprite3D(v0_4, (int)((((struct o3C_float *)(v0_0))->v)), 0xC3CC8D8, *(Stk2 *)(((int)stk + 0)), ((((struct o30_float *)(v0_0))->v)));
    nlPopMatrix(0x1);
    v0_2 = (int)(*(int *)((v0_0 + 0x24))) <= 0;
    v0_1 = ((FUN_0c026ce6()));
    if (v0_2) goto L_C040B7A;
    FUN_0c027f28(0x0);
    FUN_0c02803a(0xFFFFFF00, 0xFFFFFF00, 0xFFFFFF00, 0xFFFFFF00);
    w0_2 = 140.0f;
    w0_2 = w0_2 + w0_0 * ((((((struct o3C_float *)(v0_0))->v)) + -140.0f));
    FUN_0c027fbe(320.0f, w0_2);
    pfSize(1.5f, 1.5f);
    *(unsigned int *)(((int)stk + 16)) = ((int)((int)(*(int *)((v0_0 + 0x20))) / (int)0x64));
    FUN_0c028196();
    FUN_0c0281a4(0x24);
    FUN_0c0281d4((*(int *)(((int)stk + 16))), 0x0);
    FUN_0c0281a4(0x2E);
    FUN_0c02842e((*(int *)0xC09DA20));
    pfSize(w0_1, w0_1);
    *(unsigned int *)(((int)stk + 16)) = ((int)((int)(*(int *)((v0_0 + 0x20))) % (int)0x64));
    FUN_0c028196();
    FUN_0c0281d4((*(int *)(((int)stk + 16))), 0x2);
    v0_2 = (int)(*(int *)((v0_0 + 0x24))) <= (int)0x1;
    v0_1 = ((FUN_0c02842e((*(int *)0xC09DA20))));
    v0_3 = (0xC0281D4);
    v0_3 = (0xC0281A4);
    v0_4 = (0xC028196);
    v0_3 = (0xC027FFE);
    v0_3 = (0xC09DA20);
    v0_4 = (0xC02842E);
    if (v0_2) goto L_C040B7A;
    pfSize(1.39999998f, 1.39999998f);
    FUN_0c028196();
    FUN_0c0281a4(0x78);
    FUN_0c0281d4((*(int *)((v0_0 + 0x24))), 0x0);
    v0_1 = ((FUN_0c02842e((*(int *)((v0_3 + 0x0))))));
    goto L_C040B7A;
    L_C040A80:;
    *(unsigned char *)((((int)stk + 8) + 0x0)) = (*(signed char *)((v0_3 + 0x0)));
    *(unsigned char *)((((int)stk + 8) + 0x1)) = (*(signed char *)((v0_3 + 0x1)));
    *(unsigned char *)((((int)stk + 8) + 0x2)) = (*(signed char *)((v0_3 + 0x2)));
    *(unsigned char *)((((int)stk + 8) + 0x3)) = (*(signed char *)((v0_3 + 0x3)));
    *(unsigned char *)((((int)stk + 8) + 0x4)) = (*(signed char *)((v0_3 + 0x4)));
    *(unsigned char *)((((int)stk + 8) + 0x5)) = (*(signed char *)((v0_3 + 0x5)));
    v0_2 = (0xC3CCC68);
    goto L_C040A90;
    L_C0409DE:;
    if (((*(int *)((v0_0 + 0x18))) != 2)) goto L_C0409F4;
    w0_2 = (0.899999976f);
    w0_3 = (0.899999976f);
    w0_4 = (0.899999976f);
    goto L_C0409EC;
    L_C0409F4:;
    if (((int)(*(int *)((v0_0 + 0x18))) < (int)0x3)) goto L_C040A04;
    FUN_0c076250(w0_2, w0_2, w0_0);
    goto L_C040A04;
}

int FUN_0c01bf10(void)
{
    int stk[15];
    register int t10;
    register int t80;
    register int t72;
    int t27;
    int t37;
    register int t89;

    (((struct o30_uint *)0xC1EC71C)->v) = (*(int *)0xC1EC848);
    if ((int)(*(int *)0xC11D044) > 0) {
        *(unsigned int *)0xC11D044 = ((*(int *)0xC11D044) - 1);
        if ((int)((((struct o30_int *)0xC1EC71C)->v)) > (int)0x5) {
            (((struct o30_uint *)0xC1EC71C)->v) = 0x5;
        }
    }
    t10 = (((struct o30_int *)0xC1EC71C)->v);
    if (((((struct o2C_int *)0xC1EC71C)->v)) != 0) {
        if (((((struct o2C_int *)0xC1EC71C)->v)) == 1) {
            if (t10 == 30) {
                FUN_0c058f64(0xC11D014, 0x0, 0x78, 0x0);
            }
            FUN_0c047bda(0x2, 0x0, ((int)stk + 48));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 36)) = *(struct mv3 *)(((int)stk + 48)); }
            gdc_CoursePointLoadReq(*(Stk3 *)(((int)stk + 36)), 800.0f);
            t72 = 0x117;
        }
    } else {
        if (((int)t10 >= (int)0x28) && (t27 = *(int *)0xC1ECCA0, t27 == 0)) {
            FUN_0c058f64(0xC11D014, 0x0, 0x78, 0x0);
            *(unsigned int *)0xC1ECCA0 = 0x1;
        }
        if (((((struct o0_int *)0xC1EC71C)->v)) == 0) {
            if (((int)((((struct o30_int *)0xC1EC71C)->v)) >= (int)0x79) && (t37 = *(int *)0xC1ECCA0, t37 == 1)) {
                FUN_0c01e990(0xC097444, 0x2, 0x0);
                *(unsigned int *)0xC1ECCA0 = 0x2;
            }
            if (((((struct o0_int *)0xC1EC71C)->v)) == 0) {
                FUN_0c047bda(0x1, 0x0, ((int)stk + 48));
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 36)) = *(struct mv3 *)(((int)stk + 48)); }
                gdc_CoursePointLoadReq(*(Stk3 *)(((int)stk + 36)), 1500.0f);
                FUN_0c047bda(0x1, 0x1, (((int)stk + 36) + 0xC));
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 24)) = *(struct mv3 *)((((int)stk + 36) + 0xC)); }
                gdc_CoursePointLoadReq(*(Stk3 *)(((int)stk + 24)), 1500.0f);
            } else {
                FUN_0c047bda(0x2, 0x0, ((int)stk + 48));
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 36)) = *(struct mv3 *)(((int)stk + 48)); }
                gdc_CoursePointLoadReq(*(Stk3 *)(((int)stk + 36)), 1000.0f);
                FUN_0c047bda(0x2, 0x1, (((int)stk + 36) + 0xC));
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 24)) = *(struct mv3 *)((((int)stk + 36) + 0xC)); }
                gdc_CoursePointLoadReq(*(Stk3 *)(((int)stk + 24)), 800.0f);
                FUN_0c047bda(0x2, 0x2, (((int)stk + 24) + 0x18));
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 12)) = *(struct mv3 *)((((int)stk + 24) + 0x18)); }
                gdc_CoursePointLoadReq(*(Stk3 *)(((int)stk + 12)), 600.0f);
                FUN_0c047bda(0x2, 0x3, (((int)stk + 12) + 0x24));
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((((int)stk + 12) + 0x24)); }
                gdc_CoursePointLoadReq(*(Stk3 *)(((int)stk + 0)), 400.0f);
            }
        } else {
            FUN_0c047bda(0x2, 0x0, ((int)stk + 48));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 36)) = *(struct mv3 *)(((int)stk + 48)); }
            gdc_CoursePointLoadReq(*(Stk3 *)(((int)stk + 36)), 1000.0f);
            FUN_0c047bda(0x2, 0x1, (((int)stk + 36) + 0xC));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 24)) = *(struct mv3 *)((((int)stk + 36) + 0xC)); }
            gdc_CoursePointLoadReq(*(Stk3 *)(((int)stk + 24)), 800.0f);
            FUN_0c047bda(0x2, 0x2, (((int)stk + 24) + 0x18));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 12)) = *(struct mv3 *)((((int)stk + 24) + 0x18)); }
            gdc_CoursePointLoadReq(*(Stk3 *)(((int)stk + 12)), 600.0f);
            FUN_0c047bda(0x2, 0x3, (((int)stk + 12) + 0x24));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((((int)stk + 12) + 0x24)); }
            gdc_CoursePointLoadReq(*(Stk3 *)(((int)stk + 0)), 400.0f);
        }
        t72 = 0x1A5;
    }
    if ((int)((((struct o30_int *)0xC1EC71C)->v)) >= (int)t72) {
        t80 = (((struct o2C_int *)0xC1EC71C)->v);
        if (t80 == 0) {
            (((struct o28_uint *)0xC1EC71C)->v) = 0x2;
        } else {
            if (t80 == 1) {
                (((struct o28_uint *)0xC1EC71C)->v) = 0x4;
            }
        }
        t89 = (End_Adv_Title_LOGO());
    } else {
        t89 = (FUN_0c01e3cc(0x0));
    }
    return t89;
}
