/* GS.GS2 10bf:0258 - interrupt_21h_wrapper
 * Calls handler at 0x715e if set, then INT 21h, then another INT 21h if flag at 0x6894
 */
extern void _far FUN_10bf_0258(unsigned short param_1)
{
    if (*(int *)0x7160 != 0) {
        (*(void (_far *)(unsigned short))0x715e)(0x10bf);
    }
    _asm { int 0x21 }
    if (*(char *)0x6894 != '\0') {
        _asm { int 0x21 }
    }
    return;
}