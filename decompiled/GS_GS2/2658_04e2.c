/* GS.GS2 2658:04e2 undefined FUN_2658_04e2(void) */
void __cdecl16far FUN_2658_04e2(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  if ((0 < param_4) && (0 < param_5)) {
    FUN_2658_0576();
    thunk_EXT_FUN_0000_0000(0x2658);
    param_3 = param_3 + *(int *)(param_1 + 4);
    *(int *)0x67f8 = param_3;
    param_3 = param_3 * 2;
    piVar4 = (int *)(param_3 + 0x64d4);
    iVar2 = *(int *)(param_1 + 2);
    for (iVar3 = param_5; iVar3 != 0; iVar3 = iVar3 + -1) {
      piVar1 = piVar4;
      piVar4 = piVar4 + 1;
      *piVar1 = param_2 + iVar2;
    }
    piVar4 = (int *)(param_3 + 0x6664);
    iVar2 = *(int *)(param_1 + 2);
    for (iVar3 = param_5; iVar3 != 0; iVar3 = iVar3 + -1) {
      piVar1 = piVar4;
      piVar4 = piVar4 + 1;
      *piVar1 = param_2 + iVar2 + param_4 + -1;
    }
    thunk_EXT_FUN_0000_0000(0x2658);
    *(int *)0x67fa = *(int *)0x67f8 + param_5 + -1;
    thunk_EXT_FUN_0000_0000(0x2658);
    thunk_EXT_FUN_0000_0000(0x2658);
  }
  return;
}
