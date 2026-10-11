/* GS.GS2 10bf:092e - calls FUN_10bf_02c0 then FUN_10bf_0db8 with extra param */
extern void _far FUN_10bf_02c0(void);
extern int _far FUN_10bf_0db8(unsigned short, unsigned short, unsigned short*);
void _far FUN_10bf_092e(unsigned short param_1, unsigned short param_2)
{
    FUN_10bf_02c0();
    unsigned short local_4 = 0;
    return FUN_10bf_0db8(param_1, param_2, &local_4);
}