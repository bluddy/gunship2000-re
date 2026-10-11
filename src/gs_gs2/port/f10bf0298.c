/* GS.GS2 10bf:0298 - calls FUN_10bf_0543 with 0xfc and 0xff, indirect call if 0x689c set */
extern void _far FUN_10bf_0543(unsigned short);
void _far FUN_10bf_0298(void)
{
    FUN_10bf_0543(0xfc);
    if (*(int *)0x689c != 0) {
        (*(void (_far *)(unsigned short))0x689a)(0x10bf);
    }
    FUN_10bf_0543(0xff);
    return;
}