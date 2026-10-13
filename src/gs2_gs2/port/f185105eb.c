/* GS2.GS2 1851:05eb - check_timing_loop
 * Measures timing loop using DAT_1851_0b6b counter
 * Compares with threshold at 0x0b73, sets 0x0690/0x0692
 * Calls FUN_1851_0668 in loop
 */
extern void _far FUN_1851_0668(void);
extern void _far check_timing_loop(void)
{
    unsigned int uVar2;
    int iVar1;
    unsigned char uVar3;
    uVar2 = 0;
    iVar1 = *(int *)0x0b6b;
    do {
        if (uVar2 <= *(unsigned int *)0x0b73) {
            uVar2 = *(unsigned int *)0x0b73;
        }
        iVar1 = iVar1 - 1;
    } while (iVar1 != 0);
    uVar3 = 0xff7f < uVar2;
    *(unsigned int *)0x0690 = uVar2 + 0x80;
    do {
        FUN_1851_0668();
    } while (!uVar3);
    *(unsigned int *)0x0692 = uVar2 + 0x80;
    return;
}