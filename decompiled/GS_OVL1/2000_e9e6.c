/* GS.GS2 2000:e9e6 undefined FUN_2000_e9e6(void) */
int __cdecl16far FUN_2000_e9e6(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 auStack_32 [2];
  undefined2 local_30 [7];
  undefined1 auStack_21 [11];
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined1 *puStack_e;
  undefined1 *puStack_c;
  undefined1 *puStack_a;
  char cVar8;
  
  func_0x00000eb0();
  puVar7 = (undefined2 *)(auStack_32 + 2);
  puVar6 = (undefined2 *)0x290e;
  for (iVar5 = 0x14; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar2 = puVar7;
    puVar7 = puVar7 + 1;
    puVar1 = puVar6;
    puVar6 = puVar6 + 1;
    *puVar2 = *puVar1;
  }
  cVar8 = '\x0f';
  if (*(char *)0x2b98 < '\x01') {
    puStack_a = (undefined1 *)*(undefined2 *)0xa08;
    puStack_c = (undefined1 *)0xbf;
    puStack_e = (undefined1 *)0xea20;
    func_0x000212b0();
    return 0;
  }
  if (((*(int *)0xc4d8 == 9999) || (*(int *)0xc4f6 == 9999)) || (*(int *)0xc50a == 9999)) {
    if (*(int *)0xc4d8 == 9999) {
      for (iVar5 = 0; iVar5 < 6; iVar5 = iVar5 + 1) {
        auStack_21[iVar5] = *(undefined1 *)(iVar5 + 0x2936);
      }
      cVar8 = (char)iVar5 + '\x0f';
    }
    if (*(int *)0xc4f6 == 9999) {
      for (iVar5 = 0; iVar5 < 9; iVar5 = iVar5 + 1) {
        auStack_32[cVar8 + iVar5 + 2] = *(undefined1 *)(iVar5 + 0x293e);
      }
      cVar8 = cVar8 + (char)iVar5;
    }
    if (*(int *)0xc50a == 9999) {
      for (iVar5 = 0; iVar5 < 0xb; iVar5 = iVar5 + 1) {
        auStack_32[cVar8 + iVar5 + 2] = *(undefined1 *)(iVar5 + 0x2948);
      }
      cVar8 = cVar8 + (char)iVar5;
    }
    auStack_32[cVar8] = 0x2e;
    auStack_32[cVar8 + 1] = 0;
    puStack_a = auStack_32 + 2;
    puStack_c = (undefined1 *)0xbf;
    puStack_e = (undefined1 *)0xeaf8;
    func_0x000212b0();
    return 0;
  }
  uVar3 = *(undefined2 *)0x71aa;
  uVar4 = *(undefined2 *)0x966;
  *(undefined2 *)0xc38e = *(undefined2 *)0x964;
  *(undefined2 *)0xc390 = uVar4;
  uVar4 = *(undefined2 *)0x962;
  *(undefined2 *)0xc396 = *(undefined2 *)0x960;
  *(undefined2 *)0xc398 = uVar4;
  uVar4 = *(undefined2 *)0x96a;
  *(undefined2 *)0xc39e = *(undefined2 *)0x968;
  *(undefined2 *)0xc3a0 = uVar4;
  uVar4 = *(undefined2 *)0x96e;
  *(undefined2 *)0xc3a6 = *(undefined2 *)0x96c;
  *(undefined2 *)0xc3a8 = uVar4;
  uVar4 = *(undefined2 *)0x972;
  *(undefined2 *)0xc3ae = *(undefined2 *)0x970;
  *(undefined2 *)0xc3b0 = uVar4;
  uVar4 = *(undefined2 *)0x976;
  *(undefined2 *)0xc3b6 = *(undefined2 *)0x974;
  *(undefined2 *)0xc3b8 = uVar4;
  *(undefined2 *)0xc024 = 6;
  for (iVar5 = 0; iVar5 < *(int *)0xc024; iVar5 = iVar5 + 1) {
    *(undefined2 *)(iVar5 * 8 + -0x3c6c) = 0;
  }
  puStack_a = &stack0x0004;
  puStack_c = (undefined1 *)0xbf;
  puStack_e = (undefined1 *)0xeb9b;
  func_0x00024370();
  puStack_a = (undefined1 *)*(undefined2 *)0x9d0;
  puStack_c = (undefined1 *)0x20f4;
  puStack_e = (undefined1 *)0xebb1;
  func_0x000212b0();
  puStack_a = (undefined1 *)0xc8;
  puStack_c = (undefined1 *)0x140;
  puStack_e = (undefined1 *)0x0;
  uStack_10 = 0;
  uStack_12 = 0x880;
  uStack_14 = 0x20f4;
  uStack_16 = 0xebc8;
  func_0x0000c8c0();
  puStack_a = (undefined1 *)0xc87;
  puStack_c = (undefined1 *)0xebd2;
  func_0x0000c928();
  puStack_a = &stack0x0006;
  puStack_c = &stack0x0004;
  puStack_e = &stack0xfff8;
  uStack_10 = 0xc87;
  uStack_12 = 0xebe8;
  iVar5 = func_0x00025248();
  if (iVar5 == 0) {
    return iVar5;
  }
  puStack_a = (undefined1 *)0xebf9;
  func_0x000219cc();
  puStack_a = (undefined1 *)0x20f4;
  puStack_c = (undefined1 *)0xec02;
  iVar5 = FUN_2000_e098();
  return iVar5;
}
