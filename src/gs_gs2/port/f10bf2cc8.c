/* GS.GS2 10bf:2cc8 - absolute value function */
int _far FUN_10bf_2cc8(unsigned int param_1)
{
    return (param_1 ^ (param_1 >> 15)) - (param_1 >> 15);
}