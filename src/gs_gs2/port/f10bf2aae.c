/* GS.GS2 10bf:2aae - strcmp_ci
 * Case-insensitive string comparison
 * Returns -1, 0, or 1 based on lexical ordering
 */
extern int _far strcmp_ci(unsigned char *param_1, unsigned char *param_2)
{
    unsigned char *pbVar1;
    unsigned char bVar2;
    unsigned char bVar3;
    bVar3 = 0xff;
    do {
        do {
            if (bVar3 == 0) {
                return 0;
            }
            pbVar1 = param_2;
            param_2 = param_2 + 1;
            bVar3 = *pbVar1;
            pbVar1 = param_1;
            param_1 = param_1 + 1;
        } while (*pbVar1 == bVar3);
        /* convert to uppercase for compare: (c + 0xbf) < 0x1a ? c - 0x20 : c */
        bVar2 = bVar3 + 0xbf + (-((int)(bVar3 + 0xbf) < 0x1a) & 0x20);
        bVar3 = *pbVar1 + 0xbf;
        bVar3 = bVar3 + (-(bVar3 < 0x1a) & 0x20);
    } while (bVar3 == bVar2);
    return (int)((char)((bVar3 < bVar2) ? -1 : 1));
}