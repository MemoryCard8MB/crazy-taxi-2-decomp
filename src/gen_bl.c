/* Straight-line functions with calls and guards (batch gen_bl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o24_int { char p[0x24]; int v; };
struct o28_int { char p[0x28]; int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
int FUN_0c014364(void);
int FUN_0c016398(void);
int FUN_0c016ab8(int);
int FUN_0c019446(void);
int FUN_0c01e15a(void);
int FUN_0c01e43c(void);
int FUN_0c01f5fc(void);
int FUN_0c01f95a(void);
int FUN_0c02022a(void);
int FUN_0c020d78(int);
int FUN_0c022cc4(void);
int FUN_0c022d30(void);
int FUN_0c026c02(void);
int FUN_0c026d10(void);
int FUN_0c028924(void);
int FUN_0c029528(void);
int FUN_0c02a5ca(int);
int FUN_0c02d3ba(void);
int FUN_0c02f096(void);
int FUN_0c02ff06(void);
int FUN_0c030b34(void);
int FUN_0c03ff4a(int);
int FUN_0c0423e6(int);
int FUN_0c046460(int);
int FUN_0c0464f0(int, int, int, int, int);
int FUN_0c047a4a(int);
int FUN_0c048262(int, int, int, int, int, int, int, int, int);
int FUN_0c0491d8(void);
int FUN_0c04d58c(void);
int FUN_0c04fbf0(void);
int FUN_0c04fc7a(void);
int FUN_0c058be4(int);
int FUN_0c0590a8(void);
int FUN_0c059d88(void);
int FUN_0c059d92(void);
int FUN_0c05bef8(int);
int FUN_0c060104(void);
int FUN_0c06017e(void);
int FUN_0c06b370(void);
int FUN_0c06cc10(void);
int FUN_0c06f550(int, int, int);
int FUN_0c070ea0(int);
int kmSetCheapShadowMode(void);
int nlInitEvent(void);
int nlInitHeapMemory(int, int);
int FUN_0c01cd78(void);

int FUN_0c01cd78(void)
{
    int stk[4];
    register int t67;
    register int t91;

    FUN_0c022d30();
    FUN_0c02a5ca((*(int *)0xC175C80));
    if (((((struct o4_int *)0xC1EC71C)->v)) == 2) {
        FUN_0c022cc4();
        FUN_0c01f95a();
    }
    FUN_0c02022a();
    FUN_0c020d78(((((struct o0_int *)0xC1EC71C)->v)));
    FUN_0c026c02();
    *(unsigned int *)0xC177EF0 = 0xC177EF4;
    nlInitHeapMemory(0xC177EF4, 0x30000);
    nlInitEvent();
    FUN_0c046460(0x3039);
    FUN_0c05bef8(0xD431);
    FUN_0c070ea0(0x3039);
    if (((((struct o24_int *)0xC1EC71C)->v)) != 0) {
        FUN_0c01e43c();
    }
    FUN_0c04fbf0();
    FUN_0c01e15a();
    FUN_0c04fc7a();
    if (((((struct o4_int *)0xC1EC71C)->v)) != 2) {
        FUN_0c029528();
        *(volatile int *)0xC1EC71C;
        FUN_0c0491d8();
    }
    FUN_0c02022a();
    FUN_0c014364();
    FUN_0c016ab8(0x0);
    if (((((struct o4_int *)0xC1EC71C)->v)) != 2) {
        FUN_0c019446();
    }
    FUN_0c02d3ba();
    if ((*(int *)0xC270924) != 0) {
        FUN_0c016398();
    }
    FUN_0c02ff06();
    FUN_0c028924();
    FUN_0c02f096();
    if (((((struct o4_int *)0xC1EC71C)->v)) == 2) {
        FUN_0c060104();
        FUN_0c06017e();
    } else {
        FUN_0c06cc10();
        FUN_0c060104();
    }
    FUN_0c06b370();
    FUN_0c058be4(0x0);
    FUN_0c02022a();
    FUN_0c0423e6(0x0);
    FUN_0c03ff4a(0x0);
    FUN_0c0464f0(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 0));
    FUN_0c048262(0xFFFFFFFE, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16));
    (((struct o0_uint *)0xC2AC2F4)->v) = 0x0;
    FUN_0c0590a8();
    FUN_0c026d10();
    FUN_0c04d58c();
    FUN_0c030b34();
    t67 = (((struct o0_int *)0xC1EC71C)->v);
    switch (t67) {
    case 0:
        *(volatile int *)0xC175C84;
        kmSetCheapShadowMode();
        break;
    case 1:
        kmSetCheapShadowMode();
        break;
    case 2:
        kmSetCheapShadowMode();
        break;
    }
    if ((int)((((struct o4_int *)0xC1EC71C)->v)) <= (int)0x1) {
        FUN_0c047a4a(0x1);
    } else {
        (((struct o4_uint *)0xC2AC2F4)->v) = 0x0;
    }
    FUN_0c059d88();
    FUN_0c059d92();
    FUN_0c01f5fc();
    t91 = FUN_0c06f550(0xFF3D3D46, 0xFF3D3D46, 0xFF3D3D46);
    (((struct o28_uint *)0xC1EC71C)->v) = (((((struct o28_int *)0xC1EC71C)->v)) + 0x1);
    (((struct o30_uint *)0xC1EC71C)->v) = 0x0;
    return t91;
}
