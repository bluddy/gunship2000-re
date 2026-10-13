/* GS2.GS2 1000:0612 - game_loop_step
 * Main game loop iteration: updates entity states, checks flags, calls overlay functions
 * Uses FUN_17e0_0050, thunk_EXT_FUN_0000_0000
 * Note: 3a29_00a5/00a7 are far pointers at segment 3a29, offsets 00a5/00a7
 */
extern void _far FUN_17e0_0050(unsigned short);
extern void _far thunk_EXT_FUN_0000_0000(unsigned short, unsigned short);
extern void _far game_loop_step(void)
{
    unsigned short uVar1;
    int iVar4;
    unsigned short uVar6;
    int bVar2 = 1;
    uVar1 = *(unsigned short *)0x3b8c;
    *(int *)0x3b8c = *(int *)0x3b8c + 0x20;
    uVar6 = 0x17e0;
    FUN_17e0_0050(0xc);
    if (*(char *)0xde != '\0') {
        uVar6 = 0x1844;
        thunk_EXT_FUN_0000_0000(0x17e0, 0x40);
    }
    do {
        iVar4 = *(int *)(0x3a290 + 0xa5);  /* 3a29:00a5 */
        if ((*(unsigned char *)0x593e & 8) == 0) {
            *(unsigned char *)(iVar4 + 0x11) = 'F';
            *(unsigned char *)(iVar4 + 0x12) = 'F';
        }
        else {
            *(unsigned char *)(iVar4 + 0x11) = 'N';
            *(unsigned char *)(iVar4 + 0x12) = '\0';
        }
        iVar4 = *(int *)(0x3a290 + 0xa7);  /* 3a29:00a7 */
        if ((*(unsigned char *)0x593e & 4) == 0) {
            *(unsigned char *)(iVar4 + 0x15) = 'F';
            *(unsigned char *)(iVar4 + 0x16) = 'F';
            *(unsigned short *)0x1c9c = 0x1000;
            *(unsigned short *)0x1c9e = 0x1800;
            *(unsigned short *)0x1ca0 = 0x2000;
        }
        /* ... truncated ... */
    } while (1);
    return;
}