/* GS2.GS2 12a2:0716 - memory_alloc_core
 * Core memory allocator: finds free block of size in_CX+1 paragraphs
 * in_BX = heap pointer, in_CX = size-1
 * Returns pointer to allocated block or 0
 */
extern unsigned short * _far memory_alloc_core(unsigned int size, unsigned short *heap_ptr)
{
    unsigned short *puVar1;
    unsigned int uVar2, uVar3, uVar4;
    unsigned short *puVar5, *puVar6, *puVar7;
    int bVar6;
    
    uVar4 = (size + 1) & 0xfffe;  /* align to even */
    puVar7 = (unsigned short *)*(unsigned short *)(heap_ptr + 8);
    puVar5 = (unsigned short *)*(unsigned short *)(heap_ptr + 10);
    
    while (1) {
        while (1) {
            puVar1 = puVar7 + 1;
            uVar3 = *puVar7;
            puVar6 = puVar1;
            
            if ((uVar3 & 1) != 0) {
                while (1) {
                    uVar2 = uVar3 - 1;
                    if (uVar4 <= uVar2) {
                        *puVar7 = uVar4;
                        puVar7 = puVar1;
                        if (uVar2 != uVar4) {
                            *(int *)((int)puVar1 + uVar4) = (uVar2 - uVar4) - 1;
                            puVar7 = (unsigned short *)((int)((int)puVar1 + uVar4) - uVar4);
                        }
                        *(int *)(heap_ptr + 8) = (int)puVar7 + uVar4;
                        return puVar1;
                    }
                    if ((unsigned int)puVar6 + uVar2 > 0xffff) goto LAB_12a2_076f;
                    puVar6 = (unsigned short *)((int)puVar1 + uVar2) + 1;
                    uVar3 = *(unsigned short *)((int)puVar1 + uVar2);
                    if ((uVar3 & 1) == 0) break;
                }
            }
            if ((unsigned int)puVar1 + uVar2 > 0xffff) {
LAB_12a2_076f:
                puVar7 = (unsigned short *)(*(unsigned short *)(heap_ptr + 10) + 2);
            }
        }
    }
    return (unsigned short *)0;
}