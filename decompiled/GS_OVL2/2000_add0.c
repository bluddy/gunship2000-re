/* GS.GS2 2000:add0 undefined FUN_2000_add0(void) */
void __cdecl16far FUN_2000_add0(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 local_164 [16];
  int iStack_144;
  undefined1 local_142 [82];
  int iStack_f0;
  byte local_ee [34];
  char cStack_cc;
  char cStack_c4;
  undefined2 uStack_10;
  undefined2 uStack_e;
  byte *pbStack_c;
  undefined1 *puStack_a;
  int iVar7;
  byte bVar8;
  
  func_0x00000eb0();
  puStack_a = (undefined1 *)0x0;
  pbStack_c = local_ee;
  uStack_e = 0xbf;
  uVar6 = 0xbf;
  uStack_10 = 0xadec;
  func_0x0000382a();
  local_142[0] = 0;
  iStack_f0 = 0;
  for (iVar7 = 0; iVar7 < *(int *)0xaca4; iVar7 = iVar7 + 1) {
    iVar4 = iVar7 * 0x20;
    if ((((*(char *)(iVar4 + -0x5d75) != '\0') && ((*(byte *)(iVar4 + -0x5d80) & 0x30) == 0)) &&
        (2 < *(byte *)(iVar4 + -0x5d76))) && (*(byte *)(iVar4 + -0x5d76) < 0x10)) {
      iStack_f0 = iStack_f0 + (uint)(local_ee[*(byte *)(iVar4 + -0x5d74)] == 0);
      local_ee[*(byte *)(iVar4 + -0x5d74)] = local_ee[*(byte *)(iVar4 + -0x5d74)] + 1;
    }
  }
  cStack_cc = cStack_cc + cStack_c4;
  cStack_c4 = 0;
  iVar7 = iStack_f0;
  if (4 < iStack_f0) {
    iVar7 = 4;
  }
  iVar4 = iVar7;
  if (iVar7 != 0) {
    while (iStack_f0 = iVar4, 0 < iStack_f0) {
      bVar8 = 0;
      for (iVar4 = 0; iVar4 < 0xe6; iVar4 = iVar4 + 1) {
        if (bVar8 < local_ee[iVar4]) {
          iStack_144 = iVar4;
          bVar8 = local_ee[iVar4];
        }
      }
      local_ee[iStack_144] = 0;
      if ((iVar7 < 2) || (iStack_f0 != 1)) {
        if (iStack_f0 < iVar7) {
          puStack_a = local_142;
          pbStack_c = (byte *)0xbf;
          uStack_e = 0xaeea;
          func_0x00002d86();
        }
      }
      else {
        puStack_a = local_142;
        pbStack_c = (byte *)0xbf;
        uStack_e = 0xaecf;
        func_0x00002d86();
      }
      puStack_a = (undefined1 *)0xbf;
      pbStack_c = (byte *)0xaef7;
      puVar3 = (undefined2 *)func_0x00007696();
      puVar5 = local_164;
      for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
        puVar2 = puVar5;
        puVar5 = puVar5 + 1;
        puVar1 = puVar3;
        puVar3 = puVar3 + 1;
        *puVar2 = *puVar1;
      }
      puStack_a = local_142;
      pbStack_c = (byte *)0x65c;
      uStack_e = 0xaf16;
      func_0x00002d86();
      iVar4 = iStack_f0 + -1;
    }
    puStack_a = (undefined1 *)0x3601;
    pbStack_c = (byte *)0xbf;
    uVar6 = 0xc87;
    uStack_e = 0xaf29;
    func_0x0000ca66();
  }
  puStack_a = (undefined1 *)0x0;
  pbStack_c = local_ee;
  uStack_10 = 0xaf3b;
  uStack_e = uVar6;
  func_0x0000382a();
  iStack_f0 = 0;
  for (iVar7 = 0; iVar7 < *(int *)0xaca4; iVar7 = iVar7 + 1) {
    iVar4 = iVar7 * 0x20;
    if ((*(char *)(iVar4 + -0x5d75) != '\0') &&
       ((*(char *)(iVar4 + -0x5d76) == '\0' || (*(char *)(iVar4 + -0x5d76) == '\x01')))) {
      iStack_f0 = iStack_f0 + 1;
      local_ee[*(byte *)(iVar7 * 0x20 + -0x5d74)] = local_ee[*(byte *)(iVar7 * 0x20 + -0x5d74)] + 1;
    }
  }
  if (iStack_f0 != 0) {
    bVar8 = 0;
    for (iVar7 = 0; iVar7 < 0xe6; iVar7 = iVar7 + 1) {
      if (bVar8 < local_ee[iVar7]) {
        iStack_144 = iVar7;
        bVar8 = local_ee[iVar7];
      }
    }
    puStack_a = (undefined1 *)0xbf;
    pbStack_c = (byte *)0xafc6;
    func_0x0000ca66();
    if (iStack_f0 < 4) {
      puStack_a = (undefined1 *)0xc87;
      pbStack_c = (byte *)0xafd8;
      func_0x0000ca66();
    }
    if (5 < iStack_f0) {
      puStack_a = (undefined1 *)0xc87;
      pbStack_c = (byte *)0xafea;
      func_0x0000ca66();
    }
    if (3 < iStack_f0) {
      puStack_a = (undefined1 *)0xc87;
      pbStack_c = (byte *)0xaffc;
      func_0x0000ca66();
    }
    puStack_a = (undefined1 *)0xc87;
    pbStack_c = (byte *)0xb009;
    puVar3 = (undefined2 *)func_0x00007696();
    puVar5 = local_164;
    for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
      puVar2 = puVar5;
      puVar5 = puVar5 + 1;
      puVar1 = puVar3;
      puVar3 = puVar3 + 1;
      *puVar2 = *puVar1;
    }
    puStack_a = (undefined1 *)0x36a6;
    pbStack_c = (byte *)0x65c;
    uStack_e = 0xb026;
    func_0x0000ca66();
  }
  puStack_a = (undefined1 *)0xb02e;
  func_0x00012916();
  return;
}
