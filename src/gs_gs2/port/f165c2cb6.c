/* GS.GS2 165c:2cb6 - calls FUN_10bf_02c0 and strcpy_word */
extern void _far FUN_10bf_02c0(void);
extern void _far strcpy_word(unsigned short, unsigned short);
void _far FUN_165c_2cb6(unsigned short param_1)
{
    FUN_10bf_02c0();
    strcpy_word(param_1, 0xb5d6);
    return;
}