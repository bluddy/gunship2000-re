/* GS.GS2 2741:0072 - calls FUN_10bf_2e03, conditional FUN_2741_0670 */
extern int _far FUN_10bf_2e03(unsigned short, unsigned short, unsigned short, unsigned short *);
extern void _far FUN_2741_0670(unsigned short);
unsigned short _far FUN_2741_0072(unsigned short param_1)
{
    unsigned short local_4;
    int iVar1 = FUN_10bf_2e03(0x2741, param_1, 0, &local_4);
    if (iVar1 != 0) {
        FUN_2741_0670(param_1);
    }
    return local_4;
}