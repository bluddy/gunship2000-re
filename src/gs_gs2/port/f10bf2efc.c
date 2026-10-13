/* GS.GS2 10bf:2efc - fixed_point_div
 * 32-bit signed division: (param_2:param_1) / (param_4:param_3)
 * Returns 32-bit quotient in DX:AX
 */
extern long _far fixed_point_div(unsigned int param_1, int param_2,
                                 unsigned int param_3, int param_4)
{
    int neg;
    unsigned long num;
    unsigned long den;
    unsigned long quot;
    neg = 0;
    num = ((unsigned long)(unsigned int)param_2 << 16) | param_1;
    den = ((unsigned long)(unsigned int)param_4 << 16) | param_3;
    if (param_2 < 0) {
        neg = neg ^ 1;
        num = ~num + 1;
    }
    if (param_4 < 0) {
        neg = neg ^ 1;
        den = ~den + 1;
    }
    quot = num / den;
    if (neg != 0) {
        quot = ~quot + 1;
    }
    return (long)quot;
}
