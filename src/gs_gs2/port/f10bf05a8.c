/* GS.GS2 10bf:05a8 - conditional call to FUN_10bf_05c8 if carry flag set, returns AL */
extern void _far FUN_10bf_05c8(void);
unsigned char _far FUN_10bf_05a8(void)
{
    if ((_getflags() & 1) == 0) {
        return 0;
    }
    FUN_10bf_05c8();
    return (unsigned char)_getflags(); /* AL - but MSC 6.0 doesn't expose AL directly */
}