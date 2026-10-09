/* GS.GS2 2000:f058 undefined FUN_2000_f058(void) */
void __cdecl16far FUN_2000_f058(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  int iVar3;
  
  uVar2 = 0xbf;
  func_0x00000eb0();
  for (iVar3 = 0; iVar3 < 2; iVar3 = iVar3 + 1) {
    iVar1 = iVar3 * 6;
    if (*(int *)(iVar1 + -0x3ae4) != 0) {
      func_0x00016a62(uVar2,0x880,*(undefined2 *)(iVar1 + -0x3ae2),*(undefined2 *)(iVar1 + -0x3ae0),
                      0x10,0x10,0);
      func_0x000166b1(0x1658,0x880,*(undefined2 *)(iVar1 + -0x3ae2),*(undefined2 *)(iVar1 + -0x3ae0)
                      ,*(undefined2 *)(iVar1 + -0x3ae4));
      uVar2 = 0x112a;
      func_0x000112dc(0x1658,*(undefined2 *)(iVar1 + -0x3ae4));
      *(undefined2 *)(iVar1 + -0x3ae4) = 0;
    }
  }
  return;
}
