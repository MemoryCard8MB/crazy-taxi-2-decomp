/* Straight-line functions with calls and guards (batch gen_n): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
int FUN_0c072290(int, int);
int FUN_0c073a60(int);
int FUN_0c07ff00(void);
int TOANG(int, int, float, float, float);
extern float _builtin_sqrtf(float);
int nlArcTan2(float, float);
int nlGetMatrix(int);
int nlObjPut(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlScale(float, float, float);
int nlUnitMatrix(void);
int FUN_0c046658(int a4, int a5, int a6, float f4);
int FUN_0c046814(int a4);

int FUN_0c046658(int a4, int a5, int a6, float f4)
{
    int stk[4];
    int t12;

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 0)) = a6;
    TOANG((((int)stk + 0) + 0x8), ((((int)stk + 0) + 0x8) + 0x2), (*(float *)((a4 + 0x0))), ((((struct o4_float *)(a4))->v)), (-((((struct o8_float *)(a4))->v))));
    nlPushMatrix(0x0);
    FUN_0c073a60((*(int *)(((int)stk + 4))));
    nlRotateAY((unsigned short)(*(short *)(((((int)stk + 0) + 0x8) + 0x2))));
    nlRotateAX((unsigned short)(*(short *)(((((int)stk + 0) + 0x8) + 0x0))));
    nlScale(f4, f4, f4);
    t12 = *(int *)(((int)stk + 0));
    if ((t12 != 3) && ((t12 != 4) && ((t12 != 5) && (t12 != 0)))) {
        if (t12 != 2) {
            
            nlRotateAX(0x8000);
        }
    }
    nlObjPut(0xC4012F8);
    return (nlPopMatrix(0x1));
}

