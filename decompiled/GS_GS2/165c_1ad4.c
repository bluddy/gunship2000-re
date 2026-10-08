/* GS.GS2 165c:1ad4 undefined FUN_165c_1ad4(void) */
void __cdecl16far FUN_165c_1ad4(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  byte *pbVar3;
  int *piVar4;
  uint uVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  int *piVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  int unaff_SS;
  undefined2 unaff_DS;
  bool bVar14;
  byte local_92 [2];
  int iStack_90;
  int iStack_8e;
  int iStack_8c;
  int iStack_8a;
  char cStack_88;
  undefined1 uStack_87;
  int iStack_72;
  int local_70 [16];
  int iStack_50;
  uint uStack_4e;
  int iStack_4c;
  int iStack_4a;
  undefined2 local_44;
  undefined2 uStack_42;
  undefined2 uStack_40;
  undefined2 uStack_3e;
  undefined1 uStack_3c;
  int iStack_3a;
  undefined2 local_38 [15];
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined1 uStack_16;
  byte bStack_15;
  byte bStack_14;
  byte bStack_13;
  undefined1 uStack_12;
  undefined1 uStack_11;
  undefined2 uStack_10;
  int iStack_e;
  int *piStack_c;
  
  FUN_10bf_02c0();
  if (-1 < *(char *)0xe279) {
    *(undefined1 *)(*(char *)0xe279 * 0x20 + -0x5d76) = 7;
    *(undefined2 *)0xadda = 0;
    *(undefined2 *)0xadd8 = 0;
    *(undefined2 *)0xacb4 = 0;
    *(undefined2 *)0xacb2 = 0;
    return;
  }
  *(undefined2 *)0x7a38 = 0;
  *(undefined2 *)0x7a36 = 0;
  iStack_72 = 0;
  puVar6 = (undefined2 *)(*(int *)0xa276 * 0x27 + *(int *)0xb860);
  uVar13 = *(undefined2 *)0xb862;
  puVar7 = local_38;
  for (iVar8 = 0x13; iVar8 != 0; iVar8 = iVar8 + -1) {
    puVar2 = puVar7;
    puVar7 = puVar7 + 1;
    puVar1 = puVar6;
    puVar6 = puVar6 + 1;
    *puVar2 = *puVar1;
  }
  *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
  *(undefined2 *)0xacb4 = 0;
  *(undefined2 *)0xacb2 = 0;
  if ((bStack_14 & 2) == 0) {
    if ((bStack_14 & 1) == 0) {
      uStack_4e = 0;
    }
    else {
      uStack_4e = 4;
    }
  }
  else {
    uStack_4e = 8;
  }
  if (uStack_4e == 0) {
    if ((CONCAT11(uStack_12,bStack_13) & 0x820) == 0 && (bStack_15 & 0x80) == 0) {
      if ((bStack_13 & 0x10) != 0) {
        *(char *)0xe27e = *(char *)0xe27e + '\x01';
      }
    }
    else {
      for (iStack_4a = 0; iStack_4a < 0x14; iStack_4a = iStack_4a + 1) {
        piStack_c = (int *)0x10bf;
        iStack_e = 0x8333;
        iStack_4c = FUN_165c_1888();
        if (iStack_4c == 0) break;
      }
      if (iStack_4c == 0) {
        iVar8 = *(int *)0xb8e2;
        *(int *)0x1d0 = iVar8;
        *(int *)0x1d2 = iVar8 >> 0xf;
        *(int *)0xb8e2 = *(int *)0xb8e2 + 1;
        iVar8 = *(int *)0xaca4;
        *(undefined1 *)(iVar8 + -0x4794) = *(undefined1 *)0xa276;
        puVar6 = (undefined2 *)(iVar8 * 0x20 + -0x5d80);
        *(int *)0xaca4 = *(int *)0xaca4 + 1;
        puVar7 = (undefined2 *)0x1ca;
        for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
          puVar2 = puVar6;
          puVar6 = puVar6 + 1;
          puVar1 = puVar7;
          puVar7 = puVar7 + 1;
          *puVar2 = *puVar1;
        }
        *(undefined2 *)0xa27e = 0;
        *(undefined2 *)0xa27c = 0;
        *(undefined2 *)0xaca2 = 0;
        *(undefined2 *)0xaca0 = 0;
        iStack_72 = 1;
      }
      else {
        *(undefined2 *)0xacb4 = 0;
        *(undefined2 *)0xacb2 = 0;
      }
    }
  }
  else {
    iStack_3a = 99;
    iStack_50 = 0;
    iVar8 = unaff_SS;
    for (iStack_4a = 0; iStack_4a < *(int *)0xb8c0; iStack_4a = iStack_4a + 1) {
      iVar9 = iStack_4a * 9 + *(int *)0xb858;
      uVar13 = *(undefined2 *)0xb85a;
      if ((uStack_4e & (int)*(char *)(iVar9 + 8)) != 0) {
        uVar12 = *(undefined2 *)(iVar9 + 2);
        while ((iStack_4a < *(int *)0xb8c0 &&
               ((*(byte *)(*(int *)0xb858 + iStack_4a * 9 + 8) & 0x40) == 0))) {
          iStack_4a = iStack_4a + 1;
        }
        puVar7 = (undefined2 *)(iStack_4a * 9 + *(int *)0xb858);
        iVar8 = puVar7[2];
        piStack_c = (int *)puVar7[1];
        uStack_10 = *puVar7;
        uStack_12 = (undefined1)uStack_10;
        uStack_11 = (undefined1)((uint)uStack_10 >> 8);
        bStack_14 = (byte)uVar12;
        bStack_13 = (byte)((uint)uVar12 >> 8);
        uStack_16 = (undefined1)puVar7[3];
        bStack_15 = (byte)((uint)puVar7[3] >> 8);
        uStack_18 = 0x10bf;
        uStack_1a = 0x81d2;
        iStack_e = uStack_10;
        iVar9 = FUN_165c_19d8();
        if (iVar9 < iStack_3a) {
          iStack_3a = iVar9;
          iVar8 = iStack_50;
        }
        iStack_50 = iStack_50 + 1;
      }
    }
    if (iStack_50 != 0) {
      iStack_50 = iVar8;
      for (iStack_4a = 0; iStack_4a < *(int *)0xb8c0; iStack_4a = iStack_4a + 1) {
        uVar13 = (undefined2)((ulong)*(undefined4 *)0xb858 >> 0x10);
        iVar8 = (int)*(undefined4 *)0xb858;
        if (((uStack_4e & (int)*(char *)(iVar8 + iStack_4a * 9 + 8)) != 0) &&
           (iVar9 = iStack_50 + -1, bVar14 = iStack_50 == 0, iStack_50 = iVar9, bVar14)) {
          *(undefined1 *)(iVar8 + iStack_4a * 9 + 8) = 0;
          do {
            puVar7 = (undefined2 *)(iStack_4a * 9 + *(int *)0xb858);
            uVar13 = *(undefined2 *)0xb85a;
            local_44 = *puVar7;
            uStack_42 = puVar7[1];
            uStack_40 = puVar7[2];
            uStack_3e = puVar7[3];
            uStack_3c = *(undefined1 *)(puVar7 + 4);
            piStack_c = (int *)0x826b;
            FUN_165c_1064();
            iVar8 = iStack_4a + 1;
            iVar9 = iStack_4a * 9;
            uVar13 = (undefined2)((ulong)*(undefined4 *)0xb858 >> 0x10);
            iStack_4a = iVar8;
          } while ((*(byte *)((int)*(undefined4 *)0xb858 + iVar9 + 8) & 0x40) == 0);
          iVar9 = iVar8 * 9 + *(int *)0xb858;
          uVar12 = *(undefined2 *)(iVar9 + -7);
          *(undefined2 *)0xacb2 = *(undefined2 *)(iVar9 + -9);
          *(undefined2 *)0xacb4 = uVar12;
          uVar12 = *(undefined2 *)(iVar9 + -3);
          *(undefined2 *)0xadd8 = *(undefined2 *)(iVar9 + -5);
          *(undefined2 *)0xadda = uVar12;
          iVar9 = *(int *)0xb8e2;
          *(int *)0x1d0 = iVar9;
          *(int *)0x1d2 = iVar9 >> 0xf;
          *(int *)0xb8e2 = *(int *)0xb8e2 + 1;
          iVar9 = *(int *)0xaca4;
          *(undefined1 *)(iVar9 + -0x4794) = *(undefined1 *)0xa276;
          puVar6 = (undefined2 *)(iVar9 * 0x20 + -0x5d80);
          *(int *)0xaca4 = *(int *)0xaca4 + 1;
          puVar7 = (undefined2 *)0x1ca;
          for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
            puVar2 = puVar6;
            puVar6 = puVar6 + 1;
            puVar1 = puVar7;
            puVar7 = puVar7 + 1;
            *puVar2 = *puVar1;
          }
          iStack_72 = 1;
          *(undefined2 *)0xa27e = 0;
          *(undefined2 *)0xa27c = 0;
          *(undefined2 *)0xaca2 = 0;
          *(undefined2 *)0xaca0 = 0;
          break;
        }
      }
    }
  }
  piStack_c = local_70;
  iStack_e = 0x10bf;
  uVar13 = 0x10bf;
  uStack_10 = 0x83b3;
  FUN_10bf_2c3a();
  local_70[0] = -1;
  iStack_4a = 0;
  while( true ) {
    if (*(int *)0xb8ca <= iStack_4a) {
      return;
    }
    if ((uint)*(byte *)(iStack_4a * 8 + (int)*(undefined4 *)0xb85c) ==
        *(uint *)((int)*(undefined4 *)0xb860 + *(int *)0xa276 * 0x27 + 0x19)) break;
    iStack_4a = iStack_4a + 1;
  }
  iStack_4c = 1;
  while (uVar12 = (undefined2)((ulong)*(undefined4 *)0xb85c >> 0x10),
        *(char *)((iStack_4c + iStack_4a) * 8 + (int)*(undefined4 *)0xb85c) == -1) {
    iStack_4c = iStack_4c + 1;
  }
  if ((*(byte *)(*(int *)0xb85c + iStack_4a * 8 + 2) & 2) != 0) {
    uVar13 = 0x239c;
    piStack_c = (int *)0x842b;
    iVar8 = FUN_239c_0086();
    iStack_4a = iStack_4a + iVar8;
    iStack_4c = 1;
  }
  while( true ) {
    if (iStack_4c < 1) {
      return;
    }
    piStack_c = (int *)0x845a;
    puVar7 = (undefined2 *)FUN_165c_10d6();
    pbVar10 = local_92;
    for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
      pbVar3 = pbVar10;
      pbVar10 = pbVar10 + 2;
      puVar1 = puVar7;
      puVar7 = puVar7 + 1;
      *(undefined2 *)pbVar3 = *puVar1;
    }
    if (((bStack_14 & 0xc0) != 0) && (*(char *)0xad1b != '\0')) {
      cStack_88 = '\x17';
    }
    iVar8 = iStack_4a * 8 + *(int *)0xb85c;
    uVar12 = *(undefined2 *)0xb85e;
    uVar5 = *(uint *)(iVar8 + 4);
    iStack_90 = uVar5 + *(uint *)0xa27c;
    iStack_8e = ((int)uVar5 >> 0xf) + *(int *)0xa27e + (uint)CARRY2(uVar5,*(uint *)0xa27c);
    uVar5 = *(uint *)(iVar8 + 6);
    iStack_8c = uVar5 + *(uint *)0xaca0;
    iStack_8a = ((int)uVar5 >> 0xf) + *(int *)0xaca2 + (uint)CARRY2(uVar5,*(uint *)0xaca0);
    uStack_87 = *(undefined1 *)(iVar8 + 3);
    if (cStack_88 == '\x02') {
      *(char *)0xe280 = *(char *)0xe280 + '\x01';
    }
    if (iStack_72 != 0) {
      local_92[0] = local_92[0] | 9;
    }
    piStack_c = (int *)0x84db;
    FUN_165c_27b6();
    if (local_70[0] == -1) {
      piVar11 = local_70;
      pbVar10 = local_92;
      for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
        piVar4 = piVar11;
        piVar11 = piVar11 + 1;
        pbVar3 = pbVar10;
        pbVar10 = pbVar10 + 2;
        *piVar4 = *(int *)pbVar3;
      }
    }
    piStack_c = (int *)iStack_8e;
    iStack_e = iStack_90;
    uStack_12 = 8;
    uStack_11 = 0x85;
    uStack_10 = uVar13;
    FUN_165c_0c2a();
    iVar8 = *(int *)0xaca4;
    *(undefined1 *)(iVar8 + -0x4794) = *(undefined1 *)0xa276;
    puVar7 = (undefined2 *)(iVar8 * 0x20 + -0x5d80);
    *(int *)0xaca4 = *(int *)0xaca4 + 1;
    pbVar10 = local_92;
    for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
      puVar1 = puVar7;
      puVar7 = puVar7 + 1;
      pbVar3 = pbVar10;
      pbVar10 = pbVar10 + 2;
      *puVar1 = *(undefined2 *)pbVar3;
    }
    if (0x4f < *(int *)0xaca4) break;
    iStack_4c = iStack_4c + -1;
    iStack_4a = iStack_4a + 1;
  }
  return;
}
