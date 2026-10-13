/* GS2.GS2 12a2:0c28 - dos_call_conditional_store
 * Calls INT 21h, stores AX conditionally based on 0x3244 vs 0xd6d6
 * param_1 = pointer to store AX result
 */
extern void _far check_carry_call(unsigned char, int);
extern void _far dos_call_conditional_store(unsigned short *param_1)
{
    int uVar3;
    unsigned short uVar2;
    
    uVar3 = (*(unsigned int *)0x3244 < 0xd6d6);
    if (*(unsigned int *)0x3244 == 0xd6d6) {
        (*(void (*)())*(unsigned short *)0x3246)();
    }
    _asm {
        int 0x21
        mov uVar2, ax
    }
    if (!uVar3) {
        *param_1 = uVar2;
    }
    check_carry_call(0, 0);
    return;
}