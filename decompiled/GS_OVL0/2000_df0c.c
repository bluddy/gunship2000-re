/* GS.GS2 2000:df0c undefined FUN_2000_df0c(void) */
undefined2 __cdecl16far FUN_2000_df0c(int param_1)

{
  undefined2 unaff_DS;
  int iVar1;
  
  func_0x00000eb0();
  iVar1 = 0;
  while( true ) {
    if (5 < iVar1) {
      return 0;
    }
    iVar1 = func_0x00002df8(0xbf,*(undefined2 *)(param_1 * 2 + 0x240e));
    if (iVar1 == 0) break;
    iVar1 = param_1 + 1;
  }
  return 1;
}
