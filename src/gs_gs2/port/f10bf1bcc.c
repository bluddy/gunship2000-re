/* GS.GS2 10bf:1bcc - serial_port_open
 * Opens a serial/UART device for I/O
 * param_1 = buffer params, param_2 = flags, param_3 = char, param_4 = timeout
 * Returns: handle or error code (uses DOS INT 21h)
 */
extern void _far FUN_10bf_1d77(void);
extern void _far FUN_10bf_05b5(void);
extern void _far dos_int21h_call(unsigned short *);
extern unsigned short _far serial_port_open(unsigned short param_1, unsigned short param_2, unsigned char param_3, unsigned short param_4)
{
    unsigned short result;
    unsigned short flags = 0;
    if (2 < *(unsigned char *)0x686c) {
        /* set char */
    }
    if ((param_2 & 0x8000) == 0 && ((param_2 & 0x4000) != 0 || (*(unsigned char *)0x6a75 & 0x80) == 0)) {
        flags = 0x80;
    }
    /* INT 21h call - simplified */
    dos_int21h_call(&result);
    return result;
}