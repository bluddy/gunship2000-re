/* GS2.GS2 12a2:010e - dos_file_device_handler
 * Handles DOS file/device operations after mission init
 * Sets up file handles, calls INT 21h
 */
extern void _far FUN_12a2_02e2(void);
extern void _far FUN_12a2_02b8(void);
extern void _far dos_file_device_handler(int in_BX)
{
    unsigned short uVar2;
    int iVar6;
    unsigned char *pbVar8;
    
    _asm { int 0x21 }
    *(unsigned short *)0x31d2 = in_BX;
    *(unsigned short *)0x31d4 = 0;
    _asm { int 0x21 }
    if (*(int *)0x3256 != 0) {
        (*(void (*)())*(unsigned short *)0x3254)();
        if (_getflags() & 1) {
            FUN_12a2_02b8();
            return;
        }
        (*(void (*)())*(unsigned short *)0x3254)();
    }
    iVar6 = *(int *)0x2c;
    if (iVar6 != 0) {
        pbVar8 = (unsigned char *)0x0;
        do {
            if (*pbVar8 == 0) break;
            pbVar8 = pbVar8 + 1;
        } while (1);
    }
    return;
}