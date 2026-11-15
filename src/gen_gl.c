/* Straight-line functions with calls and guards (batch gen_gl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o100_float { char p[0x100]; float v; };
struct o104_float { char p[0x104]; float v; };
struct o108_float { char p[0x108]; float v; };
struct o110_float { char p[0x110]; float v; };
struct o130_float { char p[0x130]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o160_float { char p[0x160]; float v; };
struct o164_float { char p[0x164]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o19C_ushort { char p[0x19C]; unsigned short v; };
struct o19E_ushort { char p[0x19E]; unsigned short v; };
struct o1A0_ushort { char p[0x1A0]; unsigned short v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_float { char p[0x20]; float v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o34_short { char p[0x34]; short v; };
struct o34_ushort { char p[0x34]; unsigned short v; };
struct o36_short { char p[0x36]; short v; };
struct o36_ushort { char p[0x36]; unsigned short v; };
struct o38_short { char p[0x38]; short v; };
struct o38_ushort { char p[0x38]; unsigned short v; };
struct o3A_short { char p[0x3A]; short v; };
struct o3A_ushort { char p[0x3A]; unsigned short v; };
struct o3C_float { char p[0x3C]; float v; };
struct o3C_short { char p[0x3C]; short v; };
struct o3C_ushort { char p[0x3C]; unsigned short v; };
struct o3E_short { char p[0x3E]; short v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_short { char p[0x5C]; short v; };
struct o5C_ushort { char p[0x5C]; unsigned short v; };
struct o5E_short { char p[0x5E]; short v; };
struct o5E_ushort { char p[0x5E]; unsigned short v; };
struct o60_short { char p[0x60]; short v; };
struct o60_ushort { char p[0x60]; unsigned short v; };
struct o62_short { char p[0x62]; short v; };
struct o62_ushort { char p[0x62]; unsigned short v; };
struct o64_short { char p[0x64]; short v; };
struct o64_ushort { char p[0x64]; unsigned short v; };
struct o66_short { char p[0x66]; short v; };
struct o68_float { char p[0x68]; float v; };
struct o70_int { char p[0x70]; int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o80_float { char p[0x80]; float v; };
struct o88_short { char p[0x88]; short v; };
struct o8A_short { char p[0x8A]; short v; };
struct o8C_short { char p[0x8C]; short v; };
struct o94_float { char p[0x94]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oF8_short { char p[0xF8]; short v; };
struct oF84_int { char p[0xF84]; int v; };
int FUN_0c018b1c(int);
extern int FUN_0c018b22();
int FUN_0c018c18(int);
int FUN_0c018c2a(float, float);
int FUN_0c018c8a(float, float);
int FUN_0c018c96(int, int, int, int);
int FUN_0c018cd6(int, int, int);
int FUN_0c018ce0(float, float);
extern int FUN_0c018cec();
float FUN_0c018cfc(void);
float FUN_0c018d02(void);
int FUN_0c026ce6(void);
int FUN_0c0295c0(int, int, float, float);
int FUN_0c0297f4(int, int, float);
int FUN_0c029b12(int, float);
int FUN_0c02be68(int, float);
int FUN_0c02f698(void);
int FUN_0c0468aa(int, int, float);
float FUN_0c0469e2(int, int, int, int, int, float);
int FUN_0c058ca6(int, int);
int FUN_0c070e60(void);
float FUN_0c070e80(void);
int FUN_0c072150(int, int, int);
extern int FUN_0c072230();
int FUN_0c072290(int, int);
int FUN_0c073360(void);
int FUN_0c0739a0(int);
int FUN_0c073a30(float, float, float);
int FUN_0c073a60(int);
int FUN_0c073c40(int, int, float);
float FUN_0c073c60(int);
int FUN_0c074f20(float);
int GetAng4Mat(int);
int MultiRot4Vec(int);
int camSetTarget(int, int);
int nlAddVector(int, int);
int nlGetAverageVector(int, int, int, float, float);
float nlLength(int, int);
int nlObjPutUseViewMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlRotateV(int, int);
int nlScale(float, float, float);
int nlSubVector3op(int, int, int);
int nlUnitVectorsd(int, int);
int FUN_0c023718(int a4, float f4);
int FUN_0c013b2c(int a4);
int FUN_0c018df2(void);

int FUN_0c023718(int a4, float f4)
{
    int stk[29];
    register float t23;
    register float u38;
    register float u44;
    register float u56;
    register float u61;
    register float u62;
    register float u64;
    register float u66;
    register float u69;
    register float u70;
    register float u72;
    register float u74;
    register float u76;
    register float u78;
    register float u80;
    register float u84;
    register float u85;
    register float u90;
    register float u91;
    register float u95;
    register float u96;
    register float t127;
    register float u142;
    register float u148;
    register float u160;
    register float u165;
    register float u166;
    register float u168;
    register float u170;
    register float u172;
    register float u174;
    register float u176;
    register float u178;
    register float u181;
    register float u182;
    register float u184;
    register float u188;
    register float u189;
    register float u194;
    register float u195;
    register float u199;
    register float u200;
    register float u214;
    register float u215;
    register int t231;
    register int t232;
    register float u250;
    register float u290;
    register float u268;
    register float u271;
    register float u272;
    register float u275;
    register float u366;
    register int t304;
    register int t305;
    register float u310;
    register float u329;
    register float u332;
    register float u333;
    register float u336;
    register float u463;
    register int t370;
    int t371;
    register float t411;
    register float u412;
    register float u414;
    register float u416;
    register float u417;
    register float t448;
    register float u449;
    register float u100;
    register float u204;
    register float u300;
    register float u353;
    register float u319;
    register float u343;
    register int t376;
    int t377;
    float s1;

    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x44)) = *(struct mv3 *)(0xC09CAC8); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x50)) = *(struct mv3 *)(0xC175930); }
    *(float *)(((int)stk + 84)) = ((*(float *)(((int)stk + 84))) - 10.0f);
    if (((((struct o0_int *)0xC2709AC)->v)) != 0) {
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - 0.0350000001f);
        (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) - 0.0350000001f);
        (((struct o36_ushort *)(a4))->v) = (((((struct o36_short *)(a4))->v)) + ((((struct o3C_short *)(a4))->v)));
        (((struct o34_ushort *)(a4))->v) = (((((struct o34_short *)(a4))->v)) + ((((struct o3A_short *)(a4))->v)));
        (((struct o38_ushort *)(a4))->v) = (((((struct o38_short *)(a4))->v)) + ((((struct o3E_short *)(a4))->v)));
        (((struct o5E_ushort *)(a4))->v) = (((((struct o5E_short *)(a4))->v)) + ((((struct o64_short *)(a4))->v)));
        (((struct o5C_ushort *)(a4))->v) = (((((struct o5C_short *)(a4))->v)) + ((((struct o62_short *)(a4))->v)));
        (((struct o60_ushort *)(a4))->v) = (((((struct o60_short *)(a4))->v)) + ((((struct o66_short *)(a4))->v)));
    }
    t23 = nlLength((a4 + 0x1C), (((int)stk + 0) + 0x50));
    *(float *)(((int)stk + 12)) = t23;
    if (!((((((struct o40_float *)(a4))->v)) + 25.0f) > t23)) {
    } else {
        if (((((struct o0_int *)0xC2709AC)->v)) != 0) {
        } else {
            *(float *)(((int)stk + 44)) = (((((struct o1C_float *)(a4))->v)) - (*(float *)(((int)stk + 80))));
            *(float *)(((int)stk + 48)) = (((((struct o20_float *)(a4))->v)) - (*(float *)(((int)stk + 84))));
            *(float *)(((int)stk + 52)) = (((((struct o24_float *)(a4))->v)) - (*(float *)(((int)stk + 88))));
            FUN_0c073360();
            nlUnitVectorsd((((int)stk + 0) + 0x2C), (((int)stk + 0) + 0x38));
            nlRotateV((((int)stk + 0) + 0x38), (((int)stk + 0) + 0x44));
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x14)) = *(struct mv3 *)(0xC1759B4); }
            *(float *)(((int)stk + 24)) = 0.0f;
            FUN_0c072230((((int)stk + 0) + 0x14), (((int)stk + 0) + 0x2C));
            FUN_0c072230((a4 + 0x28), (((int)stk + 0) + 0x20));
            u38 = *(float *)(((int)stk + 40));
            u44 = 0.0f;
            if (u38 != 0.0f) {
                u44 = ((((-((((struct o40_float *)(a4))->v))) + (*(float *)(((int)stk + 12)))) + -25.0f) / u38);
            }
            (((struct o1C_float *)(a4))->v) = (((((struct o1C_float *)(a4))->v)) - ((((((struct o28_float *)(a4))->v)) * u44)));
            (((struct o20_float *)(a4))->v) = (((((struct o20_float *)(a4))->v)) - ((((((struct o2C_float *)(a4))->v)) * u44)));
            (((struct o24_float *)(a4))->v) = (((((struct o24_float *)(a4))->v)) - ((((((struct o30_float *)(a4))->v)) * u44)));
            *(float *)(((int)stk + 4)) = (*(float *)(((int)stk + 56)));
            u56 = *(float *)(((int)stk + 52));
            if (0.0f > (*(float *)(((int)stk + 40)))) {
                u61 = (((((struct o4_float *)(((int)stk + 0)))->v)) * u56);
                u62 = (((((struct o4_float *)(((int)stk + 0)))->v)) * ((((struct o28_float *)(((int)stk + 0)))->v)));
                u64 = (u62 * 2.5f);
                (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + (((u61 * 1.25f)) - u64));
                u66 = (((struct o3C_float *)(((int)stk + 0)))->v);
                u69 = (u66 * ((((struct o28_float *)(((int)stk + 0)))->v)));
                u70 = (u66 * ((((struct o34_float *)(((int)stk + 0)))->v)));
                u72 = (u69 * 4.0f);
                (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + (((u70 * (1.0f + 1.0f))) - u72));
                u74 = (((struct o40_float *)(((int)stk + 0)))->v);
                u76 = (u74 * ((((struct o34_float *)(((int)stk + 0)))->v)));
                u78 = (u74 * ((((struct o28_float *)(((int)stk + 0)))->v)));
                u80 = (u78 * 9.0f);
                u100 = (((((struct o30_float *)(a4))->v)) + (((u76 * 4.5f)) - u80));
            } else {
                u84 = (((((struct o4_float *)(((int)stk + 0)))->v)) * u56);
                u85 = ((((struct o28_float *)(a4))->v));
                u85 = u85 + 1.25f * u84;
                (((struct o28_float *)(a4))->v) = u85;
                u90 = (((((struct o3C_float *)(((int)stk + 0)))->v)) * ((((struct o34_float *)(((int)stk + 0)))->v)));
                u91 = ((((struct o2C_float *)(a4))->v));
                u91 = u91 + ((1.0f + 1.0f)) * u90;
                (((struct o2C_float *)(a4))->v) = u91;
                u95 = (((((struct o40_float *)(((int)stk + 0)))->v)) * ((((struct o34_float *)(((int)stk + 0)))->v)));
                u96 = ((((struct o30_float *)(a4))->v));
                u96 = u96 + 4.5f * u95;
                u100 = u96;
            }
            (((struct o30_float *)(a4))->v) = u100;
            (((struct o3A_ushort *)(a4))->v) = (int)(((((struct o2C_float *)(a4))->v)) * 170.0f);
            (((struct o3C_ushort *)(a4))->v) = (int)(-(((((struct o28_float *)(a4))->v)) * 170.0f));
            (((struct o62_ushort *)(a4))->v) = (int)(-((*(float *)(((int)stk + 48))) * 2000.0f));
            (((struct o64_ushort *)(a4))->v) = (int)((*(float *)(((int)stk + 44))) * 1000.0f);
            (((struct o50_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) * 0.200000003f);
            (((struct o58_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) * 0.200000003f);
            (((struct o54_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) * 0.699999988f);
            nlPopMatrix(0x1);
            (((struct o0_uint *)0xC2709AC)->v) = 0x1;
            FUN_0c058ca6(0x20BA9, 0x0);
        }
    }
    t127 = nlLength((a4 + 0x44), (((int)stk + 0) + 0x50));
    *(float *)(((int)stk + 8)) = t127;
    if (!((((((struct o68_float *)(a4))->v)) + 10.0f) > t127)) {
    } else {
        if (((((struct o0_int *)0xC2709AC)->v)) != 0) {
        } else {
            *(float *)(((int)stk + 44)) = (((((struct o44_float *)(a4))->v)) - (*(float *)(((int)stk + 80))));
            *(float *)(((int)stk + 48)) = (((((struct o48_float *)(a4))->v)) - (*(float *)(((int)stk + 84))));
            *(float *)(((int)stk + 52)) = (((((struct o4C_float *)(a4))->v)) - (*(float *)(((int)stk + 88))));
            FUN_0c073360();
            nlUnitVectorsd((((int)stk + 0) + 0x2C), (((int)stk + 0) + 0x38));
            nlRotateV((((int)stk + 0) + 0x38), (((int)stk + 0) + 0x44));
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x14)) = *(struct mv3 *)(0xC1759B4); }
            *(float *)(((int)stk + 24)) = 0.0f;
            FUN_0c072230((((int)stk + 0) + 0x14), (((int)stk + 0) + 0x2C));
            FUN_0c072230((a4 + 0x50), (((int)stk + 0) + 0x20));
            u142 = *(float *)(((int)stk + 40));
            u148 = 0.0f;
            if (u142 != 0.0f) {
                u148 = ((((-((((struct o68_float *)(a4))->v))) + (*(float *)(((int)stk + 8)))) + -10.0f) / u142);
            }
            (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) - ((((((struct o50_float *)(a4))->v)) * u148)));
            (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) - ((((((struct o54_float *)(a4))->v)) * u148)));
            (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) - ((((((struct o58_float *)(a4))->v)) * u148)));
            *(float *)(((int)stk + 0)) = (*(float *)(((int)stk + 56)));
            u160 = *(float *)(((int)stk + 52));
            if (0.0f > (*(float *)(((int)stk + 40)))) {
                u165 = ((*(float *)(((int)stk + 0))) * u160);
                u166 = ((*(float *)(((int)stk + 0))) * ((((struct o28_float *)(((int)stk + 0)))->v)));
                u168 = (u166 * 2.5f);
                (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + (((u165 * 1.25f)) - u168));
                u170 = (((struct o3C_float *)(((int)stk + 0)))->v);
                u172 = (u170 * ((((struct o34_float *)(((int)stk + 0)))->v)));
                u174 = (u170 * ((((struct o28_float *)(((int)stk + 0)))->v)));
                u176 = (u174 * 4.0f);
                (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) + (((u172 * (1.0f + 1.0f))) - u176));
                u178 = (((struct o40_float *)(((int)stk + 0)))->v);
                u181 = (u178 * ((((struct o34_float *)(((int)stk + 0)))->v)));
                u182 = (u178 * ((((struct o28_float *)(((int)stk + 0)))->v)));
                u184 = (u182 * 9.0f);
                u204 = (((((struct o58_float *)(a4))->v)) + (((u181 * 4.5f)) - u184));
            } else {
                u188 = ((*(float *)(((int)stk + 0))) * u160);
                u189 = ((((struct o50_float *)(a4))->v));
                u189 = u189 + 1.25f * u188;
                (((struct o50_float *)(a4))->v) = u189;
                u194 = (((((struct o3C_float *)(((int)stk + 0)))->v)) * ((((struct o34_float *)(((int)stk + 0)))->v)));
                u195 = ((((struct o54_float *)(a4))->v));
                u195 = u195 + ((1.0f + 1.0f)) * u194;
                (((struct o54_float *)(a4))->v) = u195;
                u199 = (((((struct o40_float *)(((int)stk + 0)))->v)) * ((((struct o34_float *)(((int)stk + 0)))->v)));
                u200 = ((((struct o58_float *)(a4))->v));
                u200 = u200 + 4.5f * u199;
                u204 = u200;
            }
            (((struct o58_float *)(a4))->v) = u204;
            (((struct o62_ushort *)(a4))->v) = (int)(-((*(float *)(((int)stk + 48))) * 2000.0f));
            (((struct o64_ushort *)(a4))->v) = (int)((*(float *)(((int)stk + 44))) * 1000.0f);
            (((struct o28_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) * 0.200000003f);
            (((struct o30_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) * 0.200000003f);
            u214 = (((struct o54_float *)(a4))->v);
            (((struct o2C_float *)(a4))->v) = (u214 * 0.699999988f);
            u215 = (u214 * 0.699999988f);
            (((struct o3A_ushort *)(a4))->v) = (int)(u215 * 170.0f);
            (((struct o3C_ushort *)(a4))->v) = (int)(-(((((struct o28_float *)(a4))->v)) * 170.0f));
            nlPopMatrix(0x1);
            (((struct o0_uint *)0xC2709AC)->v) = 0x1;
            FUN_0c058ca6(0x20BA9, 0x0);
        }
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x5C)) = *(struct mv3 *)((a4 + 0x28)); }
    t231 = FUN_0c0295c0((a4 + 0x1C), (((int)stk + 0) + 0x5C), 1.0f, 30.0f);
    t232 = FUN_0c029b12((a4 + 0x1C), 10000.0f);
    *(float *)(((int)stk + 16)) = ((((struct o18_float *)(t232))->v));
    if (((((struct o40_int *)(t231))->v)) != 0) {
        if ((((((struct o40_int *)(t231))->v)) & 84) == 0) {
            if (((((struct o0_int *)0xC2709AC)->v)) == 1) {
                if (100.0f > ((((struct o4_float *)0xC2709AC)->v))) {
                    (((struct o0_uint *)0xC2709AC)->v) = 0xFFFFFFFF;
                } else {
                    (((struct o0_uint *)0xC2709AC)->v) = 0x2;
                }
            }
            u250 = ((((struct o2C_float *)(a4))->v));
            u250 *= -0.75f;
            (((struct o2C_float *)(a4))->v) = u250;
            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) * 0.850000024f);
            (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) * 0.850000024f);
        } else {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)((((int)stk + 0) + 0x5C)); }
        }
        (((struct o3A_ushort *)(a4))->v) = (int)(((((struct o30_float *)(a4))->v)) * 170.0f);
        (((struct o3C_ushort *)(a4))->v) = (int)(-(((((struct o28_float *)(a4))->v)) * 170.0f));
        u300 = 0.850000024f;
    } else {
        u290 = 0.850000024f;
        if (!((((((struct o20_float *)(a4))->v)) - ((((struct o40_float *)(a4))->v))) > ((((struct o18_float *)(t232))->v)))) {
            (((struct o3A_ushort *)(a4))->v) = (int)(((((struct o30_float *)(a4))->v)) * 170.0f);
            (((struct o3C_ushort *)(a4))->v) = (int)(-(((((struct o28_float *)(a4))->v)) * 170.0f));
            u268 = ((((struct o2C_float *)(a4))->v));
            u268 *= -0.75f;
            (((struct o2C_float *)(a4))->v) = u268;
            (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) * 0.850000024f);
            (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) * 0.850000024f);
            u271 = (((struct o18_float *)(t232))->v);
            u272 = (((struct o40_float *)(a4))->v);
            u275 = (u271 + u272);
            u275 = u275 + 0.75f * (((u271 - ((((struct o20_float *)(a4))->v))) + u272));
            (((struct o20_float *)(a4))->v) = u275;
            if (((((struct o0_int *)0xC2709AC)->v)) == 1) {
                if (100.0f > ((((struct o4_float *)0xC2709AC)->v))) {
                    (((struct o0_uint *)0xC2709AC)->v) = 0xFFFFFFFF;
                } else {
                    (((struct o0_uint *)0xC2709AC)->v) = 0x2;
                }
            }
            u290 = u272;
        }
        u300 = u290;
    }
    u366 = u300;
    if (((((struct o0_int *)0xC2709AC)->v)) == 0) {
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x5C)) = *(struct mv3 *)((a4 + 0x50)); }
        t304 = FUN_0c0295c0((a4 + 0x44), (((int)stk + 0) + 0x5C), 1.0f, 15.0f);
        t305 = FUN_0c029b12((a4 + 0x44), 10000.0f);
        if (((((struct o40_int *)(t304))->v)) != 0) {
            if ((((((struct o40_int *)(t304))->v)) & 84) == 0) {
                u310 = ((((struct o54_float *)(a4))->v));
                u310 *= -0.800000012f;
                (((struct o54_float *)(a4))->v) = u310;
                (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) * 0.600000024f);
                (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) * 0.600000024f);
                u319 = 0.600000024f;
            } else {
                { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x50)) = *(struct mv3 *)((((int)stk + 0) + 0x5C)); }
            }
            (((struct o62_ushort *)(a4))->v) = (int)(-(((((struct o58_float *)(a4))->v)) * 2000.0f));
            (((struct o64_ushort *)(a4))->v) = (int)(((((struct o50_float *)(a4))->v)) * 1000.0f);
            u353 = u319;
        } else {
            if (!((((((struct o48_float *)(a4))->v)) - ((((struct o68_float *)(a4))->v))) > ((((struct o18_float *)(t305))->v)))) {
                (((struct o62_ushort *)(a4))->v) = (int)(-(((((struct o58_float *)(a4))->v)) * 2000.0f));
                (((struct o64_ushort *)(a4))->v) = (int)(((((struct o50_float *)(a4))->v)) * 1000.0f);
                u329 = ((((struct o54_float *)(a4))->v));
                u329 *= -0.75f;
                (((struct o54_float *)(a4))->v) = u329;
                (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) * 0.550000012f);
                (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) * 0.550000012f);
                u332 = (((struct o18_float *)(t305))->v);
                u333 = (((struct o68_float *)(a4))->v);
                u336 = (u332 + u333);
                u336 = u336 + 0.75f * (((u332 - ((((struct o48_float *)(a4))->v))) + u333));
                (((struct o48_float *)(a4))->v) = u336;
                u343 = u333;
            }
            u353 = u343;
        }
        u366 = u353;
    }
    u463 = u366;
    if (((((struct o0_int *)0xC2709AC)->v)) != 1) {
    } else {
        t370 = (((struct o10_int *)0xC2709AC)->v);
        (((struct o10_uint *)0xC2709AC)->v) = (t370 - 1);
        t371 = *(int *)0xC177D58;
        if ((t370 - 1) == 0) {
            if (((*(int *)0xC177D58) != 0) && ((t376 = *(int *)0xC177D58, t376 != 1) && (t377 = *(int *)0xC177D58, t377 != 2))) {
            } else {
                if ((t371 != 1) && (t371 != 2)) {
                    camSetTarget((a4 + 0x1C), 0x1);
                    FUN_0c018b1c(0x1);
                } else {
                    FUN_0c018cec(0.0f);
                    camSetTarget((a4 + 0x1C), 0x1);
                    FUN_0c018b1c(0x2);
                }
                *(unsigned int *)0xC177D58 = 0x8;
            }
        }
        if ((int)((((struct o10_int *)0xC2709AC)->v)) < 0) {
            if ((*(int *)0xC177D58) == 8) {
                *(float *)(((int)stk + 104)) = -150.0f;
                *(float *)(((int)stk + 108)) = 250.0f;
                *(float *)(((int)stk + 112)) = -2000.0f;
                FUN_0c018b22((((int)stk + 0) + 0x68), 0x1);
                camSetTarget((a4 + 0x1C), 0x2);
                t411 = FUN_0c018d02();
                u412 = (t411 - 50.0f);
                if ((t411 - 50.0f) > 700.0f) {
                    u412 = 700.0f;
                }
                u414 = u412;
                if (0.0f > u412) {
                    u414 = 0.0f;
                }
                u416 = (((700.0f - u414) / 700.0f) * ((700.0f - u414) / 700.0f));
                u417 = 50.0f;
                u417 = u417 + 10.0f * u416;
                *(float *)0xC177D9C = u417;
            } else {
                (((struct o10_uint *)0xC2709AC)->v) = (((((struct o10_int *)0xC2709AC)->v)) - 1);
            }
        } else {
            (((struct o10_uint *)0xC2709AC)->v) = (((((struct o10_int *)0xC2709AC)->v)) - 1);
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x68)) = *(struct mv3 *)((a4 + 0x1C)); }
        *(float *)(((int)stk + 108)) = 0.0f;
        t448 = FUN_0c073c60((((int)stk + 0) + 0x68));
        s1 = _builtin_fabsf(t448);
        (((struct o4_float *)0xC2709AC)->v) = (s1 * 0.100000001f);
        u449 = (s1 * 0.100000001f);
        (((struct o8_uint *)0xC2709AC)->v) = (int)(u449 * 100.0f);
        if (-100.0f > ((((struct o20_float *)(a4))->v))) {
            (((struct o0_uint *)0xC2709AC)->v) = 0xFFFFFFFF;
        }
        u463 = (s1 * 0.100000001f);
    }
    if (((((struct o0_int *)0xC2709AC)->v)) != 0) {
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - ((((((struct o2C_float *)(a4))->v)) * 0.00499999989f)));
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) - ((((((struct o28_float *)(a4))->v)) * 0.00499999989f)));
        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) - ((((((struct o30_float *)(a4))->v)) * 0.00499999989f)));
        (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) - ((((((struct o54_float *)(a4))->v)) * 0.00499999989f)));
        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) - ((((((struct o50_float *)(a4))->v)) * 0.00499999989f)));
        (((struct o58_float *)(a4))->v) = (((((struct o58_float *)(a4))->v)) - ((((((struct o58_float *)(a4))->v)) * 0.00499999989f)));
    }
    nlPushMatrix(0x0);
    FUN_0c073a60((a4 + 0x1C));
    nlRotateAY((unsigned short)((((struct o36_short *)(a4))->v)));
    nlRotateAX((unsigned short)((((struct o34_short *)(a4))->v)));
    nlRotateAZ((unsigned short)((((struct o38_short *)(a4))->v)));
    nlObjPutUseViewMatrix(0xC5C58A8);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    FUN_0c073a60((a4 + 0x44));
    nlRotateAY((unsigned short)((((struct o5E_short *)(a4))->v)));
    nlRotateAX((unsigned short)((((struct o5C_short *)(a4))->v)));
    nlRotateAZ((unsigned short)((((struct o60_short *)(a4))->v)));
    nlObjPutUseViewMatrix(0xC5C4990);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    FUN_0c073a30(((((struct o1C_float *)(a4))->v)), ((*(float *)(((int)stk + 16))) + 0.300000012f), ((((struct o24_float *)(a4))->v)));
    nlScale(8.0f, 8.0f, 8.0f);
    FUN_0c074f20(8.0f);
    nlObjPutUseViewMatrix(0xC4F4988);
    nlPopMatrix(0x1);
    return (FUN_0c026ce6());
}


int FUN_0c018df2(void)
{
    int stk[15];
    register int t0;
    register int t4;
    register float u5;
    register float t18;
    register float u19;
    register float u20;
    register float u21;
    register float u23;
    register float u24;
    register float t28;
    register int t31;
    register float u35;
    register float t38;
    register int t40;
    register int t59;
    register int t79;
    register int t87;
    register int t90;
    register int t91;
    register int t95;
    register float u109;
    register float u110;
    register float u111;
    register float u114;
    register int t124;
    register int t131;
    register int t146;
    int t92;
    register int t116;
    int t150;
    register int t158;

    t0 = *(int *)0xC11CFA8;
    if (t0 != 1) {
        if (t0 != 2) {
            if (t0 != 3) {
                if (t0 != 4) {
                    return t0;
                }
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)(0xC175930); }
                *(float *)(((int)stk + 44)) = ((*(float *)(((int)stk + 44))) + ((((struct o18_float *)0xC019550)->v)));
                if (((((struct o0_int *)0xC177E80)->v)) != 0) {
                    t4 = ((int (*)(int, int, Stk3))(FUN_0c018b22))(0xC177E74, 0x0, *(Stk3 *)(((int)stk + 40)));
                    u5 = (((struct o28_float *)0xC019550)->v);
                    FUN_0c018c8a(u5, u5);
                    FUN_0c018b1c(0x1);
                    FUN_0c02f698();
                    (((struct o0_uint *)0xC177E80)->v) = 0x0;
                }
                camSetTarget(((int)stk + 40), 0x2);
                t18 = FUN_0c018cfc();
                u19 = (((struct o0_float *)0xC019550)->v);
                u20 = (((struct o4_float *)0xC019550)->v);
                u21 = (((-t18) + u19) / u20);
                if (0.0f > (((-t18) + u19) / u20)) {
                    u21 = 0.0f;
                }
                u23 = *(float *)0xC019590;
                u24 = u23;
                u24 = u24 + u23 * u21;
                *(float *)0xC177D9C = u24;
                return 0xC019590;
            }
            FUN_0c073360();
            FUN_0c073a60(0xC175930);
            MultiRot4Vec(0xC1758E4);
            t28 = FUN_0c018cfc();
            if (t28 > 500.0f) {
                (((struct o0_uint *)0xC177E80)->v) = 0x1;
            }
            if (((((struct o0_int *)0xC177E80)->v)) != 0) {
                (((struct oC_float *)0xC177E80)->v) = 0.0f;
                (((struct o4_float *)0xC177E80)->v) = 0.0f;
                (((struct o8_float *)0xC177E80)->v) = 5.0f;
                t31 = ((int (*)(int, int))(FUN_0c072230))(0xC177E84, 0xC177E84);
                (((struct o10_float *)0xC177E80)->v) = (((FUN_0c070e80()) + -0.5f) * 68.0f);
                (((struct o14_float *)0xC177E80)->v) = (((FUN_0c070e80()) + -0.5f) * 16.0f);
                u35 = 27.0f;
                u35 = u35 + 27.0f * (FUN_0c070e80());
                (((struct o18_float *)0xC177E80)->v) = u35;
                FUN_0c072290(0xC177E90, 0xC177E90);
                FUN_0c0295c0(0xC177E84, 0xC177E90, 1.0f, 5.0f);
                t38 = FUN_0c070e80();
                FUN_0c073c40(0xC177E90, 0xC1759B4, (t38 + (1.0f + 1.0f)));
                t40 = ((int (*)(int, int))(FUN_0c018b22))(0xC177E84, 0x0);
                FUN_0c018c18(0xC177E90);
                FUN_0c018c2a(0.899999976f, 0.200000003f);
                (((struct o1C_uint *)0xC177E80)->v) = ((int)(((FUN_0c070e60()) << 16) << 1) >> 19);
                (((struct o20_uint *)0xC177E80)->v) = ((int)(((FUN_0c070e60()) << 16) << 1) >> 25);
                (((struct o24_uint *)0xC177E80)->v) = ((FUN_0c070e60()) & 0x3);
                FUN_0c018b1c(0x1);
                FUN_0c02f698();
                (((struct o0_uint *)0xC177E80)->v) = 0x0;
            }
            FUN_0c073c40(0xC177E90, 0xC177E90, 0.980000019f);
            FUN_0c0295c0(0xC177E84, 0xC177E90, 0.0f, 5.0f);
            FUN_0c02be68(0xC177E84, 5.0f);
            t59 = FUN_0c029b12(0xC177E84, 5.0f);
            if ((*(int *)((t59 + 0x1C))) != -1) {
                if (((((struct o18_float *)(t59))->v)) > (((((struct o8_float *)0xC177E80)->v)) + -5.0f)) {
                    (((struct o8_float *)0xC177E80)->v) = (((((struct o18_float *)(t59))->v)) + 5.0f);
                }
                if ((((((struct o8_float *)0xC177E80)->v)) + -100.0f) > ((((struct o18_float *)(t59))->v))) {
                    (((struct o8_float *)0xC177E80)->v) = (((((struct o18_float *)(t59))->v)) + 100.0f);
                }
            } else {
                (((struct o0_uint *)0xC177E80)->v) = 0x1;
            }
            t79 = ((int (*)(int, int))(FUN_0c018b22))(0xC177E84, 0x2);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(0xC0A2D08); }
            *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + 5.0f);
            if ((((((struct o24_int *)0xC177E80)->v)) & 2) != 0) {
                *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + 50.0f);
            }
            t87 = ((int (*)(int, int, Stk3))(FUN_0c072230))(((int)stk + 0), ((int)stk + 0), *(Stk3 *)(((int)stk + 0)));
            camSetTarget(((int)stk + 0), 0x2);
            nlPopMatrix(0x1);
            t90 = (((struct o1C_int *)0xC177E80)->v);
            t91 = (((struct o20_int *)0xC177E80)->v);
            (((struct o1C_uint *)0xC177E80)->v) = (t90 + t91);
            if (((int)(t90 + t91) >= (int)0xFFFFE800) && (t92 = (((struct o1C_int *)0xC177E80)->v), (int)t92 <= (int)0x1800)) {
            } else {
                t95 = (((struct o20_int *)0xC177E80)->v);
                if ((int)t95 < 0) {
                    (((struct o20_uint *)0xC177E80)->v) = (((((struct o20_int *)0xC177E80)->v)) + 0x1);
                } else {
                    if ((int)t95 > 0) {
                        (((struct o20_uint *)0xC177E80)->v) = (((((struct o20_int *)0xC177E80)->v)) - 1);
                    }
                }
            }
            FUN_0c018c96(0x0, 0x0, ((((struct o1C_int *)0xC177E80)->v)), 0x0);
            if ((0x1 & ((((struct o24_int *)0xC177E80)->v))) != 0) {
                u109 = (((struct o0_float *)0xC019550)->v);
                u110 = (((struct o4_float *)0xC019550)->v);
                u111 = ((u109 - t28) / u110);
                if (0.0f > ((u109 - t28) / u110)) {
                    u111 = 0.0f;
                }
                u114 = 27.0f;
                u114 = u114 + ((((struct o8_float *)0xC019550)->v)) * u111;
                *(float *)0xC177D9C = u114;
                t116 = 0xC019558;
            } else {
                *(float *)0xC177D9C = ((((struct oC_float *)0xC019550)->v));
                t116 = 0xC01955C;
            }
            return t116;
        }
        *(float *)(((int)stk + 32)) = 0.0f;
        *(float *)(((int)stk + 40)) = 10.0f;
        *(float *)(((int)stk + 36)) = 5.0f;
        FUN_0c073360();
        MultiRot4Vec(0xC1758E4);
        t124 = ((int (*)(int, int))(FUN_0c072230))(((int)stk + 32), ((int)stk + 32));
        nlRotateAY(0x1800);
        nlRotateAX(0xFC00);
        GetAng4Mat((((int)stk + 32) + 0xC));
        nlPopMatrix(0x1);
        nlAddVector(((int)stk + 32), 0xC175930);
        if (((((struct o0_int *)0xC177E80)->v)) != 0) {
            t131 = ((int (*)(float))(FUN_0c018cec))(35.0f);
            camSetTarget(((int)stk + 32), 0x0);
            FUN_0c018c8a(0.800000012f, 0.300000012f);
            FUN_0c018b1c(0x2);
            FUN_0c02f698();
            (((struct o0_uint *)0xC177E80)->v) = 0x0;
        }
        camSetTarget(((int)stk + 32), 0x2);
        return (FUN_0c018c96((*(int *)(((int)stk + 44))), (*(int *)(((int)stk + 48))), (*(int *)(((int)stk + 52))), 0x0));
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(0xC175930); }
    *(float *)(((int)stk + 32)) = ((*(float *)(((int)stk + 32))) + 5.0f);
    if (((((struct o0_int *)0xC177E80)->v)) != 0) {
        t146 = ((int (*)(Stk3, float))(FUN_0c018cec))(*(Stk3 *)(((int)stk + 28)), 60.0f);
        camSetTarget(((int)stk + 28), 0x0);
        FUN_0c018c8a(0.300000012f, 0.300000012f);
        if (((*(int *)0xC2AC2F4) == 1) && (t150 = *(int *)0xC1EC71C, t150 == 1)) {
            FUN_0c018c96(0x0, ((unsigned short)(*(short *)0xC17593E) - 24576), 0x0, 0x0);
            t158 = ((unsigned short)(*(short *)0xC17593E) - 24576);
        } else {
            FUN_0c018c96(0x0, (unsigned short)(*(short *)0xC17593E), 0x0, 0x0);
            t158 = (unsigned short)(*(short *)0xC17593E);
        }
        FUN_0c018c96(0xFFFFC000, t158, 0xFFFFD000, 0x1);
        FUN_0c018ce0(9.99999975e-06f, 1.0f);
        FUN_0c018cd6(0x8, 0x90, 0x10);
        FUN_0c018b1c(0x2);
        FUN_0c02f698();
        (((struct o0_uint *)0xC177E80)->v) = 0x0;
    }
    return (camSetTarget(((int)stk + 28), 0x2));
}
