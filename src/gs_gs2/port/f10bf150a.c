/* GS.GS2 10bf:150a - bit manipulation on table at 0x6a97 */
unsigned int _far FUN_10bf_150a(unsigned int param_1)
{
    extern unsigned char byte_6A97[];
    if ((byte_6A97[param_1] & 4) == 0) {
        param_1 = (param_1 & 0xffdf) - 7;
    }
    return param_1;
}