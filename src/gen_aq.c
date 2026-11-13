/* Straight-line functions with calls and guards (batch gen_aq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o104_float { char p[0x104]; float v; };
struct o124_int { char p[0x124]; int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o160_float { char p[0x160]; float v; };
struct o18_float { char p[0x18]; float v; };
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
struct o20_uchar { char p[0x20]; unsigned char v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o21_uchar { char p[0x21]; unsigned char v; };
struct o24_float { char p[0x24]; float v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o258_float { char p[0x258]; float v; };
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
struct o38_int { char p[0x38]; int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o3B4_int { char p[0x3B4]; int v; };
struct o3C_int { char p[0x3C]; int v; };
struct o3C_uint { char p[0x3C]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_short { char p[0x4]; short v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o40_int { char p[0x40]; int v; };
struct o44_int { char p[0x44]; int v; };
struct o48_int { char p[0x48]; int v; };
struct o4C_int { char p[0x4C]; int v; };
struct o50_int { char p[0x50]; int v; };
struct o54_int { char p[0x54]; int v; };
struct o58_int { char p[0x58]; int v; };
struct o5C_int { char p[0x5C]; int v; };
struct o60_int { char p[0x60]; int v; };
struct o64_int { char p[0x64]; int v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o68_int { char p[0x68]; int v; };
struct o6C_int { char p[0x6C]; int v; };
struct o70_int { char p[0x70]; int v; };
struct o7C_float { char p[0x7C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_short { char p[0x8]; short v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o80_float { char p[0x80]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o84_uint { char p[0x84]; unsigned int v; };
struct o88_int { char p[0x88]; int v; };
struct o88_short { char p[0x88]; short v; };
struct o8A_short { char p[0x8A]; short v; };
struct o8C_int { char p[0x8C]; int v; };
struct o8C_short { char p[0x8C]; short v; };
struct o8C_uint { char p[0x8C]; unsigned int v; };
struct o90_int { char p[0x90]; int v; };
struct o90_uint { char p[0x90]; unsigned int v; };
struct o94_int { char p[0x94]; int v; };
struct o94_uint { char p[0x94]; unsigned int v; };
struct o98_int { char p[0x98]; int v; };
struct o98_uint { char p[0x98]; unsigned int v; };
struct o9C_int { char p[0x9C]; int v; };
struct o9C_uint { char p[0x9C]; unsigned int v; };
struct oA0_int { char p[0xA0]; int v; };
struct oB4_int { char p[0xB4]; int v; };
struct oB8_int { char p[0xB8]; int v; };
struct oBC_int { char p[0xBC]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oE0_int { char p[0xE0]; int v; };
struct oE0_uint { char p[0xE0]; unsigned int v; };
struct oE4_uint { char p[0xE4]; unsigned int v; };
struct oF8_short { char p[0xF8]; short v; };
struct oFC_int { char p[0xFC]; int v; };
struct oFC_uint { char p[0xFC]; unsigned int v; };
struct oFD_uchar { char p[0xFD]; unsigned char v; };
struct oFE_uchar { char p[0xFE]; unsigned char v; };
struct oFF_uchar { char p[0xFF]; unsigned char v; };
int CalcHomingAngle(int);
int CalcHomingVector(int);
int FUN_0c016cb2(int);
int FUN_0c018b00(int);
int FUN_0c018b1c(int);
int FUN_0c018b22(int, int);
int FUN_0c018c2a(float, float);
int FUN_0c018c8a(float, float);
int FUN_0c018c96(int, int, int, int);
int FUN_0c018ce0(float, float);
int FUN_0c018cec(float);
int FUN_0c01b920(int, float, float);
int FUN_0c01d69c(void);
int FUN_0c0295c0(int, int, float, float);
int FUN_0c0464de(int);
float FUN_0c0468aa(int, int);
int FUN_0c047624(int);
int FUN_0c0476dc(int, int, int, int);
int FUN_0c047cb6(int, int, int, int, float);
int FUN_0c05a338(void);
int FUN_0c05a3b0(float);
int FUN_0c05a3f8(int);
int FUN_0c05bdde(int);
int FUN_0c05bf60(void);
int FUN_0c05ccce(int);
int FUN_0c060210(int);
int FUN_0c060298(int, int, int);
int FUN_0c068c94(int);
int FUN_0c06ac1a(int, int, int, int);
int FUN_0c06ce72(void);
int FUN_0c06db2e(void);
int FUN_0c06e460(void);
float FUN_0c072140(int);
float FUN_0c072148(int);
int FUN_0c072230(int, int);
int FUN_0c072290(int, int);
int FUN_0c072600(int);
int FUN_0c072b60(int);
int FUN_0c073360(void);
int FUN_0c0739a0(int);
int FUN_0c073a30(float, float, float);
int FUN_0c073a60(int);
int FUN_0c073c40(int, int, float);
int FUN_0c07fdc8(void);
int FUN_0c07ff00(void);
int GetAng4Mat(int);
int HomingAngle1(int, int, float);
int MultiRot4Vec(int);
int SetAdvCamera(int, int);
int camSetTarget(int, int);
int camSnapToCar(int);
int gdc_CoursePointLoadReq(float);
int kmiConvertUVnum(int);
int nlAddVector(int, int);
int nlGetMatrix(int);
int nlInvertMatrix(int);
float nlLength(int, int);
int nlLocate(int, int);
int nlLookAt(int, int, int);
int nlMatrixMode(int);
int nlObjPutUseViewMatrix(int);
int nlPerspectiveX(int, float, float, float);
int nlPopMatrix(int);
int nlPrintf(int, ...);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlSubVector3op(int, int, int);
int nlUnitMatrix(void);
int FUN_0c016cca(int a4);
int FUN_0c063a2a(int a4, int a5, int a6, int a7);
int FUN_0c048262(int a4);
int kmProcessVertexRenderState(int a4);

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
    register int t691;
    register int t694;
    register int t794;
    register int t797;
    register int t870;
    register float u938;
    register float u943;
    register float t956;
    register float t968;
    register float t975;
    register float t983;
    register float t990;
    register int t996;
    register float u1058;
    register float t1068;
    register float u1097;
    register float u1111;
    register float u1124;
    register float u1136;
    register float t1183;
    register float t1195;
    register float t1202;
    register float t1210;
    register float t1217;
    register int t1223;
    register float u1285;
    register float t1295;
    register float t1360;
    register float t1372;
    register float t1379;
    register float t1387;
    register float t1394;
    register int t1400;
    register float u1462;
    register float t1472;
    register float t1505;
    register float u1507;
    register float u1509;
    register float u1510;
    register int t1552;
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
    register float u465;
    int t609;
    int t712;
    int t946;
    int t955;
    int t1096;
    int t1110;
    int t1173;
    int t1182;
    int t1350;
    int t1359;

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
                FUN_0c07ff00();
                FUN_0c073c40((((int)stk + 0) + 0x34), (((int)stk + 0) + 0x40), 0.25f);
                FUN_0c073c40((((int)stk + 0) + 0x40), (((int)stk + 0) + 0x40), 0.75f);
                nlAddVector((((int)stk + 0) + 0x50), (((int)stk + 0) + 0x34));
                FUN_0c0295c0((((int)stk + 0) + 0x50), (((int)stk + 0) + 0x40), 0.0f, 5.0f);
                FUN_0c018b22((((int)stk + 0) + 0x50), 0x2);
                if ((int)((((struct o2C_int *)0xC177E34)->v)) > 0) {
                    if ((int)((((struct o2C_int *)0xC177E34)->v)) < (int)0xA) {
                        FUN_0c018c2a(0.200000003f, 0.0f);
                        u465 = 0.200000003f;
                    } else {
                        FUN_0c018c2a(0.100000001f, 0.0f);
                        u465 = 0.100000001f;
                    }
                    FUN_0c018c8a(u465, 0.0f);
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
                    *(volatile int *)0xC175C80;
                    FUN_0c07ff00();
                } else {
                    if ((int)((((struct o0_int *)0xC175C80)->v)) < (int)0x10) {
                        if (((((struct o8_int *)0xC177D50)->v)) != 2) {
                            FUN_0c07ff00();
                        } else {
                            FUN_0c07ff00();
                        }
                    } else {
                        if (((((struct o8_int *)0xC177D50)->v)) != 2) {
                            FUN_0c07ff00();
                        } else {
                            FUN_0c07ff00();
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
                FUN_0c07ff00();
                (((struct o0_ushort *)0xC177D50)->v) = (((((struct o0_short *)0xC177D50)->v)) & 0xFF00);
                (((struct o2_ushort *)0xC177D50)->v) = (((((struct o2_short *)0xC177D50)->v)) & 0xFF00);
                (((struct o4_ushort *)0xC177D50)->v) = 0x0;
                if ((((((struct o30_int *)0xC1EC75C)->v)) & 2) != 0) {
                    if (((((((struct o30_int *)0xC1EC75C)->v)) & 0x400) != 0) && (t609 = (((struct o30_int *)0xC1EC75C)->v), (t609 & 0x200) != 0)) {
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
                    t691 = (((struct o0_short *)0xC177D50)->v);
                    *(unsigned int *)(((int)stk + 60)) = t691;
                    t694 = 0xFFFFC000;
                    if ((int)t691 < (int)0xFFFFC000) {
                    } else {
                        t694 = t691;
                        if ((int)t691 > (int)0x4000) {
                            t694 = 0x4000;
                        }
                    }
                    *(unsigned int *)(((int)stk + 60)) = t694;
                    (((struct o0_ushort *)0xC177D50)->v) = t694;
                }
                if ((((((struct o30_int *)0xC1EC75C)->v)) & 0x400) != 0) {
                    if (((((((struct o30_int *)0xC1EC75C)->v)) & 0x10000) != 0) && (t712 = (((struct o30_int *)0xC1EC75C)->v), (t712 & 0x20000) != 0)) {
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
                    t794 = (((struct o0_short *)0xC177D50)->v);
                    *(unsigned int *)(((int)stk + 60)) = t794;
                    t797 = 0xFFFFC000;
                    if ((int)t794 < (int)0xFFFFC000) {
                    } else {
                        t797 = t794;
                        if ((int)t794 > (int)0x4000) {
                            t797 = 0x4000;
                        }
                    }
                    *(unsigned int *)(((int)stk + 60)) = t797;
                    (((struct o0_ushort *)0xC177D50)->v) = t797;
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
                t870 = 0xFFFFC000;
                if ((int)((((struct o1C_int *)0xC11CE48)->v)) < (int)0xFFFFC000) {
                } else {
                    t870 = 0x4000;
                    if ((int)((((struct o1C_int *)0xC11CE48)->v)) > (int)0x4000) {
                    } else {
                        t870 = ((((struct o1C_int *)0xC11CE48)->v));
                    }
                }
                (((struct o1C_uint *)0xC11CE48)->v) = t870;
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
                    *(volatile int *)0xC11CE54;
                    FUN_0c07ff00();
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
                    *(volatile int *)(((int)stk + 76));
                    FUN_0c07ff00();
                    u938 = ((FUN_0c072140((unsigned short)((((struct oF8_short *)((*(int *)(((int)stk + 76)))))->v)))) * ((((struct oC_float *)0xC177D9C)->v)));
                    *(float *)(((int)stk + 40)) = (u938 * 0.300000012f);
                    *(float *)(((int)stk + 44)) = 0.0f;
                    u943 = ((FUN_0c072148((unsigned short)((((struct oF8_short *)((*(int *)(((int)stk + 76)))))->v)))) * ((((struct oC_float *)0xC177D9C)->v)));
                    *(float *)(((int)stk + 48)) = (u943 * 0.300000012f);
                    FUN_0c0295c0((((int)stk + 0) + 0x34), (((int)stk + 0) + 0x28), 1.0f, 0.0f);
                    if (((int)((((struct o8_int *)0xC175C80)->v)) >= (int)0x11) && (t946 = (((struct o8_int *)0xC175C80)->v), (int)t946 <= (int)0x12)) {
                        FUN_0c0468aa(0x22, (((int)stk + 0) + 0x34));
                    } else {
                        *(float *)(((int)stk + 0)) = 99999.8984f;
                        FUN_0c07ff00();
                        if (((((struct o0_int *)0xC1EC71C)->v)) == 1) {
                            if (((int)((((struct o8_int *)0xC175C80)->v)) >= (int)0x11) && (t955 = (((struct o8_int *)0xC175C80)->v), (int)t955 <= (int)0x15)) {
                                t956 = FUN_0c0468aa(0x22, (((int)stk + 0) + 0x14));
                                *(float *)(((int)stk + 4)) = t956;
                                if ((*(float *)(((int)stk + 0))) > t956) {
                                    *(float *)(((int)stk + 0)) = (*(float *)(((int)stk + 4)));
                                    FUN_0c07ff00();
                                }
                            }
                            t968 = FUN_0c0468aa(0x13, (((int)stk + 0) + 0x14));
                            *(float *)(((int)stk + 4)) = t968;
                            if ((*(float *)(((int)stk + 0))) > t968) {
                                *(float *)(((int)stk + 0)) = (*(float *)(((int)stk + 4)));
                                FUN_0c07ff00();
                            }
                            t975 = FUN_0c0468aa(0x1, (((int)stk + 0) + 0x34));
                            *(float *)(((int)stk + 4)) = t975;
                            if (!(t975 > (*(float *)(((int)stk + 0))))) {
                            } else {
                                FUN_0c07ff00();
                            }
                        } else {
                            if (((((struct o0_int *)0xC1EC71C)->v)) == 0) {
                                t983 = FUN_0c0468aa(0x12, (((int)stk + 0) + 0x14));
                                *(float *)(((int)stk + 4)) = t983;
                                if ((*(float *)(((int)stk + 0))) > t983) {
                                    *(float *)(((int)stk + 0)) = (*(float *)(((int)stk + 4)));
                                    FUN_0c07ff00();
                                }
                                t990 = FUN_0c0468aa(0x0, (((int)stk + 0) + 0x34));
                                *(float *)(((int)stk + 4)) = t990;
                                if (!(t990 > (*(float *)(((int)stk + 0))))) {
                                } else {
                                    FUN_0c07ff00();
                                }
                            } else {
                                t996 = (((struct o8_int *)0xC1EC71C)->v);
                                switch (t996) {
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
                                u1058 = *(float *)(((int)stk + 4));
                                if ((*(float *)(((int)stk + 0))) > u1058) {
                                    *(float *)(((int)stk + 0)) = u1058;
                                    FUN_0c07ff00();
                                }
                                t1068 = FUN_0c0468aa((((((struct o4_int *)0xC1EC71C)->v)) + ((((struct o8_int *)0xC1EC71C)->v))), (((int)stk + 0) + 0x34));
                                *(float *)(((int)stk + 4)) = t1068;
                                if (t1068 > (*(float *)(((int)stk + 0)))) {
                                    FUN_0c07ff00();
                                }
                            }
                        }
                    }
                    FUN_0c07ff00();
                    *(float *)(((int)stk + 56)) = ((*(float *)(((int)stk + 56))) + ((((struct o8_float *)0xC177D9C)->v)));
                    FUN_0c018b22((((int)stk + 0) + 0x34), 0x0);
                    camSetTarget(((*(int *)(((int)stk + 76))) + 0x7C), 0x0);
                    FUN_0c018c8a(0.800000012f, 0.100000001f);
                    FUN_0c018b1c(0x1);
                }
                if (((((((struct o0_int *)0xC1EC7C0)->v)) & 16) != 0) && (t1096 = *(signed char *)0xC1EC7EB, (unsigned char)t1096 != 1)) {
                    u1097 = (((struct o8_float *)0xC177D9C)->v);
                    (((struct o8_float *)0xC177D9C)->v) = (u1097 + 0.5f);
                    if ((u1097 + 0.5f) > 200.0f) {
                        (((struct o8_float *)0xC177D9C)->v) = 200.0f;
                    }
                    FUN_0c07ff00();
                    *(float *)(((int)stk + 24)) = ((*(float *)(((int)stk + 24))) + ((((struct o8_float *)0xC177D9C)->v)));
                    FUN_0c018b22((((int)stk + 0) + 0x14), 0x0);
                }
                if (((((((struct o0_int *)0xC1EC7C0)->v)) & 32) != 0) && (t1110 = *(signed char *)0xC1EC7EB, (unsigned char)t1110 != 1)) {
                    u1111 = (((struct o8_float *)0xC177D9C)->v);
                    (((struct o8_float *)0xC177D9C)->v) = (u1111 - 0.5f);
                    if (5.0f > (u1111 - 0.5f)) {
                        (((struct o8_float *)0xC177D9C)->v) = 5.0f;
                    }
                    FUN_0c07ff00();
                    *(float *)(((int)stk + 24)) = ((*(float *)(((int)stk + 24))) + ((((struct o8_float *)0xC177D9C)->v)));
                    FUN_0c018b22((((int)stk + 0) + 0x14), 0x0);
                }
                if ((((((struct o0_int *)0xC1EC7C0)->v)) & 128) != 0) {
                    u1124 = (((struct oC_float *)0xC177D9C)->v);
                    (((struct oC_float *)0xC177D9C)->v) = (u1124 + 5.0f);
                    if ((u1124 + 5.0f) > 950.0f) {
                        (((struct oC_float *)0xC177D9C)->v) = 950.0f;
                    }
                }
                if ((((((struct o0_int *)0xC1EC7C0)->v)) & 64) != 0) {
                    u1136 = (((struct oC_float *)0xC177D9C)->v);
                    (((struct oC_float *)0xC177D9C)->v) = (u1136 - 5.0f);
                    if (200.0f > (u1136 - 5.0f)) {
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
                                *(volatile int *)(((int)stk + 76));
                                FUN_0c07ff00();
                                *(float *)(((int)stk + 40)) = ((FUN_0c072140((unsigned short)((((struct oF8_short *)((*(int *)(((int)stk + 76)))))->v)))) * ((((struct oC_float *)0xC177D9C)->v)));
                                *(float *)(((int)stk + 44)) = 0.0f;
                                *(float *)(((int)stk + 48)) = ((FUN_0c072148((unsigned short)((((struct oF8_short *)((*(int *)(((int)stk + 76)))))->v)))) * ((((struct oC_float *)0xC177D9C)->v)));
                                FUN_0c0295c0((((int)stk + 0) + 0x34), (((int)stk + 0) + 0x28), 1.0f, 0.0f);
                                if (((int)((((struct o8_int *)0xC175C80)->v)) >= (int)0x11) && (t1173 = (((struct o8_int *)0xC175C80)->v), (int)t1173 <= (int)0x12)) {
                                    FUN_0c0468aa(0x22, (((int)stk + 0) + 0x34));
                                } else {
                                    *(float *)(((int)stk + 0)) = 99999.8984f;
                                    FUN_0c07ff00();
                                    if (((((struct o0_int *)0xC1EC71C)->v)) == 1) {
                                        if (((int)((((struct o8_int *)0xC175C80)->v)) >= (int)0x11) && (t1182 = (((struct o8_int *)0xC175C80)->v), (int)t1182 <= (int)0x15)) {
                                            t1183 = FUN_0c0468aa(0x22, (((int)stk + 0) + 0x14));
                                            *(float *)(((int)stk + 4)) = t1183;
                                            if ((*(float *)(((int)stk + 0))) > t1183) {
                                                *(float *)(((int)stk + 0)) = (*(float *)(((int)stk + 4)));
                                                FUN_0c07ff00();
                                            }
                                        }
                                        t1195 = FUN_0c0468aa(0x13, (((int)stk + 0) + 0x14));
                                        *(float *)(((int)stk + 4)) = t1195;
                                        if ((*(float *)(((int)stk + 0))) > t1195) {
                                            *(float *)(((int)stk + 0)) = (*(float *)(((int)stk + 4)));
                                            FUN_0c07ff00();
                                        }
                                        t1202 = FUN_0c0468aa(0x1, (((int)stk + 0) + 0x34));
                                        *(float *)(((int)stk + 4)) = t1202;
                                        if (!(t1202 > (*(float *)(((int)stk + 0))))) {
                                        } else {
                                            FUN_0c07ff00();
                                        }
                                    } else {
                                        if (((((struct o0_int *)0xC1EC71C)->v)) == 0) {
                                            t1210 = FUN_0c0468aa(0x12, (((int)stk + 0) + 0x14));
                                            *(float *)(((int)stk + 4)) = t1210;
                                            if ((*(float *)(((int)stk + 0))) > t1210) {
                                                *(float *)(((int)stk + 0)) = (*(float *)(((int)stk + 4)));
                                                FUN_0c07ff00();
                                            }
                                            t1217 = FUN_0c0468aa(0x0, (((int)stk + 0) + 0x34));
                                            *(float *)(((int)stk + 4)) = t1217;
                                            if (!(t1217 > (*(float *)(((int)stk + 0))))) {
                                            } else {
                                                FUN_0c07ff00();
                                            }
                                        } else {
                                            t1223 = (((struct o8_int *)0xC1EC71C)->v);
                                            switch (t1223) {
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
                                            u1285 = *(float *)(((int)stk + 4));
                                            if ((*(float *)(((int)stk + 0))) > u1285) {
                                                *(float *)(((int)stk + 0)) = u1285;
                                                FUN_0c07ff00();
                                            }
                                            t1295 = FUN_0c0468aa((((((struct o4_int *)0xC1EC71C)->v)) + ((((struct o8_int *)0xC1EC71C)->v))), (((int)stk + 0) + 0x34));
                                            *(float *)(((int)stk + 4)) = t1295;
                                            if (t1295 > (*(float *)(((int)stk + 0)))) {
                                                FUN_0c07ff00();
                                            }
                                        }
                                    }
                                }
                                FUN_0c07ff00();
                                *(float *)(((int)stk + 56)) = ((*(float *)(((int)stk + 56))) + ((((struct o8_float *)0xC177D9C)->v)));
                                FUN_0c018b22((((int)stk + 0) + 0x34), 0x2);
                            }
                        }
                    }
                } else {
                    if ((int)((((struct o4_int *)0xC177D9C)->v)) > 0) {
                    } else {
                        (((struct o4_uint *)0xC177D9C)->v) = 0x3C;
                        *(volatile int *)(((int)stk + 76));
                        FUN_0c07ff00();
                        *(float *)(((int)stk + 40)) = ((FUN_0c072140((unsigned short)((((struct oF8_short *)((*(int *)(((int)stk + 76)))))->v)))) * ((((struct oC_float *)0xC177D9C)->v)));
                        *(float *)(((int)stk + 44)) = 0.0f;
                        *(float *)(((int)stk + 48)) = ((FUN_0c072148((unsigned short)((((struct oF8_short *)((*(int *)(((int)stk + 76)))))->v)))) * ((((struct oC_float *)0xC177D9C)->v)));
                        FUN_0c0295c0((((int)stk + 0) + 0x34), (((int)stk + 0) + 0x28), 1.0f, 0.0f);
                        if (((int)((((struct o8_int *)0xC175C80)->v)) >= (int)0x11) && (t1350 = (((struct o8_int *)0xC175C80)->v), (int)t1350 <= (int)0x12)) {
                            FUN_0c0468aa(0x22, (((int)stk + 0) + 0x34));
                        } else {
                            *(float *)(((int)stk + 0)) = 99999.8984f;
                            FUN_0c07ff00();
                            if (((((struct o0_int *)0xC1EC71C)->v)) == 1) {
                                if (((int)((((struct o8_int *)0xC175C80)->v)) >= (int)0x11) && (t1359 = (((struct o8_int *)0xC175C80)->v), (int)t1359 <= (int)0x15)) {
                                    t1360 = FUN_0c0468aa(0x22, (((int)stk + 0) + 0x14));
                                    *(float *)(((int)stk + 4)) = t1360;
                                    if ((*(float *)(((int)stk + 0))) > t1360) {
                                        *(float *)(((int)stk + 0)) = (*(float *)(((int)stk + 4)));
                                        FUN_0c07ff00();
                                    }
                                }
                                t1372 = FUN_0c0468aa(0x13, (((int)stk + 0) + 0x14));
                                *(float *)(((int)stk + 4)) = t1372;
                                if ((*(float *)(((int)stk + 0))) > t1372) {
                                    *(float *)(((int)stk + 0)) = (*(float *)(((int)stk + 4)));
                                    FUN_0c07ff00();
                                }
                                t1379 = FUN_0c0468aa(0x1, (((int)stk + 0) + 0x34));
                                *(float *)(((int)stk + 4)) = t1379;
                                if (!(t1379 > (*(float *)(((int)stk + 0))))) {
                                } else {
                                    FUN_0c07ff00();
                                }
                            } else {
                                if (((((struct o0_int *)0xC1EC71C)->v)) == 0) {
                                    t1387 = FUN_0c0468aa(0x12, (((int)stk + 0) + 0x14));
                                    *(float *)(((int)stk + 4)) = t1387;
                                    if ((*(float *)(((int)stk + 0))) > t1387) {
                                        *(float *)(((int)stk + 0)) = (*(float *)(((int)stk + 4)));
                                        FUN_0c07ff00();
                                    }
                                    t1394 = FUN_0c0468aa(0x0, (((int)stk + 0) + 0x34));
                                    *(float *)(((int)stk + 4)) = t1394;
                                    if (!(t1394 > (*(float *)(((int)stk + 0))))) {
                                    } else {
                                        FUN_0c07ff00();
                                    }
                                } else {
                                    t1400 = (((struct o8_int *)0xC1EC71C)->v);
                                    switch (t1400) {
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
                                    u1462 = *(float *)(((int)stk + 4));
                                    if ((*(float *)(((int)stk + 0))) > u1462) {
                                        *(float *)(((int)stk + 0)) = u1462;
                                        FUN_0c07ff00();
                                    }
                                    t1472 = FUN_0c0468aa((((((struct o4_int *)0xC1EC71C)->v)) + ((((struct o8_int *)0xC1EC71C)->v))), (((int)stk + 0) + 0x34));
                                    *(float *)(((int)stk + 4)) = t1472;
                                    if (t1472 > (*(float *)(((int)stk + 0)))) {
                                        FUN_0c07ff00();
                                    }
                                }
                            }
                        }
                        FUN_0c07ff00();
                        *(float *)(((int)stk + 56)) = ((*(float *)(((int)stk + 56))) + ((((struct o8_float *)0xC177D9C)->v)));
                        FUN_0c018b22((((int)stk + 0) + 0x34), 0x2);
                    }
                }
                t1505 = nlLength(0xC177DDC, 0xC177E08);
                *(float *)(((int)stk + 36)) = t1505;
                *(float *)(((int)stk + 36)) = (t1505 - 50.0f);
                if ((t1505 - 50.0f) > 550.0f) {
                    (((struct o0_float *)0xC177D9C)->v) = 6.0f;
                } else {
                    u1507 = *(float *)(((int)stk + 36));
                    if (0.0f > u1507) {
                        (((struct o0_float *)0xC177D9C)->v) = 51.0f;
                    } else {
                        u1509 = (((550.0f - u1507) / 550.0f) * ((550.0f - (*(float *)(((int)stk + 36)))) / 550.0f));
                        u1510 = 6.0f;
                        u1510 = u1510 + 45.0f * u1509;
                        (((struct o0_float *)0xC177D9C)->v) = u1510;
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
    t1552 = (((struct o28_int *)0xC177D9C)->v);
    switch (t1552) {
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
        FUN_0c07ff00();
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
        FUN_0c07ff00();
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
        FUN_0c07ff00();
        nlInvertMatrix(0x0);
        nlGetMatrix(0xC177D5C);
        break;
    }
    nlPopMatrix(0x1);
    FUN_0c07ff00();
    FUN_0c07ff00();
    (((struct o0_ushort *)0xC177D50)->v) = ((((struct o0_short *)0xC177E34)->v));
    (((struct o2_ushort *)0xC177D50)->v) = ((((struct o4_short *)0xC177E34)->v));
    (((struct o4_ushort *)0xC177D50)->v) = ((((struct o8_short *)0xC177E34)->v));
    nlMatrixMode(0x2);
    FUN_0c072b60(0xC177D5C);
    nlMatrixMode(0x1);
    FUN_0c05bdde(((int)((((((((struct o0_float *)0xC177D9C)->v)) * ((((struct o0_float *)0xC018BD4)->v))) / ((((struct o8_float *)0xC018BD4)->v)))) + ((((struct oC_float *)0xC018BD4)->v))) & 0xFFFF));
    return (FUN_0c05a338());
}

int FUN_0c063a2a(int a4, int a5, int a6, int a7)
{
    int stk[74];
    register int t200;
    register int t204;
    register int t208;
    register int t363;
    register int t368;
    register int t372;

    register float F0;
    register float F15;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_10;
    register int v0_11;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    v0_7 = a4;
    v0_5 = a5;
    v0_9 = a6;
    v0_10 = a7;
    v0_4 = (0x100);
    v0_0 = (0xC05BF60);
    v0_1 = (v0_5);
    v0_2 = (0x0);
    v0_0 = (v0_7);
    v0_7 = (0x0);
    v0_6 = (0x200);
    L_C063AA2:;
    if (((int)v0_7 < (int)(*(int *)((v0_0 + 0x4))))) goto L_C063A8C;
    *(unsigned int *)(((int)stk + 20)) = ((*(int *)(((*(int *)((v0_0 + 0x0))) + 0x10))) - 62);
    if ((((*(int *)((v0_0 + 0x14))) & 1) != 0)) goto L_C063ADA;
    v0_7 = (0x1);
    if (((int)(*(int *)((v0_0 + 0x8))) <= (int)0x1)) goto L_C063AC2;
    v0_3 = (v0_7);
    L_C063ADC:;
    *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 20))) << 2);
    *(unsigned int *)(((int)stk + 4)) = 0xC13B2FC;
    *(unsigned int *)(((int)stk + 8)) = 0xC13B144;
    v0_11 = *(int *)((v0_0 + 0x4));
    v0_8 = (v0_11);
    v0_7 = (0xC13B30C);
    v0_5 = (0xC13B1F4);
    v0_9 = (0xC13B14C);
    v0_10 = (0xC13B1EC);
    if ((v0_11 == 4)) goto L_C063B14;
    if ((v0_8 != 3)) goto L_C063B00;
    if ((v0_1 != 0)) goto L_C063CEA;
    if ((v0_3 == 0)) goto L_C063F7C;
    if (((*(int *)((v0_0 + 0x14))) != 0)) goto L_C063F1E;
    *(unsigned int *)(((int)stk + 4)) = (*(int *)(((*(int *)(((v0_1 << 2) + (*(int *)(((*(int *)(((int)stk + 4))) + (*(int *)(((int)stk + 16))))))))) + 0x8)));
    *(unsigned int *)(((int)stk + 8)) = (*(int *)(((*(int *)(((v0_1 << 2) + (*(int *)((v0_7 + (*(int *)(((int)stk + 16))))))))) + 0x8)));
    v0_5 = ((v0_1 << 2));
    L_C063F36:;
    v0_5 = (int)((int)(FUN_0c05bf60()) % (int)(*(int *)(((int)stk + 8))));
    v0_7 = *(int *)(((int)stk + 4));
    (((struct oE0_uint *)(((*(int *)((v0_0 + 0x0))) + v0_6)))->v) = (*(int *)(((v0_7 + ((v0_5 << 2) << 1)) + 0x0)));
    (((struct oE4_uint *)(((*(int *)((v0_0 + 0x0))) + v0_6)))->v) = v0_2;
    v0_8 = *(int *)((v0_0 + 0x0));
    (((struct oFD_uchar *)((v0_8 + v0_6)))->v) = ((*(signed char *)(((0xFD + (v0_8 + v0_6)) + 0x0))) | 0x80);
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((v0_7 + ((v0_5 << 2) << 1)) + 0x4)));
    v0_7 = ((v0_7 + ((v0_5 << 2) << 1)));
    v0_5 = (v0_2);
    L_C063FF4:;
    v0_7 = *(int *)((v0_0 + 0x0));
    (((struct oFE_uchar *)((v0_7 + v0_6)))->v) = ((*(signed char *)(((0xFE + (v0_7 + v0_6)) + 0x0))) | 0x80);
    v0_7 = *(int *)((v0_0 + 0x0));
    (((struct oFC_uint *)((v0_7 + v0_6)))->v) = ((((((struct oFC_int *)((v0_7 + v0_6)))->v)) & 0xFFFDFFFF) | ((unsigned int)((int)((unsigned int)(((v0_1 == 0)) ? 1 : 0) & 0x1)) << 17));
    (((struct o8C_uint *)((*(int *)((v0_0 + 0x0)))))->v) = 0x5;
    v0_6 = *(int *)((v0_0 + 0x0));
    (((struct oFF_uchar *)(v0_6))->v) = ((*(signed char *)(((0xFF + v0_6) + 0x0))) | 0x20);
    (((struct o8C_uint *)(((*(int *)((v0_0 + 0x0))) + v0_4)))->v) = 0x4;
    v0_6 = *(int *)((v0_0 + 0x0));
    (((struct oFF_uchar *)((v0_6 + v0_4)))->v) = ((*(signed char *)(((0xFF + (v0_6 + v0_4)) + 0x0))) | 0x20);
    if (((*(int *)((v0_0 + 0x14))) != 0)) goto L_C064064;
    (((struct oE0_uint *)((*(int *)((v0_0 + 0x0)))))->v) = 0xCB18980;
    (((struct oE4_uint *)((*(int *)((v0_0 + 0x0)))))->v) = v0_2;
    (((struct oE0_uint *)(((*(int *)((v0_0 + 0x0))) + v0_4)))->v) = 0xCB196BC;
    L_C064080:;
    (((struct oE4_uint *)(((*(int *)((v0_0 + 0x0))) + v0_4)))->v) = v0_2;
    L_C064594:;
    v0_7 = (v0_2);
    L_C0645A6:;
    if (((int)v0_7 < (int)(*(int *)((v0_0 + 0x4))))) goto L_C064598;
    if ((v0_5 != 0)) goto L_C06462A;
    v0_2 = *(int *)((v0_0 + 0x14));
    v0_8 = (v0_2);
    if ((v0_2 == 1)) goto L_C0645E0;
    if (!((v0_8 == 2))) goto L_C06462A;
    if ((v0_3 != 0)) goto L_C06462A;
    *(unsigned int *)(((int)stk + 4)) = (v0_1 << 2);
    v0_1 = (*(int *)((0xC13B32C + (v0_1 << 2))));
    *(int *)((int)stk + 0) = v0_1;
    v0_5 = ((*(int *)((((((int)((int)(FUN_0c05bf60()) % (int)(*(int *)(((*(int *)(((int)stk + 4))) + 0xC10FA6C))))) << 2) + v0_1) + 0x0))));
    goto L_C06462A;
    L_C06462A:;
    FUN_0c060298((*(int *)(((int)stk + 20))), v0_5, (*(int *)((v0_0 + 0x14))));
    return (FUN_0c06ac1a((*(int *)(((*(int *)((v0_0 + 0x0))) + 0x10))), (*(int *)((v0_0 + 0x14))), (*(int *)((v0_0 + 0x4))), v0_3));
    L_C0645E0:;
    *(unsigned int *)(((int)stk + 4)) = (v0_1 << 2);
    v0_1 = (*(int *)((0xC13B324 + (v0_1 << 2))));
    *(int *)((int)stk + 0) = v0_1;
    v0_5 = ((*(int *)((((((int)((int)(FUN_0c05bf60()) % (int)(*(int *)(((*(int *)(((int)stk + 4))) + 0xC10FA5C))))) << 2) + v0_1) + 0x0))));
    goto L_C06462A;
    L_C064598:;
    (((struct o84_uint *)(((v0_7 << 8) + (*(int *)((v0_0 + 0x0))))))->v) = v0_7;
    v0_7 = ((v0_7 + 0x1));
    goto L_C0645A6;
    L_C064064:;
    (((struct oE0_uint *)((*(int *)((v0_0 + 0x0)))))->v) = ((((struct o0_int *)0xC10EF34)->v));
    (((struct oE4_uint *)((*(int *)((v0_0 + 0x0)))))->v) = v0_2;
    (((struct oE0_uint *)(((*(int *)((v0_0 + 0x0))) + v0_4)))->v) = ((((struct o4_int *)0xC10EF34)->v));
    goto L_C064080;
    L_C063F1E:;
    if (((*(int *)((v0_0 + 0x14))) != 2)) goto L_C063F36;
    *(unsigned int *)(((int)stk + 4)) = (*(int *)(((*(int *)((v0_10 + (v0_1 << 2)))) + 0x8)));
    *(unsigned int *)(((int)stk + 8)) = (*(int *)(((*(int *)((v0_5 + (v0_1 << 2)))) + 0x8)));
    v0_7 = ((v0_1 << 2));
    goto L_C063F36;
    L_C063F7C:;
    *(unsigned int *)(((int)stk + 4)) = (v0_1 << 2);
    *(unsigned int *)(((int)stk + 8)) = (*(int *)(((*(int *)(((v0_1 << 2) + (*(int *)(((int)stk + 8)))))) + 0x8)));
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((*(int *)((((v0_1 << 2) + v0_9) + 0x0))) + 0x8)));
    v0_5 = *(int *)((v0_0 + 0x0));
    *(int *)((int)stk + 0) = (0xE0 + (v0_5 + v0_6));
    (((struct oE0_uint *)((v0_5 + v0_6)))->v) = (*(int *)(((*(int *)(((int)stk + 8))) + (((int)((int)(FUN_0c05bf60()) % (int)(*(int *)(((int)stk + 20))))) << 2))));
    v0_5 = *(int *)((v0_0 + 0x14));
    *(unsigned int *)(((int)stk + 8)) = (*(int *)(((v0_5 << 2) + (*(int *)(((*(int *)(((int)stk + 4))) + 0xC13B16C))))));
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((v0_5 << 2) + (*(int *)(((*(int *)(((int)stk + 4))) + 0xC13B174))))));
    v0_5 = (int)((int)(FUN_0c05bf60()) % (int)(*(int *)(((int)stk + 20))));
    v0_8 = *(int *)(((int)stk + 8));
    (((struct oE4_uint *)(((*(int *)((v0_0 + 0x0))) + v0_6)))->v) = (*(int *)(((v0_8 + ((v0_5 << 2) << 1)) + 0x0)));
    *(unsigned int *)(((int)stk + 20)) = (*(int *)((((*(int *)((v0_0 + 0x14))) << 2) + (*(int *)(((*(int *)(((int)stk + 4))) + 0xC13B31C))))));
    v0_7 = ((v0_8 + ((v0_5 << 2) << 1)));
    v0_5 = ((*(int *)(((v0_8 + ((v0_5 << 2) << 1)) + 0x4))));
    goto L_C063FF4;
    L_C063CEA:;
    if ((v0_3 == 0)) goto L_C063D6C;
    if (((*(int *)((v0_0 + 0x14))) != 0)) goto L_C063D10;
    *(unsigned int *)(((int)stk + 4)) = (*(int *)(((*(int *)(((v0_1 << 2) + (*(int *)(((*(int *)(((int)stk + 4))) + (*(int *)(((int)stk + 16))))))))) + 0x4)));
    *(unsigned int *)(((int)stk + 8)) = (*(int *)(((*(int *)(((v0_1 << 2) + (*(int *)((v0_7 + (*(int *)(((int)stk + 16))))))))) + 0x4)));
    v0_5 = ((v0_1 << 2));
    L_C063D28:;
    v0_5 = (int)((int)(FUN_0c05bf60()) % (int)(*(int *)(((int)stk + 8))));
    v0_7 = *(int *)(((int)stk + 4));
    (((struct oE0_uint *)(((*(int *)((v0_0 + 0x0))) + v0_4)))->v) = (*(int *)(((v0_7 + ((v0_5 << 2) << 1)) + 0x0)));
    (((struct oE4_uint *)(((*(int *)((v0_0 + 0x0))) + v0_4)))->v) = v0_2;
    v0_8 = *(int *)((v0_0 + 0x0));
    (((struct oFD_uchar *)((v0_8 + v0_4)))->v) = ((*(signed char *)(((0xFD + (v0_8 + v0_4)) + 0x0))) | 0x80);
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((v0_7 + ((v0_5 << 2) << 1)) + 0x4)));
    v0_7 = ((v0_7 + ((v0_5 << 2) << 1)));
    v0_5 = (v0_2);
    L_C063DE4:;
    v0_7 = *(int *)((v0_0 + 0x0));
    (((struct oFE_uchar *)((v0_7 + v0_4)))->v) = ((*(signed char *)(((0xFE + (v0_7 + v0_4)) + 0x0))) | 0x80);
    v0_7 = *(int *)((v0_0 + 0x0));
    (((struct oFC_uint *)((v0_7 + v0_4)))->v) = ((((((struct oFC_int *)((v0_7 + v0_4)))->v)) & 0xFFFDFFFF) | ((unsigned int)((int)((unsigned int)(((v0_1 == 0)) ? 1 : 0) & 0x1)) << 17));
    v0_7 = *(int *)((v0_0 + 0x0));
    (((struct oFE_uchar *)(v0_7))->v) = ((*(signed char *)(((0xFE + v0_7) + 0x0))) & 0x7F);
    (((struct o8C_uint *)((*(int *)((v0_0 + 0x0)))))->v) = 0x4;
    v0_7 = *(int *)((v0_0 + 0x0));
    (((struct oFF_uchar *)(v0_7))->v) = ((*(signed char *)(((0xFF + v0_7) + 0x0))) | 0x20);
    v0_7 = *(int *)((v0_0 + 0x0));
    (((struct oFE_uchar *)((v0_7 + v0_6)))->v) = ((*(signed char *)(((0xFE + (v0_7 + v0_6)) + 0x0))) & 0x7F);
    (((struct o8C_uint *)(((*(int *)((v0_0 + 0x0))) + v0_6)))->v) = 0x5;
    v0_7 = *(int *)((v0_0 + 0x0));
    (((struct oFF_uchar *)((v0_7 + v0_6)))->v) = ((*(signed char *)(((0xFF + (v0_7 + v0_6)) + 0x0))) | 0x20);
    if (((*(int *)((v0_0 + 0x14))) != 0)) goto L_C063E6E;
    (((struct oE0_uint *)((*(int *)((v0_0 + 0x0)))))->v) = 0xCB1A2D0;
    (((struct oE4_uint *)((*(int *)((v0_0 + 0x0)))))->v) = v0_2;
    (((struct oE0_uint *)(((*(int *)((v0_0 + 0x0))) + v0_6)))->v) = 0xCB1AE58;
    L_C063E8A:;
    (((struct oE4_uint *)(((*(int *)((v0_0 + 0x0))) + v0_6)))->v) = v0_2;
    v0_7 = *(int *)((v0_0 + 0x0));
    v0_8 = (v0_7 + v0_4);
    v0_9 = (((int)stk + 4) + 0x24);
    for (;;) { t200 = *(int *)v0_8; v0_8 = (v0_8 + 4); if ((unsigned int)(((v0_7 + v0_4) + 256)) < (unsigned int)v0_8) break; *(unsigned int *)v0_9 = t200; v0_9 = (v0_9 + 4); }
    v0_8 = (v0_7 + v0_6);
    v0_9 = (v0_7 + v0_4);
    for (;;) { t204 = *(int *)v0_8; v0_8 = (v0_8 + 4); if ((unsigned int)(((v0_7 + v0_6) + 256)) < (unsigned int)v0_8) break; *(unsigned int *)v0_9 = t204; v0_9 = (v0_9 + 4); }
    v0_8 = (((int)stk + 4) + 0x24);
    v0_9 = ((((int)stk + 4) + 0x24) + 256);
    v0_6 = (v0_7 + v0_6);
    for (;;) { t208 = *(int *)v0_8; v0_8 = (v0_8 + 4); if ((unsigned int)v0_9 < (unsigned int)v0_8) break; *(unsigned int *)v0_6 = t208; v0_6 = (v0_6 + 4); }
    v0_9 = ((v0_7 + v0_4));
    goto L_C064594;
    L_C063E6E:;
    (((struct oE0_uint *)((*(int *)((v0_0 + 0x0)))))->v) = ((((struct o0_int *)0xC10EF34)->v));
    (((struct oE4_uint *)((*(int *)((v0_0 + 0x0)))))->v) = v0_2;
    (((struct oE0_uint *)(((*(int *)((v0_0 + 0x0))) + v0_6)))->v) = ((((struct o8_int *)0xC10EF34)->v));
    goto L_C063E8A;
    L_C063D10:;
    if (((*(int *)((v0_0 + 0x14))) != 2)) goto L_C063D28;
    *(unsigned int *)(((int)stk + 4)) = (*(int *)(((*(int *)((v0_10 + (v0_1 << 2)))) + 0x4)));
    *(unsigned int *)(((int)stk + 8)) = (*(int *)(((*(int *)((v0_5 + (v0_1 << 2)))) + 0x4)));
    v0_7 = ((v0_1 << 2));
    goto L_C063D28;
    L_C063D6C:;
    *(unsigned int *)(((int)stk + 4)) = (v0_1 << 2);
    *(unsigned int *)(((int)stk + 8)) = (*(int *)(((*(int *)(((v0_1 << 2) + (*(int *)(((int)stk + 8)))))) + 0x4)));
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((*(int *)((((v0_1 << 2) + v0_9) + 0x0))) + 0x4)));
    v0_5 = *(int *)((v0_0 + 0x0));
    *(int *)((int)stk + 0) = (0xE0 + (v0_5 + v0_4));
    (((struct oE0_uint *)((v0_5 + v0_4)))->v) = (*(int *)(((*(int *)(((int)stk + 8))) + (((int)((int)(FUN_0c05bf60()) % (int)(*(int *)(((int)stk + 20))))) << 2))));
    v0_5 = *(int *)((v0_0 + 0x14));
    *(unsigned int *)(((int)stk + 8)) = (*(int *)(((v0_5 << 2) + (*(int *)(((*(int *)(((int)stk + 4))) + 0xC13B16C))))));
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((v0_5 << 2) + (*(int *)(((*(int *)(((int)stk + 4))) + 0xC13B174))))));
    v0_5 = (int)((int)(FUN_0c05bf60()) % (int)(*(int *)(((int)stk + 20))));
    v0_8 = *(int *)(((int)stk + 8));
    (((struct oE4_uint *)(((*(int *)((v0_0 + 0x0))) + v0_4)))->v) = (*(int *)(((v0_8 + ((v0_5 << 2) << 1)) + 0x0)));
    *(unsigned int *)(((int)stk + 20)) = (*(int *)((((*(int *)((v0_0 + 0x14))) << 2) + (*(int *)(((*(int *)(((int)stk + 4))) + 0xC13B31C))))));
    v0_7 = ((v0_8 + ((v0_5 << 2) << 1)));
    v0_5 = ((*(int *)(((v0_8 + ((v0_5 << 2) << 1)) + 0x4))));
    goto L_C063DE4;
    L_C063B00:;
    if ((v0_8 != 2)) goto L_C063B08;
    if ((v0_1 == 0)) goto L_C064094;
    v0_7 = (0x4);
    L_C064096:;
    *(unsigned int *)(((int)stk + 32)) = v0_7;
    *(unsigned int *)(((int)stk + 36)) = v0_2;
    *(unsigned int *)(((int)stk + 8)) = v0_2;
    *(unsigned int *)(((int)stk + 4)) = (v0_1 << 2);
    *(unsigned int *)(((int)stk + 12)) = (v0_7 << 2);
    L_C0642A0:;
    if (((int)(*(int *)(((int)stk + 8))) >= (int)(*(int *)((v0_0 + 0x4))))) goto L_C0642AC;
    v0_6 = *(int *)(((int)stk + 8));
    v0_8 = *(int *)((v0_0 + 0x0));
    v0_7 = (((v0_6 << 8) + v0_8));
    if ((((((struct o88_int *)(((v0_6 << 8) + v0_8)))->v)) == (*(int *)(((int)stk + 32))))) goto L_C0640FC;
    if ((((((struct o8C_int *)(v0_7))->v)) == (*(int *)(((int)stk + 32))))) goto L_C0640FC;
    v0_6 = *(int *)(((int)stk + 8));
    (((struct o8C_uint *)(((*(int *)((v0_0 + 0x0))) + (v0_6 << 8))))->v) = v0_2;
    v0_7 = *(int *)((v0_0 + 0x0));
    (((struct oFF_uchar *)((v0_7 + (v0_6 << 8))))->v) = ((*(signed char *)(((0xFF + (v0_7 + (v0_6 << 8))) + 0x0))) | 0x20);
    L_C06429A:;
    *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x1);
    goto L_C0642A0;
    L_C0640FC:;
    if ((v0_3 == 0)) goto L_C0641A4;
    if (((*(int *)((v0_0 + 0x14))) != 0)) goto L_C064128;
    *(unsigned int *)(((int)stk + 24)) = (*(int *)(((*(int *)(((int)stk + 12))) + (*(int *)(((*(int *)(((int)stk + 4))) + (*(int *)(((*(int *)(((int)stk + 16))) + 0xC13B2FC)))))))));
    *(unsigned int *)(((int)stk + 28)) = (*(int *)(((*(int *)(((*(int *)(((int)stk + 4))) + (*(int *)(((*(int *)(((int)stk + 16))) + 0xC13B30C)))))) + (*(int *)(((int)stk + 12))))));
    L_C064146:;
    v0_5 = (int)((int)(FUN_0c05bf60()) % (int)(*(int *)(((int)stk + 28))));
    v0_6 = *(int *)(((int)stk + 24));
    v0_7 = *(int *)(((int)stk + 8));
    (((struct oE0_uint *)(((*(int *)((v0_0 + 0x0))) + (v0_7 << 8))))->v) = (*(int *)(((v0_6 + ((v0_5 << 2) << 1)) + 0x0)));
    (((struct oE4_uint *)(((*(int *)((v0_0 + 0x0))) + (v0_7 << 8))))->v) = v0_2;
    v0_8 = *(int *)((v0_0 + 0x0));
    (((struct oFD_uchar *)((v0_8 + (v0_7 << 8))))->v) = ((*(signed char *)(((0xFD + (v0_8 + (v0_7 << 8))) + 0x0))) | 0x80);
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((v0_6 + ((v0_5 << 2) << 1)) + 0x4)));
    v0_5 = (v0_2);
    L_C064226:;
    v0_6 = *(int *)(((int)stk + 8));
    v0_7 = *(int *)((v0_0 + 0x0));
    (((struct oFE_uchar *)((v0_7 + (v0_6 << 8))))->v) = ((*(signed char *)(((0xFE + (v0_7 + (v0_6 << 8))) + 0x0))) | 0x80);
    v0_7 = *(int *)((v0_0 + 0x0));
    (((struct oFC_uint *)((v0_7 + (v0_6 << 8))))->v) = ((((((struct oFC_int *)((v0_7 + (v0_6 << 8))))->v)) & 0xFFFDFFFF) | ((unsigned int)((int)((unsigned int)(((v0_1 == 0)) ? 1 : 0) & 0x1)) << 17));
    if (((*(int *)(((int)stk + 8))) != 0)) goto L_C06429A;
    *(unsigned int *)(((int)stk + 36)) = 0x1;
    goto L_C06429A;
    L_C064128:;
    if (((*(int *)((v0_0 + 0x14))) != 2)) goto L_C064146;
    *(unsigned int *)(((int)stk + 24)) = (*(int *)(((*(int *)(((int)stk + 12))) + (*(int *)(((*(int *)(((int)stk + 4))) + 0xC13B1EC))))));
    *(unsigned int *)(((int)stk + 28)) = (*(int *)(((*(int *)(((int)stk + 12))) + (*(int *)(((*(int *)(((int)stk + 4))) + 0xC13B1F4))))));
    goto L_C064146;
    L_C0641A4:;
    *(unsigned int *)(((int)stk + 28)) = (*(int *)(((*(int *)(((int)stk + 12))) + (*(int *)(((*(int *)(((int)stk + 4))) + 0xC13B144))))));
    *(unsigned int *)(((int)stk + 24)) = (*(int *)(((*(int *)(((int)stk + 12))) + (*(int *)(((*(int *)(((int)stk + 4))) + 0xC13B14C))))));
    v0_5 = *(int *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 20)) = (v0_5 << 8);
    v0_6 = *(int *)((v0_0 + 0x0));
    *(int *)((int)stk + 0) = (0xE0 + ((v0_5 << 8) + v0_6));
    (((struct oE0_uint *)(((v0_5 << 8) + v0_6)))->v) = (*(int *)(((*(int *)(((int)stk + 28))) + (((int)((int)(FUN_0c05bf60()) % (int)(*(int *)(((int)stk + 24))))) << 2))));
    v0_5 = *(int *)((v0_0 + 0x14));
    *(unsigned int *)(((int)stk + 24)) = (*(int *)(((v0_5 << 2) + (*(int *)(((*(int *)(((int)stk + 4))) + 0xC13B16C))))));
    *(unsigned int *)(((int)stk + 28)) = (*(int *)(((v0_5 << 2) + (*(int *)(((*(int *)(((int)stk + 4))) + 0xC13B174))))));
    v0_5 = (int)((int)(FUN_0c05bf60()) % (int)(*(int *)(((int)stk + 28))));
    v0_6 = *(int *)(((int)stk + 24));
    (((struct oE4_uint *)(((*(int *)((v0_0 + 0x0))) + (*(int *)(((int)stk + 20))))))->v) = (*(int *)(((v0_6 + ((v0_5 << 2) << 1)) + 0x0)));
    *(unsigned int *)(((int)stk + 20)) = (*(int *)((((*(int *)((v0_0 + 0x14))) << 2) + (*(int *)(((*(int *)(((int)stk + 4))) + 0xC13B31C))))));
    v0_5 = ((*(int *)(((v0_6 + ((v0_5 << 2) << 1)) + 0x4))));
    goto L_C064226;
    L_C0642AC:;
    if (((*(int *)(((int)stk + 36))) == 0)) goto L_C0642DA;
    v0_6 = *(int *)((v0_0 + 0x0));
    *(unsigned int *)(((int)stk + 4)) = v0_6;
    v0_7 = *(int *)(((int)stk + 4));
    v0_8 = v0_7;
    v0_9 = (((int)stk + 4) + 0x24);
    for (;;) { t363 = *(int *)v0_8; v0_8 = (v0_8 + 4); if ((unsigned int)((v0_7 + 256)) < (unsigned int)v0_8) break; *(unsigned int *)v0_9 = t363; v0_9 = (v0_9 + 4); }
    v0_7 = (v0_6 + v0_4);
    v0_8 = (*(int *)(((int)stk + 4)));
    for (;;) { t368 = *(int *)v0_7; v0_7 = (v0_7 + 4); if ((unsigned int)(((v0_6 + v0_4) + 256)) < (unsigned int)v0_7) break; *(unsigned int *)v0_8 = t368; v0_8 = (v0_8 + 4); }
    v0_7 = (((int)stk + 4) + 0x24);
    v0_8 = ((((int)stk + 4) + 0x24) + 256);
    v0_6 = (v0_6 + v0_4);
    for (;;) { t372 = *(int *)v0_7; v0_7 = (v0_7 + 4); if ((unsigned int)v0_8 < (unsigned int)v0_7) break; *(unsigned int *)v0_6 = t372; v0_6 = (v0_6 + 4); }
    L_C0642DA:;
    v0_4 = (((struct oE0_int *)(((*(int *)((v0_0 + 0x0))) + v0_4)))->v);
    v0_8 = (v0_4);
    if ((v0_4 == 0xCA5E4BC)) goto L_C064392;
    if ((v0_8 == 0xCA6187C)) goto L_C06439E;
    if ((v0_8 == 0xCA64D50)) goto L_C0643A4;
    if ((v0_8 == 0xCA68E24)) goto L_C0643AA;
    if ((v0_8 == 0xCA7F534)) goto L_C0643B0;
    if ((v0_8 == 0xCA824A4)) goto L_C0643B6;
    if ((v0_8 == 0xCA85860)) goto L_C0643BC;
    if ((v0_8 == 0xCA889EC)) goto L_C0643C2;
    if ((v0_8 == 0xCAA04B8)) goto L_C0643C8;
    if ((v0_8 == 0xCAA3628)) goto L_C0643CE;
    if ((v0_8 == 0xCAA6A60)) goto L_C0643D4;
    if ((v0_8 == 0xCAAA218)) goto L_C0643DA;
    if ((v0_8 == 0xCAC1C60)) goto L_C0643E0;
    if ((v0_8 == 0xCAC5458)) goto L_C0643E6;
    if ((v0_8 == 0xCAC8C9C)) goto L_C0643EC;
    if ((v0_8 == 0xCACD2C0)) goto L_C0643F2;
    v0_4 = *(int *)((v0_0 + 0x0));
    (((struct oE0_uint *)(v0_4))->v) = (*(int *)(((((((struct o88_int *)(v0_4))->v)) << 2) + 0xC10EF34)));
    L_C06440C:;
    v0_4 = *(int *)((v0_0 + 0x0));
    (((struct oFE_uchar *)(v0_4))->v) = ((*(signed char *)(((0xFE + v0_4) + 0x0))) & 0x7F);
    goto L_C064594;
    L_C0643F2:;
    v0_4 = ((*(int *)((v0_0 + 0x0))));
    v0_6 = (0xCACFAD8);
    L_C0643F6:;
    (((struct oE0_uint *)(v0_4))->v) = v0_6;
    goto L_C06440C;
    L_C0643EC:;
    v0_4 = ((*(int *)((v0_0 + 0x0))));
    v0_6 = (0xCACBA54);
    goto L_C0643F6;
    L_C0643E6:;
    v0_4 = ((*(int *)((v0_0 + 0x0))));
    v0_6 = (0xCAC7964);
    goto L_C0643F6;
    L_C0643E0:;
    v0_4 = ((*(int *)((v0_0 + 0x0))));
    v0_6 = (0xCAC40B4);
    goto L_C0643F6;
    L_C0643DA:;
    v0_4 = ((*(int *)((v0_0 + 0x0))));
    v0_6 = (0xCAACBF4);
    goto L_C0643F6;
    L_C0643D4:;
    v0_4 = ((*(int *)((v0_0 + 0x0))));
    v0_6 = (0xCAA916C);
    goto L_C0643F6;
    L_C0643CE:;
    v0_4 = ((*(int *)((v0_0 + 0x0))));
    v0_6 = (0xCAA5F64);
    goto L_C0643F6;
    L_C0643C8:;
    v0_4 = ((*(int *)((v0_0 + 0x0))));
    v0_6 = (0xCAA2ADC);
    goto L_C0643F6;
    L_C0643C2:;
    v0_4 = ((*(int *)((v0_0 + 0x0))));
    v0_6 = (0xCA8A94C);
    goto L_C0643F6;
    L_C0643BC:;
    v0_4 = ((*(int *)((v0_0 + 0x0))));
    v0_6 = (0xCA8770C);
    goto L_C0643F6;
    L_C0643B6:;
    v0_4 = ((*(int *)((v0_0 + 0x0))));
    v0_6 = (0xCA84440);
    goto L_C0643F6;
    L_C0643B0:;
    v0_4 = ((*(int *)((v0_0 + 0x0))));
    v0_6 = (0xCA812F0);
    goto L_C0643F6;
    L_C0643AA:;
    v0_4 = ((*(int *)((v0_0 + 0x0))));
    v0_6 = (0xCA6B97C);
    goto L_C0643F6;
    L_C0643A4:;
    v0_4 = ((*(int *)((v0_0 + 0x0))));
    v0_6 = (0xCA676F8);
    goto L_C0643F6;
    L_C06439E:;
    v0_4 = ((*(int *)((v0_0 + 0x0))));
    v0_6 = (0xCA641CC);
    goto L_C0643F6;
    L_C064392:;
    (((struct oE0_uint *)((*(int *)((v0_0 + 0x0)))))->v) = 0xCA60CF8;
    goto L_C06440C;
    L_C064094:;
    v0_7 = (0x5);
    goto L_C064096;
    L_C063B08:;
    if ((v0_8 != 1)) goto L_C063B10;
    if ((v0_3 == 0)) goto L_C064502;
    if (((*(int *)((v0_0 + 0x14))) != 0)) goto L_C0644B4;
    if (((*(int *)((v0_0 + 0x8))) != 1)) goto L_C064498;
    *(unsigned int *)(((int)stk + 4)) = (*(int *)(((*(int *)(((v0_1 << 2) + 0xC13B1AC))) + 0x0)));
    *(unsigned int *)(((int)stk + 8)) = (*(int *)(((*(int *)(((v0_1 << 2) + 0xC13B1B4))) + 0x0)));
    v0_7 = ((v0_1 << 2));
    L_C0644CC:;
    v0_4 = (int)((int)(FUN_0c05bf60()) % (int)(*(int *)(((int)stk + 8))));
    v0_5 = *(int *)(((int)stk + 4));
    (((struct oE0_uint *)((*(int *)((v0_0 + 0x0)))))->v) = (*(int *)(((v0_5 + ((v0_4 << 2) << 1)) + 0x0)));
    (((struct oE4_uint *)((*(int *)((v0_0 + 0x0)))))->v) = v0_2;
    v0_6 = *(int *)((v0_0 + 0x0));
    (((struct oFD_uchar *)(v0_6))->v) = ((*(signed char *)(((0xFD + v0_6) + 0x0))) | 0x80);
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((v0_5 + ((v0_4 << 2) << 1)) + 0x4)));
    v0_7 = ((v0_5 + ((v0_4 << 2) << 1)));
    v0_5 = (v0_2);
    L_C064576:;
    v0_4 = *(int *)((v0_0 + 0x0));
    (((struct oFE_uchar *)(v0_4))->v) = ((*(signed char *)(((0xFE + v0_4) + 0x0))) | 0x80);
    v0_4 = *(int *)((v0_0 + 0x0));
    (((struct oFC_uint *)(v0_4))->v) = ((((((struct oFC_int *)(v0_4))->v)) & 0xFFFDFFFF) | ((unsigned int)((int)((unsigned int)(((v0_1 == 0)) ? 1 : 0) & 0x1)) << 17));
    goto L_C064594;
    L_C064498:;
    *(unsigned int *)(((int)stk + 4)) = (*(int *)(((*(int *)(((v0_1 << 2) + (*(int *)(((*(int *)(((int)stk + 4))) + (*(int *)(((int)stk + 16))))))))) + 0x0)));
    *(unsigned int *)(((int)stk + 8)) = (*(int *)(((*(int *)(((v0_1 << 2) + (*(int *)((v0_7 + (*(int *)(((int)stk + 16))))))))) + 0x0)));
    v0_5 = ((v0_1 << 2));
    goto L_C0644CC;
    L_C0644B4:;
    if (((*(int *)((v0_0 + 0x14))) != 2)) goto L_C0644CC;
    *(unsigned int *)(((int)stk + 4)) = (*(int *)(((*(int *)((v0_10 + (v0_1 << 2)))) + 0x0)));
    *(unsigned int *)(((int)stk + 8)) = (*(int *)(((*(int *)((v0_5 + (v0_1 << 2)))) + 0x0)));
    v0_7 = ((v0_1 << 2));
    goto L_C0644CC;
    L_C064502:;
    *(unsigned int *)(((int)stk + 4)) = (v0_1 << 2);
    *(unsigned int *)(((int)stk + 8)) = (*(int *)(((*(int *)(((v0_1 << 2) + (*(int *)(((int)stk + 8)))))) + 0x0)));
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((*(int *)((((v0_1 << 2) + v0_9) + 0x0))) + 0x0)));
    v0_4 = *(int *)((v0_0 + 0x0));
    *(int *)((int)stk + 0) = (0xE0 + v0_4);
    (((struct oE0_uint *)(v0_4))->v) = (*(int *)(((*(int *)(((int)stk + 8))) + (((int)((int)(FUN_0c05bf60()) % (int)(*(int *)(((int)stk + 20))))) << 2))));
    v0_4 = *(int *)((v0_0 + 0x14));
    *(unsigned int *)(((int)stk + 8)) = (*(int *)(((v0_4 << 2) + (*(int *)(((*(int *)(((int)stk + 4))) + 0xC13B16C))))));
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((v0_4 << 2) + (*(int *)(((*(int *)(((int)stk + 4))) + 0xC13B174))))));
    v0_4 = (int)((int)(FUN_0c05bf60()) % (int)(*(int *)(((int)stk + 20))));
    v0_5 = *(int *)(((int)stk + 8));
    (((struct oE4_uint *)((*(int *)((v0_0 + 0x0)))))->v) = (*(int *)(((v0_5 + ((v0_4 << 2) << 1)) + 0x0)));
    *(unsigned int *)(((int)stk + 20)) = (*(int *)((((*(int *)((v0_0 + 0x14))) << 2) + (*(int *)(((*(int *)(((int)stk + 4))) + 0xC13B31C))))));
    v0_7 = ((v0_5 + ((v0_4 << 2) << 1)));
    v0_5 = ((*(int *)(((v0_5 + ((v0_4 << 2) << 1)) + 0x4))));
    goto L_C064576;
    L_C063B10:;
    goto L_C064594;
    L_C063B14:;
    if ((v0_3 == 0)) goto L_C063BAC;
    if (((*(int *)((v0_0 + 0x14))) != 0)) goto L_C063B54;
    *(unsigned int *)(((int)stk + 4)) = (*(int *)(((*(int *)(((v0_1 << 2) + (*(int *)(((*(int *)(((int)stk + 4))) + (*(int *)(((int)stk + 16))))))))) + 0xC)));
    *(unsigned int *)(((int)stk + 8)) = (*(int *)(((*(int *)(((v0_1 << 2) + (*(int *)((v0_7 + (*(int *)(((int)stk + 16))))))))) + 0xC)));
    v0_5 = ((v0_1 << 2));
    L_C063B6C:;
    v0_5 = (int)((int)(FUN_0c05bf60()) % (int)(*(int *)(((int)stk + 8))));
    v0_6 = *(int *)(((int)stk + 4));
    (((struct oE0_uint *)(((*(int *)((v0_0 + 0x0))) + 0x300)))->v) = (*(int *)(((v0_6 + ((v0_5 << 2) << 1)) + 0x0)));
    (((struct oE4_uint *)((0x300 + (*(int *)((v0_0 + 0x0))))))->v) = v0_2;
    v0_7 = *(int *)((v0_0 + 0x0));
    (((struct oFD_uchar *)((v0_7 + 0x300)))->v) = ((*(signed char *)(((0xFD + (v0_7 + 0x300)) + 0x0))) | 0x80);
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((v0_6 + ((v0_5 << 2) << 1)) + 0x4)));
    v0_7 = ((v0_6 + ((v0_5 << 2) << 1)));
    v0_5 = (v0_2);
    L_C063C28:;
    v0_6 = *(int *)((v0_0 + 0x0));
    (((struct oFE_uchar *)((v0_6 + 0x300)))->v) = ((*(signed char *)(((0xFE + (v0_6 + 0x300)) + 0x0))) | 0x80);
    v0_6 = *(int *)((v0_0 + 0x0));
    (((struct oFC_uint *)((v0_6 + 0x300)))->v) = ((((((struct oFC_int *)((v0_6 + 0x300)))->v)) & 0xFFFDFFFF) | ((unsigned int)((int)((unsigned int)(((v0_1 == 0)) ? 1 : 0) & 0x1)) << 17));
    *(unsigned int *)(((int)stk + 4)) = 0xC10EF34;
    v0_7 = (v0_2);
    v0_9 = (0x0);
    v0_10 = (0xC10FA74);
    L_C063CD8:;
    if (((int)v0_7 <= (int)0x2)) goto L_C063C58;
    goto L_C064594;
    L_C063C58:;
    v0_6 = *(int *)((v0_0 + 0x0));
    (((struct oFE_uchar *)(((v0_7 << 8) + v0_6)))->v) = ((*(signed char *)(((0xFE + ((v0_7 << 8) + v0_6)) + 0x0))) & 0x7F);
    if (((*(int *)((v0_0 + 0x14))) != 0)) goto L_C063CB8;
    *(unsigned int *)(((int)stk + 8)) = (v0_7 << 8);
    (((struct oE0_uint *)(((v0_7 << 8) + (*(int *)((v0_0 + 0x0))))))->v) = (*(int *)((v0_10 + 0x0)));
    (((struct oE4_uint *)(((*(int *)((v0_0 + 0x0))) + (*(int *)(((int)stk + 8))))))->v) = v0_2;
    L_C063CCC:;
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x4);
    v0_7 = ((v0_7 + 0x1));
    v0_9 = ((v0_9 + v0_4));
    v0_10 = ((v0_10 + 0x4));
    goto L_C063CD8;
    L_C063CB8:;
    (((struct oE0_uint *)(((*(int *)((v0_0 + 0x0))) + v0_9)))->v) = (*(int *)(((*(int *)(((int)stk + 4))) + 0x0)));
    (((struct oE4_uint *)(((*(int *)((v0_0 + 0x0))) + v0_9)))->v) = v0_2;
    goto L_C063CCC;
    L_C063B54:;
    if (((*(int *)((v0_0 + 0x14))) != 2)) goto L_C063B6C;
    *(unsigned int *)(((int)stk + 4)) = (*(int *)(((*(int *)((v0_10 + (v0_1 << 2)))) + 0xC)));
    *(unsigned int *)(((int)stk + 8)) = (*(int *)(((*(int *)((v0_5 + (v0_1 << 2)))) + 0xC)));
    v0_7 = ((v0_1 << 2));
    goto L_C063B6C;
    L_C063BAC:;
    *(unsigned int *)(((int)stk + 4)) = (v0_1 << 2);
    *(unsigned int *)(((int)stk + 8)) = (*(int *)(((*(int *)(((v0_1 << 2) + (*(int *)(((int)stk + 8)))))) + 0xC)));
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((*(int *)((((v0_1 << 2) + v0_9) + 0x0))) + 0xC)));
    v0_5 = *(int *)((v0_0 + 0x0));
    *(int *)((int)stk + 0) = (0xE0 + (v0_5 + 0x300));
    (((struct oE0_uint *)((v0_5 + 0x300)))->v) = (*(int *)(((*(int *)(((int)stk + 8))) + (((int)((int)(FUN_0c05bf60()) % (int)(*(int *)(((int)stk + 20))))) << 2))));
    v0_5 = *(int *)((v0_0 + 0x14));
    *(unsigned int *)(((int)stk + 8)) = (*(int *)(((v0_5 << 2) + (*(int *)(((*(int *)(((int)stk + 4))) + 0xC13B16C))))));
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((v0_5 << 2) + (*(int *)(((*(int *)(((int)stk + 4))) + 0xC13B174))))));
    v0_5 = (int)((int)(FUN_0c05bf60()) % (int)(*(int *)(((int)stk + 20))));
    v0_6 = *(int *)(((int)stk + 8));
    (((struct oE4_uint *)(((*(int *)((v0_0 + 0x0))) + 0x300)))->v) = (*(int *)(((v0_6 + ((v0_5 << 2) << 1)) + 0x0)));
    *(unsigned int *)(((int)stk + 20)) = (*(int *)((((*(int *)((v0_0 + 0x14))) << 2) + (*(int *)(((*(int *)(((int)stk + 4))) + 0xC13B31C))))));
    v0_7 = ((v0_6 + ((v0_5 << 2) << 1)));
    v0_5 = ((*(int *)(((v0_6 + ((v0_5 << 2) << 1)) + 0x4))));
    goto L_C063C28;
    L_C063AC2:;
    if (((*(int *)((v0_0 + 0x14))) != 0)) goto L_C063ADA;
    v0_3 = (0x1 & (FUN_0c05bf60())) == 0;
    if (v0_3) goto L_C063AD6;
    v0_3 = (0x1);
    goto L_C063ADC;
    L_C063AD6:;
    v0_3 = (0x0);
    goto L_C063ADC;
    L_C063ADA:;
    v0_3 = (v0_2);
    goto L_C063ADC;
    L_C063A8C:;
    (((struct oE0_uint *)(((*(int *)((v0_0 + 0x0))) + (v0_7 << 8))))->v) = v0_2;
    v0_3 = *(int *)((v0_0 + 0x0));
    (((struct oE4_uint *)(((v0_7 << 8) + v0_3)))->v) = v0_2;
    v0_3 = ((v0_7 << 8) + v0_3);
    v0_7 = ((v0_7 + 0x1));
    v0_5 = v0_3;
    goto L_C063AA2;
}

int FUN_0c048262(int a4)
{
    int stk[30];
    int t65;
    register int t190;
    register int t239;
    register int t395;
    register int t417;

    int R5;
    int R6;
    register int R7;
    int R10;
    register int R14;
    register float F0;
    register float F1;
    register float F2;
    register float F3;
    register float F4;
    register float F8;
    register float F12;
    register float F13;
    register float F14;
    register float F15;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    v0_5 = a4;
    *(unsigned int *)(((int)stk + 32)) = v0_5;
    { struct mvb32 { char b[32]; }; *(struct mvb32 *)((((int)stk + 32) + 0x38)) = *(struct mvb32 *)(0xC0F33F4); }
    FUN_0c07fdc8();
    v0_0 = *(int *)(((int)stk + 32));
    v0_7 = (v0_0);
    R10 = (0x1);
    v0_1 = (0xC2ADA5C);
    v0_2 = (0xC12FDAC);
    v0_5 = (0xC12FDA4);
    R5 = (0xC12FDA8);
    v0_4 = (0xC175C80);
    if ((v0_0 != -2)) goto L_C0482B2;
    *(unsigned int *)((v0_5 + 0x0)) = (*(int *)((v0_4 + 0x0)));
    *(unsigned char *)0xC1EC87C = R10;
    *(unsigned int *)((R5 + 0x0)) = (signed char)R10;
    L_C048D12:;
    return v0_7;
    L_C0482B2:;
    if (((*(int *)(((int)stk + 32))) != -1)) goto L_C0482D0;
    *(unsigned int *)((v0_4 + 0x0)) = (*(int *)((v0_5 + 0x0)));
    *(unsigned char *)0xC1EC87C = (*(int *)((R5 + 0x0)));
    (((struct oC_uint *)0xC1EC83C)->v) = 0x0;
    *(unsigned int *)((v0_1 + 0x0)) = 0x0;
    *(unsigned int *)((v0_2 + 0x0)) = 0x0;
    v0_7 = (0xC1EC848);
    goto L_C048D12;
    L_C0482D0:;
    if (((*(int *)(((int)stk + 32))) != 1)) goto L_C0482DC;
    R14 = (0xC12D2B8);
    L_C0482E4:;
    *(unsigned int *)(((int)stk + 36)) = 0x5A;
    L_C048304:;
    v0_5 = (0xC12D2B4);
    if ((((((struct o0_int *)0xC2AC2F4)->v)) != 1)) goto L_C04839C;
    v0_6 = (0xC12FDAC);
    if (((int)((((struct o0_int *)0xC12FDAC)->v)) <= 0)) goto L_C04839C;
    if (((int)(*(int *)((v0_6 + 0x0))) > (int)0xB)) goto L_C04839C;
    *(unsigned int *)((v0_5 + 0x0)) = R10;
    L_C0483A0:;
    v0_5 = (FUN_0c0464de(0x2000)) == 0;
    v0_0 = (0x3D0);
    v0_3 = (0xC2ADA64);
    if (v0_5) goto L_C0483B4;
    v0_5 = (0xC1EC78C);
    if (((int)(*(int *)0xC2AC614) >= (int)0x1E)) goto L_C0486F4;
    R6 = ((*(int *)((v0_5 + 0x4))));
    L_C0486F6:;
    if (((0x80 & R6) == 0)) goto L_C04870A;
    if (((int)((((struct o10_int *)0xC12FDAC)->v)) >= (int)0x1)) goto L_C04870A;
    v0_7 = (0x1);
    L_C04870C:;
    if (((0x40 & R6) == 0)) goto L_C04871E;
    if (((int)((((struct o10_int *)0xC12FDAC)->v)) <= 0)) goto L_C04871E;
    v0_6 = (0x1);
    L_C048720:;
    v0_5 = (((struct o10_int *)0xC12FDAC)->v);
    (((struct o10_uint *)0xC12FDAC)->v) = (v0_5 + (v0_7 - v0_6));
    v0_6 = (v0_5 + (v0_7 - v0_6)) != 0;
    v0_7 = (0xC12FDB8);
    v0_5 = ((0x20 & R6));
    R5 = ((0x10 & R6));
    R7 = (((((struct oC_int *)0xC12FDAC)->v)));
    if (v0_6) goto L_C048776;
    if ((v0_5 == 0)) goto L_C048756;
    if (((int)(*(int *)((v0_7 + 0x0))) >= (int)((*(int *)(((((((struct o8_int *)0xC12FDAC)->v)) << 2) + (((int)stk + 32) + 0x30)))) - 1))) goto L_C048756;
    v0_7 = (0x1);
    L_C048758:;
    if ((R5 == 0)) goto L_C048768;
    if (((int)((((struct oC_int *)0xC12FDAC)->v)) <= 0)) goto L_C048768;
    v0_6 = (0x1);
    L_C04876A:;
    v0_5 = ((((((struct oC_int *)0xC12FDAC)->v)) + (v0_7 - v0_6)));
    v0_6 = (0xC12FDB8);
    L_C04890C:;
    *(unsigned int *)((v0_6 + 0x0)) = v0_5;
    L_C0489AE:;
    v0_5 = (((struct o8_int *)0xC12FDAC)->v);
    *(unsigned int *)(((int)stk + 56)) = 0xC1EC78C;
    t65 = *(int *)0xC1EC790;
    v0_5 = (v0_5);
    R5 = (t65);
    if (((0x200 & t65) != 0)) goto L_C0489C8;
    if (((0x20000 & R5) != 0)) goto L_C0489C8;
    if ((v0_5 != 0)) goto L_C048B78;
    *(unsigned int *)(((int)stk + 44)) = 0x0;
    *(unsigned int *)(((int)stk + 32)) = (0x0 + R14);
    *(unsigned int *)(((int)stk + 40)) = (0x0 + R14);
    v0_5 = ((0x0 + R14));
    if (((int)(*(int *)(((int)stk + 36))) <= 0)) goto L_C048B78;
    L_C048B3E:;
    if (((*(int *)((v0_1 + 0x0))) != ((*(int *)(((*(int *)(((int)stk + 40))) + 0x0))) - 1))) goto L_C048B5E;
    if (((*(int *)(((*(int *)(((int)stk + 32))) + 0x4))) != 0)) goto L_C048B5E;
    FUN_0c0476dc(0x4, R5, R6, R7);
    FUN_0c018b00(0x7);
    L_C048B5E:;
    *(unsigned int *)(((int)stk + 44)) = ((*(int *)(((int)stk + 44))) + 0x1);
    *(unsigned int *)(((int)stk + 32)) = ((*(int *)(((int)stk + 32))) + 0x24);
    *(unsigned int *)(((int)stk + 40)) = ((*(int *)(((int)stk + 40))) + 0x24);
    if (((int)(*(int *)(((int)stk + 44))) < (int)(*(int *)(((int)stk + 36))))) goto L_C048B3E;
    L_C048B78:;
    (((struct o30_uint *)0xC1EC71C)->v) = (((((struct o30_int *)0xC1EC71C)->v)) - 1);
    nlLocate(0x1E, 0x37);
    v0_5 = ((((struct o8_int *)0xC12D298)->v));
    *(int *)((int)stk + 28) = v0_5;
    v0_6 = (((struct o8_int *)0xC12FDAC)->v);
    *(int *)((int)stk + 24) = (((v0_6 << 2) << 2) + (((int)stk + 28) + 0x3C));
    *(int *)((int)stk + 20) = 0xC0F341C;
    nlPrintf(0xC0F341C, (((v0_6 << 2) << 2) + (((int)stk + 28) + 0x3C)), v0_5);
    v0_5 = (((struct o8_int *)0xC12FDAC)->v);
    v0_7 = (v0_5);
    if ((v0_5 == 0)) goto L_C048BB8;
    if (!((v0_7 == 1))) goto L_C048CBC;
    v0_1 = (*(int *)((v0_4 + 0x0)));
    *(int *)((int)stk + 28) = v0_1;
    *(int *)((int)stk + 24) = 0xC0F3490;
    nlPrintf(0xC0F3490, v0_1);
    v0_1 = (*(int *)((((((((struct o4_int *)0xC12FDAC)->v)) * v0_0) + (*(int *)((v0_3 + 0x0)))) + 0x0)));
    *(int *)((int)stk + 20) = v0_1;
    v0_2 = ((((struct o4_int *)0xC12FDAC)->v));
    *(int *)((int)stk + 16) = v0_2;
    *(int *)((int)stk + 12) = 0xC0F34A4;
    nlPrintf(0xC0F34A4, v0_2, v0_1);
    *(int *)((int)stk + 8) = 0x3CC;
    v0_0 = v0_0;
    *(int *)((int)stk + 4) = v0_0;
    *(int *)((int)stk + 0) = 0xC0F34C4;
    nlPrintf(0xC0F34C4, v0_0, 0x3CC);
    goto L_C048CBC;
    L_C048CBC:;
    if ((((((struct o10_int *)0xC12FDAC)->v)) == 0)) goto L_C048CCC;
    if (((((((struct o0_int *)0xC1EC83C)->v)) & 8) == 0)) goto L_C048CE2;
    L_C048CCC:;
    nlLocate(0x1E, (((((struct oC_int *)0xC12FDAC)->v)) + 0x37));
    *(int *)((int)stk + 28) = 0xC0F34E4;
    nlPrintf(0xC0F34E4);
    L_C048CE2:;
    FUN_0c073360();
    FUN_0c0739a0(((*(int *)0xC2ADA68) + 0x84));
    nlRotateAY((((((((struct o0_int *)0xC1EC83C)->v)) << 2) << 2) << 2));
    nlObjPutUseViewMatrix(0xC4F5620);
    nlPopMatrix(0x1);
    L_C048D10:;
    v0_7 = (0x0);
    goto L_C048D12;
    L_C048BB8:;
    v0_4 = (*(int *)((v0_2 + 0x0)));
    *(int *)((int)stk + 28) = v0_4;
    *(int *)((int)stk + 24) = 0xC0F3428;
    nlPrintf(0xC0F3428, v0_4);
    v0_4 = *(int *)((v0_2 + 0x0));
    v0_4 = (*(int *)(((((((v0_4 << 2) << 1) + v0_4) << 2) + R14) + 0x4)));
    *(int *)((int)stk + 20) = v0_4;
    *(int *)((int)stk + 16) = 0xC0F343C;
    nlPrintf(0xC0F343C, v0_4);
    v0_4 = *(int *)((v0_2 + 0x0));
    *(unsigned int *)(((int)stk + 52)) = (((((v0_4 << 2) << 1) + v0_4) << 2) + R14);
    v0_4 = *(int *)(((((((v0_4 << 2) << 1) + v0_4) << 2) + R14) + 0x8));
    *(unsigned int *)(((int)stk + 32)) = v0_4;
    v0_0 = (*(int *)((((v0_4 * v0_0) + (*(int *)((v0_3 + 0x0)))) + 0x0)));
    *(int *)((int)stk + 12) = v0_0;
    v0_3 = (*(int *)(((int)stk + 32)));
    *(int *)((int)stk + 8) = v0_3;
    *(int *)((int)stk + 4) = 0xC0F3450;
    nlPrintf(0xC0F3450, v0_3, v0_0);
    v0_0 = *(int *)((v0_2 + 0x0));
    v0_0 = ((((((v0_0 << 2) << 1) + v0_0) << 2) + R14));
    if (((int)((*(int *)((v0_2 + 0x0))) + 0x1) >= (int)(*(int *)(((int)stk + 36))))) goto L_C048C28;
    R7 = ((*(int *)((v0_0 + 0x24))));
    L_C048C2C:;
    *(int *)((int)stk + 28) = (R7);
    *(unsigned int *)(((int)stk + 48)) = v0_0;
    v0_0 = *(int *)((v0_0 + 0x0));
    *(unsigned int *)(((int)stk + 32)) = v0_0;
    *(int *)((int)stk + 24) = (v0_0);
    v0_0 = *(int *)((v0_1 + 0x0));
    v0_2 = *(int *)(((int)stk + 32));
    *(int *)((int)stk + 20) = (v0_0 - v0_2);
    v0_1 = (*(int *)((v0_1 + 0x0)));
    *(int *)((int)stk + 16) = v0_1;
    *(int *)((int)stk + 12) = 0xC0F3470;
    nlPrintf(0xC0F3470, v0_1, (v0_0 - v0_2));
    goto L_C048CBC;
    L_C048C28:;
    R7 = (((((struct oC_int *)0xC12D298)->v)));
    goto L_C048C2C;
    L_C0489C8:;
    if ((v0_5 != 0)) goto L_C048A10;
    if (((*(int *)(((int)stk + 32))) != 1)) goto L_C0489DC;
    FUN_0c047624(0x1);
    L_C0489E8:;
    v0_5 = *(int *)((v0_2 + 0x0));
    v0_6 = *(int *)(((((((v0_5 << 2) << 1) + v0_5) << 2) + R14) + 0x0));
    *(unsigned int *)((v0_1 + 0x0)) = v0_6;
    (((struct oC_uint *)0xC1EC83C)->v) = v0_6;
    *(unsigned int *)((v0_4 + 0x0)) = (*(int *)(((((*(int *)(((((((v0_5 << 2) << 1) + v0_5) << 2) + R14) + 0x8))) * v0_0) + (*(int *)((v0_3 + 0x0)))) + 0x0)));
    L_C048A24:;
    *(unsigned char *)0xC1EC87C = R10;
    if ((((*(int *)0xC1EC790) & 0x200) == 0)) goto L_C048A64;
    v0_5 = (0x3);
    L_C048A66:;
    FUN_0c0476dc(v0_5, R5, R6, R7);
    *(unsigned int *)(((int)stk + 32)) = 0xC01D69C;
    FUN_0c01d69c();
    if ((((((struct o8_int *)0xC12FDAC)->v)) != 0)) goto L_C048AF4;
    *(unsigned int *)(((int)stk + 40)) = (((int)stk + 32) + 0x1C);
    *(unsigned int *)(((((int)stk + 32) + 0x1C) + 0x0)) = ((((struct o2C_int *)0xC1758B0)->v));
    *(unsigned int *)(((int)stk + 36)) = ((((int)stk + 32) + 0x1C) + 0x4);
    *(unsigned int *)((((((int)stk + 32) + 0x1C) + 0x4) + 0x0)) = ((((struct o30_int *)0xC1758B0)->v));
    *(unsigned int *)(((int)stk + 32)) = ((((int)stk + 32) + 0x1C) + 0x8);
    *(unsigned int *)((((((int)stk + 32) + 0x1C) + 0x8) + 0x0)) = ((((struct o1C_int *)0xC175908)->v));
    *(unsigned int *)((((((int)stk + 32) + 0x1C) + 0xC) + 0x0)) = ((((struct o20_int *)0xC175908)->v));
    *(unsigned int *)((((((int)stk + 32) + 0x1C) + 0x10) + 0x0)) = ((((struct o24_int *)0xC175908)->v));
    v0_2 = *(int *)((v0_2 + 0x0));
    v0_1 = *(int *)((v0_3 + 0x0));
    v0_2 = *(int *)(((((((v0_2 << 2) << 1) + v0_2) << 2) + R14) + 0x8));
    v0_3 = (((v0_2 * v0_0) + v0_1) + 0x4);
    v0_4 = 0xC1758B4;
    for (;;) { t190 = *(int *)v0_3; v0_3 = (v0_3 + 4); if ((unsigned int)(((((v0_2 * v0_0) + v0_1) + 0x4) + 972)) < (unsigned int)v0_3) break; *(unsigned int *)v0_4 = t190; v0_4 = (v0_4 + 4); }
    (((struct o2C_uint *)0xC1758B0)->v) = (*(int *)(((*(int *)(((int)stk + 40))) + 0x0)));
    (((struct o30_uint *)0xC1758B0)->v) = (*(int *)(((*(int *)(((int)stk + 36))) + 0x0)));
    (((struct o1C_uint *)0xC175908)->v) = (*(int *)(((*(int *)(((int)stk + 32))) + 0x0)));
    (((struct o20_uint *)0xC175908)->v) = (*(int *)((((((int)stk + 32) + 0x1C) + 0xC) + 0x0)));
    (((struct o24_uint *)0xC175908)->v) = (*(int *)((((((int)stk + 32) + 0x1C) + 0x10) + 0x0)));
    R5 = ((((int)stk + 32) + 0x1C));
    L_C048AF4:;
    SetAdvCamera(0xC177D38, 0x0);
    FUN_0c018b00(0x0);
    L_C048B02:;
    v0_7 = (0x1);
    goto L_C048D12;
    L_C048A64:;
    v0_5 = (0x2);
    goto L_C048A66;
    L_C0489DC:;
    if (((*(int *)(((int)stk + 32))) != 2)) goto L_C0489E8;
    FUN_0c047624(0x2);
    goto L_C0489E8;
    L_C048A10:;
    if ((v0_5 != 1)) goto L_C048A24;
    FUN_0c047624(0x0);
    (((struct oC_uint *)0xC1EC83C)->v) = 0x0;
    *(unsigned int *)((v0_1 + 0x0)) = 0x0;
    goto L_C048A24;
    L_C048768:;
    v0_6 = (0x0);
    goto L_C04876A;
    L_C048756:;
    v0_7 = (0x0);
    goto L_C048758;
    L_C048776:;
    v0_8 = (((struct o8_int *)0xC12FDAC)->v);
    v0_7 = (v0_8);
    v0_6 = (0xC12FDB4);
    if ((v0_8 == 0)) goto L_C0487A0;
    if ((v0_7 != 1)) goto L_C048786;
    v0_7 = (R7);
    if ((R7 == 0)) goto L_C0488E0;
    if ((v0_7 == 1)) goto L_C048910;
    if ((v0_7 == 2)) goto L_C048950;
    goto L_C0489AE;
    L_C048950:;
    if ((R5 == 0)) goto L_C048962;
    if (((int)((((struct o4_int *)0xC12FDAC)->v)) >= (int)0x63)) goto L_C048962;
    v0_7 = (0x1);
    L_C048964:;
    if ((v0_5 == 0)) goto L_C048974;
    if (((int)((((struct o4_int *)0xC12FDAC)->v)) <= 0)) goto L_C048974;
    v0_6 = (0x1);
    L_C048976:;
    (((struct o4_uint *)0xC12FDAC)->v) = (((((struct o4_int *)0xC12FDAC)->v)) + (v0_7 - v0_6));
    if ((((*(int *)0xC1EC790) & 0x10000) == 0)) goto L_C0489AE;
    *(unsigned int *)((((((((struct o4_int *)0xC12FDAC)->v)) * v0_0) + (*(int *)((v0_3 + 0x0)))) + 0x0)) = (*(int *)((v0_4 + 0x0)));
    v0_5 = 0xC1758B4;
    v0_6 = (((((((struct o4_int *)0xC12FDAC)->v)) * v0_0) + (*(int *)((v0_3 + 0x0)))) + 0x4);
    for (;;) { t239 = *(int *)v0_5; v0_5 = (v0_5 + 4); if ((unsigned int)((0xC1758B4 + 972)) < (unsigned int)v0_5) break; *(unsigned int *)v0_6 = t239; v0_6 = (v0_6 + 4); }
    goto L_C0489AE;
    L_C048974:;
    v0_6 = (0x0);
    goto L_C048976;
    L_C048962:;
    v0_7 = (0x0);
    goto L_C048964;
    L_C048910:;
    if ((R5 == 0)) goto L_C048922;
    if (((int)(*(int *)0xC175C80) >= (int)0x17)) goto L_C048922;
    v0_7 = (0x1);
    L_C048924:;
    if ((v0_5 == 0)) goto L_C048934;
    if (((int)(*(int *)0xC175C80) <= 0)) goto L_C048934;
    v0_6 = (0x1);
    L_C048936:;
    *(unsigned int *)((v0_4 + 0x0)) = ((*(int *)((v0_4 + 0x0))) + (v0_7 - v0_6));
    goto L_C0489AE;
    L_C048934:;
    v0_6 = (0x0);
    goto L_C048936;
    L_C048922:;
    v0_7 = (0x0);
    goto L_C048924;
    L_C0488E0:;
    if ((R5 == 0)) goto L_C0488F0;
    if (((int)(*(int *)((v0_6 + 0x0))) >= (int)0x1)) goto L_C0488F0;
    v0_7 = (0x1);
    L_C0488F2:;
    if ((v0_5 == 0)) goto L_C048902;
    if (((int)((((struct o8_int *)0xC12FDAC)->v)) <= 0)) goto L_C048902;
    v0_6 = (0x1);
    L_C048904:;
    v0_5 = ((((((struct o8_int *)0xC12FDAC)->v)) + (v0_7 - v0_6)));
    v0_6 = (0xC12FDB4);
    goto L_C04890C;
    L_C048902:;
    v0_6 = (0x0);
    goto L_C048904;
    L_C0488F0:;
    v0_7 = (0x0);
    goto L_C0488F2;
    L_C048786:;
    goto L_C0489AE;
    L_C0487A0:;
    v0_7 = (R7);
    if ((R7 == 0)) goto L_C0487BA;
    if ((v0_7 == 1)) goto L_C0487EA;
    if ((v0_7 == 2)) goto L_C04881C;
    if ((v0_7 == 3)) goto L_C048856;
    if ((v0_7 == 4)) goto L_C048890;
    goto L_C0489AE;
    L_C048890:;
    v0_6 = *(int *)((v0_2 + 0x0));
    R6 = ((((((v0_6 << 2) << 1) + v0_6) << 2) + R14));
    if ((R5 == 0)) goto L_C0488B2;
    if (((int)(*(int *)((R6 + 0x0))) >= (int)(((((struct oC_int *)0xC12D298)->v)) - 1))) goto L_C0488B2;
    v0_6 = (0x1);
    L_C0488B4:;
    if ((v0_5 == 0)) goto L_C0488C2;
    if (((int)(*(int *)((R6 + 0x0))) <= 0)) goto L_C0488C2;
    v0_7 = (0x1);
    L_C0488C4:;
    *(unsigned int *)((R6 + 0x0)) = ((*(int *)((R6 + 0x0))) + (v0_6 - v0_7));
    goto L_C0489AE;
    L_C0488C2:;
    v0_7 = (0x0);
    goto L_C0488C4;
    L_C0488B2:;
    v0_6 = (0x0);
    goto L_C0488B4;
    L_C048856:;
    v0_6 = *(int *)((v0_2 + 0x0));
    R6 = ((((((v0_6 << 2) << 1) + v0_6) << 2) + R14));
    if ((R5 == 0)) goto L_C048874;
    if (((int)(*(int *)((R6 + 0x8))) >= (int)0x63)) goto L_C048874;
    v0_6 = (0x1);
    L_C048876:;
    if ((v0_5 == 0)) goto L_C048884;
    if (((int)(*(int *)((R6 + 0x8))) <= 0)) goto L_C048884;
    v0_7 = (0x1);
    L_C048886:;
    *(unsigned int *)((R6 + 0x8)) = ((*(int *)((R6 + 0x8))) + (v0_6 - v0_7));
    goto L_C0489AE;
    L_C048884:;
    v0_7 = (0x0);
    goto L_C048886;
    L_C048874:;
    v0_6 = (0x0);
    goto L_C048876;
    L_C04881C:;
    v0_6 = *(int *)((v0_2 + 0x0));
    R6 = ((((((v0_6 << 2) << 1) + v0_6) << 2) + R14));
    if ((R5 == 0)) goto L_C04883A;
    if (((int)(*(int *)((R6 + 0x4))) >= (int)0x1)) goto L_C04883A;
    v0_6 = (0x1);
    L_C04883C:;
    if ((v0_5 == 0)) goto L_C04884A;
    if (((int)(*(int *)((R6 + 0x4))) <= 0)) goto L_C04884A;
    v0_7 = (0x1);
    L_C04884C:;
    *(unsigned int *)((R6 + 0x4)) = ((*(int *)((R6 + 0x4))) + (v0_6 - v0_7));
    goto L_C0489AE;
    L_C04884A:;
    v0_7 = (0x0);
    goto L_C04884C;
    L_C04883A:;
    v0_6 = (0x0);
    goto L_C04883C;
    L_C0487EA:;
    if ((R5 == 0)) goto L_C0487FE;
    if (((int)((((struct o0_int *)0xC12FDAC)->v)) >= (int)((*(int *)(((int)stk + 36))) - 1))) goto L_C0487FE;
    v0_6 = (0x1);
    L_C048800:;
    if ((v0_5 == 0)) goto L_C048810;
    if (((int)((((struct o0_int *)0xC12FDAC)->v)) <= 0)) goto L_C048810;
    v0_7 = (0x1);
    L_C048812:;
    *(unsigned int *)((v0_2 + 0x0)) = ((*(int *)((v0_2 + 0x0))) + (v0_6 - v0_7));
    goto L_C0489AE;
    L_C048810:;
    v0_7 = (0x0);
    goto L_C048812;
    L_C0487FE:;
    v0_6 = (0x0);
    goto L_C048800;
    L_C0487BA:;
    if ((R5 == 0)) goto L_C0487CA;
    if (((int)(*(int *)((v0_6 + 0x0))) >= (int)0x1)) goto L_C0487CA;
    v0_7 = (0x1);
    L_C0487CC:;
    if ((v0_5 == 0)) goto L_C0487DC;
    if (((int)((((struct o8_int *)0xC12FDAC)->v)) <= 0)) goto L_C0487DC;
    v0_6 = (0x1);
    L_C0487DE:;
    v0_5 = ((((((struct o8_int *)0xC12FDAC)->v)) + (v0_7 - v0_6)));
    v0_6 = (0xC12FDB4);
    goto L_C04890C;
    L_C0487DC:;
    v0_6 = (0x0);
    goto L_C0487DE;
    L_C0487CA:;
    v0_7 = (0x0);
    goto L_C0487CC;
    L_C04871E:;
    v0_6 = (0x0);
    goto L_C048720;
    L_C04870A:;
    v0_7 = (0x0);
    goto L_C04870C;
    L_C0486F4:;
    R6 = ((*(int *)((v0_5 + 0x0))));
    goto L_C0486F6;
    L_C0483B4:;
    if (((((((struct o0_int *)0xC12D298)->v)) & R10) == 0)) goto L_C0483CC;
    if (((*(int *)((v0_1 + 0x0))) == 0)) goto L_C0483C6;
    goto L_C048D10;
    L_C0483C6:;
    (((struct o4_uint *)0xC12D298)->v) = R10;
    goto L_C048D10;
    L_C0483CC:;
    if (((*(int *)((v0_1 + 0x0))) != 0)) goto L_C0483D8;
    (((struct oC_uint *)0xC1EC83C)->v) = 0x0;
    L_C0483D8:;
    if (((*(int *)((v0_2 + 0x0))) != 0)) goto L_C0483EC;
    if ((((((struct o0_int *)0xC2AC2F4)->v)) != 1)) goto L_C0483EC;
    (((struct o0_uint *)0xC175908)->v) = R10;
    L_C0483EC:;
    v0_5 = *(int *)((v0_2 + 0x0));
    R14 = ((R14 + ((((v0_5 << 2) << 1) + v0_5) << 2)));
    if ((((((struct o0_int *)0xC2AC2F4)->v)) == 1)) goto L_C048406;
    FUN_0c047cb6((*(int *)((v0_3 + 0x0))), R14, (*(int *)((v0_2 + 0x0))), R7, F4);
    L_C04850A:;
    if (((int)((((struct oC_int *)0xC1EC83C)->v)) >= (int)(*(int *)((R14 + 0x0))))) goto L_C048518;
    goto L_C048D10;
    L_C048518:;
    *(unsigned int *)((v0_2 + 0x0)) = ((*(int *)((v0_2 + 0x0))) + 0x1);
    if (((*(int *)((R14 + 0x4))) != 1)) goto L_C048574;
    if (((*(int *)((R14 + 0xC))) != 0)) goto L_C04853C;
    SetAdvCamera(0xC177D38, 0x0);
    FUN_0c018b00(0x0);
    goto L_C048D10;
    L_C04853C:;
    SetAdvCamera(0xC177D38, (*(int *)((R14 + 0xC))));
    goto L_C048D10;
    L_C048574:;
    *(unsigned int *)((v0_1 + 0x0)) = (*(int *)((R14 + 0x0)));
    if ((((((struct o0_int *)0xC2AC2F4)->v)) != 0)) goto L_C0485A8;
    *(unsigned int *)((v0_4 + 0x0)) = ((((((int)((((struct o4_int *)0xC2AC2F4)->v)) >> 5) << 2) << 1) + (*(int *)(((((*(int *)((R14 + 0x8))) * v0_0) + (*(int *)((v0_3 + 0x0)))) + 0x0)))) + ((((int)((((struct o4_int *)0xC2AC2F4)->v)) >> 4) & R10) << 2));
    v0_5 = (0xC2AC2F8);
    L_C0485A8:;
    *(unsigned char *)0xC1EC87C = R10;
    *(unsigned int *)(((int)stk + 32)) = 0xC01D69C;
    FUN_0c01d69c();
    *(unsigned int *)(((((int)stk + 32) + 0x1C) + 0x0)) = ((((struct o2C_int *)0xC1758B0)->v));
    *(unsigned int *)(((int)stk + 32)) = ((((int)stk + 32) + 0x1C) + 0x4);
    *(unsigned int *)((((((int)stk + 32) + 0x1C) + 0x4) + 0x0)) = ((((struct o30_int *)0xC1758B0)->v));
    *(unsigned int *)(((int)stk + 36)) = ((((int)stk + 32) + 0x1C) + 0x8);
    *(unsigned int *)((((((int)stk + 32) + 0x1C) + 0x8) + 0x0)) = ((((struct o1C_int *)0xC175908)->v));
    *(unsigned int *)(((int)stk + 40)) = ((((int)stk + 32) + 0x1C) + 0xC);
    *(unsigned int *)((((((int)stk + 32) + 0x1C) + 0xC) + 0x0)) = ((((struct o20_int *)0xC175908)->v));
    *(unsigned int *)((((((int)stk + 32) + 0x1C) + 0x10) + 0x0)) = ((((struct o24_int *)0xC175908)->v));
    v0_1 = *(int *)((R14 + 0x8));
    v0_2 = *(int *)((v0_3 + 0x0));
    v0_3 = (((v0_1 * v0_0) + v0_2) + 0x4);
    v0_4 = 0xC1758B4;
    for (;;) { t395 = *(int *)v0_3; v0_3 = (v0_3 + 4); if ((unsigned int)(((((v0_1 * v0_0) + v0_2) + 0x4) + 972)) < (unsigned int)v0_3) break; *(unsigned int *)v0_4 = t395; v0_4 = (v0_4 + 4); }
    (((struct o2C_uint *)0xC1758B0)->v) = (*(int *)(((((int)stk + 32) + 0x1C) + 0x0)));
    (((struct o30_uint *)0xC1758B0)->v) = (*(int *)(((*(int *)(((int)stk + 32))) + 0x0)));
    (((struct o1C_uint *)0xC175908)->v) = (*(int *)(((*(int *)(((int)stk + 36))) + 0x0)));
    (((struct o20_uint *)0xC175908)->v) = (*(int *)(((*(int *)(((int)stk + 40))) + 0x0)));
    (((struct o24_uint *)0xC175908)->v) = (*(int *)((((((int)stk + 32) + 0x1C) + 0x10) + 0x0)));
    camSnapToCar(0x0);
    if (((*(int *)((R14 + 0xC))) != 0)) goto L_C048638;
    SetAdvCamera(0xC177D38, 0x0);
    v0_5 = (0x0);
    L_C048648:;
    FUN_0c018b00(v0_5);
    L_C04866C:;
    if (((int)(*(int *)((R14 + 0x10))) >= (int)0x23)) goto L_C048678;
    goto L_C048B02;
    L_C048678:;
    if ((((((struct o24_int *)0xC1EC71C)->v)) == 0)) goto L_C04868C;
    FUN_0c068c94((R14 + 0x10));
    goto L_C048B02;
    L_C04868C:;
    *(volatile int *)((R14 + 0x10));
    FUN_0c07ff00();
    *(unsigned int *)(((int)stk + 60)) = t417;
    FUN_0c068c94((((int)stk + 32) + 0x1C));
    goto L_C048B02;
    L_C048638:;
    if (((*(int *)((R14 + 0xC))) != -1)) goto L_C048652;
    SetAdvCamera(0xC177D38, 0x0);
    v0_5 = (0x7);
    goto L_C048648;
    L_C048652:;
    *(unsigned int *)(((int)stk + 32)) = (*(int *)0xC2ADA68);
    v0_0 = *(int *)((R14 + 0x18));
    SetAdvCamera(((((v0_0 << 1) + v0_0) << 2) + (*(int *)(((int)stk + 32)))), (*(int *)((R14 + 0xC))));
    goto L_C04866C;
    L_C048406:;
    if (((*(int *)((v0_2 + 0x0))) != 12)) goto L_C048422;
    if ((_builtin_fabsf((*(float *)0xC175A14)) > 0.150000006f)) goto L_C048422;
    FUN_0c060210(0x0);
    L_C048422:;
    (((struct o0_uint *)0xC1758B0)->v) = 0x3;
    if (((int)((((struct oC_int *)0xC1EC83C)->v)) < (int)((*(int *)((R14 + 0x0))) - 200))) goto L_C0484B4;
    v0_5 = *(int *)((R14 + 0x18));
    v0_6 = *(int *)0xC2ADA68;
    *(unsigned int *)(((int)stk + 32)) = ((((v0_5 << 1) + v0_5) << 2) + v0_6);
    v0_5 = (((((v0_5 << 1) + v0_5) << 2) + v0_6));
    if (((*(int *)((v0_2 + 0x0))) != 11)) goto L_C04849C;
    FUN_0c07ff00();
    F4 = (850.0f);
    L_C0484AC:;
    gdc_CoursePointLoadReq(F4);
    L_C0484B4:;
    if (((int)((((struct oC_int *)0xC1EC83C)->v)) < (int)((*(int *)((R14 + 0x0))) - 150))) goto L_C04850A;
    v0_5 = *(int *)((R14 + 0x18));
    *(unsigned int *)(((int)stk + 32)) = ((((v0_5 << 1) + v0_5) << 2) + (*(int *)0xC2ADA68));
    if (((*(int *)((v0_2 + 0x0))) != 11)) goto L_C0484EA;
    FUN_0c07ff00();
    F4 = (1700.0f);
    L_C0484F8:;
    gdc_CoursePointLoadReq(F4);
    goto L_C04850A;
    L_C0484EA:;
    FUN_0c07ff00();
    F4 = (900.0f);
    goto L_C0484F8;
    L_C04849C:;
    FUN_0c07ff00();
    F4 = (450.0f);
    goto L_C0484AC;
    L_C04839C:;
    *(unsigned int *)((v0_5 + 0x0)) = 0x0;
    goto L_C0483A0;
    L_C0482DC:;
    if (((*(int *)(((int)stk + 32))) != 2)) goto L_C0482EA;
    R14 = (0xC12DF60);
    goto L_C0482E4;
    L_C0482EA:;
    if (((*(int *)(((int)stk + 32))) != 3)) goto L_C048304;
    v0_7 = (0x28);
    if ((((((struct o0_int *)0xC1EC71C)->v)) != 0)) goto L_C048300;
    R14 = (0xC12EC08);
    L_C048302:;
    *(unsigned int *)(((int)stk + 36)) = v0_7;
    goto L_C048304;
    L_C048300:;
    R14 = (0xC12F1A8);
    goto L_C048302;
}

int kmProcessVertexRenderState(int a4)
{
    int stk[9];
    register int t0;
    register int t1;
    register int t3;
    register int t5;
    register int t6;
    int t8;
    int t12;
    register int t17;
    int t27;
    register int t33;
    int t40;
    int t45;
    register int t51;
    register int t63;
    register int t73;
    register int t91;
    register int t77;
    register int t86;
    register int t101;
    int t108;
    register int t112;
    register int t124;
    register int t134;
    int t144;
    int t149;
    int t156;
    register int t162;
    int t173;
    int t180;
    register int t177;
    register int t178;
    register int t185;
    register int t201;
    register int t194;
    register int t212;
    register int t213;
    int t214;
    register int t217;
    register int t215;
    register int t218;
    register int t219;
    int t220;
    int t259;
    register int t248;
    register int t249;
    int t252;
    int t266;
    int t279;
    int t284;
    int t292;
    int t297;
    register int t314;
    register int t302;
    int t326;
    register int t331;
    int t66;
    register int t68;
    register int t81;
    int t191;
    register int t227;
    register int t273;
    int t282;
    int t285;

    t0 = (((struct o94_int *)(a4))->v);
    t1 = (((struct o98_int *)(a4))->v);
    *(unsigned int *)(((int)stk + 8)) = ((((struct o9C_int *)(a4))->v));
    t3 = (((struct o90_int *)(a4))->v);
    t5 = (((struct o4_int *)0xC1710A0)->v);
    *(unsigned int *)(((((int)stk + 0) + 0x14) + 0x0)) = ((((struct o0_int *)0xC1710A0)->v));
    *(unsigned int *)(((((int)stk + 0) + 0x14) + 0x4)) = t5;
    t6 = (((struct oC_int *)0xC1710A0)->v);
    *(unsigned int *)(((((int)stk + 0) + 0x14) + 0x8)) = ((((struct o8_int *)0xC1710A0)->v));
    *(unsigned int *)(((((int)stk + 0) + 0x14) + 0xC)) = t6;
    t8 = *(int *)((a4 + 0x0));
    t12 = t0;
    if ((0x1 & t8) != 0) {
        t12 = ((t0 & 0x1FFFFFFF) | ((*(int *)((a4 + 0x14))) << 29));
    }
    t17 = t12;
    if ((0x2 & t8) != 0) {
        t17 = ((0xE7FFFFFF & t12) | ((*(int *)((a4 + 0x18))) << 27));
    }
    t27 = t17;
    if ((0x20 & t8) != 0) {
        t27 = (t17 & 0xFBFFFFFF);
        if ((*(int *)((a4 + 0x28))) != 0) {
            t27 = (t17 | 0x4000000);
        }
    }
    t33 = t27;
    if ((0x8 & t8) != 0) {
        t33 = ((0xFDFFFFFF & t27) | (((((unsigned int)(*(int *)((a4 + 0x20))) >> 1) << 16) << 8) << 1));
    }
    *(unsigned int *)(((int)stk + 12)) = (0x200 & t8);
    t40 = t33;
    if ((0x200 & t8) != 0) {
        t40 = ((t33 & 0xFEFFFFFF) | ((((((struct o40_int *)(a4))->v)) << 16) << 8));
    }
    t45 = t40;
    if ((0x8 & t8) != 0) {
        t45 = ((0xFF7FFFFF & t40) | (((*(int *)((a4 + 0x20))) & 0x1) << 23));
    }
    *(unsigned int *)(((int)stk + 4)) = (0x800000 & t8);
    t51 = t45;
    if ((0x800000 & t8) != 0) {
        t51 = ((0xFFBFFFFF & t45) | ((*(int *)((a4 + 0x10))) << 22));
    }
    t63 = t51;
    if ((t8 & 0x4000000) != 0) {
        t63 = (t51 & 0xFFEFFFFF);
        if (((((struct oB4_int *)(a4))->v)) != 0) {
            t63 = (t51 | 0x100000);
        }
    }
    t73 = t1;
    if (((0x40 & t8) != 0) && (t66 = *(int *)((a4 + 0x2C)), (unsigned int)t66 < (unsigned int)0xC)) {
        switch ((t66 << 1)) {
            case 0:
            {
                t68 = ((((t1 & 0x1FFFFFFF) | 0xA0000000) & 0xE3FFFFFF) | 0x10000000);
            }
                break;
            case 2:
            {
                t68 = ((((t1 & 0x1FFFFFFF) | 0x80000000) & 0xE3FFFFFF) | 0x14000000);
            }
                break;
            case 4:
            {
                t68 = (0xC0000000 | (t1 & 0x1FFFFFFF));
            }
                break;
            case 6:
            {
                t68 = (0x40000000 | (t1 & 0x1FFFFFFF));
            }
                break;
            case 8:
            {
                t68 = (0xE0000000 | (t1 & 0x1FFFFFFF));
            }
                break;
            case 10:
            {
                t68 = (0x60000000 | (t1 & 0x1FFFFFFF));
            }
                break;
            case 12:
            {
                t68 = (0xA0000000 | (t1 & 0x1FFFFFFF));
            }
                break;
            case 14:
            case 18:
            {
                t68 = t1;
            }
                break;
            case 16:
            {
                t68 = (0x80000000 | (t1 & 0x1FFFFFFF));
            }
                break;
            case 20:
            {
                t68 = (0x20000000 | (t1 & 0x1FFFFFFF));
            }
                break;
            default:
            {
                t68 = (t1 & 0x1FFFFFFF);
            }
                break;
        }
        t73 = t68;
    }
    t91 = t73;
    if ((0x80 & t8) != 0) {
        *(unsigned int *)(((int)stk + 0)) = (t73 & 0x1FFFFFFF);
        t77 = *(int *)((a4 + 0x30));
        t86 = t73;
        if ((unsigned int)t77 < (unsigned int)0xC) {
            switch ((t77 << 1)) {
                case 0:
                {
                    t81 = ((((*(int *)(((int)stk + 0))) | 0xA0000000) & 0xE3FFFFFF) | 0x10000000);
                }
                    break;
                case 2:
                {
                    t81 = ((((*(int *)(((int)stk + 0))) | 0x80000000) & 0xE3FFFFFF) | 0x14000000);
                }
                    break;
                case 4:
                {
                    t81 = (0x18000000 | (t73 & 0xE3FFFFFF));
                }
                    break;
                case 6:
                case 10:
                {
                    t81 = t73;
                }
                    break;
                case 8:
                {
                    t81 = (0x1C000000 | (t73 & 0xE3FFFFFF));
                }
                    break;
                case 12:
                {
                    t81 = (0x14000000 | (t73 & 0xE3FFFFFF));
                }
                    break;
                case 14:
                {
                    t81 = (0xC000000 | (t73 & 0xE3FFFFFF));
                }
                    break;
                case 16:
                {
                    t81 = (0x10000000 | (t73 & 0xE3FFFFFF));
                }
                    break;
                case 18:
                {
                    t81 = (0x8000000 | (t73 & 0xE3FFFFFF));
                }
                    break;
                case 20:
                {
                    t81 = ((t73 & 0xE3FFFFFF) | 0x4000000);
                }
                    break;
                default:
                {
                    t81 = (t73 & 0xE3FFFFFF);
                }
                    break;
            }
            t86 = t81;
        }
        t91 = t86;
    }
    t101 = t91;
    if ((t8 & 0x1000000) != 0) {
        t101 = (t91 & 0xFDFFFFFF);
        if ((*(int *)((a4 + 0x34))) != 0) {
            t101 = (t91 | 0x2000000);
        }
    }
    t108 = t101;
    if ((0x2000000 & t8) != 0) {
        t108 = (t101 & 0xFEFFFFFF);
        if ((*(int *)((a4 + 0x38))) != 0) {
            t108 = (t101 | 0x1000000);
        }
    }
    t112 = t108;
    if ((0x100 & t8) != 0) {
        t112 = ((0xFF3FFFFF & t108) | (((*(int *)((a4 + 0x3C))) & 0x3) << 22));
    }
    t124 = t112;
    if ((0x40000 & t8) != 0) {
        t124 = (t112 & 0xFFDFFFFF);
        if (((((struct o64_int *)(a4))->v)) != 0) {
            t124 = (t112 | 0x200000);
        }
    }
    t134 = t124;
    if ((0x400 & t8) != 0) {
        t134 = (t124 & 0xFFEFFFFF);
        if (((((struct o44_int *)(a4))->v)) != 0) {
            t134 = (t124 | 0x100000);
        }
    }
    t144 = t134;
    if ((0x800 & t8) != 0) {
        t144 = (t134 & 0xFFF7FFFF);
        if (((((struct o48_int *)(a4))->v)) != 0) {
            t144 = (t134 | 0x80000);
        }
    }
    t149 = t144;
    if ((t8 & 0x1000) != 0) {
        t149 = ((0xFFFE7FFF & t144) | (((((struct o4C_int *)(a4))->v)) << 15));
    }
    t156 = t149;
    if ((0x2000 & t8) != 0) {
        t156 = ((0xFFF9FFFF & t149) | ((((((struct o50_int *)(a4))->v)) << 16) << 1));
    }
    t162 = t156;
    if ((0x4000 & t8) != 0) {
        t162 = ((0xFFFF9FFF & t156) | ((*(int *)((((((((struct o54_int *)(a4))->v)) << 2) + (((int)stk + 0) + 0x14)) + 0x0))) << 13));
    }
    t173 = t162;
    if ((0x8000 & t8) != 0) {
        t173 = (t162 & 0xFFFFEFFF);
        if (((((struct o58_int *)(a4))->v)) != 0) {
            t173 = (t162 | 0x1000);
        }
    }
    t180 = t173;
    if ((0x10000 & t8) != 0) {
        t177 = (((struct o5C_int *)(a4))->v);
        t178 = (t177 & 0xF);
        if ((t177 & 0xF) == 0) {
            t178 = 0x4;
        }
        t180 = ((0xFFFFF0FF & t173) | (t178 << 8));
    }
    t185 = t180;
    if ((0x20000 & t8) != 0) {
        t185 = ((0xFFFFFF3F & t180) | ((((((((struct o60_int *)(a4))->v)) & 0x3) << 2) << 2) << 2));
    }
    t201 = t185;
    if ((((*(int *)((a4 + 0x20))) >> 1) == 1) && (t191 = (((struct o6C_int *)(a4))->v), t191 != 0)) {
        t194 = kmiConvertUVnum((*(int *)((((((struct o6C_int *)(a4))->v)) + 0xC))));
        *(unsigned int *)(((int)stk + 0)) = ((t185 & 0xFFFFFFC7) | ((t194 << 2) << 1));
        t201 = ((((t185 & 0xFFFFFFC7) | ((t194 << 2) << 1)) & 0xFFFFFFF8) | (kmiConvertUVnum((*(int *)((((((struct o6C_int *)(a4))->v)) + 0x10))))));
    }
    if (((*(int *)((a4 + 0x20))) >> 1) != 1) {
    } else {
        if (((((struct o6C_int *)(a4))->v)) != 0) {
            t212 = (((struct o6C_int *)(a4))->v);
            t213 = *(int *)(((int)stk + 8));
            t214 = *(int *)((t212 + 0x18));
            t217 = ((0x1 & t214) & 0x1);
            t215 = (int)(((unsigned int)t217 >> 1) | ((unsigned int)t217 << 31));
            t218 = *(int *)((t212 + 0x8));
            if (((((((((t213 & 0x7FFFFFFF) | t215) & 0xBFFFFFFF) | ((t214 & 0x8) << 27)) & 0xC7FFFFFF) | (t218 & 0x38000000)) & 0x38000000) != 0x28000000) && ((((((((t213 & 0x7FFFFFFF) | t215) & 0xBFFFFFFF) | ((t214 & 0x8) << 27)) & 0xC7FFFFFF) | (t218 & 0x38000000)) & 0x38000000) != 0x30000000)) {
                t219 = (((struct o6C_int *)(a4))->v);
                *(unsigned int *)(((int)stk + 16)) = t219;
                t220 = *(int *)((t219 + 0x18));
                t227 = ((0xFDFFFFFF & ((((((((t213 & 0x7FFFFFFF) | t215) & 0xBFFFFFFF) | ((t214 & 0x8) << 27)) & 0xC7FFFFFF) | (t218 & 0x38000000)) & 0xFBFFFFFF) | ((((~(0x4 & t220)) & 0x4) << 16) << 8))) | ((t220 & 0x10) << 21));
            } else {
                t227 = ((0xF81FFFFF & ((((((t213 & 0x7FFFFFFF) | t215) & 0xBFFFFFFF) | ((t214 & 0x8) << 27)) & 0xC7FFFFFF) | (t218 & 0x38000000))) | ((((((struct o68_int *)(a4))->v)) & 0x3F) << 21));
            }
            *(unsigned int *)(((int)stk + 8)) = ((t227 & 0xFFE00000) | ((unsigned int)((unsigned int)(*(int *)((((((struct o6C_int *)(a4))->v)) + 0x1C))) >> 2) >> 1));
        }
    }
    t259 = t3;
    if ((0x100000 & t8) != 0) {
        t248 = *(int *)((a4 + 0x4));
        t249 = t3;
        if (t248 == 0) {
            t249 = (0x80000000 | (t3 & 0x1FFFFFFF));
        }
        t252 = t249;
        if (t248 == 1) {
            t252 = (0x80000000 | (t249 & 0x1FFFFFFF));
        }
        t259 = t252;
        if (t248 == 2) {
            t259 = (0xA0000000 | (0x1FFFFFFF & t252));
        }
    }
    t266 = t259;
    if ((0x200000 & t8) != 0) {
        t266 = ((0xF8FFFFFF & t259) | (((*(int *)((a4 + 0x8))) << 16) << 8));
    }
    if ((0x8000000 & t8) != 0) {
        t273 = ((((struct oB8_int *)(a4))->v));
    } else {
        t273 = (*(int *)0xC300AAC);
    }
    t279 = (((t273 << 16) << 2) | (0xFFF3FFFF & (t266 | 0x800000)));
    if ((0x10000000 & t8) != 0) {
        t279 = ((0xFFFCFFFF & (((t273 << 16) << 2) | (0xFFF3FFFF & (t266 | 0x800000)))) | (((((struct oBC_int *)(a4))->v)) << 16));
    }
    t284 = (0xFFFFFF3F & t279);
    if (((((((struct oA0_int *)(a4))->v)) & 0x60000000) != 0) && (t282 = *(int *)((a4 + 0x8)), (t282 & 1) != 0)) {
        t284 = (0x40 | (0xFFFFFF3F & t279));
    }
    t292 = t284;
    if (((0x10 & t8) != 0) && (t285 = *(int *)((a4 + 0x24)), (t285 & 1) != 0)) {
        t292 = ((0xFFFFFFBF & ((0xFFFFFF7F & t284) | ((*(int *)((a4 + 0x24))) << 7))) | ((((*(int *)0xC17412C) << 2) << 2) << 2));
    }
    t297 = t292;
    if ((t8 & 0x400000) != 0) {
        t297 = ((0xFFFFFFCF & t292) | (((*(int *)((a4 + 0xC))) << 2) << 2));
    }
    t314 = t297;
    if ((0x8 & t8) != 0) {
        t302 = *(int *)((a4 + 0x20));
        t314 = ((0xFFFFFFF7 & t297) | ((((unsigned int)t302 >> 1) << 2) << 1));
        if ((0x8 & t8) != 0) {
            t314 = ((0xFFFFFFFD & ((0xFFFFFFF7 & t297) | ((((unsigned int)t302 >> 1) << 2) << 1))) | (((*(int *)((a4 + 0x20))) & 0x1) << 1));
        }
    }
    t326 = t314;
    if ((*(int *)(((int)stk + 12))) != 0) {
        t326 = (t314 & 0xFFFFFFFB);
        if (((((struct o40_int *)(a4))->v)) != 0) {
            t326 = (t314 | 0x4);
        }
    }
    t331 = t326;
    if ((*(int *)(((int)stk + 4))) != 0) {
        t331 = ((*(int *)((a4 + 0x10))) | (0xFFFFFFFE & t326));
    }
    (((struct o94_uint *)(a4))->v) = (t63 & 0xFFD00000);
    (((struct o98_uint *)(a4))->v) = t201;
    (((struct o9C_uint *)(a4))->v) = (*(int *)(((int)stk + 8)));
    (((struct o90_uint *)(a4))->v) = (t331 & 0xE78F00FF);
    return 0x0;
}
