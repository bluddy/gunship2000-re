/* GS.GS2 10bf:428a - calls FUN_10bf_42a0 twice, does math */
extern unsigned int _far FUN_10bf_42a0(void);
unsigned long _far FUN_10bf_428a(void)
{
    unsigned int ax1 = FUN_10bf_42a0();
    unsigned int ax2 = FUN_10bf_42a0();
    unsigned long result = ((unsigned long)(ax2 + ax1) * 2) << 16; /* high word in DX, low in AX? */
    /* Note: Original returns CONCAT22(((int)((ulong)uVar1 >> 0x10) + (int)uVar1) * 2, unaff_DI) */
    /* This is a 32-bit return: high word = ((ax2 + ax1) * 2), low word = DI (preserved) */
    return result;
}