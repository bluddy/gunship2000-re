/* GS.GS2 10bf:080e - wrapper to FUN_10bf_0db8 */
extern int _far FUN_10bf_0db8(unsigned short, unsigned short, unsigned short *);
int _far FUN_10bf_080e(unsigned short param_1, unsigned short param_2, unsigned short *param_3)
{
    return FUN_10bf_0db8(param_1, param_2, param_3);
}