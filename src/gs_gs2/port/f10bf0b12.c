/* GS.GS2 10bf:0b12 - buffer_alloc
 * Allocates a new buffer slot. Calls thunk_FUN_10bf_1ff3(0x200) to get memory.
 * If allocation succeeds: sets flags bit 3, buffer size = 1, data ptr = +0xa1
 * If allocation fails: sets flags bit 7, buffer size = 0x200
 * Returns: pointer to buffer data
 */
extern int _far thunk_FUN_10bf_1ff3(unsigned int);
void _far buffer_alloc(int *param_1)
{
    int iVar1 = thunk_FUN_10bf_1ff3(0x200);
    if (iVar1 == 0) {
        *(unsigned char *)(param_1 + 3) = *(unsigned char *)(param_1 + 3) | 4;
        param_1[0x51] = 1;
        iVar1 = (int)param_1 + 0xa1;
    } else {
        *(unsigned char *)(param_1 + 3) = *(unsigned char *)(param_1 + 3) | 8;
        param_1[0x51] = 0x200;
    }
    *param_1 = iVar1;
    param_1[2] = iVar1;
    param_1[1] = 0;
    return;
}