/* GS.GS2 2163:146a undefined FUN_2163_146a(void) */
undefined2 __cdecl16far FUN_2163_146a(int param_1)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  int iVar2;
  
  FUN_10bf_02c0();
  iVar2 = 0;
  while( true ) {
    if (3 < iVar2) {
      iVar2 = FUN_2581_0422((int)*(char *)(param_1 * 0xd6 + (int)*(undefined4 *)0xbc38));
      if ((iVar2 == 0) || (*(char *)((int)*(undefined4 *)0xbc38 + param_1 * 0xd6 + 1) == '\0')) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
      return uVar1;
    }
    if (*(char *)(iVar2 + -0x6c34) == param_1) break;
    iVar2 = iVar2 + 1;
  }
  return 0;
}
