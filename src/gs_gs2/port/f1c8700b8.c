/* GS.GS2 1c87:00b8 - calls FUN_10bf_02c0, writes to memory */
extern void _far FUN_10bf_02c0(void);
void _far FUN_1c87_00b8(unsigned short param_1)
{
    FUN_10bf_02c0();
    *(unsigned short *)0x856e = param_1;
    return;
}