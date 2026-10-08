/* GS.GS2 10bf:40b6 undefined FUN_10bf_40b6(void) */
uint __cdecl16near FUN_10bf_40b6(void)

{
  byte *pbVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined2 in_AX;
  uint uVar6;
  int in_CX;
  uint uVar7;
  uint uVar8;
  undefined2 in_DX;
  int in_BX;
  int iVar9;
  uint unaff_SI;
  uint uVar10;
  undefined2 unaff_DI;
  undefined2 unaff_DS;
  byte bVar11;
  char cVar12;
  char in_AF;
  bool bVar13;
  char cVar14;
  char cVar15;
  
  *(undefined2 *)0x6ee2 = unaff_DI;
  *(int *)0x6ee4 = in_CX + unaff_SI;
  *(undefined2 *)0x6eee = in_AX;
  *(undefined2 *)0x6ef0 = in_DX;
  bVar13 = true;
  *(undefined2 *)0x6ee8 = 0;
  *(undefined2 *)0x6ee6 = 0;
  *(undefined2 *)0x6eea = 0;
  uVar7 = 0;
  FUN_10bf_42a9();
  if (bVar13) {
    uVar7 = uVar7 | 0x8000;
  }
  uVar10 = unaff_SI;
  if (in_BX == 0) {
    *(undefined2 *)0x6eec = 10;
    FUN_10bf_41d0();
    iVar9 = 0;
    bVar13 = true;
    uVar6 = FUN_10bf_430a();
    if (!bVar13) {
      uVar10 = unaff_SI - 1;
      cVar12 = (char)uVar6;
      if (cVar12 == 'D') {
        uVar7 = uVar7 | 0xe;
      }
      else {
        if (cVar12 != 'E') {
          if ((*(char *)0x6edf == '\0') || (((cVar12 != '+' && (cVar12 != '-')) && (cVar12 != '-')))
             ) goto LAB_10bf_4131;
          uVar10 = unaff_SI - 2;
        }
        uVar7 = uVar7 | 0x402;
      }
      bVar11 = 0;
      *(undefined2 *)0x6eee = 0;
      uVar10 = uVar10 + 1;
      cVar15 = (int)uVar10 < 0;
      cVar14 = uVar10 == 0;
      cVar12 = (POPCOUNT(uVar10 & 0xff) & 1U) == 0;
      uVar2 = FUN_10bf_42a9();
      uVar6 = CONCAT11(cVar15 << 7 | cVar14 << 6 | in_AF << 4 | cVar12 << 2 | 2U | bVar11,uVar2);
      FUN_10bf_41ae();
      if ((uVar7 & 0x200) == 0) {
        uVar7 = uVar7 | 0x40;
      }
      if ((uVar6 & 0x4000) != 0) {
        iVar9 = -iVar9;
      }
    }
  }
  else {
    *(int *)0x6eec = in_BX;
    uVar2 = 0;
    iVar9 = 0;
    uVar6 = FUN_10bf_42b9();
    while (!(bool)uVar2) {
      uVar3 = FUN_10bf_42b9();
      if ((bool)uVar2) goto LAB_10bf_4071;
      uVar8 = (uint)((ulong)uVar6 * (ulong)*(uint *)0x6eec >> 0x10);
      uVar4 = (uint)((ulong)uVar6 * (ulong)*(uint *)0x6eec);
      uVar6 = (uint)((long)iVar9 * (long)*(int *)0x6eec);
      if (((int)((ulong)((long)iVar9 * (long)*(int *)0x6eec) >> 0x10) != 0) ||
         (uVar5 = uVar6 + uVar8, CARRY2(uVar6,uVar8))) break;
      uVar6 = uVar4 + uVar3;
      uVar3 = (uint)CARRY2(uVar4,uVar3);
      iVar9 = uVar5 + uVar3;
      uVar2 = CARRY2(uVar5,uVar3);
    }
    uVar7 = uVar7 | 0x70;
LAB_10bf_4071:
    uVar6 = FUN_10bf_4205();
    iVar9 = 0;
  }
LAB_10bf_4131:
  if ((*(int *)0x6eee != 0) || ((uVar7 & 0x1842) != 0)) {
    uVar7 = uVar7 | 0x30;
  }
  iVar9 = *(int *)0x6eee + iVar9 + *(int *)0x6eea;
  if ((uVar7 & 0x1000) == 0) {
    iVar9 = iVar9 - *(int *)0x6ef0;
  }
  uVar2 = iVar9 == 400;
  if (iVar9 < 0x191) {
    FUN_10bf_4697(uVar7,uVar10);
    iVar9 = *(int *)0x6ee2;
    *(undefined1 *)0x6f00 = 0;
    uVar6 = FUN_10bf_4336();
    if ((bool)uVar2) {
      uVar10 = *(uint *)0x6ef2;
      if (((uVar7 & 0x8000) != 0) && (uVar10 = -uVar10, (*(uint *)(iVar9 + 6) & 0x7ff0) != 0)) {
        pbVar1 = (byte *)(iVar9 + 7);
        *pbVar1 = *pbVar1 | 0x80;
      }
      return uVar10;
    }
  }
  return uVar6;
}
