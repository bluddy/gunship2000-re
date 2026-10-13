/* GS.GS2 10bf:2d30 - get_random
 * LCG pseudo-random generator
 * State at DS:0x6ba0 (low word) / DS:0x6ba2 (high word)
 * state = state * 0x43fd + 3 + 0x269ec3; returns high word & 0x7fff
 */
extern long _far FUN_10bf_2f96(unsigned int, int, unsigned int, int);
unsigned int _far get_random(void)
{
    long l;
    unsigned long r;
    l = FUN_10bf_2f96(*(unsigned short *)0x6ba0, *(int *)0x6ba2, 0x43fd, 3);
    r = (unsigned long)(l + 0x269ec3L);
    *(unsigned short *)0x6ba0 = (unsigned short)r;
    *(unsigned short *)0x6ba2 = (unsigned short)(r >> 16);
    return ((unsigned short)(r >> 16)) & 0x7fff;
}
