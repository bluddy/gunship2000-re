/* GS.GS2 10bf:06dc - wrapper to FUN_10bf_06b0 with 0 as third param */
extern unsigned short _far FUN_10bf_06b0(unsigned short, unsigned short, unsigned short);
unsigned short _far FUN_10bf_06dc(unsigned short param_1, unsigned short param_2)
{
    return FUN_10bf_06b0(param_1, param_2, 0);
}