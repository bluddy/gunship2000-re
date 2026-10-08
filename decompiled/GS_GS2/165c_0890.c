/* GS.GS2 165c:0890 undefined FUN_165c_0890(void) */
void __cdecl16far FUN_165c_0890(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 *puVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 local_3c [16];
  undefined2 local_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined1 uStack_14;
  undefined2 uStack_12;
  int iStack_10;
  undefined2 **ppuStack_e;
  undefined2 *local_c;
  
  FUN_10bf_02c0();
  FUN_165c_0dd2();
  local_c = (undefined2 *)0x10bf;
  ppuStack_e = (undefined2 **)0x6e6d;
  ppuStack_e = (undefined2 **)FUN_10bf_06dc();
  if (ppuStack_e == (undefined2 **)0x0) {
    return;
  }
  FUN_2134_0008();
  iVar4 = 0x2134;
  for (iStack_10 = 0; iStack_10 < *(int *)0xaca4; iStack_10 = iStack_10 + 1) {
    puVar5 = local_3c;
    puVar7 = (undefined2 *)(iStack_10 * 0x20 + -0x5d80);
    for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
      puVar2 = puVar5;
      puVar5 = puVar5 + 1;
      puVar1 = puVar7;
      puVar7 = puVar7 + 1;
      *puVar2 = *puVar1;
    }
    local_c = (undefined2 *)0x20;
    ppuStack_e = (undefined2 **)local_3c;
    uStack_12 = 0x6eb9;
    iStack_10 = iVar4;
    FUN_10bf_0828();
    iVar4 = 0x10bf;
  }
  if (*(int *)0xaca4 < 0x50) {
    local_c = local_3c;
    iStack_10 = 0x6ed2;
    ppuStack_e = (undefined2 **)iVar4;
    FUN_10bf_2c3a();
    local_3c[0] = 0xffff;
    local_c = (undefined2 *)0x20;
    ppuStack_e = (undefined2 **)local_3c;
    iStack_10 = 0x10bf;
    uStack_12 = 0x6eea;
    FUN_10bf_0828();
  }
  local_c = (undefined2 *)0x6ef5;
  FUN_10bf_05f6();
  local_c = (undefined2 *)0x10bf;
  ppuStack_e = (undefined2 **)0x6f04;
  iVar4 = FUN_10bf_06dc();
  if (iVar4 == 0) {
    return;
  }
  local_c = (undefined2 *)0x136;
  ppuStack_e = (undefined2 **)0xb8e4;
  iStack_10 = 0x10bf;
  uStack_12 = 0x6f20;
  FUN_10bf_0828();
  local_c = (undefined2 *)0x6f2b;
  FUN_10bf_05f6();
  local_c = (undefined2 *)0x10bf;
  ppuStack_e = (undefined2 **)0x6f39;
  ppuStack_e = (undefined2 **)FUN_10bf_06dc();
  if (ppuStack_e == (undefined2 **)0x0) {
    return;
  }
  for (iStack_10 = 0; iStack_10 < *(int *)0xb8c6; iStack_10 = iStack_10 + 1) {
    unaff_DS = *(undefined2 *)(iStack_10 * 8 + *(int *)0xb864 + 4);
    local_c = (undefined2 *)0x8;
    ppuStack_e = &local_c;
    iStack_10 = 0x10bf;
    uStack_12 = 0x6fb8;
    FUN_10bf_0828();
  }
  local_c = (undefined2 *)0x6fc6;
  FUN_10bf_05f6();
  local_c = (undefined2 *)0x10bf;
  ppuStack_e = (undefined2 **)0x6fd4;
  ppuStack_e = (undefined2 **)FUN_10bf_06dc();
  if (ppuStack_e == (undefined2 **)0x0) {
    return;
  }
  for (iStack_10 = 0; iStack_10 < *(int *)0xb8dc; iStack_10 = iStack_10 + 1) {
    puVar5 = (undefined2 *)(iStack_10 * 9 + *(int *)0xb8d4);
    uVar3 = *(undefined2 *)0xb8d6;
    local_1c = *puVar5;
    uStack_1a = puVar5[1];
    uStack_18 = puVar5[2];
    uStack_16 = puVar5[3];
    uStack_14 = *(undefined1 *)(puVar5 + 4);
    local_c = (undefined2 *)0x9;
    ppuStack_e = (undefined2 **)&local_1c;
    iStack_10 = 0x10bf;
    uStack_12 = 0x7025;
    FUN_10bf_0828();
  }
  local_c = (undefined2 *)0x7032;
  FUN_10bf_05f6();
  return;
}
