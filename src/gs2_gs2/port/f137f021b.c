/* GS2.GS2 137f:021b - set_bounds
 * Sets boundary limits at 0xea, 0xec, 0xee, 0xf0
 * Saves old values at 0xf2, 0xf4, 0xf6, 0xf8
 */
extern void _far set_bounds(unsigned short p1, unsigned short p2, unsigned short p3, unsigned short p4)
{
    unsigned short uVar1;
    uVar1 = *(unsigned short *)0xea;
    *(unsigned short *)0xea = p1;
    *(unsigned short *)0xf2 = uVar1;
    uVar1 = *(unsigned short *)0xec;
    *(unsigned short *)0xec = p3;
    *(unsigned short *)0xf4 = uVar1;
    uVar1 = *(unsigned short *)0xee;
    *(unsigned short *)0xee = p2;
    *(unsigned short *)0xf6 = uVar1;
    uVar1 = *(unsigned short *)0xf0;
    *(unsigned short *)0xf0 = p4;
    *(unsigned short *)0xf8 = uVar1;
    return;
}