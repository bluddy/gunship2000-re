/* GS.GS2 10bf:4fb0 - conditional convert_to_screen_coords, then call_indirect */
extern void _far convert_to_screen_coords(void);
extern void _far call_indirect(void);
extern int *word_6EA8[];
void _far FUN_10bf_4fb0(void)
{
    if (*(char *)(word_6EA8[0] - 2) != 7) {
        convert_to_screen_coords();
    }
    call_indirect();
    return;
}