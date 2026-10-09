/* GS.GS2 2000:abf6 undefined FUN_2000_abf6(void) */
int __cdecl16far FUN_2000_abf6(int param_1,int param_2)

{
  undefined2 unaff_DS;
  int iVar1;
  
  func_0x00000eb0();
  iVar1 = 0;
  while ((*(byte *)((int)*(undefined4 *)0xb860 + iVar1 * 0x27 + 0x25) & 0x80) != 0) {
    iVar1 = iVar1 + 1;
  }
  if (0x600 - *(int *)0x25ac < param_1) {
    iVar1 = iVar1 + 1;
  }
  if (0x480 - *(int *)0x25ae < param_2) {
    iVar1 = iVar1 + 1;
  }
  if (param_1 < *(int *)0x25ac) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}
