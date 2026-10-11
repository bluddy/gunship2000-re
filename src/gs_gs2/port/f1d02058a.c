/* GS.GS2 1d02:058a - calls FUN_10bf_02c0 and thunk */
extern void _far FUN_10bf_02c0(void);
extern void _far thunk_EXT_FUN_0000_0000(unsigned short, unsigned short, unsigned short, unsigned short, unsigned short, unsigned short, unsigned short, unsigned short, unsigned short);
void _far FUN_1d02_058a(unsigned short param_1, unsigned short param_2)
{
    FUN_10bf_02c0();
    thunk_EXT_FUN_0000_0000(0x10bf, param_1, 0, 0, 0x140, 200, param_2, 0, 0);
    return;
}