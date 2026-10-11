/* GS.GS2 10bf:4fb0 - conditional FUN_10bf_32d7, then FUN_10bf_4f50 */
extern void _far FUN_10bf_32d7(void);
extern void _far FUN_10bf_4f50(void);
extern int *word_6EA8[];
void _far FUN_10bf_4fb0(void)
{
    if (*(char *)(word_6EA8[0] - 2) != 7) {
        FUN_10bf_32d7();
    }
    FUN_10bf_4f50();
    return;
}