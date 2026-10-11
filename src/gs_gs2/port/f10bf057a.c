/* GS.GS2 10bf:057a - atomic exchange of word at 0x6a76 with 0x400, calls thunk, restores */
extern int _far thunk_FUN_10bf_1ff3(void);
void _far FUN_10bf_057a(void)
{
    unsigned short uVar1 = *(unsigned short *)0x6a76;
    *(unsigned short *)0x6a76 = 0x400;
    int iVar2 = thunk_FUN_10bf_1ff3();
    *(unsigned short *)0x6a76 = uVar1;
    if (iVar2 != 0) {
        return;
    }
    extern void _far FUN_10bf_00eb(void);
    FUN_10bf_00eb();
    return;
}