/* GS.GS2 10bf:4bb8 - entity_buffer_add
 * Adds entity data to buffer at 0x6ea8
 * param_1 = pointer to 4-word entity data (BX in original)
 * Returns void
 */
extern void _far FUN_10bf_0298(void);
extern void _far FUN_10bf_2d58(void);
extern void _far FUN_10bf_0543(unsigned short);
extern void _far FUN_10bf_01d5(unsigned short);
extern void _far entity_buffer_add(unsigned short *param_1)
{
    int iVar1;
    unsigned char bVar2;
    unsigned short *puVar3;
    iVar1 = *(int *)0x6ea8;
    puVar3 = (unsigned short *)(iVar1 + 0xc);
    *puVar3 = *param_1;
    puVar3[1] = param_1[1];
    puVar3[2] = param_1[2];
    puVar3[3] = param_1[3];
    if (puVar3 != (unsigned short *)0x6e94) {
        *(unsigned short *)0x6ea8 = (unsigned short)puVar3;
        *(unsigned char *)(iVar1 + 10) = 7;
        *(unsigned short *)(iVar1 + 8) = (unsigned short)puVar3;
        return;
    }
    *(unsigned short *)0x70a4 = 0x3031;
    bVar2 = 0x8a;
    if (*(int *)0x6d28 != 0) {
        bVar2 = (*(unsigned short (*)(unsigned short))0x6d26)(0x10bf);
    }
    if (bVar2 == 0x8c) {
        *(unsigned short *)0x70a4 = 0x3231;
    }
    *(unsigned int *)0x70a6 = (unsigned int)bVar2;
    FUN_10bf_0298();
    FUN_10bf_2d58();
    FUN_10bf_0543(0xfd);
    FUN_10bf_0543(*(int *)0x70a6 - 0x1c);
    FUN_10bf_01d5(*(unsigned short *)0x70a6);
    return;
}