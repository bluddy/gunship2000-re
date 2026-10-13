/* GS.GS2 10bf:2c74 - itoa
 * Converts 32-bit signed integer (param_2:param_1) to string in base param_3
 * If param_4 (flag) != 0 && base==10 && negative: prepend '-'
 * Output at param_5 (DI), returns param_5
 */
extern char * _far itoa(int param_1, int param_2, unsigned int param_3, int param_4, char *param_5)
{
    unsigned long uVar1;
    unsigned char bVar2;
    int iVar4;
    unsigned int uVar4;
    unsigned int uVar5;
    char cVar3;
    char *pbVar6;
    char *pbVar7;
    char *pbVar8;
    int bVar9;
    pbVar7 = param_5;
    pbVar6 = param_5;
    if ((param_4 != 0) && (param_3 == 10) && (param_2 < 0)) {
        pbVar7 = param_5 + 1;
        *param_5 = '-';
        bVar9 = (param_1 != 0);
        param_1 = -param_1;
        param_2 = -(param_2 + bVar9);
        pbVar6 = pbVar7;
    }
    do {
        uVar5 = 0;
        uVar4 = (unsigned int)param_2;
        if (param_2 != 0) {
            uVar4 = param_2 / param_3;
            uVar5 = param_2 % param_3;
        }
        uVar1 = ((unsigned long)uVar5 << 16) | (unsigned int)param_1;
        param_1 = (int)(uVar1 / param_3);
        cVar3 = (char)(uVar1 % (unsigned long)param_3);
        bVar2 = cVar3 + '0';
        if (bVar2 > '9') {
            bVar2 = cVar3 + 0x57;
        }
        pbVar8 = pbVar7 + 1;
        *pbVar7 = bVar2;
        param_2 = (int)uVar4;
        pbVar7 = pbVar8;
    } while (uVar4 != 0 || param_1 != 0);
    *pbVar8 = '\0';
    do {
        pbVar8 = pbVar8 - 1;
        bVar2 = *pbVar8;
        *pbVar8 = *pbVar6;
        *pbVar6 = bVar2;
        pbVar7 = pbVar6 + 2;
        pbVar6 = pbVar6 + 1;
    } while (pbVar7 < pbVar8);
    return param_5;
}