/* GS.GS2 10bf:05b5 - conditional call to FUN_10bf_05c8 */
extern void _far FUN_10bf_05c8(void);
void _far FUN_10bf_05b5(void)
{
    if (_getflags() & 1) /* Carry flag = bit 0 */
        FUN_10bf_05c8();
    return;
}