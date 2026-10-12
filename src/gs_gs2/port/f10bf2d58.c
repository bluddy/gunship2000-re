/* GS.GS2 10bf:2d58 - check_flag_and_int21
 * Checks flag at 0x714e, calls handler if set, then INT 21h
 */
extern void _far INT_21h(void);
void _far check_flag_and_int21(void)
{
    if (*(int *)0x714e == -0x292a) {
        (*(void (_far *)(void))0x7150)();
    }
    _asm { int 0x21 }
    return;
}