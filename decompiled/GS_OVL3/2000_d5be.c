/* GS.GS2 2000:d5be undefined FUN_2000_d5be(void) */
undefined2 __cdecl16far FUN_2000_d5be(int param_1)

{
  int iVar1;
  int iVar2;
  
  func_0x00000eb0();
  iVar2 = 0;
  while( true ) {
    if (5 < iVar2) {
      return 1;
    }
    iVar2 = FUN_2000_d632(param_1 * 0x122 + -0x5222);
    if (iVar2 != 0) break;
    for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
      iVar2 = param_1 * 0x122 + iVar2 * 0x29 + -0x51a4;
      iVar1 = FUN_2000_d632();
      if (iVar1 != 0) {
        return 0;
      }
    }
    iVar2 = param_1 + 1;
  }
  return 0;
}
