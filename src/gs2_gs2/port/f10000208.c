/* GS2.GS2 1000:0208 - get_mission_params
 * Retrieves mission parameters from table at 0x3106
 * param_1..param_7 = output pointers
 */
extern void _far FUN_12a2_0b99(unsigned short, unsigned short);
extern void _far get_mission_params(unsigned int *param_1, unsigned int *param_2, unsigned int *param_3,
                                    int *param_4, int *param_5, int *param_6, int *param_7)
{
    unsigned int local_4;
    int iVar7;
    char *pcVar6;
    unsigned char bVar2;
    local_4 = 0;
    if (*(int *)0x3108 != 0) {
        if (*(int *)0x3108 != 1) {
            return;
        }
        iVar7 = *(int *)0x3106;
        if ((*(char *)(iVar7 << 3) == '\0') && (iVar7 = iVar7 + 1, *(int *)0x310a == iVar7)) {
            *(int *)0x3106 = iVar7;
            *(unsigned short *)0x3104 = 0;
            FUN_12a2_0b99(0x3bac, 0xffff);
            iVar7 = *(int *)0x3106;
        }
        pcVar6 = (char *)(iVar7 * 8);
        bVar2 = pcVar6[1];
        *param_1 = (unsigned int)(bVar2 >> 4);
        *param_2 = *(unsigned int *)(pcVar6 + 6);
        *param_3 = bVar2 & 0xf;
        *param_4 = (int)pcVar6[2];
        *param_5 = (int)pcVar6[3];
        *param_6 = (int)pcVar6[4];
        *param_7 = (int)pcVar6[5];
        *pcVar6 = *pcVar6 - 1;
    }
    return;
}