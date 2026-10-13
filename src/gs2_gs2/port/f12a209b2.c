/* GS2.GS2 12a2:09b2 - check_carry_after_alloc
 * Checks carry flag after FUN_12a2_09fa, zeroes param_1 if carry set
 */
extern void _far FUN_12a2_09fa(void);
extern unsigned short _far check_carry_after_alloc(unsigned short param_1)
{
    FUN_12a2_09fa();
    if (_getflags() & 1) {
        param_1 = 0;
    }
    return param_1;
}