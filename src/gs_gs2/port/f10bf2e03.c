/* GS.GS2 10bf:2e03 - dos_int21h_call
 * Wrapper for DOS INT 21h call
 * param_1 = pointer to receive AX result on success (carry clear)
 * Caller must set up registers (AH = function) before calling
 * On carry clear: stores AX to *param_1, calls FUN_10bf_05a8
 */
extern void _far FUN_10bf_05a8(void);
extern void _far dos_int21h_call(unsigned short *param_1)
{
    unsigned short ax_val;
    unsigned short flags;
    _asm {
        int 0x21
        pushf
        pop ax
        mov flags, ax
        mov ax_val, ax
    }
    if ((flags & 1) == 0) {
        *param_1 = ax_val;
        FUN_10bf_05a8();
    }
    return;
}