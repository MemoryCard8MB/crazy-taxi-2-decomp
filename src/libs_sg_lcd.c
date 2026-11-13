/* Library code: C that behaves like this game's own bytes. */
/* Shinobi library, SG_LCD (the VMU screen): our own C, written from the disassembly. */

extern unsigned char pdVmsLcdSlotTable[];
extern char pdVmsLcdBufs[];

extern int  pdVmsLcdIsReady(int dev);
extern void pdVmsLcdBlt(void *buf, void *src, int flag);
extern int  kdSetBlockWrite(int dev, int a, int b, int c, int d, void *buf, int len);


int pdVmsLcdWrite1(int dev, void *data)
{
    if (!pdVmsLcdIsReady(dev))
        return -2;
    if (kdSetBlockWrite(dev, 4, 0, 0, 0, data, 48) < 0)
        return -1;
    return 0;
}
