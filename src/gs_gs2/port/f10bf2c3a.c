/* GS.GS2 10bf:2c3a - memset_word
 * Fills param_3 bytes at param_1 with param_2 (word-aligned fill with byte tail)
 */
extern void _far memset_word(unsigned short *dest, unsigned char fill, unsigned int count)
{
    if (count != 0) {
        if (((unsigned int)dest & 1) != 0) {
            *(unsigned char *)dest = fill;
            dest = (unsigned short *)((int)dest + 1);
            count = count - 1;
        }
        for (unsigned int uVar2 = count >> 1; uVar2 != 0; uVar2--) {
            *dest = (unsigned short)(fill | (fill << 8));
            dest++;
        }
        for (unsigned int uVar2 = (count & 1) != 0; uVar2 != 0; uVar2--) {
            *(unsigned char *)dest = fill;
            dest = (unsigned short *)((int)dest + 1);
        }
    }
    return;
}