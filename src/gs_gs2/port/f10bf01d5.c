/* GS.GS2 10bf:01d5 - startup_sequence
 * Startup initialization sequence
 * Calls FUN_10bf_0285 (multiple times), checks flag, calls INT 21h
 */
extern void _far FUN_10bf_0285(void);
extern void _far FUN_10bf_02e4(void);
extern void _far FUN_10bf_0258(void);
extern void _far INT_21h(void);
void _far startup_sequence(void)
{
    FUN_10bf_0285();
    FUN_10bf_0285();
    if (*(int *)0x714e == -0x292a) {
        (*(void (_far *)(void))0x7154)();
    }
    FUN_10bf_0285();
    FUN_10bf_0285();
    FUN_10bf_02e4();
    FUN_10bf_0258();
    _asm { int 0x21 }
    return;
}