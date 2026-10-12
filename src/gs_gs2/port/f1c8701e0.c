/* GS.GS2 1c87:01e0 - calls FUN_10bf_02c0 and text_render_wrapped (far) */
extern void _far FUN_10bf_02c0(void);
extern void _far text_render_wrapped(unsigned short, unsigned short);
void _far FUN_1c87_01e0(unsigned short param_1)
{
    FUN_10bf_02c0();
    text_render_wrapped(param_1, 0);
    return;
}