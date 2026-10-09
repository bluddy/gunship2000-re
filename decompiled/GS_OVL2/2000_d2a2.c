/* GS.GS2 2000:d2a2 undefined FUN_2000_d2a2(void) */
void __cdecl16far FUN_2000_d2a2(void)

{
  int iVar1;
  undefined2 unaff_DS;
  
  func_0x00000eb0();
  iVar1 = func_0x000012cc(0xbf,*(undefined2 *)0x3ce0,0x3d47);
  *(int *)0x98f6 = iVar1;
  if (iVar1 == 0) {
    return;
  }
  func_0x0000131a(0xbf,0xa248,0x14,1,iVar1);
  func_0x000011e6(0xbf,*(undefined2 *)0x98f6);
  return;
}
