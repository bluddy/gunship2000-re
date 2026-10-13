/* GS.GS2 10bf:2bc6 - memmove_word
 * Moves param_3 bytes from param_2 to param_1 (handles overlapping regions)
 * Returns param_1
 */
extern unsigned short * _far memmove_word(unsigned short *param_1, unsigned short *param_2, unsigned int param_3)
{
    unsigned char *d;
    unsigned char *s;
    unsigned int n;
    if (param_3 != 0) {
        d = (unsigned char *)param_1;
        s = (unsigned char *)param_2;
        if ((unsigned int)s < (unsigned int)d &&
            (unsigned int)d < (unsigned int)s + param_3) {
            d = d + param_3;
            s = s + param_3;
            while (1) {
                d = d - 1;
                s = s - 1;
                if (param_3 == 0) break;
                param_3 = param_3 - 1;
                *d = *s;
            }
        } else {
            d = (unsigned char *)param_1;
            s = (unsigned char *)param_2;
            if (((unsigned int)d & 1) != 0) {
                *d = *s;
                d = d + 1;
                s = s + 1;
                param_3 = param_3 - 1;
            }
            for (n = param_3 >> 1; n != 0; n = n - 1) {
                *(unsigned short *)d = *(unsigned short *)s;
                d = d + 2;
                s = s + 2;
            }
            if ((param_3 & 1) != 0) {
                *d = *s;
            }
        }
    }
    return param_1;
}
