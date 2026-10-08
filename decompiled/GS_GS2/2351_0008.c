/* GS.GS2 2351:0008 undefined FUN_2351_0008(void) */
void __cdecl16far FUN_2351_0008(int param_1,int param_2)

{
  int iVar1;
  undefined2 unaff_DS;
  int iVar2;
  
  FUN_10bf_02c0();
  iVar1 = 0;
  *(undefined2 *)0x9510 = 0;
  *(undefined2 *)0x950e = 0;
  if (2 < param_2) {
    iVar1 = param_2 + -2;
  }
  *(int *)0x9508 = iVar1 + param_2;
  *(undefined2 *)0x950a = 0;
  *(undefined2 *)0x9506 = 0;
  for (iVar2 = 0; iVar2 < param_2; iVar2 = iVar2 + 1) {
    *(undefined2 *)(iVar2 * 2 + -0x6aec) = *(undefined2 *)(iVar2 * 2 + param_1);
  }
  for (iVar2 = 0; iVar2 < iVar1; iVar2 = iVar2 + 1) {
    *(undefined2 *)((iVar2 + param_2) * 2 + -0x6aec) =
         *(undefined2 *)(param_1 + (param_2 - iVar2) * 2 + -4);
  }
  return;
}
