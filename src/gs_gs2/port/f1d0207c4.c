/* GS.GS2 1d02:07c4 - resource_slot_swap
 * Swaps two resource slots (5 words each) and updates related state
 */
extern void _far FUN_10bf_02c0(void);
extern void _far thunk_EXT_FUN_0000_0000(unsigned short, unsigned short, unsigned short, unsigned short, unsigned short, unsigned short, unsigned short, unsigned short, unsigned short);

void _far resource_slot_swap(int param_1, int param_2)
{
    FUN_10bf_02c0();
    
    if (param_2 != param_1) {
        // Copy slot param_2 to temp
        unsigned short local_c = 0;
        unsigned short* puVar10 = &local_c;
        unsigned short* puVar8 = (unsigned short*)(param_2 * 10 - 0x43f8);
        for (int iVar6 = 5; iVar6 != 0; iVar6--) {
            *puVar10 = *puVar8;
            puVar10++;
            puVar8++;
        }
        
        // Copy slot param_1 to slot param_2
        unsigned short* puVar7 = (unsigned short*)(param_2 * 10 - 0x43f8);
        char* pcVar5 = (char*)(param_1 * 10 - 0x43f8);
        char* pcVar9 = pcVar5;
        for (int iVar6 = 5; iVar6 != 0; iVar6--) {
            *puVar7 = *(unsigned short*)pcVar9;
            puVar7++;
            pcVar9 += 2;
        }
        
        // Copy temp to slot param_1
        puVar10 = &local_c;
        pcVar9 = pcVar5;
        for (int iVar6 = 5; iVar6 != 0; iVar6--) {
            *(unsigned short*)pcVar9 = *puVar10;
            puVar10++;
            pcVar9 += 2;
        }
        
        // Swap additional state words
        unsigned short uVar4 = *(unsigned short*)(param_2 * 2 - 0x43d0);
        *(unsigned short*)(param_2 * 2 - 0x43d0) = *(unsigned short*)(param_1 * 2 - 0x43d0);
        *(unsigned short*)(param_1 * 2 - 0x43d0) = uVar4;
        
        // Call external functions for each slot
        unsigned short iStack_a = param_1 + 1;
        local_c = 0x10bf;
        thunk_EXT_FUN_0000_0000();
        
        iStack_a = param_2 + 1;
        local_c = 0x2658;
        thunk_EXT_FUN_0000_0000();
        
        // Decrement priority counters if > 1
        if (*(char*)pcVar5 > 1) {
            *pcVar5 = *pcVar5 - 1;
        }
        if (*(char*)(param_2 * 10 - 0x43f8) > 1) {
            *(char*)(param_2 * 10 - 0x43f8) = *(char*)(param_2 * 10 - 0x43f8) - 1;
        }
    }
    return;
}