/* GS.GS2 239c:0086 - random_int
 * Returns a pseudo-random integer using LCG
 * Uses state at 0x9538 (initialized by FUN_239c_00d8), multiplier from FUN_10bf_2d30
 * Returns: random value scaled by param_1
 */
extern void _far FUN_10bf_02c0(void);
extern void _far FUN_239c_00d8(void);
extern int _far FUN_10bf_2d30(void);
int _far random_int(int param_1)
{
    FUN_10bf_02c0();
    if (param_1 < 2) {
        return 0;
    }
    if (*(char *)0x9538 == '\0') {
        FUN_239c_00d8();
    }
    int iVar2 = FUN_10bf_2d30();
    unsigned long uVar1 = (long)iVar2 * (long)param_1;
    int iVar3 = (int)((uVar1 >> 0x18) | ((uVar1 < 0) ? 0x80 : 0));
    /* Complex bit manipulation for 32-bit division */
    return (int)((((((((uVar1 >> 8) >> 1) | ((uVar1 & 0x1000000) ? 0x8000 : 0)) >> 1 |
        ((iVar3 >> 1) & 1) ? 0x8000 : 0) >> 1 |
        ((iVar3 >> 2) & 1) ? 0x8000 : 0) >> 1 |
        ((iVar3 >> 3) & 1) ? 0x8000 : 0) >> 1 |
        ((iVar3 >> 4) & 1) ? 0x8000 : 0) >> 1 |
        ((iVar3 >> 5) & 1) ? 0x8000 : 0) >> 1 |
        ((iVar3 >> 6) & 1) ? 0x8000 : 0);
}