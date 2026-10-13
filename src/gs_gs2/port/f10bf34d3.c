/* GS.GS2 10bf:34d3 - float_denormal_adjust
 * Floating-point denormal handling for 32-bit fixed-point values
 * param_1 = pointer to 3-word value [low, mid, high] (SI-relative in original)
 * Returns 32-bit result in DX:AX (as unsigned long)
 * Original uses SI register for input pointer
 */
extern unsigned long _far float_denormal_adjust(unsigned short *param_1)
{
    unsigned int uVar1, uVar2, uVar5;
    int iVar3;
    unsigned char bVar4, bVar6;
    unsigned long uVar7;
    uVar5 = param_1[1];  /* unaff_SI + 2 */
    uVar1 = param_1[2];  /* unaff_SI + 4 */
    bVar4 = (unsigned char)(param_1[3] & 0xf) | 0x10;  /* unaff_SI + 6 */
    uVar2 = (param_1[3] & 0x7fff) >> 4;
    if ((uVar2 != 0) && (uVar2 > 0x3fd)) {
        if ((uVar2 - 0x3fe) > 0x20) {
            /* call FUN_10bf_5198() - not ported, return 0 */
            return 0;
        }
        for (iVar3 = -(uVar2 - 0x423); (char)iVar3 > 7; iVar3 = (char)iVar3 - 8) {
            uVar5 = ((char)uVar1 << 8) | (char)(uVar5 >> 8);
            uVar1 = ((unsigned int)bVar4 << 8) | (char)(uVar1 >> 8);
            bVar4 = 0;
        }
        for (; iVar3 != 0; iVar3 = iVar3 - 1) {
            bVar6 = bVar4 & 1;
            bVar4 = bVar4 >> 1;
            uVar2 = uVar1 & 1;
            uVar1 = uVar1 >> 1 | (unsigned int)bVar6 << 15;
            uVar5 = uVar5 >> 1 | (unsigned int)(uVar2 != 0) << 15;
        }
        return ((unsigned long)uVar1 << 16) | uVar5;
    }
    return 0;
}