/* GS2.GS2 137f:000a - flight_check_bounds
 * Entry point for flight bounds checking
 * Calls bounds_check_flags, triggers external thunk if needed
 */
extern int _far bounds_check_flags(int ax, int cx, int bx, int dx);
extern void _far thunk_EXT_FUN_0000_0000(unsigned short);
extern void _far flight_check_bounds(void)
{
    int iVar1;
    iVar1 = bounds_check_flags(0, 0, 0, 0);  /* params in registers */
    if (iVar1 != 0) {
        thunk_EXT_FUN_0000_0000(0x137f);
    }
    return;
}