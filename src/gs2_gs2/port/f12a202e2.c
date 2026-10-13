/* GS2.GS2 12a2:02e2 - load_overlay_file
 * Loads overlay file via DOS INT 21h
 * param_1, param_2, param_3 = file handle/params
 */
extern void _far load_overlay_file(unsigned short param_1, unsigned short param_2, unsigned short param_3)
{
    unsigned short uVar6;
    int iVar7;
    unsigned int uVar9;
    char *pcVar12, *pcVar13;
    int iVar7_save;
    
    *(unsigned short *)0x321a = 0;  /* stack frame */
    *(unsigned short *)0x321c = param_1;
    _asm { int 0x21 }
    uVar6 = _AX;  /* AX return from INT 21h */
    *(unsigned short *)0x31e8 = uVar6;
    
    if ((char)uVar6 != 2) {
        uVar6 = *(unsigned short *)0x2c;
        *(unsigned short *)0x320b = uVar6;
        iVar7 = -0x8000;
        pcVar12 = (char *)0;
        
        do {
            pcVar13 = pcVar12;
            if (iVar7 != 0) {
                /* ... truncated - complex file loading logic ... */
            }
            iVar7 = iVar7 - 1;
            pcVar12 = pcVar13 + 1;
        } while (iVar7 != 0);
    }
    return;
}