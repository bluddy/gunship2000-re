/* GS2.GS2 1851:0668 - check_overlay_state
 * Checks overlay state at SI pointer
 * Returns AX (unchanged)
 */
extern unsigned short _far check_overlay_state(char *unaff_SI)
{
    if (((*unaff_SI == -0x18) &&
         (unaff_SI + 3 + *(int *)(unaff_SI + 1) == (char *)0x529) &&
         (unaff_SI[3] == -0x16) &&
         (*(unsigned int *)(unaff_SI + 8) < *(unsigned int *)0x0b6b))) {
        return 0;  /* AX return value */
    }
    return 0;  /* AX return value */
}