/* GS.GS2 10bf:06b0 - calls FUN_10bf_1a78, if 0 returns 0, else calls FUN_10bf_0b56 */
extern int _far FUN_10bf_1a78(void);
extern unsigned short _far FUN_10bf_0b56(unsigned short, unsigned short, unsigned short, int);
unsigned short _far FUN_10bf_06b0(unsigned short param_1, unsigned short param_2, unsigned short param_3)
{
    int iVar1 = FUN_10bf_1a78();
    if (iVar1 == 0) {
        return 0;
    }
    return FUN_10bf_0b56(param_1, param_2, param_3, iVar1);
}