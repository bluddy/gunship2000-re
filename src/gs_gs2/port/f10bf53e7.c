/* GS.GS2 10bf:53e7 - calls FUN_10bf_4d51, FUN_10bf_52dc, entity_buffer_add (all far) */
extern void _far FUN_10bf_4d51(void);
extern void _far FUN_10bf_52dc(void);
extern void _far entity_buffer_add(void);
void _far FUN_10bf_53e7(void)
{
    FUN_10bf_4d51();
    FUN_10bf_52dc();
    entity_buffer_add();
    return;
}