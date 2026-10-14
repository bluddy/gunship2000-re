/* GS2.GS2 12a2:00e9 - mission_init_chain
 * Initializes mission system after DOS memory setup
 * Calls FUN_12a2_0296, FUN_12a2_049f, dispatches to handlers
 */
extern void _far FUN_12a2_0296(void);
extern void _far FUN_12a2_049f(unsigned short);
extern void _far FUN_12a2_02e2(void);
extern void _far mission_init_chain(unsigned short in_AX, int in_BX, int unaff_SI)
{
    char *pcVar1;
    
    FUN_12a2_0296();
    FUN_12a2_049f(in_AX);
    if (*(int *)0x3244 == -0x292a) {
        (*(void (*)())*(unsigned short *)0x3248)();
    }
    (*(void (*)(unsigned short, unsigned short))*(unsigned short *)0x31a8)(0x12a2, 0xff);
    pcVar1 = (char *)(in_BX + unaff_SI + 0x3500);
    *pcVar1 = *pcVar1 + (char)((unsigned int)in_BX >> 8);
    _asm { int 0x21 }
    *(unsigned int *)0x31d2 = in_BX;
    *(unsigned short *)0x31d4 = 0;
    _asm { int 0x21 }
    if (*(int *)0x3256 != 0) {
        (*(void (*)())*(unsigned short *)0x3254)();
    }
    return;
}