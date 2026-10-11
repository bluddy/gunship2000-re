/* GS.GS2 20bc:000a - calls FUN_10bf_02c0 and FUN_20bc_0036 (far) */
extern void _far FUN_10bf_02c0(void);
extern void _far FUN_20bc_0036(unsigned short, unsigned short);
void _far FUN_20bc_000a(void)
{
    FUN_10bf_02c0();
    FUN_20bc_0036(0xc32, 0xc30);
    return;
}