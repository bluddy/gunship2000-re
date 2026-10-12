/* GS.GS2 10bf:4d51 - pop_entity_data
 * Pops 4 words from entity data stack at 0x6ea8
 * BX = output buffer, returns data in BX:BX+6
 */
extern void _far FUN_10bf_32d7(void);
void _far pop_entity_data(void)
{
    unsigned short *in_BX;
    unsigned short *puVar1 = (unsigned short *)*(unsigned short *)0x6ea8;
    if (*(char *)(puVar1 - 1) == 7) {
        puVar1 = (unsigned short *)puVar1[-2];
    } else {
        FUN_10bf_32d7();
    }
    *in_BX = *puVar1;
    in_BX[1] = puVar1[1];
    in_BX[2] = puVar1[2];
    in_BX[3] = puVar1[3];
    *(int *)0x6ea8 = *(int *)0x6ea8 - 0xc;
    return;
}