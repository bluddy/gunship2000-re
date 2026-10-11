/* GS.GS2 20bc:0020 - calls FUN_10bf_02c0 and FUN_20bc_0036 */
extern void _far FUN_10bf_02c0(void);
extern void _far FUN_20bc_0036(unsigned short, unsigned short);
void _far FUN_20bc_0020(unsigned short param_1)
{
    FUN_10bf_02c0();
    FUN_20bc_0036(param_1, 0xc3d);
    return;
}