/* GS.GS2 10bf:2d1e - writes to memory at 0x6ba0 and 0x6ba2 */
void _far FUN_10bf_2d1e(unsigned short param_1)
{
    *(unsigned short *)0x6ba0 = param_1;
    *(unsigned short *)0x6ba2 = 0;
    return;
}