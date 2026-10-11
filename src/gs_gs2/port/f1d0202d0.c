/* GS.GS2 1d02:02d0 - calls FUN_10bf_02c0 and FUN_24e6_088a (far) */
extern void _far FUN_10bf_02c0(void);
extern void _far FUN_24e6_088a(unsigned short, unsigned short, unsigned short);
void _far FUN_1d02_02d0(void)
{
    FUN_10bf_02c0();
    FUN_24e6_088a(0x464, 5, 10);
    return;
}