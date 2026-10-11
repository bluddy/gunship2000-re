/* GS.GS2 165c:2cb6 - calls FUN_10bf_02c0 and FUN_10bf_21d6 */
extern void _far FUN_10bf_02c0(void);
extern void _far FUN_10bf_21d6(unsigned short, unsigned short);
void _far FUN_165c_2cb6(unsigned short param_1)
{
    FUN_10bf_02c0();
    FUN_10bf_21d6(param_1, 0xb5d6);
    return;
}