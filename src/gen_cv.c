/* Straight-line functions with calls and guards (batch gen_cv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[4]; } Stk4;
struct o0_float { float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4C_int { char p[0x4C]; int v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c018b1c(int);
int FUN_0c018b22(int, int);
int FUN_0c018c8a(float, float);
float FUN_0c018cfc(void);
int FUN_0c02f698(void);
int FUN_0c046724(int, int, float);
int FUN_0c070810(float);
float FUN_0c070870(float);
int FUN_0c072230(int, int);
int FUN_0c073360(void);
int FUN_0c073c40(int, int, float);
float FUN_0c073c60(int);
int FUN_0c073e10(int);
int FUN_0c07ff00(void);
int camSetTarget(int, int);
int kdGetDeviceInfo(int);
int kmSetUserClipping(int, int, int, int, int, int);
int nlArcTan2(float, float);
int nlPopMatrix(int);
int nlRotateAY(int);
int nlSubVector3op(int, int, int);
float nlTan(int);
int vmsfs_setretry(int);
float FUN_0c019384(void);
float FUN_0c04e5c0(int a4);
int FUN_0c027da8(int a4, int a5, int a6, int a7);
float FUN_0c059da0(float f4);
int FUN_0c14da34(int a4);
int FUN_0c06f980(int a4, int a5, int a6, int a7, int a8);
int FUN_0c048f5e(Stk4 s);
int FUN_0c046772(int a4, int a5, float f4, float f5);
int FUN_0c070780(float f4);
int FUN_0c0779ac(int a4);
int FUN_0c01fd16(void);
int FUN_0c019cfc(void);
int FUN_0c030a16(void);
int FUN_0c019d02(void);
int FUN_0c030a8e(void);
int FUN_0c03017e(void);
void FUN_0c018d12(int a4);
void FUN_0c018d18(int a4);
int FUN_0c03172c(void);
int FUN_0c0316e0(void);
int FUN_0c0316f2(void);
int FUN_0c031738(void);
int FUN_0c0316e6(void);
int FUN_0c0316ec(void);
int FUN_0c031732(void);
int FUN_0c03173e(void);
int FUN_0c031744(void);
int FUN_0c03174a(void);
int FUN_0c031750(void);
int FUN_0c031762(void);
int FUN_0c031756(void);
int FUN_0c03175c(void);
int FUN_0c031768(void);
int FUN_0c03176e(void);
int FUN_0c031774(void);
int FUN_0c03177a(void);
int FUN_0c031780(void);
int FUN_0c031792(void);
int FUN_0c031824(void);
int FUN_0c03182a(void);
int FUN_0c03178c(void);
int FUN_0c031786(void);
int FUN_0c031830(void);
int FUN_0c031836(void);
int FUN_0c03183c(void);
int FUN_0c031842(void);
int FUN_0c03184e(void);
int FUN_0c031848(void);
int FUN_0c031854(void);
int FUN_0c03185a(void);
int FUN_0c031860(void);
int FUN_0c03186c(void);
int FUN_0c031872(void);
int FUN_0c031866(void);
int FUN_0c031878(void);
int FUN_0c03187e(void);
int FUN_0c031884(void);
int FUN_0c03188a(void);
int FUN_0c031890(void);
int FUN_0c031896(void);
int FUN_0c03189c(void);
void FUN_0c04e642(int a4);
void FUN_0c050544(int a4);
int FUN_0c04e648(void);
void FUN_0c06ec20(int a4);
int FUN_0c06f1c0(void);
int FUN_0c070480(void);
void FUN_0c06fd60(int a4);
int FUN_0c070490(void);
void FUN_0c071450(int a4);
void FUN_0c071f70(int a4);
void FUN_0c075670(int a4);
int FUN_0c075c10(void);
int FUN_0c078650(void);
int FUN_0c07a630(void);
int FUN_0c07c5a2(void);
int FUN_0c07cbb6(void);
int FUN_0c07d634(void);
void FUN_0c07d9e0(int a4);
void FUN_0c07dbe0(int a4);
void FUN_0c080260(int a4);
int FUN_0c14bcb8(void);
int FUN_0c14dcce(void);
int FUN_0c14dcd4(void);
void FUN_0c150680(int a4);
void FUN_0c1620dc(int a4);


float FUN_0c04e5c0(int a4)
{
    int stk[7];
    register float t1;
    register float u12;

    *(unsigned int *)(((int)stk + 0)) = a4;
    nlSubVector3op((((int)stk + 0) + 0x10), (a4 + 0xC), 0xC175930);
    t1 = FUN_0c073c60((((int)stk + 0) + 0x10));
    FUN_0c073c40((((int)stk + 0) + 0x10), (((int)stk + 0) + 0x10), (1.0f / t1));
    FUN_0c073360();
    *(float *)(((int)stk + 4)) = 0.0f;
    *(float *)(((int)stk + 8)) = 0.0f;
    *(float *)(((int)stk + 12)) = 1.0f;
    nlRotateAY((unsigned short)(*(short *)0xC1759AC));
    FUN_0c072230((((int)stk + 0) + 0x4), (((int)stk + 0) + 0x4));
    nlPopMatrix(0x1);
    u12 = ((*(float *)(((int)stk + 12))) * (*(float *)(((int)stk + 24))));
    u12 = u12 + (*(float *)(((int)stk + 16))) * (*(float *)(((int)stk + 4)));
    return u12;
}

int FUN_0c027da8(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t1 = *(int *)((a4 + 0x0));
    if (((int)t1 >= 0) && (t0 = *(int *)((a4 + 0x18)), t0 != 0)) {
        t2 = t0;
        t0 = t1;
        t1 = (a4 + 0x18);
        t3 = a7;
        for (;;) {
            t4 = t1;
            t1 = (*(int *)((t1 + 0x24)));
            if (t1 == -3) {
                t5 = (t4 + 0x50);
                for (;;) {
                    t1 = (*(int *)((t5 + 0x0)));
                    if ((int)t1 > 0) {
                        t3 = (*(int *)((t5 + 0x4)));
                        t1 = t5;
                        t1 = (t1 + 0x8);
                        t5 = 0x0;
                        if ((int)t3 > 0) {
                            for (;;) {
                                t0 = (*(int *)((t1 + 0x0)));
                                t5 = (t5 + 0x1);
                                if ((t0 & 0x1) != 0) {
                                    t2 = t1;
                                    t2 = (t2 + 0x14);
                                    *(unsigned int *)((t2 + 0x0)) = 0x0;
                                    t1 = (t1 + 0x20);
                                } else {
                                    t1 = (t1 + 0x8);
                                }
                                if ((int)t5 >= (int)t3) {
                                    break;
                                }
                            }
                        }
                        t5 = t1;
                        continue;
                    }
                    break;
                }
            }
            t1 = ((((struct o4C_int *)(t4))->v));
            t1 = (t1 + (t4 + 0x50));
            if ((*(int *)((t1 + 0x0))) == 0) {
                break;
            }
        }
        t0 = 0x4C;
    }
    return t0;
}

float FUN_0c059da0(float f4)
{
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    u0 = (((struct o0_float *)0xC059F1C)->v);
    u1 = nlTan(((int)(((((f4 / (1.0f + 1.0f)) * ((((struct o4_float *)0xC059F1C)->v))) / ((((struct o8_float *)0xC059F1C)->v)))) + u0) & 0xFFFF));
    (((struct o4_float *)0xC2B8A74)->v) = (u1 * u0);
    u2 = (((struct o1C_float *)0xC059F1C)->v);
    u3 = (u1 * u0);
    (((struct o0_float *)0xC2B8A74)->v) = (u3 * u2);
    u1 = (((struct o20_float *)0xC059F1C)->v);
    (((struct o8_float *)0xC2B8A74)->v) = (((u3 * u2) / u0) / u1);
    (((struct oC_float *)0xC2B8A74)->v) = ((((((struct o0_float *)0xC2B8A74)->v)) * (1.0f + 1.0f)) / u1);
    return (u3 * u2);
}

int FUN_0c14da34(int a4)
{
    register int t1;
    register int t2;
    register int t3;

    t1 = kdGetDeviceInfo((unsigned char)(*(signed char *)((a4 + 0xC1703CC))));
    t2 = kdGetDeviceInfo(a4);
    t3 = 0x1;
    if ((a4 != 2) && ((a4 != 8) && ((a4 != 14) && (a4 != 20)))) {
        t3 = 0x0;
    }
    return (unsigned char)(*(signed char *)((0xC1703E4 + (((unsigned char)(*(signed char *)((t3 + (t1 + 0x12)))) << 2) + (unsigned char)(*(signed char *)(((t2 + 0x12) + 0x0)))))));
}

int FUN_0c06f980(int a4, int a5, int a6, int a7, int a8)
{
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t0;
    register int t9;
    register int t10;
    register int t11;
    register int t12;

    t1 = a4;
    t2 = a5;
    t3 = a6;
    t4 = a7;
    t5 = 0x0;
    t6 = a8;
    for (;;) {
        if ((t6 & 0x1) != 0) {
            t1 = 0xC2BBAC8;
            t3 = a4;
            t4 = a5;
            t2 = t5;
            t0 = (kmSetUserClipping(t1, t2, t3, t4, a6, a7));
        } else {
            t9 = t1;
            t10 = t2;
            t11 = t3;
            t12 = t4;
        }
        t5 = (t5 + 0x1);
        t1 = t9;
        t2 = t10;
        t3 = t11;
        t4 = t12;
        t6 = (t6 >> 1);
        if ((int)t5 >= (int)0x5) {
            break;
        }
    }
    return t0;
}

int FUN_0c048f5e(Stk4 s)
{
    int stk[16];
    register float u2;
    register float u3;
    register float u4;
    register float t5;
    register int t7;

    stk[4] = s.w[0];
    stk[5] = s.w[1];
    stk[6] = s.w[2];
    stk[7] = s.w[3];
    nlSubVector3op(((int)stk + 4), (((int)stk + 4) + 0x18), (((int)stk + 4) + 0x24));
    FUN_0c073e10(((int)stk + 4));
    u2 = *(float *)(((int)stk + 4));
    u3 = *(float *)(((int)stk + 12));
    u4 = (u3 * u3);
    u4 = u4 + u2 * u2;
    t5 = FUN_0c070870(u4);
    t7 = nlArcTan2((*(float *)(((int)stk + 8))), t5);
    return (-t7);
}

int FUN_0c046772(int a4, int a5, float f4, float f5)
{
    int stk[2];
    register int t2;
    register int t6;

    *(unsigned short *)(((int)stk + 4)) = a4;
    *(unsigned short *)(((int)stk + 0)) = a5;
    t2 = FUN_0c046724((unsigned short)(*(short *)(((int)stk + 4))), (unsigned short)(*(short *)(((int)stk + 0))), f4);
    t6 = (int)(-f5);
    if ((-f5) > (float)t2) {
    } else {
        t6 = t2;
        if ((float)t2 > f5) {
            t6 = (int)f5;
        }
    }
    return t6;
}

int FUN_0c070780(float f4)
{
    if (f4 == 0.0f) {
        return 0x0;
    }
    return FUN_0c070810((1.0f / f4));
}

int FUN_0c0779ac(int a4)
{
    return (vmsfs_setretry(a4));
}

int FUN_0c01fd16(void)
{
    return (*(int *)0xC2708C0);
}

int FUN_0c019cfc(void)
{
    return (*(int *)0xC1A7EF8);
}

int FUN_0c030a16(void)
{
    return (*(int *)0xC2791B8);
}

int FUN_0c019d02(void)
{
    return (*(int *)0xC1A7EF4);
}

int FUN_0c030a8e(void)
{
    return (*(int *)0xC2791BC);
}

int FUN_0c03017e(void)
{
    return (*(int *)0xC279098);
}

void FUN_0c018d12(int a4)
{
    *(unsigned int *)0xC11CE58 = a4;
}

void FUN_0c018d18(int a4)
{
    *(unsigned int *)0xC11CE5C = a4;
}

int FUN_0c03172c(void)
{
    return 0xC0B3088;
}

int FUN_0c0316e0(void)
{
    return 0xC0B3058;
}

int FUN_0c0316f2(void)
{
    return 0xC0B3078;
}

int FUN_0c031738(void)
{
    return 0xC0B30A4;
}

int FUN_0c0316e6(void)
{
    return 0xC0B305C;
}

int FUN_0c0316ec(void)
{
    return 0xC0B3064;
}

int FUN_0c031732(void)
{
    return 0xC0B3098;
}

int FUN_0c03173e(void)
{
    return 0xC0B30B0;
}

int FUN_0c031744(void)
{
    return 0xC0B30BC;
}

int FUN_0c03174a(void)
{
    return 0xC0B30CC;
}

int FUN_0c031750(void)
{
    return 0xC0B30D8;
}

int FUN_0c031762(void)
{
    return 0xC0B3110;
}

int FUN_0c031756(void)
{
    return 0xC0B30E8;
}

int FUN_0c03175c(void)
{
    return 0xC0B30F8;
}

int FUN_0c031768(void)
{
    return 0xC0B3120;
}

int FUN_0c03176e(void)
{
    return 0xC0B3130;
}

int FUN_0c031774(void)
{
    return 0xC0B3140;
}

int FUN_0c03177a(void)
{
    return 0xC0B3150;
}

int FUN_0c031780(void)
{
    return 0xC0B3160;
}

int FUN_0c031792(void)
{
    return 0xC0B3194;
}

int FUN_0c031824(void)
{
    return 0xC0B31AC;
}

int FUN_0c03182a(void)
{
    return 0xC0B31B8;
}

int FUN_0c03178c(void)
{
    return 0xC0B3184;
}

int FUN_0c031786(void)
{
    return 0xC0B3170;
}

int FUN_0c031830(void)
{
    return 0xC0B31C4;
}

int FUN_0c031836(void)
{
    return 0xC0B31D0;
}

int FUN_0c03183c(void)
{
    return 0xC0B31DC;
}

int FUN_0c031842(void)
{
    return 0xC0B31E8;
}

int FUN_0c03184e(void)
{
    return 0xC0B3200;
}

int FUN_0c031848(void)
{
    return 0xC0B31F4;
}

int FUN_0c031854(void)
{
    return 0xC0B320C;
}

int FUN_0c03185a(void)
{
    return 0xC0B3218;
}

int FUN_0c031860(void)
{
    return 0xC0B3228;
}

int FUN_0c03186c(void)
{
    return 0xC0B3240;
}

int FUN_0c031872(void)
{
    return 0xC0B3250;
}

int FUN_0c031866(void)
{
    return 0xC0B3234;
}

int FUN_0c031878(void)
{
    return 0xC0B325C;
}

int FUN_0c03187e(void)
{
    return 0xC0B3268;
}

int FUN_0c031884(void)
{
    return 0xC0B3274;
}

int FUN_0c03188a(void)
{
    return 0xC0B3284;
}

int FUN_0c031890(void)
{
    return 0xC0B3290;
}

int FUN_0c031896(void)
{
    return 0xC0B3298;
}

int FUN_0c03189c(void)
{
    return 0xC0B32AC;
}

void FUN_0c04e642(int a4)
{
    *(unsigned int *)0xC1317DC = a4;
}

void FUN_0c050544(int a4)
{
    *(unsigned int *)0xC2B1E00 = a4;
}

int FUN_0c04e648(void)
{
    return (*(int *)0xC1317DC);
}

void FUN_0c06ec20(int a4)
{
    *(unsigned int *)0xC14733C = a4;
}

int FUN_0c06f1c0(void)
{
    return 0xC1141F5;
}

int FUN_0c070480(void)
{
    return (*(int *)0xC2BB588);
}

void FUN_0c06fd60(int a4)
{
    *(unsigned int *)0xC2BB4A0 = a4;
}

int FUN_0c070490(void)
{
    return (*(int *)0xC2BB58C);
}

void FUN_0c071450(int a4)
{
    *(unsigned int *)0xC147370 = a4;
}

void FUN_0c071f70(int a4)
{
    *(unsigned int *)0xC2BF91C = a4;
}

void FUN_0c075670(int a4)
{
    *(unsigned int *)0xC2BFCC8 = a4;
}

int FUN_0c075c10(void)
{
    return (*(int *)0xC2BFCD0);
}

int FUN_0c078650(void)
{
    return (*(int *)0xC2C3D98);
}

int FUN_0c07a630(void)
{
    return 0xC1182F5;
}

int FUN_0c07c5a2(void)
{
    return 0xC113FC4;
}

int FUN_0c07cbb6(void)
{
    return (*(int *)0xC147698);
}

int FUN_0c07d634(void)
{
    return (*(int *)0xC2C3E78);
}

void FUN_0c07d9e0(int a4)
{
    *(unsigned int *)0xC2C413C = a4;
}

void FUN_0c07dbe0(int a4)
{
    *(unsigned int *)0xC2C4138 = a4;
}

void FUN_0c080260(int a4)
{
    *(unsigned int *)0xC14774C = a4;
}

int FUN_0c14bcb8(void)
{
    return (*(int *)0xFF00001C);
}

int FUN_0c14dcce(void)
{
    return (*(int *)0xC17381C);
}

int FUN_0c14dcd4(void)
{
    return (*(int *)0xC173818);
}

void FUN_0c150680(int a4)
{
    *(unsigned int *)0xC2D25F4 = a4;
}

void FUN_0c1620dc(int a4)
{
    *(unsigned int *)0xC17430C = a4;
}
