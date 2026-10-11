/* GS.GS2 28d4:160a - calls FUN_28d4_1644, returns AX */
extern unsigned short _far FUN_28d4_1644(void);
unsigned short _far FUN_28d4_160a(void)
{
    FUN_28d4_1644();
    return 0; /* AX preserved from call */
}