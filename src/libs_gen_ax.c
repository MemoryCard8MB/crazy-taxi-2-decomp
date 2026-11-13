/* Library code: C that behaves like this game's own bytes. */
/* Straight-line functions with calls and guards (batch gen_ax): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXT_Finish(void);
int nlIntrDefaultFunction(void);
int syMallocFinish(void);
int kmiMemCopy4(int, int, int);
int kmiResetCallback(void);
int SJMEM_Lock(void);
int SJMEM_Unlock(int, int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int buStat(void);
int check_cache(int);
int check_caps(int);
int discardVertexBuffer(void);
int kdSetHandler(int, int);
int kmiDMAtoTARequest(int, int, int, int, int);
int kmiPurgeMemory(int, int);
int kmiWaitForFinishDMA(int);
int memset(int, int, int);
int pdExitPeripheral(void);
int pdVibSetStopTime(int, int, int, int);
int set_fat(int, int);
int set_vmstime(int, int);
int setjmp(int);
int syBtExit(void);
int syChainMasterHandler(int);
int syHwFinish(void);
int syRtcFinish(void);
int thunk_syCfgExit(void);
int vmsfs_c_init(int);
int vmsfs_init(int, int, int);
int vmsfs_mediainfo_retry(int, int);
int vmsfs_write_retry(int, int, int);
int vmsio_ismount(int);
int vmuExit(void);
int write_dir_all(int);
int write_fat(int);
int write_sys(int);
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o10_ushort { char p[0x10]; unsigned short v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o20_int { char p[0x20]; int v; };
struct o24_int { char p[0x24]; int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_uint { char p[0xC]; unsigned int v; };






int syChainClx1Handler(int a4)
{
    int t20;
    int t0;
    int t1;
    int t3;
    int t5;
    int t6;
    int t7;

    t20 = ((int)(short)a4 >> 4);
    if (((int)(short)a4 >> 4) != 50) {
        t20 = ((int)(short)a4 >> 4);
        if (((int)(short)a4 >> 4) == 54) {
            _builtin_set_imask(0x4);
            t0 = (((struct o0_int *)0xA05F6900)->v);
            t1 = (((struct o20_int *)0xA05F6900)->v);
            if (((unsigned int)((unsigned int)((unsigned int)(t0 & t1) >> 8) >> 2) >> 2) != 0) {
                t20 = 0xA05F6900;
                t3 = 0x0;
                while (((int)0x1 << (int)t3) != 0x80) {
                    if ((((int)0x1 << (int)t3) & ((unsigned int)((unsigned int)((unsigned int)(t0 & t1) >> 8) >> 2) >> 2)) != 0) {
                        t20 = syChainMasterHandler(((((t3 << 2) << 2) << 1) + 0xA00));
                    }
                    t3 = (t3 + 0x1);
                }
            } else {
                t5 = (((struct o4_int *)0xA05F6900)->v);
                t6 = (((struct o24_int *)0xA05F6900)->v);
                t7 = 0x0;
                while (((int)0x1 << (int)t7) != 16) {
                    if ((((int)0x1 << (int)t7) & (t5 & t6)) != 0) {
                        syChainMasterHandler(((((t7 << 2) << 2) << 1) + 0xB00));
                    }
                    t7 = (t7 + 0x1);
                }
                t20 = ((int)0x1 << (int)t7);
            }
        }
    }
    return t20;
}
