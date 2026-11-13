/* Straight-line functions with calls and guards (batch gen_ar): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o100_float { char p[0x100]; float v; };
struct o104_float { char p[0x104]; float v; };
struct o108_float { char p[0x108]; float v; };
struct o110_float { char p[0x110]; float v; };
struct o130_float { char p[0x130]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o14C_float { char p[0x14C]; float v; };
struct o154_float { char p[0x154]; float v; };
struct o160_float { char p[0x160]; float v; };
struct o164_float { char p[0x164]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o19C_ushort { char p[0x19C]; unsigned short v; };
struct o19E_short { char p[0x19E]; short v; };
struct o19E_ushort { char p[0x19E]; unsigned short v; };
struct o1A0_short { char p[0x1A0]; short v; };
struct o1A0_ushort { char p[0x1A0]; unsigned short v; };
struct o1C_int { char p[0x1C]; int v; };
struct o20_float { char p[0x20]; float v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o28_int { char p[0x28]; int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_int { char p[0x2C]; int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o38_int { char p[0x38]; int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o3C_int { char p[0x3C]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o40_int { char p[0x40]; int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o70_int { char p[0x70]; int v; };
struct o74_int { char p[0x74]; int v; };
struct o78_float { char p[0x78]; float v; };
struct o7C_float { char p[0x7C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o80_float { char p[0x80]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_short { char p[0x88]; short v; };
struct o8A_short { char p[0x8A]; short v; };
struct o8C_short { char p[0x8C]; short v; };
struct o94_float { char p[0x94]; float v; };
struct o9C_short { char p[0x9C]; short v; };
struct o9E_short { char p[0x9E]; short v; };
struct oA0_short { char p[0xA0]; short v; };
struct oC_float { char p[0xC]; float v; };
struct oF8_short { char p[0xF8]; short v; };
int FUN_0c01b87a(int, int, float);
int FUN_0c01b920(int, float, float);
int FUN_0c0295c0(int, int, float, float);
int FUN_0c0297f4(int, int, float);
int FUN_0c029b12(int, float);
extern int FUN_0c0468aa();
float FUN_0c0469e2(int, int, int, int, int);
int FUN_0c058ca6(int, int);
int FUN_0c072150(int, int, int);
int FUN_0c072230(int, int);
int FUN_0c072290(int, int);
int FUN_0c073360(void);
int FUN_0c0739a0(int);
float FUN_0c073c60(int);
extern int FUN_0c07ada0();
int FUN_0c07ff00(void);
int PutCollisionEffect(int, int, int);
int nlAddVector(int, int);
int nlAddVector3op(int, int, int);
int nlGetAverageVector(int, int, int, float, float);
float nlLength(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlSubVector3op(int, int, int);
float FUN_0c012e78(int a4, float f4, float f5, float f6, float f7, float f8);
int FUN_0c054504(void);
int FUN_0c013b2c(int a4, float f4);

float FUN_0c012e78(int a4, float f4, float f5, float f6, float f7, float f8)
{
    int stk[31];
    register int t20;
    register int t21;
    register int t40;
    register int t41;
    int t58;
    int t60;
    register int t61;
    register int t70;
    register float u116;
    register float u121;
    register float u122;
    register float u130;
    register float u131;
    register float u132;
    register float t136;
    register int t165;
    register int t167;
    register float u169;
    register float u170;
    register float u171;
    register float u176;
    register float u192;
    register float u193;
    register float u195;
    register int t207;
    register int t208;
    register float u211;
    register float u212;
    register float u213;
    register int t216;
    register int t217;
    register int t229;
    register int t232;
    register int t233;
    register float u236;
    register float u237;
    register float u242;
    register int t262;
    register int t263;
    register int t265;
    register int t267;
    register float u272;
    register float u273;
    register float u274;
    register float u275;
    register float u297;
    register float u299;
    register float u310;
    register float u318;
    register float u319;
    register float u329;
    register float u337;
    register float u338;
    register float u350;
    register float u353;
    register float u358;
    register float u361;
    register float u364;
    register float u368;
    register float u371;
    register float u376;
    register int t384;
    register float u386;
    register float u389;
    register float u390;
    register float u410;
    register float u460;
    register float u461;
    register int t462;
    register float u468;
    register float u471;
    register float u474;
    register float u475;
    register int t476;
    register float u480;
    register float u482;
    register float u485;
    register int t19;
    register int t39;
    int t59;
    register float u62;
    register int t78;
    register float u82;
    register int t111;
    register int t112;
    register float u109;
    register float u102;
    register float u128;
    register float u138;
    register int t139;
    register float u140;
    register int t150;
    register int t146;
    register int t166;
    register float u188;
    register float u189;
    register int t230;
    register int t231;
    register float u234;
    register float u235;
    register float u252;
    register float u253;
    register float u254;
    register float u255;
    register int t259;
    int t260;
    register int t261;
    register int t264;
    register int t266;
    register float u268;
    register float u269;
    register float u270;
    register float u271;
    int t359;
    register float u374;
    register float u365;
    register float u372;
    register int t405;

    *(float *)(((int)stk + 12)) = 0.0f;
    *(float *)(((int)stk + 40)) = 0.0f;
    *(float *)(((int)stk + 32)) = 0.0f;
    *(float *)(((int)stk + 36)) = 0.0f;
    *(unsigned int *)(((int)stk + 44)) = 0x0;
    nlPushMatrix(0x0);
    nlRotateAY((unsigned short)((((struct o8A_short *)(a4))->v)));
    nlRotateAX((unsigned short)((((struct o88_short *)(a4))->v)));
    nlRotateAZ((unsigned short)((((struct o8C_short *)(a4))->v)));
    (((struct o8_float *)0xC1EC6A4)->v) = 0.0f;
    (((struct o0_float *)0xC1EC6A4)->v) = 0.0f;
    (((struct o4_float *)0xC1EC6A4)->v) = -0.109999999f;
    FUN_0c072290(0xC1EC6A4, (((int)stk + 0) + 0x40));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    FUN_0c0739a0((0x90 + a4));
    nlRotateAY((unsigned short)((((struct o9E_short *)(a4))->v)));
    nlRotateAX((unsigned short)((((struct o9C_short *)(a4))->v)));
    nlRotateAZ((unsigned short)((((struct oA0_short *)(a4))->v)));
    *(unsigned int *)(((int)stk + 4)) = (0x1A4 + a4);
    *(unsigned int *)(((int)stk + 0)) = 0x0;
    t20 = (0x1A4 + a4);
    t21 = ((((struct o74_int *)(a4))->v));
    for (;;) {
        if ((int)(*(int *)(((int)stk + 0))) >= (int)0x4) {
            break;
        }
        FUN_0c072230(t21, ((*(int *)(((int)stk + 4))) + 0x68));
        t21 = (t21 + 0xC);
        t20 = (*(int *)(((int)stk + 4)));
        t20 = (t20 + 0x84);
        *(unsigned int *)(((int)stk + 4)) = t20;
        t19 = (*(int *)(((int)stk + 0)));
        t19 = (t19 + 0x1);
        *(unsigned int *)(((int)stk + 0)) = t19;
    }
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlAddVector3op(0xC1EC6A4, (a4 + 0x7C), (0x100 + a4));
    FUN_0c0739a0(0xC1EC6A4);
    nlRotateAY((unsigned short)((((struct o8A_short *)(a4))->v)));
    nlRotateAX((unsigned short)((((struct o88_short *)(a4))->v)));
    nlRotateAZ((unsigned short)((((struct o8C_short *)(a4))->v)));
    *(unsigned int *)(((int)stk + 4)) = (0x1A4 + a4);
    *(unsigned int *)(((int)stk + 0)) = 0x0;
    t40 = (0x1A4 + a4);
    t41 = ((((struct o74_int *)(a4))->v));
    for (;;) {
        if ((int)(*(int *)(((int)stk + 0))) >= (int)0x4) {
            break;
        }
        FUN_0c072230(t41, ((*(int *)(((int)stk + 4))) + 0x74));
        t41 = (t41 + 0xC);
        t40 = (*(int *)(((int)stk + 4)));
        t40 = (t40 + 0x84);
        *(unsigned int *)(((int)stk + 4)) = t40;
        t39 = (*(int *)(((int)stk + 0)));
        t39 = (t39 + 0x1);
        *(unsigned int *)(((int)stk + 0)) = t39;
    }
    nlPopMatrix(0x1);
    FUN_0c073360();
    nlRotateAZ((-(unsigned short)((((struct o8C_short *)(a4))->v))));
    nlRotateAX((-(unsigned short)((((struct o88_short *)(a4))->v))));
    nlRotateAY((-(unsigned short)((((struct o8A_short *)(a4))->v))));
    FUN_0c07ff00();
    t58 = FUN_0c07ff00();
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    *(unsigned int *)(((int)stk + 20)) = 0x4;
    t60 = 0x0;
    t61 = (0x1A4 + a4);
    for (;;) {
        if ((*(int *)(((int)stk + 20))) != 0) {
            t60 = 0xC073CB0;
            t58 = (nlSubVector3op((((int)stk + 0) + 0x58), (t61 + 0x74), (t61 + 0x68)));
            t60 = t61;
            t59 = ((int)stk + 0);
            t60 = (t60 + 0x68);
            t59 = (t59 + 0x64);
            t58 = 0xC;
            t58 = (FUN_0c07ff00());
            t60 = ((int)stk + 0);
            t59 = ((int)stk + 0);
            t60 = (t60 + 0x58);
            t59 = (t59 + 0x4C);
            t58 = 0xC;
            t58 = (FUN_0c07ff00());
            t58 = 0xC013164;
            t60 = (*(int *)((t61 + 0x0)));
            *(unsigned int *)((t61 + 0x4)) = t60;
            t58 = (FUN_0c0295c0((((int)stk + 0) + 0x64), (((int)stk + 0) + 0x58), 1.0f, (*(float *)((t58 + 0x0)))));
            t60 = 0x40;
            *(unsigned int *)(((int)stk + 0)) = t58;
            t70 = *(int *)((t60 + t58));
            t58 = 0x18;
            u62 = 0.0f;
            *(unsigned int *)(((int)stk + 28)) = t70;
            if ((u62 > (*(float *)(((*(int *)(((int)stk + 0))) + t58)))) && (t60 = 0x54, (t70 & t60) == 0)) {
                t60 = t61;
                t59 = ((int)stk + 0);
                t60 = (t60 + 0x68);
                t59 = (t59 + 0x64);
                t58 = 0xC;
                t58 = (FUN_0c07ff00());
                t60 = ((int)stk + 0);
                t59 = ((int)stk + 0);
                t60 = (t60 + 0x4C);
                t59 = (t59 + 0x58);
                t58 = 0xC;
                t58 = (FUN_0c07ff00());
                t60 = 0xC0295C0;
                t58 = (FUN_0c0295c0((((int)stk + 0) + 0x64), (((int)stk + 0) + 0x58), 1.0f, 0.0f));
                *(unsigned int *)(((int)stk + 0)) = t58;
                t59 = ((((struct o40_int *)(t58))->v));
                t60 = (*(int *)(((int)stk + 28)));
                t59 = (t59 | t60);
                (((struct o40_uint *)(t58))->v) = t59;
                t78 = t59;
            } else {
                u82 = u62;
            }
            u62 = u82;
            t58 = 0x160;
            t59 = t78;
            u62 = (*(float *)((a4 + t58)));
            u62 = _builtin_fabsf(u62);
            u116 = u62;
            if (u62 > 0.100000001f) {
                t60 = (*(int *)(((int)stk + 0)));
                t58 = 0x40;
                t59 = (*(int *)((t60 + t58)));
                if ((t59 & 0x3C57) != 0) {
                    t59 = 0xC02EBBA;
                    t58 = (PutCollisionEffect((((int)stk + 0) + 0x64), (0x100 + a4), 0x0));
                } else {
                    t60 = (*(int *)(((int)stk + 0)));
                    t58 = 0x40;
                    t59 = 0x8003A8;
                    t60 = (*(int *)((t60 + t58)));
                    if ((t60 & t59) != 0) {
                        t60 = 0xC02EBBA;
                        t58 = (PutCollisionEffect((((int)stk + 0) + 0x64), (0x100 + a4), 0x1));
                    } else {
                        t111 = t59;
                        t112 = t60;
                        u102 = u62;
                    }
                    u109 = u102;
                }
                u116 = u109;
            } else {
                t111 = t59;
                t112 = t60;
            }
            u62 = u116;
            t59 = t111;
            t60 = t112;
            t58 = 0x40;
            t60 = 0x400000;
            t59 = (*(int *)(((*(int *)(((int)stk + 0))) + t58)));
            if ((t59 & t60) != 0) {
                t58 = 0x104;
                *(unsigned int *)(((int)stk + 44)) = 0x1;
                u62 = (*(float *)((a4 + t58)));
                t58 = 0xC013280;
                u121 = *(float *)((t58 + 0x0));
                t58 = 0xC;
                u62 = _builtin_fabsf(u62);
                u62 = (u62 * u121);
                u122 = *(float *)((((int)stk + 0) + t58));
                t58 = 0xC;
                *(float *)((((int)stk + 0) + t58)) = (u122 - u62);
            }
            t58 = 0x50;
            u62 = 0.0f;
            if ((u62 > (*(float *)((((int)stk + 0) + t58)))) && (t58 = 0x5C, u128 = *(float *)((((int)stk + 0) + t58)), !(u62 > u128))) {
                t58 = 0x104;
                u62 = (*(float *)((a4 + t58)));
                t58 = 0xC013284;
                u130 = *(float *)((t58 + 0x0));
                t58 = 0xC;
                u131 = *(float *)((((int)stk + 0) + t58));
                t58 = 0xC;
                u62 = _builtin_fabsf(u62);
                u132 = u131;
                u132 = u132 + u130 * u62;
                *(float *)((((int)stk + 0) + t58)) = u132;
            }
            t58 = (nlSubVector3op(0xC1EC6A4, (t61 + 0x74), (((int)stk + 0) + 0x64)));
            t60 = 0xC072290;
            t58 = (FUN_0c072290(0xC1EC6A4, (t61 + 0x74)));
            t136 = FUN_0c073c60((t61 + 0x74));
            t58 = 0x10;
            *(float *)((((int)stk + 0) + t58)) = t136;
            t58 = 0x24;
            u62 = (*(float *)((((int)stk + 0) + t58)));
            if (!(u62 > t136) && (t58 = 0xC013298, u138 = *(float *)((t58 + 0x0)), t139 = (u62 > t136), u62 = u138, t58 = 0x10, u140 = *(float *)((((int)stk + 0) + t58)), u62 > u140)) {
                t60 = 0xC073CB0;
                t58 = (nlSubVector3op((((int)stk + 0) + 0x34), (((int)stk + 0) + 0x64), (t61 + 0x68)));
                t58 = (*(int *)(((int)stk + 0)));
                t59 = 0x40;
                t58 = (*(int *)((t59 + t58)));
                if ((t58 & 84) != 0) {
                    t60 = (*(int *)(((int)stk + 4)));
                    t60 = (t60 + 0x1);
                    *(unsigned int *)(((int)stk + 4)) = t60;
                    t58 = (nlAddVector((((int)stk + 0) + 0x70), (t61 + 0x74)));
                } else {
                    t146 = t59;
                }
                t58 = 0x10;
                t59 = t146;
                u62 = (*(float *)((((int)stk + 0) + t58)));
                t58 = 0x24;
                *(float *)((((int)stk + 0) + t58)) = u62;
                t150 = t59;
            }
            t59 = t150;
            t60 = (*(int *)(((int)stk + 20)));
            t60 = (t60 - 1);
            *(unsigned int *)(((int)stk + 20)) = t60;
            t61 = (t61 + 0x84);
            continue;
        }
        break;
    }
    nlPopMatrix(0x1);
    if ((*(int *)(((int)stk + 44))) != 0) {
        *(float *)(((int)stk + 8)) = 4.0f;
    } else {
        *(float *)(((int)stk + 8)) = 0.0f;
    }
    nlPushMatrix(0x0);
    nlAddVector3op(0xC1EC6A4, (a4 + 0x7C), (((int)stk + 0) + 0x34));
    FUN_0c0739a0(0xC1EC6A4);
    nlRotateAY((unsigned short)((((struct o8A_short *)(a4))->v)));
    nlRotateAX((unsigned short)((((struct o88_short *)(a4))->v)));
    t165 = nlRotateAZ((unsigned short)((((struct o8C_short *)(a4))->v)));
    *(unsigned int *)(((int)stk + 0)) = 0x0;
    t167 = (0x1A4 + a4);
    for (;;) {
        if ((int)(*(int *)(((int)stk + 0))) >= (int)0x4) {
            break;
        }
        t166 = 0xC175CC4;
        t165 = 0x30;
        u169 = (((struct o34_float *)(t167))->v);
        u170 = *(float *)((t167 + t165));
        *(float *)((t167 + t165)) = (u170 + u169);
        u171 = *(float *)((t166 + 0x0));
        if ((u170 + u169) > u171) {
            *(float *)((t167 + t165)) = u171;
            t165 = 0x34;
            u176 = (*(float *)((t167 + t165)));
            u176 *= -0.0500000007f;
            *(float *)((t167 + t165)) = u176;
        } else {
            if (((((struct o20_float *)0xC175CB4)->v)) > (*(float *)((t167 + t165)))) {
                if ((int)(*(int *)(((int)stk + 0))) < (int)0x2) {
                    t165 = 0x3C;
                    u188 = ((((struct o0_float *)0xC175CB4)->v));
                    u189 = (((((struct o20_float *)0xC175CB4)->v)) - ((((struct o30_float *)(t167))->v)));
                } else {
                    t165 = 0x3C;
                    u188 = ((((struct o4_float *)0xC175CB4)->v));
                    u189 = (((((struct o20_float *)0xC175CB4)->v)) - ((((struct o30_float *)(t167))->v)));
                }
                u192 = (u189 * u188);
                u193 = (*(float *)((t167 + t165)));
                u193 = u193 + 0.100000001f * u192;
                *(float *)((t167 + t165)) = u193;
                t165 = 0x34;
                u195 = (*(float *)((t167 + t165)));
                u195 *= -0.100000001f;
                *(float *)((t167 + t165)) = u195;
                t165 = 0x30;
                *(float *)((t167 + t165)) = ((((struct o20_float *)0xC175CB4)->v));
            }
        }
        t207 = *(int *)(((int)stk + 0));
        t165 = 0x70;
        t208 = *(int *)((a4 + t165));
        t165 = 0x8;
        t166 = t207;
        (((struct o0_float *)0xC1EC6A4)->v) = (*(float *)(((t208 + (((t207 << 1) + t166) << 2)) + 0x0)));
        u211 = *(float *)((((int)stk + 0) + t165));
        t165 = 0x130;
        u212 = *(float *)((a4 + t165));
        t165 = 0xC0134BC;
        u213 = *(float *)((t165 + 0x0));
        t165 = 0x4;
        *(float *)((0xC1EC6A4 + t165)) = ((u212 + u211) + u213);
        t165 = 0x70;
        t216 = (((t207 << 1) + t166) << 2);
        t166 = (*(int *)((a4 + t165)));
        t165 = 0x8;
        t217 = (t216 + t166);
        t166 = 0xC072230;
        *(float *)((0xC1EC6A4 + t165)) = (*(float *)((t217 + t165)));
        t165 = (FUN_0c072230(0xC1EC6A4, (t167 + 0x68)));
        t166 = (*(int *)(((int)stk + 0)));
        t166 = (t166 + 0x1);
        *(unsigned int *)(((int)stk + 0)) = t166;
        t167 = (t167 + 0x84);
    }
    nlPopMatrix(0x1);
    FUN_0c073360();
    nlRotateAY((unsigned short)((((struct o8A_short *)(a4))->v)));
    nlRotateAX((unsigned short)((((struct o88_short *)(a4))->v)));
    t229 = nlRotateAZ((unsigned short)((((struct o8C_short *)(a4))->v)));
    *(unsigned int *)(((int)stk + 0)) = 0x4;
    t232 = t231;
    t233 = (0x1A4 + a4);
    u236 = f4;
    u237 = f5;
    for (;;) {
        if ((*(int *)(((int)stk + 0))) == 0) {
            break;
        }
        t229 = 0x30;
        t232 = 0xC1EC6A4;
        t230 = 0xC072290;
        (((struct o0_float *)0xC1EC6A4)->v) = 0.0f;
        u235 = (*(float *)((t233 + t229)));
        t229 = 0x130;
        u235 = (-u235);
        u234 = (*(float *)((a4 + t229)));
        t229 = 0x8;
        u235 = (u235 - u234);
        u234 = (*(float *)((((int)stk + 0) + t229)));
        t229 = 0xC0134DC;
        u242 = *(float *)((t229 + 0x0));
        t229 = 0x4;
        u235 = (u235 - u234);
        u235 = (u235 + u242);
        *(float *)((0xC1EC6A4 + t229)) = u235;
        t229 = 0x8;
        *(float *)((0xC1EC6A4 + t229)) = 0.0f;
        t229 = (FUN_0c072290(t232, (((int)stk + 0) + 0x58)));
        t232 = t233;
        u236 = 0.0f;
        t232 = (t232 + 0x68);
        t229 = (FUN_0c0297f4(t232, (((int)stk + 0) + 0x58), u236));
        t232 = t229;
        t229 = (*(int *)((t232 + 0x1C)));
        if (t229 != -1) {
            t229 = 0x30;
            u236 = (*(float *)((t233 + t229)));
            t229 = 0x8;
            u235 = (*(float *)((((int)stk + 0) + t229)));
            u234 = u236;
            t229 = 0x130;
            u234 = (u234 + u235);
            u237 = (*(float *)((a4 + t229)));
            t229 = 0x18;
            u235 = (*(float *)((t232 + t229)));
            t229 = 0x8;
            u234 = (u234 + u237);
            u234 = (u234 + 0.5f);
            u234 = (u234 * u235);
            u235 = (*(float *)((((int)stk + 0) + t229)));
            t229 = 0x38;
            u234 = (u234 - u235);
            u234 = (u234 - u237);
            u234 = (u234 - u236);
            *(float *)((t233 + t229)) = u234;
            t230 = (*(int *)((t232 + 0x1C)));
            u252 = u234;
            u253 = u235;
            u254 = u236;
            u255 = u237;
        } else {
            t229 = 0x38;
            t230 = 0xFFFFFFFF;
            *(float *)((t233 + t229)) = 0.0f;
        }
        *(unsigned int *)((t233 + 0x0)) = t230;
        u234 = u252;
        u235 = u253;
        u236 = u254;
        u237 = u255;
        t230 = (*(int *)(((int)stk + 0)));
        t230 = (t230 - 1);
        *(unsigned int *)(((int)stk + 0)) = t230;
        t233 = (t233 + 0x84);
    }
    nlPopMatrix(0x1);
    t262 = (0x1A4 + a4);
    t263 = 0x0;
    t265 = t264;
    t267 = t266;
    u272 = f4;
    u273 = f6;
    u274 = f7;
    u275 = f8;
    for (;;) {
        if ((int)t263 < (int)0x4) {
            t259 = 0x38;
            t259 = (t259 + t262);
            u271 = (*(float *)((t259 + 0x0)));
            u270 = ((((struct o30_float *)(t262))->v));
            u270 = (u270 + u271);
            (((struct o30_float *)(t262))->v) = u270;
            u272 = 0.25f;
            u270 = ((((struct o30_float *)(t262))->v));
            u271 = ((((struct o20_float *)0xC175CB4)->v));
            if (u271 > u270) {
                if ((int)t263 < (int)0x2) {
                    t259 = 0x38;
                    u271 = ((((struct o0_float *)0xC175CB4)->v));
                    t259 = (t259 + t262);
                    u270 = (*(float *)((t259 + 0x0)));
                    u270 = (u270 * u271);
                    u271 = ((((struct o3C_float *)(t262))->v));
                    u270 = (u270 * 0.5f);
                    u271 = (u271 - u270);
                    (((struct o3C_float *)(t262))->v) = u271;
                } else {
                    t259 = 0x38;
                    t261 = 0xC175CB8;
                    t259 = (t259 + t262);
                    u270 = (*(float *)((t259 + 0x0)));
                    u271 = (*(float *)((t261 + 0x0)));
                    u269 = ((((struct o3C_float *)(t262))->v));
                    u270 = (u270 * u271);
                    u270 = (u270 * 0.5f);
                    u269 = (u269 - u270);
                    (((struct o3C_float *)(t262))->v) = u269;
                }
                t261 = (*(int *)(((int)stk + 44)));
                if (t261 == 0) {
                    u270 = ((((struct o20_float *)0xC175CB4)->v));
                    u271 = ((((struct o30_float *)(t262))->v));
                    u270 = (u270 - u271);
                    u271 = (*(float *)(((int)stk + 32)));
                    u271 = (u271 + u270);
                    *(float *)(((int)stk + 32)) = u271;
                }
                u273 = ((((struct o20_float *)0xC175CB4)->v));
                u271 = ((((struct o30_float *)(t262))->v));
                u273 = (u273 - u271);
                u271 = (*(float *)(((int)stk + 12)));
                u268 = u273;
                u297 = u271;
                u297 = u297 + u268 * u272;
                u271 = u297;
                *(float *)(((int)stk + 12)) = u271;
                u271 = ((((struct o78_float *)(t262))->v));
                u299 = u271;
                u299 = u299 + u268 * 1.0f;
                u271 = u299;
                (((struct o78_float *)(t262))->v) = u271;
                u270 = ((((struct o20_float *)0xC175CB4)->v));
                (((struct o30_float *)(t262))->v) = u270;
                u271 = ((((struct o34_float *)(t262))->v));
                u271 = _builtin_fabsf(u271);
                u271 = (u271 * 0.100000001f);
                (((struct o34_float *)(t262))->v) = u271;
            }
            u273 = 0.850000024f;
            if ((int)t263 < (int)0x2) {
                t265 = 0xC175CCC;
                u271 = ((((struct o0_float *)0xC175CB4)->v));
                u274 = (*(float *)((t265 + 0x0)));
                u275 = 1.0f;
                u275 = (u275 / u271);
                if ((*(int *)((t262 + 0x0))) != -1) {
                    t259 = 0x30;
                    u268 = ((((struct o0_float *)0xC175CB4)->v));
                    t259 = (t259 + t262);
                    u271 = (*(float *)((t259 + 0x0)));
                    u270 = ((((struct o8_float *)(t262))->v));
                    t261 = 0x34;
                    u271 = (u271 - u274);
                    t261 = (t261 + t262);
                    u271 = (u271 * u268);
                    u268 = 0.800000012f;
                    u310 = u271;
                    u310 = u310 + u268 * u270;
                    u271 = u310;
                    u270 = (*(float *)((t261 + 0x0)));
                    u271 = (u271 * u275);
                    u270 = (u270 - u271);
                    *(float *)((t261 + 0x0)) = u270;
                } else {
                    t259 = 0x30;
                    u270 = ((((struct o0_float *)0xC175CB4)->v));
                    t259 = (t259 + t262);
                    u271 = (*(float *)((t259 + 0x0)));
                    u269 = ((((struct o34_float *)(t262))->v));
                    u271 = (u271 - u274);
                    u271 = (u271 * u270);
                    u271 = (u271 * u275);
                    u269 = (u269 - u271);
                    (((struct o34_float *)(t262))->v) = u269;
                }
                u271 = 0.0f;
                u270 = ((((struct o34_float *)(t262))->v));
                t265 = 0xC175CBC;
                u318 = *(float *)((t265 + 0x0));
                u319 = u318;
                if (!(u271 > u270)) {
                    u319 = (u318 * u273);
                }
                u270 = ((((struct o34_float *)(t262))->v));
                u270 = (u270 * u319);
                (((struct o34_float *)(t262))->v) = u270;
            } else {
                t261 = 0xC175CB8;
                t265 = 0xC175CD0;
                u271 = (*(float *)((t261 + 0x0)));
                u275 = (*(float *)((t265 + 0x0)));
                u274 = 1.0f;
                u274 = (u274 / u271);
                if ((*(int *)((t262 + 0x0))) != -1) {
                    t259 = 0x30;
                    u268 = (*(float *)((t261 + 0x0)));
                    t259 = (t259 + t262);
                    u271 = (*(float *)((t259 + 0x0)));
                    u270 = ((((struct o8_float *)(t262))->v));
                    t260 = 0x34;
                    u271 = (u271 - u275);
                    t260 = (t260 + t262);
                    u271 = (u271 * u268);
                    u268 = 0.800000012f;
                    u329 = u271;
                    u329 = u329 + u268 * u270;
                    u271 = u329;
                    u270 = (*(float *)((t260 + 0x0)));
                    u271 = (u271 * u274);
                    u270 = (u270 - u271);
                    *(float *)((t260 + 0x0)) = u270;
                } else {
                    t259 = 0x30;
                    u270 = (*(float *)((t261 + 0x0)));
                    t259 = (t259 + t262);
                    u271 = (*(float *)((t259 + 0x0)));
                    u269 = ((((struct o34_float *)(t262))->v));
                    u271 = (u271 - u275);
                    u271 = (u271 * u270);
                    u271 = (u271 * u274);
                    u269 = (u269 - u271);
                    (((struct o34_float *)(t262))->v) = u269;
                }
                u271 = 0.0f;
                u270 = ((((struct o34_float *)(t262))->v));
                t265 = 0xC175CC0;
                u337 = *(float *)((t265 + 0x0));
                u338 = u337;
                if (!(u271 > u270)) {
                    u338 = (u337 * u273);
                }
                u270 = ((((struct o34_float *)(t262))->v));
                u270 = (u270 * u338);
                (((struct o34_float *)(t262))->v) = u270;
            }
            if ((*(int *)((t262 + 0x0))) != -1) {
                t259 = 0x34;
                if ((int)t263 < (int)0x2) {
                    u268 = ((((struct o0_float *)0xC175CB4)->v));
                } else {
                    t260 = 0xC175CB8;
                    u268 = (*(float *)((t260 + 0x0)));
                }
                t259 = (t259 + t262);
                u270 = ((((struct o3C_float *)(t262))->v));
                u271 = (*(float *)((t259 + 0x0)));
                u350 = u270;
                u350 = u350 + u268 * u271;
                u270 = u350;
                u268 = u272;
                (((struct o3C_float *)(t262))->v) = u270;
                u271 = ((((struct o34_float *)(t262))->v));
                u270 = (*(float *)(((int)stk + 12)));
                u353 = u270;
                u353 = u353 + u268 * u271;
                u270 = u353;
                *(float *)(((int)stk + 12)) = u270;
            } else {
                t259 = ((int)stk + 0);
                u271 = (*(float *)(((int)stk + 40)));
                t259 = (t259 + 0x44);
                t265 = 0xC175C80;
                u271 = (u271 - 0.0274999999f);
                t267 = 0x8;
                *(float *)(((int)stk + 40)) = u271;
                u271 = (*(float *)((t259 + 0x0)));
                u270 = ((((struct o34_float *)(t262))->v));
                u271 = (u271 * 1.10000002f);
                u270 = (u270 - u271);
                (((struct o34_float *)(t262))->v) = u270;
                t261 = (*(int *)((t265 + 0x0)));
                u358 = *(float *)(((int)stk + 68));
                if (((int)t261 >= (int)t267) && (t359 = *(int *)((t265 + 0x0)), t260 = t359, t259 = 0x10, (int)t260 < (int)t259)) {
                    if ((int)t263 < (int)0x2) {
                        t259 = 0x12C;
                        t259 = (t259 + a4);
                        u268 = (*(float *)((t259 + 0x0)));
                        u361 = (u358 * u268);
                        u268 = u272;
                        u365 = u361;
                    } else {
                        t259 = 0x12C;
                        t260 = 0x3E99999A;
                        t259 = (t259 + a4);
                        u268 = (*(float *)((t259 + 0x0)));
                        u364 = (u358 * u268);
                        u268 = (*(float *)&(t260));
                        u365 = u364;
                    }
                    u374 = u365;
                } else {
                    if ((int)t263 >= (int)0x2) {
                        t259 = 0x12C;
                        t259 = (t259 + a4);
                        u268 = (*(float *)((t259 + 0x0)));
                        u368 = (u358 * u268);
                        u268 = u272;
                        u372 = u368;
                    } else {
                        t259 = 0x12C;
                        t260 = 0x3E99999A;
                        t259 = (t259 + a4);
                        u268 = (*(float *)((t259 + 0x0)));
                        u371 = (u358 * u268);
                        u268 = (*(float *)&(t260));
                        u372 = u371;
                    }
                    u374 = u372;
                }
                u271 = ((((struct o3C_float *)(t262))->v));
                u376 = u271;
                u376 = u376 + u268 * u374;
                u271 = u376;
                (((struct o3C_float *)(t262))->v) = u271;
            }
            t261 = 0x84;
            t263 = (t263 + 0x1);
            t262 = (t262 + t261);
            continue;
        }
        break;
    }
    if ((int)(*(int *)(((int)stk + 4))) <= 0) {
    } else {
        *(float *)(((int)stk + 52)) = ((*(float *)(((int)stk + 52))) * 0.800000012f);
        *(float *)(((int)stk + 56)) = ((*(float *)(((int)stk + 56))) * 0.800000012f);
        *(float *)(((int)stk + 60)) = ((*(float *)(((int)stk + 60))) * 0.800000012f);
        t384 = *(int *)(((int)stk + 4));
        (((struct o30_float *)(((int)stk + 0)))->v) = (float)t384;
        u386 = ((float)t384 * 0.0175000001f);
        (((struct o160_float *)(a4))->v) = (((((struct o160_float *)(a4))->v)) * (0.99000001f - u386));
        u389 = (1.0f / (((((struct o130_float *)(a4))->v)) * 6.28299999f));
        u390 = (((((struct o160_float *)(a4))->v)) * u389);
        (((struct o164_float *)(a4))->v) = (u390 * 3600.0f);
        FUN_0c072150((unsigned short)((((struct oF8_short *)(a4))->v)), (0x100 + a4), (0x108 + a4));
        (((struct o100_float *)(a4))->v) = (((((struct o100_float *)(a4))->v)) * ((((struct o160_float *)(a4))->v)));
        (((struct o108_float *)(a4))->v) = (((((struct o108_float *)(a4))->v)) * ((((struct o160_float *)(a4))->v)));
        FUN_0c01b920((((int)stk + 0) + 0x18), (-(*(float *)(((int)stk + 112)))), (*(float *)(((int)stk + 120))));
        if (!(0.0f > ((((struct o160_float *)(a4))->v)))) {
            t405 = (FUN_0c01b87a(0x0, (*(short *)(((int)stk + 24))), 0.00800000038f));
        } else {
            t405 = (FUN_0c01b87a(0x0, ((*(short *)(((int)stk + 24))) + 0x8000), 0.00800000038f));
        }
        (((struct o19C_ushort *)(a4))->v) = t405;
        if (((((struct o104_float *)(a4))->v)) > 0.0f) {
            u410 = (((((struct o30_float *)(((int)stk + 0)))->v)) * 0.0250000004f);
            (((struct o104_float *)(a4))->v) = (((((struct o104_float *)(a4))->v)) * (0.949999988f - u410));
        }
    }
    nlPushMatrix(0x0);
    nlRotateAY((unsigned short)((((struct o8A_short *)(a4))->v)));
    nlRotateAX((unsigned short)((((struct o88_short *)(a4))->v)));
    nlRotateAZ((unsigned short)((((struct o8C_short *)(a4))->v)));
    (((struct o8_float *)0xC1EC6A4)->v) = 0.0f;
    (((struct o0_float *)0xC1EC6A4)->v) = 0.0f;
    (((struct o4_float *)0xC1EC6A4)->v) = (*(float *)(((int)stk + 12)));
    FUN_0c072290(0xC1EC6A4, (((int)stk + 0) + 0x58));
    (((struct o104_float *)(a4))->v) = (((((struct o104_float *)(a4))->v)) + ((((struct o5C_float *)(((int)stk + 0)))->v)));
    (((struct o4_float *)0xC1EC6A4)->v) = (((((struct o4_float *)0xC1EC6A4)->v)) + ((((struct o20_float *)(((int)stk + 0)))->v)));
    FUN_0c072290(0xC1EC6A4, (((int)stk + 0) + 0x58));
    nlPopMatrix(0x1);
    (((struct o104_float *)(a4))->v) = (((((struct o104_float *)(a4))->v)) + ((((struct o28_float *)(((int)stk + 0)))->v)));
    (((struct o7C_float *)(a4))->v) = (((((struct o7C_float *)(a4))->v)) + (((((struct o34_float *)(((int)stk + 0)))->v)) + ((((struct o58_float *)(((int)stk + 0)))->v))));
    (((struct o84_float *)(a4))->v) = (((((struct o84_float *)(a4))->v)) + (((((struct o3C_float *)(((int)stk + 0)))->v)) + ((((struct o60_float *)(((int)stk + 0)))->v))));
    (((struct o80_float *)(a4))->v) = (((((struct o80_float *)(a4))->v)) + (((((struct o38_float *)(((int)stk + 0)))->v)) + ((((struct o5C_float *)(((int)stk + 0)))->v))));
    u460 = (((struct o3C_float *)((0x84 + (0x1A4 + a4))))->v);
    u461 = (((struct o3C_float *)((0x1A4 + a4)))->v);
    t462 = (((struct o70_int *)(a4))->v);
    *(unsigned int *)(((int)stk + 0)) = t462;
    u468 = ((u460 + u461) * ((((struct o14_float *)(t462))->v)));
    u468 = u468 + ((((struct o8_float *)((t462 + 0x24)))->v)) * ((((((struct o3C_float *)((0x18C + (0x1A4 + a4))))->v)) + ((((struct o3C_float *)((0x108 + (0x1A4 + a4))))->v))));
    u471 = (u468 * ((((struct o14C_float *)(a4))->v)));
    (((struct o1A0_ushort *)(a4))->v) = (int)((float)((((struct o1A0_short *)(a4))->v)) - ((u471 * 10430.2275f)));
    (((struct o1A0_ushort *)(a4))->v) = (int)((float)((((struct o1A0_short *)(a4))->v)) * 0.870000005f);
    u474 = (((struct o3C_float *)((0x84 + (0x1A4 + a4))))->v);
    u475 = (((struct o3C_float *)((0x18C + (0x1A4 + a4))))->v);
    t476 = (((struct o70_int *)(a4))->v);
    *(unsigned int *)(((int)stk + 0)) = t476;
    u480 = *(float *)((t476 + 0x0));
    u482 = ((u474 + u475) * ((((struct oC_float *)(t476))->v)));
    u482 = u482 + u480 * ((((((struct o3C_float *)((0x1A4 + a4)))->v)) + ((((struct o3C_float *)((0x108 + (0x1A4 + a4))))->v))));
    u485 = (u482 * ((((struct o154_float *)(a4))->v)));
    (((struct o19E_ushort *)(a4))->v) = (int)((float)((((struct o19E_short *)(a4))->v)) + ((u485 * 10430.2275f)));
    (((struct o19E_ushort *)(a4))->v) = (int)((float)((((struct o19E_short *)(a4))->v)) * 0.870000005f);
    return u480;
}

int FUN_0c054504(void)
{
    int t0;
    register int t1;
    register int t2;
    int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    register int t12;
    register int t13;
    register float u0;

    t0 = (((struct o28_int *)0xC2B2DAC)->v);
    t1 = (((struct o24_int *)0xC2B2DAC)->v);
    if ((int)t0 > 0) {
        if ((int)t0 < (int)0x64) {
            (((struct o24_uint *)0xC2B2DAC)->v) = (((((struct o24_int *)0xC2B2DAC)->v)) + 0x1);
            (((struct o2C_uint *)0xC2B2DAC)->v) = (((((struct o2C_int *)0xC2B2DAC)->v)) - 1);
        } else {
            t2 = (int)((int)t0 / (int)0x50);
            (((struct o24_uint *)0xC2B2DAC)->v) = (((((struct o24_int *)0xC2B2DAC)->v)) + t2);
            (((struct o2C_uint *)0xC2B2DAC)->v) = (((((struct o2C_int *)0xC2B2DAC)->v)) - t2);
        }
        if ((int)((((struct o2C_int *)0xC2B2DAC)->v)) < 0) {
            (((struct o2C_uint *)0xC2B2DAC)->v) = 0x0;
        }
        if ((int)((((struct o24_int *)0xC2B2DAC)->v)) >= (int)(*(int *)0xC1ECCC8)) {
            (((struct o28_uint *)0xC2B2DAC)->v) = 0x0;
            (((struct o24_uint *)0xC2B2DAC)->v) = (*(int *)0xC1ECCC8);
            FUN_0c058ca6(0x1204A9, 0x0);
        } else {
            t2 = t0;
            t0 = 0xC1ECCA8;
            t3 = 0xC2B2DD4;
        }
        t4 = t2;
        t2 = t0;
        t0 = t3;
    } else {
        t3 = *(int *)0xC1ECCC8;
        if ((int)t3 > (int)t1) {
            (((struct o28_uint *)0xC2B2DAC)->v) = (t3 - t1);
            FUN_0c058ca6(0x1104A9, 0x0);
        } else {
            t1 = t3;
            t3 = 0xC1ECCA8;
            t5 = 0xC2B2DD4;
        }
        t4 = t1;
        t2 = t3;
        t0 = t5;
    }
    t1 = (((struct o24_int *)0xC2B2DAC)->v);
    if (((((struct o3C_int *)0xC2B2DAC)->v)) != 0) {
        t3 = (((struct o38_int *)0xC2B2DAC)->v);
        t5 = 0xC10CD3C;
        if (((int)t3 > (int)0x1) && (t3 != 3)) {
            t5 = 0xC10CD74;
        }
        (((struct o8_float *)0xC2B2E3C)->v) = (((((struct o4_float *)0xC2B2DAC)->v)) + 52.0f);
        t3 = (int)((int)((int)((int)t1 / (int)0x989680)) % (int)0xA);
        if ((0x0 == 0) && (t3 == 0)) {
            (((struct o0_uint *)0xC2B2E3C)->v) = (*(int *)((t5 + 0x30)));
            t6 = 0x0;
        } else {
            (((struct o0_uint *)0xC2B2E3C)->v) = (*(int *)((t5 + (t3 << 2))));
            t6 = 0x1;
        }
        (((struct o4_float *)0xC2B2E3C)->v) = (((((struct o0_float *)0xC2B2DAC)->v)) + 480.0f);
        t3 = ((int (*)(int, int, int, int))(FUN_0c07ada0))(0xC2B2E3C, t4, t2, t0);
        t3 = (int)((int)((int)((int)t1 / (int)0xF4240)) % (int)0xA);
        t7 = t6;
        if ((t6 != 0) || (t3 != 0)) {
            (((struct o0_uint *)0xC2B2E3C)->v) = (*(int *)((t5 + (t3 << 2))));
            t7 = 0x1;
        }
        (((struct o4_float *)0xC2B2E3C)->v) = (((((struct o0_float *)0xC2B2DAC)->v)) + 496.0f);
        t3 = ((int (*)(int))(FUN_0c07ada0))(0xC2B2E3C);
        t3 = (int)((int)((int)((int)t1 / (int)0x186A0)) % (int)0xA);
        t6 = t7;
        if ((t7 != 0) || (t3 != 0)) {
            (((struct o0_uint *)0xC2B2E3C)->v) = (*(int *)((t5 + (t3 << 2))));
            t6 = 0x1;
        }
        (((struct o4_float *)0xC2B2E3C)->v) = (((((struct o0_float *)0xC2B2DAC)->v)) + 512.0f);
        t3 = ((int (*)(int))(FUN_0c07ada0))(0xC2B2E3C);
        t3 = (int)((int)((int)((int)t1 / (int)0x2710)) % (int)0xA);
        t7 = t6;
        if ((t6 != 0) || (t3 != 0)) {
            (((struct o0_uint *)0xC2B2E3C)->v) = (*(int *)((t5 + (t3 << 2))));
            t7 = 0x1;
        }
        (((struct o4_float *)0xC2B2E3C)->v) = (((((struct o0_float *)0xC2B2DAC)->v)) + 536.0f);
        t3 = ((int (*)(int))(FUN_0c07ada0))(0xC2B2E3C);
        t3 = (int)((int)((int)((int)t1 / (int)0x3E8)) % (int)0xA);
        if ((t7 != 0) || (t3 != 0)) {
            (((struct o0_uint *)0xC2B2E3C)->v) = (*(int *)((t5 + (t3 << 2))));
        }
        (((struct o4_float *)0xC2B2E3C)->v) = (((((struct o0_float *)0xC2B2DAC)->v)) + 552.0f);
        t3 = ((int (*)(int))(FUN_0c07ada0))(0xC2B2E3C);
        (((struct o4_float *)0xC2B2E3C)->v) = (((((struct o0_float *)0xC2B2DAC)->v)) + 568.0f);
        (((struct o0_uint *)0xC2B2E3C)->v) = (*(int *)((t5 + (((int)((int)((int)((int)t1 / (int)0x64)) % (int)0xA)) << 2))));
        t3 = ((int (*)(int))(FUN_0c07ada0))(0xC2B2E3C);
        (((struct o4_float *)0xC2B2E3C)->v) = (((((struct o0_float *)0xC2B2DAC)->v)) + 592.0f);
        (((struct o0_uint *)0xC2B2E3C)->v) = (*(int *)((t5 + (((int)((int)((int)((int)t1 / (int)0xA)) % (int)0xA)) << 2))));
        t3 = ((int (*)(int))(FUN_0c07ada0))(0xC2B2E3C);
        (((struct o4_float *)0xC2B2E3C)->v) = (((((struct o0_float *)0xC2B2DAC)->v)) + 608.0f);
        (((struct o0_uint *)0xC2B2E3C)->v) = (*(int *)((t5 + (((int)((int)t1 % (int)0xA)) << 2))));
        t3 = ((int (*)(int))(FUN_0c07ada0))(0xC2B2E3C);
        (((struct o4_float *)0xC2B2E3C)->v) = (((((struct o0_float *)0xC2B2DAC)->v)) + ((((struct o0_float *)0xC054C64)->v)));
        if ((int)t1 >= (int)0x186A0) {
            (((struct o0_uint *)0xC2B2E3C)->v) = (*(int *)((t5 + 0x2C)));
        } else {
            (((struct o0_uint *)0xC2B2E3C)->v) = (*(int *)((t5 + 0x34)));
        }
        t1 = ((int (*)(int))(FUN_0c07ada0))(0xC2B2E3C);
        (((struct o4_float *)0xC2B2E3C)->v) = (((((struct o0_float *)0xC2B2DAC)->v)) + ((((struct o8_float *)0xC054C64)->v)));
        (((struct o0_uint *)0xC2B2E3C)->v) = (*(int *)((t5 + 0x28)));
        t1 = ((int (*)(int))(FUN_0c07ada0))(0xC2B2E3C);
        (((struct o4_float *)0xC2B2E3C)->v) = (((((struct o0_float *)0xC2B2DAC)->v)) + ((((struct oC_float *)0xC054C64)->v)));
        (((struct o0_uint *)0xC2B2E3C)->v) = 0x149;
        t1 = (((int (*)(int))(FUN_0c07ada0))(0xC2B2E3C));
    } else {
        t3 = (((struct o1C_int *)0xC2B2DAC)->v);
        if ((int)t3 < (int)0xB4) {
            t5 = t4;
            t6 = t2;
            t7 = t0;
            if ((int)t3 > (int)0x32) {
                if (((int)((int)t3 % (int)0x28)) == 0) {
                    FUN_0c058ca6(0xD04A9, 0x0);
                } else {
                    t8 = t4;
                    t9 = t2;
                    t10 = t0;
                }
                t5 = t8;
                t6 = t9;
                t7 = t10;
            }
            t8 = 0xC10CD74;
            if ((int)((((struct o1C_int *)0xC2B2DAC)->v)) >= (int)0x3C) {
                t9 = 0xC10CD3C;
                if ((int)((((struct o1C_int *)0xC2B2DAC)->v)) >= (int)0x50) {
                    t10 = 0xC10CD74;
                    if ((int)((((struct o1C_int *)0xC2B2DAC)->v)) >= (int)0x64) {
                        t11 = 0xC10CD3C;
                        if ((int)((((struct o1C_int *)0xC2B2DAC)->v)) >= (int)0x78) {
                            t12 = 0xC10CD74;
                            if ((int)((((struct o1C_int *)0xC2B2DAC)->v)) >= (int)0x8C) {
                                t13 = 0xC10CD74;
                                if ((int)((((struct o1C_int *)0xC2B2DAC)->v)) < (int)0xA0) {
                                    t13 = 0xC10CD3C;
                                }
                                t12 = t13;
                            }
                            t11 = t12;
                        }
                        t10 = t11;
                    }
                    t9 = t10;
                }
                t8 = t9;
            }
            t9 = 0x54C5638;
            t10 = t5;
            t5 = t6;
            t6 = t7;
            t7 = t8;
        } else {
            t8 = t4;
            t11 = t2;
            t12 = t0;
            if (((int)t3 < (int)0x136) && ((int)t3 >= (int)0xDC)) {
                if (((int)((int)t3 % (int)0xA)) == 0) {
                    FUN_0c058ca6(0xC04A9, 0x0);
                } else {
                    t3 = t4;
                    t4 = t2;
                    t2 = t0;
                }
                t8 = t3;
                t11 = t4;
                t12 = t2;
            }
            t0 = (((struct o1C_int *)0xC2B2DAC)->v);
            t2 = 0x34FB5E38;
            if ((int)t0 < (int)0xDC) {
            } else {
                t3 = 0x34FB5E30;
                if ((int)t0 < (int)0xE6) {
                } else {
                    t4 = 0x34FB5DE0;
                    if ((int)t0 < (int)0xF0) {
                    } else {
                        t13 = 0x34FB5AC0;
                        if ((int)t0 < (int)0xFA) {
                        } else {
                            t13 = 0x34FB3B80;
                            if ((int)t0 < (int)0x104) {
                            } else {
                                t13 = 0x34FA0300;
                                if ((int)t0 < (int)0x10E) {
                                } else {
                                    t13 = 0x34EDCE00;
                                    if ((int)t0 < (int)0x118) {
                                    } else {
                                        t13 = 0x3473BC00;
                                        if ((int)t0 < (int)0x122) {
                                        } else {
                                            t13 = 0x0;
                                            if ((int)t0 < (int)0x12C) {
                                                t13 = 0x2FAF0800;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        t4 = t13;
                    }
                    t3 = t4;
                }
                t2 = t3;
            }
            t9 = t2;
            t10 = t8;
            t5 = t11;
            t6 = t12;
            t7 = 0xC10CDAC;
        }
        (((struct o8_float *)0xC2B2E3C)->v) = (((((struct o4_float *)0xC2B2DAC)->v)) + 52.0f);
        (((struct o10_float *)0xC2B2E3C)->v) = ((((struct o10_float *)0xC2B2DAC)->v));
        t0 = (int)((int)((int)((int)t9 / (int)0x989680)) % (int)0xA);
        if ((0x0 == 0) && (t0 == 0)) {
            (((struct o0_uint *)0xC2B2E3C)->v) = (*(int *)((t7 + 0x30)));
            t2 = 0x0;
        } else {
            (((struct o0_uint *)0xC2B2E3C)->v) = (*(int *)((t7 + (t0 << 2))));
            t2 = 0x1;
        }
        (((struct o4_float *)0xC2B2E3C)->v) = ((((((struct o0_float *)0xC2B2DAC)->v)) - ((((((struct o10_float *)0xC2B2DAC)->v)) * 32.0f))) + 512.0f);
        t0 = ((int (*)(int, int, int, int))(FUN_0c07ada0))(0xC2B2E3C, t10, t5, t6);
        t0 = (int)((int)((int)((int)t9 / (int)0xF4240)) % (int)0xA);
        t3 = t2;
        if ((t2 != 0) || (t0 != 0)) {
            (((struct o0_uint *)0xC2B2E3C)->v) = (*(int *)((t7 + (t0 << 2))));
            t3 = 0x1;
        }
        (((struct o4_float *)0xC2B2E3C)->v) = ((((((struct o0_float *)0xC2B2DAC)->v)) - ((((((struct o10_float *)0xC2B2DAC)->v)) * 16.0f))) + 512.0f);
        t0 = ((int (*)(int))(FUN_0c07ada0))(0xC2B2E3C);
        t0 = (int)((int)((int)((int)t9 / (int)0x186A0)) % (int)0xA);
        t2 = t3;
        if ((t3 != 0) || (t0 != 0)) {
            (((struct o0_uint *)0xC2B2E3C)->v) = (*(int *)((t7 + (t0 << 2))));
            t2 = 0x1;
        }
        u0 = ((((struct o0_float *)0xC2B2DAC)->v));
        u0 = u0 + 0.0f * ((((struct o10_float *)0xC2B2DAC)->v));
        (((struct o4_float *)0xC2B2E3C)->v) = (u0 + 512.0f);
        t0 = ((int (*)(int))(FUN_0c07ada0))(0xC2B2E3C);
        t0 = (int)((int)((int)((int)t9 / (int)0x2710)) % (int)0xA);
        t3 = t2;
        if ((t2 != 0) || (t0 != 0)) {
            (((struct o0_uint *)0xC2B2E3C)->v) = (*(int *)((t7 + (t0 << 2))));
            t3 = 0x1;
        }
        u0 = ((((struct o0_float *)0xC2B2DAC)->v));
        u0 = u0 + 24.0f * ((((struct o10_float *)0xC2B2DAC)->v));
        (((struct o4_float *)0xC2B2E3C)->v) = (u0 + 512.0f);
        t0 = ((int (*)(int))(FUN_0c07ada0))(0xC2B2E3C);
        t0 = (int)((int)((int)((int)t9 / (int)0x3E8)) % (int)0xA);
        if ((t3 != 0) || (t0 != 0)) {
            (((struct o0_uint *)0xC2B2E3C)->v) = (*(int *)((t7 + (t0 << 2))));
        }
        u0 = ((((struct o0_float *)0xC2B2DAC)->v));
        u0 = u0 + 40.0f * ((((struct o10_float *)0xC2B2DAC)->v));
        (((struct o4_float *)0xC2B2E3C)->v) = (u0 + 512.0f);
        t0 = ((int (*)(int))(FUN_0c07ada0))(0xC2B2E3C);
        u0 = ((((struct o0_float *)0xC2B2DAC)->v));
        u0 = u0 + 56.0f * ((((struct o10_float *)0xC2B2DAC)->v));
        (((struct o4_float *)0xC2B2E3C)->v) = (u0 + 512.0f);
        (((struct o0_uint *)0xC2B2E3C)->v) = (*(int *)((t7 + (((int)((int)((int)((int)t9 / (int)0x64)) % (int)0xA)) << 2))));
        t0 = ((int (*)(int))(FUN_0c07ada0))(0xC2B2E3C);
        u0 = ((((struct o0_float *)0xC2B2DAC)->v));
        u0 = u0 + 80.0f * ((((struct o10_float *)0xC2B2DAC)->v));
        (((struct o4_float *)0xC2B2E3C)->v) = (u0 + 512.0f);
        (((struct o0_uint *)0xC2B2E3C)->v) = (*(int *)((t7 + (((int)((int)((int)((int)t9 / (int)0xA)) % (int)0xA)) << 2))));
        t0 = ((int (*)(int))(FUN_0c07ada0))(0xC2B2E3C);
        u0 = ((((struct o0_float *)0xC2B2DAC)->v));
        u0 = u0 + 96.0f * ((((struct o10_float *)0xC2B2DAC)->v));
        (((struct o4_float *)0xC2B2E3C)->v) = (u0 + 512.0f);
        (((struct o0_uint *)0xC2B2E3C)->v) = (*(int *)((t7 + (((int)((int)t9 % (int)0xA)) << 2))));
        t0 = ((int (*)(int))(FUN_0c07ada0))(0xC2B2E3C);
        u0 = ((((struct o0_float *)0xC2B2DAC)->v));
        u0 = u0 + 12.0f * ((((struct o10_float *)0xC2B2DAC)->v));
        (((struct o4_float *)0xC2B2E3C)->v) = (u0 + 512.0f);
        (((struct o0_uint *)0xC2B2E3C)->v) = (*(int *)((t7 + 0x2C)));
        t0 = ((int (*)(int))(FUN_0c07ada0))(0xC2B2E3C);
        u0 = ((((struct o0_float *)0xC2B2DAC)->v));
        u0 = u0 + 68.0f * ((((struct o10_float *)0xC2B2DAC)->v));
        (((struct o4_float *)0xC2B2E3C)->v) = (u0 + 512.0f);
        (((struct o0_uint *)0xC2B2E3C)->v) = (*(int *)((t7 + 0x28)));
        t0 = ((int (*)(int))(FUN_0c07ada0))(0xC2B2E3C);
        (((struct o4_float *)0xC2B2E3C)->v) = ((((((struct o0_float *)0xC2B2DAC)->v)) - ((((((struct o10_float *)0xC2B2DAC)->v)) * 72.0f))) + 512.0f);
        (((struct o0_uint *)0xC2B2E3C)->v) = 0x149;
        t0 = ((int (*)(int))(FUN_0c07ada0))(0xC2B2E3C);
        (((struct o10_float *)0xC2B2E3C)->v) = 1.0f;
        t1 = 0x10;
    }
    return t1;
}

int FUN_0c013b2c(int a4, float f4)
{
    int stk[46];
    register int t9;
    register int t11;
    register int t13;
    register int t14;
    register int t15;
    register float u16;
    register float u20;
    register float u21;
    register float u22;
    register float u26;
    register int t38;
    register float u41;
    register float u44;
    register float u46;
    register float u47;
    register float u51;
    register int t94;
    register float u95;
    int t96;
    register int t104;
    register float u105;
    int t106;
    register float u125;
    register float u130;
    register float u200;
    register float u201;
    register int t253;
    register int t254;
    register int t255;
    register int t257;
    register int t259;
    register int t262;
    register int t263;
    register int t264;
    register float u265;
    register float u266;
    register int t267;
    register int t285;
    register float t286;
    register float u339;
    register float u350;
    register float u341;
    register float u342;
    register float u352;
    register float u353;
    register int t374;
    register float u383;
    register float u355;
    register float u368;
    register float u371;
    register float u373;
    int t10;
    register int t12;
    register int t40;
    register int t61;
    register int t49;
    register float u230;
    register float u233;
    register float u85;
    register float u88;
    register float u183;
    register float u212;
    register int t279;
    register float u280;
    register float u345;
    register float u343;

    *(unsigned int *)(((int)stk + 8)) = 0x0;
    *(unsigned int *)(((int)stk + 36)) = 0x0;
    *(unsigned int *)(((int)stk + 28)) = 0x0;
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    *(unsigned int *)0xC175C88 = 0xFFFFFFFF;
    nlPushMatrix(0x0);
    FUN_0c0739a0((a4 + 0x7C));
    nlRotateAY((unsigned short)((((struct o8A_short *)(a4))->v)));
    nlRotateAX((unsigned short)((((struct o88_short *)(a4))->v)));
    nlRotateAZ((unsigned short)((((struct o8C_short *)(a4))->v)));
    *(unsigned int *)(((int)stk + 20)) = (0x1A4 + a4);
    *(unsigned int *)(((int)stk + 32)) = (((int)stk + 4) + 0x54);
    *(unsigned int *)(((int)stk + 16)) = (((int)stk + 4) + 0x54);
    t14 = (((struct o70_int *)(a4))->v);
    *(unsigned int *)(((int)stk + 24)) = 0x4;
    t9 = 0xC013C88;
    t11 = (0x1A4 + a4);
    t13 = t12;
    t15 = (0x84 + ((int)stk + 4));
    u16 = 0.0f;
    for (;;) {
        if ((*(int *)(((int)stk + 24))) != 0) {
            t9 = 0x30;
            t13 = 0xC1EC6A4;
            *(float *)0xC1EC6A4 = (*(float *)((t14 + 0x0)));
            u20 = *(float *)(((*(int *)(((int)stk + 20))) + t9));
            t9 = 0x130;
            u21 = *(float *)((a4 + t9));
            t9 = 0xC013C90;
            u22 = *(float *)((t9 + 0x0));
            t9 = 0x4;
            *(float *)((0xC1EC6A4 + t9)) = ((u21 - u20) + u22);
            t9 = 0x8;
            *(float *)((0xC1EC6A4 + t9)) = (*(float *)((t14 + t9)));
            t9 = (FUN_0c072230(t13, t15));
            t9 = 0xC013C98;
            *(float *)0xC1EC6A4 = (*(float *)((t14 + 0x0)));
            u26 = *(float *)((t9 + 0x0));
            t9 = 0x4;
            t13 = 0xC1EC6A4;
            *(float *)((0xC1EC6A4 + t9)) = u26;
            t9 = 0x8;
            *(float *)((0xC1EC6A4 + t9)) = (*(float *)((t14 + t9)));
            t9 = (FUN_0c072230(t13, (*(int *)(((int)stk + 16)))));
            t9 = 0xC013C9C;
            t13 = t15;
            t9 = (FUN_0c029b12(t13, (*(float *)((t9 + 0x0)))));
            t13 = t9;
            t9 = (*(int *)((t13 + 0x1C)));
            if (t9 != -1) {
                t9 = (*(int *)0xC175C88);
                t38 = t9 == -1;
                t9 = 0x4;
                if (t38) {
                    t11 = (*(int *)((t13 + 0x1C)));
                    *(unsigned int *)0xC175C88 = t11;
                    t40 = t11;
                }
                u41 = *(float *)((t15 + t9));
                t11 = t40;
                t9 = 0x18;
                if ((*(float *)((t13 + t9))) > u41) {
                    t9 = 0x4;
                    t11 = (*(int *)(((int)stk + 4)));
                    t11 = (t11 + 0x1);
                    *(unsigned int *)(((int)stk + 4)) = t11;
                    u44 = *(float *)((t15 + t9));
                    t9 = 0x18;
                    if (((*(float *)((t13 + t9))) - u44) > u16) {
                        t9 = 0x4;
                        u46 = *(float *)((t15 + t9));
                        t9 = 0x18;
                        u47 = *(float *)((t13 + t9));
                        t9 = 0xC013CA4;
                        if (!((*(float *)((t9 + 0x0))) > ((u47 - u46) + 1.0f)) && (t10 = 0xC118704, t11 = 0x14, t49 = *(int *)((t10 + 0x0)), (int)t49 <= (int)t11)) {
                            t11 = (*(int *)0xC118704);
                            t11 = (t11 + 0x1);
                            *(unsigned int *)0xC118704 = t11;
                            t61 = t10;
                        } else {
                            t9 = 0x4;
                            u51 = *(float *)((t15 + t9));
                            t9 = 0x18;
                            u16 = ((*(float *)((t13 + t9))) - u51);
                            u16 = (u16 + 1.0f);
                            *(unsigned int *)0xC118704 = 0x0;
                        }
                    }
                }
                t9 = 0x4;
                t10 = t61;
                *(float *)0xC1EC6A4 = 0.0f;
                *(float *)((0xC1EC6A4 + t9)) = 35.0f;
                t9 = 0x8;
                *(float *)((0xC1EC6A4 + t9)) = 0.0f;
                t9 = 0xC013DB0;
                t13 = t15;
                t9 = (FUN_0c0297f4(t13, 0xC1EC6A4, (*(float *)((t9 + 0x0)))));
                t13 = t9;
                t9 = (*(int *)((t13 + 0x1C)));
                if (t9 == 22) {
                    *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x1);
                }
            } else {
                t10 = (*(int *)(((int)stk + 28)));
                t10 = (t10 + 0x1);
                *(unsigned int *)(((int)stk + 28)) = t10;
            }
            t10 = 0x84;
            t14 = (t14 + 0xC);
            t15 = (t15 + 0xC);
            *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + 0xC);
            t11 = (*(int *)(((int)stk + 20)));
            t11 = (t11 + t10);
            *(unsigned int *)(((int)stk + 20)) = t11;
            t10 = (*(int *)(((int)stk + 24)));
            t10 = (t10 - 1);
            *(unsigned int *)(((int)stk + 24)) = t10;
            continue;
        }
        break;
    }
    nlPopMatrix(0x1);
    if ((int)(*(int *)(((int)stk + 4))) > 0) {
        if ((int)(*(int *)(((int)stk + 8))) < (int)0x3) {
            (((struct o19E_ushort *)(a4))->v) = 0x0;
            (((struct o19C_ushort *)(a4))->v) = 0x0;
            (((struct o1A0_ushort *)(a4))->v) = 0x0;
            (((struct o104_float *)(a4))->v) = (((((struct o104_float *)(a4))->v)) * 0.100000001f);
            (((struct o160_float *)(a4))->v) = (((((struct o160_float *)(a4))->v)) * 0.100000001f);
            u85 = u16;
            u88 = 0.100000001f;
        } else {
            *(unsigned int *)(((int)stk + 4)) = 0x0;
            u85 = 0.0f;
        }
        u230 = u85;
        u233 = u88;
    } else {
        nlGetAverageVector((*(int *)(((int)stk + 32))), (((int)stk + 4) + 0x60), (((int)stk + 4) + 0x48), 0.5f, 0.5f);
        nlGetAverageVector((((int)stk + 4) + 0x6C), (((int)stk + 4) + 0x78), (((int)stk + 4) + 0x3C), 0.5f, 0.5f);
        nlSubVector3op((((int)stk + 4) + 0x30), (((int)stk + 4) + 0x3C), (((int)stk + 4) + 0x48));
        t94 = FUN_0c0297f4((((int)stk + 4) + 0x48), (((int)stk + 4) + 0x30), 0.0f);
        u95 = (((struct o18_float *)(t94))->v);
        t96 = *(int *)((t94 + 0x1C));
        if (t96 == 22) {
            if ((int)(*(int *)(((int)stk + 8))) > 0) {
                (((struct o1A0_ushort *)(a4))->v) = 0xFFFFFC00;
            } else {
                (((struct o1A0_ushort *)(a4))->v) = 0xFFFFFE00;
            }
            (((struct o104_float *)(a4))->v) = (((((struct o104_float *)(a4))->v)) + 0.0879999995f);
        } else {
            nlSubVector3op((((int)stk + 4) + 0x24), (((int)stk + 4) + 0x48), (((int)stk + 4) + 0x3C));
            t104 = FUN_0c0297f4((((int)stk + 4) + 0x3C), (((int)stk + 4) + 0x24), 0.0f);
            u105 = (((struct o18_float *)(t104))->v);
            t106 = *(int *)((t104 + 0x1C));
            if (t106 == 22) {
                if ((int)(*(int *)(((int)stk + 8))) > 0) {
                    (((struct o1A0_ushort *)(a4))->v) = 0x400;
                } else {
                    (((struct o1A0_ushort *)(a4))->v) = 0x200;
                }
                (((struct o104_float *)(a4))->v) = (((((struct o104_float *)(a4))->v)) + 0.0879999995f);
            } else {
                if ((t96 != 2) && (t96 != 6)) {
                    if ((t106 == 2) || (t106 == 6)) {
                        (((struct o160_float *)(a4))->v) = (((((struct o160_float *)(a4))->v)) - (1.0f + 1.0f));
                        *(unsigned int *)(((int)stk + 36)) = 0x1;
                        (((struct o1A0_ushort *)(a4))->v) = (int)(-512.0f - (((1.0f - u105) * 512.0f)));
                        (((struct o104_float *)(a4))->v) = (((((struct o104_float *)(a4))->v)) + (((1.79999995f - u105) * 0.109999999f)));
                    }
                } else {
                    if ((t106 != 2) && (t106 != 6)) {
                        (((struct o160_float *)(a4))->v) = (((((struct o160_float *)(a4))->v)) + (1.0f + 1.0f));
                        (((struct o1A0_ushort *)(a4))->v) = (int)((((1.0f - u95) * 512.0f)) + 512.0f);
                        u125 = ((((struct o104_float *)(a4))->v));
                        u125 = u125 + 0.109999999f * ((1.79999995f - u95));
                        (((struct o104_float *)(a4))->v) = u125;
                    } else {
                        if (u105 > u95) {
                            (((struct o160_float *)(a4))->v) = (((((struct o160_float *)(a4))->v)) - (1.0f + 1.0f));
                            (((struct o1A0_ushort *)(a4))->v) = (int)(-512.0f - (((1.0f - u95) * 512.0f)));
                            u130 = ((((struct o104_float *)(a4))->v));
                            u130 = u130 + 0.109999999f * ((1.79999995f - u95));
                            (((struct o104_float *)(a4))->v) = u130;
                        } else {
                            (((struct o160_float *)(a4))->v) = (((((struct o160_float *)(a4))->v)) + (1.0f + 1.0f));
                            (((struct o1A0_ushort *)(a4))->v) = (int)((((1.0f - u105) * 512.0f)) + 512.0f);
                            (((struct o104_float *)(a4))->v) = (((((struct o104_float *)(a4))->v)) + (((1.79999995f - u105) * 0.109999999f)));
                        }
                    }
                    *(unsigned int *)(((int)stk + 36)) = 0x1;
                }
            }
            u183 = u105;
        }
        if ((*(int *)(((int)stk + 36))) != 0) {
            FUN_0c072150((unsigned short)((((struct oF8_short *)(a4))->v)), (0x100 + a4), (0x108 + a4));
            (((struct o100_float *)(a4))->v) = (((((struct o100_float *)(a4))->v)) * ((((struct o160_float *)(a4))->v)));
            (((struct o108_float *)(a4))->v) = (((((struct o108_float *)(a4))->v)) * ((((struct o160_float *)(a4))->v)));
            FUN_0c07ff00();
            u200 = (1.0f / (((((struct o130_float *)(a4))->v)) * 6.28299999f));
            u201 = (((((struct o160_float *)(a4))->v)) * u200);
            (((struct o164_float *)(a4))->v) = (u201 * 3600.0f);
        } else {
            u212 = u183;
        }
        u230 = u16;
        u233 = u212;
    }
    if ((*(int *)(((int)stk + 4))) == 0) {
        *(unsigned int *)0xC118704 = 0x0;
    }
    if (u230 > 0.0f) {
        *(unsigned int *)0xC118704 = 0x0;
        (((struct o80_float *)(a4))->v) = (((((struct o80_float *)(a4))->v)) + u230);
        (((struct o94_float *)(a4))->v) = ((((struct o80_float *)(a4))->v));
    }
    if ((int)(*(int *)(((int)stk + 28))) <= (int)0x3) {
    } else {
        t253 = (((struct o0_int *)0xC1EC71C)->v);
        t254 = (((struct o8_int *)0xC1EC71C)->v);
        t255 = (((struct o4_int *)0xC1EC71C)->v);
        if (t253 == 2) {
            t257 = ((int (*)(int, int, float))(FUN_0c0468aa))((t255 + t254), (a4 + 0x7C), u233);
        } else {
            if (t253 != 1) {
                t259 = ((int (*)(int, int, float))(FUN_0c0468aa))((t255 + t254), (a4 + 0x7C), u233);
            } else {
                if ((int)(*(int *)0xC175C88) >= (int)0x11) {
                    t262 = (FUN_0c07ff00());
                    t263 = 0x0;
                    t264 = 0x0;
                    u265 = f4;
                    u266 = 99999.8984f;
                    for (;;) {
                        if ((unsigned int)t264 >= (unsigned int)0x18) {
                            break;
                        }
                        *(int *)((int)stk + 0) = (((int)stk + 4) + 0x48);
                        t267 = *(int *)0xC2ADA7C;
                        *(unsigned int *)(((int)stk + 4)) = ((t267 + t264) + 0xF84);
                        u265 = (FUN_0c0469e2(0x0, (*(int *)(((*(int *)(((int)stk + 4))) + 0x0))), (*(int *)(((*(int *)((((t267 + t264) + 0xF84) + 0x4))) + 0x0))), (((int)stk + 0) + 0xC), (((int)stk + 4) + 0x48)));
                        if (u266 > u265) {
                            t262 = (*(int *)(((int)stk + 12)));
                            u266 = u265;
                            *(volatile int *)(((((*(int *)0xC2ADA7C) + t263) + 0xF84) + 0x0));
                            t262 = 0xC;
                            t262 = (FUN_0c07ff00());
                            t279 = t262;
                        } else {
                            u280 = u265;
                        }
                        u265 = u280;
                        t262 = t279;
                        t264 = (t264 + 0xC);
                        t263 = (t263 + 0xC);
                    }
                } else {
                    FUN_0c07ff00();
                    t285 = ((int (*)(int, int))(FUN_0c0468aa))((((((struct o4_int *)0xC1EC71C)->v)) + ((((struct o8_int *)0xC1EC71C)->v))), (((int)stk + 4) + 0x48));
                    t286 = nlLength((((int)stk + 4) + 0x48), (a4 + 0x7C));
                    if (t286 > 99999.8984f) {
                        FUN_0c07ff00();
                    } else {
                        FUN_0c07ff00();
                    }
                }
            }
        }
        (((struct o80_float *)(a4))->v) = (((((struct o80_float *)(a4))->v)) + 30.0f);
        FUN_0c07ff00();
        (((struct o164_float *)(a4))->v) = 0.0f;
        (((struct o160_float *)(a4))->v) = 0.0f;
        FUN_0c07ff00();
        FUN_0c07ff00();
    }
    u339 = (((struct o104_float *)(a4))->v);
    u350 = _builtin_fabsf(u339);
    if (_builtin_fabsf(u339) > 16.5f) {
        u341 = (((struct o104_float *)(a4))->v);
        if (u341 > 18.0f) {
            (((struct o104_float *)(a4))->v) = 18.0f;
            u345 = u341;
        } else {
            if (-18.0f > u341) {
                (((struct o104_float *)(a4))->v) = -18.0f;
                u343 = u341;
            } else {
                u342 = (((struct o104_float *)(a4))->v);
                (((struct o104_float *)(a4))->v) = (u342 * 0.850000024f);
                u343 = (u342 * 0.850000024f);
            }
            u345 = u343;
        }
        (((struct o110_float *)(a4))->v) = ((((struct o104_float *)(a4))->v));
        u350 = u345;
    }
    u352 = (((struct o160_float *)(a4))->v);
    u353 = (((struct o0_float *)0xC014284)->v);
    t374 = 0xC014284;
    u383 = _builtin_fabsf(u352);
    if (_builtin_fabsf(u352) > u353) {
        u355 = (((struct o160_float *)(a4))->v);
        if (u355 > 18.0f) {
            (((struct o160_float *)(a4))->v) = 18.0f;
        } else {
            if (-18.0f > u355) {
                (((struct o160_float *)(a4))->v) = -18.0f;
            } else {
                (((struct o160_float *)(a4))->v) = (((((struct o160_float *)(a4))->v)) * 0.850000024f);
            }
        }
        FUN_0c072150((unsigned short)((((struct oF8_short *)(a4))->v)), (0x100 + a4), (0x108 + a4));
        (((struct o100_float *)(a4))->v) = (((((struct o100_float *)(a4))->v)) * ((((struct o160_float *)(a4))->v)));
        (((struct o108_float *)(a4))->v) = (((((struct o108_float *)(a4))->v)) * ((((struct o160_float *)(a4))->v)));
        FUN_0c07ff00();
        u368 = (((struct oC_float *)0xC014284)->v);
        u371 = (1.0f / (((((struct o130_float *)(a4))->v)) * u368));
        u373 = (((((struct o160_float *)(a4))->v)) * u371);
        (((struct o164_float *)(a4))->v) = (u373 * ((((struct o10_float *)0xC014284)->v)));
        t374 = 0x164;
        u383 = u368;
    }
    return t374;
}
