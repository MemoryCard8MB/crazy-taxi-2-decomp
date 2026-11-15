/* Straight-line functions with calls and guards (batch gen_hi): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o0_short { short v; };
struct o2_short { char p[0x2]; short v; };
struct o4_short { char p[0x4]; short v; };
int FUN_0c05a338(void);
int FUN_0c073a40(int);
int FUN_0c074070(void);
int nlAddVector(int, int, Stk3);
int nlMatrixMode(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlUnitMatrix(void);
int CarSel_Camera(void);

int CarSel_Camera(void)
{
    int stk[6];

    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0xC)) = *(struct mv3 *)(0xC10C920); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(0xC10C92C); }
    nlAddVector((((int)stk + 0) + 0xC), 0xC2B1D3C, *(Stk3 *)(((int)stk + 0)));
    nlMatrixMode(0x2);
    nlUnitMatrix();
    nlRotateAZ((-(unsigned short)((((struct o4_short *)0xC2B1D48)->v))));
    nlRotateAX((-(unsigned short)((((struct o0_short *)0xC2B1D48)->v))));
    nlRotateAY((-(unsigned short)((((struct o2_short *)0xC2B1D48)->v))));
    FUN_0c073a40((((int)stk + 0) + 0xC));
    nlMatrixMode(0x1);
    FUN_0c074070();
    return (FUN_0c05a338());
}
