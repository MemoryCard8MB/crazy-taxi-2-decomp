/* Library code: C that behaves like this game's own bytes. */
extern int crowdTask();
/* Straight-line functions with calls and guards (batch gen_ar): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Chat_Choin(void);
void nlSetBackColor(int, int, int);
int nlSetWindowSize(float, float, float, float);
int nlsndBlockMove(int, int, int);
int nlsndBlockMoveStatus(void);
int nlsndPackFreeInit(int, int, int);
int nlsndSeqRequest(void);
int nlsndStreamChgPan(int, int, int);
int kmytex_FBAllocEntry(void);
int kmytex_FBEnQueueTop(int, int, int);
int SJMEM_Lock(void);
int GetCollision2D(int, float);
int SJMEM_Unlock(int, int);
int SJRBF_Lock(void);
int SJRBF_Unlock(int, int);
int SJUNI_Lock(void);
int SJUNI_Unlock(int, int);
int SJ_SplitChunk(int, int, int);
int TrainCarInit(int, int, int);
int buIsFormat(void);
int check_cache(int);
int check_caps(int);
int check_fat_all(int);
int check_fat_xross(int, int);
int check_file_correct(int);
int check_isopen(void);
int clear_file(int, int);
int close_file_handle(void);
int cmp_fname(int, int);
int direntry(int, int);
int direntry_dirty(int, int);
int get_fat(int, int);
int get_vmstime(int, int);
int kmFreeTexture(int);
int kmSetDisplayMode(int, int, int, int);
int kmSetPALEXTCallback(int);
int kmSetSystemConfiguration(int);
int kmStopDisplayFrameBuffer(void);
int kmiDMAtoTARequest(int, int, int, int, int);
int kmiWriteRegister(int, int);
int kmytex_FBDeQueueEntry(int, int, int);
int nlCloseEvent(int);
int nlCommonTextureClearTextureIndex(int);
int nlFreePalette(int);
int nlMalloc(int);
int nlSpriteClearSpriteIndex(int);
int nlsndCheckPackFreeError(int);
int nlsndStreamSetHdPan(int, int, int);
int open_file_handle(void);
int psgEnterState3(int);
int search_dir(int, int, int);
int search_dir_by_startfat(int, int);
int search_exec_file(int);
int search_fat(int, int);
int search_fat_free(int, int);
int search_fat_used(int);
int search_free_dir(int);
int set_event(int, int);
int set_fat(int, int);
int set_file_info(int, int);
int set_vmstime(int, int);
int vmsfs_c_progress(int);
int vmsfs_diskfree(int, int);
int vmsfs_fclose(int, int);
int vmsfs_fcreate(int, int, int, int);
int vmsfs_fgetsize(int, int);
int vmsfs_fwrite1(int, int);
int vmsfs_mediainfo_retry(int, int);
int vmsfs_mount2(int);
int vmsfs_read_retry(int, int, int);
int vmsfs_save_exec_file_verify(int, int, int, int, int, int);
int vmsfs_save_file_verify(int, int, int, int, int, int);
int vmsfs_unmount(int);
int vmsfs_write_retry(int, int, int);
int vmsfs_xcreate(int, int, int, int);
int vmsfs_xfind(int, int);
int vmsfs_xwrite1(int, int);
int vmsio_ismount(int);
int vmsio_isready(int);
int write_dir(int);
int write_fat(int);
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_ushort { char p[0x24]; unsigned short v; };
struct o26_short { char p[0x26]; short v; };
struct o26_ushort { char p[0x26]; unsigned short v; };
struct o28_ushort { char p[0x28]; unsigned short v; };
struct o2A_short { char p[0x2A]; short v; };
struct o2A_ushort { char p[0x2A]; unsigned short v; };
struct o2C_ushort { char p[0x2C]; unsigned short v; };
struct o2E_ushort { char p[0x2E]; unsigned short v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_int { char p[0x10]; int v; };
struct o14_int { char p[0x14]; int v; };
struct o4_int { char p[0x4]; int v; };
struct o8_int { char p[0x8]; int v; };
struct oC_int { char p[0xC]; int v; };


int kmiFBSearchFree(int a4, int a5, int a6)
{
    register int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;

    t3 = *(int *)((((((short)a4 << 2) + (short)a4) << 2) + 0xC173DF4));
    t4 = 0x0;
    if (t3 != 0) {
        t5 = 0x0;
        t6 = (short)a4;
        t7 = t3;
        for (;;) {
            t3 = *(int *)((t7 + 0xC));
            if (((int)t3 <= (int)a5) && ((t0 = *(int *)((t7 + 0x10)), t6 = t0, t6 = (t6 + t3), (int)t6 > (int)a5) && (((int)t3 <= (int)(a5 + a6)) && (t1 = *(int *)((t7 + 0x10)), t2 = t1, t2 = (t2 + t3), (int)t2 >= (int)(a5 + a6))))) {
                t5 = t7;
                t7 = 0x0;
            } else {
                t7 = (*(int *)((t7 + 0x8)));
            }
            if (t7 == 0) {
                break;
            }
        }
        t4 = t5;
    }
    if (t4 == 0) {
        return 0x3;
    }
    return 0x0;
}
