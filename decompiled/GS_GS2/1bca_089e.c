/* GS.GS2 1bca:089e undefined FUN_1bca_089e(void) */
void __cdecl16far FUN_1bca_089e(int param_1,int param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 unaff_DS;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined2 uVar9;
  int iVar10;
  undefined2 uVar11;
  
  FUN_10bf_02c0();
  if (*(int *)0x855c == param_2) {
    param_2 = 9;
  }
  else {
    param_2 = (*(int *)0x855a + param_2 + 3) * 3;
  }
  if (*(int *)0x855c == param_3) {
    param_3 = 9;
  }
  else {
    param_3 = (param_3 + *(int *)0x855a + 3) * 3;
  }
  param_1 = (*(int *)0x855a * param_1 + 3) * 3;
  uVar11 = 0;
  uVar9 = 100;
  uVar5 = FUN_10bf_2f96(param_4,param_4 >> 0xf,0xffff,0);
  iVar7 = (int)uVar5;
  iVar6 = 0x10bf;
  iVar4 = 0x10bf;
  iVar2 = FUN_10bf_2efc(uVar5,uVar9,uVar11);
  for (iVar10 = 0; iVar10 < *(int *)0x855a * 3; iVar10 = iVar10 + 3) {
    iVar8 = 0;
    while (iVar8 < 3) {
      iVar3 = (int)*(char *)(iVar8 + param_3 + *(int *)0x8558);
      iVar10 = (int)*(char *)(iVar8 + param_2 + *(int *)0x8558);
      iVar6 = iVar4;
      iVar7 = -(iVar2 + 1);
      uVar1 = FUN_165a_0004();
      *(undefined1 *)(param_1 + -0x7dae) = uVar1;
      param_1 = param_1 + 1;
      iVar4 = 0x165a;
      iVar8 = iVar3 + 1;
    }
    param_2 = param_2 + iVar7;
    param_3 = param_3 + iVar6;
  }
  return;
}
