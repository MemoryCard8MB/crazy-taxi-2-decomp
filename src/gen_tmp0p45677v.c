/* scratch */
struct o0_int { int v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c02e42a(int, int, int);
int FUN_0c070e60(void);
float FUN_0c070e80(void);
int FUN_0c072600(int);
int FUN_0c073360(void);
int FUN_0c073a60(int);
float FUN_0c073b40(int, int);
int FUN_0c073c40(int, int, float);
int FUN_0c07ff00(void);
int GetRotVec(int);
int KillColliObj(int);
int MultiRot4Vec(int);
int SetColliObj(int, int);
int nlAddVector(int, int);
int nlGetPushedMatrix(int);
float nlLength(int, int);
int nlOuterProduct(int, int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlSubVector3op(int, int, int);
int set_event(int, int);
void FUN_0c030850(int a4);
void FUN_0c030634(int a4);
void FUN_0c030760(int a4);

void FUN_0c030850(int a4)
{
    int stk[3];
    register float t0;
    register int t6;
    register int t9;
    register int t11;
    register int t34;
    register int t5;
    register int t7;
    register int t12;

    t0 = nlLength((a4 + 0xC), (a4 + 0x58));
    if (!(t0 > (1.0f + 1.0f))) {
    } else {
        FUN_0c073360();
        FUN_0c073a60(a4);
        MultiRot4Vec((a4 + 0x30));
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 8)) = 0xC129AA0;
        *(unsigned int *)(((int)stk + 4)) = 0xC129D3C;
        t6 = 0x0;
        for (;;) {
            t7 = set_event(0x84, 0xC03010E);
            if (t7 != 0) {
                t7 = (t7 + 0x14);
                t9 = a4;
                t11 = t7;
                for (;;) { t12 = *(int *)t9; t9 = (t9 + 4); if ((unsigned int)((a4 + 112)) < (unsigned int)t9) break; *(unsigned int *)t11 = t12; t11 = (t11 + 4); }
                nlGetPushedMatrix(0x0);
                t5 = t6;
                t5 = (t5 << 2);
                t5 = (t5 << 2);
                FUN_0c073a60((t5 + 0xC12A140));
                if ((int)t6 > (int)0x3) {
                    nlRotateAZ(0xE0B7);
                    nlRotateAY((*(int *)(((t5 + 0xC12A140) + 0xC))));
                    GetRotVec((t7 + 0x30));
                }
                FUN_0c072600(t7);
                (((struct o54_uint *)(t7))->v) = (*(int *)(((int)stk + 8)));
                (((struct o64_uint *)(t7))->v) = (*(int *)(((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) + 0x0)));
                *(int *)((int)stk + 0) = (0xC + t7);
                (((struct oC_float *)(t7))->v) = (((((struct oC_float *)(t7))->v)) + ((FUN_0c070e80()) + -0.5f));
                *(int *)((int)stk + 0) = (0x10 + t7);
                (((struct o10_float *)(t7))->v) = (((((struct o10_float *)(t7))->v)) + ((FUN_0c070e80()) + -0.5f));
                *(int *)((int)stk + 0) = (0x14 + t7);
                (((struct o14_float *)(t7))->v) = (((((struct o14_float *)(t7))->v)) + ((FUN_0c070e80()) + -0.5f));
                SetColliObj(t7, 0x15);
                t34 = FUN_0c070e60();
                if ((int)t34 < (int)0x6000) {
                    FUN_0c02e42a(t7, (t7 + 0xC), 0x2);
                }
            }
            t6 = (t6 + 0x1);
            if ((int)t6 >= (int)0x8) {
                break;
            }
        }
        nlPopMatrix(0x2);
        KillColliObj(a4);
        (((struct o68_uint *)(a4))->v) = 0xFFFFFFFE;
    }
}

void FUN_0c030634(int a4)
{
    int stk[6];
    register float t0;
    register int t1;
    register int t2;
    register int t4;
    register float t13;
    register int t5;
    register int t18;

    t0 = nlLength((a4 + 0xC), (a4 + 0x58));
    if (t0 > (1.0f + 1.0f)) {
        t1 = set_event(0x84, 0xC0300D8);
        if (t1 != 0) {
            t2 = a4;
            t4 = (t1 + 0x14);
            for (;;) { t5 = *(int *)t2; t2 = (t2 + 4); if ((unsigned int)((a4 + 112)) < (unsigned int)t2) break; *(unsigned int *)t4 = t5; t4 = (t4 + 4); }
            FUN_0c073c40((((int)stk + 0) + 0xC), ((t1 + 0x14) + 0x3C), 12.0f);
            nlAddVector((t1 + 0x14), (((int)stk + 0) + 0xC));
            *(unsigned int *)(((t1 + 0x14) + 0x28)) = ((t1 + 0x14) + 0x30);
            (((struct o54_uint *)((t1 + 0x14)))->v) = 0xC1299EC;
            (((struct o64_uint *)((t1 + 0x14)))->v) = (*(int *)((((((struct o0_int *)0xC129D28)->v)) + 0x0)));
            SetColliObj((t1 + 0x14), 0x15);
            nlSubVector3op((((int)stk + 0) + 0xC), (a4 + 0xC), (a4 + 0x58));
            nlOuterProduct((a4 + 0x3C), (a4 + 0x30), ((int)stk + 0));
            t13 = FUN_0c073b40((((int)stk + 0) + 0xC), ((int)stk + 0));
            if (t13 > 0.0f) {
                (((struct o54_uint *)(a4))->v) = 0xC129A10;
                t18 = (*(int *)((((((struct o4_int *)0xC129D28)->v)) + 0x0)));
            } else {
                (((struct o54_uint *)(a4))->v) = 0xC129A34;
                t18 = (*(int *)((((((struct o8_int *)0xC129D28)->v)) + 0x0)));
            }
            (((struct o64_uint *)(a4))->v) = t18;
        }
        FUN_0c07ff00();
    }
}

void FUN_0c030760(int a4)
{
    int stk[6];
    register float t0;
    register int t1;
    register int t2;
    register int t4;
    register int t5;

    t0 = nlLength((a4 + 0xC), (a4 + 0x58));
    if (t0 > (1.0f + 1.0f)) {
        t1 = set_event(0x84, 0xC0300D8);
        if (t1 != 0) {
            t2 = a4;
            t4 = (t1 + 0x14);
            for (;;) { t5 = *(int *)t2; t2 = (t2 + 4); if ((unsigned int)((a4 + 112)) < (unsigned int)t2) break; *(unsigned int *)t4 = t5; t4 = (t4 + 4); }
            FUN_0c073c40((((int)stk + 0) + 0xC), ((t1 + 0x14) + 0x3C), 8.0f);
            nlAddVector((t1 + 0x14), (((int)stk + 0) + 0xC));
            *(unsigned int *)(((t1 + 0x14) + 0x28)) = ((t1 + 0x14) + 0x30);
            (((struct o54_uint *)((t1 + 0x14)))->v) = 0xC129A58;
            (((struct o64_uint *)((t1 + 0x14)))->v) = (*(int *)((((((struct o0_int *)0xC129D34)->v)) + 0x0)));
            SetColliObj((t1 + 0x14), 0x15);
            FUN_0c073c40((((int)stk + 0) + 0xC), ((t1 + 0x14) + 0x3C), -8.0f);
            nlAddVector(a4, (((int)stk + 0) + 0xC));
            (((struct o54_uint *)(a4))->v) = 0xC129A7C;
            (((struct o64_uint *)(a4))->v) = (*(int *)((((((struct o4_int *)0xC129D34)->v)) + 0x0)));
        }
        FUN_0c07ff00();
    }
}

