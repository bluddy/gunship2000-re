/* GS.GS2 10bf:5035 - entity_dispatch
 * Dispatches entity processing based on type at buffer 0x6ea8
 * Returns result from handler function
 * Note: Indirect calls through function tables (0x707e, 0x7082) not ported
 */
extern void _far convert_to_screen_coords(unsigned short *, unsigned short *);
extern unsigned short _far entity_dispatch(void)
{
    unsigned int *puVar1;
    int iVar2;
    unsigned short uVar3;
    unsigned int uVar4;
    unsigned char bVar5, cVar7;
    uVar4 = 0x1c;
    iVar2 = *(int *)0x6ea8;
    if (*(char *)(iVar2 - 2) == 7) {
        uVar4 = 0x1e;
        if (*(char *)(iVar2 - 0xe) != 7) {
            *(int *)0x6ea8 = iVar2 - 0xc;
            convert_to_screen_coords((unsigned short *)0, (unsigned short *)0);
            goto LAB_10bf_5056;
        }
    } else if (*(char *)(iVar2 - 0xe) == 7) {
        uVar4 = 0x1e;
        convert_to_screen_coords((unsigned short *)0, (unsigned short *)0);
    }
    *(int *)0x6ea8 = iVar2 - 0xc;
LAB_10bf_5056:
    *(int *)(iVar2 - 0x10) = iVar2 - 0xc;
    if (0x1b < uVar4) {
        *(int *)0x6ea8 = *(int *)0x6ea8 - 0xc;
        return 0;
    }
    if (uVar4 < 0x18) {
        return 0;
    }
    puVar1 = (unsigned int *)0x6ea8;
    bVar5 = *puVar1 < 0xc;
    *puVar1 = *puVar1 - 0xc;
    cVar7 = *puVar1 == 0;
    return 0;
}