/* GS.GS2 10bf:50fc - conditional FUN_10bf_32d7 */
extern void _far FUN_10bf_32d7(void);
extern int *word_6EA8[];
void _far FUN_10bf_50fc(void)
{
    if (*(char *)(word_6EA8[0] - 2) != 7) {
        FUN_10bf_32d7();
    }
    return;
}