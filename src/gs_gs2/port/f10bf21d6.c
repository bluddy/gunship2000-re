/* GS.GS2 10bf:21d6 - strcpy_word
 * Word-aligned string copy from param_2 to param_1
 * Handles unaligned start, then word copies, then byte tail
 */
extern void _far strcpy_word(char *param_1, char *param_2)
{
    char *pcVar1;
    char *pcVar2;
    unsigned int uVar3;
    unsigned int uVar4;
    char *pcVar5;
    uVar3 = 0xffff;
    pcVar5 = param_2;
    do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar1 = pcVar5;
        pcVar5 = pcVar5 + 1;
    } while (*pcVar1 != '\0');
    uVar3 = ~uVar3;
    if (((unsigned int)param_1 & 1) != 0) {
        pcVar2 = param_1;
        param_1 = param_1 + 1;
        pcVar1 = param_2;
        param_2 = param_2 + 1;
        *pcVar2 = *pcVar1;
        uVar3 = uVar3 - 1;
    }
    for (uVar4 = uVar3 >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
        pcVar2 = param_1;
        param_1 = param_1 + 2;
        pcVar1 = param_2;
        param_2 = param_2 + 2;
        *(unsigned short *)pcVar2 = *(unsigned short *)pcVar1;
    }
    for (uVar3 = (unsigned int)((uVar3 & 1) != 0); uVar3 != 0; uVar3 = uVar3 - 1) {
        pcVar2 = param_1;
        param_1 = param_1 + 1;
        pcVar1 = param_2;
        param_2 = param_2 + 1;
        *pcVar2 = *pcVar1;
    }
    return;
}