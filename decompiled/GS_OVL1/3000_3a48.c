/* GS.GS2 3000:3a48 undefined FUN_3000_3a48(void) */
int __cdecl16far FUN_3000_3a48(int param_1)

{
  undefined2 unaff_DS;
  int iVar1;
  
  func_0x00000eb0();
  iVar1 = 0;
  while (*(char *)((int)*(undefined4 *)0xb868 + iVar1 * 0x20 + 0xc) !=
         *(char *)((int)*(undefined4 *)0xb85c + param_1 * 8 + 1)) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}
