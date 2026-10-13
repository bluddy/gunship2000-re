/* GS2.GS2 12a2:0d5e - far_strcpy
 * Far string copy with word alignment
 * param_1 = dest, param_2 = src
 */
extern void _far far_strcpy(char *param_1, char *param_2)
{
    char *pcVar1;
    char *pcVar2;
    unsigned int uVar3;
    unsigned int uVar4;
    char *pcVar5;
    char *pcVar6;
    char *src;
    char *dest;
    
    src = param_2;
    uVar3 = 0xffff;
    pcVar6 = src;
    do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar1 = pcVar6;
        pcVar6 = pcVar6 + 1;
    } while (*pcVar1 != '\0');
    uVar3 = ~uVar3;
    dest = param_1;
    if (((unsigned int)dest & 1) != 0) {
        dest = dest + 1;
        src = src + 1;
        *param_1 = *param_2;
        uVar3 = uVar3 - 1;
    }
    for (uVar4 = uVar3 >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
        pcVar2 = dest;
        dest = dest + 2;
        pcVar1 = src;
        src = src + 2;
        *(unsigned short *)pcVar2 = *(unsigned short *)pcVar1;
    }
    for (uVar3 = (uVar3 & 1); uVar3 != 0; uVar3 = uVar3 - 1) {
        pcVar2 = dest;
        dest = dest + 1;
        pcVar1 = src;
        src = src + 1;
        *pcVar2 = *pcVar1;
    }
    return;
}