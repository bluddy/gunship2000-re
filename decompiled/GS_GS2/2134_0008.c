/* GS.GS2 2134:0008 undefined FUN_2134_0008(void) */
void __cdecl16far FUN_2134_0008(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  byte *pbVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  byte *pbVar12;
  undefined2 uVar13;
  undefined2 unaff_DS;
  bool bVar14;
  int iStack_78;
  uint uStack_24;
  int iStack_20;
  undefined1 local_1a [6];
  undefined2 uStack_14;
  undefined2 uStack_12;
  uint uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined1 *puStack_a;
  
  FUN_10bf_02c0();
  puStack_a = (undefined1 *)0x10bf;
  uStack_c = 0x135e;
  FUN_165c_0db8();
  uStack_c = 0x165c;
  for (iStack_20 = 0; uVar13 = uStack_c, iStack_20 < 0xe; iStack_20 = iStack_20 + 1) {
    puStack_a = local_1a;
    uVar13 = 0x10bf;
    uStack_e = 0x1384;
    iVar6 = FUN_10bf_2208();
    if (iVar6 == 0) break;
    uStack_c = uVar13;
  }
  uStack_e = 0x9d42;
  uStack_24 = -(*(int *)(iStack_20 * 8 + 0xf72) + 0x62be);
  for (iStack_78 = 0; iStack_78 < 0x50; iStack_78 = iStack_78 + 1) {
    if ((iStack_78 < 5) || ((*(byte *)(iStack_78 * 0x20 + -0x5d80) & 2) == 0)) {
      iVar6 = iStack_78 * 0x20;
      uVar7 = (uint)*(byte *)(iVar6 + -0x5d74);
      uVar9 = (uint)*(byte *)(iVar6 + -0x5d73);
      uStack_10 = (uint)*(byte *)(iVar6 + -0x5d72);
      puStack_a = (undefined1 *)*(int *)(uVar7 * 2 + 0xda0);
      if (uVar7 != uVar9) {
        puStack_a = (undefined1 *)((int)puStack_a + *(int *)(uVar9 * 2 + 0xda0));
      }
      if ((uVar7 != uStack_10) && (uStack_10 != uVar9)) {
        puStack_a = (undefined1 *)((int)puStack_a + *(int *)(uStack_10 * 2 + 0xda0));
      }
      if (uStack_24 < (int)puStack_a + 0x20U) {
        iVar6 = 0;
        iStack_20 = iStack_78;
        while (iStack_20 = iStack_20 + -1, iStack_20 != 0) {
          puStack_a = (undefined1 *)iStack_78;
          uStack_e = 0x1457;
          uStack_c = uVar13;
          iVar8 = FUN_2134_024c();
          if (iVar8 != 0) {
            iVar6 = iVar6 + 1;
          }
        }
        if (iVar6 == 0) {
          iVar8 = iStack_78 * 0x20;
          uStack_14 = *(undefined2 *)(iVar8 + -0x5d7e);
          uStack_12 = *(undefined2 *)(iVar8 + -0x5d7c);
          uVar4 = *(undefined2 *)(iVar8 + -0x5d7a);
          uVar5 = *(undefined2 *)(iVar8 + -0x5d78);
          puVar11 = (undefined2 *)(iVar8 + -0x5d80);
          puVar10 = (undefined2 *)0xfe4;
          for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
            puVar2 = puVar11;
            puVar11 = puVar11 + 1;
            puVar1 = puVar10;
            puVar10 = puVar10 + 1;
            *puVar2 = *puVar1;
          }
          *(undefined2 *)(iVar8 + -0x5d7e) = uStack_14;
          *(undefined2 *)(iVar8 + -0x5d7c) = uStack_12;
          *(undefined2 *)(iVar8 + -0x5d7a) = uVar4;
          *(undefined2 *)(iVar8 + -0x5d78) = uVar5;
        }
        else {
          uStack_c = 0x14c4;
          puStack_a = (undefined1 *)uVar13;
          iVar6 = FUN_239c_0086();
          iStack_20 = iStack_78;
          do {
            do {
              iStack_20 = iStack_20 + -1;
              puStack_a = (undefined1 *)iStack_78;
              uStack_c = 0x239c;
              uStack_e = 0x14e1;
              iVar8 = FUN_2134_024c();
            } while (iVar8 == 0);
            bVar14 = iVar6 != 0;
            iVar6 = iVar6 + -1;
          } while (bVar14);
          iVar8 = iStack_78 * 0x20;
          uStack_14 = *(undefined2 *)(iVar8 + -0x5d7e);
          uStack_12 = *(undefined2 *)(iVar8 + -0x5d7c);
          uVar13 = *(undefined2 *)(iVar8 + -0x5d7a);
          uVar4 = *(undefined2 *)(iVar8 + -0x5d78);
          puVar11 = (undefined2 *)(iStack_20 * 0x20 + -0x5d80);
          pbVar12 = (byte *)(iVar8 + -0x5d80);
          for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
            pbVar3 = pbVar12;
            pbVar12 = pbVar12 + 2;
            puVar1 = puVar11;
            puVar11 = puVar11 + 1;
            *(undefined2 *)pbVar3 = *puVar1;
          }
          *(undefined2 *)(iVar8 + -0x5d7e) = uStack_14;
          *(undefined2 *)(iVar8 + -0x5d7c) = uStack_12;
          *(undefined2 *)(iVar8 + -0x5d7a) = uVar13;
          *(undefined2 *)(iVar8 + -0x5d78) = uVar4;
          pbVar3 = (byte *)(iVar8 + -0x5d80);
          *pbVar3 = *pbVar3 & 8;
          uVar13 = 0x239c;
        }
      }
      else {
        for (iStack_20 = 0; iStack_20 < 3; iStack_20 = iStack_20 + 1) {
          *(undefined2 *)((uint)*(byte *)(iStack_20 + iStack_78 * 0x20 + -0x5d74) * 2 + 0xda0) = 0;
        }
        uStack_24 = uStack_24 - (int)puStack_a;
      }
    }
  }
  return;
}
