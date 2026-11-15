/* Straight-line functions with calls and guards (batch gen_bm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o100_float { char p[0x100]; float v; };
struct o104_float { char p[0x104]; float v; };
struct o108_float { char p[0x108]; float v; };
struct o130_float { char p[0x130]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o160_float { char p[0x160]; float v; };
struct o164_float { char p[0x164]; float v; };
struct o16C_float { char p[0x16C]; float v; };
struct o170_float { char p[0x170]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_int { char p[0x20]; int v; };
struct o24_float { char p[0x24]; float v; };
struct o24_short { char p[0x24]; short v; };
struct o24_ushort { char p[0x24]; unsigned short v; };
struct o26_short { char p[0x26]; short v; };
struct o26_ushort { char p[0x26]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o60_int { char p[0x60]; int v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o80_float { char p[0x80]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o84_uint { char p[0x84]; unsigned int v; };
struct o88_uint { char p[0x88]; unsigned int v; };
struct oAC_uint { char p[0xAC]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oF8_short { char p[0xF8]; short v; };
int CalcShadow4Normal(int, int);
int FUN_0c01fd5c(void);
int FUN_0c026ce6(void);
int FUN_0c029b12(int, float);
int FUN_0c044edc(int, int, int);
int FUN_0c044f9a(int, int);
int FUN_0c058ca6(int, int);
int FUN_0c05b3d4(int, int);
int FUN_0c064766(int, int, int);
int FUN_0c067eee(int, float);
int FUN_0c06e990(int);
int FUN_0c072150(int, int, int);
int FUN_0c072290(int, int);
int FUN_0c073360(void);
int FUN_0c073a60(int);
int FUN_0c073c40(int, int, float);
int FUN_0c076230(float, float, float);
int FUN_0c07acb0(int, int, int);
int FUN_0c07acd0(int, int);
extern int FUN_0c07ada0();
int FUN_0c07b6c0(int, int);
int FUN_0c07b6e6(int);
int FUN_0c07c8be(int);
int FUN_0c07ff00(void);
extern float _builtin_sqrtf(float);
int gdc_FileLoad(int, int, int);
int kmiBGPlaneCountWords(int);
int kmiBGPlanePutColor(int, int, int);
int kmiBGPlanePutColor2(int, int, int, int);
int kmiBGPlanePutWord(int, int, int);
int kmiBGPlaneSetPCW(int, int, int);
int nlAddVector(int, int);
float nlFloor(float);
float nlLength(int, int);
int nlLineSendQuadA(int, int, int, int, float, float);
int nlLineSendQuadB(int, int, int, int, float, float);
int nlLineSendQuadC(int, int, int, int, float, float);
int nlLineSendQuadD(int, int, int, int, float, float);
int nlLineSendQuadE(int, int, int, float);
int nlMalloc(int);
int nlObjPutUseViewMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlSpriteFreeTexture(int, int);
void FUN_0c061bcc(int a4, int a5, int a6, int a7);
int FUN_0c020772(void);
int FUN_0c044964(int a4, int a5, float f4);
int kmiProcessVertex_13(int a4);
int FUN_0c07cbbc(int a4, int a5, int a6);
float MakeCollisionCellList(int a4, int a5);
int kmiProcessVertex_08(int a4);
int kmiProcessVertex_14(int a4);
int FUN_0c0244e4(int a4);
int nlLineDrawThick(int a4, int a5, int a6, int a7);
int adxb_DecodeInfoAuSub(int a4, int a5, int a6, int a7, int a8, int a9, int a10);
int FUN_0c056a28(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8);


int FUN_0c020772(void)
{
    register int t0;
    register int t1;
    register int t3;
    register int t4;

    t0 = *(int *)0xC2708C8;
    t1 = t0;
    if (t0 == 2) {
    } else {
        t1 = t0;
        if (t0 == 5) {
        } else {
            FUN_0c01fd5c();
            if ((*(int *)0xC2708C8) == 3) {
                FUN_0c06e990(0x118);
                FUN_0c07acd0(0xC13FD34, 0xC098C50);
                if ((*(int *)0xC2A4658) == 0) {
                    FUN_0c06e990(0x262);
                    t0 = 0xC140F94;
                } else {
                    FUN_0c06e990(0x26C);
                    t0 = 0xC141024;
                }
                FUN_0c07acd0(t0, 0xC098818);
                FUN_0c06e990(0x50A);
                FUN_0c07acb0(0xC142F34, 0xC098818, ((*(int *)(((((*(int *)0xC175C80) & 0x7) << 2) + 0xC10CCA4))) - 1290));
            }
            if ((*(int *)0xC2708C8) == 1) {
                FUN_0c06e990(0x109);
                FUN_0c07acd0(0xC142CA4, 0x0);
            }
            FUN_0c06e990(0x29E);
            gdc_FileLoad(0xCB60000, 0xC09B080, 0x0);
            nlSpriteFreeTexture(0xC141084, 0xC098058);
            if ((*(int *)0xC2A4658) == 0) {
                FUN_0c06e990(0x3AC);
                gdc_FileLoad(0xCB60000, 0xC09B090, 0x0);
                nlSpriteFreeTexture(0xC141F14, 0xC0993AC);
            } else {
                t0 = *(int *)0xC2A4658;
                if (t0 != 2) {
                    if (t0 != 3) {
                        if (t0 != 4) {
                            FUN_0c06e990(0x410);
                            gdc_FileLoad(0xCB60000, 0xC09B09C, 0x0);
                            t0 = 0xC1423C4;
                            t3 = 0xC0993AC;
                        } else {
                            FUN_0c06e990(0x410);
                            gdc_FileLoad(0xCB60000, 0xC09B09C, 0x0);
                            nlSpriteFreeTexture(0xC142544, 0xC0993AC);
                            FUN_0c06e990(0x4D8);
                            gdc_FileLoad(0xCB60000, 0xC09B0C0, 0x0);
                            t0 = 0xC142A14;
                            t3 = 0xC098700;
                        }
                        t4 = t0;
                        t0 = t3;
                    } else {
                        FUN_0c06e990(0x410);
                        gdc_FileLoad(0xCB60000, 0xC09B09C, 0x0);
                        nlSpriteFreeTexture(0xC142544, 0xC0993AC);
                        FUN_0c06e990(0x474);
                        gdc_FileLoad(0xCB60000, 0xC09B0B4, 0x0);
                        t4 = 0xC142554;
                        t0 = 0xC098700;
                    }
                    t3 = t4;
                    t4 = t0;
                } else {
                    FUN_0c06e990(0x410);
                    gdc_FileLoad(0xCB60000, 0xC09B09C, 0x0);
                    nlSpriteFreeTexture(0xC142544, 0xC0993AC);
                    FUN_0c06e990(0x4A6);
                    gdc_FileLoad(0xCB60000, 0xC09B0A8, 0x0);
                    t3 = 0xC1427B4;
                    t4 = 0xC098700;
                }
                nlSpriteFreeTexture(t3, t4);
            }
            t0 = FUN_0c06e990(0x0);
            *(unsigned int *)0xC2708C8 = 0x2;
            *(unsigned int *)0xC11D048 = 0x3;
            t1 = t0;
        }
    }
    return t1;
}


int kmiProcessVertex_13(int a4)
{
    int stk[4];
    register int t3;
    register int t4;
    register int t5;
    register int t12;
    register int t16;
    register float u18;
    register float u20;
    register int t21;
    register int t28;
    register int t32;
    register float u34;
    register float u36;
    register int t37;
    register int t44;
    register int t48;
    register float u50;
    register float u52;
    register int t54;
    int R1000;
    int R1004;
    int R1008;
    int R1012;

    R1000 = *(int *)((int)stk + 0);
    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);

    R1004 = (*(int *)((a4 + 0x0)));
    R1008 = (*(int *)((a4 + 0x4)));
    R1012 = (*(int *)((a4 + 0x8)));
    t3 = (((struct o4_int *)0xC300A6C)->v);
    t4 = (((struct o8_int *)0xC300A6C)->v);
    t5 = (((struct oC_int *)0xC300A6C)->v);
    (((struct o0_uint *)0xC300974)->v) = t3;
    (((struct o4_uint *)0xC300974)->v) = t4;
    (((struct o8_uint *)0xC300974)->v) = t5;
    (((struct oC_uint *)0xC300974)->v) = (*(int *)(((R1004) + 0x4)));
    (((struct o10_uint *)0xC300974)->v) = (*(int *)(((R1004) + 0x8)));
    (((struct o14_uint *)0xC300974)->v) = (*(int *)(((R1004) + 0xC)));
    t12 = R1004;
    R1000 = t12;
    t16 = kmiBGPlanePutColor2(t3, 0x6, (*(int *)(((R1000) + 0x10))), (*(int *)((t12 + 0x14))));
    u18 = (((struct o18_float *)((R1004)))->v);
    *(unsigned int *)(((t16 << 2) + 0xC300974)) = ((((((int)(u18 * 255.0f) << 16) << 8) | ((int)(u18 * 255.0f) << 16)) | ((int)(u18 * 255.0f) << 8)) | (int)(u18 * 255.0f));
    u20 = (((struct o1C_float *)((R1004)))->v);
    t21 = kmiBGPlanePutWord(t3, (t16 + 0x1), ((((((int)(u20 * 255.0f) << 16) << 8) | ((int)(u20 * 255.0f) << 16)) | ((int)(u20 * 255.0f) << 8)) | (int)(u20 * 255.0f)));
    *(unsigned int *)(((t21 << 2) + 0xC300974)) = (*(int *)(((R1008) + 0x4)));
    *(unsigned int *)((((t21 + 0x1) << 2) + 0xC300974)) = (*(int *)(((R1008) + 0x8)));
    *(unsigned int *)(((((t21 + 0x1) + 0x1) << 2) + 0xC300974)) = (*(int *)(((R1008) + 0xC)));
    t28 = R1008;
    R1000 = t28;
    t32 = kmiBGPlanePutColor2(t3, (((t21 + 0x1) + 0x1) + 0x1), (*(int *)(((R1000) + 0x10))), (*(int *)((t28 + 0x14))));
    u34 = (((struct o18_float *)((R1008)))->v);
    *(unsigned int *)(((t32 << 2) + 0xC300974)) = ((((((int)(u34 * 255.0f) << 16) << 8) | ((int)(u34 * 255.0f) << 16)) | ((int)(u34 * 255.0f) << 8)) | (int)(u34 * 255.0f));
    u36 = (((struct o1C_float *)((R1008)))->v);
    t37 = kmiBGPlanePutWord(t3, (t32 + 0x1), ((((((int)(u36 * 255.0f) << 16) << 8) | ((int)(u36 * 255.0f) << 16)) | ((int)(u36 * 255.0f) << 8)) | (int)(u36 * 255.0f)));
    *(unsigned int *)(((t37 << 2) + 0xC300974)) = (*(int *)(((R1012) + 0x4)));
    *(unsigned int *)((((t37 + 0x1) << 2) + 0xC300974)) = (*(int *)(((R1012) + 0x8)));
    *(unsigned int *)(((((t37 + 0x1) + 0x1) << 2) + 0xC300974)) = (*(int *)(((R1012) + 0xC)));
    t44 = R1012;
    R1000 = t44;
    t48 = kmiBGPlanePutColor2(t3, (((t37 + 0x1) + 0x1) + 0x1), (*(int *)(((R1000) + 0x10))), (*(int *)((t44 + 0x14))));
    u50 = (((struct o18_float *)((R1012)))->v);
    *(unsigned int *)(((t48 << 2) + 0xC300974)) = ((((((int)(u50 * 255.0f) << 16) << 8) | ((int)(u50 * 255.0f) << 16)) | ((int)(u50 * 255.0f) << 8)) | (int)(u50 * 255.0f));
    u52 = (((struct o1C_float *)((R1012)))->v);
    (((struct o0_uint *)0xC300A6C)->v) = ((kmiBGPlanePutWord(t3, (t48 + 0x1), ((((((int)(u52 * 255.0f) << 16) << 8) | ((int)(u52 * 255.0f) << 16)) | ((int)(u52 * 255.0f) << 8)) | (int)(u52 * 255.0f)))) << 2);
    t54 = kmiBGPlaneCountWords(t3);
    kmiBGPlaneSetPCW(t54, 0x0, 0x0);
    (((struct o14_uint *)0xC300A6C)->v) = (*(int *)(((R1004) + 0xC)));
    return 0x0;
}

int FUN_0c07cbbc(int a4, int a5, int a6)
{
    int stk[3];
    int t30;

    register int R1;
    int R4;
    register int R7;
    register int R12;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    R4 = a4;
    v0_5 = a5;
    v0_4 = a6;
    *(unsigned short *)(((int)stk + 8)) = R4;
    *(unsigned short *)(((int)stk + 0)) = v0_5;
    if (((short)v0_4 == 0)) goto L_C07CBE2;
    v0_0 = (0xFFFFFFFE);
    L_C07CDDE:;
    return v0_0;
    L_C07CBE2:;
    v0_2 = *(short *)(((int)stk + 0));
    v0_3 = *(short *)(((int)stk + 8));
    v0_1 = (((v0_2 << 1) + v0_3));
    v0_0 = (0x8);
    if (((int)(short)((v0_2 << 1) + v0_3) <= (int)0x8)) goto L_C07CBF6;
    v0_0 = (0xFFFFFFFF);
    goto L_C07CDDE;
    L_C07CBF6:;
    v0_2 = (0xC2C3EA8);
    v0_3 = (0x0);
    R4 = (0x0);
    L_C07CBFC:;
    if (((*(signed char *)((v0_2 + (unsigned char)((unsigned short)R4 * (unsigned short)0x1C)))) != 1)) goto L_C07CC3C;
    v0_0 = (0xFFFFFFFD);
    goto L_C07CDDE;
    L_C07CC3C:;
    v0_4 = (int)(short)(R4 + 0x1) < (int)v0_0;
    R4 = ((R4 + 0x1));
    if (v0_4) goto L_C07CBFC;
    v0_4 = *(short *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 4)) = v0_4;
    FUN_0c07b6c0(v0_4, 0xA08000A0);
    v0_4 = *(short *)(((int)stk + 0));
    *(unsigned int *)(((int)stk + 8)) = v0_4;
    FUN_0c07b6c0(v0_4, 0xA08000A4);
    R4 = (0xC2C3E74);
    v0_4 = ((FUN_0c07b6e6(0xA080008C)));
    if (((short)v0_1 == 0)) goto L_C07CCE8;
    v0_1 = (int)((unsigned int)(v0_4 - ((((short)v0_1 << 2) << 2) << 2)) / (unsigned int)(short)v0_1);
    *(unsigned int *)((R4 + 0x0)) = (v0_1 & 0x7FFFFFE0);
    v0_5 = (0x4000);
    if (((int)(v0_1 & 0x7FFFFFE0) <= (int)0x4000)) goto L_C07CC8C;
    *(unsigned int *)((R4 + 0x0)) = v0_5;
    L_C07CC8C:;
    *(unsigned int *)(((int)stk + 0)) = ((*(int *)((R4 + 0x0))) + 0x40);
    t30 = FUN_0c07b6e6(((((struct o0_int *)0xC2C3E68)->v)));
    R4 = (t30);
    if (((0x1F & t30) == 0)) goto L_C07CCAA;
    R4 = (((0xFFFFFFE0 & R4) + 0x20));
    L_C07CCAA:;
    R12 = (((((((struct o4_int *)0xC2C3E68)->v)) - (*(int *)(((int)stk + 0)))) - R4));
    v0_1 = (0xA0800100);
    L_C07CCEC:;
    FUN_0c07b6c0((*(int *)(((int)stk + 0))), 0xA08000A8);
    v0_4 = (v0_3);
    if (((int)(*(int *)(((int)stk + 4))) <= 0)) goto L_C07CD4A;
    L_C07CCFC:;
    *(unsigned char *)((((unsigned char)((unsigned short)v0_4 * (unsigned short)0x1C) + v0_2) + 0x1)) = v0_3;
    *(unsigned char *)((((unsigned char)((unsigned short)v0_4 * (unsigned short)0x1C) + v0_2) + 0x0)) = v0_3;
    *(unsigned int *)((((unsigned char)((unsigned short)v0_4 * (unsigned short)0x1C) + v0_2) + 0x18)) = v0_1;
    *(unsigned int *)((((unsigned char)((unsigned short)v0_4 * (unsigned short)0x1C) + v0_2) + 0x4)) = (0xA0800000 + R12);
    FUN_0c07b6c0(R12, (v0_1 + 0xC));
    v0_5 = ((*(int *)(((int)stk + 0))));
    v0_6 = (((unsigned char)((unsigned short)v0_4 * (unsigned short)0x1C) + v0_2));
    R12 = ((R12 - v0_5));
    v0_7 = (0x0);
    v0_5 = (0xC07B6C0);
    v0_5 = (v0_1);
    *(unsigned int *)((v0_6 + 0x8)) = v0_7;
    v0_5 = ((v0_5 + 0x10));
    FUN_0c07b6c0(v0_7, v0_5);
    *(unsigned int *)((v0_6 + 0x10)) = (v0_1 + 0x14);
    *(unsigned int *)((v0_6 + 0x14)) = (v0_1 + 0x4);
    v0_5 = (int)(short)(v0_4 + 0x1) < (int)(*(int *)(((int)stk + 4)));
    v0_4 = ((v0_4 + 0x1));
    v0_1 = ((v0_1 + 0x60));
    if (v0_5) goto L_C07CCFC;
    L_C07CD4A:;
    v0_5 = *(int *)(((int)stk + 4));
    v0_6 = *(int *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 4)) = (v0_5 + v0_6);
    if (((int)(short)v0_4 >= (int)(v0_5 + v0_6))) goto L_C07CDAC;
    L_C07CD58:;
    *(unsigned char *)((((unsigned char)((unsigned short)v0_4 * (unsigned short)0x1C) + v0_2) + 0x1)) = v0_3;
    *(unsigned char *)((((unsigned char)((unsigned short)v0_4 * (unsigned short)0x1C) + v0_2) + 0x0)) = v0_3;
    *(unsigned int *)((((unsigned char)((unsigned short)v0_4 * (unsigned short)0x1C) + v0_2) + 0x18)) = v0_1;
    *(unsigned int *)((((unsigned char)((unsigned short)v0_4 * (unsigned short)0x1C) + v0_2) + 0x8)) = (0xA0800000 + R12);
    FUN_0c07b6c0(R12, (v0_1 + 0x10));
    v0_5 = *(int *)(((int)stk + 0));
    *(unsigned int *)((((unsigned char)((unsigned short)v0_4 * (unsigned short)0x1C) + v0_2) + 0x4)) = (0xA0800000 + (R12 - v0_5));
    FUN_0c07b6c0((R12 - v0_5), (v0_1 + 0xC));
    v0_6 = *(int *)(((int)stk + 0));
    *(unsigned int *)((((unsigned char)((unsigned short)v0_4 * (unsigned short)0x1C) + v0_2) + 0x10)) = (v0_1 + 0x14);
    *(unsigned int *)((((unsigned char)((unsigned short)v0_4 * (unsigned short)0x1C) + v0_2) + 0x14)) = (v0_1 + 0x4);
    v0_7 = (int)(short)(v0_4 + 0x1) < (int)(*(int *)(((int)stk + 4)));
    R12 = (((R12 - v0_5) - v0_6));
    v0_4 = ((v0_4 + 0x1));
    v0_1 = ((v0_1 + 0x60));
    if (v0_7) goto L_C07CD58;
    L_C07CDAC:;
    R4 = (0xFFFFFFFF);
    if (((int)(short)v0_4 >= (int)v0_0)) goto L_C07CDD6;
    L_C07CDB4:;
    *(unsigned char *)((((unsigned char)((unsigned short)v0_4 * (unsigned short)0x1C) + v0_2) + 0x0)) = R4;
    *(unsigned char *)((((unsigned char)((unsigned short)v0_4 * (unsigned short)0x1C) + v0_2) + 0x1)) = v0_3;
    *(unsigned int *)(((((unsigned char)((unsigned short)v0_4 * (unsigned short)0x1C) + v0_2) + 0x4) + 0x4)) = R4;
    v0_1 = (int)(short)(v0_4 + 0x1) < (int)v0_0;
    *(unsigned int *)(((((unsigned char)((unsigned short)v0_4 * (unsigned short)0x1C) + v0_2) + 0x4) + 0x0)) = R4;
    v0_4 = ((v0_4 + 0x1));
    if (v0_1) goto L_C07CDB4;
    L_C07CDD6:;
    FUN_0c07c8be(0xA1);
    v0_0 = (0x0);
    goto L_C07CDDE;
    L_C07CCE8:;
    *(unsigned int *)(((int)stk + 0)) = v0_3;
    *(unsigned int *)((R4 + 0x0)) = v0_3;
    goto L_C07CCEC;
}


int kmiProcessVertex_08(int a4)
{
    int stk[3];
    register int t3;
    register int t4;
    register int t5;
    register int t14;
    register float u16;
    register float u18;
    register int t19;
    register int t28;
    register float u30;
    register float u32;
    register int t33;
    register int t42;
    register float u44;
    register float u46;
    register int t48;
    int R1000;
    int R1004;
    int R1008;

    R1000 = *(int *)((int)stk + 0);
    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);

    R1000 = (*(int *)((a4 + 0x0)));
    R1004 = (*(int *)((a4 + 0x4)));
    R1008 = (*(int *)((a4 + 0x8)));
    t3 = (((struct o4_int *)0xC300A6C)->v);
    t4 = (((struct o8_int *)0xC300A6C)->v);
    t5 = (((struct oC_int *)0xC300A6C)->v);
    (((struct o0_uint *)0xC300974)->v) = t3;
    (((struct o4_uint *)0xC300974)->v) = t4;
    (((struct o8_uint *)0xC300974)->v) = t5;
    (((struct oC_uint *)0xC300974)->v) = (*(int *)(((R1000) + 0x4)));
    (((struct o10_uint *)0xC300974)->v) = (*(int *)(((R1000) + 0x8)));
    (((struct o14_uint *)0xC300974)->v) = (*(int *)(((R1000) + 0xC)));
    t14 = kmiBGPlanePutColor(t3, 0x6, (*(int *)(((R1000) + 0x10))));
    u16 = (((struct o18_float *)((R1000)))->v);
    *(unsigned int *)(((t14 << 2) + 0xC300974)) = ((((((int)(u16 * 255.0f) << 16) << 8) | ((int)(u16 * 255.0f) << 16)) | ((int)(u16 * 255.0f) << 8)) | (int)(u16 * 255.0f));
    u18 = (((struct o1C_float *)((R1000)))->v);
    t19 = kmiBGPlanePutWord(t3, (t14 + 0x1), ((((((int)(u18 * 255.0f) << 16) << 8) | ((int)(u18 * 255.0f) << 16)) | ((int)(u18 * 255.0f) << 8)) | (int)(u18 * 255.0f)));
    *(unsigned int *)(((t19 << 2) + 0xC300974)) = (*(int *)(((R1004) + 0x4)));
    *(unsigned int *)((((t19 + 0x1) << 2) + 0xC300974)) = (*(int *)(((R1004) + 0x8)));
    *(unsigned int *)(((((t19 + 0x1) + 0x1) << 2) + 0xC300974)) = (*(int *)(((R1004) + 0xC)));
    t28 = kmiBGPlanePutColor(t3, (((t19 + 0x1) + 0x1) + 0x1), (*(int *)(((R1000) + 0x10))));
    u30 = (((struct o18_float *)((R1004)))->v);
    *(unsigned int *)(((t28 << 2) + 0xC300974)) = ((((((int)(u30 * 255.0f) << 16) << 8) | ((int)(u30 * 255.0f) << 16)) | ((int)(u30 * 255.0f) << 8)) | (int)(u30 * 255.0f));
    u32 = (((struct o1C_float *)((R1004)))->v);
    t33 = kmiBGPlanePutWord(t3, (t28 + 0x1), ((((((int)(u32 * 255.0f) << 16) << 8) | ((int)(u32 * 255.0f) << 16)) | ((int)(u32 * 255.0f) << 8)) | (int)(u32 * 255.0f)));
    *(unsigned int *)(((t33 << 2) + 0xC300974)) = (*(int *)(((R1008) + 0x4)));
    *(unsigned int *)((((t33 + 0x1) << 2) + 0xC300974)) = (*(int *)(((R1008) + 0x8)));
    *(unsigned int *)(((((t33 + 0x1) + 0x1) << 2) + 0xC300974)) = (*(int *)(((R1008) + 0xC)));
    t42 = kmiBGPlanePutColor(t3, (((t33 + 0x1) + 0x1) + 0x1), (*(int *)(((R1000) + 0x10))));
    u44 = (((struct o18_float *)((R1008)))->v);
    *(unsigned int *)(((t42 << 2) + 0xC300974)) = ((((((int)(u44 * 255.0f) << 16) << 8) | ((int)(u44 * 255.0f) << 16)) | ((int)(u44 * 255.0f) << 8)) | (int)(u44 * 255.0f));
    u46 = (((struct o1C_float *)((R1008)))->v);
    (((struct o0_uint *)0xC300A6C)->v) = ((kmiBGPlanePutWord(t3, (t42 + 0x1), ((((((int)(u46 * 255.0f) << 16) << 8) | ((int)(u46 * 255.0f) << 16)) | ((int)(u46 * 255.0f) << 8)) | (int)(u46 * 255.0f)))) << 2);
    t48 = kmiBGPlaneCountWords(t3);
    kmiBGPlaneSetPCW(t48, 0x0, 0x0);
    (((struct o14_uint *)0xC300A6C)->v) = (*(int *)(((R1000) + 0xC)));
    return 0x0;
}

int kmiProcessVertex_14(int a4)
{
    int stk[3];
    register int t3;
    register int t4;
    register int t5;
    register int t14;
    register float u16;
    register float u18;
    register int t19;
    register int t28;
    register float u30;
    register float u32;
    register int t33;
    register int t42;
    register float u44;
    register float u46;
    register int t48;
    int R1000;
    int R1004;
    int R1008;

    R1000 = *(int *)((int)stk + 0);
    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);

    R1000 = (*(int *)((a4 + 0x0)));
    R1004 = (*(int *)((a4 + 0x4)));
    R1008 = (*(int *)((a4 + 0x8)));
    t3 = (((struct o4_int *)0xC300A6C)->v);
    t4 = (((struct o8_int *)0xC300A6C)->v);
    t5 = (((struct oC_int *)0xC300A6C)->v);
    (((struct o0_uint *)0xC300974)->v) = t3;
    (((struct o4_uint *)0xC300974)->v) = t4;
    (((struct o8_uint *)0xC300974)->v) = t5;
    (((struct oC_uint *)0xC300974)->v) = (*(int *)(((R1000) + 0x4)));
    (((struct o10_uint *)0xC300974)->v) = (*(int *)(((R1000) + 0x8)));
    (((struct o14_uint *)0xC300974)->v) = (*(int *)(((R1000) + 0xC)));
    t14 = kmiBGPlanePutColor(t3, 0x6, (*(int *)(((R1000) + 0x10))));
    u16 = (((struct o18_float *)((R1000)))->v);
    *(unsigned int *)(((t14 << 2) + 0xC300974)) = ((((((int)(u16 * 255.0f) << 16) << 8) | ((int)(u16 * 255.0f) << 16)) | ((int)(u16 * 255.0f) << 8)) | (int)(u16 * 255.0f));
    u18 = (((struct o1C_float *)((R1000)))->v);
    t19 = kmiBGPlanePutWord(t3, (t14 + 0x1), ((((((int)(u18 * 255.0f) << 16) << 8) | ((int)(u18 * 255.0f) << 16)) | ((int)(u18 * 255.0f) << 8)) | (int)(u18 * 255.0f)));
    *(unsigned int *)(((t19 << 2) + 0xC300974)) = (*(int *)(((R1004) + 0x4)));
    *(unsigned int *)((((t19 + 0x1) << 2) + 0xC300974)) = (*(int *)(((R1004) + 0x8)));
    *(unsigned int *)(((((t19 + 0x1) + 0x1) << 2) + 0xC300974)) = (*(int *)(((R1004) + 0xC)));
    t28 = kmiBGPlanePutColor(t3, (((t19 + 0x1) + 0x1) + 0x1), (*(int *)(((R1004) + 0x10))));
    u30 = (((struct o18_float *)((R1004)))->v);
    *(unsigned int *)(((t28 << 2) + 0xC300974)) = ((((((int)(u30 * 255.0f) << 16) << 8) | ((int)(u30 * 255.0f) << 16)) | ((int)(u30 * 255.0f) << 8)) | (int)(u30 * 255.0f));
    u32 = (((struct o1C_float *)((R1004)))->v);
    t33 = kmiBGPlanePutWord(t3, (t28 + 0x1), ((((((int)(u32 * 255.0f) << 16) << 8) | ((int)(u32 * 255.0f) << 16)) | ((int)(u32 * 255.0f) << 8)) | (int)(u32 * 255.0f)));
    *(unsigned int *)(((t33 << 2) + 0xC300974)) = (*(int *)(((R1008) + 0x4)));
    *(unsigned int *)((((t33 + 0x1) << 2) + 0xC300974)) = (*(int *)(((R1008) + 0x8)));
    *(unsigned int *)(((((t33 + 0x1) + 0x1) << 2) + 0xC300974)) = (*(int *)(((R1008) + 0xC)));
    t42 = kmiBGPlanePutColor(t3, (((t33 + 0x1) + 0x1) + 0x1), (*(int *)(((R1008) + 0x10))));
    u44 = (((struct o18_float *)((R1008)))->v);
    *(unsigned int *)(((t42 << 2) + 0xC300974)) = ((((((int)(u44 * 255.0f) << 16) << 8) | ((int)(u44 * 255.0f) << 16)) | ((int)(u44 * 255.0f) << 8)) | (int)(u44 * 255.0f));
    u46 = (((struct o1C_float *)((R1008)))->v);
    (((struct o0_uint *)0xC300A6C)->v) = ((kmiBGPlanePutWord(t3, (t42 + 0x1), ((((((int)(u46 * 255.0f) << 16) << 8) | ((int)(u46 * 255.0f) << 16)) | ((int)(u46 * 255.0f) << 8)) | (int)(u46 * 255.0f)))) << 2);
    t48 = kmiBGPlaneCountWords(t3);
    kmiBGPlaneSetPCW(t48, 0x0, 0x0);
    (((struct o14_uint *)0xC300A6C)->v) = (*(int *)(((R1000) + 0xC)));
    return 0x0;
}

int FUN_0c0244e4(int a4)
{

    register int R1;
    register int R3;
    register int R6;
    register int R13;
    register float F0;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    v0_1 = a4;
    v0_0 = R13;
    v0_2 = (*(int *)((v0_1 + 0x14))) == 0;
    R13 = (0xC1758B4);
    v0_0 = (v0_1);
    if (v0_2) goto L_C0244F8;
    L_C024622:;
    v0_1 = (*(int *)((v0_0 + 0x14))) != 1;
    if (v0_1) goto L_C0246DA;
    (((struct o24_ushort *)(v0_0))->v) = (((((struct o24_short *)(v0_0))->v)) + ((((struct o26_short *)(v0_0))->v)));
    v0_1 = (int)((((struct o24_short *)(v0_0))->v)) <= 0;
    if (v0_1) goto L_C024670;
    v0_1 = (((struct o26_short *)(v0_0))->v);
    v0_2 = (0x26);
    v0_1 = ((v0_1 - 4));
    L_C02467A:;
    *(unsigned short *)((v0_0 + v0_2)) = v0_1;
    v0_4 = (int)((((struct o24_short *)(v0_0))->v)) <= (int)0x2000;
    v0_2 = (0x24);
    v0_1 = (0x2);
    v0_3 = (0x2000);
    if (v0_4) goto L_C0246AC;
    *(unsigned short *)((v0_0 + v0_2)) = v0_3;
    v0_2 = (((struct o26_short *)(v0_0))->v);
    (((struct o26_ushort *)(v0_0))->v) = (int)(-((float)v0_2 * 0.600000024f));
    v0_3 = (int)((((struct o26_short *)(v0_0))->v)) <= (int)0xFFFFFFF8;
    FPUL_ = ((int)(-((float)v0_2 * 0.600000024f)));
    if (v0_3) goto L_C0246AC;
    *(unsigned int *)((v0_0 + 0x14)) = v0_1;
    L_C0246AC:;
    v0_4 = (int)((((struct o24_short *)(v0_0))->v)) >= (int)0xFFFFC000;
    v0_2 = (0x24);
    v0_3 = (0xFFFFC000);
    if (v0_4) goto L_C0246DA;
    *(unsigned short *)((v0_0 + v0_2)) = v0_3;
    v0_2 = (((struct o26_short *)(v0_0))->v);
    (((struct o26_ushort *)(v0_0))->v) = (int)(-((float)v0_2 * 0.400000006f));
    v0_3 = (int)((((struct o26_short *)(v0_0))->v)) >= (int)0x100;
    FPUL_ = ((int)(-((float)v0_2 * 0.400000006f)));
    if (v0_3) goto L_C0246DA;
    *(unsigned int *)((v0_0 + 0x14)) = v0_1;
    L_C0246DA:;
    nlPushMatrix(0x0);
    FUN_0c073a60((v0_0 + 0x18));
    nlRotateAX(((((struct o24_short *)(v0_0))->v)));
    nlObjPutUseViewMatrix(0xC3C9988);
    nlPopMatrix(0x1);
    return FUN_0c026ce6();
    L_C024670:;
    v0_1 = (((struct o26_short *)(v0_0))->v);
    v0_2 = (0x26);
    v0_1 = ((v0_1 - 0x80));
    goto L_C02467A;
    L_C0244F8:;
    w0_2 = (((struct o84_float *)(R13))->v);
    w0_3 = (((struct o20_float *)(v0_0))->v);
    w0_0 = (w0_2);
    w0_1 = (w0_3);
    if ((w0_3 > w0_2)) goto L_C024516;
    v0_1 = !(((w0_0 + ((((struct o108_float *)(R13))->v))) + -10.0f) > w0_1);
    if (v0_1) goto L_C024530;
    L_C024516:;
    if ((!(w0_0 > w0_1))) goto L_C02451E;
    goto L_C024622;
    L_C02451E:;
    v0_1 = w0_1 > ((w0_0 + ((((struct o108_float *)(R13))->v))) + 10.0f);
    if (v0_1) goto L_C024622;
    L_C024530:;
    w0_0 = (((struct o84_float *)(R13))->v);
    w0_1 = ((((struct o80_float *)(R13))->v));
    w0_1 = w0_1 + (((w0_0 - ((((struct o20_float *)(v0_0))->v))) / w0_0)) * ((((struct o104_float *)(R13))->v));
    w0_0 = (w0_1);
    if ((!(40.0f > w0_1))) goto L_C024622;
    *(unsigned int *)((v0_0 + 0x14)) = 0x1;
    v0_1 = ((((struct o20_float *)(v0_0))->v)) > ((((struct o84_float *)(R13))->v));
    if (v0_1) goto L_C02458C;
    w0_2 = (((struct o108_float *)(R13))->v);
    w0_1 = (10.0f);
    w0_2 = ((w0_2 * w0_0));
    L_C024596:;
    (((struct o26_ushort *)(v0_0))->v) = (int)(w0_2 * w0_1);
    w0_1 = (((w0_0 + 5.0f) / 45.0f) * 0.850000024f);
    (((struct o160_float *)(R13))->v) = (((((struct o160_float *)(R13))->v)) * w0_1);
    w0_1 = (((w0_0 + 5.0f) / 45.0f) * 0.850000024f);
    (((struct o16C_float *)(R13))->v) = (((((struct o16C_float *)(R13))->v)) * w0_1);
    w0_0 = (((w0_0 + 5.0f) / 45.0f) * 0.850000024f);
    (((struct o170_float *)(R13))->v) = (((((struct o170_float *)(R13))->v)) * w0_0);
    (((struct o164_float *)(R13))->v) = ((((((struct o160_float *)(R13))->v)) * 3600.0f) / (((((struct o130_float *)(R13))->v)) * 6.28299999f));
    FUN_0c072150((unsigned short)((((struct oF8_short *)(R13))->v)), (0x100 + R13), (0x108 + R13));
    (((struct o100_float *)(R13))->v) = (((((struct o100_float *)(R13))->v)) * ((((struct o160_float *)(R13))->v)));
    (((struct o108_float *)(R13))->v) = (((((struct o108_float *)(R13))->v)) * ((((struct o160_float *)(R13))->v)));
    FUN_0c058ca6(0x10BA9, 0x0);
    goto L_C024622;
    L_C02458C:;
    w0_2 = (((struct o108_float *)(R13))->v);
    w0_1 = (7.5f);
    w0_2 = ((w0_2 * w0_0));
    goto L_C024596;
}

int nlLineDrawThick(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u7;
    register float u8;

    u0 = *(float *)((a5 + 0x0));
    u1 = *(float *)((a6 + 0x0));
    u2 = (((struct o4_float *)(a5))->v);
    u3 = (((struct o4_float *)(a6))->v);
    u4 = (((struct o4_float *)0xC1475D0)->v);
    u5 = ((u2 - u3) * (u2 - u3));
    u5 = u5 + ((u0 - u1)) * ((u0 - u1));
    if (u5 == 0.0f) {
        t0 = a6;
        if (!(((((struct o8_float *)(a5))->v)) > ((((struct o8_float *)(a6))->v)))) {
            t0 = a5;
        }
        nlLineSendQuadE(a4, t0, a7, (u4 * 0.5f));
        t0 = (a4 + 0x80);
    } else {
        u6 = (((struct o0_float *)0xC1475D0)->v);
        u7 = (u4 * 0.5f);
        u4 = ((1.0f / _builtin_sqrtf(u5)) * u7);
        u8 = ((1.0f / _builtin_sqrtf(u5)) * u7);
        t1 = (int)((1.0f / u6) * (u0 - u1));
        if ((int)(int)((1.0f / u6) * (u0 - u1)) < 0) {
            t1 = (-(int)((1.0f / u6) * (u0 - u1)));
        }
        t2 = (int)((1.0f / u6) * (u2 - u3));
        if ((int)(int)((1.0f / u6) * (u2 - u3)) < 0) {
            t2 = (-(int)((1.0f / u6) * (u2 - u3)));
        }
        t3 = t2;
        if ((int)t1 < (int)t2) {
            t3 = t1;
        }
        (((struct o8_float *)(a5))->v) = (1.0f / ((((struct o8_float *)(a5))->v)));
        (((struct o8_float *)(a6))->v) = (1.0f / ((((struct o8_float *)(a6))->v)));
        if ((int)t3 <= (int)0x1) {
            nlLineSendQuadA(a4, a5, a6, a7, ((u0 - u1) * u4), ((u2 - u3) * u8));
            t1 = a4;
        } else {
            (((struct o0_float *)0xC2C3DAC)->v) = ((1.0f / (float)t3) * (u0 - u1));
            (((struct o4_float *)0xC2C3DAC)->v) = ((1.0f / (float)t3) * (u2 - u3));
            (((struct o8_float *)0xC2C3DAC)->v) = ((((((struct o8_float *)(a5))->v)) - ((((struct o8_float *)(a6))->v))) * (1.0f / (float)t3));
            (((struct oC_float *)0xC2C3DAC)->v) = (*(float *)((a6 + 0x0)));
            (((struct o18_float *)0xC2C3DAC)->v) = (((((struct oC_float *)0xC2C3DAC)->v)) + ((((struct o0_float *)0xC2C3DAC)->v)));
            (((struct o10_float *)0xC2C3DAC)->v) = ((((struct o4_float *)(a6))->v));
            (((struct o1C_float *)0xC2C3DAC)->v) = (((((struct o10_float *)0xC2C3DAC)->v)) + ((((struct o4_float *)0xC2C3DAC)->v)));
            (((struct o14_float *)0xC2C3DAC)->v) = ((((struct o8_float *)(a6))->v));
            (((struct o20_float *)0xC2C3DAC)->v) = (((((struct o14_float *)0xC2C3DAC)->v)) + ((((struct o8_float *)0xC2C3DAC)->v)));
            nlLineSendQuadD(a4, 0xC2C3DC4, 0xC2C3DB8, a7, ((u0 - u1) * u4), ((u2 - u3) * u8));
            t2 = (a4 + 0x80);
            if ((int)0x1 < (int)(t3 - 1)) {
                t4 = 0x1;
                t5 = (a4 + 0x80);
                for (;;) {
                    (((struct oC_float *)0xC2C3DAC)->v) = (((((struct oC_float *)0xC2C3DAC)->v)) + ((((struct o0_float *)0xC2C3DAC)->v)));
                    (((struct o18_float *)0xC2C3DAC)->v) = (((((struct o18_float *)0xC2C3DAC)->v)) + ((((struct o0_float *)0xC2C3DAC)->v)));
                    (((struct o10_float *)0xC2C3DAC)->v) = (((((struct o10_float *)0xC2C3DAC)->v)) + ((((struct o4_float *)0xC2C3DAC)->v)));
                    (((struct o1C_float *)0xC2C3DAC)->v) = (((((struct o1C_float *)0xC2C3DAC)->v)) + ((((struct o4_float *)0xC2C3DAC)->v)));
                    (((struct o14_float *)0xC2C3DAC)->v) = (((((struct o14_float *)0xC2C3DAC)->v)) + ((((struct o8_float *)0xC2C3DAC)->v)));
                    (((struct o20_float *)0xC2C3DAC)->v) = (((((struct o20_float *)0xC2C3DAC)->v)) + ((((struct o8_float *)0xC2C3DAC)->v)));
                    nlLineSendQuadC(t5, 0xC2C3DC4, 0xC2C3DB8, a7, ((u0 - u1) * u4), ((u2 - u3) * u8));
                    t4 = (t4 + 0x1);
                    t5 = (t5 + 0x80);
                    if ((int)t4 >= (int)(t3 - 1)) {
                        break;
                    }
                }
                t2 = t5;
            }
            (((struct oC_float *)0xC2C3DAC)->v) = (((((struct oC_float *)0xC2C3DAC)->v)) + ((((struct o0_float *)0xC2C3DAC)->v)));
            (((struct o18_float *)0xC2C3DAC)->v) = (((((struct o18_float *)0xC2C3DAC)->v)) + ((((struct o0_float *)0xC2C3DAC)->v)));
            (((struct o10_float *)0xC2C3DAC)->v) = (((((struct o10_float *)0xC2C3DAC)->v)) + ((((struct o4_float *)0xC2C3DAC)->v)));
            (((struct o1C_float *)0xC2C3DAC)->v) = (((((struct o1C_float *)0xC2C3DAC)->v)) + ((((struct o4_float *)0xC2C3DAC)->v)));
            (((struct o14_float *)0xC2C3DAC)->v) = (((((struct o14_float *)0xC2C3DAC)->v)) + ((((struct o8_float *)0xC2C3DAC)->v)));
            (((struct o20_float *)0xC2C3DAC)->v) = (((((struct o20_float *)0xC2C3DAC)->v)) + ((((struct o8_float *)0xC2C3DAC)->v)));
            nlLineSendQuadB(t2, 0xC2C3DC4, 0xC2C3DB8, a7, ((u0 - u1) * u4), ((u2 - u3) * u8));
            t1 = t2;
        }
        t0 = (t1 + 0x80);
    }
    return t0;
}

int adxb_DecodeInfoAuSub(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{

    register int R1;
    register int R2;
    register int R3;
    register int R8;
    register int R9;
    register int R10;
    int R11;
    int R12;
    register int R13;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_10;
    register int v0_11;
    register int v0_12;
    register int v0_13;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    v0_0 = a4;
    v0_4 = a5;
    v0_2 = a6;
    v0_1 = a7;
    v0_3 = R13;
    v0_9 = R12;
    v0_10 = R11;
    v0_11 = R10;
    v0_12 = R9;
    v0_13 = R8;
    v0_5 = *(signed char *)((v0_0 + 0x1));
    v0_6 = *(signed char *)((v0_0 + 0x0));
    v0_7 = *(signed char *)((v0_0 + 0x2));
    v0_8 = *(signed char *)((v0_0 + 0x3));
    R10 = ((((((unsigned char)v0_5 << 8) | ((unsigned char)v0_7 << 16)) | (((unsigned char)v0_8 << 16) << 8)) | (unsigned char)v0_6));
    R11 = (0xFF00);
    R12 = (0xFF0000);
    R13 = (a10);
    v0_3 = ((v0_0 + 0x4));
    R9 = (a9);
    if (((((((unsigned char)v0_5 << 8) | ((unsigned char)v0_7 << 16)) | (((unsigned char)v0_8 << 16) << 8)) | (unsigned char)v0_6) == 0x64732E)) goto L_C16E218;
    if ((R10 == 0x646E732E)) goto L_C16E218;
    L_C16E318:;
    v0_4 = (0x0);
    L_C16E3DE:;
    return v0_4;
    L_C16E218:;
    v0_5 = *(signed char *)((v0_3 + 0x1));
    v0_6 = *(signed char *)((v0_3 + 0x0));
    v0_7 = *(signed char *)((v0_3 + 0x2));
    v0_8 = *(signed char *)((v0_3 + 0x3));
    v0_3 = ((v0_3 + 0x4));
    R8 = (((((unsigned char)((unsigned int)((unsigned int)(((((unsigned char)v0_5 << 8) | ((unsigned char)v0_7 << 16)) | (((unsigned char)v0_8 << 16) << 8)) | (unsigned char)v0_6) >> 16) >> 8) | (((unsigned int)(((((unsigned char)v0_5 << 8) | ((unsigned char)v0_7 << 16)) | (((unsigned char)v0_8 << 16) << 8)) | (unsigned char)v0_6) >> 8) & R11)) | (((((((unsigned char)v0_5 << 8) | ((unsigned char)v0_7 << 16)) | (((unsigned char)v0_8 << 16) << 8)) | (unsigned char)v0_6) << 8) & R12)) | (((((((unsigned char)v0_5 << 8) | ((unsigned char)v0_7 << 16)) | (((unsigned char)v0_8 << 16) << 8)) | (unsigned char)v0_6) << 16) << 8)));
    if (((int)((((unsigned char)((unsigned int)((unsigned int)(((((unsigned char)v0_5 << 8) | ((unsigned char)v0_7 << 16)) | (((unsigned char)v0_8 << 16) << 8)) | (unsigned char)v0_6) >> 16) >> 8) | (((unsigned int)(((((unsigned char)v0_5 << 8) | ((unsigned char)v0_7 << 16)) | (((unsigned char)v0_8 << 16) << 8)) | (unsigned char)v0_6) >> 8) & R11)) | (((((((unsigned char)v0_5 << 8) | ((unsigned char)v0_7 << 16)) | (((unsigned char)v0_8 << 16) << 8)) | (unsigned char)v0_6) << 8) & R12)) | (((((((unsigned char)v0_5 << 8) | ((unsigned char)v0_7 << 16)) | (((unsigned char)v0_8 << 16) << 8)) | (unsigned char)v0_6) << 16) << 8)) > (int)v0_4)) goto L_C16E318;
    v0_5 = *(signed char *)((v0_3 + 0x1));
    v0_6 = *(signed char *)((v0_3 + 0x0));
    v0_7 = *(signed char *)((v0_3 + 0x2));
    v0_8 = *(signed char *)((v0_3 + 0x3));
    v0_9 = *(signed char *)(((v0_3 + 0x4) + 0x1));
    v0_10 = *(signed char *)(((v0_3 + 0x4) + 0x0));
    v0_11 = *(signed char *)(((v0_3 + 0x4) + 0x2));
    v0_12 = *(signed char *)(((v0_3 + 0x4) + 0x3));
    v0_4 = (((((unsigned char)((unsigned int)((unsigned int)(((((unsigned char)v0_9 << 8) | ((unsigned char)v0_11 << 16)) | (((unsigned char)v0_12 << 16) << 8)) | (unsigned char)v0_10) >> 16) >> 8) | (((unsigned int)(((((unsigned char)v0_9 << 8) | ((unsigned char)v0_11 << 16)) | (((unsigned char)v0_12 << 16) << 8)) | (unsigned char)v0_10) >> 8) & R11)) | (((((((unsigned char)v0_9 << 8) | ((unsigned char)v0_11 << 16)) | (((unsigned char)v0_12 << 16) << 8)) | (unsigned char)v0_10) << 8) & R12)) | (((((((unsigned char)v0_9 << 8) | ((unsigned char)v0_11 << 16)) | (((unsigned char)v0_12 << 16) << 8)) | (unsigned char)v0_10) << 16) << 8)));
    R10 = (((((unsigned char)((unsigned int)((unsigned int)(((((unsigned char)v0_5 << 8) | ((unsigned char)v0_7 << 16)) | (((unsigned char)v0_8 << 16) << 8)) | (unsigned char)v0_6) >> 16) >> 8) | (((unsigned int)(((((unsigned char)v0_5 << 8) | ((unsigned char)v0_7 << 16)) | (((unsigned char)v0_8 << 16) << 8)) | (unsigned char)v0_6) >> 8) & R11)) | (((((((unsigned char)v0_5 << 8) | ((unsigned char)v0_7 << 16)) | (((unsigned char)v0_8 << 16) << 8)) | (unsigned char)v0_6) << 8) & R12)) | (((((((unsigned char)v0_5 << 8) | ((unsigned char)v0_7 << 16)) | (((unsigned char)v0_8 << 16) << 8)) | (unsigned char)v0_6) << 16) << 8)));
    v0_3 = (((v0_3 + 0x4) + 0x4));
    if ((((((unsigned char)((unsigned int)((unsigned int)(((((unsigned char)v0_9 << 8) | ((unsigned char)v0_11 << 16)) | (((unsigned char)v0_12 << 16) << 8)) | (unsigned char)v0_10) >> 16) >> 8) | (((unsigned int)(((((unsigned char)v0_9 << 8) | ((unsigned char)v0_11 << 16)) | (((unsigned char)v0_12 << 16) << 8)) | (unsigned char)v0_10) >> 8) & R11)) | (((((((unsigned char)v0_9 << 8) | ((unsigned char)v0_11 << 16)) | (((unsigned char)v0_12 << 16) << 8)) | (unsigned char)v0_10) << 8) & R12)) | (((((((unsigned char)v0_9 << 8) | ((unsigned char)v0_11 << 16)) | (((unsigned char)v0_12 << 16) << 8)) | (unsigned char)v0_10) << 16) << 8)) == 1)) goto L_C16E2F6;
    if ((v0_4 == 2)) goto L_C16E2FC;
    if ((v0_4 == 3)) goto L_C16E30A;
    goto L_C16E318;
    L_C16E30A:;
    *(unsigned int *)((R13 + 0x0)) = 0x0;
    *(unsigned int *)((a8 + 0x0)) = 0x10;
    L_C16E31C:;
    v0_4 = *(signed char *)((v0_3 + 0x1));
    v0_5 = *(signed char *)((v0_3 + 0x0));
    v0_6 = *(signed char *)((v0_3 + 0x2));
    v0_7 = *(signed char *)((v0_3 + 0x3));
    *(unsigned int *)((v0_2 + 0x0)) = ((((unsigned char)(signed char)((unsigned int)((unsigned int)(((((unsigned char)v0_4 << 8) | ((unsigned char)v0_6 << 16)) | (((unsigned char)v0_7 << 16) << 8)) | (unsigned char)v0_5) >> 16) >> 8) | (((int)(((((unsigned char)v0_4 << 8) | ((unsigned char)v0_6 << 16)) | (((unsigned char)v0_7 << 16) << 8)) | (unsigned char)v0_5) >> 8) & R11)) | (((((((unsigned char)v0_4 << 8) | ((unsigned char)v0_6 << 16)) | (((unsigned char)v0_7 << 16) << 8)) | (unsigned char)v0_5) << 8) & R12)) | (((((((unsigned char)v0_4 << 8) | ((unsigned char)v0_6 << 16)) | (((unsigned char)v0_7 << 16) << 8)) | (unsigned char)v0_5) << 16) << 8));
    v0_2 = *(signed char *)(((v0_3 + 0x4) + 0x1));
    v0_4 = *(signed char *)(((v0_3 + 0x4) + 0x0));
    v0_5 = *(signed char *)(((v0_3 + 0x4) + 0x2));
    v0_6 = *(signed char *)(((v0_3 + 0x4) + 0x3));
    *(unsigned int *)((v0_1 + 0x0)) = ((((unsigned char)(signed char)((unsigned int)((unsigned int)(((((unsigned char)v0_2 << 8) | ((unsigned char)v0_5 << 16)) | (((unsigned char)v0_6 << 16) << 8)) | (unsigned char)v0_4) >> 16) >> 8) | (((int)(((((unsigned char)v0_2 << 8) | ((unsigned char)v0_5 << 16)) | (((unsigned char)v0_6 << 16) << 8)) | (unsigned char)v0_4) >> 8) & R11)) | (((((((unsigned char)v0_2 << 8) | ((unsigned char)v0_5 << 16)) | (((unsigned char)v0_6 << 16) << 8)) | (unsigned char)v0_4) << 8) & R12)) | (((((((unsigned char)v0_2 << 8) | ((unsigned char)v0_5 << 16)) | (((unsigned char)v0_6 << 16) << 8)) | (unsigned char)v0_4) << 16) << 8));
    v0_2 = *(int *)((R13 + 0x0));
    v0_4 = (v0_2);
    v0_3 = ((v0_3 + 0x4));
    if ((v0_2 == 2)) goto L_C16E3B6;
    v0_2 = *(int *)((R13 + 0x0));
    v0_4 = (v0_2);
    if (!((v0_2 != 1))) goto L_C16E3B6;
    v0_2 = (*(int *)((R13 + 0x0))) != 0;
    if (v0_2) goto L_C16E3D6;
    v0_1 = (int)((unsigned int)((unsigned int)R10 >> 1) / (unsigned int)(*(int *)((v0_1 + 0x0))));
    v0_4 = (v0_1);
    goto L_C16E3D2;
    L_C16E3B6:;
    v0_1 = (int)((unsigned int)R10 / (unsigned int)(*(int *)((v0_1 + 0x0))));
    v0_4 = (v0_1);
    L_C16E3D2:;
    *(unsigned int *)((R9 + 0x0)) = v0_4;
    L_C16E3DA:;
    v0_4 = ((v0_0 + R8));
    goto L_C16E3DE;
    L_C16E3D6:;
    *(unsigned int *)((R9 + 0x0)) = 0x7FFF0000;
    goto L_C16E3DA;
    L_C16E2FC:;
    *(unsigned int *)((R13 + 0x0)) = 0x1;
    L_C16E300:;
    *(unsigned int *)((a8 + 0x0)) = 0x8;
    goto L_C16E31C;
    L_C16E2F6:;
    *(unsigned int *)((R13 + 0x0)) = 0x2;
    goto L_C16E300;
}

int FUN_0c056a28(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8)
{
    register int t0;
    register int t1;

    if ((int)((((struct o0_int *)0xC2B3110)->v)) <= (int)0x58) {
        return 0xC2B3110;
    }
    (((struct o4_uint *)0xC2B3110)->v) = 0x5E;
    (((struct oC_float *)0xC2B3110)->v) = (float)(((((struct o0_int *)0xC2B3164)->v)) + 0x1BC);
    (((struct o14_float *)0xC2B3110)->v) = (((((struct o10_float *)0xC2B3164)->v)) + 1.0f);
    (((struct o18_float *)0xC2B3110)->v) = (((((struct o10_float *)0xC2B3164)->v)) + 1.0f);
    (((struct o20_float *)0xC2B3110)->v) = 0.0f;
    (((struct o28_float *)0xC2B3110)->v) = 1.0f;
    (((struct o2C_uint *)0xC2B3110)->v) = 0x0;
    (((struct o38_uint *)0xC2B3110)->v) = 0xA;
    t0 = 0x46;
    for (;;) {
        (((struct o8_float *)0xC2B3110)->v) = (float)t0;
        t1 = ((int (*)(int, int, int, int, float, float, float, float, float))(FUN_0c07ada0))(0xC2B3114, a5, a6, a7, f4, f5, f6, f7, f8);
        t0 = (t0 + 0x11);
        if ((int)t0 >= (int)0xF0) {
            break;
        }
    }
    (((struct o10_float *)0xC2B3110)->v) = 0.200000003f;
    (((struct o14_float *)0xC2B3110)->v) = (((((struct o10_float *)0xC2B3164)->v)) + 1.0f);
    (((struct o18_float *)0xC2B3110)->v) = (((((struct o10_float *)0xC2B3164)->v)) + 1.0f);
    (((struct o20_float *)0xC2B3110)->v) = 0.0f;
    (((struct o28_float *)0xC2B3110)->v) = 1.0f;
    (((struct o38_uint *)0xC2B3110)->v) = 0x200A;
    FUN_0c076230(0.75f, 0.75f, 0.75f);
    (((struct o8_float *)0xC2B3110)->v) = 108.0f;
    (((struct oC_float *)0xC2B3110)->v) = (float)(((((struct o0_int *)0xC2B3164)->v)) + 0x180);
    (((struct o4_uint *)0xC2B3110)->v) = 0x192;
    t0 = ((int (*)(int))(FUN_0c07ada0))(0xC2B3114);
    (((struct o8_float *)0xC2B3110)->v) = 172.0f;
    (((struct oC_float *)0xC2B3110)->v) = (float)(((((struct o0_int *)0xC2B3164)->v)) + 0x180);
    (((struct o4_uint *)0xC2B3110)->v) = 0x193;
    t0 = ((int (*)(int))(FUN_0c07ada0))(0xC2B3114);
    (((struct o8_float *)0xC2B3110)->v) = 236.0f;
    (((struct oC_float *)0xC2B3110)->v) = (float)(0x180 + ((((struct o0_int *)0xC2B3164)->v)));
    (((struct o4_uint *)0xC2B3110)->v) = 0x194;
    t0 = ((int (*)(int))(FUN_0c07ada0))(0xC2B3114);
    (((struct o8_float *)0xC2B3110)->v) = 108.0f;
    (((struct oC_float *)0xC2B3110)->v) = (float)(((((struct o0_int *)0xC2B3164)->v)) + 0x1C0);
    (((struct o4_uint *)0xC2B3110)->v) = 0x195;
    t0 = ((int (*)(int))(FUN_0c07ada0))(0xC2B3114);
    (((struct o8_float *)0xC2B3110)->v) = 172.0f;
    (((struct oC_float *)0xC2B3110)->v) = (float)(((((struct o0_int *)0xC2B3164)->v)) + 0x1C0);
    (((struct o4_uint *)0xC2B3110)->v) = 0x196;
    t0 = ((int (*)(int))(FUN_0c07ada0))(0xC2B3114);
    (((struct o8_float *)0xC2B3110)->v) = 220.0f;
    (((struct oC_float *)0xC2B3110)->v) = (float)(((((struct o0_int *)0xC2B3164)->v)) + 0x1B0);
    (((struct o4_uint *)0xC2B3110)->v) = 0x197;
    t0 = ((int (*)(int))(FUN_0c07ada0))(0xC2B3114);
    (((struct o10_float *)0xC2B3110)->v) = 0.200000003f;
    (((struct o38_uint *)0xC2B3110)->v) = 0xA;
    (((struct o4_uint *)0xC2B3110)->v) = 0x1E4;
    (((struct o8_float *)0xC2B3110)->v) = 276.0f;
    (((struct oC_float *)0xC2B3110)->v) = (float)(((((struct o0_int *)0xC2B3164)->v)) + 0x1B4);
    (((struct o14_float *)0xC2B3110)->v) = (((((struct o10_float *)0xC2B3164)->v)) + 1.0f);
    (((struct o18_float *)0xC2B3110)->v) = (((((struct o10_float *)0xC2B3164)->v)) + 1.0f);
    (((struct o20_float *)0xC2B3110)->v) = 0.0f;
    (((struct o28_float *)0xC2B3110)->v) = 1.0f;
    t0 = ((int (*)(int))(FUN_0c07ada0))(0xC2B3114);
    return FUN_0c076230(1.0f, 1.0f, 1.0f);
}


