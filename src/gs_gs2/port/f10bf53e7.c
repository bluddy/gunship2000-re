/* GS.GS2 10bf:53e7 - calls FUN_10bf_4d51, FUN_10bf_52dc, FUN_10bf_4bb8 (all far) */
extern void _far FUN_10bf_4d51(void);
extern void _far FUN_10bf_52dc(void);
extern void _far FUN_10bf_4bb8(void);
void _far FUN_10bf_53e7(void)
{
    FUN_10bf_4d51();
    FUN_10bf_52dc();
    FUN_10bf_4bb8();
    return;
}