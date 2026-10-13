/* GS2.GS2 12a2:0256 - dos_call_wrapper
 * Checks 0x3256, calls indirect through 0x3254, then INT 21h
 * If 0x3210 set, calls INT 21h again
 */
extern void _far dos_call_wrapper(unsigned short param_1)
{
    if (*(int *)0x3256 != 0) {
        (*(void (*)(unsigned short))*(unsigned short *)0x3254)(0x12a2);
    }
    _asm { int 0x21 }
    if (*(char *)0x3210 != '\0') {
        _asm { int 0x21 }
    }
    return;
}