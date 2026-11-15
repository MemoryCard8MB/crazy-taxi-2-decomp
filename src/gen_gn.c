/* Straight-line functions with calls and guards (batch gen_gn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o100_float { char p[0x100]; float v; };
struct o104_float { char p[0x104]; float v; };
struct o108_uchar { char p[0x108]; unsigned char v; };
struct o110_int { char p[0x110]; int v; };
struct o110_uint { char p[0x110]; unsigned int v; };
struct o124_int { char p[0x124]; int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o160_float { char p[0x160]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_short { char p[0x1C]; short v; };
struct o1C_uchar { char p[0x1C]; unsigned char v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o1D_uchar { char p[0x1D]; unsigned char v; };
struct o1D4_float { char p[0x1D4]; float v; };
struct o1E_short { char p[0x1E]; short v; };
struct o1E_uchar { char p[0x1E]; unsigned char v; };
struct o1F_uchar { char p[0x1F]; unsigned char v; };
struct o2_short { char p[0x2]; short v; };
struct o2_ushort { char p[0x2]; unsigned short v; };
struct o20_int { char p[0x20]; int v; };
struct o20_short { char p[0x20]; short v; };
struct o20_uchar { char p[0x20]; unsigned char v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o21_uchar { char p[0x21]; unsigned char v; };
struct o24_float { char p[0x24]; float v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o258_float { char p[0x258]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o28_int { char p[0x28]; int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2B_uchar { char p[0x2B]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2C_int { char p[0x2C]; int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o2DC_float { char p[0x2DC]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o30_int { char p[0x30]; int v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o34_float { char p[0x34]; float v; };
struct o34_short { char p[0x34]; short v; };
struct o34_ushort { char p[0x34]; unsigned short v; };
struct o360_float { char p[0x360]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o38_int { char p[0x38]; int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o3B4_int { char p[0x3B4]; int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o3C_int { char p[0x3C]; int v; };
struct o3C_short { char p[0x3C]; short v; };
struct o3C_uint { char p[0x3C]; unsigned int v; };
struct o3C_ushort { char p[0x3C]; unsigned short v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_short { char p[0x4]; short v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o70_int { char p[0x70]; int v; };
struct o7C_float { char p[0x7C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_short { char p[0x8]; short v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o80_float { char p[0x80]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o84_float { char p[0x84]; float v; };
struct o84_int { char p[0x84]; int v; };
struct o88_short { char p[0x88]; short v; };
struct o8A_short { char p[0x8A]; short v; };
struct o8C_short { char p[0x8C]; short v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA4_short { char p[0xA4]; short v; };
struct oA6_short { char p[0xA6]; short v; };
struct oA8_short { char p[0xA8]; short v; };
struct oA8_ushort { char p[0xA8]; unsigned short v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oCC_float { char p[0xCC]; float v; };
struct oD4_int { char p[0xD4]; int v; };
struct oF8_short { char p[0xF8]; short v; };
int CalcHomingAngle(int);
int CalcHomingVector(int);
int CheckAreaGrid(int, int);
int FUN_0c010184(int);
int FUN_0c010454(int);
int FUN_0c0106f4(int);
int FUN_0c0108fe(int);
int FUN_0c010fd4(int);
int FUN_0c011522(int);
int FUN_0c0120cc(int);
int FUN_0c0128ec(int);
int FUN_0c012ac4(int);
int FUN_0c012e78(int);
int FUN_0c013a30(int);
int FUN_0c013b2c(int);
int FUN_0c016cb2(int);
int FUN_0c018b1c(int);
int FUN_0c018b22(int, int);
int FUN_0c018c2a(float, float);
int FUN_0c018c8a(float, float);
int FUN_0c018c96(int, int, int, int);
int FUN_0c018ce0(float, float);
int FUN_0c018cec(float);
int FUN_0c01b81c(int, int, int, float);
extern int FUN_0c01b87a();
int FUN_0c01b920(int, float, float);
int FUN_0c01e13c(float);
int FUN_0c020e6c(int, int, int, int);
int FUN_0c027f28(int);
int FUN_0c027fbe(float, float);
int FUN_0c02803a(int, int, int, int);
float FUN_0c02806c(int);
int FUN_0c028196(void);
int FUN_0c0281b6(int);
int FUN_0c0281d4(int, int);
int FUN_0c02842e(int);
int FUN_0c0295c0(int, int, float, float);
int FUN_0c029b12(int, float);
int FUN_0c02ae3c(int, int, int, int, int, int);
int FUN_0c02e7a6(int, int);
int FUN_0c02f208(void);
int FUN_0c02f4ca(int, int, int);
int FUN_0c041178(int);
int FUN_0c041298(int);
int FUN_0c0415ba(int);
int FUN_0c0423c8(int);
int FUN_0c043706(int);
int FUN_0c044ba0(int);
int FUN_0c045108(int, int, int, int, int, float);
int FUN_0c046814(int);
float FUN_0c0468aa(int, int);
int FUN_0c0469e2(int, int, int, int, int);
int FUN_0c046fde(int, int, int);
int FUN_0c05a338(void);
int FUN_0c05a3b0(float);
int FUN_0c05a3f8(int);
int FUN_0c05bdde(int);
int FUN_0c05ccce(int);
int FUN_0c06ce72(void);
int FUN_0c06db2e(void);
int FUN_0c06e460(void);
float FUN_0c072140(int);
float FUN_0c072148(int);
int FUN_0c072150(int, int, int);
int FUN_0c072230(int, int);
int FUN_0c072290(int, int);
int FUN_0c072600(int);
int FUN_0c072b60(int);
int FUN_0c073360(void);
int FUN_0c0739a0(int);
int FUN_0c073a30(float, float, float);
int FUN_0c073a60(int);
float FUN_0c073b40(int, int);
int FUN_0c073c40(int, int, float);
float FUN_0c073c60(int);
float FUN_0c073c80(int);
int FUN_0c073e10(int);
int FUN_0c073e90(int);
int GetAng4Mat(int);
int GetRotVec4Ang(int, int, int, int);
int HomingAngle1(int, int, float);
int KillColliObj(int, int, int);
int MultiRot4Vec(int);
extern float _builtin_sqrtf(float);
int camSetTarget(int, int);
int carFlipTravelDir(int);
int colliBoxAhead(int, int, int);
int getAreaFromPos(int, int);
int nlAddVector(int, int);
int nlAddVector3op(int, int, int);
int nlArcTan2(float, float);
int nlCloseEvent(int);
int nlGetAverageVector(int, int, int, float, float);
int nlGetMatrix(int);
int nlInvertMatrix(int);
float nlLength(int, int);
int nlLookAt(int, int, int);
int nlMatrixMode(int);
int nlOuterProduct(int, int, int);
int nlPerspectiveX(int, float, float, float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlQuickInvertMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlRotateV(int, int);
int nlSubVector(int, int);
int nlSubVector3op(int, int, int);
int nlUnitMatrix(void);
float nlUnitVectorsd(int, int);
int pfSize(float, float);
int FUN_0c016cca(int a4);
int FUN_0c0148f4(void);
int FUN_0c045284(int a4);
int FUN_0c02b3b8(int a4, int a5);

int FUN_0c016cca(int a4)
{
    int stk[26];
    register int t103;
    register int t147;
    register int t149;
    register float u152;
    register int t155;
    register float u161;
    register int t162;
    register int t167;
    register int t182;
    register float u222;
    register float u225;
    register int t246;
    register int t284;
    register float u289;
    register float u290;
    register int t291;
    register int t363;
    register float u371;
    register float u372;
    register float u386;
    register int t387;
    register int t400;
    register float u417;
    register float u420;
    register float u430;
    register float u438;
    register int t505;
    register int t684;
    register int t687;
    register int t787;
    register int t790;
    register int t863;
    register float u929;
    register float u934;
    register float t946;
    register float t958;
    register float t966;
    register float t974;
    register float t982;
    register int t988;
    register float u1062;
    register float t1069;
    register float u1106;
    register float u1119;
    register float u1131;
    register float u1143;
    register float t1188;
    register float t1200;
    register float t1208;
    register float t1216;
    register float t1224;
    register int t1230;
    register float u1304;
    register float t1311;
    register float t1382;
    register float t1394;
    register float t1402;
    register float t1410;
    register float t1418;
    register int t1424;
    register float u1498;
    register float t1505;
    register float t1546;
    register float u1548;
    register float u1550;
    register float u1551;
    register int t1593;
    int t20;
    register int t81;
    register int t82;
    register int t115;
    register int t116;
    register float u150;
    register float u151;
    int t210;
    register int t211;
    int t236;
    register float u237;
    int t259;
    int t322;
    register float u323;
    int t331;
    register float u332;
    register float u425;
    register float u464;
    int t602;
    int t705;
    int t937;
    int t945;
    int t1105;
    int t1118;
    int t1179;
    int t1187;
    int t1373;
    int t1381;

    (((struct o64_uint *)(((int)stk + 0)))->v) = a4;
    *(unsigned int *)(((int)stk + 76)) = ((a4 * 0x3CC) + 0xC1758B4);
    if ((*(int *)0xC2AC2F0) == 1) {
        (((struct o4_uint *)0xC11CE48)->v) = 0x1;
        (((struct o2B_uchar *)0xC1EC7C0)->v) = (*(signed char *)0xC1EC783);
        (((struct o4_uint *)0xC1EC7C0)->v) = (((((struct o4_int *)0xC1EC7C0)->v)) | (((((struct o0_int *)0xC1EC75C)->v)) & 0xFFFFFFF7));
        (((struct o0_uint *)0xC1EC7C0)->v) = (((((struct o0_int *)0xC1EC7C0)->v)) | (((((struct o3C_int *)0xC1EC71C)->v)) & 0xFFFFFFF7));
    } else {
        (((struct o4_uint *)0xC11CE48)->v) = 0x0;
    }
    if ((((((struct o0_int *)0xC1EC7C0)->v)) & 8) != 0) {
        (((struct o4_uint *)0xC11CE48)->v) = 0x1;
    }
    if ((*(int *)0xC1ECD0C) == 0) {
        (((struct o4_uint *)0xC11CE48)->v) = 0x0;
    }
    if ((((((struct o24_int *)0xC1EC71C)->v)) == 1) && (t20 = (((struct o4_int *)0xC11CE48)->v), t20 != 0)) {
        if ((((((struct o4_int *)0xC1EC7C0)->v)) & 4) != 0) {
            (((struct o8_uint *)0xC177D50)->v) = 0x0;
            FUN_0c016cb2((*(int *)(((int)stk + 100))));
        } else {
            if (((((((struct o4_int *)0xC1EC7C0)->v)) & 0x200) == 0) && ((t81 = *(signed char *)0xC1EC7EB, (unsigned char)t81 != 1) || (t82 = (((struct o4_int *)0xC1EC7C0)->v), (t82 & 16) == 0))) {
                if ((((((struct o4_int *)0xC1EC7C0)->v)) & 2) != 0) {
                    t103 = (((struct o8_int *)0xC177D50)->v);
                    if (t103 != 9) {
                        if (t103 != 1) {
                            (((struct o8_uint *)0xC177D50)->v) = 0x9;
                        } else {
                            (((struct o8_uint *)0xC177D50)->v) = 0x2;
                        }
                    } else {
                        (((struct o8_uint *)0xC177D50)->v) = 0x1;
                    }
                    FUN_0c016cb2((*(int *)(((int)stk + 100))));
                } else {
                    if (((((((struct o4_int *)0xC1EC7C0)->v)) & 0x400) == 0) && ((t115 = *(signed char *)0xC1EC7EB, (unsigned char)t115 != 1) || (t116 = (((struct o4_int *)0xC1EC7C0)->v), (t116 & 32) == 0))) {
                    } else {
                        (((struct o8_uint *)0xC177D50)->v) = 0xA;
                        FUN_0c016cb2((*(int *)(((int)stk + 100))));
                    }
                }
            } else {
                (((struct o8_uint *)0xC177D50)->v) = 0x7;
                FUN_0c016cb2((*(int *)(((int)stk + 100))));
            }
        }
    }
    FUN_0c073360();
    t147 = (((struct o8_int *)0xC177D50)->v);
    if ((unsigned int)t147 < (unsigned int)0xF) {
        switch ((t147 << 1)) {
            case 0:
            {
                (((struct o0_float *)0xC177D9C)->v) = 60.0f;
                *(float *)(((int)stk + 92)) = 0.0f;
                *(unsigned int *)(((int)stk + 96)) = 0x0;
                t149 = 0xC177D58;
                u152 = 0.0f;
                for (;;) {
                    if ((int)(*(int *)(((int)stk + 96))) >= (int)0x4) {
                        break;
                    }
                    t149 = (*(int *)(((int)stk + 76)));
                    t155 = *(int *)(((int)stk + 96));
                    u152 = -3.4000001f;
                    t149 = (t149 + 0x1A4);
                    u151 = ((((struct o30_float *)(((((((t155 << 2) << 2) << 1) + t155) << 2) + t149)))->v));
                    u150 = (*(float *)(((int)stk + 92)));
                    u151 = (u151 + u152);
                    u150 = (u150 + u151);
                    *(float *)(((int)stk + 92)) = u150;
                    t149 = (*(int *)(((int)stk + 96)));
                    t149 = (t149 + 0x1);
                    *(unsigned int *)(((int)stk + 96)) = t149;
                }
                u161 = *(float *)(((int)stk + 92));
                *(float *)(((int)stk + 92)) = (u161 * 0.100000001f);
                t162 = FUN_0c05a3b0((u161 * 0.100000001f));
                if (t162 != 0) {
                    *(float *)(((int)stk + 92)) = 0.0f;
                }
                if (((((struct o28_int *)0xC11CE48)->v)) != 0) {
                    (((struct o0_float *)0xC177D9C)->v) = 60.0f;
                    t167 = *(int *)(((int)stk + 76));
                    (((struct o1C_uchar *)0xC177D9C)->v) = (*(signed char *)(((t167 + 0x88) + 0x0)));
                    (((struct o1D_uchar *)0xC177D9C)->v) = (*(signed char *)(((t167 + 0x88) + 0x1)));
                    (((struct o1E_uchar *)0xC177D9C)->v) = (*(signed char *)(((t167 + 0x88) + 0x2)));
                    (((struct o1F_uchar *)0xC177D9C)->v) = (*(signed char *)(((t167 + 0x88) + 0x3)));
                    (((struct o20_uchar *)0xC177D9C)->v) = (*(signed char *)(((t167 + 0x88) + 0x4)));
                    (((struct o21_uchar *)0xC177D9C)->v) = (*(signed char *)(((t167 + 0x88) + 0x5)));
                    FUN_0c018c96((unsigned short)((((struct o88_short *)((*(int *)(((int)stk + 76)))))->v)), (unsigned short)((((struct o8A_short *)((*(int *)(((int)stk + 76)))))->v)), (unsigned short)((((struct o8C_short *)((*(int *)(((int)stk + 76)))))->v)), 0x0);
                    FUN_0c073360();
                    t182 = *(int *)(((int)stk + 76));
                    FUN_0c073a30(((((struct o7C_float *)(t182))->v)), (((((struct o80_float *)(t182))->v)) - (*(float *)(((int)stk + 92)))), ((((struct o84_float *)(t182))->v)));
                    nlRotateAY((unsigned short)((((struct o1E_short *)0xC177D9C)->v)));
                    nlRotateAX((unsigned short)((((struct o1C_short *)0xC177D9C)->v)));
                    *(float *)(((int)stk + 80)) = 0.0f;
                    *(float *)(((int)stk + 84)) = 5.0f;
                    *(float *)(((int)stk + 88)) = 17.0f;
                    FUN_0c072230((((int)stk + 0) + 0x50), (((int)stk + 0) + 0x50));
                    camSetTarget((((int)stk + 0) + 0x50), 0x0);
                    FUN_0c018b1c(0x1);
                    nlPopMatrix(0x1);
                    (((struct o2C_uint *)0xC177E34)->v) = 0x28;
                }
                HomingAngle1(((((struct o8A_short *)((*(int *)(((int)stk + 76)))))->v)), 0xC177DBA, 0.150000006f);
                if (((((struct o3B4_int *)((*(int *)(((int)stk + 76)))))->v)) == 4) {
                    if (((((struct o30_float *)0xC177E34)->v)) == 0.0f) {
                        if ((((((struct o160_float *)((*(int *)(((int)stk + 76)))))->v)) > -0.100000001f) && (t210 = *(int *)(((int)stk + 76)), t211 = (((struct o124_int *)(t210))->v), t211 != 0)) {
                            (((struct o3C_uint *)0xC177E34)->v) = 0x1;
                        } else {
                            (((struct o3C_uint *)0xC177E34)->v) = 0x0;
                        }
                    }
                    u222 = (((struct o30_float *)0xC177E34)->v);
                    (((struct o30_float *)0xC177E34)->v) = (u222 + 0.00999999978f);
                    if ((u222 + 0.00999999978f) > 0.150000006f) {
                        (((struct o30_float *)0xC177E34)->v) = 0.150000006f;
                    }
                } else {
                    u225 = (((struct o30_float *)0xC177E34)->v);
                    (((struct o30_float *)0xC177E34)->v) = (u225 - 0.00999999978f);
                    if (0.0f > (u225 - 0.00999999978f)) {
                        (((struct o30_float *)0xC177E34)->v) = 0.0f;
                    }
                }
                if ((((((struct o160_float *)((*(int *)(((int)stk + 76)))))->v)) > -0.100000001f) && (t236 = *(int *)(((int)stk + 76)), u237 = (((struct o160_float *)(t236))->v), 0.100000001f > u237)) {
                    t246 = *(int *)(((int)stk + 76));
                    *(volatile float *)((t246 + 0x160));
                    HomingAngle1(((((struct oF8_short *)(t246))->v)), 0xC177E68, 0.150000006f);
                } else {
                    if (((((struct o30_float *)0xC177E34)->v)) == 0.0f) {
                        HomingAngle1(((((struct oF8_short *)((*(int *)(((int)stk + 76)))))->v)), 0xC177E68, 0.150000006f);
                    } else {
                        if ((0.0f > ((((struct o160_float *)((*(int *)(((int)stk + 76)))))->v))) && (t259 = (((struct o3C_int *)0xC177E34)->v), t259 != 0)) {
                            (((struct o34_ushort *)0xC177E34)->v) = (((((struct oF8_short *)((*(int *)(((int)stk + 76)))))->v)) + 0x8000);
                        } else {
                            (((struct o34_ushort *)0xC177E34)->v) = ((((struct oF8_short *)((*(int *)(((int)stk + 76)))))->v));
                        }
                    }
                }
                HomingAngle1(((((struct o34_short *)0xC177E34)->v)), 0xC177DBA, ((((struct o30_float *)0xC177E34)->v)));
                t284 = *(int *)(((int)stk + 76));
                u289 = ((((((struct o1D4_float *)(t284))->v)) + ((((struct o258_float *)(t284))->v))) * 0.5f);
                u290 = ((((((struct o2DC_float *)(t284))->v)) + ((((struct o360_float *)(t284))->v))) * 0.5f);
                *(float *)(((int)stk + 72)) = (u289 - u290);
                t291 = *(int *)(((int)stk + 76));
                FUN_0c01b920((((int)stk + 0) + 0x46), (u289 - u290), (((((struct o8_float *)(((((struct o70_int *)(t291))->v))))->v)) - ((((struct o8_float *)((((((struct o70_int *)(t291))->v)) + 0x18)))->v))));
                HomingAngle1((((((struct o88_short *)((*(int *)(((int)stk + 76)))))->v)) - (*(short *)(((int)stk + 70)))), 0xC177DB8, 0.100000001f);
                if (((((struct o30_float *)0xC177E34)->v)) == 0.0f) {
                    if (((((struct o38_int *)0xC177E34)->v)) != 0) {
                        if ((((((struct o124_int *)((*(int *)(((int)stk + 76)))))->v)) != 0) && (t322 = *(int *)(((int)stk + 76)), u323 = (((struct o160_float *)(t322))->v), !(-0.100000001f > u323))) {
                            (((struct o38_uint *)0xC177E34)->v) = 0x0;
                        }
                    } else {
                        if ((((((struct o124_int *)((*(int *)(((int)stk + 76)))))->v)) == 0) && (t331 = *(int *)(((int)stk + 76)), u332 = (((struct o160_float *)(t331))->v), 0.100000001f > u332)) {
                            (((struct o38_uint *)0xC177E34)->v) = 0x1;
                        }
                    }
                }
                if (((((struct o38_int *)0xC177E34)->v)) != 0) {
                    if (((((struct o160_float *)((*(int *)(((int)stk + 76)))))->v)) > 0.0f) {
                        (((struct o0_float *)0xC11CF4C)->v) = 0.0f;
                    } else {
                        (((struct o0_float *)0xC11CF4C)->v) = ((((struct o160_float *)((*(int *)(((int)stk + 76)))))->v));
                    }
                    t363 = FUN_0c05a3b0(((((struct o0_float *)0xC11CF4C)->v)));
                    if (t363 != 0) {
                        (((struct o0_float *)0xC11CF4C)->v) = 0.0f;
                    }
                    u371 = ((5.0f - ((((((struct o0_float *)0xC11CF4C)->v)) * 5.0f))) - ((((struct o24_float *)0xC177D9C)->v)));
                    u372 = ((((struct o24_float *)0xC177D9C)->v));
                    u372 = u372 + 0.200000003f * u371;
                    (((struct o24_float *)0xC177D9C)->v) = u372;
                } else {
                    if (0.0f > ((((struct o160_float *)((*(int *)(((int)stk + 76)))))->v))) {
                        (((struct o0_float *)0xC11CF4C)->v) = 0.0f;
                    } else {
                        (((struct o0_float *)0xC11CF4C)->v) = ((((struct o160_float *)((*(int *)(((int)stk + 76)))))->v));
                    }
                    u386 = (((((struct oC_float *)0xC11CF04)->v)) * ((((struct o0_float *)0xC11CE48)->v)));
                    u386 = u386 + ((((struct o10_float *)0xC11CF04)->v)) * ((((((struct o0_float *)0xC11CF4C)->v)) - ((((struct o24_float *)0xC177D9C)->v))));
                    (((struct o0_float *)0xC11CE48)->v) = u386;
                    t387 = FUN_0c05a3b0(u386);
                    if (t387 != 0) {
                        (((struct o0_float *)0xC11CE48)->v) = 0.0f;
                    }
                    (((struct o24_float *)0xC177D9C)->v) = (((((struct o24_float *)0xC177D9C)->v)) + ((((struct o0_float *)0xC11CE48)->v)));
                }
                t400 = *(int *)(((int)stk + 76));
                FUN_0c073a30(((((struct o7C_float *)(t400))->v)), (((((struct o80_float *)(t400))->v)) - (*(float *)(((int)stk + 92)))), ((((struct o84_float *)(t400))->v)));
                nlRotateAY((unsigned short)((((struct o1E_short *)0xC177D9C)->v)));
                nlRotateAX((unsigned short)((((struct o1C_short *)0xC177D9C)->v)));
                (((struct o4_float *)0xC11CF4C)->v) = ((((struct o104_float *)((*(int *)(((int)stk + 76)))))->v));
                if (((((struct o4_float *)0xC11CF4C)->v)) > 0.0f) {
                    (((struct o4_float *)0xC11CF4C)->v) = 0.0f;
                }
                *(float *)(((int)stk + 80)) = 0.0f;
                if (((((struct o38_int *)0xC177E34)->v)) != 0) {
                    *(float *)(((int)stk + 84)) = 5.0f;
                    u417 = 17.0f;
                    u417 = u417 + ((((struct o18_float *)0xC11CF04)->v)) * ((((struct o0_float *)0xC11CF4C)->v));
                    u425 = u417;
                } else {
                    u420 = 5.0f;
                    u420 = u420 + ((((struct o8_float *)0xC11CF04)->v)) * ((((struct o4_float *)0xC11CF4C)->v));
                    *(float *)(((int)stk + 84)) = u420;
                    u425 = 17.0f;
                }
                *(float *)(((int)stk + 88)) = u425;
                FUN_0c072230((((int)stk + 0) + 0x50), 0xC177E20);
                if (((((struct o38_int *)0xC177E34)->v)) != 0) {
                    u430 = 15.0f;
                    u430 = u430 + 0.466666669f * ((((struct o24_float *)0xC177D9C)->v));
                    *(float *)(((int)stk + 84)) = u430;
                    *(float *)(((int)stk + 88)) = ((((((((struct o0_float *)0xC11CF4C)->v)) * ((((struct o14_float *)0xC11CF04)->v)))) - ((((struct o24_float *)0xC177D9C)->v))) + -60.0f);
                } else {
                    u438 = (((((struct o24_float *)0xC177D9C)->v)) * 0.333333343f);
                    u438 = u438 + ((((struct o0_float *)0xC11CF04)->v)) * ((((struct o4_float *)0xC11CF4C)->v));
                    *(float *)(((int)stk + 84)) = (u438 + 15.0f);
                    *(float *)(((int)stk + 88)) = ((((((((struct o4_float *)0xC11CF4C)->v)) * ((((struct o4_float *)0xC11CF04)->v)))) - ((((struct o24_float *)0xC177D9C)->v))) + -60.0f);
                }
                FUN_0c072230((((int)stk + 0) + 0x50), (((int)stk + 0) + 0x50));
                nlSubVector3op((((int)stk + 0) + 0x40), (((int)stk + 0) + 0x50), 0xC177E20);
                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x50)) = *(struct mv3 *)(0xC177E20); }
                FUN_0c073c40((((int)stk + 0) + 0x34), (((int)stk + 0) + 0x40), 0.25f);
                FUN_0c073c40((((int)stk + 0) + 0x40), (((int)stk + 0) + 0x40), 0.75f);
                nlAddVector((((int)stk + 0) + 0x50), (((int)stk + 0) + 0x34));
                FUN_0c0295c0((((int)stk + 0) + 0x50), (((int)stk + 0) + 0x40), 0.0f, 5.0f);
                FUN_0c018b22((((int)stk + 0) + 0x50), 0x2);
                if ((int)((((struct o2C_int *)0xC177E34)->v)) > 0) {
                    if ((int)((((struct o2C_int *)0xC177E34)->v)) < (int)0xA) {
                        FUN_0c018c2a(0.200000003f, 0.0f);
                        u464 = 0.200000003f;
                    } else {
                        FUN_0c018c2a(0.100000001f, 0.0f);
                        u464 = 0.100000001f;
                    }
                    FUN_0c018c8a(u464, 0.0f);
                    (((struct o2C_uint *)0xC177E34)->v) = (((((struct o2C_int *)0xC177E34)->v)) - 1);
                } else {
                    FUN_0c018c2a(0.5f, 0.100000001f);
                    FUN_0c018c8a(0.800000012f, 0.300000012f);
                }
                (((struct o20_uint *)0xC177E34)->v) = (int)((float)((((struct o8C_short *)((*(int *)(((int)stk + 76)))))->v)) * 0.200000003f);
                FUN_0c018ce0(0.125f, 0.125f);
                CalcHomingAngle(0xC177E34);
                FUN_0c018b1c(0x1);
            }
                break;
            case 2:
            case 4:
            {
                (((struct o0_float *)0xC177D9C)->v) = 40.0f;
                if (((((struct o28_int *)0xC11CE48)->v)) != 0) {
                    FUN_0c018ce0(0.949999988f, 0.100000001f);
                    FUN_0c018c8a(1.0f, 0.100000001f);
                    FUN_0c018cec(120.0f);
                    FUN_0c018b1c(0x2);
                    (((struct o18_float *)0xC11CE48)->v) = 20.0f;
                }
                FUN_0c073a60(((*(int *)(((int)stk + 76))) + 0x7C));
                nlRotateAY((unsigned short)((((struct o8A_short *)((*(int *)(((int)stk + 76)))))->v)));
                nlRotateAX((unsigned short)((((struct o88_short *)((*(int *)(((int)stk + 76)))))->v)));
                nlRotateAZ((unsigned short)((((struct o8C_short *)((*(int *)(((int)stk + 76)))))->v)));
                if ((int)((((struct o0_int *)0xC175C80)->v)) < (int)0x8) {
                    t505 = (((struct o0_int *)0xC175C80)->v);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x50)) = *(struct mv3 *)(((((t505 << 1) + t505) << 2) + 0xC11CE74)); }
                } else {
                    if ((int)((((struct o0_int *)0xC175C80)->v)) < (int)0x10) {
                        if (((((struct o8_int *)0xC177D50)->v)) != 2) {
                            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x50)) = *(struct mv3 *)(0xC11CED4); }
                        } else {
                            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x50)) = *(struct mv3 *)(0xC11CEE0); }
                        }
                    } else {
                        if (((((struct o8_int *)0xC177D50)->v)) != 2) {
                            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x50)) = *(struct mv3 *)(0xC11CEEC); }
                        } else {
                            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x50)) = *(struct mv3 *)(0xC11CEF8); }
                        }
                    }
                }
                if (((((struct o8_int *)0xC177D50)->v)) == 2) {
                    *(float *)(((int)stk + 88)) = (-(*(float *)(((int)stk + 88))));
                }
                FUN_0c072230((((int)stk + 0) + 0x50), (((int)stk + 0) + 0x50));
                if (((((struct o8_int *)0xC177D50)->v)) == 2) {
                    FUN_0c018c96(((unsigned short)((((struct o88_short *)((*(int *)(((int)stk + 76)))))->v)) + 0xFE80), (unsigned short)((((struct o8A_short *)((*(int *)(((int)stk + 76)))))->v)), (unsigned short)((((struct o8C_short *)((*(int *)(((int)stk + 76)))))->v)), 0x2);
                } else {
                    FUN_0c018c96(((-(unsigned short)((((struct o88_short *)((*(int *)(((int)stk + 76)))))->v))) + 0xFE80), ((unsigned short)((((struct o8A_short *)((*(int *)(((int)stk + 76)))))->v)) + 0x8000), (-(unsigned short)((((struct o8C_short *)((*(int *)(((int)stk + 76)))))->v))), 0x2);
                }
                camSetTarget((((int)stk + 0) + 0x50), 0x2);
                FUN_0c018b1c(0x2);
            }
                break;
            case 6:
            {
                if (((((struct o28_int *)0xC11CE48)->v)) != 0) {
                    (((struct o0_float *)0xC177D9C)->v) = 60.0f;
                    FUN_0c018ce0(0.600000024f, 0.100000001f);
                    FUN_0c018c8a(0.800000012f, 0.100000001f);
                    FUN_0c018cec(600.0f);
                    FUN_0c018b1c(0x2);
                }
                if ((((((struct o0_int *)0xC1EC7C0)->v)) & 4) != 0) {
                    (((struct o18_float *)0xC11CE48)->v) = (((((struct o18_float *)0xC11CE48)->v)) - 5.0f);
                }
                if ((((((struct o0_int *)0xC1EC7C0)->v)) & 2) != 0) {
                    (((struct o18_float *)0xC11CE48)->v) = (((((struct o18_float *)0xC11CE48)->v)) + 5.0f);
                }
                if (300.0f > ((((struct o18_float *)0xC11CE48)->v))) {
                    (((struct o18_float *)0xC11CE48)->v) = 300.0f;
                }
                FUN_0c073a60(((*(int *)(((int)stk + 76))) + 0x7C));
                nlRotateAY((unsigned short)((((struct o8A_short *)((*(int *)(((int)stk + 76)))))->v)));
                nlRotateAX((unsigned short)((((struct o88_short *)((*(int *)(((int)stk + 76)))))->v)));
                *(float *)(((int)stk + 80)) = 0.0f;
                *(float *)(((int)stk + 84)) = 0.0f;
                *(float *)(((int)stk + 88)) = 120.0f;
                FUN_0c072230((((int)stk + 0) + 0x50), (((int)stk + 0) + 0x50));
                FUN_0c018c96(0xCC00, ((unsigned short)((((struct o8A_short *)((*(int *)(((int)stk + 76)))))->v)) + 0x8000), 0x0, 0x2);
                camSetTarget((((int)stk + 0) + 0x50), 0x2);
            }
                break;
            case 8:
            {
                if (((((struct o28_int *)0xC11CE48)->v)) != 0) {
                    FUN_0c018cec(60.0f);
                }
                FUN_0c018b1c(0x4);
                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x40)) = *(struct mv3 *)(0xC097100); }
                (((struct o0_ushort *)0xC177D50)->v) = (((((struct o0_short *)0xC177D50)->v)) & 0xFF00);
                (((struct o2_ushort *)0xC177D50)->v) = (((((struct o2_short *)0xC177D50)->v)) & 0xFF00);
                (((struct o4_ushort *)0xC177D50)->v) = 0x0;
                if ((((((struct o30_int *)0xC1EC75C)->v)) & 2) != 0) {
                    if (((((((struct o30_int *)0xC1EC75C)->v)) & 0x400) != 0) && (t602 = (((struct o30_int *)0xC1EC75C)->v), (t602 & 0x200) != 0)) {
                        if ((((((struct o30_int *)0xC1EC75C)->v)) & 16) != 0) {
                            *(float *)0xC11CFA4 = ((*(float *)0xC11CFA4) + 0.200000003f);
                        }
                        if ((((((struct o30_int *)0xC1EC75C)->v)) & 32) == 0) {
                        } else {
                            *(float *)0xC11CFA4 = ((*(float *)0xC11CFA4) - 0.200000003f);
                        }
                    } else {
                        if ((((((struct o30_int *)0xC1EC75C)->v)) & 128) != 0) {
                            *(float *)(((int)stk + 64)) = 1.0f;
                        }
                        if ((((((struct o30_int *)0xC1EC75C)->v)) & 64) != 0) {
                            *(float *)(((int)stk + 64)) = -1.0f;
                        }
                        if ((((((struct o30_int *)0xC1EC75C)->v)) & 16) != 0) {
                            *(float *)(((int)stk + 68)) = 1.0f;
                        }
                        if ((((((struct o30_int *)0xC1EC75C)->v)) & 32) != 0) {
                            *(float *)(((int)stk + 68)) = -1.0f;
                        }
                        if ((((((struct o30_int *)0xC1EC75C)->v)) & 0x400) != 0) {
                            *(float *)(((int)stk + 72)) = -1.0f;
                        }
                        if ((((((struct o30_int *)0xC1EC75C)->v)) & 0x200) != 0) {
                            *(float *)(((int)stk + 72)) = 1.0f;
                        }
                    }
                } else {
                    if ((((((struct o30_int *)0xC1EC75C)->v)) & 16) != 0) {
                        (((struct o0_ushort *)0xC177D50)->v) = (((((struct o0_short *)0xC177D50)->v)) + 0x100);
                    }
                    if ((((((struct o30_int *)0xC1EC75C)->v)) & 32) != 0) {
                        (((struct o0_ushort *)0xC177D50)->v) = (((((struct o0_short *)0xC177D50)->v)) - 0x100);
                    }
                    if ((((((struct o30_int *)0xC1EC75C)->v)) & 128) != 0) {
                        (((struct o2_ushort *)0xC177D50)->v) = (((((struct o2_short *)0xC177D50)->v)) - 0x100);
                    }
                    if ((((((struct o30_int *)0xC1EC75C)->v)) & 64) != 0) {
                        (((struct o2_ushort *)0xC177D50)->v) = (((((struct o2_short *)0xC177D50)->v)) + 0x100);
                    }
                    if ((((((struct o30_int *)0xC1EC75C)->v)) & 0x400) != 0) {
                        *(float *)(((int)stk + 72)) = -10.0f;
                    }
                    if ((((((struct o30_int *)0xC1EC75C)->v)) & 0x200) != 0) {
                        *(float *)(((int)stk + 72)) = 10.0f;
                    }
                    t684 = (((struct o0_short *)0xC177D50)->v);
                    *(unsigned int *)(((int)stk + 60)) = t684;
                    t687 = 0xFFFFC000;
                    if ((int)t684 < (int)0xFFFFC000) {
                    } else {
                        t687 = t684;
                        if ((int)t684 > (int)0x4000) {
                            t687 = 0x4000;
                        }
                    }
                    *(unsigned int *)(((int)stk + 60)) = t687;
                    (((struct o0_ushort *)0xC177D50)->v) = t687;
                }
                if ((((((struct o30_int *)0xC1EC75C)->v)) & 0x400) != 0) {
                    if (((((((struct o30_int *)0xC1EC75C)->v)) & 0x10000) != 0) && (t705 = (((struct o30_int *)0xC1EC75C)->v), (t705 & 0x20000) != 0)) {
                        if ((((((struct o30_int *)0xC1EC75C)->v)) & 16) != 0) {
                            *(float *)0xC11CFA4 = ((*(float *)0xC11CFA4) + 0.200000003f);
                        }
                        if ((((((struct o30_int *)0xC1EC75C)->v)) & 32) == 0) {
                        } else {
                            *(float *)0xC11CFA4 = ((*(float *)0xC11CFA4) - 0.200000003f);
                        }
                    } else {
                        if ((((((struct o30_int *)0xC1EC75C)->v)) & 128) != 0) {
                            *(float *)(((int)stk + 64)) = 1.0f;
                        }
                        if ((((((struct o30_int *)0xC1EC75C)->v)) & 64) != 0) {
                            *(float *)(((int)stk + 64)) = -1.0f;
                        }
                        if ((((((struct o30_int *)0xC1EC75C)->v)) & 16) != 0) {
                            *(float *)(((int)stk + 68)) = 1.0f;
                        }
                        if ((((((struct o30_int *)0xC1EC75C)->v)) & 32) != 0) {
                            *(float *)(((int)stk + 68)) = -1.0f;
                        }
                        if ((((((struct o30_int *)0xC1EC75C)->v)) & 0x10000) != 0) {
                            *(float *)(((int)stk + 72)) = -1.0f;
                        }
                        if ((((((struct o30_int *)0xC1EC75C)->v)) & 0x20000) != 0) {
                            *(float *)(((int)stk + 72)) = 1.0f;
                        }
                    }
                } else {
                    if ((((((struct o30_int *)0xC1EC75C)->v)) & 16) != 0) {
                        (((struct o0_ushort *)0xC177D50)->v) = (((((struct o0_short *)0xC177D50)->v)) + 0x100);
                    }
                    if ((((((struct o30_int *)0xC1EC75C)->v)) & 32) != 0) {
                        (((struct o0_ushort *)0xC177D50)->v) = (((((struct o0_short *)0xC177D50)->v)) - 0x100);
                    }
                    if ((((((struct o30_int *)0xC1EC75C)->v)) & 128) != 0) {
                        (((struct o2_ushort *)0xC177D50)->v) = (((((struct o2_short *)0xC177D50)->v)) - 0x100);
                    }
                    if ((((((struct o30_int *)0xC1EC75C)->v)) & 64) != 0) {
                        (((struct o2_ushort *)0xC177D50)->v) = (((((struct o2_short *)0xC177D50)->v)) + 0x100);
                    }
                    if ((((((struct o30_int *)0xC1EC75C)->v)) & 0x10000) != 0) {
                        *(float *)(((int)stk + 72)) = -10.0f;
                    }
                    if ((((((struct o30_int *)0xC1EC75C)->v)) & 0x20000) != 0) {
                        *(float *)(((int)stk + 72)) = 10.0f;
                    }
                    t787 = (((struct o0_short *)0xC177D50)->v);
                    *(unsigned int *)(((int)stk + 60)) = t787;
                    t790 = 0xFFFFC000;
                    if ((int)t787 < (int)0xFFFFC000) {
                    } else {
                        t790 = t787;
                        if ((int)t787 > (int)0x4000) {
                            t790 = 0x4000;
                        }
                    }
                    *(unsigned int *)(((int)stk + 60)) = t790;
                    (((struct o0_ushort *)0xC177D50)->v) = t790;
                }
                FUN_0c073360();
                nlRotateAY((unsigned short)((((struct o2_short *)0xC177D50)->v)));
                nlRotateAX((unsigned short)((((struct o0_short *)0xC177D50)->v)));
                FUN_0c072290((((int)stk + 0) + 0x40), (((int)stk + 0) + 0x40));
                nlPopMatrix(0x1);
                nlAddVector(0xC177D38, (((int)stk + 0) + 0x40));
                (((struct o0_float *)0xC177D9C)->v) = (*(float *)0xC11CFA4);
            }
                break;
            case 10:
            case 12:
            {
                if (((((struct o28_int *)0xC11CE48)->v)) != 0) {
                    (((struct o0_float *)0xC177D9C)->v) = 60.0f;
                    FUN_0c018ce0(0.400000006f, 0.100000001f);
                    FUN_0c018c8a(0.800000012f, 0.100000001f);
                    FUN_0c018cec(60.0f);
                    FUN_0c018b1c(0x2);
                    (((struct o1C_uint *)0xC11CE48)->v) = 0x0;
                    (((struct o20_uint *)0xC11CE48)->v) = 0x0;
                    (((struct o24_uint *)0xC11CE48)->v) = 0x0;
                }
                if ((((((struct o0_int *)0xC1EC7C0)->v)) & 16) != 0) {
                    (((struct o1C_uint *)0xC11CE48)->v) = (((((struct o1C_int *)0xC11CE48)->v)) - 0x100);
                }
                if ((((((struct o0_int *)0xC1EC7C0)->v)) & 32) != 0) {
                    (((struct o1C_uint *)0xC11CE48)->v) = (((((struct o1C_int *)0xC11CE48)->v)) + 0x100);
                }
                if ((((((struct o0_int *)0xC1EC7C0)->v)) & 128) != 0) {
                    (((struct o20_uint *)0xC11CE48)->v) = (((((struct o20_int *)0xC11CE48)->v)) - 0x100);
                }
                if ((((((struct o0_int *)0xC1EC7C0)->v)) & 64) != 0) {
                    (((struct o20_uint *)0xC11CE48)->v) = (((((struct o20_int *)0xC11CE48)->v)) + 0x100);
                }
                if ((((((struct o0_int *)0xC1EC7C0)->v)) & 0x10000) != 0) {
                    (((struct o18_float *)0xC11CE48)->v) = (((((struct o18_float *)0xC11CE48)->v)) - 1.0f);
                }
                if ((((((struct o0_int *)0xC1EC7C0)->v)) & 0x20000) != 0) {
                    (((struct o18_float *)0xC11CE48)->v) = (((((struct o18_float *)0xC11CE48)->v)) + 1.0f);
                }
                t863 = 0xFFFFC000;
                if ((int)((((struct o1C_int *)0xC11CE48)->v)) < (int)0xFFFFC000) {
                } else {
                    t863 = 0x4000;
                    if ((int)((((struct o1C_int *)0xC11CE48)->v)) > (int)0x4000) {
                    } else {
                        t863 = ((((struct o1C_int *)0xC11CE48)->v));
                    }
                }
                (((struct o1C_uint *)0xC11CE48)->v) = t863;
                if (((((struct oC_int *)0xC11CE48)->v)) != 0) {
                    if (((((struct o8_int *)0xC177D50)->v)) == 6) {
                        if (((((struct o14_int *)0xC11CE48)->v)) != 0) {
                            MultiRot4Vec(((((struct o14_int *)0xC11CE48)->v)));
                        } else {
                            if (((((struct o10_int *)0xC11CE48)->v)) != 0) {
                                nlRotateAY((unsigned short)(*(short *)((((((struct o10_int *)0xC11CE48)->v)) + 0x2))));
                                nlRotateAX((unsigned short)(*(short *)((((((struct o10_int *)0xC11CE48)->v)) + 0x0))));
                                nlRotateAZ((unsigned short)(*(short *)((((((struct o10_int *)0xC11CE48)->v)) + 0x4))));
                            }
                        }
                    }
                    nlRotateAY((((unsigned short)((((struct o8A_short *)((*(int *)(((int)stk + 76)))))->v)) + ((((struct o20_int *)0xC11CE48)->v))) + 0x8000));
                    nlRotateAX(((((struct o1C_int *)0xC11CE48)->v)));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC177E20) = *(struct mv3 *)(((((struct oC_int *)0xC11CE48)->v))); }
                    nlAddVector(0xC177E20, 0xC177DC8);
                    GetAng4Mat(0xC177E4C);
                }
                (((struct o2C_float *)0xC177D9C)->v) = 0.0f;
                (((struct o30_float *)0xC177D9C)->v) = 5.0f;
                (((struct o34_float *)0xC177D9C)->v) = 0.0f;
            }
                break;
            case 14:
            {
                (((struct o8_uint *)0xC177E34)->v) = 0x0;
                if (((((struct o28_int *)0xC11CE48)->v)) == 0) {
                } else {
                    (((struct o4_uint *)0xC177D9C)->v) = 0x3C;
                    (((struct o0_float *)0xC177D9C)->v) = 60.0f;
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x34)) = *(struct mv3 *)(((*(int *)(((int)stk + 76))) + 0x7C)); }
                    u929 = ((FUN_0c072140((unsigned short)((((struct oF8_short *)((*(int *)(((int)stk + 76)))))->v)))) * ((((struct oC_float *)0xC177D9C)->v)));
                    *(float *)(((int)stk + 40)) = (u929 * 0.300000012f);
                    *(float *)(((int)stk + 44)) = 0.0f;
                    u934 = ((FUN_0c072148((unsigned short)((((struct oF8_short *)((*(int *)(((int)stk + 76)))))->v)))) * ((((struct oC_float *)0xC177D9C)->v)));
                    *(float *)(((int)stk + 48)) = (u934 * 0.300000012f);
                    FUN_0c0295c0((((int)stk + 0) + 0x34), (((int)stk + 0) + 0x28), 1.0f, 0.0f);
                    if (((int)((((struct o8_int *)0xC175C80)->v)) >= (int)0x11) && (t937 = (((struct o8_int *)0xC175C80)->v), (int)t937 <= (int)0x12)) {
                        FUN_0c0468aa(0x22, (((int)stk + 0) + 0x34));
                    } else {
                        *(float *)(((int)stk + 0)) = 99999.8984f;
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x14)) = *(struct mv3 *)((((int)stk + 0) + 0x34)); }
                        if (((((struct o0_int *)0xC1EC71C)->v)) == 1) {
                            if (((int)((((struct o8_int *)0xC175C80)->v)) >= (int)0x11) && (t945 = (((struct o8_int *)0xC175C80)->v), (int)t945 <= (int)0x15)) {
                                t946 = FUN_0c0468aa(0x22, (((int)stk + 0) + 0x14));
                                *(float *)(((int)stk + 4)) = t946;
                                if ((*(float *)(((int)stk + 0))) > t946) {
                                    *(float *)(((int)stk + 0)) = (*(float *)(((int)stk + 4)));
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x8)) = *(struct mv3 *)((((int)stk + 0) + 0x14)); }
                                }
                            }
                            t958 = FUN_0c0468aa(0x13, (((int)stk + 0) + 0x14));
                            *(float *)(((int)stk + 4)) = t958;
                            if ((*(float *)(((int)stk + 0))) > t958) {
                                *(float *)(((int)stk + 0)) = (*(float *)(((int)stk + 4)));
                                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x8)) = *(struct mv3 *)((((int)stk + 0) + 0x14)); }
                            }
                            t966 = FUN_0c0468aa(0x1, (((int)stk + 0) + 0x34));
                            *(float *)(((int)stk + 4)) = t966;
                            if (!(t966 > (*(float *)(((int)stk + 0))))) {
                            } else {
                                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x34)) = *(struct mv3 *)((((int)stk + 0) + 0x8)); }
                            }
                        } else {
                            if (((((struct o0_int *)0xC1EC71C)->v)) == 0) {
                                t974 = FUN_0c0468aa(0x12, (((int)stk + 0) + 0x14));
                                *(float *)(((int)stk + 4)) = t974;
                                if ((*(float *)(((int)stk + 0))) > t974) {
                                    *(float *)(((int)stk + 0)) = (*(float *)(((int)stk + 4)));
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x8)) = *(struct mv3 *)((((int)stk + 0) + 0x14)); }
                                }
                                t982 = FUN_0c0468aa(0x0, (((int)stk + 0) + 0x34));
                                *(float *)(((int)stk + 4)) = t982;
                                if (!(t982 > (*(float *)(((int)stk + 0))))) {
                                } else {
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x34)) = *(struct mv3 *)((((int)stk + 0) + 0x8)); }
                                }
                            } else {
                                t988 = (((struct o8_int *)0xC1EC71C)->v);
                                switch (t988) {
                                case 0:
                                    *(float *)(((int)stk + 4)) = (FUN_0c0468aa(0x14, (((int)stk + 0) + 0x14)));
                                    break;
                                case 1:
                                    *(float *)(((int)stk + 4)) = (FUN_0c0468aa(0x15, (((int)stk + 0) + 0x14)));
                                    break;
                                case 2:
                                    *(float *)(((int)stk + 4)) = (FUN_0c0468aa(0x16, (((int)stk + 0) + 0x14)));
                                    break;
                                case 3:
                                    *(float *)(((int)stk + 4)) = (FUN_0c0468aa(0x17, (((int)stk + 0) + 0x14)));
                                    break;
                                case 4:
                                    *(float *)(((int)stk + 4)) = (FUN_0c0468aa(0x18, (((int)stk + 0) + 0x14)));
                                    break;
                                case 5:
                                    *(float *)(((int)stk + 4)) = (FUN_0c0468aa(0x19, (((int)stk + 0) + 0x14)));
                                    break;
                                case 7:
                                    *(float *)(((int)stk + 4)) = (FUN_0c0468aa(0x1A, (((int)stk + 0) + 0x14)));
                                    break;
                                case 9:
                                    *(float *)(((int)stk + 4)) = (FUN_0c0468aa(0x1B, (((int)stk + 0) + 0x14)));
                                    break;
                                case 10:
                                    *(float *)(((int)stk + 4)) = (FUN_0c0468aa(0x1C, (((int)stk + 0) + 0x14)));
                                    break;
                                case 11:
                                    *(float *)(((int)stk + 4)) = (FUN_0c0468aa(0x1D, (((int)stk + 0) + 0x14)));
                                    break;
                                case 12:
                                    *(float *)(((int)stk + 4)) = (FUN_0c0468aa(0x1E, (((int)stk + 0) + 0x14)));
                                    break;
                                case 13:
                                    *(float *)(((int)stk + 4)) = (FUN_0c0468aa(0x1F, (((int)stk + 0) + 0x14)));
                                    break;
                                default:
                                    *(float *)(((int)stk + 4)) = 999999.875f;
                                    break;
                                }
                                u1062 = *(float *)(((int)stk + 4));
                                if ((*(float *)(((int)stk + 0))) > u1062) {
                                    *(float *)(((int)stk + 0)) = u1062;
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x8)) = *(struct mv3 *)((((int)stk + 0) + 0x14)); }
                                }
                                t1069 = FUN_0c0468aa((((((struct o4_int *)0xC1EC71C)->v)) + ((((struct o8_int *)0xC1EC71C)->v))), (((int)stk + 0) + 0x34));
                                *(float *)(((int)stk + 4)) = t1069;
                                if (t1069 > (*(float *)(((int)stk + 0)))) {
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x34)) = *(struct mv3 *)((((int)stk + 0) + 0x8)); }
                                }
                            }
                        }
                    }
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC177DAC) = *(struct mv3 *)((((int)stk + 0) + 0x34)); }
                    *(float *)(((int)stk + 56)) = ((*(float *)(((int)stk + 56))) + ((((struct o8_float *)0xC177D9C)->v)));
                    FUN_0c018b22((((int)stk + 0) + 0x34), 0x0);
                    camSetTarget(((*(int *)(((int)stk + 76))) + 0x7C), 0x0);
                    FUN_0c018c8a(0.800000012f, 0.100000001f);
                    FUN_0c018b1c(0x1);
                }
                if (((((((struct o0_int *)0xC1EC7C0)->v)) & 16) != 0) && (t1105 = *(signed char *)0xC1EC7EB, (unsigned char)t1105 != 1)) {
                    u1106 = (((struct o8_float *)0xC177D9C)->v);
                    (((struct o8_float *)0xC177D9C)->v) = (u1106 + 0.5f);
                    if ((u1106 + 0.5f) > 200.0f) {
                        (((struct o8_float *)0xC177D9C)->v) = 200.0f;
                    }
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x14)) = *(struct mv3 *)(0xC177DAC); }
                    *(float *)(((int)stk + 24)) = ((*(float *)(((int)stk + 24))) + ((((struct o8_float *)0xC177D9C)->v)));
                    FUN_0c018b22((((int)stk + 0) + 0x14), 0x0);
                }
                if (((((((struct o0_int *)0xC1EC7C0)->v)) & 32) != 0) && (t1118 = *(signed char *)0xC1EC7EB, (unsigned char)t1118 != 1)) {
                    u1119 = (((struct o8_float *)0xC177D9C)->v);
                    (((struct o8_float *)0xC177D9C)->v) = (u1119 - 0.5f);
                    if (5.0f > (u1119 - 0.5f)) {
                        (((struct o8_float *)0xC177D9C)->v) = 5.0f;
                    }
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x14)) = *(struct mv3 *)(0xC177DAC); }
                    *(float *)(((int)stk + 24)) = ((*(float *)(((int)stk + 24))) + ((((struct o8_float *)0xC177D9C)->v)));
                    FUN_0c018b22((((int)stk + 0) + 0x14), 0x0);
                }
                if ((((((struct o0_int *)0xC1EC7C0)->v)) & 128) != 0) {
                    u1131 = (((struct oC_float *)0xC177D9C)->v);
                    (((struct oC_float *)0xC177D9C)->v) = (u1131 + 5.0f);
                    if ((u1131 + 5.0f) > 950.0f) {
                        (((struct oC_float *)0xC177D9C)->v) = 950.0f;
                    }
                }
                if ((((((struct o0_int *)0xC1EC7C0)->v)) & 64) != 0) {
                    u1143 = (((struct oC_float *)0xC177D9C)->v);
                    (((struct oC_float *)0xC177D9C)->v) = (u1143 - 5.0f);
                    if (200.0f > (u1143 - 5.0f)) {
                        (((struct oC_float *)0xC177D9C)->v) = 200.0f;
                    }
                }
                camSetTarget(((*(int *)(((int)stk + 76))) + 0x7C), 0x2);
                *(float *)(((int)stk + 36)) = (nlLength(0xC177DDC, 0xC177E08));
                if ((int)((((struct o4_int *)0xC177D9C)->v)) > 0) {
                    (((struct o4_uint *)0xC177D9C)->v) = (((((struct o4_int *)0xC177D9C)->v)) - 1);
                }
                if (!((*(float *)(((int)stk + 36))) > (((((struct oC_float *)0xC177D9C)->v)) + 50.0f))) {
                    if (((((struct o8_int *)0xC1EC71C)->v)) != 10) {
                    } else {
                        if (!(_builtin_fabsf((((((struct o0_float *)0xC177DE0)->v)) - ((((struct o2C_float *)0xC177DE0)->v)))) > 190.0f)) {
                        } else {
                            if ((int)((((struct o4_int *)0xC177D9C)->v)) > 0) {
                            } else {
                                (((struct o4_uint *)0xC177D9C)->v) = 0x3C;
                                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x34)) = *(struct mv3 *)(((*(int *)(((int)stk + 76))) + 0x7C)); }
                                *(float *)(((int)stk + 40)) = ((FUN_0c072140((unsigned short)((((struct oF8_short *)((*(int *)(((int)stk + 76)))))->v)))) * ((((struct oC_float *)0xC177D9C)->v)));
                                *(float *)(((int)stk + 44)) = 0.0f;
                                *(float *)(((int)stk + 48)) = ((FUN_0c072148((unsigned short)((((struct oF8_short *)((*(int *)(((int)stk + 76)))))->v)))) * ((((struct oC_float *)0xC177D9C)->v)));
                                FUN_0c0295c0((((int)stk + 0) + 0x34), (((int)stk + 0) + 0x28), 1.0f, 0.0f);
                                if (((int)((((struct o8_int *)0xC175C80)->v)) >= (int)0x11) && (t1179 = (((struct o8_int *)0xC175C80)->v), (int)t1179 <= (int)0x12)) {
                                    FUN_0c0468aa(0x22, (((int)stk + 0) + 0x34));
                                } else {
                                    *(float *)(((int)stk + 0)) = 99999.8984f;
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x14)) = *(struct mv3 *)((((int)stk + 0) + 0x34)); }
                                    if (((((struct o0_int *)0xC1EC71C)->v)) == 1) {
                                        if (((int)((((struct o8_int *)0xC175C80)->v)) >= (int)0x11) && (t1187 = (((struct o8_int *)0xC175C80)->v), (int)t1187 <= (int)0x15)) {
                                            t1188 = FUN_0c0468aa(0x22, (((int)stk + 0) + 0x14));
                                            *(float *)(((int)stk + 4)) = t1188;
                                            if ((*(float *)(((int)stk + 0))) > t1188) {
                                                *(float *)(((int)stk + 0)) = (*(float *)(((int)stk + 4)));
                                                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x8)) = *(struct mv3 *)((((int)stk + 0) + 0x14)); }
                                            }
                                        }
                                        t1200 = FUN_0c0468aa(0x13, (((int)stk + 0) + 0x14));
                                        *(float *)(((int)stk + 4)) = t1200;
                                        if ((*(float *)(((int)stk + 0))) > t1200) {
                                            *(float *)(((int)stk + 0)) = (*(float *)(((int)stk + 4)));
                                            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x8)) = *(struct mv3 *)((((int)stk + 0) + 0x14)); }
                                        }
                                        t1208 = FUN_0c0468aa(0x1, (((int)stk + 0) + 0x34));
                                        *(float *)(((int)stk + 4)) = t1208;
                                        if (!(t1208 > (*(float *)(((int)stk + 0))))) {
                                        } else {
                                            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x34)) = *(struct mv3 *)((((int)stk + 0) + 0x8)); }
                                        }
                                    } else {
                                        if (((((struct o0_int *)0xC1EC71C)->v)) == 0) {
                                            t1216 = FUN_0c0468aa(0x12, (((int)stk + 0) + 0x14));
                                            *(float *)(((int)stk + 4)) = t1216;
                                            if ((*(float *)(((int)stk + 0))) > t1216) {
                                                *(float *)(((int)stk + 0)) = (*(float *)(((int)stk + 4)));
                                                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x8)) = *(struct mv3 *)((((int)stk + 0) + 0x14)); }
                                            }
                                            t1224 = FUN_0c0468aa(0x0, (((int)stk + 0) + 0x34));
                                            *(float *)(((int)stk + 4)) = t1224;
                                            if (!(t1224 > (*(float *)(((int)stk + 0))))) {
                                            } else {
                                                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x34)) = *(struct mv3 *)((((int)stk + 0) + 0x8)); }
                                            }
                                        } else {
                                            t1230 = (((struct o8_int *)0xC1EC71C)->v);
                                            switch (t1230) {
                                            case 0:
                                                *(float *)(((int)stk + 4)) = (FUN_0c0468aa(0x14, (((int)stk + 0) + 0x14)));
                                                break;
                                            case 1:
                                                *(float *)(((int)stk + 4)) = (FUN_0c0468aa(0x15, (((int)stk + 0) + 0x14)));
                                                break;
                                            case 2:
                                                *(float *)(((int)stk + 4)) = (FUN_0c0468aa(0x16, (((int)stk + 0) + 0x14)));
                                                break;
                                            case 3:
                                                *(float *)(((int)stk + 4)) = (FUN_0c0468aa(0x17, (((int)stk + 0) + 0x14)));
                                                break;
                                            case 4:
                                                *(float *)(((int)stk + 4)) = (FUN_0c0468aa(0x18, (((int)stk + 0) + 0x14)));
                                                break;
                                            case 5:
                                                *(float *)(((int)stk + 4)) = (FUN_0c0468aa(0x19, (((int)stk + 0) + 0x14)));
                                                break;
                                            case 7:
                                                *(float *)(((int)stk + 4)) = (FUN_0c0468aa(0x1A, (((int)stk + 0) + 0x14)));
                                                break;
                                            case 9:
                                                *(float *)(((int)stk + 4)) = (FUN_0c0468aa(0x1B, (((int)stk + 0) + 0x14)));
                                                break;
                                            case 10:
                                                *(float *)(((int)stk + 4)) = (FUN_0c0468aa(0x1C, (((int)stk + 0) + 0x14)));
                                                break;
                                            case 11:
                                                *(float *)(((int)stk + 4)) = (FUN_0c0468aa(0x1D, (((int)stk + 0) + 0x14)));
                                                break;
                                            case 12:
                                                *(float *)(((int)stk + 4)) = (FUN_0c0468aa(0x1E, (((int)stk + 0) + 0x14)));
                                                break;
                                            case 13:
                                                *(float *)(((int)stk + 4)) = (FUN_0c0468aa(0x1F, (((int)stk + 0) + 0x14)));
                                                break;
                                            default:
                                                *(float *)(((int)stk + 4)) = 999999.875f;
                                                break;
                                            }
                                            u1304 = *(float *)(((int)stk + 4));
                                            if ((*(float *)(((int)stk + 0))) > u1304) {
                                                *(float *)(((int)stk + 0)) = u1304;
                                                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x8)) = *(struct mv3 *)((((int)stk + 0) + 0x14)); }
                                            }
                                            t1311 = FUN_0c0468aa((((((struct o4_int *)0xC1EC71C)->v)) + ((((struct o8_int *)0xC1EC71C)->v))), (((int)stk + 0) + 0x34));
                                            *(float *)(((int)stk + 4)) = t1311;
                                            if (t1311 > (*(float *)(((int)stk + 0)))) {
                                                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x34)) = *(struct mv3 *)((((int)stk + 0) + 0x8)); }
                                            }
                                        }
                                    }
                                }
                                { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC177DAC) = *(struct mv3 *)((((int)stk + 0) + 0x34)); }
                                *(float *)(((int)stk + 56)) = ((*(float *)(((int)stk + 56))) + ((((struct o8_float *)0xC177D9C)->v)));
                                FUN_0c018b22((((int)stk + 0) + 0x34), 0x2);
                            }
                        }
                    }
                } else {
                    if ((int)((((struct o4_int *)0xC177D9C)->v)) > 0) {
                    } else {
                        (((struct o4_uint *)0xC177D9C)->v) = 0x3C;
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x34)) = *(struct mv3 *)(((*(int *)(((int)stk + 76))) + 0x7C)); }
                        *(float *)(((int)stk + 40)) = ((FUN_0c072140((unsigned short)((((struct oF8_short *)((*(int *)(((int)stk + 76)))))->v)))) * ((((struct oC_float *)0xC177D9C)->v)));
                        *(float *)(((int)stk + 44)) = 0.0f;
                        *(float *)(((int)stk + 48)) = ((FUN_0c072148((unsigned short)((((struct oF8_short *)((*(int *)(((int)stk + 76)))))->v)))) * ((((struct oC_float *)0xC177D9C)->v)));
                        FUN_0c0295c0((((int)stk + 0) + 0x34), (((int)stk + 0) + 0x28), 1.0f, 0.0f);
                        if (((int)((((struct o8_int *)0xC175C80)->v)) >= (int)0x11) && (t1373 = (((struct o8_int *)0xC175C80)->v), (int)t1373 <= (int)0x12)) {
                            FUN_0c0468aa(0x22, (((int)stk + 0) + 0x34));
                        } else {
                            *(float *)(((int)stk + 0)) = 99999.8984f;
                            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x14)) = *(struct mv3 *)((((int)stk + 0) + 0x34)); }
                            if (((((struct o0_int *)0xC1EC71C)->v)) == 1) {
                                if (((int)((((struct o8_int *)0xC175C80)->v)) >= (int)0x11) && (t1381 = (((struct o8_int *)0xC175C80)->v), (int)t1381 <= (int)0x15)) {
                                    t1382 = FUN_0c0468aa(0x22, (((int)stk + 0) + 0x14));
                                    *(float *)(((int)stk + 4)) = t1382;
                                    if ((*(float *)(((int)stk + 0))) > t1382) {
                                        *(float *)(((int)stk + 0)) = (*(float *)(((int)stk + 4)));
                                        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x8)) = *(struct mv3 *)((((int)stk + 0) + 0x14)); }
                                    }
                                }
                                t1394 = FUN_0c0468aa(0x13, (((int)stk + 0) + 0x14));
                                *(float *)(((int)stk + 4)) = t1394;
                                if ((*(float *)(((int)stk + 0))) > t1394) {
                                    *(float *)(((int)stk + 0)) = (*(float *)(((int)stk + 4)));
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x8)) = *(struct mv3 *)((((int)stk + 0) + 0x14)); }
                                }
                                t1402 = FUN_0c0468aa(0x1, (((int)stk + 0) + 0x34));
                                *(float *)(((int)stk + 4)) = t1402;
                                if (!(t1402 > (*(float *)(((int)stk + 0))))) {
                                } else {
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x34)) = *(struct mv3 *)((((int)stk + 0) + 0x8)); }
                                }
                            } else {
                                if (((((struct o0_int *)0xC1EC71C)->v)) == 0) {
                                    t1410 = FUN_0c0468aa(0x12, (((int)stk + 0) + 0x14));
                                    *(float *)(((int)stk + 4)) = t1410;
                                    if ((*(float *)(((int)stk + 0))) > t1410) {
                                        *(float *)(((int)stk + 0)) = (*(float *)(((int)stk + 4)));
                                        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x8)) = *(struct mv3 *)((((int)stk + 0) + 0x14)); }
                                    }
                                    t1418 = FUN_0c0468aa(0x0, (((int)stk + 0) + 0x34));
                                    *(float *)(((int)stk + 4)) = t1418;
                                    if (!(t1418 > (*(float *)(((int)stk + 0))))) {
                                    } else {
                                        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x34)) = *(struct mv3 *)((((int)stk + 0) + 0x8)); }
                                    }
                                } else {
                                    t1424 = (((struct o8_int *)0xC1EC71C)->v);
                                    switch (t1424) {
                                    case 0:
                                        *(float *)(((int)stk + 4)) = (FUN_0c0468aa(0x14, (((int)stk + 0) + 0x14)));
                                        break;
                                    case 1:
                                        *(float *)(((int)stk + 4)) = (FUN_0c0468aa(0x15, (((int)stk + 0) + 0x14)));
                                        break;
                                    case 2:
                                        *(float *)(((int)stk + 4)) = (FUN_0c0468aa(0x16, (((int)stk + 0) + 0x14)));
                                        break;
                                    case 3:
                                        *(float *)(((int)stk + 4)) = (FUN_0c0468aa(0x17, (((int)stk + 0) + 0x14)));
                                        break;
                                    case 4:
                                        *(float *)(((int)stk + 4)) = (FUN_0c0468aa(0x18, (((int)stk + 0) + 0x14)));
                                        break;
                                    case 5:
                                        *(float *)(((int)stk + 4)) = (FUN_0c0468aa(0x19, (((int)stk + 0) + 0x14)));
                                        break;
                                    case 7:
                                        *(float *)(((int)stk + 4)) = (FUN_0c0468aa(0x1A, (((int)stk + 0) + 0x14)));
                                        break;
                                    case 9:
                                        *(float *)(((int)stk + 4)) = (FUN_0c0468aa(0x1B, (((int)stk + 0) + 0x14)));
                                        break;
                                    case 10:
                                        *(float *)(((int)stk + 4)) = (FUN_0c0468aa(0x1C, (((int)stk + 0) + 0x14)));
                                        break;
                                    case 11:
                                        *(float *)(((int)stk + 4)) = (FUN_0c0468aa(0x1D, (((int)stk + 0) + 0x14)));
                                        break;
                                    case 12:
                                        *(float *)(((int)stk + 4)) = (FUN_0c0468aa(0x1E, (((int)stk + 0) + 0x14)));
                                        break;
                                    case 13:
                                        *(float *)(((int)stk + 4)) = (FUN_0c0468aa(0x1F, (((int)stk + 0) + 0x14)));
                                        break;
                                    default:
                                        *(float *)(((int)stk + 4)) = 999999.875f;
                                        break;
                                    }
                                    u1498 = *(float *)(((int)stk + 4));
                                    if ((*(float *)(((int)stk + 0))) > u1498) {
                                        *(float *)(((int)stk + 0)) = u1498;
                                        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x8)) = *(struct mv3 *)((((int)stk + 0) + 0x14)); }
                                    }
                                    t1505 = FUN_0c0468aa((((((struct o4_int *)0xC1EC71C)->v)) + ((((struct o8_int *)0xC1EC71C)->v))), (((int)stk + 0) + 0x34));
                                    *(float *)(((int)stk + 4)) = t1505;
                                    if (t1505 > (*(float *)(((int)stk + 0)))) {
                                        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x34)) = *(struct mv3 *)((((int)stk + 0) + 0x8)); }
                                    }
                                }
                            }
                        }
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC177DAC) = *(struct mv3 *)((((int)stk + 0) + 0x34)); }
                        *(float *)(((int)stk + 56)) = ((*(float *)(((int)stk + 56))) + ((((struct o8_float *)0xC177D9C)->v)));
                        FUN_0c018b22((((int)stk + 0) + 0x34), 0x2);
                    }
                }
                t1546 = nlLength(0xC177DDC, 0xC177E08);
                *(float *)(((int)stk + 36)) = t1546;
                *(float *)(((int)stk + 36)) = (t1546 - 50.0f);
                if ((t1546 - 50.0f) > 550.0f) {
                    (((struct o0_float *)0xC177D9C)->v) = 6.0f;
                } else {
                    u1548 = *(float *)(((int)stk + 36));
                    if (0.0f > u1548) {
                        (((struct o0_float *)0xC177D9C)->v) = 51.0f;
                    } else {
                        u1550 = (((550.0f - u1548) / 550.0f) * ((550.0f - (*(float *)(((int)stk + 36)))) / 550.0f));
                        u1551 = 6.0f;
                        u1551 = u1551 + 45.0f * u1550;
                        (((struct o0_float *)0xC177D9C)->v) = u1551;
                    }
                }
            }
                break;
            case 16:
            {
            }
                break;
            case 18:
            {
                FUN_0c05ccce(((((struct o28_int *)0xC11CE48)->v)));
            }
                break;
            case 20:
            {
                FUN_0c05a3f8(((((struct o28_int *)0xC11CE48)->v)));
            }
                break;
            case 22:
            {
            }
                break;
            case 24:
            {
                FUN_0c06ce72();
            }
                break;
            case 26:
            {
                FUN_0c06db2e();
            }
                break;
            default:
            {
                FUN_0c06e460();
            }
                break;
        }
    }
    nlPopMatrix(0x1);
    (((struct oC_uint *)0xC11CE48)->v) = ((*(int *)(((int)stk + 76))) + 0x7C);
    (((struct o10_uint *)0xC11CE48)->v) = (0x88 + (*(int *)(((int)stk + 76))));
    (((struct o14_uint *)0xC11CE48)->v) = 0x0;
    (((struct o28_uint *)0xC11CE48)->v) = 0x0;
    nlMatrixMode(0x3);
    nlUnitMatrix();
    nlPerspectiveX(((int)((((((((struct o0_float *)0xC177D9C)->v)) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF), ((((struct o8_float *)0xC11CE48)->v)), 0.300000012f, 300.0f);
    (((struct o8_float *)0xC11CE48)->v) = 1.33333337f;
    FUN_0c073360();
    t1593 = (((struct o28_int *)0xC177D9C)->v);
    switch (t1593) {
    case 4:
        FUN_0c018b22(0xC177D38, 0x0);
        FUN_0c018c96((unsigned short)((((struct o0_short *)0xC177D50)->v)), (unsigned short)((((struct o2_short *)0xC177D50)->v)), (unsigned short)((((struct o4_short *)0xC177D50)->v)), 0x0);
        CalcHomingVector(0xC177DDC);
        CalcHomingAngle(0xC177E34);
        FUN_0c073a60(0xC177DDC);
        nlRotateAY(((((struct o4_int *)0xC177E34)->v)));
        nlRotateAX(((((struct o0_int *)0xC177E34)->v)));
        nlRotateAZ(((((struct o8_int *)0xC177E34)->v)));
        nlPushMatrix(0x0);
        FUN_0c073a30(0.0f, 0.0f, (-((((struct o18_float *)0xC11CE48)->v))));
        FUN_0c072600((((int)stk + 0) + 0x40));
        nlSubVector3op(0xC177E14, (((int)stk + 0) + 0x40), 0xC177E08);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC177E08) = *(struct mv3 *)((((int)stk + 0) + 0x40)); }
        nlPopMatrix(0x1);
        nlInvertMatrix(0x0);
        nlGetMatrix(0xC177D5C);
        break;
    case 0:
        CalcHomingVector(0xC177DDC);
        CalcHomingAngle(0xC177E34);
        FUN_0c073a60(0xC177DDC);
        nlRotateAY(((((struct o4_int *)0xC177E34)->v)));
        nlRotateAX(((((struct o0_int *)0xC177E34)->v)));
        nlRotateAZ(((((struct o8_int *)0xC177E34)->v)));
        nlPushMatrix(0x0);
        FUN_0c073a30(0.0f, 0.0f, (-((((struct o18_float *)0xC11CE48)->v))));
        FUN_0c072600((((int)stk + 0) + 0x40));
        nlSubVector3op(0xC177E14, (((int)stk + 0) + 0x40), 0xC177E08);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC177E08) = *(struct mv3 *)((((int)stk + 0) + 0x40)); }
        nlPopMatrix(0x1);
        nlInvertMatrix(0x0);
        nlGetMatrix(0xC177D5C);
        break;
    case 1:
        CalcHomingVector(0xC177DDC);
        CalcHomingVector(0xC177E08);
        nlLookAt(0xC177DDC, 0xC177E08, ((((struct o8_int *)0xC177E34)->v)));
        nlGetMatrix(0xC177D5C);
        nlInvertMatrix(0x0);
        GetAng4Mat((((int)stk + 0) + 0x40));
        (((struct oC_uint *)0xC177E34)->v) = ((*(int *)(((int)stk + 64))) - ((((struct o0_int *)0xC177E34)->v)));
        (((struct o10_uint *)0xC177E34)->v) = ((*(int *)(((int)stk + 68))) - ((((struct o4_int *)0xC177E34)->v)));
        (((struct o0_uint *)0xC177E34)->v) = (*(int *)(((int)stk + 64)));
        (((struct o4_uint *)0xC177E34)->v) = (*(int *)(((int)stk + 68)));
        (((struct o18_float *)0xC11CE48)->v) = (nlLength(0xC177DDC, 0xC177E08));
        break;
    case 2:
        CalcHomingVector(0xC177E08);
        CalcHomingAngle(0xC177E34);
        FUN_0c073a60(0xC177E08);
        nlRotateAY(((((struct o4_int *)0xC177E34)->v)));
        nlRotateAX(((((struct o0_int *)0xC177E34)->v)));
        nlRotateAZ(((((struct o8_int *)0xC177E34)->v)));
        FUN_0c073a30(0.0f, 0.0f, ((((struct o18_float *)0xC11CE48)->v)));
        FUN_0c072600((((int)stk + 0) + 0x40));
        nlSubVector3op(0xC177DE8, (((int)stk + 0) + 0x40), 0xC177DDC);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC177DDC) = *(struct mv3 *)((((int)stk + 0) + 0x40)); }
        nlInvertMatrix(0x0);
        nlGetMatrix(0xC177D5C);
        break;
    }
    nlPopMatrix(0x1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC177D38) = *(struct mv3 *)(0xC177DDC); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC177D44) = *(struct mv3 *)(0xC177E08); }
    (((struct o0_ushort *)0xC177D50)->v) = ((((struct o0_short *)0xC177E34)->v));
    (((struct o2_ushort *)0xC177D50)->v) = ((((struct o4_short *)0xC177E34)->v));
    (((struct o4_ushort *)0xC177D50)->v) = ((((struct o8_short *)0xC177E34)->v));
    nlMatrixMode(0x2);
    FUN_0c072b60(0xC177D5C);
    nlMatrixMode(0x1);
    FUN_0c05bdde(((int)((((((((struct o0_float *)0xC177D9C)->v)) * ((((struct o0_float *)0xC018BD4)->v))) / ((((struct o8_float *)0xC018BD4)->v)))) + ((((struct oC_float *)0xC018BD4)->v))) & 0xFFFF));
    return (FUN_0c05a338());
}


int FUN_0c045284(int a4)
{
    int stk[19];
    register int t2;
    register int t4;
    register float t13;
    register float t23;
    register float u52;
    register int t66;
    register int t67;
    register int t75;
    register int t77;
    register int t79;
    register int t84;
    register int t87;
    register float t91;
    register int t93;
    register int t96;
    register float t104;
    register float u124;
    register float u125;
    register float u105;
    register float u106;
    register int t108;
    register int t110;
    register int t116;
    register int t118;
    register int t128;
    register int t129;
    register int t132;
    register int t139;
    register int t140;
    register int t190;
    register int t3;
    float u14;
    register float u28;

    FUN_0c043706(a4);
    t2 = (((struct o84_int *)(a4))->v);
    if ((t2 & 1) == 0) {
        *(unsigned int *)(((int)stk + 4)) = 0x0;
        t4 = a4;
        for (;;) {
            if ((int)(*(int *)(((int)stk + 4))) >= (int)0x5) {
                break;
            }
            t2 = 0x84;
            t4 = (*(int *)((t4 + 0x8)));
            *(unsigned int *)((t4 + t2)) = ((*(int *)((t4 + t2))) & 0xFFFFFFFE);
            t3 = (*(int *)(((int)stk + 4)));
            t3 = (t3 + 0x1);
            *(unsigned int *)(((int)stk + 4)) = t3;
        }
        KillColliObj((a4 + 0x14), 0xFFFFFFFE, 0x5);
        t190 = nlCloseEvent(a4);
        *(unsigned int *)0xC2AB7EC = ((*(int *)0xC2AB7EC) - 1);
    } else {
        t13 = nlLength(((*(int *)0xC2A59D4) + 0x7C), (0x8C + a4));
        if ((800.0f > t13) && (u14 = (((struct oCC_float *)(a4))->v), u14 > 0.694444418f)) {
            *(unsigned int *)0xC2AC2E8 = ((*(int *)0xC2AC2E8) | 0x3);
        }
        FUN_0c044ba0(a4);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x24)) = *(struct mv3 *)((0x98 + a4)); }
        if ((((((struct o84_int *)(a4))->v)) & 8) != 0) {
            FUN_0c073c40((a4 + 0x5C), (a4 + 0x5C), 0.200000003f);
            t23 = FUN_0c073b40((a4 + 0x5C), (a4 + 0x44));
            (((struct o100_float *)(a4))->v) = t23;
            u28 = t23;
        }
        if ((((((struct o84_int *)(a4))->v)) & 4) == 0) {
        } else {
            (((struct o9C_float *)(a4))->v) = (((((struct o9C_float *)(a4))->v)) - 0.0734999999f);
            if ((int)((((struct o110_int *)(a4))->v)) > 0) {
                (((struct o110_uint *)(a4))->v) = (((((struct o110_int *)(a4))->v)) - 1);
                FUN_0c041178(a4);
                FUN_0c041298(a4);
            }
            FUN_0c073c40((0x98 + a4), (0x98 + a4), 0.999800026f);
            FUN_0c073360();
            nlRotateAZ((-(unsigned short)((((struct oA8_short *)(a4))->v))));
            nlRotateAX((-(unsigned short)((((struct oA4_short *)(a4))->v))));
            nlRotateAY((-(unsigned short)((((struct oA6_short *)(a4))->v))));
            FUN_0c072290((0x98 + a4), (((int)stk + 4) + 0x3C));
            u52 = *(float *)(((int)stk + 72));
            (((struct oCC_float *)(a4))->v) = u52;
            nlPopMatrix(0x1);
            FUN_0c073360();
            FUN_0c0739a0((0x8C + a4));
            nlRotateAY((unsigned short)((((struct oA6_short *)(a4))->v)));
            nlRotateAX((unsigned short)((((struct oA4_short *)(a4))->v)));
            nlRotateAZ((unsigned short)((((struct oA8_short *)(a4))->v)));
            FUN_0c073a30(0.0f, 0.0f, 45.0f);
            FUN_0c072600((((int)stk + 4) + 0x18));
            nlPopMatrix(0x1);
            *(unsigned int *)(((int)stk + 4)) = ((((struct oD4_int *)(a4))->v));
            *(int *)((int)stk + 0) = (((int)stk + 4) + 0x18);
            t66 = (((struct o80_int *)(a4))->v);
            t67 = *(int *)0xC2ADA7C;
            *(unsigned int *)(((int)stk + 12)) = ((((t66 << 1) + t66) << 2) + t67);
            FUN_0c0469e2(0x2, (*(int *)(((*(int *)(((int)stk + 12))) + 0x0))), (*(int *)(((*(int *)((((((t66 << 1) + t66) << 2) + t67) + 0x4))) + 0x0))), (((int)stk + 0) + 0x4), (((int)stk + 4) + 0x18));
            t75 = (((struct o80_int *)(a4))->v);
            t77 = *(int *)(((int)stk + 4));
            t79 = *(int *)((((((t75 << 1) + t75) << 2) + (*(int *)0xC2ADA7C)) + 0x0));
            *(unsigned int *)(((int)stk + 12)) = ((((t77 << 1) + t77) << 2) + t79);
            nlSubVector3op((((int)stk + 4) + 0x3C), ((((t77 << 1) + t77) << 2) + t79), (((int)stk + 4) + 0x18));
            *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 4))) + 0x1);
            FUN_0c046fde((0x80 + a4), (((int)stk + 4) + 0x4), 0x0);
            t84 = (((struct o80_int *)(a4))->v);
            t87 = *(int *)(((int)stk + 8));
            nlSubVector3op((((int)stk + 4) + 0x30), ((*(int *)((((((t84 << 1) + t84) << 2) + (*(int *)0xC2ADA7C)) + 0x0))) + (((t87 << 1) + t87) << 2)), (*(int *)(((int)stk + 12))));
            t91 = FUN_0c073b40((((int)stk + 4) + 0x3C), (((int)stk + 4) + 0x30));
            if (0.0f > t91) {
                *(unsigned int *)(((int)stk + 4)) = (*(int *)(((int)stk + 8)));
                t93 = (((struct o80_int *)(a4))->v);
                t96 = *(int *)(((int)stk + 4));
                nlSubVector3op((((int)stk + 4) + 0x3C), ((*(int *)((((((t93 << 1) + t93) << 2) + (*(int *)0xC2ADA7C)) + 0x0))) + (((t96 << 1) + t96) << 2)), (((int)stk + 4) + 0x18));
            }
            t104 = FUN_0c073c60((((int)stk + 4) + 0x3C));
            u124 = u52;
            u125 = t104;
            if (u52 > t104) {
                u105 = u52;
                u106 = t104;
                for (;;) {
                    u105 = (u105 - u106);
                    t108 = (((struct o80_int *)(a4))->v);
                    t110 = *(int *)(((int)stk + 4));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x18)) = *(struct mv3 *)(((*(int *)((((((t108 << 1) + t108) << 2) + (*(int *)0xC2ADA7C)) + 0x0))) + (((t110 << 1) + t110) << 2))); }
                    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x1);
                    FUN_0c046fde((0x80 + a4), ((int)stk + 4), 0x0);
                    t116 = (((struct o80_int *)(a4))->v);
                    t118 = *(int *)(((int)stk + 4));
                    nlSubVector3op((((int)stk + 4) + 0x3C), ((*(int *)((((((t116 << 1) + t116) << 2) + (*(int *)0xC2ADA7C)) + 0x0))) + (((t118 << 1) + t118) << 2)), (((int)stk + 4) + 0x18));
                    u106 = (FUN_0c073c60((((int)stk + 4) + 0x3C)));
                    if (!(u105 > u106)) {
                        break;
                    }
                }
                u124 = u105;
                u125 = u106;
            }
            FUN_0c073c40((((int)stk + 4) + 0x3C), (((int)stk + 4) + 0x3C), (u124 / u125));
            nlAddVector3op((((int)stk + 4) + 0x18), (((int)stk + 4) + 0x18), (((int)stk + 4) + 0x3C));
            t128 = (((struct oD4_int *)(a4))->v);
            t129 = (((struct o80_int *)(a4))->v);
            *(int *)((int)stk + 0) = (((int)stk + 4) + 0xC);
            FUN_0c045108(0xFFFFFFFF, (((int)stk + 4) + 0x18), t129, t128, (((int)stk + 4) + 0xC), 90.0f);
            nlGetAverageVector((((int)stk + 4) + 0x18), (((int)stk + 4) + 0xC), (0x8C + a4), 0.5f, 0.5f);
            t132 = FUN_0c029b12((0x8C + a4), 10.0f);
            if ((*(int *)((t132 + 0x1C))) != -1) {
                { struct mv3 { int w[3]; }; *(struct mv3 *)((0xEC + a4)) = *(struct mv3 *)((t132 + 0xC)); }
                (((struct o104_float *)(a4))->v) = ((((struct o18_float *)(t132))->v));
                FUN_0c0415ba(a4);
            }
            (((struct o110_uint *)(a4))->v) = 0xA;
            *(int *)((int)stk + 0) = (0x8C + a4);
            t139 = (((struct o80_int *)(a4))->v);
            t140 = *(int *)0xC2ADA7C;
            *(unsigned int *)(((int)stk + 12)) = ((((t139 << 1) + t139) << 2) + t140);
            FUN_0c0469e2(0x2, (*(int *)(((*(int *)(((int)stk + 12))) + 0x0))), (*(int *)(((*(int *)((((((t139 << 1) + t139) << 2) + t140) + 0x4))) + 0x0))), (0xD4 + a4), (0x8C + a4));
            nlSubVector3op((((int)stk + 4) + 0x24), (0x98 + a4), (((int)stk + 4) + 0x24));
            FUN_0c073360();
            nlSubVector3op((((int)stk + 4) + 0x3C), (((int)stk + 4) + 0x18), (((int)stk + 4) + 0xC));
            FUN_0c073e90((((int)stk + 4) + 0x3C));
            nlRotateV(0xC0C3690, (((int)stk + 4) + 0x3C));
            FUN_0c046814((0xA4 + a4));
            FUN_0c073360();
            nlRotateAX((-(unsigned short)((((struct oA4_short *)(a4))->v))));
            nlRotateAY((-(unsigned short)((((struct oA6_short *)(a4))->v))));
            FUN_0c072290((0xEC + a4), (((int)stk + 4) + 0x3C));
            (((struct oA8_ushort *)(a4))->v) = (-(nlArcTan2((*(float *)(((int)stk + 64))), (*(float *)(((int)stk + 68))))));
            nlPopMatrix(0x1);
            nlPopMatrix(0x1);
            (((struct o108_uchar *)(a4))->v) = (*(signed char *)(((0xA4 + a4) + 0x0)));
            *(unsigned char *)(((0x108 + a4) + 0x1)) = (*(signed char *)(((0xA4 + a4) + 0x1)));
            *(unsigned char *)(((0x108 + a4) + 0x2)) = (*(signed char *)(((0xA4 + a4) + 0x2)));
            *(unsigned char *)(((0x108 + a4) + 0x3)) = (*(signed char *)(((0xA4 + a4) + 0x3)));
            *(unsigned char *)(((0x108 + a4) + 0x4)) = (*(signed char *)(((0xA4 + a4) + 0x4)));
            *(unsigned char *)(((0x108 + a4) + 0x5)) = (*(signed char *)(((0xA4 + a4) + 0x5)));
        }
        FUN_0c0423c8(a4);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x14)) = *(struct mv3 *)((0x8C + a4)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x20)) = *(struct mv3 *)((0x98 + a4)); }
        FUN_0c073c40((((int)stk + 4) + 0x3C), (a4 + 0x44), (((((struct o100_float *)(a4))->v)) - u28));
        nlAddVector((a4 + 0x5C), (((int)stk + 4) + 0x3C));
        FUN_0c073c40((a4 + 0x5C), (a4 + 0x5C), (*(float *)0xC0458A8));
        GetRotVec4Ang((a4 + 0x44), (unsigned short)((((struct oA4_short *)(a4))->v)), (unsigned short)((((struct oA6_short *)(a4))->v)), (unsigned short)((((struct oA8_short *)(a4))->v)));
        (((struct o68_uint *)(a4))->v) = 0x0;
        t190 = 0x68;
    }
    return t190;
}

int FUN_0c02b3b8(int a4, int a5)
{
    int stk[28];
    register int t0;
    register int t6;
    register int t58;
    register float t143;
    register float t144;
    register float u242;
    register float u149;
    register float u150;
    register float u154;
    register int t157;
    register float t158;
    register float u159;
    register float u161;
    register int t165;
    register int t166;
    register float u167;
    register float u163;
    register int t164;
    register float t203;
    register float t204;
    register int t205;
    register float u206;
    register float u208;
    register float u209;
    register float u216;
    register float u217;
    register int t219;
    register float t223;
    register float t224;
    register float u225;
    register int t226;
    register float u228;
    register float u229;
    register float u236;
    register float u237;
    register int t239;
    int t132;
    register int t169;

    t0 = (((struct o0_int *)0xC271E34)->v);
    if (t0 == 0) {
        t6 = *(int *)((a5 + 0x28));
        if ((*(float *)((((((t0 << 2) << 2) << 1) + 0xC128DB4) + 0x0))) > ((((struct o8_float *)0xC271E34)->v))) {
            *(unsigned int *)(((t6 + 0x24) + 0x0)) = 0x1;
            (((struct o4_float *)((t6 + 0x24)))->v) = (nlUnitVectorsd((a4 + 0xC), (((int)stk + 8) + 0x5C)));
            *(int *)((int)stk + 4) = (0x4 + (t6 + 0x24));
            (((struct o4_float *)((t6 + 0x24)))->v) = (((((struct o4_float *)((t6 + 0x24)))->v)) - (FUN_0c073b40((((int)stk + 4) + 0x60), (a5 + 0xC))));
        } else {
            *(unsigned int *)(((t6 + 0x24) + 0x0)) = 0x0;
        }
    }
    if (!(((((struct o10_float *)0xC271E34)->v)) > ((((struct o8_float *)0xC271E34)->v)))) {
        if (((((struct o14_float *)0xC271E34)->v)) > ((((struct o8_float *)0xC271E34)->v))) {
            colliBoxAhead(a4, a5, ((((struct o4_int *)0xC271E34)->v)));
        }
        if (((((struct o18_float *)0xC271E34)->v)) > ((((struct o8_float *)0xC271E34)->v))) {
            colliBoxAhead(a5, a4, ((((struct o0_int *)0xC271E34)->v)));
        }
    } else {
        FUN_0c073360();
        *(int *)((int)stk + 4) = 0x0;
        *(int *)((int)stk + 0) = 0xC2737BC;
        t58 = FUN_0c02ae3c(a4, ((((struct o20_int *)0xC271E34)->v)), a5, ((((struct o24_int *)0xC271E34)->v)), 0xC2737BC, 0x0);
        *(unsigned int *)(((int)stk + 12)) = t58;
        if (t58 != 0) {
            *(int *)((int)stk + 4) = 0x1;
            *(int *)((int)stk + 0) = 0xC2737E4;
            *(unsigned int *)(((int)stk + 8)) = (FUN_0c02ae3c(a5, ((((struct o24_int *)0xC271E34)->v)), a4, ((((struct o20_int *)0xC271E34)->v)), 0xC2737E4, 0x1));
        } else {
            *(unsigned int *)(((int)stk + 8)) = 0x0;
        }
        nlPopMatrix(0x1);
        if ((*(int *)(((int)stk + 12))) == 0) {
            if (((((struct o14_float *)0xC271E34)->v)) > ((((struct o8_float *)0xC271E34)->v))) {
                colliBoxAhead(a4, a5, ((((struct o4_int *)0xC271E34)->v)));
            }
            if (((((struct o18_float *)0xC271E34)->v)) > ((((struct o8_float *)0xC271E34)->v))) {
                colliBoxAhead(a5, a4, ((((struct o0_int *)0xC271E34)->v)));
            }
        } else {
            if ((*(int *)(((int)stk + 8))) == 0) {
                if (((((struct o14_float *)0xC271E34)->v)) > ((((struct o8_float *)0xC271E34)->v))) {
                    colliBoxAhead(a4, a5, ((((struct o4_int *)0xC271E34)->v)));
                }
                if (((((struct o18_float *)0xC271E34)->v)) > ((((struct o8_float *)0xC271E34)->v))) {
                    colliBoxAhead(a5, a4, ((((struct o0_int *)0xC271E34)->v)));
                }
            } else {
                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x14)) = *(struct mv3 *)(0xC0A2D08); }
                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x20)) = *(struct mv3 *)(0xC0A2D08); }
                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x5C)) = *(struct mv3 *)(0xC0A2D08); }
                if ((*(int *)(((int)stk + 12))) == 2) {
                    nlAddVector((((int)stk + 8) + 0x20), 0xC2737D4);
                    FUN_0c073c40((((int)stk + 8) + 0x8), 0xC2737D4, ((((struct o0_float *)0xC2737E0)->v)));
                    nlAddVector((((int)stk + 8) + 0x14), (((int)stk + 8) + 0x8));
                    nlAddVector((((int)stk + 8) + 0x5C), 0xC2737BC);
                }
                if ((*(int *)(((int)stk + 8))) == 2) {
                    nlSubVector((((int)stk + 8) + 0x20), 0xC2737FC);
                    FUN_0c073c40((((int)stk + 8) + 0x8), 0xC2737FC, ((((struct o28_float *)0xC2737E0)->v)));
                    nlSubVector((((int)stk + 8) + 0x14), (((int)stk + 8) + 0x8));
                    nlAddVector((((int)stk + 8) + 0x5C), 0xC2737E4);
                }
                if (((*(int *)(((int)stk + 12))) == 2) && (t132 = *(int *)(((int)stk + 8)), t132 == 2)) {
                    FUN_0c073c40((((int)stk + 8) + 0x14), (((int)stk + 8) + 0x14), 0.5f);
                    FUN_0c073c40((((int)stk + 8) + 0x5C), (((int)stk + 8) + 0x5C), 0.5f);
                    FUN_0c073e10((((int)stk + 8) + 0x20));
                }
                nlSubVector3op((((int)stk + 8) + 0x50), (((int)stk + 8) + 0x5C), a4);
                nlSubVector3op((((int)stk + 8) + 0x44), (((int)stk + 8) + 0x5C), a5);
                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x38)) = *(struct mv3 *)((a4 + 0xC)); }
                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x2C)) = *(struct mv3 *)((a5 + 0xC)); }
                t143 = FUN_0c073b40((((int)stk + 8) + 0x20), (((int)stk + 8) + 0x38));
                t144 = FUN_0c073b40((((int)stk + 8) + 0x20), (((int)stk + 8) + 0x2C));
                u242 = (t143 - t144);
                if (!((t143 - t144) > 0.0f)) {
                } else {
                    u149 = (((struct o10_float *)(((((((((struct o4_int *)0xC271E34)->v)) << 2) << 2) << 1) + 0xC128DB4)))->v);
                    u150 = (((struct o10_float *)(((((((((struct o0_int *)0xC271E34)->v)) << 2) << 2) << 1) + 0xC128DB4)))->v);
                    FUN_0c073c40((((int)stk + 8) + 0x38), (((int)stk + 8) + 0x20), ((t143 - t144) * (u150 + u149)));
                    if (((((struct o0_int *)0xC271E34)->v)) == 0) {
                        u154 = ((t143 - t144) * (u150 + u149));
                        (((struct o1C_float *)(a5))->v) = (((((struct o1C_float *)0xC271E34)->v)) * u154);
                        *(unsigned int *)(((int)stk + 12)) = ((*(int *)((a5 + 0x28))) + 0x24);
                        nlUnitVectorsd((a4 + 0xC), (((int)stk + 8) + 0x8));
                        t157 = *(int *)(((int)stk + 12));
                        *(int *)((int)stk + 4) = (0x8 + t157);
                        t158 = FUN_0c073b40((((int)stk + 4) + 0xC), (((int)stk + 4) + 0x24));
                        (((struct o8_float *)(t157))->v) = t158;
                        u159 = (((struct o1C_float *)(a5))->v);
                        *(unsigned int *)(((int)stk + 8)) = (int)_builtin_fabsf((u159 * (1.0f + 1.0f)));
                        t165 = *(int *)(((int)stk + 12));
                        u161 = (((struct o8_float *)(t165))->v);
                        t166 = (int)_builtin_fabsf((u159 * (1.0f + 1.0f)));
                        u167 = t158;
                        if (0.100000001f > u161) {
                            u163 = (((struct o8_float *)((*(int *)(((int)stk + 12)))))->v);
                            t164 = *(int *)(((int)stk + 8));
                            *(unsigned int *)(((int)stk + 8)) = (t164 + ((int)_builtin_fabsf((u163 * 20.0f)) + 0x2));
                            t165 = (t164 + ((int)_builtin_fabsf((u163 * 20.0f)) + 0x2));
                            t166 = ((int)_builtin_fabsf((u163 * 20.0f)) + 0x2);
                            u167 = _builtin_fabsf((u163 * 20.0f));
                            t169 = (int)_builtin_fabsf((u163 * 20.0f));
                        } else {
                            t169 = (int)_builtin_fabsf((u159 * (1.0f + 1.0f)));
                        }
                        if ((int)(*(int *)(((int)stk + 8))) > 0) {
                            *(unsigned int *)(((int)stk + 12)) = (*(int *)((a4 + 0x28)));
                            FUN_0c073360();
                            FUN_0c073a60(a4);
                            MultiRot4Vec((*(int *)(((int)stk + 12))));
                            nlPushMatrix(0x0);
                            nlQuickInvertMatrix();
                            FUN_0c072230((((int)stk + 8) + 0x5C), (((int)stk + 8) + 0x5C));
                            nlPopMatrix(0x1);
                            *(float *)(((int)stk + 104)) = 5.0f;
                            FUN_0c072230((((int)stk + 8) + 0x5C), (((int)stk + 8) + 0x5C));
                            nlPopMatrix(0x1);
                            FUN_0c02f4ca((((int)stk + 8) + 0x5C), (a4 + 0xC), (*(int *)(((int)stk + 8))));
                        }
                    }
                    FUN_0c073c40((((int)stk + 8) + 0x2C), (((int)stk + 8) + 0x38), ((((struct o1C_float *)0xC271E34)->v)));
                    t203 = FUN_0c073b40((((int)stk + 8) + 0x20), (((int)stk + 8) + 0x50));
                    t204 = FUN_0c073c80((((int)stk + 8) + 0x50));
                    t205 = (((struct o0_int *)0xC271E34)->v);
                    u206 = (t203 * (-t203));
                    u208 = (((struct o4_float *)(((((t205 << 2) << 2) << 1) + 0xC128DB4)))->v);
                    u209 = (((struct o18_float *)(((((t205 << 2) << 2) << 1) + 0xC128DB4)))->v);
                    FUN_0c073c40((((int)stk + 8) + 0x8), (((int)stk + 8) + 0x2C), (1.0f - ((_builtin_sqrtf((u206 + t204)) * (u209 / u208)))));
                    nlSubVector((a4 + 0xC), (((int)stk + 8) + 0x8));
                    nlOuterProduct((((int)stk + 8) + 0x50), (((int)stk + 8) + 0x2C), (((int)stk + 8) + 0x8));
                    u216 = (((struct o14_float *)(((((((((struct o0_int *)0xC271E34)->v)) << 2) << 2) << 1) + 0xC128DB4)))->v);
                    u217 = (_builtin_sqrtf((u206 + t204)) * (u209 / u208));
                    FUN_0c073c40((((int)stk + 8) + 0x8), (((int)stk + 8) + 0x8), (u217 * u216));
                    t219 = *(int *)((a4 + 0x28));
                    *(unsigned int *)(((int)stk + 8)) = t219;
                    nlSubVector((t219 + 0x18), (((int)stk + 8) + 0x8));
                    FUN_0c073c40((((int)stk + 8) + 0x2C), (((int)stk + 8) + 0x38), (1.0f - ((((struct o1C_float *)0xC271E34)->v))));
                    t223 = FUN_0c073b40((((int)stk + 8) + 0x20), (((int)stk + 8) + 0x44));
                    t224 = FUN_0c073c80((((int)stk + 8) + 0x44));
                    u225 = (t223 * (-t223));
                    t226 = (((struct o4_int *)0xC271E34)->v);
                    u228 = (((struct o4_float *)(((((t226 << 2) << 2) << 1) + 0xC128DB4)))->v);
                    u229 = (((struct o18_float *)(((((t226 << 2) << 2) << 1) + 0xC128DB4)))->v);
                    FUN_0c073c40((((int)stk + 8) + 0x8), (((int)stk + 8) + 0x2C), (1.0f - ((_builtin_sqrtf((u225 + t224)) * (u229 / u228)))));
                    nlAddVector((a5 + 0xC), (((int)stk + 8) + 0x8));
                    nlOuterProduct((((int)stk + 8) + 0x44), (((int)stk + 8) + 0x2C), (((int)stk + 8) + 0x8));
                    u236 = (((struct o14_float *)(((((((((struct o4_int *)0xC271E34)->v)) << 2) << 2) << 1) + 0xC128DB4)))->v);
                    u237 = (_builtin_sqrtf((u225 + t224)) * (u229 / u228));
                    FUN_0c073c40((((int)stk + 8) + 0x8), (((int)stk + 8) + 0x8), (u237 * u236));
                    t239 = *(int *)((a5 + 0x28));
                    *(unsigned int *)(((int)stk + 8)) = t239;
                    nlAddVector((t239 + 0x18), (((int)stk + 8) + 0x8));
                    u242 = (_builtin_sqrtf((u225 + t224)) * (u229 / u228));
                }
                FUN_0c073c40((((int)stk + 8) + 0x8), (((int)stk + 8) + 0x14), ((((struct o1C_float *)0xC271E34)->v)));
                nlAddVector(a4, (((int)stk + 8) + 0x8));
                FUN_0c073c40((((int)stk + 8) + 0x8), (((int)stk + 8) + 0x14), (1.0f - ((((struct o1C_float *)0xC271E34)->v))));
                nlSubVector(a5, (((int)stk + 8) + 0x8));
                *(unsigned int *)((a4 + 0x20)) = ((*(int *)((a4 + 0x20))) | ((int)0x1 << (int)((((struct o4_int *)0xC271E34)->v))));
                *(unsigned int *)((a5 + 0x20)) = ((*(int *)((a5 + 0x20))) | ((int)0x1 << (int)((((struct o0_int *)0xC271E34)->v))));
            }
        }
    }
    return 0x1;
}
