/* GS.GS2 1dea:1086 - calls FUN_10bf_02c0 and FUN_2092_0024 (far) */
extern void _far FUN_10bf_02c0(void);
extern void _far FUN_2092_0024(unsigned short *);
void _far FUN_1dea_1086(void)
{
    unsigned short dummy = 4;
    FUN_10bf_02c0();
    FUN_2092_0024(&dummy);
    return;
}