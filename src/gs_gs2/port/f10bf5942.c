/* GS.GS2 10bf:5942 - conditional calls */
extern int _far FUN_10bf_2234(int);
extern void _far FUN_10bf_2bc6(int, int, int);
void _far FUN_10bf_5942(int param_1, int param_2)
{
    if (param_1 != 0) {
        int iVar1 = FUN_10bf_2234(param_2);
        FUN_10bf_2bc6(param_1 + param_2, param_2, iVar1 + 1);
    }
    return;
}