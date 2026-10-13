/* GS2.GS2 12a2:05f3 - memory_alloc_thunk
 * Attempts memory allocation via FUN_12a2_0716, falls back to FUN_12a2_0792
 * param_1 = size in paragraphs
 * Returns segment of allocated memory or 0
 */
extern unsigned short _far FUN_12a2_0716(void);
extern void _far FUN_12a2_0792(void);
extern unsigned short _far memory_alloc_thunk(unsigned int param_1)
{
    int bVar2;
    unsigned short uVar1;
    
    bVar2 = param_1 < 0xffe8;
    if (param_1 < 0xffe9) {
        uVar1 = FUN_12a2_0716();
        if (!bVar2) {
            return uVar1;
        }
        FUN_12a2_0792();
        if ((!bVar2) && (uVar1 = FUN_12a2_0716(), !bVar2)) {
            return uVar1;
        }
    }
    return 0;
}