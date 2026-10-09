/* GS.GS2 2000:ef58 undefined FUN_2000_ef58(void) */
void __cdecl16far FUN_2000_ef58(undefined2 *param_1)

{
  int *piVar1;
  undefined2 *puVar2;
  int *piVar3;
  undefined2 *puVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined2 *puVar8;
  undefined2 uVar9;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int iStack_2a;
  int iStack_28;
  int local_26;
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined1 uStack_1a;
  undefined2 uStack_14;
  undefined2 uStack_12;
  int iStack_10;
  undefined2 uStack_e;
  int *piStack_c;
  undefined2 uStack_a;
  
  func_0x00000eb0();
  uStack_a = 0;
  piStack_c = &local_26;
  uStack_e = 0xbf;
  iStack_10 = 0xef72;
  func_0x0000382a();
  local_26 = *(int *)0x9ba2 + 1;
  uStack_24 = *(undefined2 *)0x9bae;
  iStack_2a = 0xb2;
  uStack_22 = 0xb2;
  iStack_28 = 4;
  uStack_1e = 4;
  uStack_20 = 1;
  uStack_1c = 1;
  uStack_1a = 0;
  piVar7 = &iStack_2a;
  piVar6 = &local_26;
  for (iVar5 = 0x12; iVar5 != 0; iVar5 = iVar5 + -1) {
    piVar3 = piVar7;
    piVar7 = piVar7 + 1;
    piVar1 = piVar6;
    piVar6 = piVar6 + 1;
    *piVar3 = *piVar1;
  }
  func_0x00000770(0xbf);
  if (*(int *)0x9bb0 == 0) {
    *(undefined2 *)0x9bb0 = *(undefined2 *)0x9bac;
    *(undefined2 *)0x9bac = 0;
  }
  *(int *)0x9bac = (iStack_28 - *(int *)0x9bb0) + iStack_2a;
  iVar5 = *(int *)0x9ba2 * 0x11;
  *(undefined2 *)(iVar5 + -0x6700) = 0;
  *(undefined2 *)(iVar5 + -0x66fe) = 0x16b6;
  *(undefined2 *)(iVar5 + -0x66fc) = 0x1d50;
  if (param_1 == (undefined2 *)0x0) {
    uStack_a = 0;
    piStack_c = (int *)(*(int *)0x9ba2 * 0x11 + -0x66fa);
    uStack_e = 0x6f;
    uVar9 = 0xbf;
    iStack_10 = 0xf028;
    func_0x0000382a();
  }
  else {
    puVar8 = (undefined2 *)(iVar5 + -0x66fa);
    for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
      puVar4 = puVar8;
      puVar8 = puVar8 + 1;
      puVar2 = param_1;
      param_1 = param_1 + 1;
      *puVar4 = *puVar2;
    }
    *(undefined1 *)puVar8 = *(undefined1 *)param_1;
    uStack_a = 0x6f;
    uVar9 = 0x10e4;
    piStack_c = (int *)0xf010;
    func_0x00010e6a();
  }
  *(int *)0x9ba2 = *(int *)0x9ba2 + 1;
  uStack_a = *(undefined2 *)((uint)(*(int *)0x98f8 != 0) * 2 + 0x3dce);
  piStack_c = (int *)0x4e;
  uStack_e = 0xb2;
  iStack_10 = *(int *)0x9bae + 7;
  uStack_14 = 0xf050;
  uStack_12 = uVar9;
  func_0x0000dcaa();
  return;
}
