/* GS.GS2 10bf:4f50 - call_indirect
 * Indirect call through function pointer at BX+0x7082
 * Updates linked list pointer at DI-4
 * Note: Original uses register calling convention (BX, DI)
 * C port uses globals to simulate register state
 */
extern void _far call_indirect(void)
{
    /* Original: 
       LOCK(); *(int *)(DI-4) = DI; UNLOCK();
       *(far *)0x70a8 = stack_ptr;
       call *(BX + 0x7082);
    */
    /* Placeholder - register calling convention not directly portable */
    return;
}