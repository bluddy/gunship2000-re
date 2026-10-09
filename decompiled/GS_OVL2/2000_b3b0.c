/* GS.GS2 2000:b3b0 undefined FUN_2000_b3b0(void) */
void __cdecl16far FUN_2000_b3b0(void)

{
  undefined2 *puVar1;
  int *piVar2;
  undefined2 *puVar3;
  int *piVar4;
  undefined2 *puVar5;
  int iVar6;
  int *piVar7;
  undefined2 *puVar8;
  int *piVar9;
  undefined2 uVar10;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int iStack_30;
  int local_2e;
  undefined2 uVar11;
  int aiStack_2a [3];
  undefined2 uStack_24;
  int iStack_22;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined1 local_1a [4];
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  int *piStack_c;
  undefined1 *puStack_a;
  
  func_0x00000eb0();
  local_2e = 0xa0;
  uVar11 = 0x28;
  aiStack_2a[1] = 0x28;
  aiStack_2a[0] = 0x14;
  puStack_a = (undefined1 *)0xbf;
  piStack_c = (int *)0xb3d7;
  puVar5 = (undefined2 *)func_0x00000b20();
  puVar8 = (undefined2 *)0x98b8;
  for (iVar6 = 0x12; iVar6 != 0; iVar6 = iVar6 + -1) {
    puVar3 = puVar8;
    puVar8 = puVar8 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar3 = *puVar1;
  }
  puStack_a = (undefined1 *)*(undefined2 *)0x98c0;
  piStack_c = (int *)*(undefined2 *)0x98be;
  uStack_e = *(undefined2 *)0x98bc;
  uStack_10 = *(undefined2 *)0x98ba;
  uStack_12 = 0x8a4;
  uStack_14 = 0x6f;
  uStack_16 = 0xb402;
  func_0x0000c8c0();
  puStack_a = (undefined1 *)0xc87;
  piStack_c = (int *)0xb40c;
  func_0x0000c980();
  puStack_a = (undefined1 *)0xc87;
  piStack_c = (int *)0xb416;
  func_0x0000c928();
  puStack_a = (undefined1 *)0xa;
  piStack_c = (int *)0x64;
  uStack_e = 0xc87;
  uStack_10 = 0xb424;
  func_0x0000c9a6();
  puStack_a = (undefined1 *)0xc87;
  piStack_c = (int *)0xb42d;
  FUN_2000_a9e2();
  if (*(char *)0xad1b == '\0') {
    puStack_a = (undefined1 *)0xc87;
    piStack_c = (int *)0xb43f;
    func_0x0000ca50();
  }
  else {
    puStack_a = (undefined1 *)0xc87;
    piStack_c = (int *)0xb44c;
    func_0x0000ca50();
    if (*(char *)0xad1b == '\x04') {
      puStack_a = (undefined1 *)0xc87;
      piStack_c = (int *)0xb45e;
      func_0x0000ca66();
    }
    puStack_a = (undefined1 *)0xc87;
    piStack_c = (int *)0xb469;
    func_0x0000ca66();
  }
  puStack_a = &stack0xffd4;
  piStack_c = (int *)0xc87;
  uStack_e = 0xb479;
  func_0x0000cf8e();
  puStack_a = (undefined1 *)0x0;
  piStack_c = aiStack_2a + 2;
  uStack_e = 0xc87;
  uVar10 = 0xbf;
  uStack_10 = 0xb489;
  func_0x0000382a();
  for (iStack_30 = 0; iStack_30 < *(char *)0x98dc; iStack_30 = iStack_30 + 1) {
    aiStack_2a[2] = iStack_30 + 5;
    iStack_22 = iStack_30 * 10 + local_2e;
    uStack_20 = 100;
    uStack_1e = 10;
    uStack_1c = 1;
    puStack_a = local_1a;
    uStack_e = 0xb4dd;
    uStack_24 = uVar11;
    piStack_c = (int *)uVar10;
    FUN_2000_b654();
    piStack_c = (int *)0xb4e9;
    puStack_a = (undefined1 *)uVar10;
    func_0x00003738();
    piVar9 = aiStack_2a;
    piVar7 = aiStack_2a + 2;
    for (iVar6 = 0x12; iVar6 != 0; iVar6 = iVar6 + -1) {
      piVar4 = piVar9;
      piVar9 = piVar9 + 1;
      piVar2 = piVar7;
      piVar7 = piVar7 + 1;
      *piVar4 = *piVar2;
    }
    uVar11 = 0xbf;
    uVar10 = 0x6f;
    local_2e = -0x4b00;
    func_0x00000770();
  }
  piStack_c = (int *)0xb50c;
  puStack_a = (undefined1 *)uVar10;
  FUN_2000_b514();
  return;
}
