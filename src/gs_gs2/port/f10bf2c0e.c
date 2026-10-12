/* GS.GS2 10bf:2c0e - memcpy_word
 * Copies param_3 bytes from param_2 to param_1 (word-aligned copy with byte tail)
 */
extern void _far memcpy_word(unsigned short *dest, unsigned short *src, unsigned int count)
{
    if (count != 0) {
        if (((unsigned int)dest & 1) != 0) {
            *(unsigned char *)dest = *(unsigned char *)src;
            dest = (unsigned short *)((int)dest + 1);
            src = (unsigned short *)((int)src + 1);
            count = count - 1;
        }
        for (unsigned int uVar3 = count >> 1; uVar3 != 0; uVar3--) {
            *dest = *src;
            dest++;
            src++;
        }
        for (unsigned int uVar3 = (count & 1) != 0; uVar3 != 0; uVar3--) {
            *(unsigned char *)dest = *(unsigned char *)src;
            dest = (unsigned short *)((int)dest + 1);
            src = (unsigned short *)((int)src + 1);
        }
    }
    return;
}