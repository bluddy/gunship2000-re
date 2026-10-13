/* GS2.GS2 17e0:00de - word_wrap
 * Word wraps text at param_2 to width param_1 (stored in 0x0013)
 * Replaces newlines with spaces, wraps at word boundaries
 * Uses 0x0008 (left margin), 0x0013 (current pos), 0x0017 (max width)
 */
extern void _far word_wrap(int *param_1, char *param_2)
{
    unsigned short uVar1;
    char cVar2;
    char *pcVar3;
    uVar1 = *(unsigned short *)0x0008;
    while (1) {
        pcVar3 = param_2 + 1;
        cVar2 = *param_2;
        if (cVar2 == '\0') break;
        if (cVar2 == '\n') {
            cVar2 = ' ';
            *param_2 = ' ';
        }
        *param_1 = *param_1 + (unsigned int)*(unsigned char *)((unsigned char)(cVar2 - *(char *)0x1) + 5);
        param_2 = pcVar3;
        if (*(unsigned short *)0x0017 <= *param_1) {
            do {
                param_2 = pcVar3;
                pcVar3 = param_2 - 1;
            } while (*pcVar3 != ' ');
            *pcVar3 = '\n';
            *param_1 = *(unsigned short *)0x0013;
        }
    }
    return;
}