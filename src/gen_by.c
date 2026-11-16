/* Straight-line functions with calls and guards (batch gen_by): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[29]; } Stk29;
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o11C_uint { char p[0x11C]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_float { char p[0x20]; float v; };
struct o204_int { char p[0x204]; int v; };
struct o208_int { char p[0x208]; int v; };
struct o20C_int { char p[0x20C]; int v; };
struct o34_int { char p[0x34]; int v; };
struct o3C_int { char p[0x3C]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_int { char p[0x40]; int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_int { char p[0x44]; int v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o48_int { char p[0x48]; int v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o4C_int { char p[0x4C]; int v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o50_int { char p[0x50]; int v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o54_int { char p[0x54]; int v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o58_int { char p[0x58]; int v; };
struct o5C_int { char p[0x5C]; int v; };
struct o60_int { char p[0x60]; int v; };
struct o64_int { char p[0x64]; int v; };
struct o68_int { char p[0x68]; int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_int { char p[0x6C]; int v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o88_int { char p[0x88]; int v; };
struct o90_int { char p[0x90]; int v; };
struct o90_uint { char p[0x90]; unsigned int v; };
struct o98_int { char p[0x98]; int v; };
struct o98_uint { char p[0x98]; unsigned int v; };
struct o9C_int { char p[0x9C]; int v; };
struct o9C_uint { char p[0x9C]; unsigned int v; };
struct oA0_int { char p[0xA0]; int v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uint { char p[0xA8]; unsigned int v; };
struct oAC_uint { char p[0xAC]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int thunk_mwRnaGetTime(int, int, int);
int FUN_0c027f28(int);
int FUN_0c027fbe(float, float);
int FUN_0c02803a(int, int, int, int);
int FUN_0c02842e(int);
int FUN_0c029c96(int, int, int);
int FUN_0c046658(int, int, int, float);
int FUN_0c052dba(int, int, float, float);
float FUN_0c072140(int);
float FUN_0c072148(int);
int FUN_0c072b60(int);
int FUN_0c075c60(int);
int FUN_0c076130(float);
int FUN_0c07ff00(void);
int FUN_0c08fe18(int);
int FUN_0c090e4c(int, int, int, int);
int FUN_0c14e936(int, int, int);
int FUN_0c161fe2(int);
int FUN_0c161ffa(int);
int FUN_0c16201e(int);
int FUN_0c162464(int);
int FUN_0c16ada2(int, int, int, int, int);
int Put_Adv_Logo_Sprite(void);
int SJ_SplitChunk(int, int, int);
int adxstm_sj_internal_error(void);
int cvFsGetStat(int, int, int, int);
int cvFsReqRd(int, int, int);
int kmFreeTexture(int);
int kmProcessVertexRenderState(int);
int kmSetSystemConfiguration(int);
int kmSetVertexRenderState(int);
int kmiBGPlaneCountWords(int);
int kmiBGPlanePutColor2(int, int, int, int);
int kmiBGPlanePutWord(int, int, int);
int kmiBGPlaneSetPCW(int, int, int);
int kmiFBFitBlock(int, int);
int kmiFBSearchFree(int, int, int);
int memcpy(int, int, int);
int memset(int, int, int);
int mwRnaGetTime(void);
int mwlRnaStartCopy(int, int, int, int, int);
int nlCommonTextureClearTextureIndex(int, int);
float nlFloor(float);
int nlFree(int, int, int, int);
int nlFreePalette(int, int, int, int);
int nlGetMatrix(int);
int nlLoadDummyTexture(void);
int nlLocate(int, int);
int nlMalloc(int);
int nlObjPutSetLightDirectionV(int);
int nlObjPutUseViewMatrix(int);
int nlPrintf(int, ...);
int pfSize(float, float);
int setjmp(int);
int vmsfs_c_progress(int, int, int, int);
int vmsfs_fclose(int, int);
int vmsfs_fcreate(int, int, int, int);
int vmsfs_fopen(int, int, int);
int vmsfs_fread1(int, int);
int vmsfs_fwrite1(int, int);
int vmsfs_lockbank(int, int);
int vmsfs_mediainfo_retry(int, int);
int vmsfs_memcmp(int, int);
int vmsio_block_read(int, int, int);
int FUN_0c053158(float f4);
int kmiFBallocSub(int a4, int a5);
int FUN_0c029b12(int a4, float f4);
int FUN_0c047216(int a4);
int FUN_0c0902e8(int a4, int a5, int a6, int a7, int a8, int a9);
int kmiProcessVertex_11(int a4);
int kmiWriteFBRegister(Stk29 s);
int nlCreateVertexBuffer_clx22(int a4, int a5, int a6, int a7);
int mwlRnaStartTrans(int a4, int a5, int a6, int a7);
int kmfGetInternalSystemMetrics(int a4);
int FUN_0c031d0c(int a4, int a5, int a6, int a7);
int FUN_0c04b592(int a4, int a5, int a6);
int vmsfs_connect(int a4);
float nlLUDecomp(int a4, int a5, float f4, float f5);
int FUN_0c07de10(int a4, int a5);
int FUN_0c14e9a8(int a4, int a5, int a6);
int FUN_0c075450(int a4, int a5, int a6, int a7, int a8);
int buFbrCreateFiber(int a4, int a5, int a6, int a7);
int FUN_0c162560(int a4, int a5, int a6, int a7);

int FUN_0c053158(float f4)
{
    int stk[1];
    register int t10;
    register int t15;
    register int t16;
    register int t17;
    register int t18;
    register int t19;
    register int t23;
    register int t24;
    register int t32;
    register int t34;
    int R1000;

    R1000 = *(int *)((int)stk + 0);

    if (((((struct o0_int *)0xC2B2C4C)->v)) == 1) {
        Put_Adv_Logo_Sprite();
    }
    if ((int)((((struct o4_int *)0xC2B2C4C)->v)) > 0) {
        (((struct o4_uint *)0xC2B2C4C)->v) = (((((struct o4_int *)0xC2B2C4C)->v)) - 0x80);
    }
    *(float *)0xC2B2B68 = 600.0f;
    t10 = 0x0;
    for (;;) {
        FUN_0c052dba(0xC2B2B5C, ((((struct o0_int *)0xC1320A8)->v)), (float)(((((struct o4_int *)0xC1320A8)->v)) + t10), (float)((((struct o8_int *)0xC1320A8)->v)));
        t10 = (t10 + 0x8);
        if ((int)t10 >= (int)0x280) {
            break;
        }
    }
    *(float *)0xC2B2B68 = 500.0f;
    t15 = 0xC1320B4;
    t16 = 0x1;
    for (;;) {
        t17 = *(int *)((t15 + 0x8));
        t18 = *(int *)((t15 + 0x4));
        t19 = t15;
        t15 = (t15 + 0xC);
        FUN_0c052dba(0xC2B2B5C, (*(int *)((t19 + 0x0))), (float)((t18 + ((((struct o4_int *)0xC2B2C4C)->v))) + 0x36), (float)(t17 + 0x5F));
        t16 = (t16 + 0x1);
        if ((unsigned int)t16 >= (unsigned int)0xA) {
            break;
        }
    }
    R1000 = 0xC132120;
    t23 = 0x0;
    for (;;) {
        t24 = R1000;
        R1000 = (t24 + 0xC);
        FUN_0c052dba(0xC2B2B5C, (*(int *)((((t24 + 0xC) - 12) + 0x0))), (float)(((*(int *)((((t24 + 0xC) - 12) + 0x4))) + ((((struct o4_int *)0xC2B2C4C)->v))) + 0xFF), (float)((*(int *)((((t24 + 0xC) - 12) + 0x8))) + 0x1A5));
        t23 = (t23 + 0x1);
        if ((unsigned int)t23 >= (unsigned int)0x3) {
            break;
        }
    }
    t32 = (((struct o8_int *)0xC2B2C4C)->v);
    if (t32 == 1) {
        t34 = (((struct oC_int *)0xC2B2C4C)->v);
        if (t34 != -1) {
            FUN_0c027f28(0x1);
            FUN_0c02803a(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
            pfSize(1.0f, 1.0f);
            FUN_0c027fbe(380.0f, 320.0f);
            return FUN_0c02842e(0xC10CB88);
        }
        return t34;
    }
    return t32;
}

int kmiFBallocSub(int a4, int a5)
{
    int stk[2];

    register int R1;
    register int R2;
    register int R3;
    int R4;
    register int R6;
    int R8;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    R4 = a4;
    v0_0 = a5;
    *(unsigned int *)(((int)stk + 0)) = v0_0;
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    v0_2 = (R4);
    v0_0 = (R4);
    v0_1 = (0x0);
    if (((int)R4 < 0)) goto L_C1539C0;
    v0_2 = ((v0_2 & 0x1F));
    L_C1539CA:;
    R4 = (v0_2);
    if ((v0_2 == 0)) goto L_C1539D6;
    v0_0 = ((v0_0 + (0x20 - R4)));
    L_C1539D6:;
    v0_3 = *(int *)0xC173DF4;
    v0_2 = (v0_3);
    if (!((v0_3 != 0))) goto L_C153AC8;
    v0_3 = (0xC173DE0);
    R8 = (0x1);
    goto L_C1539E6;
    L_C153AC8:;
    if (((*(int *)(((int)stk + 4))) != 2)) goto L_C153AD6;
    if ((v0_1 == 0)) goto L_C153AD6;
    v0_2 = (v0_1);
    L_C153AD8:;
    return v0_2;
    L_C153AD6:;
    v0_2 = (0xFFFFFFFF);
    goto L_C153AD8;
    L_C1539E6:;
    if (((int)(*(int *)((v0_2 + 0x10))) < (int)v0_0)) goto L_C153AC2;
    v0_5 = *(int *)(((*(int *)(((int)stk + 0))) + 0x18));
    v0_4 = ((((*(int *)((v0_2 + 0xC))) + (*(int *)((v0_2 + 0x10)))) - v0_0));
    R4 = (v0_5);
    if (((v0_5 & R8) == 0)) goto L_C153AA0;
    if (((0x8 & R4) != 0)) goto L_C153AA0;
    if (((0x20 & R4) != 0)) goto L_C153AA0;
    *(volatile int *)(((int)stk + 0));
    v0_5 = kmiFBFitBlock(v0_2, v0_0);
    R4 = (v0_5);
    if (((int)v0_5 < 0)) goto L_C153A36;
    v0_5 = (R4);
    if (((int)R4 > (int)v0_4)) goto L_C153A36;
    L_C153A1E:;
    v0_6 = kmiFBSearchFree(0x1, ((*(int *)((v0_3 + 0x0))) + v0_5), v0_0);
    R4 = (v0_6);
    if ((v0_6 == 0)) goto L_C153AB8;
    v0_6 = (int)(v0_5 + 0x800) <= (int)v0_4;
    v0_5 = ((v0_5 + 0x800));
    if (v0_6) goto L_C153A1E;
    L_C153A36:;
    *(unsigned int *)(((int)stk + 4)) = 0x2;
    if ((v0_1 != 0)) goto L_C153AC2;
    v0_6 = *(int *)((v0_2 + 0xC));
    v0_5 = (v0_6);
    if (((int)v0_6 > (int)v0_4)) goto L_C153AC2;
    L_C153A44:;
    v0_6 = kmiFBSearchFree(0x1, ((*(int *)((v0_3 + 0x0))) + v0_5), v0_0);
    R4 = (v0_6);
    if ((v0_6 != 0)) goto L_C153A58;
    v0_1 = v0_5;
    v0_5 = (v0_4);
    v0_1 = v0_1;
    L_C153A58:;
    v0_6 = (int)(v0_5 + 0x20) <= (int)v0_4;
    v0_5 = ((v0_5 + 0x20));
    if (v0_6) goto L_C153A44;
    L_C153AC2:;
    v0_4 = *(int *)((v0_2 + 0x8));
    v0_2 = (v0_4);
    if ((v0_4 != 0)) goto L_C1539E6;
    goto L_C153AC8;
    L_C153AB8:;
    v0_2 = (v0_5);
    goto L_C153AD8;
    L_C153AA0:;
    *(unsigned int *)(((int)stk + 4)) = R8;
    v0_6 = *(int *)((v0_2 + 0xC));
    v0_5 = (v0_6);
    if (((int)v0_6 > (int)v0_4)) goto L_C153AC2;
    L_C153AA8:;
    v0_6 = kmiFBSearchFree(0x1, ((*(int *)((v0_3 + 0x0))) + v0_5), v0_0);
    R4 = (v0_6);
    if ((v0_6 != 0)) goto L_C153ABC;
    goto L_C153AB8;
    L_C153ABC:;
    v0_6 = (int)(v0_5 + 0x20) <= (int)v0_4;
    v0_5 = ((v0_5 + 0x20));
    if (v0_6) goto L_C153AA8;
    goto L_C153AC2;
    L_C1539C0:;
    v0_2 = (((~(((~v0_2) + 0x1) & 0x1F)) + 0x1));
    goto L_C1539CA;
}


int FUN_0c047216(int a4)
{
    int stk[11];
    int t2;
    register int t4;
    register int t9;
    register float u15;
    int t16;
    int t19;
    register float t35;
    register float t41;
    register int t53;
    register int t55;
    register int t57;
    float u3;
    float u8;

    if (a4 == 0) {
        (((struct o0_uint *)0xC2AD2AC)->v) = 0x2200;
        (((struct o4_uint *)0xC2AD2AC)->v) = 0x2900;
        (((struct o8_float *)0xC2AD2AC)->v) = 0.649999976f;
        t57 = 0xC0472A8;
    } else {
        if (((*(int *)0xC1EC758) & 4) != 0) {
            *(unsigned int *)(((int)stk + 16)) = 0xC1EC758;
            t2 = *(int *)0xC1EC758;
            t4 = 0x0;
            if (((0x10 & t2) != 0) && (u3 = (((struct o8_float *)0xC2AD2AC)->v), 1.0f > u3)) {
                t4 = 0x1;
            }
            t9 = 0x0;
            if (((0x20 & t2) != 0) && (u8 = (((struct o8_float *)0xC2AD2AC)->v), u8 > 0.0f)) {
                t9 = 0x1;
            }
            u15 = ((((struct o8_float *)0xC2AD2AC)->v));
            u15 = u15 + 0.00999999978f * ((float)(t4 - t9));
            (((struct o8_float *)0xC2AD2AC)->v) = u15;
        } else {
            t16 = *(int *)0xC1EC758;
            (((struct o0_uint *)0xC2AD2AC)->v) = (((((struct o0_int *)0xC2AD2AC)->v)) + ((((((((((0x10 & t16) == 0)) ? 1 : 0) ^ 0x1) - (-(((((0x20 & t16) == 0)) ? 1 : 0) - 1))) << 2) << 2) << 2) << 1));
            t19 = *(int *)0xC1EC758;
            (((struct o4_uint *)0xC2AD2AC)->v) = (((((struct o4_int *)0xC2AD2AC)->v)) + ((((((((((0x80 & t19) == 0)) ? 1 : 0) ^ 0x1) - (-(((((0x40 & t19) == 0)) ? 1 : 0) - 1))) << 2) << 2) << 2) << 1));
            (((struct o0_uint *)0xC2AD2AC)->v) = (unsigned short)((((struct o0_int *)0xC2AD2AC)->v));
            (((struct o4_uint *)0xC2AD2AC)->v) = (unsigned short)((((struct o4_int *)0xC2AD2AC)->v));
        }
        t35 = FUN_0c072148(((((struct o0_int *)0xC2AD2AC)->v)));
        *(float *)(((int)stk + 32)) = (t35 * (FUN_0c072140(((((struct o4_int *)0xC2AD2AC)->v)))));
        *(float *)(((int)stk + 36)) = (FUN_0c072140(((((struct o0_int *)0xC2AD2AC)->v))));
        t41 = FUN_0c072148(((((struct o0_int *)0xC2AD2AC)->v)));
        *(float *)(((int)stk + 40)) = (t41 * (FUN_0c072148(((((struct o4_int *)0xC2AD2AC)->v)))));
        nlObjPutSetLightDirectionV((((int)stk + 16) + 0x10));
        FUN_0c076130(((((struct o8_float *)0xC2AD2AC)->v)));
        *(float *)(((int)stk + 20)) = 0.0f;
        *(float *)(((int)stk + 24)) = ((((struct o0_float *)0xC0473FC)->v));
        *(float *)(((int)stk + 28)) = ((((struct o4_float *)0xC0473FC)->v));
        FUN_0c046658((((int)stk + 16) + 0x10), (((int)stk + 16) + 0x4), 0x1, 1.0f);
        nlLocate(0x1E, 0x28);
        *(float *)(((int)stk + 12)) = ((((struct o8_float *)0xC2AD2AC)->v));
        t53 = ((((struct o4_int *)0xC2AD2AC)->v));
        *(int *)((int)stk + 8) = t53;
        t55 = ((((struct o0_int *)0xC2AD2AC)->v));
        *(int *)((int)stk + 4) = t55;
        *(int *)((int)stk + 0) = 0xC0F3360;
        t57 = (nlPrintf(0xC0F3360, t55, t53));
    }
    return t57;
}

int FUN_0c0902e8(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int stk[10];
    register int t2;
    register int t5;
    register int t10;
    register int t24;
    register int t41;
    register int t45;
    register int t62;
    int R1000;

    R1000 = *(int *)((int)stk + 0);

    *(unsigned int *)(((int)stk + 36)) = a4;
    *(unsigned int *)(((int)stk + 32)) = a5;
    *(unsigned int *)(((int)stk + 28)) = a6;
    *(unsigned int *)(((int)stk + 24)) = a7;
    t2 = vmsfs_fcreate((*(int *)(((int)stk + 36))), (*(int *)(((int)stk + 32))), a8, (((int)stk + 0) + 0x4));
    *(unsigned int *)(((int)stk + 16)) = t2;
    if ((int)t2 < 0) {
        return t2;
    }
    *(unsigned char *)(((*(int *)(((int)stk + 4))) + 0x1)) = a9;
    *(unsigned int *)(((int)stk + 8)) = (*(int *)(((int)stk + 28)));
    t5 = *(int *)(((int)stk + 36));
    R1000 = ((t5 * 0x154) + 0xC2C8D2C);
    *(unsigned int *)((((t5 * 0x154) + 0xC2C8D2C) + 0x30)) = 0x1;
    t10 = *(int *)(((R1000) + 0x4));
    *(unsigned int *)(((R1000) + 0x34)) = (((*(int *)(((int)stk + 24))) << 1) + (*(int *)((0xC147870 + (((((t10 << 1) + t10) << 2) << 2) << 1)))));
    FUN_0c090e4c((*(int *)(((int)stk + 36))), 0x0, (((int)stk + 0) + 0xC), 0x0);
    vmsfs_lockbank((*(int *)(((int)stk + 36))), 0x1);
    *(unsigned int *)(((int)stk + 20)) = 0x0;
    for (;;) {
        if ((unsigned int)(*(int *)(((int)stk + 20))) >= (unsigned int)(*(int *)(((int)stk + 24)))) {
            *(unsigned int *)(((int)stk + 16)) = 0x0;
            vmsfs_fclose((*(int *)(((int)stk + 4))), 0x0);
            t24 = vmsfs_fopen((*(int *)(((int)stk + 36))), (*(int *)(((int)stk + 32))), (((int)stk + 0) + 0x4));
            *(unsigned int *)(((int)stk + 16)) = t24;
            if (!((int)t24 < 0)) {
                *(unsigned int *)(((int)stk + 8)) = (*(int *)(((int)stk + 28)));
                *(unsigned int *)(((int)stk + 20)) = 0x0;
                for (;;) {
                    if ((unsigned int)(*(int *)(((int)stk + 20))) >= (unsigned int)(*(int *)(((int)stk + 24)))) {
                        *(unsigned int *)(((int)stk + 16)) = 0x0;
                        vmsfs_fclose((*(int *)(((int)stk + 4))), 0x0);
                        vmsfs_lockbank((*(int *)(((int)stk + 36))), (*(int *)(((int)stk + 12))));
                        return (*(int *)(((int)stk + 16)));
                    }
                    t41 = vmsfs_fread1((*(int *)(((int)stk + 4))), (((((*(int *)(((int)stk + 36))) << 8) << 2) << 1) + 0xC2C97EC));
                    *(unsigned int *)(((int)stk + 16)) = t41;
                    if ((int)t41 < 0) {
                        break;
                    }
                    t45 = vmsfs_memcmp((((((*(int *)(((int)stk + 36))) << 8) << 2) << 1) + 0xC2C97EC), (*(int *)(((int)stk + 8))));
                    if (t45 != 0) {
                        *(unsigned int *)(((int)stk + 16)) = 0xFFFFFF10;
                        vmsfs_fclose((*(int *)(((int)stk + 4))), 0x0);
                        vmsfs_lockbank((*(int *)(((int)stk + 36))), (*(int *)(((int)stk + 12))));
                        return (*(int *)(((int)stk + 16)));
                    }
                    *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x200);
                    *(unsigned int *)(((int)stk + 20)) = ((*(int *)(((int)stk + 20))) + 0x1);
                }
                vmsfs_fclose((*(int *)(((int)stk + 4))), 0x0);
            }
            vmsfs_lockbank((*(int *)(((int)stk + 36))), (*(int *)(((int)stk + 12))));
            return (*(int *)(((int)stk + 16)));
        }
        t62 = vmsfs_fwrite1((*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 8))));
        *(unsigned int *)(((int)stk + 16)) = t62;
        if ((int)t62 < 0) {
            break;
        }
        *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x200);
        *(unsigned int *)(((int)stk + 20)) = ((*(int *)(((int)stk + 20))) + 0x1);
    }
    vmsfs_fclose((*(int *)(((int)stk + 4))), 0x0);
    vmsfs_lockbank((*(int *)(((int)stk + 36))), (*(int *)(((int)stk + 12))));
    return (*(int *)(((int)stk + 16)));
}

int kmiProcessVertex_11(int a4)
{
    int stk[4];
    register int t3;
    register int t4;
    register int t5;
    register int t12;
    register int t16;
    register int t21;
    register int t28;
    register int t32;
    register int t37;
    register int t44;
    register int t48;
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
    *(unsigned int *)(((t16 << 2) + 0xC300974)) = (*(int *)(((R1004) + 0x18)));
    t21 = kmiBGPlanePutWord(t3, (t16 + 0x1), (*(int *)(((R1004) + 0x1C))));
    *(unsigned int *)(((t21 << 2) + 0xC300974)) = (*(int *)(((R1008) + 0x4)));
    *(unsigned int *)((((t21 + 0x1) << 2) + 0xC300974)) = (*(int *)(((R1008) + 0x8)));
    *(unsigned int *)(((((t21 + 0x1) + 0x1) << 2) + 0xC300974)) = (*(int *)(((R1008) + 0xC)));
    t28 = R1008;
    R1000 = t28;
    t32 = kmiBGPlanePutColor2(t3, (((t21 + 0x1) + 0x1) + 0x1), (*(int *)(((R1000) + 0x10))), (*(int *)((t28 + 0x14))));
    *(unsigned int *)(((t32 << 2) + 0xC300974)) = (*(int *)(((R1008) + 0x18)));
    t37 = kmiBGPlanePutWord(t3, (t32 + 0x1), (*(int *)(((R1008) + 0x1C))));
    *(unsigned int *)(((t37 << 2) + 0xC300974)) = (*(int *)(((R1012) + 0x4)));
    *(unsigned int *)((((t37 + 0x1) << 2) + 0xC300974)) = (*(int *)(((R1012) + 0x8)));
    *(unsigned int *)(((((t37 + 0x1) + 0x1) << 2) + 0xC300974)) = (*(int *)(((R1012) + 0xC)));
    t44 = R1012;
    R1000 = t44;
    t48 = kmiBGPlanePutColor2(t3, (((t37 + 0x1) + 0x1) + 0x1), (*(int *)(((R1000) + 0x10))), (*(int *)((t44 + 0x14))));
    *(unsigned int *)(((t48 << 2) + 0xC300974)) = (*(int *)(((R1012) + 0x18)));
    (((struct o0_uint *)0xC300A6C)->v) = ((kmiBGPlanePutWord(t3, (t48 + 0x1), (*(int *)(((R1012) + 0x1C))))) << 2);
    t54 = kmiBGPlaneCountWords(t3);
    kmiBGPlaneSetPCW(t54, 0x0, 0x0);
    (((struct o14_uint *)0xC300A6C)->v) = (*(int *)(((R1004) + 0xC)));
    return 0x0;
}

int kmiWriteFBRegister(Stk29 s)
{
    int stk[39];
    register int t10;
    register int t11;
    register int t12;

    stk[2] = s.w[0];
    stk[3] = s.w[1];
    stk[4] = s.w[2];
    stk[5] = s.w[3];
    stk[6] = s.w[4];
    stk[7] = s.w[5];
    stk[8] = s.w[6];
    stk[9] = s.w[7];
    stk[10] = s.w[8];
    stk[11] = s.w[9];
    stk[12] = s.w[10];
    stk[13] = s.w[11];
    stk[14] = s.w[12];
    stk[15] = s.w[13];
    stk[16] = s.w[14];
    stk[17] = s.w[15];
    stk[18] = s.w[16];
    stk[19] = s.w[17];
    stk[20] = s.w[18];
    stk[21] = s.w[19];
    stk[22] = s.w[20];
    stk[23] = s.w[21];
    stk[24] = s.w[22];
    stk[25] = s.w[23];
    stk[26] = s.w[24];
    stk[27] = s.w[25];
    stk[28] = s.w[26];
    stk[29] = s.w[27];
    stk[30] = s.w[28];
    (((struct o0_uint *)0xC300B84)->v) = ((((((struct o58_int *)((((int)stk + 4) + 0x8)))->v)) & 0x7FF) | ((((((struct o54_int *)((((int)stk + 4) + 0x8)))->v)) & 0x7FF) << 16));
    (((struct o4_uint *)0xC300B84)->v) = ((((((struct o60_int *)((((int)stk + 4) + 0x8)))->v)) & 0x7FF) | ((((((struct o5C_int *)((((int)stk + 4) + 0x8)))->v)) & 0x7FF) << 16));
    (((struct o8_uint *)0xC300B84)->v) = (((((((struct o48_int *)((((int)stk + 4) + 0x8)))->v)) & 0xF) | (((((((struct o4C_int *)((((int)stk + 4) + 0x8)))->v)) & 0x1F) << 2) << 2)) | (((((((struct o50_int *)((((int)stk + 4) + 0x8)))->v)) & 0xF) << 8) << 1));
    (((struct o0_uint *)0xC300910)->v) = (*(int *)(((((int)stk + 4) + 0x8) + 0x0)));
    (((struct o4_uint *)0xC300910)->v) = (*(int *)(((((int)stk + 4) + 0x8) + 0x4)));
    t10 = *(int *)(((((int)stk + 4) + 0x8) + 0x8));
    t11 = *(int *)(((((int)stk + 4) + 0x8) + 0x0));
    t12 = *(int *)(((((int)stk + 4) + 0x8) + 0x4));
    if ((int)((((struct o14_int *)0xC300910)->v)) > 0) {
        (((struct oC_uint *)0xC300B84)->v) = (((t11 & 0x3FF) | ((((t12 - ((((struct o14_int *)0xC300910)->v))) & 0x3FF) << 8) << 2)) | ((((t10 & 0x3FF) << 16) << 2) << 2));
    } else {
        (((struct oC_uint *)0xC300B84)->v) = (((t11 & 0x3FF) | (((t12 & 0x3FF) << 8) << 2)) | ((((t10 & 0x3FF) << 16) << 2) << 2));
    }
    (((struct o0_uint *)0xC300BCC)->v) = ((unsigned char)(*(int *)(((((int)stk + 4) + 0x8) + 0x14))) | ((unsigned char)(*(int *)(((((int)stk + 4) + 0x8) + 0x18))) << 8));
    (((struct o4_uint *)0xC300BCC)->v) = (((unsigned short)(*(int *)(((((int)stk + 4) + 0x8) + 0x10))) | (((*(int *)(((((int)stk + 4) + 0x8) + 0xC))) & 0x1) << 16)) | ((((*(int *)(((((int)stk + 4) + 0x8) + 0x1C))) & 0x1) << 16) << 2));
    (((struct o10_uint *)0xC300B84)->v) = (((((struct o44_int *)((((int)stk + 4) + 0x8)))->v)) & 0x1FF);
    (((struct o18_uint *)0xC300B84)->v) = (((((*(int *)(((((int)stk + 4) + 0x8) + 0x30))) & 0x7) | ((((*(int *)(((((int)stk + 4) + 0x8) + 0x2C))) & 0x1) << 2) << 1)) | ((unsigned char)(*(int *)(((((int)stk + 4) + 0x8) + 0x34))) << 8)) | ((unsigned char)(*(int *)(((((int)stk + 4) + 0x8) + 0x38))) << 16));
    (((struct o14_uint *)0xC300B84)->v) = (((((((((*(int *)(((((int)stk + 4) + 0x8) + 0x20))) & 0x1) | (((*(int *)(((((int)stk + 4) + 0x8) + 0x28))) & 0x1) << 1)) | (((*(int *)(((((int)stk + 4) + 0x8) + 0x3C))) & 0x3) << 2)) | (((0x7 & ((((struct o40_int *)((((int)stk + 4) + 0x8)))->v))) << 2) << 2)) | ((unsigned char)(*(signed char *)(((((int)stk + 4) + 0x8) + 0x70))) << 8)) | ((0x1F & ((((struct o68_int *)((((int)stk + 4) + 0x8)))->v))) << 16)) | ((((((struct o64_int *)((((int)stk + 4) + 0x8)))->v)) & 0x1) << 22)) | ((((((struct o6C_int *)((((int)stk + 4) + 0x8)))->v)) & 0x1) << 23));
    return 0x6C;
}

int nlCreateVertexBuffer_clx22(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = (((struct o4_int *)0xC2BB49C)->v);
    t1 = (((((a4 + a5) + a6) + a7) + t0) + ((((a4 + a5) + a6) + a7) + t0));
    if (((((struct o0_int *)0xC2BB49C)->v)) == 3) {
    } else {
        t2 = (((struct o34_int *)0xC2BB45C)->v);
        t1 = (((a5 + a6) + a7) + t0);
        if (t2 == 32) {
        } else {
            t1 = (((a4 + a5) + a7) + t0);
            if (t2 == 34) {
            } else {
                if (((((struct o34_int *)0xC2BB45C)->v)) == 36) {
                    t2 = (((a4 + a5) + a6) + a7);
                }
                t1 = t2;
            }
        }
    }
    (((struct o0_uint *)0xC2BB45C)->v) = t1;
    u0 = *(float *)0xC06FFAC;
    if (((((struct o0_int *)0xC2BB49C)->v)) == 3) {
        t2 = (int)((unsigned int)((int)((unsigned int)t1 + (unsigned int)0x0)) + ((((int)0x0 > (int)t1)) ? 1u : 0u));
        (((struct o4_float *)0xC2BB45C)->v) = (((float)a4 * u0) / (float)(t2 >> 1));
        (((struct o8_float *)0xC2BB45C)->v) = (((float)a5 * u0) / (float)(t2 >> 1));
        (((struct oC_float *)0xC2BB45C)->v) = (((float)a6 * u0) / (float)(t2 >> 1));
        (((struct o10_float *)0xC2BB45C)->v) = (((float)a7 * u0) / (float)(t2 >> 1));
        (((struct o14_float *)0xC2BB45C)->v) = (((float)t0 * u0) / (float)(t2 >> 1));
    } else {
        t2 = (((struct o34_int *)0xC2BB45C)->v);
        if (t2 == 32) {
            (((struct o4_float *)0xC2BB45C)->v) = 0.0f;
            (((struct o8_float *)0xC2BB45C)->v) = (((float)a5 * u0) / (float)t1);
            (((struct oC_float *)0xC2BB45C)->v) = (((float)a6 * u0) / (float)t1);
            (((struct o10_float *)0xC2BB45C)->v) = (((float)a7 * u0) / (float)t1);
            (((struct o14_float *)0xC2BB45C)->v) = (((float)t0 * u0) / (float)t1);
        } else {
            if (t2 == 34) {
                (((struct o4_float *)0xC2BB45C)->v) = (((float)a4 * u0) / (float)t1);
                (((struct o8_float *)0xC2BB45C)->v) = (((float)a5 * u0) / (float)t1);
                (((struct oC_float *)0xC2BB45C)->v) = 0.0f;
                (((struct o10_float *)0xC2BB45C)->v) = (((float)a7 * u0) / (float)t1);
                (((struct o14_float *)0xC2BB45C)->v) = (((float)t0 * u0) / (float)t1);
            } else {
                if (((((struct o34_int *)0xC2BB45C)->v)) == 36) {
                    (((struct o4_float *)0xC2BB45C)->v) = (((float)a4 * u0) / (float)t1);
                    (((struct o8_float *)0xC2BB45C)->v) = (((float)a5 * u0) / (float)t1);
                    (((struct oC_float *)0xC2BB45C)->v) = (((float)a6 * u0) / (float)t1);
                    (((struct o10_float *)0xC2BB45C)->v) = (((float)a7 * u0) / (float)t1);
                    (((struct o14_float *)0xC2BB45C)->v) = 0.0f;
                }
            }
        }
    }
    t0 = kmSetSystemConfiguration(0xC2BB434);
    if (t0 != 0) {
        _builtin_trapa(65);
    }
    *(unsigned int *)(((*(int *)0xC2BBACC) + 0x0)) = 0x800000;
    if ((*(int *)0xC2BB528) == 0) {
        nlLoadDummyTexture();
        *(unsigned int *)0xC2BB528 = 0x1;
    }
    return t0;
}

int mwlRnaStartTrans(int a4, int a5, int a6, int a7)
{
    int stk[12];
    register int t1;
    register int t2;
    register int t3;
    register int t5;
    register int t6;
    register int t18;
    register int t20;
    register int t22;
    register int t23;
    register int t29;
    register int t42;
    register int t44;
    register int t46;
    register int t47;
    register int t48;
    register int t50;
    register int t51;
    register int t52;
    register int t53;
    register int t70;
    register int t71;
    register int t72;
    register int t74;
    register int t76;
    register int t77;
    register int t36;
    register int t38;
    register int t39;
    register int t78;
    register int t64;
    int R1000;
    int R1004;
    int R1008;
    int R1012;
    int R1016;
    int R1020;
    int R1024;
    int R1028;

    R1000 = *(int *)((int)stk + 0);
    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);
    R1016 = *(int *)((int)stk + 16);
    R1020 = *(int *)((int)stk + 20);
    R1024 = *(int *)((int)stk + 24);
    R1028 = *(int *)((int)stk + 28);

    t1 = (int)((int)0x20 / (int)(*(int *)((a4 + 0x8))));
    t2 = *(int *)((a4 + 0x34));
    t3 = *(int *)((a4 + 0x28));
    t5 = (int)((int)(t3 - t2) / (int)((t1 << 2) << 1));
    t6 = 0x0;
    for (;;) {
        if ((int)t6 >= (int)(unsigned char)(*(signed char *)((a4 + 0x3)))) {
            break;
        }
        if ((*(int *)((((t6 << 2) + (a4 + 0x10)) + 0x0))) == 0) {
            R1000 = 0xC171760;
            FUN_0c16ada2((t3 - t2), a5, a6, a7, 0xC171760);
        }
        t18 = *(int *)((((t6 << 2) + (a4 + 0x10)) + 0x0));
        R1004 = t18;
        t20 = *(int *)((a4 + 0x8));
        t22 = *(int *)(((*(int *)((t18 + 0x0))) + 0x18));
        t23 = ((t5 * ((t1 << 2) << 1)) * t20);
        if ((int)((t5 * ((t1 << 2) << 1)) * t20) < 0) {
            t23 = (((t5 * ((t1 << 2) << 1)) * t20) + 0x7);
        }
        t29 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))(t22))((R1004), 0x1, (((t23 >> 1) >> 1) >> 1), (((t6 << 2) << 1) + (a4 + 0x18)), R1004, R1008, R1012, R1016, R1020, R1024, R1028);
        t6 = (t6 + 0x1);
    }
    if ((unsigned char)(*(signed char *)((a4 + 0x3))) == 1) {
        t36 = (*(int *)((a4 + 0x1C)));
        t38 = a6;
        t39 = a7;
    } else {
        R1012 = (a4 + 0x18);
        t38 = *(int *)(((a4 + 0x18) + 0x4));
        R1008 = ((a4 + 0x18) + 0x8);
        t39 = *(int *)((((a4 + 0x18) + 0x8) + 0x4));
        t36 = t39;
        if ((int)t38 < (int)t39) {
            t36 = t38;
        }
    }
    t42 = (int)((int)t36 / (int)(*(int *)((a4 + 0x8))));
    t44 = ((t42 << 2) << 1);
    if ((int)((t42 << 2) << 1) >= (int)(t5 * ((t1 << 2) << 1))) {
        t44 = (t5 * ((t1 << 2) << 1));
    }
    t46 = *(int *)((a4 + 0x28));
    t47 = *(int *)((a4 + 0x2C));
    t48 = t44;
    if ((int)t44 >= (int)(t46 - t47)) {
        t48 = (t46 - t47);
    }
    t50 = (int)((int)t48 / (int)((t1 << 2) << 1));
    if ((int)(t50 * ((t1 << 2) << 1)) <= 0) {
        t51 = (t50 * ((t1 << 2) << 1));
        t52 = 0x0;
        t53 = 0x0;
        for (;;) {
            if ((int)t52 >= (int)(unsigned char)(*(signed char *)((a4 + 0x3)))) {
                break;
            }
            t53 = t52;
            t53 = (t53 << 2);
            if ((*(int *)((((a4 + 0x10) + t53) + 0x0))) == 0) {
                R1000 = 0xC171760;
                FUN_0c16ada2(t48, (t46 - t47), t38, t39, 0xC171760);
            } else {
                t64 = t39;
            }
            t51 = a4;
            t51 = (t51 + 0x10);
            t51 = (t51 + t53);
            t51 = (*(int *)((t51 + 0x0)));
            t70 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t51 + 0x0))) + 0x1C)))))(t51, 0x1, (((t52 << 2) << 1) + (a4 + 0x18)), t64, R1004, R1008, R1012, R1016, R1020, R1024, R1028);
            t52 = (t52 + 0x1);
        }
        t78 = 0x0;
    } else {
        t71 = 0xC305160;
        t72 = 0x0;
        for (;;) {
            if ((int)t72 >= (int)(unsigned char)(*(signed char *)((a4 + 0x3)))) {
                break;
            }
            t74 = *(int *)((a4 + 0x2C));
            t76 = *(int *)(((((t72 << 2) << 1) + (a4 + 0x18)) + 0x0));
            (((struct o0_uint *)0xC305160)->v) = 0x0;
            R1000 = (t50 * ((t1 << 2) << 1));
            t71 = a4;
            t77 = mwlRnaStartCopy(t71, t72, t74, t76, (t50 * ((t1 << 2) << 1)));
            t72 = (t72 + 0x1);
            (((struct o4_uint *)0xC305160)->v) = 0x0;
            t71 = t77;
        }
        *(unsigned int *)((a4 + 0x3C)) = t71;
        t78 = t71;
    }
    return t78;
}

int kmfGetInternalSystemMetrics(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = 0x0;
    t1 = 0x4;
    t2 = 0x0;
    t3 = 0x0;
    for (;;) {
        *(unsigned int *)(((a4 + (((((0x1 - t2) << 1) + (0x1 - t2)) << 2) << 1)) + 0x0)) = (*(int *)((t0 + 0xC300D54)));
        *(unsigned int *)(((a4 + (((((0x1 - t2) << 1) + (0x1 - t2)) << 2) << 1)) + 0x4)) = (*(int *)((t0 + 0xC300D48)));
        *(unsigned int *)(((a4 + (((((0x1 - t2) << 1) + (0x1 - t2)) << 2) << 1)) + 0x8)) = (*(int *)((t0 + 0xC300D40)));
        *(unsigned int *)(((a4 + (((((0x1 - t2) << 1) + (0x1 - t2)) << 2) << 1)) + 0xC)) = (*(int *)((t0 + 0xC300D58)));
        *(unsigned int *)(((a4 + (((((0x1 - t2) << 1) + (0x1 - t2)) << 2) << 1)) + 0x10)) = (*(int *)((t0 + 0xC300D4C)));
        *(unsigned int *)((((((((0x1 - t2) << 1) + (0x1 - t2)) << 2) << 1) + a4) + 0x14)) = (*(int *)(((0xC306E10 + t3) + 0x0)));
        t2 = (t2 + 0x1);
        t4 = *(int *)((t3 + 0xC300AE8));
        t3 = (t3 + 0x4);
        *(unsigned int *)((((a4 + 0x38) + t1) + 0x0)) = t4;
        t1 = (t1 - 4);
        t0 = (t0 + 0x20);
        if ((int)t2 >= (int)0x2) {
            break;
        }
    }
    if (((((struct o0_int *)0xC300C14)->v)) == 0) {
        *(unsigned int *)((a4 + 0x30)) = (*(int *)((((((((struct o18_int *)0xC300C14)->v)) & 0x1) << 2) + 0xC300C04)));
        *(unsigned int *)((a4 + 0x34)) = (*(int *)(((((-(((((struct o18_int *)0xC300C14)->v)) & 0x1)) + 0x1) << 2) + 0xC300C04)));
    } else {
        *(unsigned int *)((a4 + 0x34)) = (*(int *)((0xC300C04 + ((((((struct o18_int *)0xC300C14)->v)) & 0x1) << 2))));
        *(unsigned int *)((a4 + 0x30)) = (*(int *)(((((-(((((struct o18_int *)0xC300C14)->v)) & 0x1)) + 0x1) << 2) + 0xC300C04)));
    }
    (((struct o40_uint *)(a4))->v) = ((((struct o0_int *)0xC300B84)->v));
    (((struct o44_uint *)(a4))->v) = ((((struct o4_int *)0xC300B84)->v));
    (((struct o48_uint *)(a4))->v) = ((((struct o0_int *)0xC306DF4)->v));
    (((struct o4C_uint *)(a4))->v) = ((((struct o4_int *)0xC306DF4)->v));
    (((struct o50_uint *)(a4))->v) = ((((struct o14_int *)0xC306DF4)->v));
    (((struct o54_uint *)(a4))->v) = ((((struct o18_int *)0xC306DF4)->v));
    t0 = 0x0;
    t1 = 0x0;
    for (;;) {
        *(unsigned int *)((((a4 + 0x58) + t0) + 0x0)) = (*(int *)((t1 + 0xC300C50)));
        *(unsigned int *)((((a4 + 0x58) + t0) + 0x14)) = (*(int *)((t1 + 0xC300C54)));
        *(unsigned int *)((((0x80 + a4) + t0) + 0x0)) = (*(int *)((t0 + 0xC300D94)));
        t2 = *(int *)(((0xC306E18 + t0) + 0x0));
        t3 = ((0x94 + a4) + t0);
        t0 = (t0 + 0x4);
        *(unsigned int *)((t3 + 0x0)) = t2;
        t1 = (t1 + 0x10);
        if ((unsigned int)t0 >= (unsigned int)0x14) {
            break;
        }
    }
    (((struct oA8_uint *)(a4))->v) = (*(int *)0xC306E38);
    (((struct oAC_uint *)(a4))->v) = ((((struct o3C_int *)0xC306DF4)->v));
    return 0x0;
}

int FUN_0c031d0c(int a4, int a5, int a6, int a7)
{
    int stk[3];

    register int R1;
    register int R2;
    register int R3;
    register float F2;
    register float F3;
    register int T_;
    register int FPUL_;
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
    v0_0 = a4;
    v0_4 = a5;
    v0_5 = a6;
    v0_6 = a7;
    *(unsigned int *)(((int)stk + 4)) = v0_0;
    *(unsigned int *)(((int)stk + 8)) = v0_4;
    *(unsigned int *)(((int)stk + 0)) = v0_5;
    v0_4 = *(int *)(((int)stk + 8));
    v0_1 = (v0_6);
    v0_2 = (0x0);
    v0_3 = ((v0_4 + v0_6));
    v0_0 = (0x0);
    v0_5 = (v0_4);
    if (((int)(*(int *)(((int)stk + 4))) < 0)) goto L_C031D4A;
    v0_7 = (((int)((float)v0_1 * 1.25f) & 0xFFFFFFF0));
    FPUL_ = ((int)((float)v0_1 * 1.25f));
    L_C031D4C:;
    if (((int)(*(int *)(((int)stk + 0))) >= (int)v0_7)) goto L_C031D68;
    v0_4 = nlMalloc(v0_7);
    v0_0 = (v0_4);
    if ((v0_4 != 0)) goto L_C031D62;
    v0_11 = (0xFFFFFFFF);
    L_C031E72:;
    return v0_11;
    L_C031D62:;
    v0_5 = ((v0_0 + v0_7));
    L_C031D6C:;
    v0_4 = (v0_1);
    L_C031D86:;
    v0_7 = v0_4 != 0;
    v0_4 = ((v0_4 - 1));
    if (v0_7) goto L_C031D80;
    v0_8 = (0x8);
    v0_7 = (0x80);
    v0_9 = (0x3);
    if (((int)(*(int *)(((int)stk + 4))) < 0)) goto L_C031DFA;
    v0_6 = (*(signed char *)((v0_5 + 0x0)));
    v0_5 = ((v0_5 + 0x1));
    v0_6 = v0_6;
    L_C031DEE:;
    *(unsigned int *)(((int)stk + 0)) = v0_3;
    v0_3 = ((v0_3 + 0x1));
    if (!(((int)v0_1 > 0))) goto L_C031E62;
    *(unsigned char *)(((*(int *)(((int)stk + 0))) + 0x0)) = v0_2;
    v0_10 = (v0_2);
    goto L_C031DA4;
    L_C031E62:;
    if ((v0_0 == 0)) goto L_C031E6C;
    nlFree(v0_0, v0_4, v0_5, v0_6);
    L_C031E6C:;
    v0_11 = ((v0_3 - (*(int *)(((int)stk + 8)))));
    goto L_C031E72;
    L_C031DA4:;
    *(unsigned char *)(((int)stk + 4)) = (*(signed char *)((v0_5 + 0x0)));
    v0_5 = ((v0_5 + 0x1));
    if (((unsigned char)v0_6 != 0)) goto L_C031DB2;
    v0_4 = (0x1);
    L_C031DC8:;
    if ((v0_4 == 0)) goto L_C031DDA;
    v0_6 = *(int *)(((int)stk + 0));
    *(unsigned char *)((v0_6 + 0x0)) = ((*(signed char *)((v0_6 + 0x0))) | ((int)v0_4 << (int)v0_10));
    v0_4 = (((int)v0_4 << (int)v0_10));
    L_C031DDE:;
    v0_11 = (int)(v0_1 - 1) <= 0;
    v0_1 = ((v0_1 - 1));
    v0_6 = ((*(signed char *)(((int)stk + 4))));
    if (v0_11) goto L_C031DEE;
    v0_11 = (int)(v0_10 + 0x2) < (int)v0_8;
    v0_10 = ((v0_10 + 0x2));
    if (v0_11) goto L_C031DA4;
    goto L_C031DEE;
    L_C031DDA:;
    *(unsigned char *)((v0_3 + 0x0)) = v0_6;
    v0_3 = ((v0_3 + 0x1));
    goto L_C031DDE;
    L_C031DB2:;
    v0_4 = ((unsigned char)v0_6);
    if (((unsigned char)v0_6 != v0_7)) goto L_C031DBC;
    v0_4 = (0x2);
    goto L_C031DC8;
    L_C031DBC:;
    if ((v0_4 != 0xFF)) goto L_C031DC6;
    v0_4 = (v0_9);
    goto L_C031DC8;
    L_C031DC6:;
    v0_4 = (v0_2);
    goto L_C031DC8;
    L_C031DFA:;
    v0_10 = ((((*(int *)(((int)stk + 0))) << 2) + (*(int *)(((int)stk + 8)))));
    L_C031E5E:;
    if (((int)v0_1 > 0)) goto L_C031E04;
    goto L_C031E62;
    L_C031E04:;
    *(unsigned char *)(((int)stk + 0)) = (*(signed char *)((v0_5 + 0x0)));
    v0_11 = (int)(v0_1 - 1) <= 0;
    v0_1 = ((v0_1 - 1));
    v0_5 = ((v0_5 + 0x1));
    if (v0_11) goto L_C031E62;
    v0_6 = (v0_2);
    L_C031E10:;
    v0_11 = *(signed char *)(((int)stk + 0));
    v0_4 = (((int)(((int)v0_9 << (int)v0_6) & (unsigned char)v0_11) << (int)(-v0_6)));
    if ((((int)(((int)v0_9 << (int)v0_6) & (unsigned char)v0_11) << (int)(-v0_6)) != 0)) goto L_C031E32;
    *(unsigned char *)((v0_3 + 0x0)) = (*(signed char *)((v0_5 + 0x0)));
    v0_11 = (int)(v0_1 - 1) <= 0;
    v0_1 = ((v0_1 - 1));
    v0_3 = ((v0_3 + 0x1));
    v0_5 = ((v0_5 + 0x1));
    if (v0_11) goto L_C031E5E;
    L_C031E54:;
    if (((int)v0_3 > (int)v0_10)) goto L_C031E5E;
    v0_11 = (int)(v0_6 + 0x2) < (int)v0_8;
    v0_6 = ((v0_6 + 0x2));
    if (v0_11) goto L_C031E10;
    goto L_C031E5E;
    L_C031E32:;
    v0_11 = (v0_4);
    if ((v0_4 != 1)) goto L_C031E3C;
    *(unsigned char *)((v0_3 + 0x0)) = v0_2;
    L_C031E42:;
    v0_3 = ((v0_3 + 0x1));
    goto L_C031E54;
    L_C031E3C:;
    if ((v0_11 != 2)) goto L_C031E48;
    *(unsigned char *)((v0_3 + 0x0)) = v0_7;
    goto L_C031E42;
    L_C031E48:;
    if ((v0_4 != 3)) goto L_C031E54;
    *(unsigned char *)((v0_3 + 0x0)) = 0xFF;
    v0_3 = ((v0_3 + 0x1));
    goto L_C031E54;
    L_C031D80:;
    *(unsigned char *)(((v0_5 - 0x1) + 0x0)) = (*(signed char *)(((v0_3 - 1) + 0x0)));
    v0_3 = ((v0_3 - 1));
    v0_5 = ((v0_5 - 0x1));
    goto L_C031D86;
    L_C031D68:;
    v0_5 = ((v0_5 + (*(int *)(((int)stk + 0)))));
    goto L_C031D6C;
    L_C031D4A:;
    v0_7 = (v0_1);
    goto L_C031D4C;
}

int FUN_0c04b592(int a4, int a5, int a6)
{
    int stk[30];

    register int R1;
    register int R2;
    register int R3;
    register float F0;
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
    v0_6 = a5;
    v0_7 = a6;
    v0_2 = *(int *)0xC2ADEC4;
    v0_0 = (0xC5C3B58);
    v0_1 = (0xC075C60);
    v0_1 = (v0_2);
    if ((v0_2 == 111)) goto L_C04B5B8;
    if ((v0_1 != 112)) goto L_C04B5BC;
    L_C04B5B8:;
    v0_1 = (v0_0);
    L_C04B5EC:;
    v0_6 = ((FUN_0c075c60(v0_1)));
    L_C04B6B8:;
    v0_0 = *(int *)0xC2ADEC4;
    v0_1 = (v0_0);
    if (((int)v0_0 < (int)0xBE)) goto L_C04B6F8;
    v0_6 = (0xD3);
    if (((int)v0_1 > (int)0xD3)) goto L_C04B6F8;
    FUN_0c075c60(0xC5C4BA0);
    FUN_0c075c60(0xC5C4FE0);
    FUN_0c075c60(0xC5C5420);
    FUN_0c075c60(0xC5C5878);
    FUN_0c075c60(0xC5C60E0);
    FUN_0c075c60(0xC5C6920);
    FUN_0c075c60(0xC5C6D90);
    v0_6 = ((FUN_0c075c60(0xC5C71D0)));
    L_C04B6F8:;
    return v0_6;
    L_C04B5BC:;
    v0_2 = (0xC5F30C8);
    v0_3 = (0xC5C40C0);
    if ((v0_1 != 118)) goto L_C04B5D4;
    FUN_0c075c60(v0_3);
    v0_6 = ((nlObjPutUseViewMatrix(v0_2)));
    goto L_C04B6B8;
    L_C04B5D4:;
    v0_4 = (0xC5C32B0);
    if ((v0_1 != 124)) goto L_C04B5E2;
    v0_1 = (v0_4);
    goto L_C04B5EC;
    L_C04B5E2:;
    v0_5 = (0xC5C4450);
    if ((v0_1 != 0x94)) goto L_C04B5F4;
    v0_1 = (v0_5);
    goto L_C04B5EC;
    L_C04B5F4:;
    *(unsigned int *)((((int)stk + 0) + 0x0)) = v0_1;
    v0_1 = (0x1);
    v0_6 = (0xC2ADED0);
    v0_7 = (((int)stk + 0));
    L_C04B666:;
    if (((*(int *)((v0_6 + 0x0))) != -1)) goto L_C04B65C;
    *(unsigned int *)((v0_7 + (v0_1 << 2))) = 0xFFFFFFFF;
    v0_7 = (v0_7);
    L_C04B6B2:;
    v0_1 = *(int *)((v0_7 + 0x0));
    v0_6 = (v0_1);
    if ((v0_1 != -1)) goto L_C04B678;
    goto L_C04B6B8;
    L_C04B678:;
    if ((v0_6 == 74)) goto L_C04B694;
    if ((v0_6 == 108)) goto L_C04B698;
    if ((v0_6 == 118)) goto L_C04B69C;
    if ((v0_6 == 0x87)) goto L_C04B6A6;
    if (!((v0_6 == 0x97))) goto L_C04B6B0;
    v0_1 = (v0_5);
    goto L_C04B6AC;
    L_C04B6B0:;
    v0_7 = ((v0_7 + 0x4));
    goto L_C04B6B2;
    L_C04B6AC:;
    FUN_0c075c60(v0_1);
    goto L_C04B6B0;
    L_C04B6A6:;
    v0_1 = (v0_3);
    goto L_C04B6AC;
    L_C04B69C:;
    nlObjPutUseViewMatrix(v0_2);
    goto L_C04B6B0;
    L_C04B698:;
    v0_1 = (v0_0);
    goto L_C04B6AC;
    L_C04B694:;
    v0_1 = (v0_4);
    goto L_C04B6AC;
    L_C04B65C:;
    *(unsigned int *)((v0_7 + (v0_1 << 2))) = (*(int *)((v0_6 + 0x0)));
    v0_1 = ((v0_1 + 0x1));
    v0_6 = ((v0_6 + 0x4));
    goto L_C04B666;
}

int vmsfs_connect(int a4)
{
    register int t0;
    register int t1;

    *(unsigned int *)((((a4 * 0x154) + 0xC2C8D2C) + 0x1C)) = ((a4 * 0x4C) + 0xC2CD7EC);
    *(unsigned int *)((((a4 * 0x154) + 0xC2C8D2C) + 0x30)) = 0x1;
    t0 = *(int *)((((a4 * 0x154) + 0xC2C8D2C) + 0x4));
    *(unsigned int *)((((a4 * 0x154) + 0xC2C8D2C) + 0x34)) = (*(int *)(((((((t0 << 1) + t0) << 2) << 2) << 1) + 0xC147888)));
    t0 = *(int *)((((a4 * 0x154) + 0xC2C8D2C) + 0x34));
    t1 = *(int *)((((a4 * 0x154) + 0xC2C8D2C) + 0x30));
    *(unsigned int *)((((a4 * 0x154) + 0xC2C8D2C) + 0x30)) = (t1 + 0x1);
    vmsfs_c_progress(a4, (*(int *)(((((((a4 << 2) << 2) << 2) << 1) + 0xC2C6914) + 0x8))), ((t1 + 0x1) - 1), t0);
    t0 = vmsfs_mediainfo_retry(a4, (*(int *)((((a4 * 0x154) + 0xC2C8D2C) + 0x1C))));
    if ((int)t0 < 0) {
        *(unsigned char *)((((a4 * 0x154) + 0xC2C8D2C) + 0x9)) = 0x0;
        *(unsigned char *)((((a4 * 0x154) + 0xC2C8D2C) + 0x8)) = 0x0;
        return 0xFFFFFF01;
    }
    t0 = FUN_0c08fe18(((a4 * 0x154) + 0xC2C8D2C));
    if ((int)t0 < 0) {
        return 0xFFFFFF83;
    }
    *(unsigned int *)(((*(int *)((((a4 * 0x154) + 0xC2C8D2C) + 0x1C))) + 0x30)) = (*(int *)(((*(int *)((((a4 * 0x154) + 0xC2C8D2C) + 0x1C))) + 0x1C)));
    t0 = vmsio_block_read(a4, 0x0, 0xC2CEE98);
    if ((int)t0 < 0) {
        return 0xFFFFFF01;
    }
    *(unsigned char *)((((a4 * 0x154) + 0xC2C8D2C) + 0x9)) = 0x1;
    *(unsigned char *)((((a4 * 0x154) + 0xC2C8D2C) + 0xA)) = 0x0;
    *(unsigned char *)((((a4 * 0x154) + 0xC2C8D2C) + 0xB)) = 0x0;
    *(unsigned char *)((((a4 * 0x154) + 0xC2C8D2C) + 0xC)) = 0x0;
    t0 = *(int *)((((a4 * 0x154) + 0xC2C8D2C) + 0x4));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return 0xFFFFFF83;
                }
                return 0x7A;
            }
            return 0x41;
        }
        return 0x21;
    }
    return 0xF;
}

float nlLUDecomp(int a4, int a5, float f4, float f5)
{
    int stk[7];
    register int t2;
    register int t5;
    register int t8;
    register int t9;
    register float u12;
    register float u13;
    register int t18;
    register float u20;
    register int t6;
    register int t7;
    register int t10;
    register float u11;
    register int t14;
    register int t15;
    register int t16;
    register int t17;
    register float u19;

    *(unsigned int *)(((int)stk + 8)) = a4;
    t2 = a4;
    if (a4 == 0) {
        t2 = nlGetMatrix(0x0);
        t5 = t2;
    } else {
        t8 = a5;
    }
    t9 = 0x0;
    u12 = f4;
    u13 = f5;
    for (;;) {
        if ((int)t9 >= (int)0x4) {
            t7 = a5;
            t7 = (t7 + 0x4);
            t9 = 0x0;
            *(unsigned int *)(((int)stk + 4)) = t7;
            t18 = 0x0;
            u20 = 1.0f;
            for (;;) {
                if ((int)t9 >= (int)0x4) {
                    break;
                }
                t18 = t9;
                t10 = t9;
                u13 = -1.0f;
                t10 = (t10 << 2);
                if ((int)t18 < (int)0x4) {
                    for (;;) {
                        t5 = t18;
                        t17 = (*(signed char *)((a5 + t5)));
                        t7 = t2;
                        t6 = ((int)stk + 0);
                        t5 = t17;
                        t5 = (t5 << 2);
                        t5 = (t5 << 2);
                        t5 = (t5 + t7);
                        t7 = t17;
                        t6 = (t6 + 0xC);
                        u11 = (*(float *)((t10 + t5)));
                        t7 = (t7 << 2);
                        t7 = (t7 + t6);
                        u11 = _builtin_fabsf(u11);
                        u19 = (*(float *)((t7 + 0x0)));
                        u12 = u11;
                        u12 = (u12 * u19);
                        if (u12 > u13) {
                            t8 = t18;
                            u13 = u12;
                        }
                        t18 = (t18 + 0x1);
                        if ((int)t18 >= (int)0x4) {
                            break;
                        }
                    }
                }
                t16 = t8;
                t16 = (t16 + a5);
                t18 = (*(signed char *)((t16 + 0x0)));
                if (t8 != t9) {
                    t17 = t9;
                    t17 = (t17 + a5);
                    t6 = (*(signed char *)((t17 + 0x0)));
                    u20 = (-u20);
                    *(unsigned char *)((t16 + 0x0)) = t6;
                    *(unsigned char *)((t17 + 0x0)) = t18;
                }
                t15 = t18;
                t15 = (t15 << 2);
                t5 = t2;
                t15 = (t15 << 2);
                t5 = (t5 + t15);
                u11 = 0.0f;
                u12 = (*(float *)((t10 + t5)));
                u20 = (u20 * u12);
                if (u12 != u11) {
                    t17 = t9;
                    t17 = (t17 + 0x1);
                    t14 = t17;
                    t14 = (t14 + a5);
                    for (;;) {
                        t6 = (*(int *)(((int)stk + 4)));
                        if ((unsigned int)t14 >= (unsigned int)t6) {
                            break;
                        }
                        t18 = (*(signed char *)((t14 + 0x0)));
                        t14 = (t14 + 0x1);
                        t5 = t2;
                        t8 = t17;
                        t18 = (t18 << 2);
                        t18 = (t18 << 2);
                        t5 = (t5 + t18);
                        u13 = (*(float *)((t10 + t5)));
                        u13 = (u13 / u12);
                        *(float *)((t10 + t5)) = u13;
                        if ((int)t8 < (int)0x4) {
                            for (;;) {
                                t16 = t8;
                                t16 = (t16 << 2);
                                u19 = u13;
                                t5 = t2;
                                *(unsigned int *)(((int)stk + 0)) = t5;
                                t5 = (t5 + t18);
                                t7 = (*(int *)(((int)stk + 0)));
                                t8 = (t8 + 0x1);
                                t7 = (t7 + t15);
                                t7 = (t7 + t16);
                                u11 = (*(float *)((t7 + 0x0)));
                                u19 = (u19 * u11);
                                u11 = (*(float *)((t16 + t5)));
                                u11 = (u11 - u19);
                                *(float *)((t16 + t5)) = u11;
                                if ((int)t8 >= (int)0x4) {
                                    break;
                                }
                            }
                        }
                    }
                    t9 = (t9 + 0x1);
                    continue;
                }
                return u20;
            }
            t7 = (*(int *)(((int)stk + 8)));
            if (t7 == 0) {
                t7 = 0xC072B60;
                t5 = (FUN_0c072b60(t2));
                return u20;
            }
            return u20;
        }
        t5 = t9;
        t10 = t5;
        t10 = (t10 << 2);
        t8 = 0x0;
        *(unsigned char *)((a5 + t5)) = t5;
        u12 = 0.0f;
        t10 = (t10 << 2);
        for (;;) {
            if ((int)t8 >= (int)0x4) {
                break;
            }
            t7 = t8;
            t5 = t2;
            t7 = (t7 << 2);
            t5 = (t5 + t10);
            u11 = (*(float *)((t7 + t5)));
            u11 = _builtin_fabsf(u11);
            u13 = u11;
            t8 = (t8 + 0x1);
            if (u13 > u12) {
                u12 = u13;
            }
        }
        u11 = 0.0f;
        if (u12 == u11) {
            break;
        }
        u11 = 1.0f;
        u11 = (u11 / u12);
        t6 = ((int)stk + 0);
        t7 = t9;
        t7 = (t7 << 2);
        t6 = (t6 + 0xC);
        t7 = (t7 + t6);
        t9 = (t9 + 0x1);
        *(float *)((t7 + 0x0)) = u11;
    }
    return 0.0f;
}

int FUN_0c07de10(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(int *)0xC2BB3E8;
    t1 = 0x1;
    if ((*(int *)(((((a5 << 2) << 1) + t0) + 0x0))) == 0) {
    } else {
        t2 = *(int *)(((((a5 << 2) << 1) + t0) + 0x4));
        (((struct o6C_uint *)((*(int *)0xC2BF728)))->v) = ((*(int *)0xC2BF120) + (t2 * 0x3C));
        *(unsigned int *)(((*(int *)0xC2BF728) + 0x0)) = 0x600608;
        *(unsigned int *)(((*(int *)0xC2BF728) + 0x8)) = (*(int *)((a4 + 0x0)));
        *(unsigned int *)(((*(int *)0xC2BF728) + 0xC)) = (*(int *)((a4 + 0x4)));
        *(unsigned int *)(((*(int *)0xC2BF728) + 0x20)) = (*(int *)((a4 + 0x8)));
        (((struct o44_uint *)((*(int *)0xC2BF728)))->v) = (*(int *)((a4 + 0xC)));
        (((struct o40_uint *)((*(int *)0xC2BF728)))->v) = (*(int *)((a4 + 0x10)));
        t0 = *(int *)((((*(int *)0xC2BF120) + (t2 * 0x3C)) + 0x34));
        if (((((int)t0 >> 27) & 0x7) == 5) || ((((int)t0 >> 27) & 0x7) == 6)) {
            t0 = *(int *)0xC2BF728;
            *(unsigned int *)((t0 + 0x0)) = ((*(int *)((t0 + 0x0))) | 0x80000);
            if ((*(int *)0xC147340) != 0) {
                (((struct o68_uint *)((*(int *)0xC2BF728)))->v) = ((((struct o0_int *)0xC2C4138)->v));
            } else {
                (((struct o68_uint *)((*(int *)0xC2BF728)))->v) = 0x0;
                if ((int)((((struct o0_int *)0xC2C4138)->v)) < (int)((((struct o0_short *)0xC2C4DA4)->v))) {
                    t0 = (((struct o0_int *)0xC2C4138)->v);
                    t2 = (((struct o14_int *)0xC2C4DA4)->v);
                    if ((*(short *)(((t2 + ((t0 << 2) << 1)) + 0x4))) != 0) {
                        (((struct o68_uint *)((*(int *)0xC2BF728)))->v) = (*(short *)(((t2 + ((t0 << 2) << 1)) + 0x0)));
                    }
                }
            }
        }
        kmProcessVertexRenderState((*(int *)0xC2BF728));
        t0 = *(int *)0xC2BF728;
        (((struct o90_uint *)(t0))->v) = (((((struct o90_int *)(t0))->v)) & 0xFFFCFF3F);
        t0 = *(int *)0xC2BF728;
        (((struct o90_uint *)(t0))->v) = (((((struct o90_int *)(t0))->v)) | ((((struct o8_int *)0xC2C4138)->v)));
        t0 = *(int *)0xC2BF728;
        (((struct o98_uint *)(t0))->v) = (((((struct o98_int *)(t0))->v)) & 0x31FF0FF);
        t0 = *(int *)0xC2BF728;
        t2 = (((struct oC_int *)0xC2C4138)->v);
        if ((*(int *)((a4 + 0x0))) == 0) {
            (((struct o98_uint *)(t0))->v) = (((((struct o98_int *)(t0))->v)) | (t2 | 0x20000000));
        } else {
            (((struct o98_uint *)(t0))->v) = (((((struct o98_int *)(t0))->v)) | (t2 | ((((*(int *)0xC2BB4A8) ^ 0xFC) << 16) << 8)));
        }
        kmSetVertexRenderState((*(int *)0xC2BF728));
        t1 = 0x0;
    }
    return t1;
}

int FUN_0c14e9a8(int a4, int a5, int a6)
{
    int stk[3];
    int t3;
    register int t15;
    register int t16;
    register int t18;
    register float u19;
    register int t75;
    float u46;

    *(unsigned int *)(((int)stk + 8)) = a6;
    if (((((struct o8_int *)0xC173D68)->v)) == 0) {
        t75 = (FUN_0c14e936(a4, a5, (*(int *)(((int)stk + 8)))));
    } else {
        (((struct o4_float *)0xC2D1BEC)->v) = 0.0f;
        t3 = *(signed char *)((a4 + 0x1));
        if ((t3 != 3) && (t3 != 4)) {
            if ((*(signed char *)((a4 + 0x1))) == 5) {
                *(unsigned int *)(((int)stk + 0)) = (FUN_0c16201e((*(int *)((a4 + 0x4)))));
                *(unsigned int *)(((int)stk + 4)) = (FUN_0c161fe2((*(int *)((a4 + 0x4)))));
                t15 = (int)((int)0x10 / (int)(FUN_0c161ffa((*(int *)((a4 + 0x4))))));
                t16 = *(int *)(((int)stk + 0));
                *(unsigned int *)(((int)stk + 0)) = (t16 * t15);
                t18 = (((struct o0_int *)0xC2D1BEC)->v);
                u19 = ((float)(t16 * t15) / (float)(*(int *)(((int)stk + 4))));
                *(unsigned int *)((a5 + 0x0)) = (int)(u19 * (float)t18);
                *(unsigned int *)((a5 + 0x0)) = ((int)(u19 * (float)t18) + (((((struct o9C_int *)(a4))->v)) + 0x1));
            } else {
                *(unsigned int *)((a5 + 0x0)) = 0x0;
            }
        } else {
            if ((*(signed char *)((a4 + 0x72))) == 0) {
                *(unsigned int *)((a5 + 0x0)) = (((((((struct o0_int *)0xC173D68)->v)) - ((((struct oA0_int *)(a4))->v))) * 0x64) + ((((struct o9C_int *)(a4))->v)));
            } else {
                *(unsigned int *)((a5 + 0x0)) = ((((struct o9C_int *)(a4))->v));
            }
            FUN_0c14e936(a4, ((int)stk + 0), (((int)stk + 0) + 0x4));
            (((struct o4_float *)0xC2D1BEC)->v) = ((((float)(*(int *)(((int)stk + 0))) / (float)(*(int *)(((int)stk + 4)))) - ((float)(*(int *)((a5 + 0x0))) / (float)((((struct o0_int *)0xC2D1BEC)->v)))) * 1000.0f);
            if (!(((((struct o4_float *)0xC2D1BEC)->v)) > 60.0f) && (u46 = (((struct o4_float *)0xC2D1BEC)->v), !(-60.0f > u46))) {
            } else {
                thunk_mwRnaGetTime((*(int *)((a4 + 0xC))), ((int)stk + 0), ((int)stk + 4));     /* manual: the arguments the original passes (the generator had dropped them) */
                (((struct o9C_uint *)(a4))->v) = (int)(((float)(*(int *)(((int)stk + 0))) / (float)(*(int *)(((int)stk + 4)))) * (float)((((struct o0_int *)0xC2D1BEC)->v)));
                (((struct oA0_uint *)(a4))->v) = ((((struct o0_int *)0xC173D68)->v));
            }
        }
        *(unsigned int *)((a5 + 0x0)) = ((*(int *)((a5 + 0x0))) + ((((struct o88_int *)(a4))->v)));
        *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x0)) = ((((struct o0_int *)0xC2D1BEC)->v));
        t75 = 0x88;
    }
    return t75;
}

int FUN_0c075450(int a4, int a5, int a6, int a7, int a8)
{
    int stk[4];

    register int R1;
    register int R2;
    register int R3;
    register float F8;
    register float F14;
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
    int R1000;
    int R1004;
    int R1008;
    int R1012;
    R1000 = *(int *)((int)stk + 0);
    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);
    v0_9 = a4;
    v0_0 = a5;
    v0_1 = a6;
    v0_2 = a7;
    R1000 = v0_0;
    R1004 = v0_2;
    R1012 = 0x0;
    v0_3 = (0x0);
    v0_4 = (0x0);
    if ((v0_1 != 0)) goto L_C0754C0;
    if (((int)(*(int *)((v0_9 + 0x0))) < 0)) goto L_C07547E;
    if (((*(int *)((v0_9 + 0x18))) != 0)) goto L_C075490;
    L_C07547E:;
    v0_0 = (0x0);
    L_C0755AA:;
    return v0_0;
    L_C075490:;
    v0_5 = ((v0_9 + 0x18));
    L_C0754C2:;
    v0_7 = *(int *)((v0_5 + 0x20));
    v0_6 = (v0_5);
    v0_5 = ((v0_5 + 0x50));
    v0_9 = (v0_7);
    if (((int)v0_7 < 0)) goto L_C07555E;
    if ((a8 == 0)) goto L_C0754E4;
    if (((R1000) == 0)) goto L_C0754E4;
    v0_9 = ((*(int *)(((((v0_9 << 2) << 2) + (R1000)) + 0xC))));
    L_C0754E4:;
    v0_10 = *(int *)0xC2BF8E4;
    v0_11 = (unsigned int)(*(int *)((((*(int *)0xC2BB3E8) + (((v0_9 + v0_10) << 2) << 1)) + 0x0))) <= (unsigned int)0x0;
    v0_7 = (0xC2BB3E8);
    v0_8 = ((((v0_9 + v0_10) << 2) << 1));
    v0_9 = ((v0_9 + v0_10));
    if (v0_11) goto L_C07555E;
    v0_9 = *(int *)((v0_7 + 0x0));
    *(unsigned int *)(((v0_9 + v0_8) + 0x0)) = ((*(int *)(((v0_9 + v0_8) + 0x0))) - 1);
    if (((*(int *)((((*(int *)((v0_7 + 0x0))) + v0_8) + 0x0))) != 0)) goto L_C07555E;
    R1008 = (*(int *)((((*(int *)((v0_7 + 0x0))) + v0_8) + 0x4)));
    v0_9 = R1008;
    v0_3 = ((v0_9 * 0x3C));
    v0_10 = (0xC2BF120);
    if (((*(int *)((((*(int *)0xC2BF120) + (v0_9 * 0x3C)) + 0x28))) != 0)) goto L_C075540;
    v0_11 = kmFreeTexture(((*(int *)((v0_10 + 0x0))) + v0_3));
    v0_9 = (v0_11);
    if ((v0_11 == 0)) goto L_C075540;
    R1012 = 0x1;
    L_C075540:;
    *(unsigned int *)((((*(int *)((v0_10 + 0x0))) + v0_3) + 0x2C)) = v0_4;
    *(unsigned int *)((((*(int *)((v0_10 + 0x0))) + v0_3) + 0x38)) = 0xFFFFFFFF;
    nlCommonTextureClearTextureIndex((R1008), v0_0);
    *(unsigned int *)((((*(int *)((v0_7 + 0x0))) + v0_8) + 0x4)) = 0xFFFFFFFF;
    v0_3 = (0x1);
    L_C07555E:;
    if (((*(int *)0xC147340) != 0)) goto L_C07558A;
    v0_9 = ((0x7 & ((unsigned int)(*(int *)((v0_6 + 0xC))) >> 27)));
    if (((*(int *)0xC2BFCC8) == 0)) goto L_C07558A;
    if ((v0_9 == 5)) goto L_C075584;
    if ((v0_9 != 6)) goto L_C07558A;
    L_C075584:;
    nlFreePalette((*(int *)((v0_6 + 0x3C))), v0_0, v0_1, v0_2);
    L_C07558A:;
    v0_6 = (((struct o4C_int *)(v0_6))->v);
    v0_7 = (*(int *)(((v0_5 + v0_6) + 0x0))) != 0;
    v0_5 = ((v0_5 + v0_6));
    if (v0_7) goto L_C0755A0;
    *(unsigned int *)(((R1004) + 0x0)) = v0_4;
    L_C0755A8:;
    v0_0 = ((R1012));
    goto L_C0755AA;
    L_C0755A0:;
    if ((v0_3 == 0)) goto L_C0754C2;
    *(unsigned int *)(((R1004) + 0x0)) = v0_5;
    goto L_C0755A8;
    L_C0754C0:;
    v0_5 = (v0_1);
    goto L_C0754C2;
}

int buFbrCreateFiber(int a4, int a5, int a6, int a7)
{
    int stk[44];
    register int t6;

    (((struct oAC_uint *)(((int)stk + 0)))->v) = a4;
    (((struct oA8_uint *)(((int)stk + 0)))->v) = a5;
    (((struct oA4_uint *)(((int)stk + 0)))->v) = a6;
    (((struct oA0_uint *)(((int)stk + 0)))->v) = a7;
    memset(((int)stk + 0), 0x0, 0x98);
    t6 = (((struct o208_int *)((*(int *)(((int)stk + 172)))))->v);
    if (((((struct o20C_int *)((*(int *)(((int)stk + 172)))))->v)) == t6) {
        return 0xFFFFFFFF;
    }
    *(unsigned int *)(((int)stk + 156)) = 0x0;
    *(unsigned int *)(((int)stk + 152)) = (0x210 + (*(int *)(((int)stk + 172))));
    for (;;) {
        if ((*(int *)(((*(int *)(((int)stk + 152))) + 0xC))) == 0) {
            break;
        }
        t6 = (*(int *)(((int)stk + 152)));
        t6 = (t6 + 0x124);
        *(unsigned int *)(((int)stk + 152)) = t6;
        *(unsigned int *)(((int)stk + 156)) = ((*(int *)(((int)stk + 156))) + 0x1);
    }
    *(unsigned int *)(((*(int *)(((int)stk + 152))) + 0x8)) = 0x0;
    *(unsigned int *)(((int)stk + 160)) = ((unsigned int)(*(int *)(((int)stk + 160))) >> 2);
    *(unsigned int *)(((*(int *)(((int)stk + 152))) + 0xC)) = 0x1;
    *(unsigned int *)(((*(int *)(((int)stk + 152))) + 0x14)) = ((((struct o204_int *)((*(int *)(((int)stk + 172)))))->v));
    *(unsigned int *)(((*(int *)(((int)stk + 152))) + 0x0)) = (*(int *)(((int)stk + 164)));
    *(unsigned int *)(((*(int *)(((int)stk + 152))) + 0x4)) = (*(int *)(((int)stk + 160)));
    (((struct o118_uint *)((*(int *)(((int)stk + 152)))))->v) = 0x0;
    *(unsigned int *)(((*(int *)(((int)stk + 152))) + 0x10)) = 0x0;
    (((struct o11C_uint *)((*(int *)(((int)stk + 152)))))->v) = 0x0;
    memcpy(((*(int *)(((int)stk + 152))) + 0x18), ((*(int *)(((int)stk + 172))) + 0x104), 0x100);
    setjmp(((int)stk + 0));
    memcpy(((*(int *)(((int)stk + 152))) + 0x18), ((int)stk + 0), 0x100);
    *(unsigned int *)(((*(int *)(((int)stk + 152))) + 0x18)) = ((((*(int *)(((int)stk + 160))) - 1) << 2) + (*(int *)(((int)stk + 164))));
    *(unsigned int *)(((*(int *)(((int)stk + 152))) + 0x20)) = (*(int *)(((int)stk + 168)));
    return (*(int *)(((int)stk + 156)));
}

int FUN_0c162560(int a4, int a5, int a6, int a7)
{
    int stk[10];
    register int t1;
    register int t3;
    register int t4;
    register int t9;
    register int t12;
    register int t13;
    register int t18;
    register int t22;
    register int t23;
    register int t25;
    register int t31;
    register int t32;
    register int t54;
    register int t104;
    register int t59;
    register int t64;
    register int t65;
    register int t66;
    register int t70;
    register int t71;
    register int t72;
    register int t73;
    register int t75;
    register int t79;
    int t15;
    int t56;

    t1 = *(int *)((a4 + 0x4));
    if ((*(signed char *)((a4 + 0x2))) == 1) {
        t3 = cvFsGetStat((*(int *)((a4 + 0x8))), a5, a6, a7);
        if (t3 == 1) {
            t4 = *(int *)((a4 + 0x20));
            SJ_SplitChunk((a4 + 0x24), (((t4 << 8) << 2) << 1), (((int)stk + 0) + 0xC));
            t9 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x20)))))(t1, 0x1, (((int)stk + 0) + 0xC), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
            t12 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x1C)))))(t1, 0x0, (((int)stk + 0) + 0x4), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
            t13 = FUN_0c162464(a4);
            if ((t13 == (*(int *)((a4 + 0x30)))) && (t15 = *(int *)((a4 + 0x38)), t15 != 0)) {
                t18 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)((a4 + 0x38)))))((*(int *)((a4 + 0x3C))), a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
            }
            *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + (((t4 << 8) << 2) << 1));
            *(unsigned char *)((a4 + 0x2)) = 0x0;
            t22 = FUN_0c162464(a4);
            t23 = *(int *)((a4 + 0x14));
            t25 = (t23 + 0x7FF);
            if ((int)(t23 + 0x7FF) < 0) {
                t25 = ((t23 + 0x7FF) + 0x7FF);
            }
            if ((int)t22 >= (int)((int)t25 >> 11)) {
                *(unsigned char *)((a4 + 0x1)) = 0x3;
            }
            *(unsigned char *)((a4 + 0x3)) = 0x0;
        } else {
            if (t3 == 3) {
                t31 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x1C)))))(t1, 0x0, (a4 + 0x24), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
                t32 = *(signed char *)((a4 + 0x3));
                if ((int)t32 > (int)0xA) {
                    *(unsigned char *)((a4 + 0x1)) = 0x4;
                } else {
                    *(unsigned char *)((a4 + 0x3)) = (t32 + 0x1);
                }
                *(unsigned char *)((a4 + 0x2)) = 0x0;
            }
        }
    }
    t54 = *(signed char *)((a4 + 0x2));
    t104 = t54;
    if (t54 == 0) {
        if ((t1 != 0) && (t56 = *(int *)((t1 + 0x0)), t56 != 0)) {
            t59 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x24)))))(t1, 0x1, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
            t104 = t59;
            if ((int)t59 < (int)(*(int *)((a4 + 0x1C)))) {
                t64 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x18)))))(t1, 0x0, (*(int *)((a4 + 0x18))), (a4 + 0x24), *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
                t65 = *(int *)((a4 + 0x28));
                t66 = t65;
                if ((int)t65 < 0) {
                    t66 = (t65 + 0x7FF);
                }
                *(unsigned int *)(((int)stk + 0)) = (*(int *)((a4 + 0x30)));
                t70 = FUN_0c162464(a4);
                t71 = *(int *)(((int)stk + 0));
                t72 = *(int *)((a4 + 0x2C));
                t73 = (t71 - t70);
                if ((int)((int)t66 >> 11) < (int)(t71 - t70)) {
                    t73 = ((int)t66 >> 11);
                }
                t75 = t72;
                if ((int)t73 < (int)t72) {
                    t75 = t73;
                }
                if (t75 != 0) {
                    t79 = cvFsReqRd((*(int *)((a4 + 0x8))), t75, (*(int *)((a4 + 0x24))));
                    *(unsigned int *)((a4 + 0x20)) = t79;
                    if ((int)t79 <= 0) {
                        t104 = (((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x1C)))))(t1, 0x0, (a4 + 0x24), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
                    } else {
                        *(unsigned char *)((a4 + 0x2)) = 0x1;
                        t104 = 0x1;
                    }
                } else {
                    t104 = (((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x1C)))))(t1, 0x0, (a4 + 0x24), a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24)));
                }
            }
        } else {
            t104 = (adxstm_sj_internal_error());
        }
    }
    return t104;
}
