/* GS.GS2 2351:0092 undefined FUN_2351_0092(void) */
void __cdecl16far FUN_2351_0092(int param_1,int param_2)

{
  undefined2 unaff_DS;
  int iVar1;
  
  FUN_10bf_02c0();
  *(int *)0x9508 = param_2;
  *(undefined2 *)0x950a = 0;
  *(undefined2 *)0x9506 = 0;
  for (iVar1 = 0; iVar1 < param_2; iVar1 = iVar1 + 1) {
    *(undefined2 *)(iVar1 * 2 + -0x6aec) = *(undefined2 *)(iVar1 * 2 + param_1);
  }
  return;
}
