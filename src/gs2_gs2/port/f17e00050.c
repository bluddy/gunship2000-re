/* GS2.GS2 17e0:0050 - set_overlay_param
 * Stores param_1 at offset 0x000a in current segment (17e0)
 */
extern void _far set_overlay_param(unsigned short param_1)
{
    *(unsigned short *)0x000a = param_1;
    return;
}