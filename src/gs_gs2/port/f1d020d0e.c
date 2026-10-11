/* GS.GS2 1d02:0d0e - calls FUN_10bf_02c0 and FUN_1d02_0d46 */
extern void _far FUN_10bf_02c0(void);
extern void _far FUN_1d02_0d46(unsigned short, unsigned short, unsigned short, unsigned short);
void _far FUN_1d02_0d0e(unsigned short param_1)
{
    FUN_10bf_02c0();
    FUN_1d02_0d46(0x9f40, 0, 0x100, param_1);
    return;
}