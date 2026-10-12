/* GS.GS2 10bf:4bb8 - push_entity_data_stack
 * Pushes 4 words from BX to entity data stack at 0x6ea8
 * If stack full (reaches 0x6e94), calls error handler
 */
extern void _far FUN_10bf_0298(void);
extern void _far FUN_10bf_2d58(void);
extern void _far FUN_10bf_0543(unsigned short);
extern void _far FUN_10bf_01d5(unsigned short);
void _far push_entity_data_stack(void)
{
    int iVar1 = *(int *)0x6ea8;
    unsigned short *puVar3 = (unsigned short *)(iVar1 + 0xc);
    /* BX = input data pointer */
    *puVar3 = 0; /* placeholder for in_BX[0] */
    *(unsigned short *)(iVar1 + 0xe) = 0; /* in_BX[1] */
    *(unsigned short *)(iVar1 + 0x10) = 0; /* in_BX[2] */
    *(unsigned short *)(iVar1 + 0x12) = 0; /* in_BX[3] */
    if (puVar3 != (unsigned short *)0x6e94) {
        *(unsigned short *)0x6ea8 = puVar3;
        *(char *)(iVar1 + 10) = 7;
        *(unsigned short *)(iVar1 + 8) = puVar3;
        return;
    }
    *(unsigned short *)0x70a4 = 0x3031;
    unsigned char bVar2 = 0x8a;
    if (*(int *)0x6d28 != 0) {
        /* bVar2 = (*(code *)*(undefined2 *)0x6d26)(0x10bf); */
    }
    if (bVar2 == 0x8c) {
        *(unsigned short *)0x70a4 = 0x3231;
    }
    *(unsigned int *)0x70a6 = (unsigned int)bVar2;
    FUN_10bf_0298();
    FUN_10bf_2d58();
    FUN_10bf_0543(0xfd);
    FUN_10bf_0543(*(int *)0x70a6 + -0x1c);
    FUN_10bf_01d5(*(unsigned short *)0x70a6);
    return;
}