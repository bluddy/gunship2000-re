/* GS2.GS2 1851:079d - startup_hardware_check
 * Checks hardware, calls timing loop, initializes hardware pointers
 */
extern void _far FUN_1851_05eb(void);
extern void _far FUN_1851_05b3(void);
extern void _far startup_hardware_check(void)
{
    unsigned int uVar1, uVar4, uVar6;
    int iVar5, iVar8;
    unsigned short *puVar7, *puVar9;
    unsigned char bVar3;
    
    _asm { int 0x21 }
    bVar3 = _AL;  /* AL from INT 21h */
    if (bVar3 > 2) {
        *(unsigned char *)0x9dc = 0x20;
    }
    if ((*(unsigned int *)0xb5f & 0x100) != 0) {
        FUN_1851_05eb();
    }
    if ((*(unsigned int *)0xb5f & 2) != 0 ||
        *(int *)0xb63 != 0 || *(int *)0xb65 != 0 ||
        *(int *)0xb67 != 0 || *(int *)0xb69 != 0) {
        
        iVar5 = *(int *)0xb6b;
        puVar7 = (unsigned int *)0xb71;
        uVar4 = 0xffff;
        uVar6 = 0;
        
        do {
            uVar1 = *puVar7;
            if (uVar1 != 0) {
                if (uVar1 < uVar4) uVar4 = uVar1;
                if (uVar6 < uVar1 + puVar7[4]) uVar6 = uVar1 + puVar7[4];
            }
            puVar7 = puVar7 + 9;
            iVar5 = iVar5 - 1;
        } while (iVar5 != 0);
        
        *(unsigned int *)0xb4b = uVar4;
        *(unsigned int *)0xb4d = uVar6;
        
        if ((*(unsigned int *)0xb5f & 2) != 0) {
            FUN_1851_05b3();
        }
    }
    puVar9 = (unsigned short *)0;
    iVar8 = 0xb71;
    return;
}