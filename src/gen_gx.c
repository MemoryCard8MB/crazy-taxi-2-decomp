/* Straight-line functions with calls and guards (batch gen_gx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[4]; } Stk4;
struct o0_float { float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
int FUN_0c05b3fc(void);
int FUN_0c05b410(void);
int FUN_0c072ff0(void);
int FUN_0c073360(void);
int FUN_0c073a30(float, float, float);
int FUN_0c073ab0(void);
int FUN_0c074f20(float);
float nlLength(int, int);
int nlObjPut(int);
int nlObjPutUseViewMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAY(int);
int nlScale(float, float, float);
int FUN_0c067f60(int a4, float f4);

int FUN_0c067f60(int a4, float f4)
{
    int stk[4];
    register int t80;
    register int t15;
    register float t36;
    register int t40;
    register float u61;
    register int t1;
    register int t2;
    register int t102;

    { struct mv4 { int w[4]; }; *(struct mv4 *)(((int)stk + 0)) = *(struct mv4 *)(0xC110290); }
    if (((*(int *)0xC177D58) != 0) && ((t1 = *(int *)0xC177D58, t1 != 1) && ((t2 = *(int *)0xC177D58, t2 != 2) && (t102 = *(int *)0xC177D58, t102 != 13)))) {
    } else {
        t80 = *(signed char *)(((a4 + 0x63) + 0x0));
        t102 = t80;
        if ((t80 & 2) == 0) {
        } else {
            if ((*(int *)0xC177CE8) == 0) {
            } else {
                t15 = *(int *)0xC1EC720;
                t80 = t15;
                if (t15 == 2) {
                } else {
                    FUN_0c073360();
                    FUN_0c073a30(((((struct o40_float *)(a4))->v)), (((((struct o44_float *)(a4))->v)) + ((((struct o1C_float *)(a4))->v))), ((((struct o48_float *)(a4))->v)));
                    nlRotateAY((*(int *)((a4 + 0x24))));
                    *(volatile float *)((a4 + 0x54));
                    *(volatile float *)((a4 + 0x50));
                    *(volatile float *)((a4 + 0x4C));
                    FUN_0c05b410();
                    nlPushMatrix(0x0);
                    if ((*(int *)0xC17590C) != 0) {
                        nlScale(0.5f, 0.5f, 0.5f);
                        FUN_0c074f20(0.5f);
                    }
                    t36 = nlLength((a4 + 0x40), 0xC177D38);
                    t40 = 0xC3CC208;
                    if (450.0f > t36) {
                    } else {
                        nlObjPutUseViewMatrix(0xC3CCC68);
                        nlRotateAY(0x8000);
                        t40 = 0xC3CCC68;
                    }
                    nlObjPutUseViewMatrix(t40);
                    nlPopMatrix(0x1);
                    FUN_0c072ff0();
                    FUN_0c073ab0();
                    if ((*(int *)0xC17590C) != 0) {
                        nlScale(0.5f, 0.5f, 0.5f);
                        FUN_0c074f20(0.5f);
                    }
                    nlObjPut((*(int *)((((((*(int *)((a4 + 0x4))) - 1) << 2) + ((int)stk + 0)) + 0x0))));
                    FUN_0c05b3fc();
                    nlPopMatrix(0x1);
                    (((struct o1C_float *)(a4))->v) = (((((struct o1C_float *)(a4))->v)) + ((((struct o20_float *)(a4))->v)));
                    u61 = (((struct o0_float *)0xC0681F4)->v);
                    if (u61 > ((((struct o1C_float *)(a4))->v))) {
                        (((struct o1C_float *)(a4))->v) = u61;
                        (((struct o20_float *)(a4))->v) = ((((struct o4_float *)0xC0681F4)->v));
                    }
                    (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) - 0.0250000004f);
                    *(unsigned int *)((a4 + 0x24)) = ((*(int *)((a4 + 0x24))) + 0x100);
                    t80 = 0x20;
                }
            }
            t102 = t80;
        }
    }
    return t102;
}
