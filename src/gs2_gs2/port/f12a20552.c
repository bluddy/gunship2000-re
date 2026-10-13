/* GS2.GS2 12a2:0552 - dos_alloc_memory
 * Allocates memory via DOS INT 21h AH=48h
 * param_1 = segment/selector, param_2 = size, param_3/4 = flags
 * Returns: 0x1600 on success, 0x900 on failure, 0xffff on error
 */
extern void _far FUN_12a2_0524(void);
extern unsigned short _far dos_alloc_memory(unsigned int param_1, unsigned int param_2,
                                            unsigned int param_3, unsigned int param_4)
{
    unsigned int uVar2;
    unsigned int uVar3;
    unsigned int uVar4;
    int bVar5;
    unsigned long uVar6;
    
    if (param_1 < *(unsigned int *)0x31ed) {
        bVar5 = 0;
        if ((param_3 & 0x8000) == 0) {
            /* INT 21h AH=48h */
            _asm { int 0x21 }
            if (!bVar5) {
                if ((param_4 & 2) == 0) {
                    /* check carry */
                }
            }
        } else {
            /* INT 21h with different params */
            _asm { int 0x21 }
        }
    } else {
        uVar2 = 0x900;
    }
    bVar5 = 1;
    
    if (bVar5) {
        FUN_12a2_0524();
        uVar2 = 0xffff;
    }
    return uVar2;
}