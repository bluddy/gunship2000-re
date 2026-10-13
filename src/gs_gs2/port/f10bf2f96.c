/* GS.GS2 10bf:2f96 - fixed_point_mul
 * 32-bit multiply: (param_2:param_1) * (param_4:param_3), low 32 bits kept
 * Returns result in DX:AX
 */
extern long _far fixed_point_mul(unsigned int param_1, int param_2,
                                 unsigned int param_3, int param_4)
{
    unsigned long prod;
    unsigned int low;
    unsigned int high;
    prod = (unsigned long)param_1 * (unsigned long)param_3;
    low = (unsigned int)prod;
    high = (unsigned int)(prod >> 16);
    high = high + (unsigned int)((unsigned int)param_2 * (unsigned int)param_3);
    high = high + (unsigned int)((unsigned int)param_1 * (unsigned int)param_4);
    return (long)(((unsigned long)high << 16) | low);
}
