/* GS2.GS2 12a2:0890 - dos_wait_idle
 * Waits for DOS INT 21h call to return value > threshold at 0x31c2
 * Updates max value at 0x31c0, sets up stack frame via FUN_12a2_06ac and FUN_12a2_06e0
 */
extern void _far FUN_12a2_06ac(void);
extern void _far FUN_12a2_06e0(void);
extern void _far dos_wait_idle(void)
{
    int bVar3 = 0;
    unsigned int uVar2;
    unsigned short ax_val;
    unsigned short di_val;
    
    do {
        _asm {
            int 0x21
            mov ax_val, ax
        }
        uVar2 = ax_val;
        if (bVar3) {
            return;
        }
        bVar3 = uVar2 < *(unsigned int *)0x31c2;
    } while (uVar2 <= *(unsigned int *)0x31c2);
    
    if (*(unsigned int *)0x31c0 < uVar2) {
        *(unsigned int *)0x31c0 = uVar2;
    }
    _asm {
        mov bx, 0x000c
        mov di_val, di
    }
    *(unsigned short *)0x2 = di_val;
    FUN_12a2_06ac();
    FUN_12a2_06e0();
    return;
}