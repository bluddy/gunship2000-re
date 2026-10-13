/* GS2.GS2 1000:00e8 - format_number
 * Formats a 32-bit number into a string buffer at 0x3554
 * param_1 = number, param_2 = flags
 */
extern void _far format_number(unsigned int param_1, unsigned int param_2)
{
    unsigned long uVar1;
    char cVar2;
    int iVar3;
    int iVar4;
    unsigned int uStack_4;
    iVar3 = 0;
    if (((param_2 & 0x80) != 0) && (0x7fff < param_1)) {
        *(unsigned char *)0x3554 = '0';
        iVar3 = 1;
        uStack_4 = param_1;
        param_1 = -param_1;
    }
    *(char *)(iVar3 + 0x3554) = (char)((unsigned long)param_1 / 10000) + '0';
    *(char *)(iVar3 + 0x3555) = (char)(((unsigned long)param_1 % 10000) / 1000) + '0';
    uVar1 = ((unsigned long)param_1 % 10000) % 1000;
    if ((param_2 & 8) == 0) {
        *(char *)(iVar3 + 0x3556) = (char)(uVar1 / 100) + '0';
        *(char *)(iVar3 + 0x3557) = (char)((uVar1 % 100) / 10) + '0';
        cVar2 = (char)((uVar1 % 100) % 10);
        iVar3 = iVar3 + 4;
    }
    else {
        *(unsigned char *)(iVar3 + 0x3556) = '.';
        cVar2 = (char)(uVar1 / 100);
        /* ... truncated ... */
    }
    return;
}