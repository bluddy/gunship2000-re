/* GS.GS2 10bf:2250 - strncpy_word
 * Word-aligned bounded string copy from param_2 to param_1, up to param_3 chars
 * Pads with zeros if param_2 shorter than param_3
 * Returns param_1
 */
extern char * _far strncpy_word(char *param_1, char *param_2, int param_3)
{
    char *pcVar1;
    char *pcVar2;
    char *pcVar3;
    pcVar3 = param_1;
    if (param_3 != 0) {
        do {
            pcVar1 = param_2;
            param_2 = param_2 + 1;
            if (*pcVar1 == '\0') break;
            pcVar2 = pcVar3;
            pcVar3 = pcVar3 + 1;
            *pcVar2 = *pcVar1;
            param_3 = param_3 - 1;
        } while (param_3 != 0);
        for (; param_3 != 0; param_3 = param_3 - 1) {
            pcVar1 = pcVar3;
            pcVar3 = pcVar3 + 1;
            *pcVar1 = '\0';
        }
    }
    return param_1;
}