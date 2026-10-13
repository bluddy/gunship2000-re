/* GS2.GS2 12a2:0bd8 - dos_call_and_check_carry
 * Calls INT 21h, then checks carry flag via FUN_12a2_0504
 */
extern void _far check_carry_call(unsigned char, int);
extern void _far dos_call_and_check_carry(void)
{
    _asm { int 0x21 }
    check_carry_call(0, 0);  /* AL and CF from INT 21h */
    return;
}