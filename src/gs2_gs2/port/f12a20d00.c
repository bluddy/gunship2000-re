/* GS2.GS2 12a2:0d00 - far_memmove
 * Far memory copy with overlap handling
 * param_1 = destination, param_2 = source, param_3 = byte count
 * Returns destination pointer
 */
extern unsigned short * _far far_memmove(unsigned short *param_1, unsigned short *param_2, int param_3)
{
    unsigned char *dest;
    unsigned char *src;
    int count;
    
    if (param_3 != 0) {
        dest = (unsigned char *)param_1;
        src = (unsigned char *)param_2;
        count = param_3;
        
        if (src < dest && dest < src + count) {
            /* Overlap: copy backwards */
            dest = dest + count;
            src = src + count;
            while (count > 0) {
                dest--;
                src--;
                *dest = *src;
                count--;
            }
        } else {
            /* No overlap: copy forwards */
            while (count > 0) {
                *dest = *src;
                dest++;
                src++;
                count--;
            }
        }
    }
    return param_1;
}