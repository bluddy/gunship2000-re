/* GS2.GS2 12a2:02be - checksum_verify
 * Computes XOR checksum of first 0x42 bytes at 0x0
 * Compares with 0x5500 pattern, calls init_dos_handlers on failure
 * Returns 1 on failure, checksum ^ 0x5500 on success
 */
extern void _far init_dos_handlers(void);
extern void _far call_dos_handler(unsigned short);
extern unsigned int _far checksum_verify(void)
{
    unsigned char *pbVar5;
    unsigned char bVar3;
    unsigned int uVar2;
    int iVar4;
    pbVar5 = (unsigned char *)0x0;
    iVar4 = 0x42;
    bVar3 = 0;
    do {
        bVar3 = bVar3 ^ *pbVar5;
        pbVar5 = pbVar5 + 1;
        iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
    uVar2 = ((unsigned int)bVar3 << 8) | *pbVar5;
    uVar2 = uVar2 ^ 0x5500;
    if (bVar3 != 0x55) {
        init_dos_handlers();
        call_dos_handler(1);
        uVar2 = 1;
    }
    return uVar2;
}