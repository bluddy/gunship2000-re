/* GS2.GS2 12a2:0016 - dos_memory_init
 * Initializes DOS memory, sets up stack pointers, zeroes BSS
 * Calls init sequence: FUN_12a2_02e2, FUN_12a2_010e, FUN_12a2_01d3, etc.
 */
extern void _far FUN_12a2_0296(void);
extern void _far FUN_12a2_049f(void);
extern void _far FUN_1851_0d1d(void);
extern void _far FUN_12a2_02e2(void);
extern void _far FUN_12a2_010e(void);
extern void _far FUN_1851_0d13(void);
extern void _far FUN_12a2_01d3(void);
extern void _far dos_memory_init(void)
{
    unsigned int uVar5;
    unsigned char *puVar6;
    int iVar4;
    
    _asm { int 0x21 }
    if (_getflags() & 1) {
        return;
    }
    uVar5 = *(unsigned int *)0x2 + 0xaf96;
    if (0xfff < uVar5) {
        uVar5 = 0x1000;
    }
    if ((unsigned char *)0xa6c1 < (unsigned char *)0) {  /* stack check */
        FUN_12a2_0296();
        FUN_12a2_049f();
        _asm { int 0x21 }
    }
    *(unsigned int *)0x506a31aa = uVar5 * 0x10 - 1;
    *(unsigned short *)0x506a31ac = 0x506a;
    *(unsigned int *)0x506a31b0 = 0x5942;
    *(unsigned int *)0x506a31b6 = 0x5940;
    *(unsigned int *)0x506a31b2 = 0x593e;
    *(unsigned int *)0x506a31b4 = 0x593e;
    *(unsigned int *)0x506a31a6 = 0x593e;
    *(unsigned int *)0x2 = uVar5 + 0x506a;
    _asm { int 0x21 }
    
    puVar6 = (unsigned char *)0x3554;
    for (iVar4 = 0x23ec; iVar4 != 0; iVar4 = iVar4 - 1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
    }
    if ((void (*)())0x000538e2 != (void (*)())0) {
        (*(void (*)())0x000538e2)();
    }
    FUN_1851_0d1d();
    FUN_12a2_02e2();
    FUN_12a2_010e();
    FUN_1851_0d13();
    FUN_12a2_01d3();
    return;
}