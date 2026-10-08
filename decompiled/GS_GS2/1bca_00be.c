/* GS.GS2 1bca:00be undefined FUN_1bca_00be(void) */
void __cdecl16far FUN_1bca_00be(int param_1,int param_2)

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
  
  FUN_10bf_02c0();
  if (param_1 < *(int *)0x823c) {
    uStack_8 = param_1;
    uStack_a = *(int *)0x823c;
  }
  else {
    uStack_8 = *(int *)0x823c;
    uStack_a = param_1;
  }
  if (param_2 < *(int *)0x823e) {
    uStack_4 = param_2;
    uStack_6 = *(int *)0x823e;
  }
  else {
    uStack_4 = *(int *)0x823e;
    uStack_6 = param_2;
  }
  for (param_2 = uStack_4; param_2 <= uStack_6; param_2 = param_2 + 1) {
    for (param_1 = uStack_8; param_1 <= uStack_a; param_1 = param_1 + 1) {
      uVar3 = param_1 * 2;
      uVar4 = param_2 * 0xa0;
      iVar2 = ((int)uVar3 >> 0xf) + ((int)uVar4 >> 0xf) + (uint)CARRY2(uVar3,uVar4) + -0x4800;
      *(undefined2 *)0x824c = (undefined1 *)(uVar3 + uVar4);
      *(int *)0x824e = iVar2;
      *(undefined1 *)(uVar3 + uVar4) = 0;
      uVar1 = *(undefined1 *)0x8246;
      *(int *)0x824c = *(int *)0x824c + 1;
      *(undefined1 *)*(undefined4 *)0x824c = uVar1;
      *(int *)0x824c = *(int *)0x824c + 1;
    }
  }
  return;
}
