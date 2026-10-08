/* GS.GS2 2163:1b36 undefined FUN_2163_1b36(void) */
undefined2 __cdecl16far FUN_2163_1b36(void)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_DS;
  undefined2 uStack_4;
  
  FUN_10bf_02c0();
  uStack_4 = 0;
  while( true ) {
    if (*(char *)0xe282 <= uStack_4) {
      return 0;
    }
    iVar1 = *(int *)(uStack_4 * 0x24 + -0x4501);
    iVar2 = FUN_212a_0050(*(undefined2 *)(uStack_4 * 0x24 + -0x44ff));
    if (100 < iVar2) break;
    uStack_4 = iVar1 + 1;
  }
  return 1;
}
