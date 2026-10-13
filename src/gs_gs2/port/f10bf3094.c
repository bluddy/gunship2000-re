/* GS.GS2 10bf:3094 - fixed_point_mul_assign
 * In-place 32-bit fixed-point multiply: *param_1 *= (param_2:param_3)
 * param_1 = pointer to 32-bit value (low word at [0], high word at [2])
 * param_2 = low word of multiplier, param_3 = high word of multiplier
 */
extern long _far fixed_point_mul(unsigned int, int, unsigned int, int);
extern void _far fixed_point_mul_assign(unsigned short *param_1, unsigned short param_2, unsigned short param_3)
{
    unsigned long result;
    result = fixed_point_mul(param_1[0], (int)param_1[1], param_2, (int)param_3);
    param_1[0] = (unsigned short)result;
    param_1[1] = (unsigned short)(result >> 16);
    return;
}