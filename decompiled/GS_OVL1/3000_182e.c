/* GS.GS2 3000:182e undefined FUN_3000_182e(void) */
void __cdecl16far
FUN_3000_182e(char param_1,int param_2,undefined2 param_3,undefined2 param_4,int param_5)

{
  undefined2 unaff_DS;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  func_0x00000eb0();
  param_5 = param_5 + -1;
  iVar3 = 0;
  iVar1 = *(int *)(param_1 * 2 + -0x43d0);
  iVar4 = param_2;
  FUN_3000_17a0(0,iVar1,0,0,param_2,0,iVar1);
  while (iVar3 < iVar1) {
    iVar2 = param_5;
    if (iVar4 < 0) {
      iVar4 = param_2;
      FUN_3000_17a0(param_3,param_5,iVar1);
      iVar3 = iVar1;
    }
    else {
      iVar4 = param_2;
      FUN_3000_17a0(param_3,param_5,iVar1);
      iVar3 = iVar1;
    }
    param_5 = param_5 + -1;
    iVar1 = iVar2;
  }
  return;
}
