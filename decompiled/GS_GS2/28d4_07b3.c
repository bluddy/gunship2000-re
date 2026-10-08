/* GS.GS2 28d4:07b3 undefined FUN_28d4_07b3(void) */
undefined2 __cdecl16far FUN_28d4_07b3(void)

{
  uint uVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined2 in_AX;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint in_CX;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  uint *puVar11;
  byte bVar12;
  bool bVar13;
  byte in_AF;
  bool bVar14;
  bool bVar15;
  byte in_TF;
  byte in_IF;
  bool bVar16;
  byte in_NT;
  
  if (DAT_28d4_0007 == '\0') {
    return in_AX;
  }
  iVar4 = FUN_28d4_05de();
  uVar2 = DAT_28d4_006a;
  piVar9 = (int *)((iVar4 + -1) * 8 + DAT_28d4_006c);
  if (*piVar9 == 0) {
    piVar9[1] = in_CX;
    uVar5 = in_CX / 0x80;
    if (in_CX % 0x80 != 0) {
      uVar5 = uVar5 + 1;
    }
    bVar16 = SBORROW2(uVar5,DAT_28d4_0060);
    uVar1 = uVar5 - DAT_28d4_0060;
    bVar15 = (int)uVar1 < 0;
    bVar14 = uVar1 == 0;
    bVar13 = (POPCOUNT(uVar1 & 0xff) & 1U) == 0;
    if (uVar5 < DAT_28d4_0060 || bVar14) {
      while (DAT_28d4_0064 < uVar5) {
        puVar11 = (uint *)((DAT_28d4_0074 + -1) * 8 + DAT_28d4_006c);
        FUN_28d4_092f();
        uVar1 = *puVar11;
        *puVar11 = 0;
        puVar11[1] = 0;
        uVar6 = DAT_28d4_0076;
        uVar10 = 0;
        while (uVar8 = uVar1, uVar8 != 0) {
          uVar1 = *(uint *)((uVar8 - 1) * 2 + DAT_28d4_0070);
          uVar3 = uVar6;
          while ((uVar6 = uVar3, uVar6 != 0 && (uVar6 <= uVar8))) {
            uVar10 = uVar6;
            uVar3 = *(uint *)((uVar6 - 1) * 2 + DAT_28d4_0070);
          }
          uVar3 = uVar8;
          if (uVar10 != 0) {
            *(uint *)((uVar10 - 1) * 2 + DAT_28d4_0070) = uVar8;
            uVar3 = DAT_28d4_0076;
          }
          DAT_28d4_0076 = uVar3;
          *(uint *)((uVar8 - 1) * 2 + DAT_28d4_0070) = uVar6;
          DAT_28d4_0064 = DAT_28d4_0064 + 1;
          uVar10 = uVar8;
        }
      }
      puVar11 = (uint *)((iVar4 + -1) * 8 + DAT_28d4_006c);
      uVar5 = DAT_28d4_0076;
      for (; in_CX != 0; in_CX = in_CX - iVar7) {
        uVar1 = *(uint *)((uVar5 - 1) * 2 + DAT_28d4_0070);
        *puVar11 = uVar5;
        puVar11 = (uint *)((uVar5 - 1) * 2 + DAT_28d4_0070);
        iVar7 = FUN_28d4_09ba(in_CX,puVar11,uVar5,iVar4);
        DAT_28d4_0064 = DAT_28d4_0064 - 1;
        uVar5 = uVar1;
      }
      DAT_28d4_0076 = uVar5;
      *puVar11 = 0;
      FUN_28d4_0984();
      bVar12 = 0;
      bVar16 = false;
      bVar15 = false;
      bVar14 = true;
      bVar13 = true;
    }
    else {
      bVar12 = 1;
    }
  }
  else {
    FUN_28d4_092f();
    FUN_28d4_0984();
    bVar12 = 0;
    bVar16 = false;
    bVar15 = false;
    bVar14 = false;
    bVar13 = false;
  }
  FUN_28d4_070c((uint)(in_NT & 1) * 0x4000 | (uint)bVar16 * 0x800 | (uint)(in_IF & 1) * 0x200 |
                (uint)(in_TF & 1) * 0x100 | (uint)bVar15 * 0x80 | (uint)bVar14 * 0x40 |
                (uint)(in_AF & 1) * 0x10 | (uint)bVar13 * 4 | (uint)bVar12);
  return in_AX;
}
