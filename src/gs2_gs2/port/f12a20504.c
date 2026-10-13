/* GS2.GS2 12a2:0504 - check_carry_call
 * If carry flag set, calls FUN_12a2_0524, returns AL
 */
extern void _far FUN_12a2_0524(void);
extern unsigned char _far check_carry_call(unsigned char in_AL, int carry_flag)
{
    if (carry_flag) {
        FUN_12a2_0524();
        return in_AL;
    }
    return 0;
}