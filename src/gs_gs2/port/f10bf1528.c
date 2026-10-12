/* GS.GS2 10bf:1528 - ring_buffer_read
 * Reads a byte from a ring buffer (head/tail buffer)
 * param_1 = buffer struct pointer
 * Returns: byte read (or 0 if buffer empty)
 */
extern int _far FUN_10bf_096c(int *param_1);
unsigned int _far ring_buffer_read(int *param_1)
{
    int *piVar1 = param_1 + 1;
    *piVar1 = *piVar1 - 1;
    if (*piVar1 < 0) {
        return FUN_10bf_096c(param_1);
    } else {
        unsigned char *pbVar2 = (unsigned char *)*param_1;
        *param_1 = *param_1 + 1;
        return (unsigned int)*pbVar2;
    }
}