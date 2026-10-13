/* GS2.GS2 1851:05b3 - clear_memory_range
 * Clears memory range from in_AX to in_DX in 0x1000-byte chunks
 */
extern void _far clear_memory_range(unsigned int start, unsigned int end)
{
    unsigned int uVar3, uVar4;
    unsigned short *puVar5;
    int iVar2;
    
    if (start != end) {
        uVar3 = end - start;
        do {
            uVar4 = 0x1000;
            if (uVar3 < 0x1000) uVar4 = uVar3;
            puVar5 = (unsigned short *)0x0;
            for (iVar2 = uVar4 << 3; iVar2 != 0; iVar2 = iVar2 - 1) {
                *puVar5 = 0;
                puVar5 = puVar5 + 1;
            }
            start = start + uVar4;
            uVar3 = uVar3 - uVar4;
        } while (uVar3 != 0);
    }
    return;
}