/* SETUP.GS2 1000:0fa6 undefined FUN_1000_0fa6(void) */
bool __cdecl16far FUN_1000_0fa6(void)

{
  undefined2 *puVar1;
  int *piVar2;
  undefined2 *puVar3;
  int *piVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  int *piVar10;
  int *piVar11;
  undefined2 unaff_DS;
  undefined2 in_stack_00000014;
  undefined1 uStack0016;
  byte bStack0017;
  undefined1 in_stack_00000018;
  undefined1 in_stack_0000001a;
  int local_1a [2];
  undefined1 uStack_16;
  undefined2 uStack_10;
  undefined1 uStack_e;
  undefined1 uStack_d;
  undefined1 uStack_c;
  undefined1 uStack_b;
  undefined2 uStack_a;
  int iStack_8;
  int iVar12;
  
  FUN_111d_02c6();
  if (0x13 < *(int *)0xd4c) {
    return true;
  }
  iStack_8 = 0x11;
  uStack_a = &stack0x0004;
  uStack_c = 0x13;
  uStack_b = 0;
  uStack_e = 0x1d;
  uStack_d = 0x11;
  uStack_10 = 0xfd5;
  iStack_8 = thunk_FUN_111d_1553();
  uStack_c = (undefined1)iStack_8;
  uStack_b = (undefined1)((uint)iStack_8 >> 8);
  uStack_e = 0x1d;
  uStack_d = 0x11;
  uStack_10 = 0xfe1;
  FUN_111d_1784();
  *(undefined1 *)(iStack_8 + 0x11) = 0;
  local_1a[0] = iStack_8;
  local_1a[1] = 1;
  uStack_16 = 1;
  iVar12 = 0;
  while ((iVar12 < *(int *)0xd4c && ((int)*(char *)(iVar12 * 9 + 0xc9b) <= (int)(bStack0017 & 0xf)))
        ) {
    iVar12 = iVar12 + 1;
  }
  *(int *)0xd4c = *(int *)0xd4c + 1;
  iStack_8 = *(int *)0xd4c * 0x11;
  uStack_a._0_1_ = (undefined1)*(undefined2 *)0x5a1;
  uStack_a._1_1_ = (undefined1)((uint)*(undefined2 *)0x5a1 >> 8);
  uStack_c = 0x1d;
  uStack_b = 0x11;
  uStack_e = 0x48;
  uStack_d = 0x10;
  uVar5 = thunk_FUN_111d_1b1e();
  *(undefined2 *)0x5a1 = uVar5;
  iVar6 = *(int *)0xd4c + -1;
  if (iVar12 < iVar6) {
    for (; iVar12 < iVar6; iVar6 = iVar6 + -1) {
      puVar8 = (undefined2 *)(*(int *)0x5a1 + iVar6 * 0x11);
      puVar9 = (undefined2 *)((int)puVar8 + -0x11);
      for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
        puVar3 = puVar8;
        puVar8 = puVar8 + 1;
        puVar1 = puVar9;
        puVar9 = puVar9 + 1;
        *puVar3 = *puVar1;
      }
      *(undefined1 *)puVar8 = *(undefined1 *)puVar9;
      iVar7 = iVar6 * 9;
      *(undefined2 *)(iVar7 + 0xc98) = *(undefined2 *)(iVar7 + 0xc8f);
      *(undefined2 *)(iVar7 + 0xc9a) = *(undefined2 *)(iVar7 + 0xc91);
      *(undefined2 *)(iVar7 + 0xc9c) = *(undefined2 *)(iVar7 + 0xc93);
      *(undefined2 *)(iVar7 + 0xc9e) = *(undefined2 *)(iVar7 + 0xc95);
      *(undefined1 *)(iVar7 + 0xca0) = *(undefined1 *)(iVar7 + 0xc97);
    }
  }
  piVar11 = (int *)(iVar12 * 0x11 + *(int *)0x5a1);
  piVar10 = local_1a;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    piVar4 = piVar11;
    piVar11 = piVar11 + 1;
    piVar2 = piVar10;
    piVar10 = piVar10 + 1;
    *piVar4 = *piVar2;
  }
  *(char *)piVar11 = (char)*piVar10;
  iVar12 = iVar12 * 9;
  *(undefined1 *)(iVar12 + 0xc98) = in_stack_00000018;
  *(undefined1 *)(iVar12 + 0xc99) = in_stack_0000001a;
  *(undefined1 *)(iVar12 + 0xc9a) = uStack0016;
  *(byte *)(iVar12 + 0xc9b) = bStack0017 & 0xf;
  *(byte *)(iVar12 + 0xc9c) = (bStack0017 & 0x10) >> 4;
  *(byte *)(iVar12 + 0xc9d) = (bStack0017 & 0x20) >> 5;
  *(byte *)(iVar12 + 0xc9e) = (bStack0017 & 0x40) >> 6;
  *(byte *)(iVar12 + 0xc9f) = bStack0017 >> 7;
  *(undefined1 *)(iVar12 + 0xca0) = in_stack_00000014._1_1_;
  return *(int *)0xd4c == 0x14;
}
