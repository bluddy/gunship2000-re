/* SETUP.GS2 130f:0020 undefined FUN_130f_0020(void) */
void __cdecl16far FUN_130f_0020(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined2 unaff_DS;
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined2 uStack_6;
  undefined2 uStack_4;
  
  FUN_111d_02c6();
  if (param_1 < *(int *)0xd6e) {
    uStack_8 = param_1;
    uStack_a = *(int *)0xd6e;
  }
  else {
    uStack_8 = *(int *)0xd6e;
    uStack_a = param_1;
  }
  if (param_2 < *(int *)0xd70) {
    uStack_4 = param_2;
    uStack_6 = *(int *)0xd70;
  }
  else {
    uStack_4 = *(int *)0xd70;
    uStack_6 = param_2;
  }
  for (param_2 = uStack_4; param_2 <= uStack_6; param_2 = param_2 + 1) {
    for (param_1 = uStack_8; param_1 <= uStack_a; param_1 = param_1 + 1) {
      uVar3 = param_1 * 2;
      uVar4 = param_2 * 0xa0;
      iVar2 = ((int)uVar3 >> 0xf) + ((int)uVar4 >> 0xf) + (uint)CARRY2(uVar3,uVar4) + -0x4800;
      *(undefined2 *)0xd7e = (undefined1 *)(uVar3 + uVar4);
      *(int *)0xd80 = iVar2;
      *(undefined1 *)(uVar3 + uVar4) = 0;
      uVar1 = *(undefined1 *)0xd78;
      *(int *)0xd7e = *(int *)0xd7e + 1;
      *(undefined1 *)*(undefined4 *)0xd7e = uVar1;
      *(int *)0xd7e = *(int *)0xd7e + 1;
    }
  }
  return;
}
