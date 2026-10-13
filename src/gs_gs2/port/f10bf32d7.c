/* GS.GS2 10bf:32d7 - convert_to_screen_coords
 * Converts a 32-bit fixed-point value to screen coordinates
 * param_1 = pointer to input fixed-point value (low, high words)
 * param_2 = output buffer (4 words: [0]=flags, [1]=x, [2]=y, [3]=z)
 */
extern void _far convert_to_screen_coords(unsigned short *param_1, unsigned short *param_2)
{
    unsigned int uVar2, uVar3, uVar4;
    unsigned int *puVar1;
    puVar1 = param_1;
    param_2[-1] = (unsigned short)param_2;  /* unaff_DI[-2] = unaff_DI */
    *(unsigned char *)(param_2 - 1) = 7;    /* *(unaff_DI + -1) = 7 */
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    if ((uVar3 & 0x7f80) != 0) {
        *param_2 = 0;
        uVar4 = uVar2 >> 1;
        param_2[1] = ((((uVar2 & 1) != 0) << 15) >> 1 | ((uVar4 & 1) != 0) << 15) >> 1 | ((uVar4 & 2) != 0) << 15;
        param_2[2] = ((uVar4 | ((uVar3 & 1) != 0) << 15) >> 1 | (((uVar3 >> 1) & 1) != 0) << 15) >> 1 | (((uVar3 >> 2) & 1) != 0) << 15;
        param_2[3] = ((((char)(uVar3 >> 11)) << 8 | (char)(uVar3 >> 3)) & 0x8fff) + 0x3800;
        return;
    }
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    return;
}