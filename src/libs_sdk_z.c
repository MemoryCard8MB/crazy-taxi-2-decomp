/* Library code: C that behaves like this game's own bytes. */
/* Small loops the generator skips (backward branches): fills, copies, polling loops and table scans. */

extern int buExit(void);
extern void ADXSTMF_ExecHndl(void *stm);
extern int vmsio_isready(int drive);
extern int pdGetPeripheral(int port);
extern int ndPuru2Stop(int port);

extern int syG2DmaSuspend(void *ch);
extern int syG2DmaResume(void *ch);


/* Fill n words at dst with val; returns n. */
int mpdrv_memset_l(int *dst, int val, int n)
{
    int i;

    for (i = 0; i < n; i++) {
        dst[i] = val;
    }
    return n;
}


/* Copy n bytes; the source comes first. */
void gdFsMemcpy(char *src, char *dst, int n)
{
    while (n > 0) {
        *dst++ = *src++;
        n--;
    }
}


/* tbl[0] is a bit mask (bit 31 first); each set bit owns the next word after it. Returns the word
   owned by bit `dev`, or 0 when that bit is not set. */
unsigned int *kdDevGetFD(unsigned int *tbl, unsigned int dev)
{
    unsigned int mask = tbl[0];
    unsigned int *p = tbl + 1;
    unsigned int bit = 0x80000000;
    int i;

    for (i = 0; i < 32; i++) {
        if (mask & bit) {
            if (dev == bit) {
                return p;
            }
            p++;
        }
        bit >>= 1;
    }
    return 0;
}
