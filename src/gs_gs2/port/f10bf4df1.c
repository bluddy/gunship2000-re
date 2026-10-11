/* GS.GS2 10bf:4df1 - calls FUN_10bf_34d3, conditional negate */
extern int _far FUN_10bf_34d3(void);
extern unsigned char byte_709E[];
int _far FUN_10bf_4df1(void)
{
    int iVar1 = FUN_10bf_34d3();
    if ((byte_709E[0] & 1) != 0) {
        iVar1 = -iVar1;
    }
    return iVar1;
}