/* GS2.GS2 1926:020f undefined FUN_1926_020f(void) */
uint __cdecl16far FUN_1926_020f(void)

{
  byte *pbVar1;
  undefined1 *puVar2;
  byte bVar3;
  undefined1 *puVar4;
  code *pcVar5;
  uint uVar6;
  byte bVar7;
  uint in_CX;
  undefined1 *puVar8;
  byte bVar9;
  int iVar10;
  byte *unaff_SI;
  byte *pbVar11;
  byte *pbVar12;
  undefined1 *puVar13;
  undefined2 unaff_DS;
  undefined1 uVar14;
  bool bVar15;
  undefined4 uVar16;
  undefined2 uVar17;
  
  while( true ) {
    pbVar1 = unaff_SI;
    unaff_SI = unaff_SI + 1;
    bVar9 = *pbVar1;
    iVar10 = 0x244;
    uVar17 = 0x244;
    if (bVar9 == 0) {
      return in_CX;
    }
    if (bVar9 == 0x43) {
      FUN_1926_0312();
      uVar6 = FUN_1926_03b9();
      return uVar6;
    }
    if (bVar9 == 0x45) break;
    if (bVar9 == 0x50) {
      pcVar5 = (code *)swi(0x21);
      uVar16 = (*pcVar5)();
      puVar8 = (undefined1 *)((ulong)uVar16 >> 0x10);
      uVar6 = (uint)uVar16;
      bVar15 = (byte)uVar16 < 3;
      if (((!bVar15) && (uVar6 = FUN_1926_0350(), !bVar15)) && (iVar10 != -1)) {
        puVar13 = (undefined1 *)0x0;
        for (iVar10 = iVar10 - (int)puVar8; iVar10 != 0; iVar10 = iVar10 + -1) {
          puVar4 = puVar13;
          puVar13 = puVar13 + 1;
          puVar2 = puVar8;
          puVar8 = puVar8 + 1;
          *puVar4 = *puVar2;
        }
        uVar6 = FUN_1926_03b9();
        return uVar6;
      }
      return uVar6;
    }
    uVar14 = bVar9 < 0x41;
    if (bVar9 == 0x41) {
      do {
        uVar6 = FUN_1926_03e5(uVar17);
        if ((bool)uVar14) {
          return uVar6;
        }
        uVar6 = FUN_1926_03b9();
      } while ((bool)uVar14);
      return uVar6;
    }
  }
  do {
    pbVar12 = unaff_SI;
    bVar9 = *pbVar12;
    bVar15 = false;
    if (bVar9 == 0) break;
    bVar15 = bVar9 < 0x2c;
    unaff_SI = pbVar12 + 1;
  } while (bVar9 != 0x2c);
  *pbVar12 = 0;
  FUN_1926_01b3();
  *pbVar12 = bVar9;
  if (bVar15) {
    return (uint)bVar9;
  }
  pbVar11 = (byte *)0x50;
  uVar6 = in_CX;
  do {
    bVar9 = (byte)pbVar12;
    pbVar12 = (byte *)0x0;
    while( true ) {
      pbVar1 = pbVar11;
      pbVar11 = pbVar11 + 1;
      bVar3 = *pbVar1;
      bVar7 = (byte)(uVar6 >> 8);
      uVar6 = CONCAT11(bVar7,bVar3);
      if ((bVar3 == 0) || (bVar3 == 0x3b)) break;
      pbVar1 = pbVar12;
      pbVar12 = pbVar12 + 1;
      *pbVar1 = bVar3;
      uVar6 = (uint)bVar3 << 8;
    }
    if (pbVar12 != (byte *)0x0) {
      bVar15 = bVar7 < 0x5c;
      if ((bVar7 != 0x5c) && (bVar15 = bVar7 < 0x3a, bVar7 != 0x3a)) {
        *pbVar12 = 0x5c;
      }
      bVar9 = bVar3;
      uVar6 = FUN_1926_03b9();
      if (!bVar15) {
        return uVar6;
      }
    }
    pbVar12 = (byte *)(uint)bVar9;
    if (bVar9 == 0) {
      return uVar6;
    }
  } while( true );
}
