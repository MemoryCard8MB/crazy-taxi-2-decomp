/* Straight-line functions with calls and guards (batch gen_fh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
int Exec_LCD(void);
int FUN_0c01a7a4(void);
int FUN_0c01aa30(void);
int FUN_0c01e474(void);
int FUN_0c02022a(void);
int FUN_0c03e52a(void);
int FUN_0c03e5f8(void);
int FUN_0c03e81a(void);
int FUN_0c057bb4(int);
int FUN_0c058d4e(void);
int FUN_0c06f240(void);
int FUN_0c06f940(void);
int FUN_0c06f960(int);
int FUN_0c070080(void);
int FUN_0c076230(float, float, float);
int paletteUpload(void);
void FUN_0c01b026(int a4, int a5, int a6, int a7);

void FUN_0c01b026(int a4, int a5, int a6, int a7)
{
    int stk[1];

    register int R1;
    register int R2;
    register int R3;
    int R8;
    register float F4;
    register float F5;
    register float F6;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register float w0_0;
    { struct mv13 { int w[13]; }; *(struct mv13 *)(0xC1EC758) = *(struct mv13 *)(0xC11CFC0); }
    { struct mv13 { int w[13]; }; *(struct mv13 *)(0xC1EC78C) = *(struct mv13 *)(0xC11CFC0); }
    { struct mv13 { int w[13]; }; *(struct mv13 *)(0xC1EC7C0) = *(struct mv13 *)(0xC11CFC0); }
    (((struct o28_uint *)0xC1EC718)->v) = 0x0;
    (((struct o2C_uint *)0xC1EC718)->v) = 0x0;
    *(unsigned int *)0xC11CFF8 = 0x0;
    v0_6 = (*(int *)0xC2A4658) != 0;
    v0_0 = ((FUN_0c01aa30()));
    v0_0 = (0xC11CFC0);
    v0_5 = (0xC1EC758);
    v0_1 = (0x0);
    v0_2 = (0xC1EC740);
    v0_3 = (0xC1EC750);
    v0_4 = (0xC1EC744);
    if (v0_6) goto L_C01B06C;
    *(unsigned int *)((v0_3 + 0x0)) = v0_1;
    L_C01B070:;
    { struct mv13 { int w[13]; }; *(struct mv13 *)(v0_5) = *(struct mv13 *)(v0_0); }
    { struct mv13 { int w[13]; }; *(struct mv13 *)((v0_5 + 0x34)) = *(struct mv13 *)(v0_0); }
    { struct mv13 { int w[13]; }; *(struct mv13 *)((v0_5 + 0x68)) = *(struct mv13 *)(v0_0); }
    *(unsigned int *)(((int)stk + 0)) = v0_5;
    v0_6 = (0x3);
    v0_0 = (0xC1EC83C);
    R8 = (0x7);
    w0_0 = (1.0f);
    L_C01B09C:;
    FUN_0c01a7a4();
    FUN_0c076230(w0_0, w0_0, w0_0);
    FUN_0c03e81a();
    FUN_0c03e52a();
    v0_7 = *(int *)(((((*(int *)((v0_2 + 0x0))) & R8) << 2) + 0xC09739C));
    v0_5 = (v0_7);
    if ((v0_7 != 0)) goto L_C01B0CE;
    *(unsigned int *)((v0_2 + 0x0)) = ((*(int *)((v0_2 + 0x0))) + 0x1);
    *(unsigned int *)((v0_4 + 0x0)) = v0_1;
    L_C01B0D2:;
    FUN_0c03e5f8();
    Exec_LCD();
    FUN_0c057bb4((unsigned char)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x2C))));
    FUN_0c02022a();
    FUN_0c058d4e();
    FUN_0c06f960(0xC1EC84C);
    *(unsigned int *)((v0_0 + 0x0)) = ((*(int *)((v0_0 + 0x0))) + 0x1);
    if (((int)((((struct o0_int *)0xC1EC718)->v)) <= (int)v0_6)) goto L_C01B112;
    FUN_0c01e474();
    L_C01B112:;
    FUN_0c070080();
    FUN_0c06f240();
    FUN_0c06f940();
    paletteUpload();
    goto L_C01B09C;
    L_C01B0CE:;
    v0_5 = ((int (*)(int, int, int, int, float, float, float))(v0_5))(v0_3, a5, a6, a7, F4, F5, F6);
    goto L_C01B0D2;
    L_C01B06C:;
    *(unsigned int *)((v0_3 + 0x0)) = 0x1;
    goto L_C01B070;
}
