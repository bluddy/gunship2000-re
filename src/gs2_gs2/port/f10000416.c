/* GS2.GS2 1000:0416 - set_config_value
 * Stores param_1 at 0xb48, calls FUN_12a2_0b99(0x3bac, 0xffff)
 */
extern int _far FUN_12a2_0b99(int, int);
extern void _far set_config_value(unsigned short param_1)
{
    *(unsigned short *)0xb48 = param_1;
    FUN_12a2_0b99(0x3bac, 0xffff);
    return;
}