/* GS.GS2 10bf:05a0 - conditional call to FUN_10bf_05c8 if carry flag set */
extern void _far FUN_10bf_05c8(void);
unsigned short _far FUN_10bf_05a0(void)
{
    if ((_getflags() & 1) == 0) {
        return 0;
    }
    FUN_10bf_05c8();
    return 0xffff;
}