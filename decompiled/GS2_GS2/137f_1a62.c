/* GS2.GS2 137f:1a62 undefined FUN_137f_1a62(void) */
undefined2 __cdecl16near FUN_137f_1a62(void)

{
  char cVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined2 in_AX;
  uint uVar4;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  undefined2 *puVar9;
  int iVar10;
  char *unaff_BP;
  byte *unaff_DI;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined4 uVar11;
  
  *(undefined2 *)0x1954 = in_AX;
  bVar8 = *unaff_DI;
  cVar1 = *unaff_BP;
  uVar4 = CONCAT11(cVar1 + '\x01',bVar8);
  *(uint *)0x18dc = uVar4;
  if ((bVar8 & 0xc0) != 0) {
    uVar4 = CONCAT11(cVar1 + '\x01',bVar8 - 0x40);
  }
  *(uint *)0x1959 = uVar4 & 0xff;
  puVar9 = (undefined2 *)(((uVar4 & 0xff) * 2 + *(int *)0x1959) * 4 + *(int *)0x1954);
  uVar5 = puVar9[1];
  uVar2 = puVar9[3];
  uVar4 = puVar9[5];
  if ((int)uVar4 < *(int *)0x1950) {
    bVar8 = unaff_DI[1];
    if ((bVar8 & 0xc0) != 0) {
      bVar8 = bVar8 - 0x40;
    }
    *(uint *)0x1959 = (uint)bVar8;
    iVar10 = ((uint)bVar8 * 2 + *(int *)0x1959) * 4 + *(int *)0x1954;
    if (*(int *)(iVar10 + 10) < *(int *)0x1950) {
      return 0;
    }
    uVar11 = FUN_137f_1ea8(*(undefined2 *)0x1950,*(undefined2 *)(iVar10 + 2),
                           *(undefined2 *)(iVar10 + 6),*(undefined2 *)(iVar10 + 10),uVar5,uVar2,
                           uVar4);
    *(undefined2 *)0x18d0 = 0;
    *(undefined2 *)0x18d2 = uVar5;
    *(undefined2 *)0x18d4 = 0;
    *(undefined2 *)0x18d6 = (int)((ulong)uVar11 >> 0x10);
    *(undefined2 *)0x18d8 = 0;
    *(undefined2 *)0x18da = (int)uVar11;
  }
  else {
    if (*(int *)0x1952 < (int)uVar4) {
      return 0;
    }
    *(undefined2 *)0x18d2 = uVar5;
    *(undefined2 *)0x18d6 = uVar2;
    uVar7 = puVar9[4];
    if (*(byte *)0x44 != 0) {
      uVar6 = (uint)*(byte *)0x44;
      do {
        uVar3 = uVar4 & 1;
        uVar4 = (int)uVar4 >> 1;
        uVar7 = uVar7 >> 1 | (uint)(uVar3 != 0) << 0xf;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      if ((int)uVar4 < *(int *)0x1950) {
        uVar4 = *(uint *)0x1950;
        uVar7 = 0;
      }
    }
    *(uint *)0x18da = uVar4;
    *(uint *)0x18d8 = uVar7;
    *(undefined2 *)0x18d0 = *puVar9;
    *(undefined2 *)0x18d4 = puVar9[2];
    *(uint *)(*unaff_DI + 0x2a8) = *(uint *)(*unaff_DI + 0x2a8) | 1;
  }
  bVar8 = unaff_DI[1];
  cVar1 = unaff_BP[1];
  uVar4 = CONCAT11(cVar1 + '\x01',bVar8);
  *(uint *)0x18ea = uVar4;
  if ((bVar8 & 0xc0) != 0) {
    uVar4 = CONCAT11(cVar1 + '\x01',bVar8 - 0x40);
  }
  *(uint *)0x1959 = uVar4 & 0xff;
  puVar9 = (undefined2 *)(((uVar4 & 0xff) * 2 + *(int *)0x1959) * 4 + *(int *)0x1954);
  uVar5 = puVar9[1];
  uVar2 = puVar9[3];
  uVar4 = puVar9[5];
  if ((int)uVar4 < *(int *)0x1950) {
    bVar8 = *unaff_DI;
    if ((bVar8 & 0xc0) != 0) {
      bVar8 = bVar8 - 0x40;
    }
    *(uint *)0x1959 = (uint)bVar8;
    iVar10 = ((uint)bVar8 * 2 + *(int *)0x1959) * 4 + *(int *)0x1954;
    if (*(int *)(iVar10 + 10) < *(int *)0x1950) {
      return 0;
    }
    uVar11 = FUN_137f_1ea8(*(undefined2 *)0x1950,*(undefined2 *)(iVar10 + 2),
                           *(undefined2 *)(iVar10 + 6),*(undefined2 *)(iVar10 + 10),uVar5,uVar2,
                           uVar4);
    *(undefined2 *)0x18de = 0;
    *(undefined2 *)0x18e0 = uVar5;
    *(undefined2 *)0x18e2 = 0;
    *(undefined2 *)0x18e4 = (int)((ulong)uVar11 >> 0x10);
    *(undefined2 *)0x18e6 = 0;
    *(undefined2 *)0x18e8 = (int)uVar11;
  }
  else {
    if (*(int *)0x1952 < (int)uVar4) {
      return 0;
    }
    *(undefined2 *)0x18e0 = uVar5;
    *(undefined2 *)0x18e4 = uVar2;
    uVar7 = puVar9[4];
    if (*(byte *)0x44 != 0) {
      uVar6 = (uint)*(byte *)0x44;
      do {
        uVar3 = uVar4 & 1;
        uVar4 = (int)uVar4 >> 1;
        uVar7 = uVar7 >> 1 | (uint)(uVar3 != 0) << 0xf;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      if ((int)uVar4 < *(int *)0x1950) {
        uVar4 = *(uint *)0x1950;
        uVar7 = 0;
      }
    }
    *(uint *)0x18e8 = uVar4;
    *(uint *)0x18e6 = uVar7;
    *(undefined2 *)0x18de = *puVar9;
    *(undefined2 *)0x18e2 = puVar9[2];
    *(uint *)(unaff_DI[1] + 0x2a8) = *(uint *)(unaff_DI[1] + 0x2a8) | 1;
  }
  return 1;
}
