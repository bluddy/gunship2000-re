/* GS2.GS2 12a2:086f - free_list_find_end
 * Traverses free memory list to find end marker (0xfffe)
 * in_BX = heap control block
 */
extern void _far free_list_find_end(unsigned short *heap)
{
    unsigned int *puVar1;
    
    puVar1 = (unsigned int *)*(unsigned short *)(heap + 8);
    if (puVar1 == (unsigned int *)*(unsigned short *)(heap + 10)) {
        puVar1 = (unsigned int *)*(unsigned short *)(heap + 6);
    }
    while (1) {
        if (*puVar1 == 0xfffe) break;
        puVar1 = (unsigned int *)((int)puVar1 + (*puVar1 & 0xfffe) + 2);
    }
    return;
}