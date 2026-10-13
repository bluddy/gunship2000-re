/* GS2.GS2 1926:0143 - register_handler
 * Registers interrupt handler at table 0x160
 * param_1 = DX (handler offset), param_2 = DS (handler segment)
 * Returns AX
 */
extern unsigned short _far register_handler(int param_1, int param_2)
{
    int *piVar1;
    for (piVar1 = (int *)0x160; *piVar1 != 0 || piVar1[1] != 0; piVar1 = piVar1 + 2) {
    }
    *piVar1 = param_1;
    piVar1[1] = param_2;
    return 0;  /* AX return value unknown */
}