/* GS.GS2 10bf:4431 undefined FUN_10bf_4431(void) */
undefined4 __cdecl16near FUN_10bf_4431(void)

{
  undefined2 *puVar1;
  char *pcVar2;
  undefined2 *puVar3;
  long lVar4;
  char cVar5;
  char *pcVar6;
  uint uVar7;
  byte bVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined2 uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  undefined2 *unaff_SI;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  undefined2 *puVar27;
  char *pcVar28;
  undefined2 unaff_DS;
  undefined1 uVar29;
  bool bVar30;
  bool bVar31;
  
  puVar27 = (undefined2 *)0x6f02;
  for (iVar10 = 4; iVar10 != 0; iVar10 = iVar10 + -1) {
    puVar3 = puVar27;
    puVar27 = puVar27 + 1;
    puVar1 = unaff_SI;
    unaff_SI = unaff_SI + 1;
    *puVar3 = *puVar1;
  }
  uVar7 = *(uint *)0x6f08;
  *(byte *)0x6f09 = *(byte *)0x6f09 & 0x7f;
  uVar16 = 0x20;
  if (((uVar7 & 0x7ff0) != 0) && ((int)uVar7 < 0)) {
    uVar16 = 0x2d;
  }
  FUN_10bf_43d5(uVar16);
  if ((*(byte *)0x6f09 & 0x80) == 0) {
    *(undefined1 *)0x6f0e = 1;
    *(undefined1 *)0x6f0f = 0x30;
    return 1;
  }
  lVar4 = (ulong)(*(int *)0x6f0a + 0x3ffeU) * 0x4d10 +
          (ulong)((*(int *)0x6f0a + 0x3ffeU >> 8) * 0x4d);
  uVar11 = (uint)lVar4;
  uVar7 = (uint)*(byte *)0x6f09 * 0x9a;
  iVar10 = ((int)((ulong)lVar4 >> 0x10) + (uint)CARRY2(uVar11,uVar7) + -0x1343) -
           (uint)(uVar11 + uVar7 < 0x12f4);
  uVar29 = iVar10 != 0;
  FUN_10bf_4697();
  FUN_10bf_43ac();
  if (!(bool)uVar29) {
    iVar10 = iVar10 + 1;
    FUN_10bf_4531();
  }
  uVar7 = *(uint *)0x6f02;
  uVar11 = *(uint *)0x6f04;
  uVar14 = *(uint *)0x6f06;
  uVar17 = *(uint *)0x6f08;
  bVar8 = 0;
  for (iVar12 = -*(int *)0x6f0a; iVar12 != 0; iVar12 = iVar12 + -1) {
    uVar23 = uVar17 & 1;
    uVar17 = uVar17 >> 1;
    uVar20 = uVar14 & 1;
    uVar14 = uVar14 >> 1 | (uint)(uVar23 != 0) << 0xf;
    uVar23 = uVar11 & 1;
    uVar11 = uVar11 >> 1 | (uint)(uVar20 != 0) << 0xf;
    uVar20 = uVar7 & 1;
    uVar7 = uVar7 >> 1 | (uint)(uVar23 != 0) << 0xf;
    bVar8 = bVar8 >> 1 | (uVar20 != 0) << 7;
  }
  bVar9 = bVar8 + 0x56;
  uVar23 = uVar7 + 0x39a + (uint)(0xa9 < bVar8);
  uVar7 = (uint)(0xfc65 < uVar7 || CARRY2(uVar7 + 0x39a,(uint)(0xa9 < bVar8)));
  uVar20 = uVar11 + uVar7;
  uVar7 = (uint)CARRY2(uVar11,uVar7);
  uVar11 = uVar14 + uVar7;
  uVar17 = uVar17 + CARRY2(uVar14,uVar7);
  iVar12 = 0x10;
  pcVar6 = (char *)0x6f0f;
  do {
    pcVar28 = pcVar6;
    iVar13 = iVar12;
    uVar24 = uVar23 << 1 | (uint)((int)((uint)bVar9 << 8) < 0);
    uVar14 = uVar20 << 1 | (uint)((int)uVar23 < 0);
    uVar7 = uVar11 << 1 | (uint)((int)uVar20 < 0);
    bVar30 = (int)uVar17 < 0;
    uVar18 = uVar17 << 1 | (uint)((int)uVar11 < 0);
    uVar25 = uVar24 << 1 | (uint)((char)(bVar9 * '\x02') < '\0');
    uVar21 = uVar14 << 1 | (uint)((int)uVar24 < 0);
    uVar15 = uVar7 << 1 | (uint)((int)uVar14 < 0);
    uVar24 = uVar18 << 1 | (uint)((int)uVar7 < 0);
    cVar5 = bVar9 * '\x05';
    uVar7 = (uint)CARRY1(bVar9 * '\x04',bVar9);
    uVar14 = uVar25 + uVar23;
    iVar26 = uVar14 + uVar7;
    uVar7 = (uint)(CARRY2(uVar25,uVar23) || CARRY2(uVar14,uVar7));
    uVar14 = uVar21 + uVar20;
    iVar22 = uVar14 + uVar7;
    uVar7 = (uint)(CARRY2(uVar21,uVar20) || CARRY2(uVar14,uVar7));
    uVar14 = uVar15 + uVar11;
    iVar12 = uVar14 + uVar7;
    uVar7 = (uint)(CARRY2(uVar15,uVar11) || CARRY2(uVar14,uVar7));
    bVar31 = CARRY2(uVar24,uVar17);
    uVar24 = uVar24 + uVar17;
    iVar19 = uVar24 + uVar7;
    bVar9 = bVar9 * '\n';
    uVar23 = iVar26 * 2 | (uint)(cVar5 < '\0');
    uVar20 = iVar22 * 2 | (uint)(iVar26 < 0);
    uVar11 = iVar12 * 2 | (uint)(iVar22 < 0);
    uVar17 = iVar19 * 2 | (uint)(iVar12 < 0);
    *pcVar28 = (((bVar30 << 1 | (int)uVar18 < 0) + (bVar31 || CARRY2(uVar24,uVar7))) * '\x02' |
               iVar19 < 0) + 0x30;
    iVar12 = iVar13 + -1;
    pcVar6 = pcVar28 + 1;
  } while (iVar12 != 0);
  iVar13 = iVar13 + -2;
  do {
    if (iVar13 == 0) break;
    iVar13 = iVar13 + -1;
    pcVar2 = pcVar28;
    pcVar28 = pcVar28 + -1;
  } while (*pcVar2 == '0');
  *(char *)0x6f0e = (char)iVar13 + '\x12';
  return CONCAT22(iVar10,1);
}
