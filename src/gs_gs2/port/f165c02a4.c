/* GS.GS2 165c:02a4 - project_coords
 * Coordinate projection helper using FUN_10bf_2efc (fixed-point multiply)
 */
extern void _far FUN_10bf_02c0(void);
extern int _far FUN_10bf_2efc(unsigned short, unsigned short, unsigned short, unsigned short);

void _far project_coords(
    unsigned short param_1, unsigned short param_2,
    unsigned short param_3, unsigned short param_4,
    int *param_5, int *param_6
)
{
    FUN_10bf_02c0();
    int iVar1 = FUN_10bf_2efc(param_1, param_2, 0x1000, 0);
    *param_5 = iVar1 + *(int *)0x7a1e;
    iVar1 = FUN_10bf_2efc(param_3, param_4, 0x1000, 0);
    *param_6 = 0x7f - (iVar1 - *(int *)0x7a20);
    return;
}