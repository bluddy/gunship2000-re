/* GS.GS2 10bf:523e - buffer_adjust
 * Adjusts buffer pointers based on size parameters
 * param_1 = BX (buffer handle), param_2 = BP+6, param_3 = BP+8
 * Returns pointer to buffer info at 0x70aa
 */
extern unsigned short _far FUN_10bf_40b6(void);
extern unsigned short * _far buffer_adjust(unsigned short param_1, int param_2, int param_3)
{
    int iVar1, iVar2, iVar3, iVar5;
    unsigned short uVar4;
    iVar5 = param_3;
    iVar1 = param_2;
    *(int *)0x6ea8 = param_2 + param_3;  /* unaff_BP+6 + unaff_BP+8 */
    uVar4 = FUN_10bf_40b6();
    iVar2 = *(int *)0x6ea8;
    iVar3 = *(int *)0x70aa;  /* param_3 */
    *(int *)0x70aa = iVar5;
    *(int *)0x70ac = (iVar1 - iVar2) + iVar3;
    *(unsigned short *)0x70ae = uVar4;
    *(unsigned short *)0x70b0 = param_1;
    return (unsigned short *)0x70aa;
}