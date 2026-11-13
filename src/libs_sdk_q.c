/* Library code: C that behaves like this game's own bytes. */



/* An ADX decoder's output bit depth: 4, 8 or 16 from its two mode halfwords at +168 and +170. */
int ADXB_GetOutBps(char *a)
{
    short x = *(short *)(a + 168);

    if (!x)
        return 16;
    if (x == 2) {
        if (*(short *)(a + 170) == 2)
            return 4;
        if (*(short *)(a + 170) == 1)
            return 8;
        return 16;
    }
    if (x == 1 && *(short *)(a + 170) == 2)
        return 4;
    return 16;
}
