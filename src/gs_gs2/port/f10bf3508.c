/* GS.GS2 10bf:3508 - float_to_fixed2
 * Converts floating-point format to 32-bit fixed-point
 * param_1 = pointer to 4-byte float (SI-relative in original)
 * Returns 32-bit fixed-point result in DX:AX
 * Original uses SI register for input pointer
 */
extern unsigned long _far float_to_fixed2(unsigned short *param_1)
{
    unsigned int uVar1, uVar2, uVar5;
    int iVar4;
    unsigned char bVar3;
    unsigned long uVar6;
    uVar5 = (unsigned int)param_1[0] << 8;        /* *SI << 8 */
    bVar3 = (param_1[3] << 1) | ((int)param_1[1] < 0);  /* SI[3]<<1 | sign(SI+1) */
    uVar2 = (param_1[1] & 0x7fff) | 0x8000;      /* mantissa with hidden bit */
    if ((bVar3 != 0) && (bVar3 > 0x7d)) {
        if ((bVar3 + 0x82) > 0x20) {
            /* call FUN_10bf_5198() - not ported, return 0 */
            return 0;
        }
        for (iVar4 = -((bVar3 + 0x82) - 0x20); (char)iVar4 > 7; iVar4 = (char)iVar4 - 8) {
            uVar5 = ((char)uVar2 << 8) | (char)(uVar5 >> 8);
            uVar2 = uVar2 >> 8;
        }
        for (; iVar4 != 0; iVar4 = iVar4 - 1) {
            uVar1 = uVar2 & 1;
            uVar2 = uVar2 >> 1;
            uVar5 = uVar5 >> 1 | (unsigned int)(uVar1 != 0) << 15;
        }
        return ((unsigned long)uVar2 << 16) | uVar5;
    }
    return 0;
}