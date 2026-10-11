/* GS.GS2 10bf:1554 - calls FUN_10bf_1ad2 if param_2 != -1 */
extern void _far FUN_10bf_1ad2(int, unsigned short);
void _far FUN_10bf_1554(unsigned short param_1, int param_2)
{
    if (param_2 != -1) {
        FUN_10bf_1ad2(param_2, param_1);
    }
    return;
}