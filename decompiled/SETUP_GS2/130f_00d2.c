/* SETUP.GS2 130f:00d2 undefined FUN_130f_00d2(void) */
void __cdecl16far FUN_130f_00d2(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined2 unaff_DS;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined2 uStack_6;
  
  FUN_111d_02c6();
  iVar1 = *(int *)0xd6e;
  if (param_1 < iVar1) {
    uStack_a = param_1;
    uStack_c = iVar1;
  }
  else {
    uStack_c = param_1;
    uStack_a = iVar1;
  }
  iVar1 = *(int *)0xd70;
  if (param_2 < iVar1) {
    uStack_6 = param_2;
    uStack_8 = iVar1;
  }
  else {
    uStack_8 = param_2;
    uStack_6 = iVar1;
  }
  for (param_2 = uStack_6; param_2 <= uStack_8; param_2 = param_2 + 1) {
    for (param_1 = uStack_a; param_1 <= uStack_c; param_1 = param_1 + 1) {
      uVar2 = param_1 * 2;
      uVar3 = param_2 * 0xa0;
      *(undefined1 *)(uVar2 + uVar3 + 1) = *(undefined1 *)0xd78;
    }
  }
  return;
}
