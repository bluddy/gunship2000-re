/* GS2.GS2 12a2:0296 - init_dos_handlers
 * Calls call_dos_handler(0xfc), checks 0x3218, calls indirect, then call_dos_handler(0xff)
 */
extern void _far call_dos_handler(unsigned short);
extern void _far init_dos_handlers(void)
{
    call_dos_handler(0xfc);
    if (*(int *)0x3218 != 0) {
        (*(void (*)(unsigned short))*(unsigned short *)0x3216)(0x12a2);
    }
    call_dos_handler(0xff);
    return;
}