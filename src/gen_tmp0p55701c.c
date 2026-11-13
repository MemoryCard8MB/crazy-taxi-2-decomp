/* scratch */
int FUN_0c16ada2(int, int, int, int, int);
int mwRnaSetOutPan(int a4, int a5, int a6, int a7);

int mwRnaSetOutPan(int a4, int a5, int a6, int a7)
{
    register int t3;
    register int t6;
    register int t10;

    if (a4 == 0) {
        t10 = (FUN_0c16ada2(a4, a5, a6, a7, 0xC171714));
    } else {
        t3 = 0xFFFFFFF1;
        if ((int)a6 >= (int)0xFFFFFFF1) {
            t3 = a6;
            if ((int)a6 > (int)0xF) {
                t3 = 0xF;
            }
        }
        t6 = *(int *)((a4 + 0x38));
        t10 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t6 + 0x0))) + 0x3C)))))(t6, a5, t3, a7);
        *(unsigned int *)((((a5 << 2) + (a4 + 0x64)) + 0x0)) = t3;
    }
    return t10;
}

