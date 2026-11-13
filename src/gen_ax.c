/* Straight-line functions with calls and guards (batch gen_ax): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[2]; } Stk2;
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o120_float { char p[0x120]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o15C_float { char p[0x15C]; float v; };
struct o160_float { char p[0x160]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o184_float { char p[0x184]; float v; };
struct o190_float { char p[0x190]; float v; };
struct o1C_int { char p[0x1C]; int v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_int { char p[0x28]; int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_float { char p[0x2C]; float v; };
struct o34_int { char p[0x34]; int v; };
struct o38_int { char p[0x38]; int v; };
struct o3B4_int { char p[0x3B4]; int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o54_int { char p[0x54]; int v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o78_float { char p[0x78]; float v; };
struct o7C_float { char p[0x7C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o90_uint { char p[0x90]; unsigned int v; };
struct oB8_uint { char p[0xB8]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
int CheckColliPoleEdge(int, int, int, float);
int CheckColliWallEdge(int, int);
int CheckColliWallPole(int, int);
int CheckColliWallSegment(int, int);
int FUN_0c018b1c(int);
int FUN_0c018b22(int, int);
int FUN_0c0297f4(int, int, float);
int FUN_0c03f7c2(int, int, int, int, int, int, int);
int FUN_0c040704(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0461b0(int);
int FUN_0c046466(void);
int FUN_0c058ca6(int, int);
int FUN_0c05b586(int);
extern int FUN_0c05d1f4();
int FUN_0c05d254(int);
int FUN_0c05d8a6(int, int, int);
int FUN_0c06e990(int);
int FUN_0c06f240(void);
float FUN_0c072140(int);
int FUN_0c072230(int, int);
int FUN_0c072600(int);
int FUN_0c073360(void);
int FUN_0c073a30(float, float, float);
int FUN_0c073a60(int);
int FUN_0c073c40(int, int, float);
float FUN_0c073c60(int);
extern int FUN_0c07c738();
int FUN_0c07fdc8(void);
int FUN_0c07ff00(void);
int FUN_0c15ba7c(int, int, int);
int MultiRot4Vec(int);
int PutCollisionEffect(int, int, int);
int ReflectColliWallBox(int, int, int, int);
extern float _builtin_sqrtf(float);
int camSetTarget(int, int);
int gdc_FileLoad(int, int, int);
int kmiCopyToPVRMemory(int, int, int);
int kmiCreateDummyRegionforAvoidCacheBug(int);
int kmiCreateDummyTranslucentObject(int, int);
int nlAddVector3op(int, int, int);
float nlFloor(float);
int nlGetMatrix(int);
int nlGetPushedMatrix(int);
float nlLength(int, int);
int nlLocate(int, int);
int nlObjPutLoadTexture(int, int);
int nlPopMatrix(int);
int nlPrintf(int, ...);
int nlPushMatrix(int);
int nlQuickInvertMatrix(void);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlSubVector3op(int, int, int);
int nlUnitMatrix(void);
int kmiCreateRegionArray(int a4, int a5, int a6, Stk2 s);
int FUN_0c05ac3a(int a4, int a5);
int FUN_0c02c068(int a4, int a5, float f4);
float FUN_0c04027a(int a4, int a5, float f4);
float FUN_0c010fd4(int a4, int a5, int a6, int a7, float f4, float f5);
int FUN_0c05a3f8(int a4);
int FUN_0c05d928(int a4, float f4, float f5, float f6, float f7, float f8);

int kmiCreateRegionArray(int a4, int a5, int a6, Stk2 s)
{
    int stk[48];
    int t1;
    register int t14;
    register int t15;
    register int t29;
    register int t73;
    register int t74;
    register int t75;
    register int t79;
    register int t80;
    register int t81;
    register int t209;
    int t83;
    register int t84;
    register int t95;
    register int t110;
    register int t112;
    register int t113;
    register int t115;
    register int t118;
    register int t163;
    register int t169;
    int t22;
    register int t27;
    register int t103;
    register int t104;
    register int t105;
    register int t106;
    register int t206;
    register int t202;
    register int t203;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    *(unsigned int *)(((int)stk + 12)) = a6;
    *(unsigned int *)(((int)stk + 84)) = 0x0;
    t1 = 0x0;
    if (((((struct o0_int *)0xC300A94)->v)) == 1) {
        t1 = 0x1;
    }
    if ((*(int *)0xC300ADC) == 0) {
        FUN_0c15ba7c((*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 0))), s.w[0]);
    }
    t14 = *(int *)(((int)stk + 4));
    t15 = *(int *)(((int)stk + 0));
    *(unsigned int *)(((int)stk + 4)) = (t14 * t15);
    *(unsigned int *)(((int)stk + 8)) = (((*(int *)(((int)stk + 12))) * (((((t14 * t15) << 1) + (t14 * t15)) << 2) << 1)) + (*(int *)(((((s.w[0] << 2) << 2) << 1) + 0xC300D40))));
    if ((((*(int *)0xC3008D4) & 32) != 0) && (t22 = (((struct o8_int *)0xC300D2C)->v), t22 != 0)) {
        *(unsigned int *)(((int)stk + 20)) = (kmiCreateDummyTranslucentObject(((*(int *)(((0xC300D3C + (((s.w[0] << 2) << 2) << 1)) + 0x4))) + ((((((t14 * t15) << 1) + (t14 * t15)) << 2) << 1) << 2)), (*(int *)(((((s.w[0] << 2) << 2) << 1) + 0xC300D3C)))));
        t29 = 0x0;
        if ((((((struct o0_int *)0xC300D80)->v)) == 0) && ((t27 = (((struct o8_int *)0xC300D80)->v), t27 != 0) && (t1 != 0))) {
            t29 = 0x1;
        }
        *(unsigned int *)(((int)stk + 84)) = t29;
    }
    if (((*(int *)0xC3008D4) & 128) != 0) {
        kmiCreateDummyRegionforAvoidCacheBug((*(int *)(((int)stk + 8))));
        *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x18);
    }
    if (((((struct o0_int *)0xC300D80)->v)) == 0) {
        *(unsigned int *)(((int)stk + 72)) = 0x80000000;
    } else {
        *(unsigned int *)(((int)stk + 72)) = 0x0;
    }
    if (((((struct o4_int *)0xC300D80)->v)) == 0) {
        *(unsigned int *)(((int)stk + 76)) = 0x80000000;
    } else {
        *(unsigned int *)(((int)stk + 76)) = 0x0;
    }
    if (((((struct o8_int *)0xC300D80)->v)) == 0) {
        *(unsigned int *)(((int)stk + 80)) = 0x80000000;
    } else {
        *(unsigned int *)(((int)stk + 80)) = 0x0;
    }
    if (((((struct oC_int *)0xC300D80)->v)) == 0) {
        *(unsigned int *)(((int)stk + 92)) = 0x80000000;
    } else {
        *(unsigned int *)(((int)stk + 92)) = 0x0;
    }
    if (((((struct o10_int *)0xC300D80)->v)) == 0) {
        *(unsigned int *)(((int)stk + 88)) = 0x80000000;
    } else {
        *(unsigned int *)(((int)stk + 88)) = 0x0;
    }
    *(unsigned int *)(((int)stk + 52)) = ((*(int *)((0xC1742D4 + (((((struct o0_int *)0xC300D80)->v)) << 2)))) << 2);
    *(unsigned int *)(((int)stk + 64)) = ((*(int *)((0xC1742D4 + (((((struct o4_int *)0xC300D80)->v)) << 2)))) << 2);
    *(unsigned int *)(((int)stk + 60)) = ((*(int *)((0xC1742D4 + (((((struct o8_int *)0xC300D80)->v)) << 2)))) << 2);
    *(unsigned int *)(((int)stk + 56)) = ((*(int *)((0xC1742D4 + (((((struct oC_int *)0xC300D80)->v)) << 2)))) << 2);
    *(unsigned int *)(((int)stk + 68)) = ((*(int *)((0xC1742D4 + (((((struct o10_int *)0xC300D80)->v)) << 2)))) << 2);
    *(unsigned int *)(((int)stk + 24)) = (*(int *)(((((s.w[0] << 2) << 2) << 1) + 0xC300D48)));
    t73 = *(int *)(((int)stk + 4));
    t74 = *(int *)((0xC1742D4 + (((((struct o0_int *)0xC300D80)->v)) << 2)));
    t75 = *(int *)(((int)stk + 24));
    *(unsigned int *)(((int)stk + 32)) = (((t74 * t73) << 2) + t75);
    *(unsigned int *)(((int)stk + 28)) = ((((t74 * t73) << 2) + t75) + (((*(int *)((0xC1742D4 + (((((struct o4_int *)0xC300D80)->v)) << 2)))) * t73) << 2));
    t79 = *(int *)((0xC1742D4 + (((((struct o8_int *)0xC300D80)->v)) << 2)));
    t80 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 36)) = (((t79 * t73) << 2) + t80);
    t81 = (((struct oC_int *)0xC300D80)->v);
    *(unsigned int *)(((int)stk + 44)) = ((((t79 * t73) << 2) + t80) + (((*(int *)((0xC1742D4 + (t81 << 2)))) * t73) << 2));
    *(unsigned int *)(((int)stk + 48)) = (t73 - 1);
    *(unsigned int *)(((int)stk + 40)) = ((t1 & 0x1) << 29);
    t209 = (t81 << 2);
    if ((unsigned int)0x0 >= (unsigned int)t73) {
    } else {
        t83 = 0x0;
        t84 = 0x0;
        for (;;) {
            if (s.w[1] != 0) {
                if (s.w[1] != 1) {
                } else {
                    t83 = 0xC300D2C;
                    *(unsigned int *)(((int)stk + 12)) = ((int)((unsigned int)t84 % (unsigned int)(*(int *)((t83 + 0x0)))));
                    *(unsigned int *)(((int)stk + 16)) = ((int)((unsigned int)t84 / (unsigned int)(*(int *)((t83 + 0x0)))));
                }
            } else {
                t83 = 0xC07FBA0;
                t83 = 0xC300D30;
                *(unsigned int *)(((int)stk + 12)) = ((int)((unsigned int)t84 / (unsigned int)((((struct o4_int *)0xC300D2C)->v))));
                t95 = *(int *)((t83 + 0x0));
                t83 = 0xC07FD10;
                *(unsigned int *)(((int)stk + 16)) = ((int)((unsigned int)t84 % (unsigned int)t95));
            }
            t83 = 0xC300A98;
            t110 = 0x0;
            if (((*(int *)((t83 + 0x0))) == 1) && ((t103 = *(int *)(((int)stk + 12)), t104 = (((struct o8_int *)0xC300A94)->v), (unsigned int)t104 < (unsigned int)t103) || (t105 = *(int *)(((int)stk + 16)), t106 = (((struct oC_int *)0xC300A94)->v), (unsigned int)t106 < (unsigned int)t105))) {
                t110 = 0x80000000;
            }
            t83 = ((((struct o0_int *)0xC300D2C)->v));
            t112 = *(int *)(((int)stk + 16));
            t113 = *(int *)(((int)stk + 12));
            t115 = (t112 * t83);
            t83 = (*(int *)(((int)stk + 48)));
            t118 = ((((t84 == t83)) ? 1 : 0) & 0x1);
            t83 = ((int)(((unsigned int)t118 >> 1) | ((unsigned int)t118 << 31)));
            t83 = (t83 | ((t112 & 0x3F) << 8));
            t83 = (t83 | ((t113 & 0x3F) << 2));
            t83 = (t83 | (*(int *)(((int)stk + 40))));
            *(unsigned int *)(((int)stk + 168)) = t83;
            t83 = (*(int *)(((int)stk + 24)));
            *(unsigned int *)(((int)stk + 172)) = (((((*(int *)(((int)stk + 52))) * (t115 + t113)) + t83) | (*(int *)(((int)stk + 72)))) | t110);
            *(unsigned int *)(((int)stk + 176)) = (((((*(int *)(((int)stk + 64))) * (t115 + t113)) + (*(int *)(((int)stk + 32)))) | (*(int *)(((int)stk + 76)))) | t110);
            t83 = (*(int *)(((int)stk + 60)));
            t83 = (t83 * (t115 + t113));
            t83 = (t83 + (*(int *)(((int)stk + 28))));
            t83 = (t83 | (*(int *)(((int)stk + 80))));
            t83 = (t83 | t110);
            *(unsigned int *)(((int)stk + 180)) = t83;
            t83 = (*(int *)(((int)stk + 36)));
            *(unsigned int *)(((int)stk + 184)) = (((((*(int *)(((int)stk + 56))) * (t115 + t113)) + t83) | (*(int *)(((int)stk + 92)))) | t110);
            if ((*(int *)0xC1742E4) != 0) {
                *(unsigned int *)(((int)stk + 188)) = (*(int *)(((int)stk + 180)));
            } else {
                t83 = (*(int *)(((int)stk + 44)));
                *(unsigned int *)(((int)stk + 188)) = (((((*(int *)(((int)stk + 68))) * (t115 + t113)) + t83) | (*(int *)(((int)stk + 88)))) | t110);
            }
            t83 = ((((struct o10_int *)0xC300A94)->v));
            if (t83 != 0) {
                t83 = 0xC300AA8;
                if ((*(int *)((t83 + 0x0))) == 1) {
                    (((struct oB8_uint *)(((int)stk + 0)))->v) = (*(int *)(((int)stk + 176)));
                } else {
                    *(unsigned int *)(((int)stk + 176)) = (*(int *)(((int)stk + 184)));
                }
            }
            t83 = 0xC3008D4;
            if (((*(int *)((t83 + 0x0))) & 32) == 0) {
                t206 = (kmiCopyToPVRMemory((((((t84 << 1) + t84) << 2) << 1) + (*(int *)(((int)stk + 8)))), (0xA8 + ((int)stk + 0)), 0x18));
            } else {
                t163 = *(int *)(((int)stk + 168));
                if (((((struct o8_int *)0xC300D2C)->v)) == 0) {
                    *(unsigned int *)(((int)stk + 144)) = t163;
                    *(unsigned int *)(((int)stk + 168)) = ((*(int *)(((int)stk + 168))) & 0x7FFFFFFF);
                    t83 = ((*(int *)(((int)stk + 168))) & 0xBFFFFFFF);
                    t83 = (t83 | 0x10000000);
                    *(unsigned int *)(((int)stk + 168)) = t83;
                    t83 = (*(int *)(((int)stk + 144)));
                    t83 = (t83 | 0x40000000);
                    *(unsigned int *)(((int)stk + 144)) = t83;
                    t83 = 0xEFFFFFFF;
                    (((struct o90_uint *)(((int)stk + 0)))->v) = ((*(int *)(((int)stk + 144))) & t83);
                    *(unsigned int *)(((int)stk + 148)) = 0x80000000;
                    *(unsigned int *)(((int)stk + 152)) = 0x80000000;
                    *(unsigned int *)(((int)stk + 156)) = 0x80000000;
                    *(unsigned int *)(((int)stk + 160)) = 0x80000000;
                    *(unsigned int *)(((int)stk + 164)) = 0x80000000;
                    t169 = *(int *)(((int)stk + 8));
                    *(unsigned int *)(((int)stk + 0)) = (((((t84 << 1) + t84) << 2) << 2) + t169);
                    kmiCopyToPVRMemory((((((t84 << 1) + t84) << 2) << 2) + t169), (0xA8 + ((int)stk + 0)), 0x18);
                    t202 = ((*(int *)(((int)stk + 0))) + 0x18);
                    t203 = (0x90 + ((int)stk + 0));
                } else {
                    t83 = 0xA8;
                    *(unsigned int *)(((int)stk + 144)) = t163;
                    *(unsigned int *)(((int)stk + 120)) = t163;
                    *(unsigned int *)(((int)stk + 96)) = t163;
                    t83 = (t83 + ((int)stk + 0));
                    *(unsigned int *)(((int)stk + 168)) = ((*(int *)(((int)stk + 168))) & 0x7FFFFFFF);
                    *(unsigned int *)(((int)stk + 144)) = ((*(int *)(((int)stk + 144))) & 0x7FFFFFFF);
                    *(unsigned int *)(((int)stk + 120)) = ((*(int *)(((int)stk + 120))) & 0x7FFFFFFF);
                    *(unsigned int *)((t83 + 0x0)) = ((*(int *)(((int)stk + 168))) & 0xBFFFFFFF);
                    t83 = (*(int *)(((int)stk + 144)));
                    t83 = (t83 | 0x40000000);
                    *(unsigned int *)(((int)stk + 144)) = t83;
                    t83 = (*(int *)(((int)stk + 120)));
                    t83 = (t83 | 0x40000000);
                    *(unsigned int *)(((int)stk + 120)) = t83;
                    t83 = (*(int *)(((int)stk + 96)));
                    t83 = (t83 | 0x40000000);
                    *(unsigned int *)(((int)stk + 96)) = t83;
                    t83 = (*(int *)(((int)stk + 168)));
                    t83 = (t83 | 0x10000000);
                    *(unsigned int *)(((int)stk + 168)) = t83;
                    t83 = (*(int *)(((int)stk + 144)));
                    t83 = (t83 | 0x10000000);
                    *(unsigned int *)(((int)stk + 144)) = t83;
                    t83 = (*(int *)(((int)stk + 120)));
                    t83 = (t83 | 0x10000000);
                    *(unsigned int *)(((int)stk + 120)) = t83;
                    t83 = 0xEFFFFFFF;
                    (((struct o60_uint *)(((int)stk + 0)))->v) = ((*(int *)(((int)stk + 96))) & t83);
                    (((struct o90_uint *)(((int)stk + 0)))->v) = ((*(int *)(((int)stk + 144))) & 0xDFFFFFFF);
                    if ((*(int *)(((int)stk + 84))) != 0) {
                        *(unsigned int *)(((int)stk + 172)) = (*(int *)(((int)stk + 20)));
                    }
                    *(unsigned int *)(((int)stk + 148)) = 0x80000000;
                    *(unsigned int *)(((int)stk + 152)) = 0x80000000;
                    t83 = (*(int *)(((int)stk + 20)));
                    *(unsigned int *)(((int)stk + 156)) = t83;
                    *(unsigned int *)(((int)stk + 160)) = 0x80000000;
                    *(unsigned int *)(((int)stk + 164)) = 0x80000000;
                    *(unsigned int *)(((int)stk + 124)) = 0x80000000;
                    *(unsigned int *)(((int)stk + 128)) = 0x80000000;
                    t83 = (*(int *)(((int)stk + 180)));
                    *(unsigned int *)(((int)stk + 132)) = t83;
                    *(unsigned int *)(((int)stk + 136)) = (*(int *)(((int)stk + 184)));
                    *(unsigned int *)(((int)stk + 140)) = 0x80000000;
                    *(unsigned int *)(((int)stk + 180)) = 0x80000000;
                    *(unsigned int *)(((int)stk + 184)) = 0x80000000;
                    *(unsigned int *)(((int)stk + 100)) = 0x80000000;
                    t83 = t84;
                    t83 = (t83 << 1);
                    *(unsigned int *)(((int)stk + 104)) = 0x80000000;
                    t83 = (t83 + t84);
                    *(unsigned int *)(((int)stk + 108)) = 0x80000000;
                    t83 = (t83 << 2);
                    t83 = (t83 << 2);
                    *(unsigned int *)(((int)stk + 112)) = 0x80000000;
                    t83 = (t83 << 1);
                    *(unsigned int *)(((int)stk + 116)) = 0x80000000;
                    t83 = (t83 + (*(int *)(((int)stk + 8))));
                    *(unsigned int *)(((int)stk + 0)) = t83;
                    kmiCopyToPVRMemory(t83, (0xA8 + ((int)stk + 0)), 0x18);
                    kmiCopyToPVRMemory(((*(int *)(((int)stk + 0))) + 0x18), (0x90 + ((int)stk + 0)), 0x18);
                    kmiCopyToPVRMemory(((*(int *)(((int)stk + 0))) + 0x30), (((int)stk + 0) + 0x78), 0x18);
                    t202 = ((*(int *)(((int)stk + 0))) + 0x48);
                    t203 = (((int)stk + 0) + 0x60);
                }
                t206 = (kmiCopyToPVRMemory(t202, t203, 0x18));
            }
            t83 = (*(int *)(((int)stk + 4)));
            t84 = (t84 + 0x1);
            if ((unsigned int)t84 < (unsigned int)t83) continue;
            break;
        }
        t209 = t206;
    }
    return t209;
}

int FUN_0c05ac3a(int a4, int a5)
{
    int stk[7];

    register int R1;
    register int R2;
    register int R3;
    register int R6;
    register int R8;
    register int R9;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    v0_4 = a4;
    v0_2 = a5;
    *(unsigned int *)(((int)stk + 12)) = v0_4;
    v0_1 = (0xC2B967C);
    if (((int)(*(int *)0xC2B967C) < (int)0x1C)) goto L_C05AC5C;
    L_C05AC58:;
    goto L_C05AC58;
    L_C05AC5C:;
    v0_2 = (0xC10D580);
    v0_0 = (0xC2B928C);
    v0_3 = (0x0);
    v0_4 = (0xC071930);
    L_C05AC94:;
    if (((int)v0_3 < (int)(*(int *)((v0_1 + 0x0))))) goto L_C05AC66;
    v0_4 = (v0_0);
    if (!(((*(int *)(((((((v0_3 << 2) << 1) + v0_3) << 2) + v0_0) + 0x20))) == -1))) goto L_C05ACB0;
    *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 12))) & 0xFF00);
    v0_6 = *(int *)(((int)stk + 16));
    v0_5 = (v0_6);
    v0_3 = (((unsigned char)(*(int *)(((int)stk + 12))) << 2));
    if ((v0_6 == 0)) goto L_C05AD14;
    if ((v0_5 == 0x100)) goto L_C05AD44;
    if ((v0_5 == 0x200)) goto L_C05AD74;
    if ((v0_5 == 0x300)) goto L_C05ADB4;
    if ((v0_5 != 0x400)) goto L_C05AD10;
    v0_5 = *(int *)((v0_3 + 0xC135D98));
    v0_6 = *(int *)((v0_3 + 0xC135E14));
    v0_2 = *(int *)((v0_3 + 0xC13F414));
    *(unsigned int *)(((int)stk + 8)) = (*(int *)((v0_3 + 0xC13305C)));
    *(unsigned int *)(((int)stk + 24)) = (*(int *)((v0_3 + 0xC13307C)));
    v0_7 = *(int *)((v0_1 + 0x0));
    *(unsigned int *)(((((((v0_7 << 2) << 1) + v0_7) << 2) + v0_4) + 0x4)) = (*(int *)((v0_3 + 0xC135E90)));
    v0_2 = (v0_2);
    R8 = (v0_5);
    R9 = (v0_6);
    goto L_C05AE7C;
    L_C05ACB0:;
    goto L_C05ACB0;
    L_C05AE7C:;
    v0_3 = *(int *)((v0_1 + 0x0));
    v0_3 = *(int *)(((((((v0_3 << 2) << 1) + v0_3) << 2) + v0_0) + 0x4));
    v0_5 = (v0_3);
    if (((int)v0_3 < 0)) goto L_C05AE94;
    v0_5 = ((v0_5 & 0x7));
    L_C05AE9E:;
    if ((v0_5 == 0)) goto L_C05AF60;
    *(unsigned int *)(((int)stk + 20)) = (unsigned char)(*(int *)(((int)stk + 12)));
    v0_3 = (0xC10D5FC);
    L_C05AEAA:;
    nlLocate(0x5, 0x1E);
    *(int *)((int)stk + 4) = 0xC10D590;
    nlPrintf(0xC10D590);
    *(int *)((int)stk + 0) = 0xC10D5C4;
    nlPrintf(0xC10D5C4);
    v0_0 = *(int *)(((int)stk + 16));
    v0_5 = (v0_0);
    if ((v0_0 == 0)) goto L_C05AEE2;
    if ((v0_5 == 0x100)) goto L_C05AEE8;
    if ((v0_5 == 0x200)) goto L_C05AEEE;
    if ((v0_5 == 0x300)) goto L_C05AEF4;
    if (!((v0_5 == 0x400))) goto L_C05AF02;
    v0_0 = v0_3;
    *(int *)((int)stk + 4) = v0_0;
    *(unsigned int *)(((int)stk + 4)) = v0_0;
    goto L_C05AEFC;
    L_C05AF02:;
    v0_0 = (*(int *)(((int)stk + 20)));
    *(int *)((int)stk + 4) = v0_0;
    *(int *)((int)stk + 0) = 0xC10D60C;
    nlPrintf(0xC10D60C, v0_0);
    FUN_0c06f240();
    goto L_C05AEAA;
    L_C05AEFC:;
    nlPrintf(*(int *)((int)stk + 4));
    goto L_C05AF02;
    L_C05AEF4:;
    *(int *)((int)stk + 4) = 0xC10D5F4;
    *(unsigned int *)(((int)stk + 4)) = 0xC10D5F4;
    goto L_C05AEFC;
    L_C05AEEE:;
    *(int *)((int)stk + 4) = 0xC10D5E0;
    *(unsigned int *)(((int)stk + 4)) = 0xC10D5E0;
    goto L_C05AEFC;
    L_C05AEE8:;
    *(int *)((int)stk + 4) = 0xC10D5D8;
    *(unsigned int *)(((int)stk + 4)) = 0xC10D5D8;
    goto L_C05AEFC;
    L_C05AEE2:;
    *(int *)((int)stk + 4) = 0xC10D5D0;
    *(unsigned int *)(((int)stk + 4)) = 0xC10D5D0;
    goto L_C05AEFC;
    L_C05AF60:;
    gdc_FileLoad(0xCB60000, (*(int *)(((int)stk + 24))), 0x0);
    v0_3 = *(int *)((v0_1 + 0x0));
    gdc_FileLoad(((*(int *)(((((((v0_3 << 2) << 1) + v0_3) << 2) + v0_0) + 0x0))) << 2), (*(int *)(((int)stk + 8))), 0x0);
    v0_3 = *(int *)((v0_1 + 0x0));
    FUN_0c06e990((*(int *)(((((((v0_3 << 2) << 1) + v0_3) << 2) + v0_0) + 0x8))));
    v0_3 = (0xC0752D0);
    v0_4 = ((0x0 + R8));
    if (((*(int *)(((int)stk + 16))) != 0)) goto L_C05AFC2;
    *(unsigned int *)(((int)stk + 8)) = 0x0;
    v0_4 = (v0_4);
    if (((int)R9 <= 0)) goto L_C05AFF0;
    L_C05AFAE:;
    nlObjPutLoadTexture((*(int *)((v0_4 + 0x0))), v0_2);
    v0_3 = *(int *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 8)) = (v0_3 + 0x1);
    v0_4 = ((v0_4 + 0x4));
    if (((int)(v0_3 + 0x1) < (int)R9)) goto L_C05AFAE;
    L_C05AFF0:;
    FUN_0c06e990(0x0);
    v0_4 = (0x0);
    L_C05AFFC:;
    if (((*(int *)(((((v0_4 << 2) << 2) + v0_2) + 0x8))) != -1)) goto L_C05AFFA;
    v0_3 = *(int *)((v0_1 + 0x0));
    *(unsigned int *)(((((((v0_3 << 2) << 1) + v0_3) << 2) + v0_0) + 0xC)) = v0_4;
    v0_3 = *(int *)((v0_1 + 0x0));
    *(unsigned int *)(((((((v0_3 << 2) << 1) + v0_3) << 2) + v0_0) + 0x20)) = (*(int *)(((int)stk + 12)));
    v0_3 = *(int *)((v0_1 + 0x0));
    *(unsigned int *)(((((((v0_3 << 2) << 1) + v0_3) << 2) + v0_0) + 0x10)) = R8;
    v0_3 = *(int *)((v0_1 + 0x0));
    *(unsigned int *)(((((((v0_3 << 2) << 1) + v0_3) << 2) + v0_0) + 0x14)) = R9;
    v0_3 = *(int *)((v0_1 + 0x0));
    *(unsigned int *)(((((((v0_3 << 2) << 1) + v0_3) << 2) + v0_0) + 0x18)) = v0_2;
    v0_3 = *(int *)((v0_1 + 0x0));
    *(unsigned int *)((v0_1 + 0x0)) = (v0_3 + 0x1);
    v0_4 = ((v0_3 + 0x1));
    v0_2 = (v0_0);
    if (((int)(v0_3 + 0x1) >= (int)0x1C)) goto L_C05B0B8;
    *(unsigned int *)(((((((v0_4 << 2) << 1) + v0_4) << 2) + v0_2) + 0x0)) = ((*(int *)((((((((v0_4 - 1) << 2) << 1) + (v0_4 - 1)) << 2) + v0_2) + 0x0))) + (*(int *)((((((((v0_4 - 1) << 2) << 1) + (v0_4 - 1)) << 2) + v0_2) + 0x4))));
    v0_2 = *(int *)((v0_1 + 0x0));
    v0_3 = *(int *)((v0_1 + 0x0));
    *(unsigned int *)(((((((v0_2 << 2) << 1) + v0_2) << 2) + v0_0) + 0x8)) = ((*(int *)((((((((v0_3 - 1) << 2) << 1) + (v0_3 - 1)) << 2) + v0_0) + 0x8))) + (*(int *)((((((((v0_3 - 1) << 2) << 1) + (v0_3 - 1)) << 2) + v0_0) + 0xC))));
    L_C05B0B8:;
    v0_1 = *(int *)((v0_1 + 0x0));
    return (*(int *)((v0_0 + (((((v0_1 - 1) << 2) << 1) + (v0_1 - 1)) << 2))));
    L_C05AFFA:;
    v0_4 = ((v0_4 + 0x1));
    goto L_C05AFFC;
    L_C05AFC2:;
    *(unsigned int *)(((int)stk + 8)) = 0x0;
    v0_4 = (v0_4);
    if (((int)R9 <= 0)) goto L_C05AFF0;
    L_C05AFCC:;
    v0_3 = *(int *)((v0_1 + 0x0));
    nlObjPutLoadTexture((((*(int *)(((((((v0_3 << 2) << 1) + v0_3) << 2) + v0_0) + 0x0))) << 2) + (*(int *)((v0_4 + 0x0)))), v0_2);
    v0_3 = *(int *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 8)) = (v0_3 + 0x1);
    v0_4 = ((v0_4 + 0x4));
    if (((int)(v0_3 + 0x1) < (int)R9)) goto L_C05AFCC;
    goto L_C05AFF0;
    L_C05AE94:;
    v0_5 = (((~(((~v0_5) + 0x1) & 0x7)) + 0x1));
    goto L_C05AE9E;
    L_C05AD10:;
    goto L_C05AE7C;
    L_C05ADB4:;
    v0_5 = *(int *)((v0_3 + 0xC135D78));
    v0_6 = *(int *)((v0_3 + 0xC135DF4));
    v0_2 = *(int *)((v0_3 + 0xC13F3F4));
    *(unsigned int *)(((int)stk + 8)) = (*(int *)((v0_3 + 0xC13301C)));
    *(unsigned int *)(((int)stk + 24)) = (*(int *)((v0_3 + 0xC13303C)));
    v0_7 = *(int *)((v0_1 + 0x0));
    *(unsigned int *)(((((((v0_7 << 2) << 1) + v0_7) << 2) + v0_4) + 0x4)) = (*(int *)((v0_3 + 0xC135E70)));
    v0_2 = (v0_2);
    R8 = (v0_5);
    R9 = (v0_6);
    goto L_C05AE7C;
    L_C05AD74:;
    v0_5 = *(int *)((v0_3 + 0xC135D74));
    v0_6 = *(int *)((v0_3 + 0xC135DF0));
    v0_2 = *(int *)((v0_3 + 0xC13F3F0));
    *(unsigned int *)(((int)stk + 8)) = (*(int *)((v0_3 + 0xC133014)));
    *(unsigned int *)(((int)stk + 24)) = (*(int *)((v0_3 + 0xC133018)));
    v0_7 = *(int *)((v0_1 + 0x0));
    *(unsigned int *)(((((((v0_7 << 2) << 1) + v0_7) << 2) + v0_4) + 0x4)) = (*(int *)((v0_3 + 0xC135E6C)));
    v0_3 = *(int *)((v0_1 + 0x0));
    *(unsigned int *)(((((((v0_3 << 2) << 1) + v0_3) << 2) + v0_0) + 0x1C)) = 0x1;
    v0_2 = (v0_2);
    R8 = (v0_5);
    R9 = (v0_6);
    goto L_C05AE7C;
    L_C05AD44:;
    v0_5 = *(int *)((v0_3 + 0xC135D48));
    v0_6 = *(int *)((v0_3 + 0xC135DC4));
    v0_2 = *(int *)((v0_3 + 0xC13F3C4));
    *(unsigned int *)(((int)stk + 8)) = (*(int *)((v0_3 + 0xC132FBC)));
    *(unsigned int *)(((int)stk + 24)) = (*(int *)((v0_3 + 0xC132FE8)));
    v0_7 = *(int *)((v0_1 + 0x0));
    *(unsigned int *)(((((((v0_7 << 2) << 1) + v0_7) << 2) + v0_4) + 0x4)) = (*(int *)((v0_3 + 0xC135E40)));
    v0_2 = (v0_2);
    R8 = (v0_5);
    R9 = (v0_6);
    goto L_C05AE7C;
    L_C05AD14:;
    v0_5 = *(int *)((v0_3 + 0xC135D3C));
    v0_6 = *(int *)((v0_3 + 0xC135DB8));
    v0_2 = *(int *)((v0_3 + 0xC13F3B8));
    *(unsigned int *)(((int)stk + 8)) = (*(int *)((v0_3 + 0xC132FA4)));
    *(unsigned int *)(((int)stk + 24)) = (*(int *)((v0_3 + 0xC132FB0)));
    v0_7 = *(int *)((v0_1 + 0x0));
    *(unsigned int *)(((((((v0_7 << 2) << 1) + v0_7) << 2) + v0_4) + 0x4)) = (*(int *)((v0_3 + 0xC135E34)));
    v0_2 = (v0_2);
    R8 = (v0_5);
    R9 = (v0_6);
    goto L_C05AE7C;
    L_C05AC66:;
    if (!(((*(int *)(((((((v0_3 << 2) << 1) + v0_3) << 2) + v0_0) + 0x20))) != (*(int *)(((int)stk + 12)))))) goto L_C05AC7C;
    v0_3 = ((v0_3 + 0x1));
    goto L_C05AC94;
    L_C05AC7C:;
    nlLocate(0x5, 0x14);
    v0_0 = v0_2;
    *(int *)((int)stk + 4) = v0_0;
    nlPrintf(v0_0);
    FUN_0c06f240();
    goto L_C05AC7C;
}

int FUN_0c02c068(int a4, int a5, float f4)
{
    int stk[36];
    register float t2;
    register float t5;
    register int t6;
    register int t7;
    register int t8;
    register int t284;
    register float u14;
    register int t16;
    register int t18;
    register int t19;
    register int t20;
    register int t21;
    register int t22;
    register int t23;
    register int t24;
    register int t25;
    register float u27;
    register int t61;
    register int t64;
    register int t81;
    register int t95;
    register int t96;
    register float u97;
    register int t99;
    register float u108;
    register int t128;
    register float u157;
    register float u161;
    register int t162;
    register float u167;
    register int t169;
    register float u173;
    register int t204;
    register int t208;
    register int t209;
    register int t210;
    register float u211;
    register int t213;
    register float u222;
    register int t242;
    register int t9;
    int t10;
    register float u26;
    register int t30;
    register float u31;
    register int t32;
    register int t33;
    register int t34;
    register int t276;

    *(float *)(((int)stk + 24)) = f4;
    t2 = nlFloor(((*(float *)((a4 + 0x0))) / ((((struct o20_float *)0xC273810)->v))));
    t5 = nlFloor((((((struct o8_float *)(a4))->v)) / ((((struct o20_float *)0xC273810)->v))));
    t6 = (((struct o4_int *)0xC273810)->v);
    t7 = (((struct o8_int *)0xC273810)->v);
    t8 = (((struct o14_int *)0xC273810)->v);
    t284 = 0x0;
    if (((int)((t8 * ((int)t5 - t7)) + ((int)t2 - t6)) >= 0) && ((t9 = (((struct o1C_int *)0xC273810)->v), (int)((t8 * ((int)t5 - t7)) + ((int)t2 - t6)) < (int)t9) && (t10 = (((struct o0_int *)0xC273810)->v), t19 = *(int *)(((((t8 * ((int)t5 - t7)) + ((int)t2 - t6)) << 2) + t10)), t19 != 0))) {
        *(unsigned int *)(((int)stk + 32)) = 0x0;
        *(unsigned int *)(((int)stk + 112)) = a4;
        *(float *)(((int)stk + 132)) = (*(float *)(((int)stk + 24)));
        u14 = *(float *)(((((a5 << 2) << 2) << 1) + 0xC128DBC));
        *(float *)(((int)stk + 136)) = u14;
        *(unsigned int *)(((int)stk + 0)) = (((t8 * ((int)t5 - t7)) + ((int)t2 - t6)) << 2);
        t18 = (((struct o0_int *)0xC273810)->v);
        t16 = *(int *)(((((t8 * ((int)t5 - t7)) + ((int)t2 - t6)) << 2) + t18));
        t20 = 0xC273810;
        t21 = ((t8 * ((int)t5 - t7)) + ((int)t2 - t6));
        t22 = (*(short *)((t16 + 0x0)));
        t23 = 0x0;
        t24 = 0x0;
        t25 = (t16 + 0x4);
        u27 = u14;
        for (;;) {
            if (t22 == 0) {
                break;
            }
            t21 = ((int)stk + 0);
            t21 = (t21 + 0x70);
            t18 = (CheckColliWallSegment(t21, (*(int *)((t25 + 0x0)))));
            if ((t18 != 0) && ((t30 = (t18 == 0), t18 = 0x80, u27 = 0.0f, u31 = *(float *)((((int)stk + 0) + t18)), u26 = u31, !(u27 > u26)) || (t32 = *(int *)((t25 + 0x0)), t33 = (t18 == 0), t18 = t32, t34 = *(int *)((t18 + 0x14)), t18 = t34, (t18 & 1) == 0))) {
                if (t24 != 0) {
                    t18 = 0x80;
                    u27 = 0.0f;
                    u26 = (*(float *)((((int)stk + 0) + t18)));
                    if (u27 > u26) {
                        t22 = (t22 - 1);
                        t25 = (t25 + 0x4);
                        continue;
                    }
                    t20 = (*(int *)((t25 + 0x0)));
                    t19 = t23;
                    t18 = 0xC274004;
                    t21 = 0xF;
                    t23 = (t23 + 0x1);
                    t19 = (t19 << 2);
                    *(unsigned int *)((t19 + t18)) = t20;
                    if ((int)t23 <= (int)t21) {
                        t22 = (t22 - 1);
                        t25 = (t25 + 0x4);
                        continue;
                    }
                    break;
                }
                t18 = 0x80;
                u27 = 0.0f;
                u26 = (*(float *)((((int)stk + 0) + t18)));
                if (!(u27 > u26)) {
                    t23 = 0x0;
                    t24 = 0x1;
                }
                t20 = (*(int *)((t25 + 0x0)));
                t19 = t23;
                t18 = 0xC274004;
                t21 = 0xF;
                t23 = (t23 + 0x1);
                t19 = (t19 << 2);
                *(unsigned int *)((t19 + t18)) = t20;
                if ((int)t23 <= (int)t21) {
                    t22 = (t22 - 1);
                    t25 = (t25 + 0x4);
                    continue;
                }
                break;
            }
            t22 = (t22 - 1);
            t25 = (t25 + 0x4);
        }
        *(unsigned int *)(((int)stk + 8)) = (*(short *)(((*(int *)((((((struct o0_int *)0xC273810)->v)) + (*(int *)(((int)stk + 0)))))) + 0x2)));
        *(unsigned int *)(((int)stk + 0)) = ((a5 * 0x1C) + 0xC273DD4);
        *(unsigned int *)(((int)stk + 12)) = (((int)stk + 0) + 0x58);
        *(unsigned int *)(((int)stk + 16)) = (((int)stk + 0) + 0x64);
        t61 = t25;
        for (;;) {
            if ((*(int *)(((int)stk + 8))) != 0) {
                t64 = CheckColliWallPole((((int)stk + 0) + 0x70), (*(int *)((t61 + 0x0))));
                if (t64 == 0) {
                    t61 = (t61 + 0x4);
                    *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) - 1);
                    continue;
                }
                *(unsigned int *)(((int)stk + 4)) = (*(int *)((a4 + 0x28)));
                FUN_0c073360();
                FUN_0c073a60(a4);
                MultiRot4Vec((*(int *)(((int)stk + 4))));
                FUN_0c072230((*(int *)(((int)stk + 0))), (*(int *)(((int)stk + 12))));
                FUN_0c072230(((*(int *)(((int)stk + 0))) + 0xC), (*(int *)(((int)stk + 16))));
                nlPopMatrix(0x1);
                t81 = CheckColliPoleEdge((((int)stk + 0) + 0x70), (*(int *)((t61 + 0x0))), (((int)stk + 0) + 0x58), ((((struct o18_float *)((*(int *)(((int)stk + 0)))))->v)));
                if (t81 != 0) {
                    break;
                }
                t61 = (t61 + 0x4);
                *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) - 1);
                continue;
            }
            if (t23 == 0) {
                return (*(int *)(((int)stk + 32)));
            }
            *(unsigned int *)(((int)stk + 20)) = (*(int *)((a4 + 0x28)));
            FUN_0c073360();
            FUN_0c073a60(a4);
            MultiRot4Vec((*(int *)(((int)stk + 20))));
            t61 = 0x0;
            *(unsigned int *)(((int)stk + 0)) = (0xC273834 + (((((a5 << 2) << 1) + a5) << 2) << 1));
            for (;;) {
                if ((unsigned int)t61 >= (unsigned int)0x30) {
                    break;
                }
                FUN_0c072230(((*(int *)(((int)stk + 0))) + t61), ((((int)stk + 0) + 0x40) + t61));
                t61 = (t61 + 0xC);
            }
            t95 = nlPopMatrix(0x1);
            *(unsigned int *)(((int)stk + 4)) = 0x0;
            *(unsigned int *)(((int)stk + 12)) = 0xC274004;
            t96 = 0xC274004;
            u97 = 3.40282347e+38f;
            for (;;) {
                if ((int)(*(int *)(((int)stk + 4))) >= (int)0x4) {
                    break;
                }
                t99 = *(int *)(((int)stk + 4));
                t96 = t99;
                t95 = 0x70;
                *(unsigned int *)((((int)stk + 0) + t95)) = ((((t99 << 1) + t96) << 2) + (((int)stk + 0) + 0x40));
                *(unsigned int *)(((int)stk + 8)) = 0x0;
                t96 = (*(int *)(((int)stk + 12)));
                *(unsigned int *)(((int)stk + 0)) = t96;
                t61 = (*(int *)(((int)stk + 12)));
                if ((int)t23 > 0) {
                    for (;;) {
                        t95 = (CheckColliWallEdge((((int)stk + 0) + 0x70), (*(int *)((t61 + 0x0)))));
                        if (t95 != 0) {
                            t95 = 0x80;
                            u108 = *(float *)((((int)stk + 0) + t95));
                            if ((u97 > u108) && (0.0f > u108)) {
                                t96 = 0xC07FDC8;
                                u97 = u108;
                                t95 = 0x8;
                                t95 = (FUN_0c07fdc8());
                                *(unsigned int *)(((int)stk + 16)) = (*(int *)(((int)stk + 4)));
                                t96 = (*(int *)(((int)stk + 0)));
                                *(unsigned int *)(((int)stk + 28)) = (*(int *)((t96 + 0x0)));
                            }
                        }
                        t96 = (*(int *)(((int)stk + 8)));
                        t96 = (t96 + 0x1);
                        *(unsigned int *)(((int)stk + 8)) = t96;
                        *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + 0x4);
                        t61 = (t61 + 0x4);
                        if ((int)t96 >= (int)t23) {
                            break;
                        }
                    }
                }
                t96 = (*(int *)(((int)stk + 4)));
                t96 = (t96 + 0x1);
                *(unsigned int *)(((int)stk + 4)) = t96;
            }
            if (0.0f > u97) {
                *(float *)((a4 + 0x0)) = ((*(float *)((a4 + 0x0))) - (((*(float *)(((int)stk + 56))) * u97)));
                (((struct o8_float *)(a4))->v) = (((((struct o8_float *)(a4))->v)) - ((((((struct o3C_float *)(((int)stk + 0)))->v)) * u97)));
                t128 = *(int *)(((int)stk + 16));
                *(float *)(((int)stk + 48)) = ((*(float *)((((((t128 << 1) + t128) << 2) + (((int)stk + 0) + 0x40)) + 0x0))) - (*(float *)((a4 + 0x0))));
                *(float *)(((int)stk + 52)) = (((((struct o8_float *)(((((t128 << 1) + t128) << 2) + (((int)stk + 0) + 0x40))))->v)) - ((((struct o8_float *)(a4))->v)));
                ReflectColliWallBox(a4, (((int)stk + 0) + 0x30), (((int)stk + 0) + 0x38), a5);
                if (a5 == 0) {
                    *(float *)(((int)stk + 36)) = ((*(float *)(((int)stk + 48))) + (*(float *)((a4 + 0x0))));
                    *(float *)(((int)stk + 40)) = ((((struct o4_float *)(a4))->v));
                    *(float *)(((int)stk + 44)) = ((*(float *)(((int)stk + 52))) + ((((struct o8_float *)(a4))->v)));
                    FUN_0c073360();
                    FUN_0c073a60(a4);
                    MultiRot4Vec((*(int *)(((int)stk + 20))));
                    nlPushMatrix(0x0);
                    nlQuickInvertMatrix();
                    FUN_0c072230((((int)stk + 0) + 0x24), (((int)stk + 0) + 0x24));
                    nlPopMatrix(0x1);
                    *(float *)(((int)stk + 40)) = 5.0f;
                    FUN_0c072230((((int)stk + 0) + 0x24), (((int)stk + 0) + 0x24));
                    nlPopMatrix(0x1);
                    PutCollisionEffect((((int)stk + 0) + 0x24), (a4 + 0xC), ((*(int *)(((*(int *)(((int)stk + 28))) + 0x18))) & 0x1));
                    return 0x1;
                }
                return 0x1;
            }
            return (*(int *)(((int)stk + 32)));
        }
        u157 = (*(float *)((a4 + 0x0)));
        u157 = u157 + (*(float *)(((int)stk + 124))) * (*(float *)(((int)stk + 116)));
        *(float *)((a4 + 0x0)) = u157;
        u161 = ((((struct o8_float *)(a4))->v));
        u161 = u161 + ((((struct o7C_float *)(((int)stk + 0)))->v)) * ((((struct o78_float *)(((int)stk + 0)))->v));
        (((struct o8_float *)(a4))->v) = u161;
        t162 = *(int *)((t61 + 0x0));
        u167 = (((((struct o8_float *)(t162))->v)) - (*(float *)((a4 + 0x0))));
        u167 = u167 + ((((struct o10_float *)(t162))->v)) * (*(float *)(((int)stk + 116)));
        *(float *)(((int)stk + 80)) = u167;
        t169 = *(int *)((t61 + 0x0));
        u173 = (((((struct oC_float *)(t169))->v)) - ((((struct o8_float *)(a4))->v)));
        u173 = u173 + ((((struct o10_float *)(t169))->v)) * (*(float *)(((int)stk + 120)));
        *(float *)(((int)stk + 84)) = u173;
        ReflectColliWallBox(a4, (((int)stk + 0) + 0x50), (((int)stk + 0) + 0x74), a5);
        if (a5 == 0) {
            *(float *)(((int)stk + 68)) = ((*(float *)(((int)stk + 80))) + (*(float *)((a4 + 0x0))));
            *(float *)(((int)stk + 72)) = ((((struct o4_float *)(a4))->v));
            *(float *)(((int)stk + 76)) = ((*(float *)(((int)stk + 84))) + ((((struct o8_float *)(a4))->v)));
            FUN_0c073360();
            FUN_0c073a60(a4);
            MultiRot4Vec((*(int *)(((int)stk + 4))));
            nlPushMatrix(0x0);
            nlQuickInvertMatrix();
            FUN_0c072230((((int)stk + 0) + 0x44), (((int)stk + 0) + 0x44));
            nlPopMatrix(0x1);
            *(float *)(((int)stk + 72)) = 5.0f;
            FUN_0c072230((((int)stk + 0) + 0x44), (((int)stk + 0) + 0x44));
            nlPopMatrix(0x1);
            PutCollisionEffect((((int)stk + 0) + 0x44), (a4 + 0xC), ((*(int *)(((*(int *)((t61 + 0x0))) + 0x18))) & 0x1));
        }
        *(unsigned int *)(((int)stk + 32)) = 0x1;
        if (t23 == 0) {
            t276 = (*(int *)(((int)stk + 32)));
        } else {
            *(unsigned int *)(((int)stk + 20)) = (*(int *)((a4 + 0x28)));
            FUN_0c073360();
            FUN_0c073a60(a4);
            MultiRot4Vec((*(int *)(((int)stk + 20))));
            *(unsigned int *)(((int)stk + 0)) = (0xC273834 + (((((a5 << 2) << 1) + a5) << 2) << 1));
            t204 = 0x0;
            for (;;) {
                if ((unsigned int)t204 >= (unsigned int)0x30) {
                    break;
                }
                FUN_0c072230(((*(int *)(((int)stk + 0))) + t204), ((((int)stk + 0) + 0x40) + t204));
                t204 = (t204 + 0xC);
            }
            t208 = nlPopMatrix(0x1);
            *(unsigned int *)(((int)stk + 4)) = 0x0;
            *(unsigned int *)(((int)stk + 12)) = 0xC274004;
            t209 = 0xC274004;
            t210 = t204;
            u211 = 3.40282347e+38f;
            for (;;) {
                if ((int)(*(int *)(((int)stk + 4))) >= (int)0x4) {
                    break;
                }
                t213 = *(int *)(((int)stk + 4));
                t209 = t213;
                t208 = 0x70;
                *(unsigned int *)((((int)stk + 0) + t208)) = ((((t213 << 1) + t209) << 2) + (((int)stk + 0) + 0x40));
                *(unsigned int *)(((int)stk + 8)) = 0x0;
                t209 = (*(int *)(((int)stk + 12)));
                *(unsigned int *)(((int)stk + 0)) = t209;
                t210 = (*(int *)(((int)stk + 12)));
                if ((int)t23 > 0) {
                    for (;;) {
                        t208 = (CheckColliWallEdge((((int)stk + 0) + 0x70), (*(int *)((t210 + 0x0)))));
                        if (t208 != 0) {
                            t208 = 0x80;
                            u222 = *(float *)((((int)stk + 0) + t208));
                            if ((u211 > u222) && (0.0f > u222)) {
                                u211 = u222;
                                t208 = 0x8;
                                t208 = (FUN_0c07fdc8());
                                *(unsigned int *)(((int)stk + 16)) = (*(int *)(((int)stk + 4)));
                                t209 = (*(int *)(((int)stk + 0)));
                                *(unsigned int *)(((int)stk + 28)) = (*(int *)((t209 + 0x0)));
                            }
                        }
                        t209 = (*(int *)(((int)stk + 8)));
                        t209 = (t209 + 0x1);
                        *(unsigned int *)(((int)stk + 8)) = t209;
                        *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + 0x4);
                        t210 = (t210 + 0x4);
                        if ((int)t209 >= (int)t23) {
                            break;
                        }
                    }
                }
                t209 = (*(int *)(((int)stk + 4)));
                t209 = (t209 + 0x1);
                *(unsigned int *)(((int)stk + 4)) = t209;
            }
            if (0.0f > u211) {
                *(float *)((a4 + 0x0)) = ((*(float *)((a4 + 0x0))) - (((*(float *)(((int)stk + 56))) * u211)));
                (((struct o8_float *)(a4))->v) = (((((struct o8_float *)(a4))->v)) - ((((((struct o3C_float *)(((int)stk + 0)))->v)) * u211)));
                t242 = *(int *)(((int)stk + 16));
                *(float *)(((int)stk + 48)) = ((*(float *)((((((t242 << 1) + t242) << 2) + (((int)stk + 0) + 0x40)) + 0x0))) - (*(float *)((a4 + 0x0))));
                *(float *)(((int)stk + 52)) = (((((struct o8_float *)(((((t242 << 1) + t242) << 2) + (((int)stk + 0) + 0x40))))->v)) - ((((struct o8_float *)(a4))->v)));
                ReflectColliWallBox(a4, (((int)stk + 0) + 0x30), (((int)stk + 0) + 0x38), a5);
                if (a5 == 0) {
                    *(float *)(((int)stk + 36)) = ((*(float *)(((int)stk + 48))) + (*(float *)((a4 + 0x0))));
                    *(float *)(((int)stk + 40)) = ((((struct o4_float *)(a4))->v));
                    *(float *)(((int)stk + 44)) = ((*(float *)(((int)stk + 52))) + ((((struct o8_float *)(a4))->v)));
                    FUN_0c073360();
                    FUN_0c073a60(a4);
                    MultiRot4Vec((*(int *)(((int)stk + 20))));
                    nlPushMatrix(0x0);
                    nlQuickInvertMatrix();
                    FUN_0c072230((((int)stk + 0) + 0x24), (((int)stk + 0) + 0x24));
                    nlPopMatrix(0x1);
                    *(float *)(((int)stk + 40)) = 5.0f;
                    FUN_0c072230((((int)stk + 0) + 0x24), (((int)stk + 0) + 0x24));
                    nlPopMatrix(0x1);
                    PutCollisionEffect((((int)stk + 0) + 0x24), (a4 + 0xC), ((*(int *)(((*(int *)(((int)stk + 28))) + 0x18))) & 0x1));
                }
                t276 = 0x1;
            } else {
                t276 = (*(int *)(((int)stk + 32)));
            }
        }
        t284 = t276;
    }
    return t284;
}

float FUN_0c04027a(int a4, int a5, float f4)
{
    int stk[12];

    register int R3;
    int R7;
    register float F0;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_10;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    register float w0_0;
    register float w0_1;
    v0_6 = a4;
    v0_7 = a5;
    w0_0 = f4;
    *(unsigned int *)(((int)stk + 40)) = v0_7;
    v0_0 = (((struct o4_int *)0xC1EC71C)->v);
    v0_2 = (((struct o8_int *)0xC1EC71C)->v);
    v0_1 = ((((((v0_0 + v0_2) << 1) + (v0_0 + v0_2)) << 2) + 0xC0F3530));
    w0_0 = (w0_0);
    if (((*(int *)(((((((v0_0 + v0_2) << 1) + (v0_0 + v0_2)) << 2) + 0xC0F3530) + 0x0))) != 1)) goto L_C0402BE;
    v0_0 = *(int *)((v0_1 + 0x4));
    *(unsigned int *)(((int)stk + 28)) = v0_0;
    v0_0 = ((v0_0 + (*(int *)((v0_1 + 0x8)))));
    L_C0402C4:;
    *(unsigned int *)(((int)stk + 36)) = v0_0;
    if ((v0_6 != 0)) goto L_C040310;
    v0_0 = *(int *)(((int)stk + 28));
    v0_7 = (v0_0);
    v0_8 = (((((v0_0 << 2) + v0_0) << 2) + 0xC2A5A24));
    L_C0402F8:;
    if (((int)v0_7 < (int)(*(int *)(((int)stk + 36))))) goto L_C0402DC;
    FUN_0c040704(0xFFFFFFFF, 0x0, v0_8, R7, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12), *(int *)((int)stk + 12 + 16), *(int *)((int)stk + 12 + 20), *(int *)((int)stk + 12 + 24), *(int *)((int)stk + 12 + 28));
    v0_6 = ((FUN_0c0461b0(((((struct o0_int *)0xC1EC71C)->v)))));
    L_C0406EC:;
    return F0;
    L_C0402DC:;
    (((struct o10_uint *)0xC2A5A10)->v) = 0x0;
    v0_6 = (0x5);
    R7 = (v0_8);
    L_C0402F0:;
    if ((v0_6 != 0)) goto L_C0402E8;
    v0_7 = ((v0_7 + 0x1));
    v0_8 = ((v0_8 + 0x14));
    goto L_C0402F8;
    L_C0402E8:;
    *(unsigned int *)((R7 + 0x0)) = 0x0;
    v0_6 = ((v0_6 - 1));
    R7 = ((R7 + 0x4));
    goto L_C0402F0;
    L_C040310:;
    v0_1 = (((struct o10_int *)0xC2A5A10)->v);
    (((struct o10_uint *)0xC2A5A10)->v) = (v0_1 + 0x1);
    (((struct o10_uint *)0xC2A5A10)->v) = ((v0_1 + 0x1) & 0x1);
    v0_0 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 24)) = (((v0_0 << 2) + v0_0) << 2);
    *(unsigned int *)(((int)stk + 12)) = (((v0_0 << 1) + v0_0) << 2);
    *(unsigned int *)(((int)stk + 32)) = (((v0_0 << 2) + v0_0) << 2);
    v0_6 = (((v0_1 + 0x1) & 0x1));
    v0_3 = (v0_0);
    L_C040424:;
    if (((int)v0_3 < (int)(*(int *)(((int)stk + 36))))) goto L_C040384;
    v0_0 = ((*(int *)(((int)stk + 28))));
    L_C0406E2:;
    if (((int)v0_0 >= (int)(*(int *)(((int)stk + 36))))) goto L_C0406EC;
    v0_1 = *(int *)0xC2ADA7C;
    v0_2 = *(int *)((((((v0_0 << 1) + v0_0) << 2) + v0_1) + 0x4));
    v0_3 = *(int *)(((*(int *)((((((v0_0 << 1) + v0_0) << 2) + v0_1) + 0x8))) + 0x0));
    *(volatile int *)((((((v0_0 << 1) + v0_0) << 2) + v0_1) + 0x0));
    v0_2 = *(int *)((v0_2 + 0x0));
    v0_3 = *(int *)((0xC0F3AF8 + ((((int)v0_3 >> 8) & 0xF) << 2)));
    *(unsigned int *)(((int)stk + 12)) = (v0_3 + v0_3);
    v0_1 = (((((v0_0 << 1) + v0_0) << 2) + v0_1));
    v0_6 = (0x8);
    v0_2 = (v0_2);
    if (((int)(v0_3 + v0_3) <= (int)0x8)) goto L_C040490;
    v0_3 = *(int *)(((int)stk + 12));
    v0_4 = (((struct o0_int *)0xC2A5A10)->v);
    v0_7 = ((v0_3 - v0_4));
    if (((int)(v0_3 - v0_4) >= (int)v0_6)) goto L_C04048C;
    v0_3 = (v0_6);
    L_C04048E:;
    *(unsigned int *)(((int)stk + 12)) = v0_3;
    L_C040490:;
    if ((((*(int *)(((*(int *)((v0_1 + 0x8))) + 0x0))) & 0x1000) == 0)) goto L_C0404A0;
    *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) << 1);
    L_C0404A0:;
    *(unsigned int *)(((int)stk + 32)) = (0xC2A5A24 + (((((struct o10_int *)0xC2A5A10)->v)) * 0x26FC));
    *(unsigned int *)(((int)stk + 28)) = (((v0_0 << 2) + v0_0) << 2);
    *(unsigned int *)(((int)stk + 44)) = ((((v0_0 << 2) + v0_0) << 2) + (*(int *)(((int)stk + 32))));
    *(unsigned int *)(((int)stk + 40)) = (((v0_0 << 1) + v0_0) << 2);
    v0_6 = (v0_0);
    v0_4 = (0x0);
    v0_5 = (0x0);
    v0_3 = (0x0);
    L_C0406D6:;
    if (((int)v0_5 >= (int)0x5)) goto L_C0406E0;
    v0_1 = *(int *)(((int)stk + 44));
    v0_6 = (v0_1);
    if (!((((*(int *)(((v0_5 << 2) + v0_1))) & ((int)0x1 << (int)v0_4)) != 0))) goto L_C0406C4;
    if ((v0_4 == 0)) goto L_C0404F8;
    v0_6 = (v0_0);
    v0_7 = ((v0_4 - 1));
    v0_8 = (v0_5);
    goto L_C040544;
    L_C0406C4:;
    v0_1 = (int)(v0_3 + 0xF) >= (int)v0_2;
    v0_3 = ((v0_3 + 0xF));
    if (v0_1) goto L_C0406E0;
    v0_1 = (int)(v0_4 + 0x1) < (int)0x20;
    v0_4 = ((v0_4 + 0x1));
    if (v0_1) goto L_C0406D6;
    v0_4 = (0x0);
    v0_5 = ((v0_5 + 0x1));
    goto L_C0406D6;
    L_C0406E0:;
    v0_0 = ((v0_0 + 0x1));
    goto L_C0406E2;
    L_C040544:;
    *(unsigned int *)(((int)stk + 24)) = ((((v0_6 << 2) + v0_6) << 2) + (*(int *)(((int)stk + 32))));
    v0_1 = ((v0_8 << 2));
    R7 = (((int)0x1 << (int)v0_7));
    if ((((*(int *)(((v0_5 << 2) + (((((((((struct o10_int *)0xC2A5A10)->v)) + 0x1) & 0x1) * 0x26FC) + 0xC2A5A24) + (*(int *)(((int)stk + 28))))))) & ((int)0x1 << (int)v0_4)) == 0)) goto L_C040582;
    v0_7 = *(int *)(((int)stk + 24));
    v0_6 = (v0_7);
    if ((((*(int *)((v0_1 + v0_7))) & R7) != 0)) goto L_C0406C4;
    *(unsigned int *)(((int)stk + 16)) = (*(int *)(((int)stk + 12)));
    *(unsigned int *)(((int)stk + 20)) = 0x0;
    *(int *)((int)stk + 8) = (((int)stk + 12) + 0x8);
    *(int *)((int)stk + 4) = 0x0;
    *(int *)((int)stk + 0) = (((int)stk + 4) + 0xC);
    v0_6 = ((FUN_0c03f7c2(0x2, v0_0, v0_3, (*(int *)(((int)stk + 12))), (((int)stk + 4) + 0xC), 0x0, (((int)stk + 12) + 0x8))));
    goto L_C0406C4;
    L_C040582:;
    v0_6 = (0xE);
    v0_9 = (0xC046466);
    if ((((*(int *)((v0_1 + (*(int *)(((int)stk + 24)))))) & R7) != 0)) goto L_C040620;
    v0_1 = (v0_6);
    if (((int)(v0_3 + 0xE) < (int)v0_2)) goto L_C0405A2;
    v0_1 = ((v0_1 - (((v0_1 - v0_2) + v0_3) + 0x1)));
    L_C0405A2:;
    v0_6 = ((FUN_0c046466()) & 15) == 0;
    if (v0_6) goto L_C0405CC;
    *(unsigned int *)(((int)stk + 16)) = (*(int *)(((int)stk + 12)));
    *(unsigned int *)(((int)stk + 20)) = 0x0;
    L_C0405DC:;
    v0_6 = FUN_0c046466();
    *(unsigned int *)(((int)stk + 24)) = (v0_6 & 0x1);
    v0_6 = ((v0_6 & 0x1));
    L_C040618:;
    if (((int)v0_1 >= 0)) goto L_C0405E6;
    goto L_C0406C4;
    L_C0405E6:;
    v0_8 = ((v0_1 + v0_3));
    if (((int)(v0_1 + v0_3) >= (int)(v0_2 - (*(int *)(((int)stk + 16)))))) goto L_C040612;
    *(int *)((int)stk + 8) = (((int)stk + 12) + 0x8);
    v0_6 = (*(int *)(((int)stk + 24)));
    *(int *)((int)stk + 4) = v0_6;
    *(int *)((int)stk + 0) = (((int)stk + 4) + 0xC);
    v0_7 = FUN_0c03f7c2(0x1, v0_0, v0_8, (*(int *)(((int)stk + 12))), (((int)stk + 4) + 0xC), v0_6, (((int)stk + 12) + 0x8));
    v0_6 = (v0_7);
    if ((v0_7 == 0)) goto L_C040616;
    L_C040612:;
    v0_1 = ((v0_1 - (*(int *)(((int)stk + 16)))));
    L_C040616:;
    v0_1 = ((v0_1 - 1));
    goto L_C040618;
    L_C0405CC:;
    *(unsigned int *)(((int)stk + 16)) = 0x3;
    *(unsigned int *)(((int)stk + 20)) = ((int)((int)(FUN_0c046466()) % (int)0x3));
    goto L_C0405DC;
    L_C040620:;
    v0_1 = (v0_6);
    if (((int)(v0_3 - 14) > 0)) goto L_C040632;
    v0_1 = ((v0_1 - ((v0_1 - v0_3) + 0x1)));
    L_C040632:;
    v0_6 = ((FUN_0c046466()) & 15) == 0;
    if (v0_6) goto L_C040644;
    *(unsigned int *)(((int)stk + 16)) = (*(int *)(((int)stk + 12)));
    *(unsigned int *)(((int)stk + 20)) = 0x0;
    L_C040654:;
    v0_6 = FUN_0c046466();
    *(unsigned int *)(((int)stk + 24)) = (v0_6 & 0x1);
    v0_6 = ((v0_6 & 0x1));
    L_C040690:;
    if (((int)v0_1 >= 0)) goto L_C04065E;
    goto L_C0406C4;
    L_C04065E:;
    v0_8 = ((v0_3 - v0_1));
    if (((int)(v0_3 - v0_1) >= (int)(v0_2 - (*(int *)(((int)stk + 16)))))) goto L_C04068A;
    *(int *)((int)stk + 8) = (((int)stk + 12) + 0x8);
    v0_6 = (*(int *)(((int)stk + 24)));
    *(int *)((int)stk + 4) = v0_6;
    *(int *)((int)stk + 0) = (((int)stk + 4) + 0xC);
    v0_7 = FUN_0c03f7c2(0x0, v0_0, v0_8, (*(int *)(((int)stk + 12))), (((int)stk + 4) + 0xC), v0_6, (((int)stk + 12) + 0x8));
    v0_6 = (v0_7);
    if ((v0_7 == 0)) goto L_C04068E;
    L_C04068A:;
    v0_1 = ((v0_1 - (*(int *)(((int)stk + 16)))));
    L_C04068E:;
    v0_1 = ((v0_1 - 1));
    goto L_C040690;
    L_C040644:;
    *(unsigned int *)(((int)stk + 16)) = 0x3;
    *(unsigned int *)(((int)stk + 20)) = ((int)((int)(FUN_0c046466()) % (int)0x3));
    goto L_C040654;
    L_C0404F8:;
    R7 = (0x1F);
    if ((v0_5 == 0)) goto L_C040508;
    v0_6 = (v0_0);
    v0_7 = (R7);
    v0_8 = ((v0_5 - 1));
    goto L_C040544;
    L_C040508:;
    v0_6 = *(short *)(((*(int *)((((*(int *)(((int)stk + 40))) + (*(int *)0xC2ADA7C)) + 0x8))) + 0x8));
    v0_1 = *(int *)(((*(int *)(((((((unsigned short)v0_6 << 1) + (unsigned short)v0_6) << 2) + (*(int *)0xC2ADA7C)) + 0x4))) + 0x0));
    v0_6 = ((unsigned short)v0_6);
    v0_7 = ((((int)((int)(v0_1 - 1) / (int)0xF)) & R7));
    v0_8 = (((int)((int)((int)v0_1 / (int)0xF)) >> 5));
    goto L_C040544;
    L_C04048C:;
    v0_3 = (v0_7);
    goto L_C04048E;
    L_C040384:;
    v0_6 = (0x5);
    v0_7 = ((((((((struct o10_int *)0xC2A5A10)->v)) * 0x26FC) + 0xC2A5A24) + (*(int *)(((int)stk + 32)))));
    L_C0403A2:;
    if ((v0_6 != 0)) goto L_C04039A;
    v0_9 = *(int *)(((int)stk + 12));
    v0_10 = *(int *)0xC2ADA7C;
    v0_7 = (((struct o10_int *)0xC2A5A10)->v);
    v0_8 = *(int *)(((int)stk + 24));
    v0_6 = (0xC2A5A20);
    v0_4 = (((((v0_7 * 0x26FC) + 0xC2A5A24) + v0_8) + 0x14));
    v0_5 = ((0x0 + (((v0_7 * 0x26FC) + 0xC2A5A24) + v0_8)));
    v0_0 = (0x0);
    v0_1 = (0x0);
    v0_6 = (0x0);
    v0_2 = ((*(int *)(((*(int *)(((v0_9 + v0_10) + 0x4))) + 0x0))));
    v0_9 = ((*(int *)(((v0_9 + v0_10) + 0x0))));
    if (((unsigned int)(0x0 + (((v0_7 * 0x26FC) + 0xC2A5A24) + v0_8)) >= (unsigned int)((((v0_7 * 0x26FC) + 0xC2A5A24) + v0_8) + 0x14))) goto L_C040410;
    L_C0403DA:;
    w0_1 = nlLength((*(int *)(((int)stk + 40))), ((((v0_0 << 1) + v0_0) << 2) + v0_9));
    v0_0 = ((v0_0 + 0xF));
    F0 = (w0_1);
    if ((!(w0_0 > w0_1))) goto L_C0403FC;
    *(unsigned int *)((v0_5 + 0x0)) = ((*(int *)((v0_5 + 0x0))) | ((int)0x1 << (int)v0_1));
    L_C0403FC:;
    if (((int)v0_0 >= (int)v0_2)) goto L_C040410;
    v0_6 = (int)(v0_1 + 0x1) < (int)0x20;
    v0_1 = ((v0_1 + 0x1));
    if (v0_6) goto L_C04040C;
    v0_5 = ((v0_5 + 0x4));
    v0_1 = (0x0);
    L_C04040C:;
    if (((unsigned int)v0_5 < (unsigned int)v0_4)) goto L_C0403DA;
    L_C040410:;
    *(unsigned int *)(((int)stk + 24)) = ((*(int *)(((int)stk + 24))) + 0x14);
    *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0xC);
    *(unsigned int *)(((int)stk + 32)) = ((*(int *)(((int)stk + 32))) + 0x14);
    v0_3 = ((v0_3 + 0x1));
    goto L_C040424;
    L_C04039A:;
    *(unsigned int *)((v0_7 + 0x0)) = 0x0;
    v0_6 = ((v0_6 - 1));
    v0_7 = ((v0_7 + 0x4));
    goto L_C0403A2;
    L_C0402BE:;
    *(unsigned int *)(((int)stk + 28)) = 0x0;
    v0_0 = (0x0);
    goto L_C0402C4;
}

float FUN_0c010fd4(int a4, int a5, int a6, int a7, float f4, float f5)
{
    int stk[13];

    register int R1;
    register int R2;
    register int R3;
    int R13;
    register float F0;
    register float F12;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    v0_6 = a4;
    v0_7 = a5;
    v0_2 = a7;
    w0_0 = f4;
    w0_1 = f5;
    v0_0 = (0xC07C738);
    v0_0 = (0xA6);
    v0_3 = (v0_6);
    R13 = (0x1);
    v0_1 = (0x0);
    v0_4 = (0x7F);
    if (((int)(*(int *)0xC175C80) < (int)0x8)) goto L_C011008;
    v0_5 = (((struct o54_int *)(v0_3))->v);
    v0_6 = (v0_5);
    if ((v0_5 == 0)) goto L_C011132;
    if ((v0_6 == 3)) goto L_C011132;
    if (((*(int *)0xC2A464C) != 1)) goto L_C011146;
    L_C011132:;
    v0_4 = ((int (*)(int, int, int, int, int, int, int))(FUN_0c07c738))(0x0, v0_0, 0x0, v0_2, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8));
    L_C01113A:;
    v0_2 = ((int (*)(int, int, int, int, int, int, int))(FUN_0c07c738))(0x3, v0_0, 0x0, v0_2, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8));
    L_C0111A8:;
    *(unsigned int *)(((int)stk + 0)) = v0_1;
    v0_6 = ((0x1A4 + v0_3));
    v0_5 = (0x4);
    v0_2 = (v0_1);
    L_C011200:;
    if ((v0_5 != 0)) goto L_C0111DC;
    v0_4 = (0xC175CE7);
    if ((v0_2 != 1)) goto L_C011264;
    v0_5 = (0xC175CEC);
    if (((*(signed char *)((v0_4 + 0x0))) != -1)) goto L_C011240;
    if (((*(signed char *)0xC175CE8) != 0)) goto L_C01122A;
    FUN_0c058ca6(0x208A9, 0x0);
    (((struct o0_uchar *)0xC175CE8)->v) = R13;
    L_C011236:;
    *(unsigned char *)((v0_4 + 0x0)) = R13;
    *(float *)((v0_5 + 0x0)) = 60.0f;
    L_C011268:;
    v0_6 = (0xC175CE6);
    w0_1 = (5.0f);
    w0_0 = (1.0f);
    if ((!(((((struct o120_float *)(v0_3))->v)) > 0.100000001f))) goto L_C0112FE;
    if (((*(signed char *)((v0_6 + 0x0))) == 1)) goto L_C011300;
    *(unsigned char *)((v0_6 + 0x0)) = R13;
    if (((*(int *)(((int)stk + 0))) != 1)) goto L_C0112D8;
    if ((!(_builtin_fabsf(((((struct o160_float *)(v0_3))->v))) > w0_0))) goto L_C011300;
    FUN_0c058ca6(0x600A9, 0x0);
    L_C011300:;
    v0_5 = (0xC175CE0);
    v0_6 = (0xC175CE4);
    v0_4 = (0xC175CE5);
    w0_2 = (0.0f);
    if (((*(int *)(((int)stk + 0))) != 1)) goto L_C0113D0;
    if ((((((struct o184_float *)(v0_3))->v)) > 0.300000012f)) goto L_C011326;
    w0_4 = (((struct o190_float *)(v0_3))->v);
    w0_3 = (w0_4);
    if (!((!(w0_4 > 0.200000003f)))) goto L_C011326;
    w0_1 = *(float *)((v0_5 + 0x0));
    *(float *)((v0_5 + 0x0)) = (w0_1 - w0_0);
    if (((w0_1 - w0_0) > 0.0f)) goto L_C011388;
    *(float *)((v0_5 + 0x0)) = w0_2;
    *(unsigned char *)((v0_4 + 0x0)) = v0_1;
    goto L_C011388;
    L_C011326:;
    v0_7 = *(signed char *)((v0_4 + 0x0));
    v0_3 = (v0_7);
    if ((v0_7 == 0)) goto L_C01133C;
    if ((v0_3 == 1)) goto L_C011344;
    if ((v0_3 == 2)) goto L_C011362;
    if ((v0_3 == 3)) goto L_C011388;
    L_C011388:;
    if (((*(signed char *)((v0_6 + 0x0))) == 0)) goto L_C011410;
    *(unsigned char *)((v0_6 + 0x0)) = v0_1;
    FUN_0c058ca6(0x900A9, 0x0);
    L_C011410:;
    v0_1 = *(int *)0xC2A464C;
    v0_3 = (v0_1);
    if ((v0_1 != 1)) goto L_C011424;
    v0_3 = ((((int (*)(int, int, int, int, int, int, int))(FUN_0c07c738))(0x2, v0_0, 0x0, v0_2, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8))));
    L_C011438:;
    (((struct o8_uint *)0xC175CE8)->v) = (((((struct o8_int *)0xC175CE8)->v)) + 0x1);
    return F0;
    L_C011424:;
    if (((((((struct o8_int *)0xC175CE8)->v)) & R13) == 0)) goto L_C011438;
    v0_3 = ((((int (*)(int, int, int, int, int, int, int))(FUN_0c07c738))(0x2, v0_0, (int)(*(float *)((v0_5 + 0x0))), v0_2, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8))));
    goto L_C011438;
    L_C011362:;
    w0_2 = *(float *)((v0_5 + 0x0));
    *(float *)((v0_5 + 0x0)) = (w0_2 - w0_0);
    if (((w0_2 - w0_0) > w0_1)) goto L_C011388;
    *(unsigned char *)((v0_4 + 0x0)) = ((*(signed char *)((v0_4 + 0x0))) + 0x1);
    *(float *)((v0_5 + 0x0)) = w0_1;
    goto L_C011388;
    L_C011344:;
    if ((!(35.0f > (*(float *)((v0_5 + 0x0)))))) goto L_C01135A;
    w0_0 = *(float *)((v0_5 + 0x0));
    *(float *)((v0_5 + 0x0)) = (w0_0 + 0.25f);
    w0_3 = ((w0_0 + 0.25f));
    goto L_C011388;
    L_C01135A:;
    *(unsigned char *)((v0_4 + 0x0)) = ((*(signed char *)((v0_4 + 0x0))) + 0x1);
    goto L_C011388;
    L_C01133C:;
    *(float *)((v0_5 + 0x0)) = w0_2;
    *(unsigned char *)((v0_4 + 0x0)) = ((*(signed char *)((v0_4 + 0x0))) + 0x1);
    goto L_C011344;
    L_C0113D0:;
    v0_7 = ((*(signed char *)((v0_6 + 0x0))));
    if ((((((struct o184_float *)(v0_3))->v)) > ((((struct o0_float *)0xC0114B4)->v)))) goto L_C0113EA;
    w0_0 = (((struct o190_float *)(v0_3))->v);
    w0_3 = (w0_0);
    if (!((!(w0_0 > ((((struct o4_float *)0xC0114B4)->v)))))) goto L_C0113EA;
    if ((v0_7 == 0)) goto L_C01140C;
    *(unsigned char *)((v0_6 + 0x0)) = v0_1;
    FUN_0c058ca6(0x900A9, 0x0);
    goto L_C01140C;
    L_C0113EA:;
    if ((v0_7 == 1)) goto L_C01140C;
    *(unsigned char *)((v0_6 + 0x0)) = R13;
    FUN_0c058ca6(0x800A9, 0x0);
    L_C01140C:;
    *(float *)((v0_5 + 0x0)) = w0_2;
    *(unsigned char *)((v0_4 + 0x0)) = v0_1;
    goto L_C011410;
    L_C0112D8:;
    w0_2 = (((struct o160_float *)(v0_3))->v);
    v0_4 = !(_builtin_fabsf(w0_2) > w0_1);
    w0_2 = (_builtin_fabsf(w0_2));
    if (v0_4) goto L_C0112EE;
    FUN_0c058ca6(0x500A9, 0x0);
    goto L_C011300;
    L_C0112EE:;
    if ((!(w0_2 > w0_0))) goto L_C011300;
    FUN_0c058ca6(0x700A9, 0x0);
    goto L_C011300;
    L_C0112FE:;
    *(unsigned char *)((v0_6 + 0x0)) = v0_1;
    goto L_C011300;
    L_C01122A:;
    FUN_0c058ca6(0x308A9, 0x0);
    (((struct o0_uchar *)0xC175CE8)->v) = v0_1;
    goto L_C011236;
    L_C011240:;
    w0_0 = (((struct o160_float *)(v0_3))->v);
    v0_6 = !(_builtin_fabsf(w0_0) > 0.200000003f);
    w0_0 = (_builtin_fabsf(w0_0));
    if (v0_6) goto L_C011268;
    w0_2 = ((*(float *)((v0_5 + 0x0))));
    w0_1 = ((1.0f + 1.0f));
    if ((!(w0_0 > (1.0f + 1.0f)))) goto L_C01125A;
    w0_0 = (w0_1);
    L_C01125A:;
    *(float *)((v0_5 + 0x0)) = (w0_2 - w0_0);
    if ((!(0.0f > (w0_2 - w0_0)))) goto L_C011268;
    L_C011264:;
    *(unsigned char *)((v0_4 + 0x0)) = 0xFFFFFFFF;
    goto L_C011268;
    L_C0111DC:;
    v0_4 = *(int *)((v0_6 + 0x0));
    v0_7 = (v0_4);
    if ((v0_4 == 3)) goto L_C0111F0;
    if ((v0_7 == 9)) goto L_C0111F0;
    if ((v0_7 != 8)) goto L_C0111F2;
    L_C0111F0:;
    *(unsigned int *)(((int)stk + 0)) = R13;
    L_C0111F2:;
    if (((*(int *)((v0_6 + 0x0))) != 23)) goto L_C0111FA;
    v0_2 = (R13);
    L_C0111FA:;
    v0_6 = ((v0_6 + 0x84));
    v0_5 = ((v0_5 - 1));
    goto L_C011200;
    L_C011146:;
    if ((!(0.00999999978f > _builtin_fabsf(((((struct o160_float *)(v0_3))->v)))))) goto L_C011158;
    v0_5 = (v0_1);
    L_C011192:;
    if (((((((struct o8_int *)0xC175CE8)->v)) & R13) == 0)) goto L_C0111A0;
    v0_6 = (0x0);
    v0_7 = (v0_0);
    L_C0111A4:;
    v0_2 = ((int (*)(int, int, int, int, int, int, int))(FUN_0c07c738))(v0_6, v0_7, v0_5, v0_2, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8));
    goto L_C0111A8;
    L_C0111A0:;
    v0_6 = (0x3);
    v0_7 = (v0_0);
    goto L_C0111A4;
    L_C011158:;
    w0_0 = (((struct o15C_float *)(v0_3))->v);
    w0_1 = FUN_0c072140((unsigned short)((*(int *)0xC1EC83C) << 13));
    w0_0 = _builtin_fabsf((w0_0 * 0.0149999997f));
    w0_1 = (w0_1 * 0.800000012f);
    v0_5 = ((int)((w0_0 - w0_1) + 1.79999995f));
    FPUL_ = ((int)((w0_0 - w0_1) + 1.79999995f));
    if (((int)(int)((w0_0 - w0_1) + 1.79999995f) > 0)) goto L_C01118C;
    v0_5 = (R13);
    L_C01118C:;
    if (((int)v0_5 <= (int)v0_4)) goto L_C011192;
    v0_5 = (v0_4);
    goto L_C011192;
    L_C011008:;
    if (((*(int *)0xC2A464C) != 1)) goto L_C011014;
    goto L_C011132;
    L_C011014:;
    if (((((((struct o8_int *)0xC175CE8)->v)) & R13) != 0)) goto L_C011020;
    goto L_C0111A8;
    L_C011020:;
    w0_0 = (((struct o15C_float *)(v0_3))->v);
    v0_5 = !(4000.0f > _builtin_fabsf(w0_0));
    v0_6 = (0x5);
    w0_0 = (_builtin_fabsf(w0_0));
    if (v0_5) goto L_C01103E;
    v0_5 = ((int)(w0_0 * 0.00800000038f));
    FPUL_ = ((int)(w0_0 * 0.00800000038f));
    L_C011052:;
    if (((int)v0_5 >= (int)v0_6)) goto L_C011058;
    v0_5 = (v0_6);
    L_C011058:;
    if ((((((struct o3B4_int *)(v0_3))->v)) != 2)) goto L_C011070;
    v0_6 = (int)((float)v0_5 * 1.20000005f);
    v0_5 = ((int)((float)v0_5 * 1.20000005f));
    FPUL_ = v0_6;
    L_C01108C:;
    v0_6 = (0xFA);
    if (((int)v0_5 <= (int)0xFA)) goto L_C011094;
    v0_5 = (v0_6);
    L_C011094:;
    w0_0 = FUN_0c072140((unsigned short)(((*(int *)0xC1EC83C) << 8) << 2));
    v0_6 = (int)(v0_5 + (int)(w0_0 * 4.0f)) >= (int)0x80;
    v0_5 = ((v0_5 + (int)(w0_0 * 4.0f)));
    FPUL_ = ((int)(w0_0 * 4.0f));
    if (v0_6) goto L_C0110C0;
    v0_4 = ((int (*)(int, int, int, int, int, int, int))(FUN_0c07c738))(0x0, v0_0, v0_5, v0_2, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8));
    goto L_C01113A;
    L_C0110C0:;
    v0_6 = (int)(v0_5 - 126) <= (int)v0_4;
    v0_5 = ((v0_5 - 126));
    if (v0_6) goto L_C0110C8;
    v0_5 = (v0_4);
    L_C0110C8:;
    v0_2 = ((int (*)(int, int, int, int, int, int, int))(FUN_0c07c738))(0x3, v0_0, v0_5, v0_2, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8));
    v0_2 = ((int (*)(int, int, int, int, int, int, int))(FUN_0c07c738))(0x0, v0_0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8));
    goto L_C0111A8;
    L_C011070:;
    if (((int)v0_5 <= (int)v0_4)) goto L_C01108C;
    w0_0 = ((float)(v0_5 - 127) * 0.400000006f);
    v0_6 = (int)((float)v0_5 - w0_0);
    v0_5 = ((int)((float)v0_5 - w0_0));
    FPUL_ = v0_6;
    goto L_C01108C;
    L_C01103E:;
    v0_5 = (((int)((w0_0 + -4000.0f) * 0.0379999988f) + 0x20));
    FPUL_ = ((int)((w0_0 + -4000.0f) * 0.0379999988f));
    goto L_C011052;
}

int FUN_0c05a3f8(int a4)
{
    int stk[14];
    register int t4;
    register int t9;
    register int t10;
    register int t25;
    register int t26;
    register int t34;
    register float u36;
    register float u37;
    register int t49;
    register int t50;
    register int t60;
    register int t61;
    register int t68;
    register float u70;
    register float u71;
    register float u78;
    register float u80;
    register float u82;
    register int t99;
    register float u107;
    register float u110;
    register float u111;
    register float u114;
    register float u115;
    register float u118;
    register float u119;
    register float u122;
    register float u123;
    register float u126;
    register float u127;
    register float u130;
    int t5;
    register float u41;
    register float u76;

    if (a4 != 0) {
        FUN_0c07ff00();
        (((struct o28_uint *)0xC2B8A84)->v) = 0x0;
        FUN_0c073360();
        FUN_0c07ff00();
        FUN_0c07ff00();
        t4 = *(int *)0xC132EA0;
        *(unsigned int *)0xC132EA0 = (-t4);
        if (((-t4) != 1) && (t5 = *(int *)0xC132EA0, t5 != -1)) {
            *(unsigned int *)0xC132EA0 = 0x1;
        }
        (((struct o24_float *)0xC2B8A84)->v) = 10.0f;
        FUN_0c073a60(0xC175930);
        t9 = (((struct o28_int *)0xC2B8A84)->v);
        t10 = *(int *)0xC132EA0;
        nlRotateAY((unsigned short)((int)((int)(((t9 * t10) << 16) - (t9 * t10)) / (int)0x12C)));
        FUN_0c072230(0xC2B8A90, 0xC2B8A90);
        FUN_0c073a30(0.0f, 10.0f, -10.0f);
        FUN_0c072230(0xC2B8A84, 0xC2B8A84);
        nlPopMatrix(0x1);
        FUN_0c07ff00();
    }
    FUN_0c07ff00();
    *(float *)(((int)stk + 36)) = ((*(float *)(((int)stk + 36))) + 10.0f);
    FUN_0c073360();
    FUN_0c07ff00();
    FUN_0c073a60(0xC175930);
    t25 = (((struct o28_int *)0xC2B8A84)->v);
    t26 = *(int *)0xC132EA0;
    nlRotateAY((unsigned short)((int)((int)(((t25 * t26) << 16) - (t25 * t26)) / (int)0x258)));
    FUN_0c073a30(0.0f, 20.0f, -100.0f);
    FUN_0c072230((((int)stk + 0) + 0x2C), (((int)stk + 0) + 0x2C));
    nlPopMatrix(0x1);
    nlSubVector3op((((int)stk + 0) + 0x14), (((int)stk + 0) + 0x2C), (((int)stk + 0) + 0x20));
    *(float *)(((int)stk + 4)) = (FUN_0c073c60((((int)stk + 0) + 0x14)));
    t34 = FUN_0c0297f4((((int)stk + 0) + 0x20), (((int)stk + 0) + 0x14), 5.0f);
    if ((*(int *)((t34 + 0x1C))) != -1) {
        u36 = (((struct o18_float *)(t34))->v);
        u37 = (u36 + -2.0f);
        if (5.0f > (u36 + -2.0f)) {
            u37 = 5.0f;
        }
        u41 = u37;
    } else {
        u41 = (*(float *)(((int)stk + 4)));
    }
    FUN_0c073360();
    FUN_0c07ff00();
    FUN_0c073a60(0xC175930);
    t49 = (nlRotateAY((unsigned short)(*(short *)0xC1759AC)));
    t50 = 0x4;
    for (;;) {
        *(unsigned int *)(((int)stk + 0)) = t50;
        if (t50 == 0) {
            break;
        }
        t49 = 0x160;
        t49 = (FUN_0c073a30(0.0f, 0.0f, (*(float *)((0xC1758B4 + t49)))));
        t49 = 0x19C;
        t49 = (nlRotateAY((*(short *)((0xC1758B4 + t49)))));
        t50 = (*(int *)(((int)stk + 0)));
        t50 = (t50 - 1);
    }
    FUN_0c072230((((int)stk + 0) + 0x20), (((int)stk + 0) + 0x20));
    nlUnitMatrix();
    FUN_0c073a60((((int)stk + 0) + 0x20));
    *(float *)(((int)stk + 36)) = ((*(float *)(((int)stk + 36))) + 10.0f);
    t60 = (((struct o28_int *)0xC2B8A84)->v);
    t61 = *(int *)0xC132EA0;
    nlRotateAY((unsigned short)((int)((int)((((t60 + 0x4) * t61) << 16) - ((t60 + 0x4) * t61)) / (int)0x258)));
    FUN_0c073a30(0.0f, 20.0f, -100.0f);
    FUN_0c072230((((int)stk + 0) + 0x8), (((int)stk + 0) + 0x8));
    nlPopMatrix(0x1);
    nlSubVector3op((((int)stk + 0) + 0x14), (((int)stk + 0) + 0x8), (((int)stk + 0) + 0x20));
    t68 = FUN_0c0297f4((((int)stk + 0) + 0x20), (((int)stk + 0) + 0x14), 5.0f);
    if ((*(int *)((t68 + 0x1C))) != -1) {
        u70 = (((struct o18_float *)(t68))->v);
        u71 = (u70 + -2.0f);
        if (5.0f > (u70 + -2.0f)) {
            u71 = 5.0f;
        }
        u76 = u71;
    } else {
        u76 = (*(float *)(((int)stk + 4)));
    }
    u78 = (((struct o24_float *)0xC2B8A84)->v);
    if (u76 > u41) {
        u80 = u78;
        u80 = u80 + 0.100000001f * ((u41 - u78));
        (((struct o24_float *)0xC2B8A84)->v) = u80;
    } else {
        u82 = u78;
        u82 = u82 + 0.100000001f * ((u76 - u78));
        (((struct o24_float *)0xC2B8A84)->v) = u82;
    }
    FUN_0c07ff00();
    *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) + _builtin_sqrtf(10400.0f));
    nlSubVector3op((((int)stk + 0) + 0x14), (((int)stk + 0) + 0x2C), (((int)stk + 0) + 0x8));
    FUN_0c073c40((((int)stk + 0) + 0x14), (((int)stk + 0) + 0x14), (((((struct o24_float *)0xC2B8A84)->v)) / (*(float *)(((int)stk + 4)))));
    nlAddVector3op((((int)stk + 0) + 0x2C), (((int)stk + 0) + 0x8), (((int)stk + 0) + 0x14));
    FUN_0c07ff00();
    *(float *)(((int)stk + 12)) = (*(float *)0xC175934);
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 20)) = 0.0f;
    *(float *)(((int)stk + 24)) = ((*(float *)(((int)stk + 48))) - (*(float *)(((int)stk + 12))));
    t99 = FUN_0c0297f4((((int)stk + 0) + 0x2C), (((int)stk + 0) + 0x14), 5.0f);
    if ((*(int *)((t99 + 0x1C))) == 22) {
        *(float *)(((int)stk + 48)) = (((((struct o4_float *)(t99))->v)) + -10.0f);
    }
    FUN_0c07ff00();
    u107 = (((struct o0_float *)0xC2B8A84)->v);
    u110 = u107;
    u110 = u110 + 0.600000024f * (((*(float *)(((int)stk + 44))) - u107));
    (((struct o0_float *)0xC2B8A84)->v) = u110;
    u111 = (((struct o4_float *)0xC2B8A84)->v);
    u114 = u111;
    u114 = u114 + 0.5f * (((*(float *)(((int)stk + 48))) - u111));
    (((struct o4_float *)0xC2B8A84)->v) = u114;
    u115 = (((struct o8_float *)0xC2B8A84)->v);
    u118 = u115;
    u118 = u118 + 0.600000024f * (((*(float *)(((int)stk + 52))) - u115));
    (((struct o8_float *)0xC2B8A84)->v) = u118;
    u119 = (((struct oC_float *)0xC2B8A84)->v);
    u122 = u119;
    u122 = u122 + 0.600000024f * (((*(float *)(((int)stk + 32))) - u119));
    (((struct oC_float *)0xC2B8A84)->v) = u122;
    u123 = (((struct o10_float *)0xC2B8A84)->v);
    u126 = u123;
    u126 = u126 + 0.5f * (((*(float *)(((int)stk + 36))) - u123));
    (((struct o10_float *)0xC2B8A84)->v) = u126;
    u127 = (((struct o14_float *)0xC2B8A84)->v);
    u130 = u127;
    u130 = u130 + 0.600000024f * (((*(float *)(((int)stk + 40))) - u127));
    (((struct o14_float *)0xC2B8A84)->v) = u130;
    (((struct o28_uint *)0xC2B8A84)->v) = (((((struct o28_int *)0xC2B8A84)->v)) + 0x1);
    FUN_0c018b1c(0x1);
    FUN_0c018b22(0xC2B8A84, 0x0);
    camSetTarget(0xC2B8A90, 0x0);
    *(float *)0xC177D9C = 60.0f;
    return 0xC05A8BC;
}

int FUN_0c05d928(int a4, float f4, float f5, float f6, float f7, float f8)
{
    int stk[6];
    register int t0;
    register float u8;
    register float u37;
    register int t98;
    register int t106;
    register int t114;
    register int t120;
    register int t125;
    register int t133;
    register int t139;
    register int t144;
    register int t149;
    register int t157;
    register int t163;
    register int t168;
    register int t176;
    register int t182;
    register int t187;
    register int t192;
    register int t196;

    *(int *)((int)stk + 0) = a4;
    t0 = *(int *)(((a4 << 2) + 0xC13AC90));
    if ((*(int *)((0xC13ADD8 + (a4 << 2)))) != 0) {
        if ((*(int *)(((*(int *)0xC136D80) + 0x4))) == 57) {
            u8 = (((struct o0_float *)0xC2B980C)->v);
            if ((u8 > 0.899999976f) && (1.10000002f > u8)) {
                *(unsigned int *)(((*(int *)((0xC13AC90 + (a4 << 2)))) + 0x28)) = (*(int *)(((*(int *)((0xC13ADD8 + (a4 << 2)))) + 0x0)));
            } else {
                if ((u8 > 1.89999998f) && (2.0999999f > u8)) {
                    *(unsigned int *)(((*(int *)((0xC13AC90 + (a4 << 2)))) + 0x28)) = (*(int *)(((*(int *)((0xC13ADD8 + (a4 << 2)))) + 0x4)));
                } else {
                    if ((u8 > 2.9000001f) && (3.0999999f > u8)) {
                        *(unsigned int *)(((*(int *)((0xC13AC90 + (a4 << 2)))) + 0x28)) = (*(int *)(((*(int *)((0xC13ADD8 + (a4 << 2)))) + 0x8)));
                    } else {
                        if ((u8 > 3.9000001f) && (4.0999999f > u8)) {
                            *(unsigned int *)(((*(int *)((0xC13AC90 + (a4 << 2)))) + 0x28)) = (*(int *)(((*(int *)((0xC13ADD8 + (a4 << 2)))) + 0xC)));
                        }
                    }
                }
            }
            u37 = (((struct oC_float *)0xC2B980C)->v);
            if ((u37 > 0.899999976f) && (1.10000002f > u37)) {
                (((struct o40_uint *)((*(int *)((0xC13AC90 + (a4 << 2))))))->v) = (*(int *)(((*(int *)((0xC13ADD8 + (a4 << 2)))) + 0x10)));
            } else {
                if ((u37 > 1.89999998f) && (2.0999999f > u37)) {
                    (((struct o40_uint *)((*(int *)((0xC13AC90 + (a4 << 2))))))->v) = (*(int *)(((*(int *)((0xC13ADD8 + (a4 << 2)))) + 0x14)));
                } else {
                    if ((u37 > 2.9000001f) && (3.0999999f > u37)) {
                        (((struct o40_uint *)((*(int *)((0xC13AC90 + (a4 << 2))))))->v) = (*(int *)(((*(int *)((0xC13ADD8 + (a4 << 2)))) + 0x18)));
                    } else {
                        if ((u37 > 3.9000001f) && (4.0999999f > u37)) {
                            (((struct o40_uint *)((*(int *)((0xC13AC90 + (a4 << 2))))))->v) = (*(int *)(((*(int *)((0xC13ADD8 + (a4 << 2)))) + 0x1C)));
                        }
                    }
                }
            }
        }
    }
    nlPushMatrix(0x0);
    FUN_0c072600(0xC136D90);
    FUN_0c072230(0xC2B9774, 0xC136ED8);
    FUN_0c072230(0xC2B9798, 0xC136EFC);
    FUN_0c072230(0xC2B97C8, 0xC136F20);
    FUN_0c072230(0xC2B97EC, 0xC136F44);
    FUN_0c073a60(0xC2B9738);
    FUN_0c05b586(0xC2B9744);
    t98 = ((int (*)(int, int, int, int, int))(FUN_0c05d1f4))(t0, 0x0, 0x0, 0x0, a4);
    nlGetMatrix(0xC2B981C);
    nlPushMatrix(0x0);
    FUN_0c05b586(0xC2B9750);
    nlGetMatrix(0xC2B985C);
    nlPushMatrix(0x0);
    FUN_0c073a30(4.4849f, 0.0f, 0.0f);
    FUN_0c05b586(0xC2B975C);
    t106 = ((int (*)(int, int, int, int, int, int))(FUN_0c05d1f4))((t0 + 0x10), 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4));
    nlGetMatrix(0xC2B989C);
    nlGetPushedMatrix(0x0);
    FUN_0c073a30(3.66109991f, 0.0560000017f, -1.78760004f);
    FUN_0c05b586(0xC2B9768);
    FUN_0c05d254(0xC136ED8);
    nlRotateAZ(((((struct o10_int *)0xC136EE4)->v)));
    t114 = ((int (*)(int, int, int, int, int, int))(FUN_0c05d1f4))(((t0 + 0x10) + 0x8), 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4));
    nlGetMatrix(0xC2B98DC);
    FUN_0c073a30(((((struct o0_float *)0xC136EE4)->v)), 0.0f, 0.0f);
    nlRotateAZ(((((struct o14_int *)0xC136EE4)->v)));
    t120 = ((int (*)(int, int, int, int, int, int))(FUN_0c05d1f4))((((t0 + 0x10) + 0x8) + 0x8), 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4));
    nlGetMatrix(0xC2B991C);
    FUN_0c073a30(((((struct o8_float *)0xC136EE4)->v)), 0.0f, 0.0f);
    FUN_0c05b586(0xC2B9780);
    t125 = ((int (*)(int, int, int, int, int, int))(FUN_0c05d1f4))(((((t0 + 0x10) + 0x8) + 0x8) + 0x8), 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4));
    nlGetMatrix(0xC2B995C);
    nlGetPushedMatrix(0x0);
    FUN_0c073a30(3.66109991f, 0.0560000017f, 1.78760004f);
    FUN_0c05b586(0xC2B978C);
    FUN_0c05d254(0xC136EFC);
    nlRotateAZ(((((struct o34_int *)0xC136EE4)->v)));
    t133 = ((int (*)(int, int, int, int, int, int))(FUN_0c05d1f4))((((((t0 + 0x10) + 0x8) + 0x8) + 0x8) + 0x8), 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4));
    nlGetMatrix(0xC2B999C);
    FUN_0c073a30(((((struct o24_float *)0xC136EE4)->v)), 0.0f, 0.0f);
    nlRotateAZ(((((struct o38_int *)0xC136EE4)->v)));
    t139 = ((int (*)(int, int, int, int, int, int))(FUN_0c05d1f4))(((((((t0 + 0x10) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8), 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4));
    nlGetMatrix(0xC2B99DC);
    FUN_0c073a30(((((struct o2C_float *)0xC136EE4)->v)), 0.0f, 0.0f);
    FUN_0c05b586(0xC2B97A4);
    t144 = ((int (*)(int, int, int, int, int, int))(FUN_0c05d1f4))((((((((t0 + 0x10) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8), 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4));
    nlGetMatrix(0xC2B9A1C);
    nlPopMatrix(0x1);
    nlGetPushedMatrix(0x0);
    FUN_0c05b586(0xC2B97B0);
    t149 = ((int (*)(int, int, int, int, int, int))(FUN_0c05d1f4))(((((((((t0 + 0x10) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8), 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4));
    nlGetMatrix(0xC2B9A5C);
    nlPushMatrix(0x0);
    FUN_0c073a30(1.16030002f, 0.148599997f, -1.17639995f);
    FUN_0c05b586(0xC2B97BC);
    FUN_0c05d254(0xC136F20);
    nlRotateAZ(((((struct o10_int *)0xC136F2C)->v)));
    t157 = ((int (*)(int, int, int, int, int, int))(FUN_0c05d1f4))((((((((((t0 + 0x10) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8), 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4));
    nlGetMatrix(0xC2B9A9C);
    FUN_0c073a30(((((struct o0_float *)0xC136F2C)->v)), 0.0f, 0.0f);
    nlRotateAZ(((((struct o14_int *)0xC136F2C)->v)));
    t163 = ((int (*)(int, int, int, int, int, int))(FUN_0c05d1f4))(((((((((((t0 + 0x10) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8), 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4));
    nlGetMatrix(0xC2B9ADC);
    FUN_0c073a30(((((struct o8_float *)0xC136F2C)->v)), 0.0f, 0.0f);
    FUN_0c05b586(0xC2B97D4);
    t168 = ((int (*)(int, int, int, int, int, int))(FUN_0c05d1f4))((((((((((((t0 + 0x10) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8), 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4));
    nlGetMatrix(0xC2B9B1C);
    nlGetPushedMatrix(0x0);
    FUN_0c073a30(1.16030002f, 0.148599997f, 1.17639995f);
    FUN_0c05b586(0xC2B97E0);
    FUN_0c05d254(0xC136F44);
    nlRotateAZ(((((struct o34_int *)0xC136F2C)->v)));
    t176 = ((int (*)(int, int, int, int, int, int))(FUN_0c05d1f4))(((((((((((((t0 + 0x10) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8), 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4));
    nlGetMatrix(0xC2B9B5C);
    FUN_0c073a30(((((struct o24_float *)0xC136F2C)->v)), 0.0f, 0.0f);
    nlRotateAZ(((((struct o38_int *)0xC136F2C)->v)));
    t182 = ((int (*)(int, int, int, int, int, int))(FUN_0c05d1f4))((((((((((((((t0 + 0x10) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8), 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4));
    nlGetMatrix(0xC2B9B9C);
    FUN_0c073a30(((((struct o2C_float *)0xC136F2C)->v)), 0.0f, 0.0f);
    FUN_0c05b586(0xC2B97F8);
    t187 = ((int (*)(int, int, int, int, int, int))(FUN_0c05d1f4))(((((((((((((((t0 + 0x10) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8) + 0x8), 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4));
    nlGetMatrix(0xC2B9BDC);
    nlPopMatrix(0x3);
    nlPushMatrix(0xC2B985C);
    t192 = *(int *)(((a4 << 2) + 0xC13AC90));
    FUN_0c05d8a6((*(int *)(((t192 + 0x8) + 0x0))), 0xC2B9A5C, (*(int *)(((((*(int *)(((int)stk + 0))) - 13) << 2) + 0xC136EC8))));
    t196 = ((int (*)(int, int, int, int, int, int))(FUN_0c05d1f4))((t192 + 0x8), 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4));
    return nlPopMatrix(0x1);
}
