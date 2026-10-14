/* GS2.GS2 12a2:062f - heap_traverse_and_alloc
 * Traverses heap blocks, calls allocation callbacks, falls back to memory_alloc_core
 * param_1 = size or flags
 */
extern unsigned short _far memory_alloc_core(unsigned int size, unsigned short *heap_ptr);
extern void _far FUN_12a2_0890(void);
extern unsigned short _far heap_traverse_and_alloc(unsigned int param_1)
{
    unsigned int *puVar1;
    unsigned int uVar2, uVar4, uVar5;
    int in_CX;
    int in_BX;
    unsigned short *puVar6, *puVar7;
    int bVar6, bVar7;
    int pcVar3;
    unsigned long uVar8;
    
    bVar6 = 0;
    bVar7 = 0;
    pcVar3 = 0;
    puVar1 = 0;
    uVar2 = 0;
    uVar4 = 0;
    uVar5 = 0;
    in_CX = 0;
    in_BX = 0;
    uVar8 = 0;
    
    if (param_1 < 0xffe9) {
        bVar6 = 0;
        if (*(int *)0x3234 != 0) {
            pcVar3 = 0x716;
            while (1) {
                uVar2 = *(unsigned int *)0x323c;
                uVar4 = (unsigned int)((*(unsigned long *)0x3236) >> 16);
                in_BX = (int)*(unsigned long *)0x3236;
                uVar5 = uVar4;
                do {
                    do {
                        uVar8 = (*(unsigned short (*)())pcVar3)();
                        if (!bVar6) {
                            if (pcVar3 == 0x716) goto LAB_12a2_0699;
                            goto LAB_12a2_0696;
                        }
                        puVar1 = (unsigned int *)(in_BX + 0xc);
                        in_BX = (int)*puVar1;
                        bVar6 = uVar4 < uVar2;
                        bVar7 = uVar4 != uVar2;
                        uVar4 = (unsigned int)((unsigned long)*puVar1 >> 16);
                    } while (bVar7);
                    uVar2 = *(unsigned int *)((int)*(unsigned long *)0x3236 + 0x12);
                    uVar4 = (unsigned int)((*(unsigned long *)0x3232) >> 16);
                    in_BX = (int)*(unsigned long *)0x3232;
                    bVar6 = uVar4 < uVar5;
                    bVar7 = uVar4 != uVar5;
                    uVar5 = uVar4;
                } while (bVar7);
                bVar6 = pcVar3 < 0x792;
                if (pcVar3 == 0x792) break;
                pcVar3 = 0x792;
            }
        }
        FUN_12a2_0890();
        if (!bVar6) {
LAB_12a2_0696:
            uVar8 = memory_alloc_core(0, 0);
            *(unsigned short *)0x3238 = (unsigned short)(uVar8 >> 16);
            *(int *)0x3236 = in_BX;
            return (unsigned short)uVar8;
        }
    }
LAB_12a2_0699:
    return 0;
}