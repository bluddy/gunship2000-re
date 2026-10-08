/* GS2.GS2 137f:1c1a undefined FUN_137f_1c1a(void) */
void __cdecl16near FUN_137f_1c1a(void)

{
  undefined1 uVar1;
  char cVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined2 in_AX;
  uint uVar5;
  int in_CX;
  uint uVar6;
  undefined2 uVar7;
  uint uVar8;
  byte bVar9;
  undefined2 *puVar10;
  int iVar11;
  int iVar12;
  char *unaff_BP;
  undefined2 *puVar13;
  undefined2 *puVar14;
  undefined1 *unaff_DI;
  undefined1 *puVar15;
  byte *pbVar16;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined4 uVar17;
  
  *(undefined2 *)0x1954 = in_AX;
  uVar1 = *unaff_DI;
  puVar15 = unaff_DI + in_CX;
  *(undefined1 *)0x1958 = *puVar15;
  *puVar15 = uVar1;
  pbVar16 = puVar15 + -in_CX;
  *(undefined2 *)0x195b = 0;
  puVar13 = (undefined2 *)0x18d0;
  do {
    bVar9 = *pbVar16;
    cVar2 = *unaff_BP;
    uVar5 = CONCAT11(cVar2 + '\x01',bVar9);
    unaff_BP = unaff_BP + 1;
    puVar13[6] = uVar5;
    if ((bVar9 & 0xc0) != 0) {
      uVar5 = CONCAT11(cVar2 + '\x01',bVar9 - 0x40);
    }
    *(uint *)0x1959 = uVar5 & 0xff;
    puVar10 = (undefined2 *)(((uVar5 & 0xff) * 2 + *(int *)0x1959) * 4 + *(int *)0x1954);
    uVar7 = puVar10[1];
    uVar3 = puVar10[3];
    uVar5 = puVar10[5];
    puVar14 = puVar13;
    if ((int)uVar5 < *(int *)0x1950) {
      bVar9 = pbVar16[1];
      if ((bVar9 & 0xc0) != 0) {
        bVar9 = bVar9 - 0x40;
      }
      *(uint *)0x1959 = (uint)bVar9;
      iVar11 = ((uint)bVar9 * 2 + *(int *)0x1959) * 4 + *(int *)0x1954;
      if (*(int *)0x1950 <= *(int *)(iVar11 + 10)) {
        uVar17 = FUN_137f_1ea8(*(undefined2 *)0x1950,*(undefined2 *)(iVar11 + 2),
                               *(undefined2 *)(iVar11 + 6),*(undefined2 *)(iVar11 + 10),uVar7,uVar3,
                               uVar5);
        *puVar13 = 0;
        puVar13[1] = uVar7;
        puVar13[2] = 0;
        puVar13[3] = (int)((ulong)uVar17 >> 0x10);
        puVar13[4] = 0;
        puVar13[5] = (int)uVar17;
        puVar14 = puVar13 + 7;
        *(int *)0x195b = *(int *)0x195b + 1;
      }
    }
    else if (*(int *)0x1952 < (int)uVar5) {
      bVar9 = pbVar16[1];
      if ((bVar9 & 0xc0) != 0) {
        bVar9 = bVar9 - 0x40;
      }
      *(uint *)0x1959 = (uint)bVar9;
      iVar11 = ((uint)bVar9 * 2 + *(int *)0x1959) * 4 + *(int *)0x1954;
      if (*(int *)(iVar11 + 10) <= *(int *)0x1952) {
        uVar17 = FUN_137f_1ea8(*(undefined2 *)0x1952,*(undefined2 *)(iVar11 + 2),
                               *(undefined2 *)(iVar11 + 6),*(undefined2 *)(iVar11 + 10),uVar7,uVar3,
                               uVar5);
        *puVar13 = 0;
        puVar13[1] = uVar7;
        puVar13[2] = 0;
        puVar13[3] = (int)((ulong)uVar17 >> 0x10);
        puVar13[4] = 0;
        iVar11 = (int)uVar17 >> (*(byte *)0x44 & 0x1f);
        if (iVar11 < *(int *)0x1950) {
          iVar11 = *(int *)0x1950;
        }
        puVar13[5] = iVar11;
        *(int *)0x195b = *(int *)0x195b + 1;
        puVar14 = puVar13 + 7;
      }
    }
    else {
      puVar13[1] = uVar7;
      puVar13[3] = uVar3;
      uVar8 = puVar10[4];
      if (*(byte *)0x44 != 0) {
        uVar6 = (uint)*(byte *)0x44;
        do {
          uVar4 = uVar5 & 1;
          uVar5 = (int)uVar5 >> 1;
          uVar8 = uVar8 >> 1 | (uint)(uVar4 != 0) << 0xf;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
        if ((int)uVar5 < *(int *)0x1950) {
          uVar5 = *(uint *)0x1950;
          uVar8 = 0;
        }
      }
      puVar13[5] = uVar5;
      puVar13[4] = uVar8;
      *puVar13 = *puVar10;
      puVar13[2] = puVar10[2];
      puVar14 = puVar13 + 7;
      *(int *)0x195b = *(int *)0x195b + 1;
      *(uint *)(*pbVar16 + 0x2a8) = *(uint *)(*pbVar16 + 0x2a8) | 1;
      bVar9 = pbVar16[1];
      puVar13[0xd] = (uint)bVar9;
      if ((bVar9 & 0xc0) != 0) {
        bVar9 = bVar9 - 0x40;
      }
      *(uint *)0x1959 = (uint)bVar9;
      iVar11 = ((uint)bVar9 * 2 + *(int *)0x1959) * 4 + *(int *)0x1954;
      uVar7 = *(undefined2 *)(iVar11 + 2);
      uVar3 = *(undefined2 *)(iVar11 + 6);
      iVar11 = *(int *)(iVar11 + 10);
      if (iVar11 < *(int *)0x1950) {
        bVar9 = *pbVar16;
        if ((bVar9 & 0xc0) != 0) {
          bVar9 = bVar9 - 0x40;
        }
        *(uint *)0x1959 = (uint)bVar9;
        iVar12 = ((uint)bVar9 * 2 + *(int *)0x1959) * 4 + *(int *)0x1954;
        uVar17 = FUN_137f_1ea8(*(undefined2 *)0x1950,*(undefined2 *)(iVar12 + 2),
                               *(undefined2 *)(iVar12 + 6),*(undefined2 *)(iVar12 + 10),uVar7,uVar3,
                               iVar11);
        *puVar14 = 0;
        puVar13[8] = uVar7;
        puVar13[9] = 0;
        puVar13[10] = (int)((ulong)uVar17 >> 0x10);
        puVar13[0xb] = 0;
        puVar13[0xc] = (int)uVar17;
        *(int *)0x195b = *(int *)0x195b + 1;
        puVar14 = puVar13 + 0xe;
      }
      else if (*(int *)0x1952 < iVar11) {
        bVar9 = *pbVar16;
        if ((bVar9 & 0xc0) != 0) {
          bVar9 = bVar9 - 0x40;
        }
        *(uint *)0x1959 = (uint)bVar9;
        iVar12 = ((uint)bVar9 * 2 + *(int *)0x1959) * 4 + *(int *)0x1954;
        uVar17 = FUN_137f_1ea8(*(undefined2 *)0x1952,*(undefined2 *)(iVar12 + 2),
                               *(undefined2 *)(iVar12 + 6),*(undefined2 *)(iVar12 + 10),uVar7,uVar3,
                               iVar11);
        *puVar14 = 0;
        puVar13[8] = uVar7;
        puVar13[9] = 0;
        puVar13[10] = (int)((ulong)uVar17 >> 0x10);
        puVar13[0xb] = 0;
        iVar11 = (int)uVar17 >> (*(byte *)0x44 & 0x1f);
        if (iVar11 < *(int *)0x1950) {
          iVar11 = *(int *)0x1950;
        }
        puVar13[0xc] = iVar11;
        *(int *)0x195b = *(int *)0x195b + 1;
        puVar14 = puVar13 + 0xe;
      }
    }
    pbVar16 = pbVar16 + 1;
    in_CX = in_CX + -1;
    puVar13 = puVar14;
  } while (in_CX != 0);
  if (*(int *)0x195b != 0) {
    *puVar14 = *(undefined2 *)0x18d0;
    puVar14[1] = *(undefined2 *)0x18d2;
    puVar14[2] = *(undefined2 *)0x18d4;
    puVar14[3] = *(undefined2 *)0x18d6;
    puVar14[4] = *(undefined2 *)0x18d8;
    puVar14[5] = *(undefined2 *)0x18da;
    puVar14[6] = *(undefined2 *)0x18dc;
  }
  *puVar15 = *(undefined1 *)0x1958;
  return;
}
