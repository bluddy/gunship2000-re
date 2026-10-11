/* GS.GS2 1dea:0e86 - calls FUN_10bf_02c0 and FUN_10bf_01d5 (far) */
extern void _far FUN_10bf_02c0(void);
extern void _far FUN_10bf_01d5(unsigned short);
void _far FUN_1dea_0e86(void)
{
    FUN_10bf_02c0();
    FUN_10bf_01d5(2);
    return;
}