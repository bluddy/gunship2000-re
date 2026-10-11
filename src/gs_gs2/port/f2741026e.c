/* GS.GS2 2741:026e - calls FUN_2741_01a4 (far) */
extern void _far FUN_2741_01a4(unsigned short, unsigned short, unsigned short, unsigned short, unsigned short);
void _far FUN_2741_026e(unsigned short param_1)
{
    FUN_2741_01a4(0xffff, 0, 0, param_1, 1);
    return;
}