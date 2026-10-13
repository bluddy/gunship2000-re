/* GS.GS2 10bf:52dc - push_entity_data
 * Pushes 4 words of data to entity data stack at 0x6ea8
 * Calls external function via DX pointer, handles return codes
 * Returns: pointer to pushed data at 0x70fe
 */
extern void _far entity_data_check(unsigned short);
extern void _far FUN_10bf_2d58(void);
extern void _far FUN_10bf_0543(unsigned short);
unsigned short _far push_entity_data(unsigned short param_1, unsigned short param_2, unsigned short param_3, unsigned short param_4)
{
    *(unsigned short *)0x70ee = param_1;
    *(unsigned short *)0x70f0 = param_2;
    *(unsigned short *)0x70f2 = param_3;
    *(unsigned short *)0x70f4 = param_4;
    unsigned short uVar5 = *(unsigned short *)0x6ea8;
    *(unsigned short *)0x6ea8 = 0x70fe;
    /* Call external function via DX pointer */
    unsigned int uVar2 = 0; /* (*in_DX)(&stack0xfffe) */
    *(unsigned short *)0x6ea8 = uVar5;
    unsigned int uVar4 = uVar2 & 0xff;
    *(unsigned short *)0x70ec = uVar5;
    *(char *)0x7115 = 0;
    if (uVar2 == 0x302) {
        *(char *)0x7115 = 1;
    }
    if ((char)(uVar2 >> 8) != 3) {
        if ((char)uVar2 != 7) {
            if ((char)uVar2 == 3) {
                *(unsigned short *)0x70fe = *(unsigned short *)0x70e0;
                *(unsigned short *)0x7100 = *(unsigned short *)0x70e2;
                *(unsigned short *)0x7102 = *(unsigned short *)0x70e4;
                *(unsigned short *)0x7104 = *(unsigned short *)0x70e6;
            } else {
                *(unsigned short *)0x70fe = 0;
                *(unsigned short *)0x7100 = 0;
                *(unsigned short *)0x7102 = 0;
                *(unsigned short *)0x7104 = 0;
            }
            goto LAB_10bf_535d;
        }
        uVar4 = 3;
    }
    *(unsigned short *)0x70fe = *(unsigned short *)0x70e0;
    *(unsigned short *)0x7100 = *(unsigned short *)0x70e2;
    *(unsigned short *)0x7102 = *(unsigned short *)0x70e4;
    *(unsigned short *)0x7104 = *(unsigned short *)0x70e6;
    *(unsigned char *)0x7105 = *(unsigned char *)0x7105 | 0x80;
LAB_10bf_535d:
    *(unsigned int *)0x70ea = uVar4;
    int iVar3 = entity_data_check(0x70ea);
    if (iVar3 == 0) {
        char cVar1 = '!';
        if (*(char *)0x7115 != 0 || 2 < *(unsigned int *)0x70ea) {
            cVar1 = '"';
        }
        *(int *)0x6864 = (int)cVar1;
        iVar3 = *(int *)(uVar4 * 2 + 0x7104);
        if (iVar3 != 0) {
            FUN_10bf_2d58();
            FUN_10bf_2d58();
            FUN_10bf_0543(iVar3);
        }
    }
    return 0x70fe;
}