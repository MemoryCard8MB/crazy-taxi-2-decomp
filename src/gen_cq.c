/* Straight-line functions with calls and guards (batch gen_cq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o4_float { char p[0x4]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o60_int { char p[0x60]; int v; };
struct o60_uint { char p[0x60]; unsigned int v; };
int FUN_0c029b12(int, float);
int FUN_0c05b3d4(int, int);
int FUN_0c05b56c(int, int, int);
int FUN_0c05b586(int);
int FUN_0c05d1b4(int, int, float);
int FUN_0c05f42e(void);
int FUN_0c06e700(int, int, float);
int FUN_0c070730(float);
int FUN_0c073360(void);
int FUN_0c073a30(float, float, float);
int FUN_0c073a60(int);
float FUN_0c073b40(int, int);
float FUN_0c073e10(int);
int FUN_0c07ff00(void);
int nlGetMatrix33on44(int);
float nlLength(int, int);
int nlMultiMatrix(int);
int nlObjPutUseViewMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlSubVector3op(int, int, int);
int FUN_0c06b930(int a4, int a5);

int FUN_0c06b930(int a4, int a5)
{
    int stk[7];
    register int t2;
    register float u3;
    register float u4;
    register float u11;
    register float t15;
    register float t16;
    register int t17;
    register int t18;
    register float u20;
    register int t21;
    register float t23;
    register int t24;
    register float u35;
    register int t52;
    register float t75;
    register int t76;
    register float u40;
    float u54;
    register int t84;

    *(unsigned int *)(((int)stk + 0)) = 0xC1758B4;
    FUN_0c05d1b4(0xCB1BC1C, 0x0, ((((struct o4C_float *)(a4))->v)));
    t2 = FUN_0c05f42e();
    u3 = (((struct o4C_float *)(a4))->v);
    u4 = (((struct o50_float *)(a4))->v);
    (((struct o4C_float *)(a4))->v) = (u3 + u4);
    if (!((float)(*(int *)0xCB1BC1C) > (u3 + u4))) {
        (((struct o4C_float *)(a4))->v) = 0.0f;
    }
    FUN_0c07ff00();
    u11 = (-((nlLength((a5 + 0x30), ((*(int *)(((int)stk + 0))) + 0x7C))) * 4.0f));
    FUN_0c06e700((a4 + 0x54), (a5 + 0x20), (u11 - (((float)((int)((int)(a4 - 0xC2BA6C8) / (int)0x64)) * 30.0f))));
    nlSubVector3op((((int)stk + 0) + 0x4), (a4 + 0x54), (a4 + 0x38));
    *(float *)(((int)stk + 8)) = 0.0f;
    t15 = FUN_0c073e10((((int)stk + 0) + 0x4));
    if (t15 > 0.00999999978f) {
        t16 = FUN_0c073b40((((int)stk + 0) + 0x4), (a4 + 0x28));
        t17 = FUN_0c070730(t16);
        t18 = t17;
        if ((int)t17 > (int)0x100) {
            t18 = 0x100;
        }
        u20 = (((struct o48_float *)(a4))->v);
        t21 = (int)(((float)t18 * ((-u20) + 0.400000006f)) / 0.400000006f);
        if ((int)(int)(((float)t18 * ((-u20) + 0.400000006f)) / 0.400000006f) < 0) {
            t21 = 0x0;
        }
        t23 = FUN_0c073b40((((int)stk + 0) + 0x4), (a4 + 0x8));
        t24 = t21;
        if (0.0f > t23) {
            t24 = (-t21);
        }
        FUN_0c073360();
        nlRotateAY(t24);
        nlMultiMatrix((a4 + 0x8));
        nlGetMatrix33on44((a4 + 0x8));
        nlPopMatrix(0x1);
    }
    u35 = (((struct o4C_float *)(a4))->v);
    if (25.0f > u35) {
        (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) * 0.975000024f);
    } else {
        if (30.0f > u35) {
            u40 = (((((struct o48_float *)(a4))->v)) + 0.0299999993f);
        } else {
            u40 = (((((struct o48_float *)(a4))->v)) * 0.997500002f);
        }
        (((struct o48_float *)(a4))->v) = u40;
    }
    FUN_0c07ff00();
    FUN_0c06e700((((int)stk + 0) + 0x10), (a4 + 0x28), ((((struct o48_float *)(a4))->v)));
    t52 = FUN_0c029b12((((int)stk + 0) + 0x10), 0.0f);
    if (((*(int *)((t52 + 0x1C))) == 14) && (u54 = (((struct o4_float *)(t52))->v), -180.0f > u54)) {
        FUN_0c07ff00();
    }
    nlPushMatrix((a4 + 0x8));
    FUN_0c073a60(t2);
    nlRotateAX(0xF8E5);
    nlObjPutUseViewMatrix(0xC634340);
    nlPushMatrix(0x0);
    FUN_0c073a30(4.78259993f, 0.724399984f, 8.1420002f);
    FUN_0c05b586((t2 + 0xC));
    nlObjPutUseViewMatrix(0xC636520);
    nlPopMatrix(0x1);
    FUN_0c073a30(-4.78259993f, 0.724399984f, 8.1420002f);
    FUN_0c05b56c((*(int *)(((t2 + 0xC) + 0x0))), (-(*(int *)(((t2 + 0xC) + 0x4)))), (-(*(int *)(((t2 + 0xC) + 0x8)))));
    nlObjPutUseViewMatrix(0xC636A10);
    nlPopMatrix(0x1);
    nlSubVector3op((((int)stk + 0) + 0x4), (a4 + 0x38), (a5 + 0x30));
    t75 = FUN_0c073b40((((int)stk + 0) + 0x4), (a5 + 0x20));
    if (t75 > 0.0f) {
        t76 = (((struct o60_int *)(a4))->v);
        (((struct o60_uint *)(a4))->v) = (t76 + 0x1);
        t84 = 0x60;
        if ((int)(t76 + 0x1) > (int)0x12C) {
            t84 = (FUN_0c05b3d4(a4, 0x64));
        }
    } else {
        (((struct o60_uint *)(a4))->v) = 0x0;
        t84 = 0x60;
    }
    return t84;
}
