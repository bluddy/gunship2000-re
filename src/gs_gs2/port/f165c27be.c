/* GS.GS2 165c:27be - returns char from memory at param_1 - 0x4a30 */
extern void _far FUN_10bf_02c0(void);
int _far FUN_165c_27be(int param_1)
{
    FUN_10bf_02c0();
    return (int)*(char *)(param_1 - 0x4a30);
}