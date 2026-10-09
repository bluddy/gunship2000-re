/* GS.GS2 3000:44ce undefined FUN_3000_44ce(void) */
undefined2 __cdecl16far
FUN_3000_44ce(undefined2 param_1,undefined2 param_2,undefined2 param_3,int param_4)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  byte local_40 [2];
  int iStack_3e;
  undefined2 local_3c [5];
  undefined2 local_32 [9];
  undefined2 local_20 [5];
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  byte *pbStack_e;
  undefined1 *puStack_c;
  undefined2 *puStack_a;
  
  func_0x00000eb0();
  puVar6 = local_20;
  puVar5 = (undefined2 *)0x2d7e;
  for (iVar4 = 0xe; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
  puVar6 = local_32;
  puVar5 = (undefined2 *)0x2d9b;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
  puVar6 = local_3c;
  puVar5 = (undefined2 *)0x2dac;
  for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  if (*(int *)0xc024 == 0) {
    puStack_a = (undefined2 *)*(undefined2 *)0xa4c;
    puStack_c = (undefined1 *)0xbf;
    pbStack_e = (byte *)0x451d;
    FUN_3000_12b0();
    if (*(int *)0xc01c != 0) {
      puStack_a = (undefined2 *)0xbf;
      puStack_c = (undefined1 *)0x4539;
      FUN_3000_14fc();
    }
    puStack_a = (undefined2 *)0xbf;
    puStack_c = (undefined1 *)0x454e;
    FUN_3000_14fc();
    return 0;
  }
  puStack_a = &param_1;
  puStack_c = (undefined1 *)0xbf;
  pbStack_e = (byte *)0x4564;
  FUN_3000_4370();
  if (param_4 != 0) {
    for (iStack_3e = 0; iStack_3e < 9; iStack_3e = iStack_3e + 1) {
      *(undefined1 *)((int)local_20 + iStack_3e) = *(undefined1 *)((int)local_3c + iStack_3e);
    }
  }
  if (*(char *)((int)*(undefined4 *)0xb85c + *(int *)(*(int *)0xc018 * 0xb + -0x4360) * 8 + 2) !=
      '\x01') {
    for (iStack_3e = 0; iStack_3e < 0x10; iStack_3e = iStack_3e + 1) {
      *(undefined1 *)((int)&uStack_16 + iStack_3e) = *(undefined1 *)((int)local_32 + iStack_3e);
    }
  }
  puStack_a = local_20;
  puStack_c = (undefined1 *)0xbf;
  pbStack_e = (byte *)0x45cd;
  FUN_3000_12b0();
  puStack_a = (undefined2 *)0xc8;
  puStack_c = (undefined1 *)0x140;
  pbStack_e = (byte *)0x0;
  uStack_10 = 0;
  uStack_12 = 0x880;
  uStack_14 = 0xbf;
  uStack_16 = 0x45e4;
  func_0x0000c8c0();
  puStack_a = (undefined2 *)0xc87;
  puStack_c = (undefined1 *)0x45ee;
  func_0x0000c928();
  puStack_a = &param_2;
  puStack_c = (undefined1 *)&param_1;
  pbStack_e = local_40;
  uStack_10 = 0xc87;
  uStack_12 = 0x4603;
  iVar4 = FUN_3000_5248();
  if (iVar4 == 0) {
    if ((*(int *)0xc01c != 0) && (*(int *)0xc01c < 0xb)) {
      puStack_a = (undefined2 *)0xc87;
      puStack_c = (undefined1 *)0x4629;
      FUN_3000_14fc();
    }
    puStack_a = (undefined2 *)0xc87;
    puStack_c = (undefined1 *)0x463e;
    FUN_3000_14fc();
    return 0;
  }
  iVar4 = *(int *)0xc018 * 0xb;
  *(undefined2 *)(iVar4 + -0x4362) = *(undefined2 *)((uint)local_40[0] * 8 + -0x3c6c);
  *(undefined2 *)(iVar4 + -0x4360) = *(undefined2 *)((uint)local_40[0] * 8 + -0x3c6e);
  puStack_a = (undefined2 *)0xc87;
  puStack_c = (undefined1 *)0x4674;
  uVar3 = FUN_3000_3a48();
  *(undefined2 *)(iVar4 + -0x435e) = uVar3;
  puStack_a = (undefined2 *)0x467f;
  uVar3 = FUN_3000_19cc();
  return uVar3;
}
