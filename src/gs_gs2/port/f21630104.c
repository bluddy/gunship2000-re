/* GS.GS2 2163:0104 - calls FUN_10bf_02c0, FUN_2351_00d2, FUN_1d02_02d0 (all far) */
extern void _far FUN_10bf_02c0(void);
extern void _far FUN_2351_00d2(void);
extern void _far FUN_1d02_02d0(void);
void _far FUN_2163_0104(void)
{
    FUN_10bf_02c0();
    FUN_2351_00d2();
    FUN_1d02_02d0();
    return;
}