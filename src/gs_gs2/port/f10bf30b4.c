/* GS.GS2 10bf:30b4 - delay_with_swap
 * Calls FUN_10bf_3068 (delay loop), swaps high/low words of param_1
 */
extern void _far FUN_10bf_3068(void);
void _far delay_with_swap(unsigned short *param_1)
{
    unsigned short uVar2 = param_1[1];
    unsigned short uVar1 = FUN_10bf_3068();
    *param_1 = uVar1;
    param_1[1] = uVar2;
    return;
}