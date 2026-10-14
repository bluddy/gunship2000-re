/* GS2.GS2 12a2:06e0 - memory_list_insert
 * Inserts a block into doubly-linked memory list
 * unaff_DI = list head, in_BX = new block, unaff_DS = segment
 */
extern void _far memory_list_insert(unsigned short *list_head, unsigned short new_block, unsigned short seg)
{
    unsigned short uVar2;
    int iVar1;
    
    if (list_head[1] == 0) {
        list_head[1] = seg;
        list_head[0] = new_block;
    } else {
        uVar2 = (unsigned short)((*(unsigned long *)(list_head + 4) >> 16));
        iVar1 = (int)*(unsigned long *)(list_head + 4);
        *(int *)(iVar1 + 0xe) = seg;
        *(int *)(iVar1 + 0xc) = new_block;
        *(unsigned short *)(new_block + 0x12) = uVar2;
        *(int *)(new_block + 0x10) = iVar1;
    }
    list_head[5] = seg;
    list_head[4] = new_block;
    list_head[3] = seg;
    list_head[2] = new_block;
    return;
}