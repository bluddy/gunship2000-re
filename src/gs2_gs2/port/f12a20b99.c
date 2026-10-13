/* GS2.GS2 12a2:0b99 - write_config_entry
 * param_1 = pointer to config struct, param_2 = value (default 1)
 * Writes two words from param_1+8, param_1+10 to *(param_1+6)
 * Returns param_2
 */
extern int _far write_config_entry(int param_1, int param_2)
{
    unsigned short *puVar1;
    if (param_2 == 0) {
        param_2 = 1;
    }
    puVar1 = (unsigned short *)*(int *)(param_1 + 6);
    *puVar1 = *(unsigned short *)(param_1 + 8);
    puVar1[1] = *(unsigned short *)(param_1 + 10);
    return param_2;
}