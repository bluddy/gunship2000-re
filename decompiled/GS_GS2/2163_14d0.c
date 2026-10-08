/* GS.GS2 2163:14d0 undefined FUN_2163_14d0(void) */
undefined2 __cdecl16far FUN_2163_14d0(int param_1)

{
  undefined2 unaff_DS;
  undefined2 uStack_4;
  
  FUN_10bf_02c0();
  uStack_4 = 0;
  while( true ) {
    if (3 < uStack_4) {
      return 1;
    }
    if (*(char *)(uStack_4 + -0x6c30) == param_1) break;
    uStack_4 = uStack_4 + 1;
  }
  return 0;
}
