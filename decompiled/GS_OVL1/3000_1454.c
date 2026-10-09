/* GS.GS2 3000:1454 undefined FUN_3000_1454(void) */
void __cdecl16far FUN_3000_1454(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 unaff_DS;
  int iVar3;
  
  func_0x00000eb0();
  uVar1 = func_0x000168cc(0xbf,0x2d3f,0);
  func_0x00016a17(0x1658,uVar1);
  iVar3 = 0;
  func_0x000166d6(0x1658);
  while (iVar3 < 5) {
    iVar2 = func_0x000165c5(0x1658);
    *(int *)(iVar3 * 2 + -0x43d0) = iVar2;
    func_0x0001667b(0x1658,iVar2);
    iVar3 = iVar2 + 1;
  }
  return;
}
