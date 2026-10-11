/* GS.GS2 10bf:581e - sets byte, calls FUN_10bf_5726, clears byte */
extern void _far FUN_10bf_5726(unsigned short, unsigned short, unsigned short);
extern unsigned char byte_7146[];
void _far FUN_10bf_581e(unsigned short param_1, unsigned short param_2, unsigned short param_3)
{
    byte_7146[0] = 1;
    FUN_10bf_5726(param_1, param_2, param_3);
    byte_7146[0] = 0;
    return;
}