/* GS.GS2 1d02:06bc - resource_slot_alloc
 * Resource slot allocation with name matching
 * Searches 4 slots for matching name, allocates or evicts LRU
 */
extern void _far FUN_10bf_02c0(void);
extern int _far strcmp_ci(unsigned short*, unsigned short, unsigned short);
extern void _far resource_slot_swap(unsigned short, unsigned short);
extern void _far strncpy_word(unsigned short*, unsigned short, unsigned short);
extern void _far FUN_1d02_08a6(unsigned short*, unsigned short, unsigned short);
extern void _far FUN_2741_0256(unsigned short*, unsigned short, unsigned short);

void _far resource_slot_alloc(int param_1, unsigned short param_2)
{
    unsigned short uStack_c = 0x1d02;
    unsigned short uStack_a = 0xd6e7;
    FUN_10bf_02c0();
    
    if (param_1 != 0) {
        // Find existing slot with matching name (up to 8 chars, stop at '.' or end)
        int iStack_18 = -1;
        for (int iStack_16 = 0; iStack_16 < 4; iStack_16++) {
            if (*(char *)(iStack_16 * 10 - 0x43f8) == '\0' || 
                *(char *)(iStack_16 * 10 - 0x43f8) == '.') {
                break;
            }
            // Compare name
            unsigned short* puStack_4 = (unsigned short*)(iStack_16 * 10 - 0x43f7);
            int iVar3 = strcmp_ci(puStack_4, param_2, 0x10bf);
            if (iVar3 == 0) {
                iStack_18 = iStack_16;
                goto LAB_FOUND;
            }
        }
        
    LAB_FOUND:
        if (iStack_18 >= 0) {
            // Found match, move to front
            resource_slot_swap(param_1, iStack_18);
            *(char *)(param_1 * 10 - 0x43f8) = 4;
            return;
        }
        
        // No match, find LRU slot (lowest priority value)
        char cVar2 = 5;
        iStack_18 = -1;
        for (int iStack_16 = 0; iStack_16 < 4; iStack_16++) {
            char cVar1 = *(char *)(iStack_16 * 10 - 0x43f8);
            if (cVar1 <= cVar2) {
                iStack_18 = iStack_16;
                cVar2 = cVar1;
            }
        }
        
        if (iStack_18 >= 0) {
            resource_slot_swap(param_1, iStack_18);
        }
        
        *(char *)(param_1 * 10 - 0x43f8) = 4;
        
        // Copy name to slot
        unsigned short* puStack_4 = (unsigned short*)0x8;
        unsigned short iStack_6 = param_2;
        unsigned short iStack_8 = param_1 * 10 - 0x43f7;
        strncpy_word(puStack_4, iStack_6, iStack_8);
        
        // Initialize slot data
        puStack_4 = (unsigned short*)0x10bf;
        iStack_6 = param_2;
        iStack_8 = 0xd7d1;
        FUN_1d02_08a6(puStack_4, iStack_6, iStack_8);
        
        puStack_4 = (unsigned short*)0x10bf;
        iStack_6 = param_1 + 1;
        iStack_8 = 0xd7e2;
        FUN_2741_0256(puStack_4, iStack_6, iStack_8);
        return;
    }
    
    // param_1 == 0: read name into buffer
    unsigned short puStack_4 = (unsigned short*)0x10bf;
    unsigned short iStack_6 = param_2;
    unsigned short iStack_8 = 0xd697;
    FUN_1d02_08a6(puStack_4, iStack_6, iStack_8);
    
    puStack_4 = (unsigned short*)0x10bf;
    iStack_6 = param_1 + 1;
    iStack_8 = 0xd6a6;
    FUN_2741_0256(puStack_4, iStack_6, iStack_8);
    return;
}