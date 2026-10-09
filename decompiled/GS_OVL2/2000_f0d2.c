/* GS.GS2 2000:f0d2 undefined FUN_2000_f0d2(void) */
void __cdecl16far FUN_2000_f0d2(int param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  func_0x00000eb0();
  func_0x0001664a(0xbf);
  uVar1 = func_0x000165d3(0x1658,1,param_2,param_3,0x10,0x10);
  iVar2 = param_1 * 6;
  *(undefined2 *)(iVar2 + -0x3ae4) = uVar1;
  *(undefined2 *)(iVar2 + -0x3ae2) = param_2;
  *(undefined2 *)(iVar2 + -0x3ae0) = param_3;
  func_0x000165f6(0x1658);
  func_0x000166b1(0x1658,0x880,param_2,param_3,*(undefined2 *)(param_1 * 2 + -0x60c4));
  return;
}
