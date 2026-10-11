/* GS.GS2 1dea:06dc - returns boolean comparison */
extern void _far FUN_10bf_02c0(void);
unsigned char _far FUN_1dea_06dc(void)
{
    FUN_10bf_02c0();
    return (*(int *)0xad59 > 0xf) ? 1 : 0;
}