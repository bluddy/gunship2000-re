/* GS.GS2 2000:c0f0 undefined FUN_2000_c0f0(void) */
void __cdecl16far FUN_2000_c0f0(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int iStackY_4c;
  undefined2 auStack_2a [2];
  undefined2 local_26;
  int iStack_24;
  int iStack_22;
  int iStack_20;
  int iStack_1e;
  undefined1 local_1a [4];
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  int iStack_10;
  int iStack_e;
  int iStack_c;
  undefined1 *puStack_a;
  
  func_0x00000eb0();
  *(undefined1 *)0xe27a = 0;
  puStack_a = (undefined1 *)0xbf;
  iStack_c = 0xc10b;
  iVar3 = func_0x00014e66();
  if (iVar3 < 0) {
    return;
  }
  puStack_a = (undefined1 *)0x1;
  iStack_c = 0x14e6;
  iStack_e = 0xc12d;
  func_0x0000d628();
  puStack_a = (undefined1 *)0xd02;
  iStack_c = 0xc138;
  func_0x0000d5d0();
  puStack_a = (undefined1 *)0xc13f;
  FUN_2000_d4d4();
  puStack_a = (undefined1 *)0xd02;
  iStack_c = 0xc146;
  puVar4 = (undefined2 *)func_0x00000b20();
  puVar6 = &local_26;
  for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  puStack_a = (undefined1 *)iStack_1e;
  iStack_c = iStack_20;
  iStack_e = iStack_22;
  iStack_10 = iStack_24;
  uStack_12 = 0;
  uStack_14 = 0x6f;
  uStack_16 = 0xc16a;
  func_0x0000da72();
  puStack_a = (undefined1 *)(iStack_1e + -4);
  iStack_c = iStack_20 + -6;
  iStack_e = iStack_22 + 4;
  iStack_10 = iStack_24 + 6;
  uStack_12 = 0x880;
  uStack_14 = 0xd02;
  uStack_16 = 0xc193;
  func_0x0000c8c0();
  puStack_a = (undefined1 *)0xc87;
  iStack_c = 0xc19d;
  func_0x0000c980();
  puStack_a = (undefined1 *)0xc87;
  iStack_c = 0xc1a7;
  func_0x0000c928();
  puStack_a = (undefined1 *)0xc87;
  uVar7 = 0xc87;
  iStack_c = 0xc1bf;
  func_0x0000ca50();
  if (*(char *)0x988e != '\0') {
    puStack_a = (undefined1 *)0xc87;
    iStack_c = 0xc1d3;
    puVar4 = (undefined2 *)func_0x00000b20();
    puVar6 = &local_26;
    for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar2 = puVar6;
      puVar6 = puVar6 + 1;
      puVar1 = puVar4;
      puVar4 = puVar4 + 1;
      *puVar2 = *puVar1;
    }
    puStack_a = local_1a;
    iStack_c = 0x6f;
    iStack_e = 0xc1ee;
    func_0x00002dc6();
    puVar4 = auStack_2a;
    puVar6 = &local_26;
    for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar2 = puVar4;
      puVar4 = puVar4 + 1;
      puVar1 = puVar6;
      puVar6 = puVar6 + 1;
      *puVar2 = *puVar1;
    }
    func_0x00000770(0xbf);
    puStack_a = (undefined1 *)0x6f;
    iStack_c = 0xc20f;
    puVar4 = (undefined2 *)func_0x00000b20();
    puVar6 = &local_26;
    for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar2 = puVar6;
      puVar6 = puVar6 + 1;
      puVar1 = puVar4;
      puVar4 = puVar4 + 1;
      *puVar2 = *puVar1;
    }
    iVar3 = iStack_20 / 2;
    iStack_20 = iVar3 + -1;
    puStack_a = local_1a;
    iStack_c = 0x6f;
    iStack_e = 0xc239;
    func_0x00002dc6();
    puVar4 = auStack_2a;
    puVar6 = &local_26;
    for (iVar5 = 0x12; iVar5 != 0; iVar5 = iVar5 + -1) {
      puVar2 = puVar4;
      puVar4 = puVar4 + 1;
      puVar1 = puVar6;
      puVar6 = puVar6 + 1;
      *puVar2 = *puVar1;
    }
    func_0x00000770(0xbf);
    iStack_24 = iStack_24 + iVar3;
    puStack_a = local_1a;
    iStack_c = 0x6f;
    iStack_e = 0xc266;
    func_0x00002dc6();
    local_26 = 0x15;
    puVar4 = auStack_2a;
    puVar6 = &local_26;
    for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar2 = puVar4;
      puVar4 = puVar4 + 1;
      puVar1 = puVar6;
      puVar6 = puVar6 + 1;
      *puVar2 = *puVar1;
    }
    func_0x00000770(0xbf);
    puStack_a = local_1a;
    iStack_c = iStack_20;
    iStack_e = iStack_22;
    iStack_10 = iStack_24;
    uStack_12 = 0x6f;
    uVar7 = 0xd02;
    uStack_14 = 0xc299;
    func_0x0000dcaa();
  }
  uVar8 = 0x6f;
  iStack_c = -0x3d5d;
  puStack_a = (undefined1 *)uVar7;
  puVar4 = (undefined2 *)func_0x00000b20();
  puVar6 = &local_26;
  for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  *(int *)0x9894 = iStack_24;
  *(int *)0x9896 = iStack_22;
  *(int *)0x9890 = iStack_20;
  *(int *)0x988c = iStack_1e;
  puStack_a = (undefined1 *)0xc2ce;
  FUN_2000_ccb2();
  puStack_a = (undefined1 *)0xc2d2;
  FUN_2000_ce20();
  for (iStackY_4c = 0xf; iStackY_4c < 0x14; iStackY_4c = iStackY_4c + 1) {
    iStack_c = 0xc2eb;
    puStack_a = (undefined1 *)uVar8;
    puVar4 = (undefined2 *)func_0x00000b20();
    puVar6 = &local_26;
    for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar2 = puVar6;
      puVar6 = puVar6 + 1;
      puVar1 = puVar4;
      puVar4 = puVar4 + 1;
      *puVar2 = *puVar1;
    }
    puStack_a = local_1a;
    iStack_c = iStack_20;
    iStack_e = iStack_22;
    iStack_10 = iStack_24;
    uStack_12 = 0x6f;
    uVar8 = 0xd02;
    uStack_14 = 0xc30e;
    func_0x0000dcaa();
  }
  puStack_a = (undefined1 *)0xc319;
  func_0x0001534e();
  puStack_a = (undefined1 *)0x14e6;
  iStack_c = 0xc320;
  func_0x0000dd2e();
  return;
}
