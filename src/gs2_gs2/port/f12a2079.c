/* GS2.GS2 12a2:0792 - memory_free
 * Frees a memory block, coalesces with adjacent free blocks
 * in_BX = heap control block
 */
extern void _far free_list_find_end(unsigned short *);
extern void _far mem_bounds_check(unsigned short, int, unsigned short *);
extern void _far FUN_12a2_0792(void);
extern void _far memory_free(unsigned short *heap)
{
    unsigned int *puVar1;
    unsigned int uVar3, uVar4;
    int in_CX, in_BX, unaff_SI;
    int bVar7, iVar2;
    
    if ((*(unsigned char *)(in_BX + 2) & 1) != 0) {
        free_list_find_end(heap);
        if ((*(unsigned int *)unaff_SI & 1) != 0) {
            in_CX = (in_CX - unaff_SI) - 1;
        }
        uVar3 = *(unsigned int *)(in_BX + 4);
        if (uVar3 != 0) {
            if (!CARRY2(in_CX + 2, uVar3)) {
                uVar3 = *(unsigned int *)0x3240;
                if (uVar3 == 0x2000) goto LAB_12a2_07df;
                uVar4 = 0x8000;
                while (uVar3 <= uVar4) {
                    uVar4 = uVar4 >> 1;
                    if (uVar4 == 0) goto LAB_12a2_07f8;
                }
                if (uVar4 < 8) goto LAB_12a2_07f8;
                uVar3 = uVar4 << 1;
                goto LAB_12a2_07df;
            }
            uVar4 = 0xfff0;
            if (in_CX + 2 + uVar3 == 0) {
                while (1) {
                    bVar7 = 0;
                    iVar2 = mem_bounds_check(0, 0, 0);
                    if (!bVar7) break;
                    if (uVar4 == 0xfff0) {
                        return;
                    }
                LAB_12a2_07f8:
                    uVar3 = 0x10;
                LAB_12a2_07df:
                    uVar4 = ~(uVar3 - 1);
                }
            }
        }
    }
    return;
}