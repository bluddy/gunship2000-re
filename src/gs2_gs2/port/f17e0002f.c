/* GS2.GS2 17e0:002f - set_overlay_params4
 * Stores 4 params at offsets 0x0013, 0x0015, 0x0017, 0x0019
 */
extern void _far set_overlay_params4(unsigned short param_1, unsigned short param_2,
                                     unsigned short param_3, unsigned short param_4)
{
    *(unsigned short *)0x0013 = param_1;
    *(unsigned short *)0x0015 = param_2;
    *(unsigned short *)0x0017 = param_3;
    *(unsigned short *)0x0019 = param_4;
    return;
}