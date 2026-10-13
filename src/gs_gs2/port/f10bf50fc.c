/* GS.GS2 10bf:50fc - conditional convert_to_screen_coords */
extern void _far convert_to_screen_coords(void);
extern int *word_6EA8[];
void _far FUN_10bf_50fc(void)
{
    if (*(char *)(word_6EA8[0] - 2) != 7) {
        convert_to_screen_coords();
    }
    return;
}