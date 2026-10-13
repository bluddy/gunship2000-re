/* GS2.GS2 12a2:0d94 - far_strcat
 * Far string concatenation: dest += src
 * Returns dest
 */
extern char * _far far_strcat(char *param_1, char *param_2)
{
    char *pcVar1;
    char *pcVar2;
    int iVar3;
    unsigned int uVar4;
    unsigned int uVar5;
    char *pcVar6;
    char *pcVar7;
    char *pcVar8;
    char *src;
    char *dest;
    
    iVar3 = -1;
    pcVar6 = param_1;
    do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 - 1;
        pcVar1 = pcVar6;
        pcVar6 = pcVar6 + 1;
    } while (*pcVar1 != '\0');
    
    uVar4 = 0xffff;
    src = param_2;
    do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar1 = src;
        src = src + 1;
    } while (*pcVar1 != '\0');
    uVar4 = ~uVar4;
    src = src - uVar4;
    pcVar8 = pcVar6 - 1;
    if (((unsigned int)src & 1) != 0) {
        pcVar1 = src;
        src = src + 1;
        pcVar8[1] = *pcVar1;
    }
    /* ... rest truncated for now ... */
    return param_1;
}