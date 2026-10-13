/* GS2.GS2 12a2:092c - mission_slot_alloc
 * Allocates mission slot, calls FUN_12a2_0552 (dos_alloc_memory)
 * param_1 = mission index
 * Returns slot handle or -1 on error
 */
extern int _far FUN_12a2_0552(unsigned int, unsigned int, unsigned int, unsigned int);
extern int _far mission_slot_alloc(int param_1)
{
    int iVar1, iVar2, iVar3;
    unsigned int in_DX;
    
    if ((param_1 < 0) || (*(unsigned int *)0x31ed <= (unsigned int)param_1)) {
        *(unsigned short *)0x31e0 = 9;
        return -1;
    }
    
    iVar2 = FUN_12a2_0552(param_1, 0, 0, 1);
    if ((iVar2 == -1) && (in_DX == -1)) {
        return -1;
    }
    
    iVar3 = in_DX;
    iVar1 = FUN_12a2_0552(param_1, 0, 0, 2);
    if ((iVar1 != iVar2) || (iVar3 != in_DX)) {
        FUN_12a2_0552(param_1, iVar2, in_DX, 0);
    }
    return iVar1;
}