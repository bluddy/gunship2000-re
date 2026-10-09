/* GS.GS2 2000:d596 undefined FUN_2000_d596(void) */
void __cdecl16far FUN_2000_d596(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  
  func_0x00000eb0();
  iVar1 = func_0x00014e66(0xbf,0x3dd4);
  if (iVar1 < 0) {
    return;
  }
  func_0x0001664a(0x14e6);
  iVar1 = (int)*(char *)(*(int *)0x98fc * 0x29 + -0x45e3);
  uVar2 = func_0x000165d3(0x1658,3,(iVar1 / 6) * 0x30,iVar1 % 6 << 5,0x30);
  *(undefined2 *)0x9ba4 = uVar2;
  func_0x000165f6(0x1658);
  *(undefined2 *)0xc51c = 0;
  *(undefined2 *)0xc522 = 0;
  *(undefined2 *)0x98f8 = 0;
  FUN_2000_d600();
  return;
}
