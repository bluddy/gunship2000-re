/* GS.GS2 1d02:05de - calls FUN_10bf_02c0, FUN_10bf_2c3a, FUN_10bf_2c0e */
extern void _far FUN_10bf_02c0(void);
extern void _far FUN_10bf_2c3a(unsigned short, unsigned short, unsigned short);
extern void _far FUN_10bf_2c0e(unsigned short, unsigned short, unsigned short);
void _far FUN_1d02_05de(void)
{
    FUN_10bf_02c0();
    FUN_10bf_2c3a(0x9f40, 0, 0x306);
    FUN_10bf_2c0e(0x9f40, 0x4be, 0x306);
    return;
}