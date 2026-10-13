/* GS.GS2 10bf:5726 - format_number_string
 * Formats a fixed-point number to string with precision
 * param_1 = pointer to 4-word fixed-point value
 * param_2 = output buffer
 * param_3 = precision/flags
 * Returns pointer to output buffer
 */
extern unsigned short * _far FUN_10bf_526e(unsigned short, unsigned short, unsigned short, unsigned short);
extern void _far FUN_10bf_236c(char *, int, int *);
extern void _far FUN_10bf_5942(int, char *);
extern void _far FUN_10bf_2c3a(char *, unsigned char, int);
extern char * _far format_number_string(unsigned short *param_1, char *param_2, int param_3)
{
    int iVar1, iVar2;
    char *puVar3;
    int *piStack_4;
    if (*(char *)0x7146 == '\0') {
        piStack_4 = (int *)FUN_10bf_526e(param_1[0], param_1[1], param_1[2], param_1[3]);
        FUN_10bf_236c(param_2 + (*piStack_4 == 0x2d), piStack_4[1] + param_3, piStack_4);
    } else {
        piStack_4 = (int *)*(unsigned short *)0x9e70;
        iVar2 = *piStack_4;
        if (*(int *)0x7148 == param_3) {
            iVar1 = *(int *)0x7148;
            param_2[iVar1 + (unsigned int)(iVar2 == 0x2d)] = '0';
            param_2[iVar1 + (unsigned int)(iVar2 == 0x2d) + 1] = '\0';
        }
    }
    puVar3 = param_2;
    if (*piStack_4 == 0x2d) {
        *param_2 = '-';
        puVar3 = param_2 + 1;
    }
    if (piStack_4[1] < 1) {
        FUN_10bf_5942(1, puVar3);
        *puVar3 = '0';
        puVar3 = puVar3 + 1;
    } else {
        puVar3 = puVar3 + piStack_4[1];
    }
    if (0 < param_3) {
        FUN_10bf_5942(1, puVar3);
        *puVar3 = '.';
        if (piStack_4[1] < 0) {
            int iVar2;
            if (*(char *)0x7146 == '\0') {
                iVar2 = -piStack_4[1];
                if (-param_3 != piStack_4[1] && param_3 <= iVar2) {
                    iVar2 = param_3;
                }
            } else {
                iVar2 = -piStack_4[1];
            }
            FUN_10bf_5942(iVar2, puVar3 + 1);
            FUN_10bf_2c3a(puVar3 + 1, '0', iVar2);
        }
    }
    return param_2;
}