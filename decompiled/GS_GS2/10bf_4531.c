/* GS.GS2 10bf:4531 undefined FUN_10bf_4531(void) */
void __cdecl16near FUN_10bf_4531(void)

{
  uint *puVar1;
  uint uVar2;
  undefined2 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int in_BX;
  uint *puVar15;
  uint *puVar16;
  int *unaff_SI;
  uint *puVar17;
  undefined2 *puVar18;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  bool bVar19;
  bool bVar20;
  
  puVar18 = (undefined2 *)0x6f20;
  for (iVar11 = 8; iVar11 != 0; iVar11 = iVar11 + -1) {
    puVar3 = puVar18;
    puVar18 = puVar18 + 1;
    *puVar3 = 0;
  }
  unaff_SI[4] = unaff_SI[4] + *(int *)(in_BX + 8);
  iVar11 = 7;
  puVar15 = (uint *)0x6f20;
  do {
    puVar16 = puVar15;
    bVar7 = (byte)(4 - iVar11);
    iVar8 = (int)(char)('\x04' - (bVar7 + ((byte)((uint)(4 - iVar11) >> 8) & bVar7) * -2));
    puVar15 = (uint *)(((in_BX - iVar8) - iVar11) + 8);
    puVar17 = (uint *)((int)unaff_SI + (iVar8 - iVar11) + 6);
    do {
      uVar13 = (uint)((ulong)*puVar17 * (ulong)*puVar15 >> 0x10);
      uVar9 = (uint)((ulong)*puVar17 * (ulong)*puVar15);
      puVar1 = puVar16;
      uVar2 = *puVar1;
      *puVar1 = *puVar1 + uVar9;
      puVar1 = puVar16 + 1;
      uVar9 = (uint)CARRY2(uVar2,uVar9);
      uVar2 = *puVar1;
      uVar12 = *puVar1 + uVar13;
      *puVar1 = uVar12 + uVar9;
      puVar16[2] = puVar16[2] + (uint)(CARRY2(uVar2,uVar13) || CARRY2(uVar12,uVar9));
      puVar17 = puVar17 + -1;
      puVar15 = puVar15 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    iVar11 = iVar11 + -1;
    puVar15 = puVar16 + 1;
  } while (iVar11 != 0);
  uVar9 = puVar16[-6] | puVar16[-5] | puVar16[-4];
  uVar2 = puVar16[-3];
  uVar14 = CONCAT11((char)(uVar2 >> 8),(byte)uVar2 | (byte)uVar9 | (byte)(uVar9 >> 8));
  uVar9 = puVar16[-2];
  uVar12 = puVar16[-1];
  uVar13 = *puVar16;
  uVar10 = puVar16[1];
  if (-1 < (int)uVar10) {
    unaff_SI[4] = unaff_SI[4] + -1;
    uVar14 = uVar14 << 1;
    bVar19 = (int)uVar9 < 0;
    uVar9 = uVar9 << 1 | (uint)((int)uVar2 < 0);
    bVar20 = (int)uVar12 < 0;
    uVar12 = uVar12 << 1 | (uint)bVar19;
    bVar19 = (int)uVar13 < 0;
    uVar13 = uVar13 << 1 | (uint)bVar20;
    uVar10 = uVar10 << 1 | (uint)bVar19;
  }
  uVar2 = (uint)(0x8000 < (uVar14 | uVar9 & 1));
  uVar14 = (uint)CARRY2(uVar9,uVar2);
  uVar4 = (uint)CARRY2(uVar12,uVar14);
  uVar5 = (uint)CARRY2(uVar13,uVar4);
  uVar6 = (uint)CARRY2(uVar10,uVar5);
  unaff_SI[4] = unaff_SI[4] + uVar6;
  *unaff_SI = uVar9 + uVar2;
  unaff_SI[1] = uVar12 + uVar14;
  unaff_SI[2] = uVar13 + uVar4;
  unaff_SI[3] = uVar10 + uVar5 | (uint)(uVar6 != 0) << 0xf;
  return;
}
