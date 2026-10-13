/* GS2.GS2 1851:073c - startup_init
 * Packs CPU flags, registers interrupt handler, initializes memory
 * Called from entry point
 */
extern unsigned short _far register_handler(int, int);
extern unsigned long _far return_dx_ax(void);
extern void _far FUN_1851_0d59(void);
extern void _far startup_init(unsigned short in_BX, int in_NT, int in_OF, int in_IF, int in_TF,
                              int in_SF, int in_ZF, int in_AF, int in_PF, int in_CF)
{
    unsigned short flags;
    int iVar1;
    int bVar2 = 0;
    flags = (in_NT & 1) * 0x4000 | (in_OF & 1) * 0x800 | (in_IF & 1) * 0x200 |
            (in_TF & 1) * 0x100 | (in_SF & 1) * 0x80 | (in_ZF & 1) * 0x40 |
            (in_AF & 1) * 0x10 | (in_PF & 1) * 4 | (in_CF & 1);
    register_handler(flags, 0);  /* DS unknown */
    return_dx_ax();
    *(unsigned short *)0x9e6 = in_BX;
    iVar1 = *(int *)0xb6d * 0x20 + *(int *)0x09e6;
    *(unsigned short *)0x9cb = 0;
    *(int *)0x9cd = iVar1;
    bVar2 = 0;
    FUN_1851_0d59();
    if ((!bVar2) || (*(int *)0xb6d != 0)) {
        *(unsigned char *)0x9db = 0xff;
    }
    return;
}