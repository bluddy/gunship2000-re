/* GS.GS2 10bf:4df1 - calls float_denormal_adjust, conditional negate */
extern int _far float_denormal_adjust(void);
extern unsigned char byte_709E[];
int _far FUN_10bf_4df1(void)
{
    int iVar1 = float_denormal_adjust();
    if ((byte_709E[0] & 1) != 0) {
        iVar1 = -iVar1;
    }
    return iVar1;
}