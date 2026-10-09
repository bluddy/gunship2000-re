/* GS.GS2 3000:3aba undefined FUN_3000_3aba(void) */
int __cdecl16far FUN_3000_3aba(int param_1)

{
  undefined2 unaff_DS;
  int iVar1;
  
  func_0x00000eb0();
  iVar1 = 0;
  while (*(int *)((int)*(undefined4 *)0xb860 + iVar1 * 0x27 + 0x19) != param_1) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}
