/* Library code: C that behaves like this game's own bytes. */
/* Handle pools (find a free record, fill it in) and the fog table upload. */

extern void SJMEM_Error(void);
extern void SJMEM_Reset(void *sj);
extern void SJRBF_Error(void);
extern void SJRBF_Reset(void *sj);
extern void SJUNI_Error(void);
extern void SJUNI_Reset(void *sj);
extern void *memset(void *p, int c, unsigned int n);
extern void ADX_GetCoefficient(int cutoff, int rate, short *k0, short *k1);
extern void kmiWriteRegister(unsigned int reg, unsigned int val);

extern void ADXSJD_ExecServer(void);
extern void ADXRNA_ExecServer(void);
extern void ADXF_ExecServer(void);
extern void ADXSTM_ExecServer(void);
extern void ADXT_ExecHndl(void *t);

extern unsigned int kmtex_TextureSize_smallVQ(int *tex);
extern unsigned int kmtex_TextureSize_Palettized(int *tex);
extern unsigned int kmtex_TextureSize_Twiddled(int *tex);


/* Texture memory size in bytes: 2048 of header plus the texels at half size each way; a mipmapped
   texture (flag bit 0) adds each smaller level, 2 for the 1x1 end (or the last level when not square)
   and 10 more; an unmipmapped 8x8 adds 16. */
unsigned int kmtex_TextureSize_VQ(int *tex)
{
    unsigned int w = (unsigned int)tex[3] >> 1;
    unsigned int h = (unsigned int)tex[4] >> 1;
    unsigned int n = w * h;
    unsigned int m;

    if (tex[6] & 1) {
        w >>= 1;
        h >>= 1;
        m = (w >= h) ? h : w;
        while (m > 1) {
            n += h * w;
            w >>= 1;
            h >>= 1;
            m >>= 1;
        }
        if (w == h) {
            n += 2;
        } else {
            n += h * w;
        }
        n += 10;
    } else if (tex[3] == 8 && tex[4] == 8) {
        n += 16;
    }
    return n + 2048;
}


/* Work out a texture's memory size (+20) by its kind: type 3 (low half of word 0), mipmapped
   (flag 8), flag 32, or plain. */
void kmtex_TextureSize(int *tex)
{
    unsigned int n;

    if ((unsigned short)tex[0] == 3) {
        n = kmtex_TextureSize_smallVQ(tex);
    } else if (tex[6] & 8) {
        n = kmtex_TextureSize_VQ(tex);
    } else if (tex[6] & 32) {
        n = kmtex_TextureSize_Palettized(tex);
    } else {
        n = kmtex_TextureSize_Twiddled(tex);
    }
    tex[5] = n;
}
