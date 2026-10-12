/* GS.GS2 239c:005c - trig_lookup
 * Looks up a trigonometric value from the table at 0x239c
 * param_1 = angle, param_2 = table offset
 * Returns: table[param_2 - param_1] + param_1 (or param_1 if param_2 <= param_1)
 */
extern void _far FUN_10bf_02c0(void);
extern int _far FUN_239c_0086(int);
int _far trig_lookup(int param_1, int param_2)
{
    FUN_10bf_02c0();
    if (param_2 <= param_1) {
        return param_1;
    }
    int iVar1 = FUN_239c_0086((param_2 - param_1) + 1);
    return iVar1 + param_1;
}