/* SETUP.GS2 1000:0d3e undefined FUN_1000_0d3e(void) */
void __cdecl16far FUN_1000_0d3e(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  uint uVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int iStack_4c;
  int iStack_4a;
  undefined2 local_48 [10];
  int iStack_34;
  undefined2 uStack_32;
  undefined1 local_30 [14];
  undefined2 uStack_22;
  undefined2 auStack_1e [4];
  uint uStack_16;
  int iStack_14;
  undefined2 local_12;
  undefined2 uStack_10;
  undefined2 *puStack_e;
  undefined2 uStack_c;
  undefined2 *puStack_a;
  undefined1 *puStack_8;
  char cVar7;
  
  FUN_111d_02c6();
  *(undefined2 *)0x5a1 = 0;
  puStack_8 = local_30;
  puStack_a = (undefined2 *)0x0;
  uStack_c = 0x8f5;
  puStack_e = (undefined2 *)0x111d;
  uStack_10 = 0xd61;
  FUN_111d_1d59();
  do {
    puStack_8 = (undefined1 *)0x900;
    puStack_a = &local_12;
    uStack_c = 0x111d;
    puStack_e = (undefined2 *)0xd71;
    uStack_32 = FUN_111d_06e2();
    if ((iStack_14 < 0) || ((iStack_14 < 1 && (uStack_16 < 0x211)))) {
      iStack_34 = 0;
      while( true ) {
        puStack_8 = (undefined1 *)uStack_32;
        puStack_a = (undefined2 *)0x1;
        uStack_c = 0x14;
        puStack_e = local_48;
        uStack_10 = 0x111d;
        local_12 = 0xdf5;
        iVar3 = FUN_111d_06f8();
        if (iVar3 == 0) break;
        puStack_8 = (undefined1 *)iStack_34;
        puStack_a = (undefined2 *)(int)(char)local_12;
        puVar5 = auStack_1e;
        puVar6 = local_48;
        for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
          puVar2 = puVar5;
          puVar5 = puVar5 + 1;
          puVar1 = puVar6;
          puVar6 = puVar6 + 1;
          *puVar2 = *puVar1;
        }
        uStack_22 = 0xe17;
        iStack_4c = FUN_1000_0fa6();
        if (iStack_4c != 0) break;
        iStack_34 = iStack_34 + 1;
      }
    }
    else {
      puStack_8 = (undefined1 *)0x0;
      puStack_a = (undefined2 *)0x0;
      uStack_c = 0x210;
      uStack_10 = 0x111d;
      local_12 = 0xd98;
      puStack_e = (undefined2 *)uStack_32;
      FUN_111d_1848();
      puStack_8 = (undefined1 *)uStack_32;
      puStack_a = (undefined2 *)0x1;
      uStack_c = 0x14;
      puStack_e = local_48;
      uStack_10 = 0x111d;
      local_12 = 0xdaf;
      FUN_111d_06f8();
      puStack_8 = (undefined1 *)0x0;
      puStack_a = (undefined2 *)(int)(char)local_12;
      puVar5 = auStack_1e;
      puVar6 = local_48;
      for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
        puVar2 = puVar5;
        puVar5 = puVar5 + 1;
        puVar1 = puVar6;
        puVar6 = puVar6 + 1;
        *puVar2 = *puVar1;
      }
      uStack_22 = 0xdcd;
      iStack_4c = FUN_1000_0fa6();
    }
    puStack_8 = (undefined1 *)uStack_32;
    puStack_a = (undefined2 *)0x111d;
    uStack_c = 0xe2e;
    FUN_111d_05fc();
    if (iStack_4c != 0) break;
    puStack_8 = local_30;
    puStack_a = (undefined2 *)0x111d;
    uStack_c = 0xe40;
    iVar3 = FUN_111d_1d4e();
  } while (iVar3 == 0);
  for (iStack_34 = 0; iStack_34 < *(int *)0xd4c; iStack_34 = iStack_34 + 1) {
    for (iStack_4a = 0; iStack_4a < *(int *)0xd4c; iStack_4a = iStack_4a + 1) {
      cVar7 = *(char *)(iStack_34 * 9 + 0xc9a);
      if (cVar7 == 'D') {
        cVar7 = 'R';
      }
      if (*(char *)(iStack_4a * 9 + 0xc98) == cVar7) break;
    }
    if (*(int *)0xd4c == iStack_4a) {
      for (iStack_4a = iStack_34; iStack_4a < *(int *)0xd4c + -1; iStack_4a = iStack_4a + 1) {
        puVar5 = (undefined2 *)(*(int *)0x5a1 + iStack_4a * 0x11);
        puVar6 = (undefined2 *)((int)puVar5 + 0x11);
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          puVar2 = puVar5;
          puVar5 = puVar5 + 1;
          puVar1 = puVar6;
          puVar6 = puVar6 + 1;
          *puVar2 = *puVar1;
        }
        *(undefined1 *)puVar5 = *(undefined1 *)puVar6;
        iVar3 = iStack_4a * 9;
        *(undefined2 *)(iVar3 + 0xc98) = *(undefined2 *)(iVar3 + 0xca1);
        *(undefined2 *)(iVar3 + 0xc9a) = *(undefined2 *)(iVar3 + 0xca3);
        *(undefined2 *)(iVar3 + 0xc9c) = *(undefined2 *)(iVar3 + 0xca5);
        *(undefined2 *)(iVar3 + 0xc9e) = *(undefined2 *)(iVar3 + 0xca7);
        *(undefined1 *)(iVar3 + 0xca0) = *(undefined1 *)(iVar3 + 0xca9);
      }
      *(int *)0xd4c = *(int *)0xd4c + -1;
      iStack_34 = 0;
    }
  }
  *(undefined2 *)0x1d5e = 0;
  iStack_34 = 0;
  do {
    if (*(int *)0xd4c <= iStack_34) {
LAB_1000_0f72:
      *(uint *)0x1d66 = (uint)((*(byte *)0x1d33 & 0x80) != 0);
      *(undefined1 *)0x59b = *(undefined1 *)0xd4c;
      iVar3 = 0x16 - *(int *)0xd4c;
      if (0xf < iVar3) {
        iVar3 = 0xf;
      }
      *(undefined1 *)0x599 = (char)iVar3;
      *(undefined1 *)0x5a0 = *(undefined1 *)0x1d5e;
      return;
    }
    if (((int)*(char *)(iStack_34 * 9 + 0xc98) == *(int *)0x1d4e % 0x100) &&
       (uVar4 = (int)*(uint *)0x1d4e >> 0xf,
       (int)*(char *)(iStack_34 * 9 + 0xc99) ==
       ((int)((*(uint *)0x1d4e ^ uVar4) - uVar4) >> 8 ^ uVar4) - uVar4)) {
      *(int *)0x1d5e = iStack_34;
      goto LAB_1000_0f72;
    }
    iStack_34 = iStack_34 + 1;
  } while( true );
}
