/* GS2.GS2 12a2:0c10 - dos_call_store_ax
 * Calls INT 21h, stores AX to param_1 on carry clear, checks carry
 * param_1 = pointer to store AX result
 */
extern void _far check_carry_call(unsigned char, int);
extern void _far dos_call_store_ax(unsigned short *param_1)
{
    unsigned short uVar2;
    _asm {
        int 0x21
        mov uVar2, ax
    }
    if (!_getflags() & 1) {  /* carry clear */
        *param_1 = uVar2;
    }
    check_carry_call(0, 0);
    return;
}