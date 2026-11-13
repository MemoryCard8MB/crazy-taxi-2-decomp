/* Library code: C that behaves like this game's own bytes. */
/* Small library functions (batch u): SJ buffer destroys, the SJ decoder clears, the stream start. */

void *memset(void *p, int c, unsigned int n);
int ADXSTM_Tell(int *h);


void SJMEM_Destroy(int *h)
{
    if (h) {
        memset(h, 0, 36);
        h[1] = 0;
    }
}


void SJRBF_Destroy(int *h)
{
    if (h) {
        memset(h, 0, 48);
        h[1] = 0;
    }
}


void SJUNI_Destroy(int *h)
{
    if (h) {
        memset(h, 0, 48);
        ((char *)h)[4] = 0;
    }
}
