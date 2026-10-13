/* GS.GS2 10bf:4dec - calls float_to_fixed2, conditional negate */
extern int _far float_to_fixed2(void);
extern unsigned char byte_709E[];
int _far FUN_10bf_4dec(void)
{
    int iVar1 = float_to_fixed2();
    if ((byte_709E[0] & 1) != 0) {
        iVar1 = -iVar1;
    }
    return iVar1;
}