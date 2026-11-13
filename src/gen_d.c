/* Straight-line functions with calls and guards (batch gen_d): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c080782(int, int, float);
int mpdrv_hreset(int);
int mpdrv_set_hreset_ns(int a4);
int FUN_0c080780(int a4, int a5);

int mpdrv_set_hreset_ns(int a4)
{
    return mpdrv_hreset(a4);
}

int FUN_0c080780(int a4, int a5)
{
    return FUN_0c080782(a4, a5, 1.0f);
}
