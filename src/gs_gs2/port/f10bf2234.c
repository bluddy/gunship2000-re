/* GS.GS2 10bf:2234 - strlen
 * Returns length of string at param_1
 */
extern int _far strlen(char *param_1)
{
    char *pcVar1;
    unsigned int uVar2;
    uVar2 = 0xffff;
    do {
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        pcVar1 = param_1;
        param_1 = param_1 + 1;
    } while (*pcVar1 != '\0');
    return ~uVar2 - 1;
}