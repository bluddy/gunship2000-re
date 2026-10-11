/* GS.GS2 1000:06f2 - init routine */
extern void _far FUN_10bf_02c0(void);
void _far FUN_1000_06f2(void)
{
    FUN_10bf_02c0();
    *(unsigned short *)0x79f4 = 0;
    return;
}