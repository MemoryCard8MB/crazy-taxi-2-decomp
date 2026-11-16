/* Library code: C that behaves like this game's own bytes. */
/* Straight-line functions with calls and guards (batch gen_ai): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Exec_FogDensity(void);
int Exec_FogColor(void);
int Check_FogArea(void);
int abs(int);
float nlLength(int, int);


float nlFloor(float f4)
{
    if (8388608.0f > (f4 < 0.0f ? -f4 : f4)) {
        if (0.0f > f4) {
            if (((f4 < 0.0f ? -f4 : f4) - (float)(int)(f4 < 0.0f ? -f4 : f4)) != 0.0f) {
                return (float)(int)(-1 - (int)(f4 < 0.0f ? -f4 : f4));     /* manual: signed (mov #-1; sub; float): 0xFFFFFFFF made it an unsigned subtraction, 4294967294.0 for floor(-2.99) */
            }
            return f4;
        }
        return (float)(int)(f4 < 0.0f ? -f4 : f4);
    }
    return f4;
}


float nlRoundOff(float f4)
{
    if (8388608.0f > (f4 < 0.0f ? -f4 : f4)) {
        if (((f4 < 0.0f ? -f4 : f4) - (float)(int)(f4 < 0.0f ? -f4 : f4)) != 0.0f) {
            if (f4 > 0.0f) {
                return (float)(int)(f4 < 0.0f ? -f4 : f4);
            }
            return (float)(-(int)(f4 < 0.0f ? -f4 : f4));
        }
        return f4;
    }
    return f4;
}
