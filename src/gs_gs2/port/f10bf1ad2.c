/* GS.GS2 10bf:1ad2 - serial_buffer_write
 * Writes a byte to a serial/UART buffer (ring buffer with head/tail)
 * param_1 = byte to write, param_2 = buffer struct pointer
 * Returns: byte written (or 0xffff if buffer full)
 */
extern void _far FUN_10bf_0b12(int *param_2);
unsigned int _far serial_buffer_write(unsigned int param_1, int *param_2)
{
    if ((param_1 == 0xffff) ||
        (((*(unsigned char *)(param_2 + 3) & 1) == 0 &&
         ((*(unsigned char *)(param_2 + 3) & 0x80) == 0 || 
          ((*(unsigned char *)(param_2 + 3) & 2) != 0))))) {
        return 0xffff;
    }
    
    if (param_2[2] == 0) {
        FUN_10bf_0b12(param_2);
    }
    if (param_2[2] == *param_2) {
        if (param_2[1] != 0) return 0xffff;
        *param_2 = *param_2 + 1;
    }
    param_2[1] = param_2[1] + 1;
    *param_2 = *param_2 - 1;
    *(char *)*param_2 = (char)param_1;
    *(unsigned char *)(param_2 + 3) = *(unsigned char *)(param_2 + 3) & 0xef;
    *(unsigned char *)(param_2 + 3) = *(unsigned char *)(param_2 + 3) | 1;
    return param_1 & 0xff;
}