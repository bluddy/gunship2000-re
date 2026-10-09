/* GS.GS2 3000:3a8a undefined FUN_3000_3a8a(void) */
int __cdecl16far FUN_3000_3a8a(uint param_1)

{
  undefined2 unaff_DS;
  int iVar1;
  
  func_0x00000eb0();
  iVar1 = 5;
  while (*(byte *)(iVar1 * 0x20 + -0x5d74) != param_1) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}
