/* GS.GS2 165c:0276 - calls FUN_10bf_02c0 and thunk */
extern void _far FUN_10bf_02c0(void);
extern void _far thunk_EXT_FUN_0000_0000(unsigned short, unsigned short, unsigned short, unsigned short, unsigned short, unsigned short, unsigned short, unsigned short, unsigned short);
void _far FUN_165c_0276(void)
{
    FUN_10bf_02c0();
    thunk_EXT_FUN_0000_0000(0x10bf, 0x8a4, 7, 7, 0x80, 0x80, 0x880, 7, 7);
    *(unsigned short *)0x7a1e = 7;
    *(unsigned short *)0x7a20 = 7;
    return;
}