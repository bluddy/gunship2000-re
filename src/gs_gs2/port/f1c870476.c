/* GS.GS2 1c87:0476 - calls FUN_10bf_02c0 and FUN_1c87_0578 */
extern void _far FUN_10bf_02c0(void);
extern void _far FUN_1c87_0578(unsigned short *);
void _far FUN_1c87_0476(void)
{
    unsigned short local_4 = 0x1c87;
    FUN_10bf_02c0();
    local_4 = 0;
    FUN_1c87_0578(&local_4);
    return;
}