/* SETUP.GS2 130f:0164 undefined FUN_130f_0164(void) */
void __cdecl16far FUN_130f_0164(int param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined2 unaff_DS;
  int iStackY_e;
  int iStackY_c;
  int iStackY_a;
  int iVar6;
  int iVar7;
  
  FUN_111d_02c6();
  *(int *)0xd76 = *(int *)0xd76 + 1;
  uVar1 = thunk_FUN_111d_1b1e(*(undefined2 *)0xd6c,*(int *)0xd76 * 10);
  *(undefined2 *)0xd6c = uVar1;
  iVar2 = *(int *)0xd76 * 10 + *(int *)0xd6c;
  iVar7 = *(int *)0xd6e;
  if (param_1 < iVar7) {
    iStackY_c = param_1;
    iStackY_e = iVar7;
  }
  else {
    iStackY_e = param_1;
    iStackY_c = iVar7;
  }
  iVar7 = *(int *)0xd70;
  iVar6 = param_2;
  if (param_2 < iVar7) {
    iVar6 = iVar7;
    iVar7 = param_2;
  }
  param_2 = iVar7;
  iVar3 = ((iStackY_e - iStackY_c) + 1) * ((iVar6 - param_2) + 1);
  *(int *)(iVar2 + -10) = iVar3;
  *(undefined1 *)(iVar2 + -8) = (char)param_2;
  *(undefined1 *)(iVar2 + -7) = (char)iVar6;
  *(undefined1 *)(iVar2 + -6) = (undefined1)iStackY_c;
  *(undefined1 *)(iVar2 + -5) = (undefined1)iStackY_e;
  iVar7 = iVar3;
  uVar1 = thunk_FUN_111d_1553();
  *(undefined2 *)(iVar7 + 6) = uVar1;
  iVar7 = 0x111d;
  uVar1 = thunk_FUN_111d_1553();
  *(undefined2 *)(iVar3 + 8) = uVar1;
  iStackY_a = 0;
  for (; param_2 <= iVar7; param_2 = param_2 + 1) {
    for (param_1 = iStackY_c; param_1 <= iStackY_e; param_1 = param_1 + 1) {
      uVar4 = param_2 * 0xa0;
      uVar5 = param_1 * 2;
      iVar2 = ((int)uVar4 >> 0xf) + ((int)uVar5 >> 0xf) + (uint)CARRY2(uVar4,uVar5) + -0x4800;
      *(undefined2 *)0xd7e = (undefined1 *)(uVar4 + uVar5);
      *(int *)0xd80 = iVar2;
      *(undefined1 *)(*(int *)(iVar3 + 6) + iStackY_a) = *(undefined1 *)(uVar4 + uVar5);
      *(int *)0xd7e = *(int *)0xd7e + 1;
      *(undefined1 *)(*(int *)(iVar3 + 8) + iStackY_a) = *(undefined1 *)*(undefined4 *)0xd7e;
      iStackY_a = iStackY_a + 1;
    }
  }
  return;
}
