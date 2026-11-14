/* Straight-line functions with calls and guards (batch gen_bz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_float { char p[0x20]; float v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_float { char p[0x24]; float v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_int { char p[0x28]; int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_int { char p[0x40]; int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o74_uint { char p[0x74]; unsigned int v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_int { char p[0x84]; int v; };
struct o90_float { char p[0x90]; float v; };
struct oA4_uchar { char p[0xA4]; unsigned char v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oD4_int { char p[0xD4]; int v; };
struct oD4_uint { char p[0xD4]; unsigned int v; };
int FUN_0c01e9e2(int, int);
int FUN_0c01eeda(int);
int FUN_0c026ce6(void);
int FUN_0c03f9d0(int, int);
int FUN_0c0435e2(int, int);
int FUN_0c0438c0(int);
int FUN_0c046fde(int, int, int);
int FUN_0c050538(void);
int FUN_0c058000(int);
int FUN_0c058f64(int, int, int, int);
int FUN_0c073a30(float, float, float);
int FUN_0c075d60(void);
int FUN_0c076230(float, float, float);
int FUN_0c07ada0(int);
int FUN_0c07ff00(void);
int FUN_0c07ffbc(int, int, int);
int FUN_0c08f204(int, int, int);
int FUN_0c08f824(int, int, int);
int FUN_0c08f87c(int, int);
int FUN_0c08f9c4(int, int);
int FUN_0c08fa24(int);
int FUN_0c08fa8a(int);
int FUN_0c08faa8(int, int);
int FUN_0c08fabc(int, int);
int FUN_0c090e4c(int, int, int, int);
int FUN_0c14f3b0(int, int, int, int);
int FUN_0c14f85c(void);
int FUN_0c14fd82(int, int);
int FUN_0c14ff0c(int);
int FUN_0c1500d2(int, int, int);
int FUN_0c150460(int);
extern int FUN_0c1616ce();
int Voice_ShutUp(int);
int Wobble_Record_Window(int);
extern int _builtin_get_imask(void);
extern void _builtin_prefetch(void *);
extern void _builtin_set_imask(int);
int adxf_ChkPrmPt(int, int);
int buIsFormat(int);
int kmSetHSyncCallback(int, int);
int kmSetVSyncCallback(int, int);
int kmiBGPlaneCountWords(int);
int kmiBGPlanePutColor(int, int, int);
int kmiBGPlanePutColor2(int, int, int, int);
int kmiBGPlanePutWord(int, int, int);
int kmiBGPlaneSetPCW(int, int, int);
int kmiDMAtoTARequest(int, int, int, int, int);
int kmiWaitForFinishDMA(int);
extern int kmiWriteRegister();
int memset(int, int, int);
int nlLocate(int, int);
int nlObjPutUseViewMatrix(int);
int nlPopMatrix(int);
int nlPrintf(int, ...);
int nlPushMatrix(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlSetEventNext(int, int, int);
int strncpy(int, int, int);
int vmsfs_fclose(int, int);
int vmsfs_lockbank(int, int);
int vmsfs_memcmp(int, int);
int vmsfs_read_retry(int, int, int);
int vmsfs_unmount(int);
int vmsfs_write_retry(int, int, int);
int vmsfs_xcreate(int, int, int, int);
int vmsio_ismount(int);
int vmsio_isready(int);
int FUN_0c14f46a(int a4, int a5, int a6, int a7);
int FUN_0c0905cc(int a4, int a5, int a6, int a7, int a8, int a9);
int FUN_0c058016(void);
int vmsfs_fread1(int a4, int a5);
int FUN_0c090b10(int a4, int a5);
int kmiProcessVertex_03(int a4);
int FUN_0c044f9a(int a4, int a5);
int FUN_0c04d28a(void);
int kmiProcessVertex_12(int a4);
int kmLoadYUVTexture(int a4, int a5, int a6, int a7, int a8, int a9);
void FUN_0c05163e(void);
int vmsfs_findfirst(int a4, int a5);
int vmsfs_fopen(int a4, int a5, int a6);
int FUN_0c14f8ac(int a4, int a5, int a6, int a7);
void syChainDeleteHandler(int a4);
int kmiProcessVertex_10(int a4);
int vmsfs_xwrite1(int a4, int a5);
void FUN_0c04e9ac(void);
int FUN_0c14b704(int a4, int a5, int a6);
int FUN_0c01f368(int a4, int a5, float f4);
int nlCharacter(int a4, int a5, int a6, int a7);

int FUN_0c14f46a(int a4, int a5, int a6, int a7)
{
    int stk[13];

    register int R1;
    register int R2;
    register int R3;
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
    int R1004;
    int R1008;
    int R1012;
    int R1016;
    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);
    R1016 = *(int *)((int)stk + 16);
    v0_9 = a4;
    v0_3 = a5;
    v0_0 = a6;
    v0_4 = a7;
    R1008 = v0_9;
    R1004 = v0_3;
    R1012 = v0_4;
    v0_5 = adxf_ChkPrmPt((R1008), v0_0);
    v0_1 = (v0_5);
    v0_2 = (v0_0);
    if (((int)v0_5 >= 0)) goto L_C14F494;
    L_C14F5EE:;
    v0_3 = (v0_1);
    L_C14F5F0:;
    return v0_3;
    L_C14F494:;
    v0_1 = FUN_0c14fd82((R1004), 0x0);
    R1016 = v0_1;
    if ((v0_1 != 0)) goto L_C14F4AC;
    v0_0 = ((int (*)(int, int, int, int))(FUN_0c1616ce))(0xC1705F8, v0_3, v0_0, v0_4);
    v0_3 = (0xFFFFFFFF);
    goto L_C14F5F0;
    L_C14F4AC:;
    memset(v0_2, 0x0, 0x40);
    *(unsigned int *)((((R1008) << 2) + 0xC2D21F4)) = v0_2;
    *(unsigned int *)((v0_2 + 0x0)) = 0x0;
    strncpy((v0_2 + 0x10), (R1004), 0x28);
    *(unsigned char *)((v0_2 + 0xE)) = 0x0;
    R1004 = (v0_2 + 0x3C);
    R1008 = ((v0_2 + 0x3C) + 0x2);
    (((struct o0_uint *)0xC2D56A8)->v) = 0xC2D3640;
    (((struct o4_uint *)0xC2D56A8)->v) = 0xC2D3640;
    *(unsigned int *)((v0_2 + 0x8)) = 0x0;
    v0_1 = (0xFFFFFFFF);
    v0_5 = (0x0);
    v0_6 = (0xC2D56AC);
    v0_9 = (0xC2D56A8);
    v0_7 = (0x0);
    v0_9 = (0x0);
    L_C14F5C8:;
    v0_8 = (0x3);
    if (((int)v0_9 < (int)0x3)) goto L_C14F4F8;
    if ((v0_9 != 3)) goto L_C14F5DC;
    v0_2 = ((int (*)(int, int, int, int))(FUN_0c1616ce))(0xC170628, v0_3, v0_0, v0_4);
    L_C14F5DC:;
    if ((v0_1 != -4)) goto L_C14F5EA;
    v0_0 = ((int (*)(int, int, int, int))(FUN_0c1616ce))(0xC170654, v0_3, v0_0, v0_4);
    L_C14F5EA:;
    FUN_0c14ff0c((R1016));
    goto L_C14F5EE;
    L_C14F4F8:;
    v0_10 = (int)(FUN_0c14f3b0((R1016), 0x1, (*(int *)((v0_6 + 0x0))), v0_4)) <= 0;
    if (v0_10) goto L_C14F5C6;
    v0_0 = (0x800);
    if (((*(int *)((v0_2 + 0x8))) != 0)) goto L_C14F588;
    v0_10 = *(int *)((v0_6 + 0x0));
    v0_9 = (0x10000);
    v0_3 = ((v0_10 + 0x4));
    if (((int)(*(int *)(((v0_10 + 0x4) + 0x0))) <= (int)0x10000)) goto L_C14F520;
    *(unsigned int *)((v0_3 + 0x0)) = v0_9;
    v0_1 = (0xFFFFFFFC);
    v0_9 = (0xFFFFFFFC);
    goto L_C14F5DC;
    L_C14F520:;
    v0_3 = *(int *)(((*(int *)((v0_6 + 0x0))) + 0x4));
    v0_9 = (v0_3);
    if (((int)(R1012) >= (int)v0_3)) goto L_C14F55C;
    v0_3 = ((R1012));
    L_C14F55E:;
    *(unsigned short *)((v0_2 + 0xC)) = v0_3;
    *(unsigned int *)((v0_2 + 0x8)) = (unsigned short)v0_3;
    *(unsigned int *)((v0_2 + 0x4)) = (((unsigned int)((((unsigned short)v0_3 + 0x1) << 1) + 0x3E) >> 2) << 2);
    v0_3 = (R1004);
    *(int *)((int)stk + 0) = v0_3;
    *(unsigned short *)((v0_3 + 0x0)) = ((int)((int)(*(int *)(((*(int *)((v0_6 + 0x0))) + 0x8))) / (int)v0_0));
    v0_9 = (v0_8);
    L_C14F58C:;
    v0_3 = ((v0_9 << 2));
    v0_4 = (0x200);
    if (((int)v0_9 >= (int)0x200)) goto L_C14F5C2;
    L_C14F596:;
    *(unsigned short *)((((v0_7 << 1) + (R1008)) + 0x0)) = ((int)((int)((*(int *)((v0_3 + (*(int *)((v0_6 + 0x0)))))) + 0x7FF) / (int)v0_0));
    v0_8 = (int)(v0_7 + 0x1) < (int)(*(int *)((v0_2 + 0x8)));
    v0_7 = ((v0_7 + 0x1));
    if (v0_8) goto L_C14F5BA;
    v0_1 = (v0_5);
    goto L_C14F5DC;
    L_C14F5BA:;
    v0_8 = (int)(v0_9 + 0x2) < (int)v0_4;
    v0_9 = ((v0_9 + 0x2));
    v0_3 = ((v0_3 + 0x8));
    if (v0_8) goto L_C14F596;
    L_C14F5C2:;
    v0_9 = (v0_5);
    goto L_C14F5C8;
    L_C14F55C:;
    v0_3 = (v0_9);
    goto L_C14F55E;
    L_C14F588:;
    v0_9 = (0x1);
    goto L_C14F58C;
    L_C14F5C6:;
    v0_9 = ((v0_9 + 0x1));
    goto L_C14F5C8;
}

int FUN_0c0905cc(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int stk[10];
    register int t2;
    register int t5;
    register int t10;
    register int t24;
    register int t41;
    register int t45;
    register int t62;

    *(unsigned int *)(((int)stk + 36)) = a4;
    *(unsigned int *)(((int)stk + 32)) = a5;
    *(unsigned int *)(((int)stk + 28)) = a6;
    *(unsigned int *)(((int)stk + 24)) = a7;
    t2 = vmsfs_xcreate((*(int *)(((int)stk + 36))), (*(int *)(((int)stk + 32))), a8, (((int)stk + 0) + 0x4));
    *(unsigned int *)(((int)stk + 16)) = t2;
    if ((int)t2 < 0) {
        return t2;
    }
    *(unsigned char *)(((*(int *)(((int)stk + 4))) + 0x1)) = a9;
    *(unsigned int *)(((int)stk + 8)) = (*(int *)(((int)stk + 28)));
    t5 = *(int *)(((int)stk + 36));
    *(unsigned int *)(((int)stk + 0)) = ((t5 * 0x154) + 0xC2C8D2C);
    *(unsigned int *)((((t5 * 0x154) + 0xC2C8D2C) + 0x30)) = 0x1;
    t10 = *(int *)(((*(int *)(((int)stk + 0))) + 0x4));
    *(unsigned int *)(((*(int *)(((int)stk + 0))) + 0x34)) = (((*(int *)(((int)stk + 24))) << 1) + (*(int *)((0xC147870 + (((((t10 << 1) + t10) << 2) << 2) << 1)))));
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
        t62 = vmsfs_xwrite1((*(int *)(((int)stk + 4))), (*(int *)(((int)stk + 8))));
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

int FUN_0c058016(void)
{
    int stk[10];
    int t1;
    register int t2;
    register int t3;
    register int t8;
    register int t20;
    register int t22;
    register int t26;
    register int t32;
    register int t34;
    register int t40;
    register int t46;
    register int t47;
    register int t48;
    register int t49;
    register int t66;
    register int t69;
    register int t79;
    register int t82;
    register int t87;
    int R1000;
    int R1004;
    int R1008;
    int R1012;
    int R1016;
    int R1020;
    int R1024;
    int R1028;
    int R1032;
    int R1036;

    R1000 = *(int *)((int)stk + 0);
    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);
    R1016 = *(int *)((int)stk + 16);
    R1020 = *(int *)((int)stk + 20);
    R1024 = *(int *)((int)stk + 24);
    R1028 = *(int *)((int)stk + 28);
    R1032 = *(int *)((int)stk + 32);
    R1036 = *(int *)((int)stk + 36);

    R1012 = 0xC132458;
    R1016 = 0x28;
    R1020 = 0xC10CE90;
    R1024 = 0xC13249C;
    R1028 = 0xC10CE8C;
    R1032 = 0xC132498;
    t1 = 0xC13249C;
    t2 = 0xC132458;
    t3 = 0x0;
    for (;;) {
        if ((int)t3 >= (int)0x4) {
            break;
        }
        t46 = 0xC10CE5C;
        t46 = (FUN_0c058000((*(int *)(((t3 << 2) + t46)))));
        t1 = (*(int *)0xC2B32C0);
        t8 = *(int *)((t1 + 0x30));
        t1 = (*(int *)(((R1020) + 0x0)));
        if (((*(int *)((t8 + 0x0))) & t1) != 0) {
            t46 = (nlLocate(0x5, (t3 + 0x28)));
            t46 = t3;
            t46 = (t46 << 2);
            t1 = (*(int *)(((R1024) + 0x0)));
            t20 = t1;
            R1008 = t20;
            t22 = (*(int *)((0xC132458 + t46)));
            R1004 = t22;
            R1000 = 0xC10CEA0;
            t46 = (nlPrintf(0xC10CEA0, t22, t20));
        } else {
            t1 = (*(int *)0xC2B32C0);
            t26 = *(int *)((t1 + 0x30));
            t1 = (*(int *)(((R1028) + 0x0)));
            if (((*(int *)((t26 + 0x0))) & t1) != 0) {
                t46 = (nlLocate(0x5, (t3 + 0x28)));
                t1 = (*(int *)(((R1032) + 0x0)));
                t32 = t1;
                R1008 = t32;
                t34 = (*(int *)((t2 + 0x0)));
                R1004 = t34;
                R1000 = 0xC10CEA0;
                t46 = (nlPrintf(0xC10CEA0, t34, t32));
            } else {
                t46 = (nlLocate(0x5, (R1016)));
                t1 = (*(int *)(((R1012) + 0x0)));
                t40 = t1;
                R1008 = t40;
                R1004 = 0xC10CEB0;
                t46 = (nlPrintf(0xC10CEB0, t40));
            }
        }
        t1 = (R1012);
        t2 = (t2 + 0x4);
        t3 = (t3 + 0x1);
        t1 = (t1 + 0x4);
        R1012 = t1;
        R1016 = ((R1016) + 0x1);
    }
    R1016 = 0x2C;
    R1012 = 0xC132468;
    R1028 = 0xC10CE94;
    R1036 = 0xC1324A0;
    R1020 = 0xC10CE98;
    R1024 = 0xC1324A4;
    t47 = 0xC10CE94;
    t48 = 0xC132468;
    t49 = 0x4;
    for (;;) {
        if ((int)t49 >= (int)0xC) {
            break;
        }
        t46 = 0xC10CE5C;
        R1032 = (t49 << 2);
        t46 = (FUN_0c058000((*(int *)(((t49 << 2) + t46)))));
        t47 = (*(int *)(((*(int *)0xC2B32C0) + 0x30)));
        t47 = (*(int *)((t47 + 0x0)));
        if ((t47 & (*(int *)(((R1028) + 0x0)))) != 0) {
            t46 = (nlLocate(0x5, (t49 + 0x28)));
            t47 = (R1036);
            t66 = (*(int *)((t47 + 0x0)));
            R1008 = t66;
            t46 = (R1032);
            t47 = (*(int *)((0xC132458 + t46)));
            t69 = t47;
            R1004 = t69;
            R1000 = 0xC10CEA0;
            t46 = (nlPrintf(0xC10CEA0, t69, t66));
        } else {
            t47 = (*(int *)(((*(int *)0xC2B32C0) + 0x30)));
            t47 = (*(int *)((t47 + 0x0)));
            if ((t47 & (*(int *)(((R1020) + 0x0)))) != 0) {
                t46 = (nlLocate(0x5, (t49 + 0x28)));
                t47 = (R1024);
                t79 = (*(int *)((t47 + 0x0)));
                R1008 = t79;
                t47 = (*(int *)(((R1012) + 0x0)));
                t82 = t47;
                R1004 = t82;
                R1000 = 0xC10CEA0;
                t46 = (nlPrintf(0xC10CEA0, t82, t79));
            } else {
                t46 = (nlLocate(0x5, (R1016)));
                t47 = (*(int *)((t48 + 0x0)));
                t87 = t47;
                R1008 = t87;
                R1004 = 0xC10CEB0;
                t46 = (nlPrintf(0xC10CEB0, t87));
            }
        }
        t49 = (t49 + 0x1);
        t48 = (t48 + 0x4);
        R1016 = ((R1016) + 0x1);
        t47 = (R1012);
        t47 = (t47 + 0x4);
        R1012 = t47;
    }
    return t46;
}

int vmsfs_fread1(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = vmsio_isready((*(int *)((a4 + 0x28))));
    if (t0 == 0) {
        vmsfs_unmount((*(int *)((a4 + 0x28))));
        return 0xFFFFFF01;
    }
    t0 = vmsio_ismount((*(int *)((a4 + 0x28))));
    if (t0 == 0) {
        return 0xFFFFFF01;
    }
    if ((*(signed char *)((((*(int *)((a4 + 0x28))) * 0x154) + 0xC2C8D34))) == 0) {
        return 0xFFFFFF01;
    }
    t0 = buIsFormat((*(int *)((a4 + 0x28))));
    if ((int)t0 < 0) {
        return 0xFFFFFF03;
    }
    t0 = *(int *)((a4 + 0x28));
    if (((((struct o40_int *)(a4))->v)) == 0xFFFA) {
        if ((*(int *)((a4 + 0x34))) == 0) {
            return 0x0;
        }
        return 0xFFFF0000;
    }
    if ((*(int *)((a4 + 0x34))) == 0) {
        return 0x0;
    }
    if (((((struct o40_int *)(a4))->v)) == 0xFFFC) {
        return 0xFFFFFF41;
    }
    if (((((struct o40_int *)(a4))->v)) == 0xFFFF) {
        return 0xFFFFFF41;
    }
    t1 = (((struct o40_int *)(a4))->v);
    t2 = vmsfs_read_retry(t0, t1, a5);
    if ((int)t2 < 0) {
        return t2;
    }
    (((struct o40_uint *)(a4))->v) = (unsigned short)(FUN_0c08f87c(t0, t1));
    *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) - 1);
    return (*(int *)((a4 + 0x34)));
}

int FUN_0c090b10(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = vmsio_isready((*(int *)((a4 + 0x28))));
    if (t0 == 0) {
        vmsfs_unmount((*(int *)((a4 + 0x28))));
        return 0xFFFFFF01;
    }
    t0 = vmsio_ismount((*(int *)((a4 + 0x28))));
    if (t0 == 0) {
        return 0xFFFFFF01;
    }
    if ((*(signed char *)((((*(int *)((a4 + 0x28))) * 0x154) + 0xC2C8D34))) == 0) {
        return 0xFFFFFF01;
    }
    t0 = buIsFormat((*(int *)((a4 + 0x28))));
    if ((int)t0 < 0) {
        return 0xFFFFFF03;
    }
    t0 = *(int *)((a4 + 0x28));
    if (((((struct o40_int *)(a4))->v)) == 0xFFFA) {
        if ((*(int *)((a4 + 0x34))) == 0) {
            return 0x0;
        }
        return 0xFFFF0000;
    }
    if ((*(int *)((a4 + 0x34))) == 0) {
        return 0x0;
    }
    if (((((struct o40_int *)(a4))->v)) == 0xFFFC) {
        return 0xFFFFFF41;
    }
    if (((((struct o40_int *)(a4))->v)) == 0xFFFF) {
        return 0xFFFFFF41;
    }
    t1 = (((struct o40_int *)(a4))->v);
    t2 = vmsfs_write_retry(t0, t1, a5);
    if ((int)t2 < 0) {
        return t2;
    }
    (((struct o40_uint *)(a4))->v) = (unsigned short)(FUN_0c08f87c(t0, t1));
    *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) - 1);
    return (*(int *)((a4 + 0x34)));
}

int kmiProcessVertex_03(int a4)
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

int FUN_0c044f9a(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = nlSetEventNext(0x12C, 0xC04586C, a4);
    if (t0 == 0) {
        return t0;
    }
    t1 = *(int *)0xC2A59C0;
    *(unsigned int *)0xC2A59C0 = (t1 + 0x1);
    (((struct o74_uint *)(t0))->v) = ((t1 + 0x1) - 1);
    *(unsigned int *)0xC2AB7EC = ((*(int *)0xC2AB7EC) + 0x1);
    if (a5 == 5) {
        (((struct o78_uint *)(t0))->v) = (((((struct o78_int *)(a4))->v)) + 0x2);
    } else {
        (((struct o78_uint *)(t0))->v) = (((((struct o78_int *)(a4))->v)) + 0x1);
    }
    (((struct o80_uint *)(t0))->v) = ((((struct o80_int *)(a4))->v));
    (((struct oD4_uint *)(t0))->v) = (((((struct oD4_int *)(a4))->v)) - ((a5 << 1) + (a5 << 2)));
    FUN_0c046fde((0x80 + t0), (0xD4 + t0), 0x0);
    t1 = (((struct o80_int *)(t0))->v);
    t2 = *(int *)0xC2ADA7C;
    *(volatile int *)((t0 + 0xD4));
    *(volatile int *)((((((t1 << 1) + t1) << 2) + t2) + 0x0));
    FUN_0c07ff00();
    FUN_0c0438c0(t0);
    t1 = (((struct o80_int *)(t0))->v);
    t2 = (((struct oD4_int *)(t0))->v);
    (((struct o90_float *)(t0))->v) = (((((struct o4_float *)(((*(int *)((((((t1 << 1) + t1) << 2) + (*(int *)0xC2ADA7C)) + 0x0))) + (((t2 << 1) + t2) << 2))))->v)) + 1.0f);
    FUN_0c07ff00();
    (((struct oA4_uchar *)(t0))->v) = (*(signed char *)(((0xA4 + a4) + 0x0)));
    *(unsigned char *)(((0xA4 + t0) + 0x1)) = (*(signed char *)(((0xA4 + a4) + 0x1)));
    *(unsigned char *)(((0xA4 + t0) + 0x2)) = (*(signed char *)(((0xA4 + a4) + 0x2)));
    *(unsigned char *)(((0xA4 + t0) + 0x3)) = (*(signed char *)(((0xA4 + a4) + 0x3)));
    *(unsigned char *)(((0xA4 + t0) + 0x4)) = (*(signed char *)(((0xA4 + a4) + 0x4)));
    *(unsigned char *)(((0xA4 + t0) + 0x5)) = (*(signed char *)(((0xA4 + a4) + 0x5)));
    FUN_0c03f9d0(((((struct o80_int *)(t0))->v)), ((((struct oD4_int *)(t0))->v)));
    FUN_0c03f9d0(((((struct o80_int *)(t0))->v)), (((((struct oD4_int *)(t0))->v)) + 0x1));
    return FUN_0c0435e2(t0, ((((struct o84_int *)(t0))->v)));
}

int FUN_0c04d28a(void)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    t0 = 0x4F1A0;
    if ((*(int *)0xC175C84) == 1) {
        t0 = 0x13C680;
    }
    nlPushMatrix(0x0);
    FUN_0c073a30(-1381.28003f, 86.0f, 28.7124004f);
    nlRotateAY(0x2000);
    t1 = (int)((unsigned int)((*(int *)0xC2ADEB4) + t0) % (unsigned int)0x278D00);
    u0 = (float)t1;
    if (0.0f > (float)t1) {
        u0 = ((float)t1 + 4.2949673e+09f);
    }
    u1 = (((struct o0_float *)0xC04D400)->v);
    u2 = (((struct o4_float *)0xC04D400)->v);
    u3 = ((1.0f - (u0 / u1)) * u2);
    if (!(2.14748365e+09f > ((1.0f - (u0 / u1)) * u2))) {
        u3 = ((((1.0f - (u0 / u1)) * u2)) - (2.14748365e+09f + 2.14748365e+09f));
    }
    nlRotateAZ((int)u3);
    nlObjPutUseViewMatrix(0xC62BB80);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    FUN_0c073a30(((((struct o24_float *)0xC04D400)->v)), 86.0f, ((((struct o20_float *)0xC04D400)->v)));
    nlRotateAY(0x2000);
    t1 = (int)((unsigned int)((*(int *)0xC2ADEB4) + t0) % (unsigned int)0x34BC0);
    u0 = (float)t1;
    if (0.0f > (float)t1) {
        u0 = ((float)t1 + ((((struct o3C_float *)0xC04D400)->v)));
    }
    u1 = *(float *)0xC04D440;
    u3 = ((1.0f - (u0 / u1)) * u2);
    if (!(2.14748365e+09f > ((1.0f - (u0 / u1)) * u2))) {
        u3 = ((((1.0f - (u0 / u1)) * u2)) - (2.14748365e+09f + 2.14748365e+09f));
    }
    nlRotateAZ((int)u3);
    nlObjPutUseViewMatrix(0xC62B678);
    return nlPopMatrix(0x1);
}

int kmiProcessVertex_12(int a4)
{
    int stk[3];
    register int t3;
    register int t4;
    register int t5;
    register int t14;
    register int t19;
    register int t28;
    register int t33;
    register int t42;
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
    *(unsigned int *)(((t14 << 2) + 0xC300974)) = (*(int *)(((R1000) + 0x18)));
    t19 = kmiBGPlanePutWord(t3, (t14 + 0x1), (*(int *)(((R1000) + 0x1C))));
    *(unsigned int *)(((t19 << 2) + 0xC300974)) = (*(int *)(((R1004) + 0x4)));
    *(unsigned int *)((((t19 + 0x1) << 2) + 0xC300974)) = (*(int *)(((R1004) + 0x8)));
    *(unsigned int *)(((((t19 + 0x1) + 0x1) << 2) + 0xC300974)) = (*(int *)(((R1004) + 0xC)));
    t28 = kmiBGPlanePutColor(t3, (((t19 + 0x1) + 0x1) + 0x1), (*(int *)(((R1000) + 0x10))));
    *(unsigned int *)(((t28 << 2) + 0xC300974)) = (*(int *)(((R1004) + 0x18)));
    t33 = kmiBGPlanePutWord(t3, (t28 + 0x1), (*(int *)(((R1004) + 0x1C))));
    *(unsigned int *)(((t33 << 2) + 0xC300974)) = (*(int *)(((R1008) + 0x4)));
    *(unsigned int *)((((t33 + 0x1) << 2) + 0xC300974)) = (*(int *)(((R1008) + 0x8)));
    *(unsigned int *)(((((t33 + 0x1) + 0x1) << 2) + 0xC300974)) = (*(int *)(((R1008) + 0xC)));
    t42 = kmiBGPlanePutColor(t3, (((t33 + 0x1) + 0x1) + 0x1), (*(int *)(((R1008) + 0x10))));
    *(unsigned int *)(((t42 << 2) + 0xC300974)) = (*(int *)(((R1008) + 0x18)));
    (((struct o0_uint *)0xC300A6C)->v) = ((kmiBGPlanePutWord(t3, (t42 + 0x1), (*(int *)(((R1008) + 0x1C))))) << 2);
    t48 = kmiBGPlaneCountWords(t3);
    kmiBGPlaneSetPCW(t48, 0x0, 0x0);
    (((struct o14_uint *)0xC300A6C)->v) = (*(int *)(((R1000) + 0xC)));
    return 0x0;
}

int kmLoadYUVTexture(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int stk[2];

    register int R1;
    register int R2;
    int R4;
    int R5;
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
    R5 = a5;
    v0_3 = a6;
    v0_6 = a7;
    v0_0 = (R5);
    v0_1 = (R4);
    if (((0x1F & R5) == 0)) goto L_C15926E;
    v0_7 = (0x7);
    L_C1593AE:;
    return v0_7;
    L_C15926E:;
    v0_2 = *(int *)((v0_1 + 0x18));
    R4 = (0x1);
    R5 = (v0_2);
    if (((v0_2 & 0x1) != 0)) goto L_C1592BC;
    if (((0x4 & R5) != 0)) goto L_C1592BC;
    if (((0x8 & R5) != 0)) goto L_C1592BC;
    if (((0x20 & R5) != 0)) goto L_C1592BC;
    if ((((*(int *)((v0_1 + 0x8))) & 0x18000000) == 0)) goto L_C1592BC;
    v0_7 = (a8);
    R5 = (0x0);
    if ((a8 == 6)) goto L_C1592A2;
    if (!((v0_7 == 3))) goto L_C1592BC;
    v0_5 = (R4);
    goto L_C1592A8;
    L_C1592BC:;
    v0_7 = (0x4);
    goto L_C1593AE;
    L_C1592A8:;
    if (((int)v0_3 < (int)R4)) goto L_C1592BC;
    if (((int)v0_3 > (int)0x40)) goto L_C1592BC;
    if (((int)v0_6 < (int)R4)) goto L_C1592BC;
    if (((int)v0_6 <= (int)0x40)) goto L_C1592C0;
    goto L_C1592BC;
    L_C1592C0:;
    v0_7 = ((v0_3 * v0_6));
    if (((int)(v0_3 * v0_6) < (int)0x2)) goto L_C159300;
    v0_4 = (v0_6);
    R5 = (R4);
    v0_3 = ((v0_3 - 1));
    L_C15930E:;
    v0_2 = ((v0_3 + 0x1) * ((v0_4 - 1) + 0x1));
    v0_4 = ((v0_4 - 1));
    v0_6 = v0_2;
    if ((v0_5 != 0)) goto L_C15933C;
    if ((R5 != 0)) goto L_C15932A;
    v0_2 = (v0_6);
    v0_6 = (v0_6);
    L_C15932E:;
    v0_2 = (((((((v0_2 << 1) + v0_6) << 2) << 2) << 2) << 1));
    L_C15934A:;
    v0_3 = ((int (*)(int, int, int, int))(kmiWriteRegister))(0x14C, ((((((v0_5 & R4) << 16) << 8) | ((R5 & R4) << 16)) | ((v0_4 & 0x3F) << 8)) | (v0_3 & 0x3F)), (v0_3 & 0x3F), 0x3F);
    v0_1 = ((int (*)(int, int))(kmiWriteRegister))(0x148, ((*(int *)((v0_1 + 0x1C))) & 0xFFFFF8));
    v0_5 = (0xC152700);
    v0_4 = (0x10800000);
    v0_1 = (0x100);
    L_C15937E:;
    *(int *)((int)stk + 0) = ((int)stk + 4);
    v0_3 = kmiDMAtoTARequest(v0_4, v0_0, v0_2, 0x18, ((int)stk + 4));
    R4 = ((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))));
    R5 = (v0_3);
    if ((v0_3 == v0_1)) goto L_C15937E;
    if ((R5 == 0)) goto L_C1593A0;
    v0_7 = (0x8);
    goto L_C1593AE;
    L_C1593A0:;
    if ((a9 != 1)) goto L_C1593AC;
    kmiWaitForFinishDMA(R4);
    L_C1593AC:;
    v0_7 = (0x0);
    goto L_C1593AE;
    L_C15932A:;
    v0_2 = (v0_7);
    v0_6 = (v0_7);
    goto L_C15932E;
    L_C15933C:;
    if ((R5 != 0)) goto L_C159344;
    v0_2 = (v0_6);
    L_C159346:;
    v0_2 = (((v0_2 << 8) << 1));
    goto L_C15934A;
    L_C159344:;
    v0_2 = (v0_7);
    goto L_C159346;
    L_C159300:;
    v0_4 = (((unsigned int)((unsigned int)(*(int *)((v0_1 + 0x10))) >> 2) >> 2));
    v0_3 = ((((unsigned int)((unsigned int)(*(int *)((v0_1 + 0xC))) >> 2) >> 2) - 1));
    goto L_C15930E;
    L_C1592A2:;
    v0_5 = (R5);
    goto L_C1592A8;
}

void FUN_0c05163e(void)
{
    int t0;
    register float u0;
    register float u1;
    register float u2;

    t0 = *(int *)0xC2B1E00;
    if ((int)t0 <= (int)0xFFFFFFFE) {
        return;
    }
    if ((int)t0 > (int)0x2) {
        return;
    }
    Wobble_Record_Window(t0);
    (((struct o0_uint *)0xC2B2680)->v) = (*(int *)((((*(int *)0xC2B1E00) << 2) + 0xC131EEC)));
    (((struct o4_float *)0xC2B2680)->v) = 320.0f;
    (((struct o8_float *)0xC2B2680)->v) = 360.0f;
    (((struct oC_float *)0xC2B2680)->v) = 0.200000003f;
    u0 = (((struct o18_float *)0xC2B29FC)->v);
    (((struct o14_float *)0xC2B2680)->v) = (u0 + 1.0f);
    (((struct o10_float *)0xC2B2680)->v) = (u0 + 1.0f);
    (((struct o2C_float *)0xC2B2680)->v) = 1.0f;
    (((struct o28_uint *)0xC2B2680)->v) = 0x0;
    (((struct o34_uint *)0xC2B2680)->v) = 0x200A;
    FUN_0c076230(0.0f, 0.0f, 0.0f);
    FUN_0c07ada0(0xC2B2680);
    (((struct oC_float *)0xC2B2680)->v) = 0.100000001f;
    (((struct o4_float *)0xC2B2680)->v) = 318.0f;
    (((struct o8_float *)0xC2B2680)->v) = 358.0f;
    (((struct o30_uint *)0xC2B2680)->v) = 0x2;
    (((struct o0_uint *)0xC2B2680)->v) = (*(int *)((((*(int *)0xC2B1E00) << 2) + 0xC131EEC)));
    t0 = *(int *)0xC2B1E00;
    if (t0 == 2) {
        FUN_0c076230(0.0f, 1.0f, 0.0f);
    } else {
        if (t0 == 1) {
            FUN_0c076230(1.0f, 0.90196079f, 0.0f);
        } else {
            if ((t0 != 0) && (t0 == -1)) {
                u0 = ((((struct o8_float *)0xC05185C)->v));
                u1 = ((((struct o4_float *)0xC05185C)->v));
                u2 = ((((struct o0_float *)0xC05185C)->v));
            } else {
                u0 = ((((struct oC_float *)0xC05185C)->v));
                u1 = 0.0f;
                u2 = 0.0f;
            }
            FUN_0c076230(u0, u1, u2);
        }
    }
    FUN_0c07ada0(0xC2B2680);
    FUN_0c026ce6();
    t0 = (((struct o0_int *)0xC2B29FC)->v);
    (((struct o0_uint *)0xC2B29FC)->v) = (t0 + 0x1);
    if ((int)(t0 + 0x1) > (int)0xB4) {
        FUN_0c050538();
    return;
    }
}

int vmsfs_findfirst(int a4, int a5)
{
    int stk[8];
    register int t4;
    register int t8;
    register int t12;
    register int t23;
    register int t24;
    register int t30;
    register int t34;
    register int t38;
    register int t40;
    register int t45;
    register int t46;
    register int t52;
    register int t56;
    int t39;

    *(unsigned int *)(((int)stk + 28)) = a4;
    *(unsigned int *)(((int)stk + 24)) = a5;
    *(unsigned int *)(((int)stk + 0)) = (((*(int *)(((int)stk + 28))) * 0x154) + 0xC2C8D2C);
    if ((*(signed char *)(((((*(int *)(((int)stk + 28))) * 0x154) + 0xC2C8D2C) + 0x2))) == 0) {
        return 0xFFFFFF01;
    }
    t4 = vmsio_isready((*(int *)(((int)stk + 28))));
    if (t4 == 0) {
        vmsfs_unmount((*(int *)(((int)stk + 28))));
        return 0xFFFFFF01;
    }
    t8 = vmsio_ismount((*(int *)(((int)stk + 28))));
    if (t8 == 0) {
        return 0xFFFFFF01;
    }
    if ((*(signed char *)((((*(int *)(((int)stk + 28))) * 0x154) + 0xC2C8D34))) == 0) {
        return 0xFFFFFF01;
    }
    t12 = buIsFormat((*(int *)(((int)stk + 28))));
    if ((int)t12 < 0) {
        return 0xFFFFFF03;
    }
    *(unsigned int *)(((*(int *)(((int)stk + 0))) + 0x18)) = 0x0;
    *(unsigned int *)(((int)stk + 4)) = (FUN_0c08f9c4((*(int *)(((int)stk + 28))), (*(int *)(((*(int *)(((int)stk + 0))) + 0x18)))));
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    *(unsigned int *)(((int)stk + 20)) = 0x0;
    for (;;) {
        t23 = *(int *)(((int)stk + 20));
        if ((int)t23 >= (int)(*(int *)(((*(int *)(((*(int *)(((int)stk + 0))) + 0x1C))) + 0x30)))) {
            t24 = *(int *)(((int)stk + 12));
            if (t24 == 0) {
                return 0xFFFFFF05;
            }
            *(unsigned int *)(((int)stk + 16)) = 0x0;
            for (;;) {
                if ((int)(*(int *)(((int)stk + 16))) >= (int)0xC) {
                    break;
                }
                t23 = (*(int *)(((int)stk + 16)));
                t30 = ((*(int *)(((int)stk + 24))) + t23);
                t23 = (*(int *)(((int)stk + 4)));
                *(unsigned char *)((t30 + 0x0)) = (*(signed char *)((((*(int *)(((int)stk + 16))) + 0x4) + t23)));
                t24 = (*(int *)(((int)stk + 16)));
                t24 = (t24 + 0x1);
                *(unsigned int *)(((int)stk + 16)) = t24;
            }
            *(unsigned char *)(((*(int *)(((int)stk + 24))) + 0xC)) = 0x0;
            t34 = *(int *)(((int)stk + 0));
            *(unsigned int *)((t34 + 0x18)) = ((*(int *)((t34 + 0x18))) + 0x1);
            return 0x0;
        }
        *(unsigned char *)(((int)stk + 11)) = (*(signed char *)(((*(int *)(((int)stk + 4))) + 0x0)));
        t38 = *(signed char *)(((int)stk + 11));
        if (((unsigned char)t38 != 51) && (t39 = *(signed char *)(((int)stk + 11)), (unsigned char)t39 != 0xCC)) {
            t40 = *(int *)(((int)stk + 0));
            *(unsigned int *)((t40 + 0x18)) = ((*(int *)((t40 + 0x18))) + 0x1);
            *(unsigned int *)(((int)stk + 20)) = ((*(int *)(((int)stk + 20))) + 0x1);
            *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x20);
            continue;
        }
        break;
    }
    *(unsigned int *)(((int)stk + 12)) = 0x1;
    t46 = *(int *)(((int)stk + 12));
    if (t46 == 0) {
        return 0xFFFFFF05;
    }
    *(unsigned int *)(((int)stk + 16)) = 0x0;
    t45 = (unsigned char)t38;
    for (;;) {
        if ((int)(*(int *)(((int)stk + 16))) >= (int)0xC) {
            break;
        }
        t45 = (*(int *)(((int)stk + 16)));
        t52 = ((*(int *)(((int)stk + 24))) + t45);
        t45 = (*(int *)(((int)stk + 4)));
        *(unsigned char *)((t52 + 0x0)) = (*(signed char *)((((*(int *)(((int)stk + 16))) + 0x4) + t45)));
        t46 = (*(int *)(((int)stk + 16)));
        t46 = (t46 + 0x1);
        *(unsigned int *)(((int)stk + 16)) = t46;
    }
    *(unsigned char *)(((*(int *)(((int)stk + 24))) + 0xC)) = 0x0;
    t56 = *(int *)(((int)stk + 0));
    *(unsigned int *)((t56 + 0x18)) = ((*(int *)((t56 + 0x18))) + 0x1);
    return 0x0;
}

int vmsfs_fopen(int a4, int a5, int a6)
{
    int stk[16];
    register int t4;
    register int t8;
    register int t12;
    register int t15;
    register int t18;
    register int t20;
    register int t23;

    *(unsigned int *)(((int)stk + 60)) = a4;
    *(unsigned int *)(((int)stk + 56)) = a5;
    *(unsigned int *)(((int)stk + 52)) = a6;
    *(unsigned int *)(((*(int *)(((int)stk + 52))) + 0x0)) = 0x0;
    if ((*(signed char *)((((*(int *)(((int)stk + 60))) * 0x154) + 0xC2C8D2E))) == 0) {
        return 0xFFFFFF01;
    }
    t4 = vmsio_isready((*(int *)(((int)stk + 60))));
    if (t4 == 0) {
        vmsfs_unmount((*(int *)(((int)stk + 60))));
        return 0xFFFFFF01;
    }
    t8 = vmsio_ismount((*(int *)(((int)stk + 60))));
    if (t8 == 0) {
        return 0xFFFFFF01;
    }
    if ((*(signed char *)((((*(int *)(((int)stk + 60))) * 0x154) + 0xC2C8D34))) == 0) {
        return 0xFFFFFF01;
    }
    t12 = buIsFormat((*(int *)(((int)stk + 60))));
    if ((int)t12 < 0) {
        return 0xFFFFFF03;
    }
    t15 = FUN_0c08faa8((*(int *)(((int)stk + 60))), (*(int *)(((int)stk + 56))));
    if ((int)t15 < 0) {
        return 0xFFFFFF07;
    }
    t18 = FUN_0c08fabc((*(int *)(((int)stk + 60))), (*(int *)(((int)stk + 56))));
    *(unsigned int *)(((int)stk + 0)) = t18;
    if ((int)t18 < 0) {
        return 0xFFFFFF41;
    }
    t20 = FUN_0c08fa24((*(int *)(((int)stk + 60))));
    *(unsigned int *)(((int)stk + 48)) = t20;
    if (t20 == 0) {
        return 0xFFFFFF07;
    }
    t23 = FUN_0c08f204((*(int *)(((int)stk + 60))), (*(int *)(((int)stk + 56))), (((int)stk + 0) + 0x4));
    *(unsigned int *)0xC2CDC90 = t23;
    if ((int)t23 < 0) {
        FUN_0c08fa8a((*(int *)(((int)stk + 48))));
        return 0xFFFFFF05;
    }
    *(unsigned int *)(((*(int *)(((int)stk + 48))) + 0x4)) = 0x0;
    *(unsigned int *)(((*(int *)(((int)stk + 48))) + 0x34)) = (*(int *)(((int)stk + 44)));
    *(unsigned int *)(((*(int *)(((int)stk + 48))) + 0x38)) = (*(int *)(((int)stk + 16)));
    (((struct o40_uint *)((*(int *)(((int)stk + 48)))))->v) = (*(int *)(((*(int *)(((int)stk + 48))) + 0x38)));
    *(unsigned int *)(((*(int *)(((int)stk + 48))) + 0x28)) = (*(int *)(((int)stk + 60)));
    *(unsigned short *)(((*(int *)(((int)stk + 48))) + 0x2)) = (*(short *)(((int)stk + 12)));
    *(unsigned char *)(((*(int *)(((int)stk + 48))) + 0x1)) = (*(signed char *)(((int)stk + 14)));
    *(unsigned int *)(((*(int *)(((int)stk + 52))) + 0x0)) = (*(int *)(((int)stk + 48)));
    return 0x0;
}

int FUN_0c14f8ac(int a4, int a5, int a6, int a7)
{
    int stk[1];

    register int R1;
    register int R2;
    register int R3;
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
    v0_8 = a4;
    v0_6 = a5;
    v0_7 = a6;
    *(unsigned int *)(((int)stk + 0)) = v0_8;
    v0_0 = (0x800);
    v0_1 = (0xC2D56AC);
    v0_9 = (0xC1616CE);
    if ((v0_8 == ((((struct o4_int *)0xC2D3620)->v)))) goto L_C14F8DA;
    v0_0 = ((int (*)(int, int, int, int))(FUN_0c1616ce))(0xC1706F0, v0_6, v0_7, a7);
    v0_0 = (0xFFFFFFFD);
    L_C14FA02:;
    return v0_0;
    L_C14F8DA:;
    v0_3 = FUN_0c150460(((((struct o0_int *)0xC2D3620)->v)));
    v0_2 = (v0_3);
    if (!((v0_3 == 3))) goto L_C14FA00;
    v0_8 = *(int *)((((*(int *)(((int)stk + 0))) << 2) + 0xC2D21F4));
    *(unsigned int *)(((int)stk + 0)) = (v0_8 + 0x3C);
    v0_3 = (v0_8);
    v0_4 = (0x0);
    v0_5 = (((v0_8 + 0x3C) + 0x2));
    if (((*(int *)((v0_8 + 0x8))) != 0)) goto L_C14F962;
    v0_8 = (FUN_0c07ffbc((*(int *)((v0_1 + 0x0))), 0xC170724, 0x3)) == 0;
    if (v0_8) goto L_C14F918;
    v0_8 = (0xC170728);
    goto L_C14F92C;
    L_C14FA00:;
    v0_0 = (v0_2);
    goto L_C14FA02;
    L_C14F92C:;
    v0_0 = ((int (*)(int, int, int))(FUN_0c1616ce))(v0_8, v0_6, v0_7);
    FUN_0c14f85c();
    v0_0 = (0x4);
    goto L_C14FA02;
    L_C14F918:;
    v0_8 = *(int *)((v0_1 + 0x0));
    v0_9 = (int)(*(int *)(((((v0_4 + 0x1) << 2) + v0_8) + 0x0))) <= (int)0x10000;
    v0_8 = (((v0_4 + 0x1) << 2) + v0_8);
    v0_4 = ((v0_4 + 0x1));
    v0_8 = v0_8;
    if (v0_9) goto L_C14F938;
    v0_8 = (0xC17075C);
    goto L_C14F92C;
    L_C14F938:;
    v0_6 = *(int *)((v0_8 + 0x0));
    *(unsigned short *)((v0_3 + 0xC)) = v0_6;
    *(unsigned int *)((v0_3 + 0x8)) = (unsigned short)v0_6;
    *(unsigned int *)((v0_3 + 0x4)) = (((unsigned int)((((unsigned short)v0_6 + 0x1) << 1) + 0x3E) >> 2) << 2);
    *(unsigned short *)(((*(int *)(((int)stk + 0))) + 0x0)) = ((int)((int)(*(int *)(((*(int *)((v0_1 + 0x0))) + ((v0_4 + 0x1) << 2)))) / (int)v0_0));
    v0_4 = ((v0_4 + 0x1));
    L_C14F962:;
    v0_6 = (int)(v0_4 + 0x1) >= (int)0x200;
    v0_4 = ((v0_4 + 0x1));
    v0_9 = (0x200);
    if (v0_6) goto L_C14F9DE;
    v0_8 = (0xC2D361C);
    v0_6 = (0x3);
    v0_7 = (0x7FF);
    L_C14F970:;
    v0_10 = *(int *)((v0_8 + 0x0));
    *(unsigned int *)((v0_8 + 0x0)) = (v0_10 + 0x1);
    *(unsigned short *)((((((v0_10 + 0x1) - 1) << 1) + v0_5) + 0x0)) = ((int)((int)((*(int *)(((*(int *)((v0_1 + 0x0))) + (v0_4 << 2)))) + v0_7) / (int)v0_0));
    if (((int)(*(int *)((v0_8 + 0x0))) < (int)(*(int *)((v0_3 + 0x8))))) goto L_C14F9D8;
    FUN_0c14f85c();
    v0_2 = (v0_6);
    L_C14F9DE:;
    if (((int)v0_4 < (int)v0_9)) goto L_C14FA00;
    v0_0 = (int)(FUN_0c1500d2(((((struct o0_int *)0xC2D3620)->v)), 0x1, (*(int *)((v0_1 + 0x0))))) >= 0;
    if (v0_0) goto L_C14F9F8;
    FUN_0c14f85c();
    v0_2 = (0x4);
    goto L_C14FA00;
    L_C14F9F8:;
    v0_2 = ((*(signed char *)((((((struct o0_int *)0xC2D3620)->v)) + 0x1))));
    goto L_C14FA00;
    L_C14F9D8:;
    v0_10 = (int)(v0_4 + 0x2) < (int)v0_9;
    v0_4 = ((v0_4 + 0x2));
    if (v0_10) goto L_C14F970;
    goto L_C14F9DE;
}

void syChainDeleteHandler(int a4)
{
    int stk[1];

    register int R2;
    register int R3;
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
    v0_4 = a4;
    *(unsigned short *)(((int)stk + 0)) = (_builtin_get_imask());
    _builtin_set_imask(0xF);
    v0_1 = (((v0_4 << 2) << 2));
    v0_2 = ((((v0_4 << 2) << 2) + 0xC300E60));
    v0_4 = (0x100);
    v0_0 = (0x1);
    v0_7 = (0x1);
    v0_3 = (0xC300E60);
    L_C15DD82:;
    v0_5 = ((((v0_7 << 2) << 2) + v0_3));
    if (((*(int *)(((((v0_7 << 2) << 2) + v0_3) + 0x4))) != v0_2)) goto L_C15DD98;
    if ((((*(int *)((v0_5 + 0xC))) & 0x80000000) != 0)) goto L_C15DD9E;
    L_C15DD98:;
    v0_5 = (unsigned int)(v0_7 + 0x1) < (unsigned int)v0_4;
    v0_7 = ((v0_7 + 0x1));
    if (v0_5) goto L_C15DD82;
    L_C15DD9E:;
    v0_6 = (0x0);
    if ((v0_7 == v0_4)) goto L_C15DDB6;
    *(unsigned int *)(((((v0_7 << 2) << 2) + v0_3) + 0x4)) = (*(int *)(((v0_1 + v0_3) + 0x4)));
    *(unsigned int *)(((v0_1 + v0_3) + 0xC)) = v0_6;
    L_C15DE90:;
    _builtin_set_imask(((unsigned int)((((unsigned short)(*(short *)(((int)stk + 0))) & 0xF) << 2) << 2) >> 4));
    return;
    L_C15DDB6:;
    v0_2 = (v0_1 + v0_3);
    v0_7 = (0xA05F6920);
    v0_1 = (0xC0);
    v0_2 = v0_2;
    v0_5 = (v0_0);
    v0_4 = (0xC301E60);
    v0_3 = (0x90);
    v0_8 = (0x200);
    v0_9 = (0xA05F6924);
    L_C15DDC8:;
    if (((*(int *)((v0_4 + (v0_5 << 2)))) != v0_2)) goto L_C15DE88;
    *(unsigned int *)((((v0_5 << 2) + v0_4) + 0x0)) = (*(int *)((v0_2 + 0x4)));
    *(unsigned int *)((v0_2 + 0xC)) = v0_6;
    if (((*(int *)((((v0_5 << 2) + v0_4) + 0x0))) != 0)) goto L_C15DE8E;
    if ((v0_5 != v0_3)) goto L_C15DDF4;
    kmSetVSyncCallback(0x0, 0x0);
    L_C15DE8E:;
    goto L_C15DE90;
    L_C15DDF4:;
    if ((v0_5 != 0x92)) goto L_C15DE06;
    kmSetHSyncCallback(0x0, 0x0);
    goto L_C15DE8E;
    L_C15DE06:;
    v0_1 = (((int)(short)((v0_5 << 2) << 2) >> 8));
    v0_2 = (((v0_5 << 2) << 2));
    v0_3 = (((unsigned int)((unsigned int)((unsigned int)(unsigned char)((v0_5 << 2) << 2) >> 2) >> 2) >> 1));
    if ((((int)(short)((v0_5 << 2) << 2) >> 8) != 10)) goto L_C15DE32;
    *(unsigned int *)((v0_7 + 0x0)) = ((*(int *)((v0_7 + 0x0))) & (~((int)v0_0 << (int)(v0_3 + 0xC))));
    L_C15DE42:;
    *(unsigned int *)((((((int)_builtin_get_vbr()) + ((unsigned int)((unsigned int)(v0_2 - 512) >> 2) >> 1)) + v0_8) + 0x0)) = 0xC168008;
    goto L_C15DE8E;
    L_C15DE32:;
    if ((v0_1 != 11)) goto L_C15DE42;
    *(unsigned int *)((v0_9 + 0x0)) = ((*(int *)((v0_9 + 0x0))) & (~((int)v0_0 << (int)v0_3)));
    goto L_C15DE42;
    L_C15DE88:;
    v0_10 = (unsigned int)(v0_5 + 0x1) < (unsigned int)v0_1;
    v0_5 = ((v0_5 + 0x1));
    if (v0_10) goto L_C15DDC8;
    goto L_C15DE8E;
}

int kmiProcessVertex_10(int a4)
{
    int stk[4];
    register int t3;
    register int t5;
    register float u14;
    register float u22;
    register float u30;
    register int t31;
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
    R1000 = ((((struct o8_int *)0xC300A6C)->v));
    t5 = (((struct oC_int *)0xC300A6C)->v);
    (((struct o0_uint *)0xC300974)->v) = t3;
    (((struct o4_uint *)0xC300974)->v) = (R1000);
    (((struct o8_uint *)0xC300974)->v) = t5;
    (((struct oC_uint *)0xC300974)->v) = (*(int *)(((R1004) + 0x4)));
    (((struct o10_uint *)0xC300974)->v) = (*(int *)(((R1004) + 0x8)));
    (((struct o14_uint *)0xC300974)->v) = (*(int *)(((R1004) + 0xC)));
    u14 = (((struct o10_float *)((R1004)))->v);
    (((struct o18_uint *)0xC300974)->v) = ((((((int)(u14 * 255.0f) << 16) << 8) | ((int)(u14 * 255.0f) << 16)) | ((int)(u14 * 255.0f) << 8)) | (int)(u14 * 255.0f));
    (((struct o1C_uint *)0xC300974)->v) = (*(int *)(((R1008) + 0x4)));
    (((struct o20_uint *)0xC300974)->v) = (*(int *)(((R1008) + 0x8)));
    (((struct o24_uint *)0xC300974)->v) = (*(int *)(((R1008) + 0xC)));
    u22 = (((struct o10_float *)((R1008)))->v);
    (((struct o28_uint *)0xC300974)->v) = ((((((int)(u22 * 255.0f) << 16) << 8) | ((int)(u22 * 255.0f) << 16)) | ((int)(u22 * 255.0f) << 8)) | (int)(u22 * 255.0f));
    (((struct o2C_uint *)0xC300974)->v) = (*(int *)(((R1012) + 0x4)));
    (((struct o30_uint *)0xC300974)->v) = (*(int *)(((R1012) + 0x8)));
    (((struct o34_uint *)0xC300974)->v) = (*(int *)(((R1012) + 0xC)));
    u30 = (((struct o10_float *)((R1012)))->v);
    (((struct o38_uint *)0xC300974)->v) = ((((((int)(u30 * 255.0f) << 16) << 8) | ((int)(u30 * 255.0f) << 16)) | ((int)(u30 * 255.0f) << 8)) | (int)(u30 * 255.0f));
    (((struct o0_uint *)0xC300A6C)->v) = 0x3C;
    t31 = kmiBGPlaneCountWords(t3);
    kmiBGPlaneSetPCW(t31, 0x0, 0x0);
    (((struct o14_uint *)0xC300A6C)->v) = (*(int *)(((R1004) + 0xC)));
    return 0x0;
}

int vmsfs_xwrite1(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(int *)((a4 + 0x28));
    t1 = vmsio_isready((*(int *)((a4 + 0x28))));
    if (t1 == 0) {
        vmsfs_unmount((*(int *)((a4 + 0x28))));
        return 0xFFFFFF01;
    }
    t1 = vmsio_ismount((*(int *)((a4 + 0x28))));
    if (t1 == 0) {
        return 0xFFFFFF01;
    }
    if ((*(signed char *)((((*(int *)((a4 + 0x28))) * 0x154) + 0xC2C8D34))) == 0) {
        return 0xFFFFFF01;
    }
    t1 = buIsFormat((*(int *)((a4 + 0x28))));
    if ((int)t1 < 0) {
        return 0xFFFFFF03;
    }
    *(volatile int *)((a4 + 0x8));
    t1 = *(int *)((a4 + 0x28));
    t2 = *(int *)((a4 + 0x30));
    t3 = FUN_0c08f87c(t1, t2);
    if ((unsigned short)t3 != 0xFFFC) {
        return 0xFFFFFF04;
    }
    if ((int)(*(int *)((a4 + 0x30))) >= (int)(*(int *)(((*(int *)((((t0 * 0x154) + 0xC2C8D2C) + 0x1C))) + 0x38)))) {
        return 0xFFFFFF04;
    }
    t0 = vmsfs_write_retry(t1, t2, a5);
    if ((int)t0 < 0) {
        return t0;
    }
    FUN_0c08f824(t1, t2, 0xFFFA);
    if ((*(int *)((a4 + 0x38))) == 0xFFFF) {
        *(unsigned int *)((a4 + 0x38)) = (short)t2;
        *(unsigned int *)((a4 + 0x3C)) = (short)t2;
    } else {
        FUN_0c08f824(t1, (*(int *)((a4 + 0x3C))), t2);
        *(unsigned int *)((a4 + 0x3C)) = (short)t2;
    }
    *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
    return 0x0;
}

void FUN_0c04e9ac(void)
{
    register int t5;
    register int t6;
    register int t8;
    int t10;
    register int t27;
    register int t36;
    register int t64;
    int t11;
    int t15;
    int t37;
    int t38;
    int t42;

    if (((((struct o14_int *)0xC2B1CE8)->v)) != 0) {
        return;
    }
    if ((int)((((struct o0_int *)0xC2B1D70)->v)) >= (int)0x3B0) {
        return;
    }
    t5 = *(short *)0xC28ED98;
    t6 = 0x0;
    if ((0x4 & (unsigned short)t5) != 0) {
        t6 = 0x1;
    }
    t8 = t6;
    if (((unsigned short)t5 & 0x8) != 0) {
        t8 = (t6 + 0x1);
    }
    t10 = (((struct oC_int *)0xC2B1D70)->v);
    if (((0x10000 & t10) != 0) && (t11 = (((struct o4_int *)0xC2B1DB4)->v), (int)t11 < (int)t8)) {
        (((struct o4_uint *)0xC2B1DB4)->v) = (((((struct o4_int *)0xC2B1DB4)->v)) + 0x1);
        (((struct o0_float *)0xC2B1CE8)->v) = 480.0f;
    } else {
        if (((t10 & 0x20000) != 0) && (t15 = (((struct o4_int *)0xC2B1DB4)->v), (int)t15 > 0)) {
            (((struct o4_uint *)0xC2B1DB4)->v) = (((((struct o4_int *)0xC2B1DB4)->v)) - 1);
            (((struct o0_float *)0xC2B1CE8)->v) = 480.0f;
        }
    }
    t27 = (((struct o4_int *)0xC2B1DB4)->v);
    switch (t27) {
    case 0:
        (((struct o0_uint *)0xC2B1DB4)->v) = 0x0;
        break;
    case 1:
        (((struct o0_uint *)0xC2B1DB4)->v) = 0x8;
        break;
    case 2:
        (((struct o0_uint *)0xC2B1DB4)->v) = 0x10;
        break;
    default:
        (((struct o0_uint *)0xC2B1DB4)->v) = 0x0;
        break;
    }
    t36 = *(signed char *)0xC1EC783;
    if ((((unsigned char)t36 != 1) && (t37 = (((struct o0_int *)0xC1EC758)->v), (t37 & 0xFFFFFDF3) == 0)) || (((unsigned char)t36 == 1) && (t38 = (((struct o0_int *)0xC1EC758)->v), (t38 & 0xFFFFFFF1) == 0))) {
        if ((((((struct o4_int *)0xC1EC758)->v)) == 4) && (t42 = (((struct o0_int *)0xC1EC758)->v), (t42 & 0x202) != 0)) {
            (((struct o0_uint *)0xC2B1B9C)->v) = 0x1;
        }
        if (((((struct o4_int *)0xC1EC758)->v)) == 4) {
            if ((((((struct o0_int *)0xC1EC758)->v)) & 8) != 0) {
                (((struct o4_uint *)0xC2B1B9C)->v) = 0x1;
            }
        }
    }
    t64 = 0x1;
    if (((((struct o0_int *)0xC2B1D70)->v)) != 0) {
        t64 = 0x0;
        if ((((((struct o4_int *)0xC1EC758)->v)) & 4) != 0) {
            t64 = 0x1;
        }
    }
    if (t64 != 0) {
        (((struct o14_uint *)0xC2B1CE8)->v) = 0x1;
        (((struct o28_uint *)0xC2B1D70)->v) = (((((struct o28_int *)0xC2B1D70)->v)) + 0x1);
        FUN_0c01e9e2(0x3C, 0xF0);
        Voice_ShutUp(0x0);
        FUN_0c058f64((*(int *)((((*(int *)((((((struct o18_int *)0xC2B1CE8)->v)) + 0x0))) << 2) + 0xC131D58))), 0x0, 0x6E, 0x0);
    return;
    }
}

int FUN_0c14b704(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = *(int *)((a5 + 0x8));
    t1 = *(signed char *)(((t0 + 0x8) + 0x1));
    t2 = *(signed char *)(((t0 + 0x8) + 0x0));
    if ((unsigned int)(*(signed char *)((((t0 + 0x8) + 0x3) + 0x0))) >= (unsigned int)(*(signed char *)0xC2D126C)) {
        *(unsigned char *)(((0xC2D126E + a6) + 0x0)) = 0x1;
        t3 = ((((unsigned char)t2 | ((unsigned char)t1 << 8)) | 0xFFFF0000) & 0xFFFDFFFF);
    } else {
        if ((unsigned int)(*(signed char *)((((t0 + 0x8) + 0x3) + 0x0))) <= (unsigned int)(*(signed char *)0xC2D126D)) {
            *(unsigned char *)(((0xC2D126E + a6) + 0x0)) = 0x0;
            t4 = ((((unsigned char)t2 | ((unsigned char)t1 << 8)) | 0xFFFF0000) | 0x20000);
        } else {
            t4 = (((unsigned char)t2 | ((unsigned char)t1 << 8)) | 0xFFFF0000);
            if ((*(signed char *)(((0xC2D126E + a6) + 0x0))) != 0) {
                t4 = ((((unsigned char)t2 | ((unsigned char)t1 << 8)) | 0xFFFF0000) & 0xFFFDFFFF);
            }
        }
        t3 = t4;
    }
    if ((unsigned int)(*(signed char *)((((t0 + 0x8) + 0x2) + 0x0))) >= (unsigned int)(*(signed char *)0xC2D126C)) {
        *(unsigned char *)(((0xC2D1286 + a6) + 0x0)) = 0x1;
        t1 = (t3 & 0xFFFEFFFF);
    } else {
        if ((unsigned int)(*(signed char *)((((t0 + 0x8) + 0x2) + 0x0))) <= (unsigned int)(*(signed char *)0xC2D126D)) {
            *(unsigned char *)(((0xC2D1286 + a6) + 0x0)) = 0x0;
            t2 = (t3 | 0x10000);
        } else {
            t4 = t3;
            if ((*(signed char *)(((0xC2D1286 + a6) + 0x0))) != 0) {
                t4 = (t3 & 0xFFFEFFFF);
            }
            t2 = t4;
        }
        t1 = t2;
    }
    t2 = t1;
    if ((*(int *)0xC2D1268) == 0) {
        t2 = (t1 ^ 0xFFFFFFFF);
    }
    *(unsigned int *)((a4 + 0x8)) = t2;
    t1 = 0x0;
    if (((*(int *)((a4 + 0x4))) & 0x10000) != 0) {
        t1 = (unsigned char)(*(signed char *)((((t0 + 0x8) + 0x2) + 0x0)));
    }
    *(unsigned short *)((a4 + 0x18)) = t1;
    t1 = 0x0;
    if (((*(int *)((a4 + 0x4))) & 0x20000) != 0) {
        t1 = (unsigned char)(*(signed char *)((((t0 + 0x8) + 0x3) + 0x0)));
    }
    *(unsigned short *)((a4 + 0x1A)) = t1;
    t1 = 0x0;
    if (((*(int *)((a4 + 0x4))) & 0x40000) != 0) {
        t1 = ((unsigned char)(*(signed char *)(((t0 + 0x8) + 0x4))) - 128);
    }
    *(unsigned short *)((a4 + 0x1C)) = t1;
    t1 = 0x0;
    if (((*(int *)((a4 + 0x4))) & 0x80000) != 0) {
        t1 = ((unsigned char)(*(signed char *)(((t0 + 0x8) + 0x5))) - 128);
    }
    *(unsigned short *)((a4 + 0x1E)) = t1;
    t1 = 0x0;
    if (((*(int *)((a4 + 0x4))) & 0x100000) != 0) {
        t1 = ((unsigned char)(*(signed char *)(((t0 + 0x8) + 0x6))) - 128);
    }
    (((struct o20_ushort *)(a4))->v) = t1;
    t1 = 0x0;
    if (((*(int *)((a4 + 0x4))) & 0x200000) != 0) {
        t1 = ((unsigned char)(*(signed char *)(((t0 + 0x8) + 0x7))) - 128);
    }
    (((struct o22_ushort *)(a4))->v) = t1;
    return 0x22;
}


int nlCharacter(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;

    t0 = (((struct o0_int *)0xC2BB82C)->v);
    u0 = (((struct o4_float *)0xC147370)->v);
    t1 = (((struct o4_int *)0xC2BB82C)->v);
    if (((((struct o0_int *)0xC147370)->v)) == 0) {
        t2 = *(short *)(((((signed char)a6 << 1) + 0xC2BB8BC) + 0x2));
        t3 = *(short *)(((((signed char)a6 << 1) + 0xC2BB8BC) + 0x0));
        *(unsigned int *)((a7 + 0x0)) = 0xF0000000;
        (((struct o4_float *)(a7))->v) = (float)a4;
        (((struct o8_float *)(a7))->v) = (float)a5;
        (((struct oC_float *)(a7))->v) = u0;
        (((struct o10_float *)(a7))->v) = ((float)a4 + (float)t0);
        (((struct o14_float *)(a7))->v) = (float)a5;
        (((struct o18_float *)(a7))->v) = u0;
        (((struct o1C_float *)(a7))->v) = ((float)a4 + (float)t0);
        _builtin_prefetch((void *)a7);
        (((struct o20_float *)(a7))->v) = ((float)a5 + (float)t1);
        (((struct o4_float *)((a7 + 0x20)))->v) = u0;
        (((struct o8_float *)((a7 + 0x20)))->v) = (float)a4;
        (((struct oC_float *)((a7 + 0x20)))->v) = ((float)a5 + (float)t1);
        *(unsigned int *)(((a7 + 0x20) + 0x10)) = ((((((signed char)a6 << 16) << 8) | ((signed char)a6 << 16)) | ((signed char)a6 << 8)) | (signed char)a6);
        *(unsigned int *)(((a7 + 0x20) + 0x14)) = t3;
        *(unsigned int *)(((a7 + 0x20) + 0x18)) = (t3 | 0x3F800000);
        *(unsigned int *)(((a7 + 0x20) + 0x1C)) = (t2 | 0x3F800000);
    } else {
        t2 = *(short *)0xC2BF8F0;
        t3 = *(short *)(((((signed char)a6 << 1) + 0xC2BB8BC) + 0x0));
        t4 = *(short *)(((((signed char)a6 << 1) + 0xC2BB8BC) + 0x2));
        *(unsigned int *)((a7 + 0x0)) = 0xF0000000;
        (((struct o4_float *)(a7))->v) = (float)(((-a5) - t1) + t2);
        (((struct o8_float *)(a7))->v) = (float)a4;
        (((struct oC_float *)(a7))->v) = u0;
        (((struct o10_float *)(a7))->v) = ((float)(((-a5) - t1) + t2) + (float)t1);
        (((struct o14_float *)(a7))->v) = (float)a4;
        (((struct o18_float *)(a7))->v) = u0;
        (((struct o1C_float *)(a7))->v) = ((float)(((-a5) - t1) + t2) + (float)t1);
        _builtin_prefetch((void *)a7);
        (((struct o20_float *)(a7))->v) = ((float)a4 + (float)t0);
        (((struct o4_float *)((a7 + 0x20)))->v) = u0;
        (((struct o8_float *)((a7 + 0x20)))->v) = (float)(((-a5) - t1) + t2);
        (((struct oC_float *)((a7 + 0x20)))->v) = ((float)a4 + (float)t0);
        *(unsigned int *)(((a7 + 0x20) + 0x10)) = ((((((signed char)a6 << 16) << 8) | ((signed char)a6 << 16)) | ((signed char)a6 << 8)) | (signed char)a6);
        *(unsigned int *)(((a7 + 0x20) + 0x14)) = t4;
        *(unsigned int *)(((a7 + 0x20) + 0x18)) = t3;
        *(unsigned int *)(((a7 + 0x20) + 0x1C)) = (t3 | 0x3F800000);
    }
    _builtin_prefetch((void *)(a7 + 0x20));
    return ((a7 + 0x20) + 0x20);
}
