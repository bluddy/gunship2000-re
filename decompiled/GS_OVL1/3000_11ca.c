/* GS.GS2 3000:11ca undefined FUN_3000_11ca(void) */
void __cdecl16far FUN_3000_11ca(void)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  func_0x00000eb0();
  iVar1 = (int)*(char *)(*(int *)0xb8ce * 0x36 + ((*(uint *)0xa248 & 0x200) >> 9) + -0x49d3);
  iVar2 = iVar1 + 0x19;
  if (*(int *)0xc026 < iVar2) {
    iVar2 = *(int *)0xc026;
  }
  iVar1 = iVar1 + -0x19;
  if (iVar2 < iVar1) {
    iVar2 = iVar1;
  }
  *(int *)0xc026 = iVar2;
  return;
}
