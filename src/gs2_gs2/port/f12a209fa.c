/* GS2.GS2 12a2:09fa - memory_coalesce
 * Coalesces free memory blocks, merges adjacent free blocks
 * Register calling convention: in_CX=size, in_BX=heap, unaff_SI=block
 * Sets carry flag on success
 */
extern void _far FUN_12a2_0792(void);
extern void _far memory_coalesce(unsigned int in_CX, unsigned short *heap, unsigned int *block)
{
    unsigned int uVar1, uVar3, uVar4;
    unsigned int *puVar5, *puVar6, *puVar7;
    int bVar2 = 0;
    int in_BX;
    
    if (in_CX + 1 != 0) {
        in_CX = in_CX + 1 & 0xfffe;
    }
    puVar5 = block - 1;
    uVar1 = *puVar5;
    uVar4 = uVar1 & 0xfffe;
    *puVar5 = uVar4;
    uVar3 = uVar4;
    puVar6 = block;
    
    while (uVar4 < (unsigned int)in_CX) {
        puVar7 = (uint *)((int)puVar6 + uVar3);
        if (CARRY2((uint)puVar6, uVar3)) {
            return;
        }
        uVar3 = *puVar7;
        if ((uVar3 & 1) == 0) {
            if ((uVar3 != 0xfffe) || ((*(unsigned char *)(in_BX + 2) & 1) == 0)) {
                goto LAB_12a2_0aa2;
            }
            if (CARRY2((uint)(block + 1), in_CX)) {
                bVar2 = 1;
                in_CX = -(int)(block + 1);
            }
            *puVar5 = *puVar5 + 1;
            int bVar8 = puVar5 < (uint *)*(unsigned short *)(in_BX + 8);
            if (bVar8) {
                *(unsigned short *)(in_BX + 8) = (unsigned short)puVar5;
            }
            while (FUN_12a2_0792(), bVar8) {
                bVar2 = 1;
                if (in_CX < 0x10) goto LAB_12a2_0aa2;
                uVar3 = (unsigned int)((in_CX & 1) != 0);
                bVar8 = CARRY2(in_CX >> 1, uVar3);
                in_CX = (in_CX >> 1) + uVar3;
            }
            *puVar5 = *puVar5 - 1;
            uVar3 = uVar4;
            puVar6 = block;
        } else {
            uVar4 = uVar4 + uVar3 + 1;
            *puVar5 = uVar4;
            uVar3 = uVar3 - 1;
            puVar6 = puVar7 + 1;
        }
    }
    
    if (uVar4 == (unsigned int)in_CX) {
        puVar7 = (uint *)((int)block + in_CX);
    } else {
        puVar7 = puVar5;
        if (!bVar2) {
            *puVar5 = in_CX;
            puVar7 = (uint *)((int)block + in_CX);
            if (CARRY2((uint)block, in_CX)) {
                return;
            }
            *puVar7 = (uVar4 - in_CX) - 1;
        }
    }
    
LAB_12a2_0aa2:
    *puVar5 = *puVar5 & 0xfffe;
    *puVar5 = *puVar5 | uVar1 & 1;
    return;
}