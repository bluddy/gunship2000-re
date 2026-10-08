/* GS2.GS2 1851:0429 undefined FUN_1851_0429(void) */
undefined4 __cdecl16near FUN_1851_0429(void)

{
  char *pcVar1;
  char cVar2;
  byte *pbVar3;
  code *pcVar4;
  undefined2 in_AX;
  undefined2 uVar5;
  uint uVar6;
  int iVar7;
  char *in_DX;
  char *extraout_DX;
  char *pcVar8;
  int in_BX;
  byte *unaff_SI;
  byte *pbVar9;
  char *pcVar10;
  undefined2 unaff_DS;
  bool bVar11;
  undefined4 uVar12;
  ulong uVar13;
  
  pbVar9 = unaff_SI + 1;
  pcVar8 = in_DX;
  if (*(int *)0x9e2 != 0) {
    in_BX = *(int *)0x9e4;
    if (pbVar9 == (byte *)*(undefined2 *)0x9e2) goto LAB_1851_0520;
    pcVar4 = (code *)swi(0x21);
    (*pcVar4)();
    pcVar8 = extraout_DX;
  }
  *(undefined2 *)0x9e2 = pbVar9;
  bVar11 = false;
  if ((*unaff_SI & 1) != 0) {
    pcVar4 = (code *)swi(0x21);
    uVar5 = (*pcVar4)();
    if (bVar11) {
      uVar12 = FUN_1851_0984();
      return uVar12;
    }
    *(undefined2 *)0x9e4 = uVar5;
    goto LAB_1851_0520;
  }
  if ((*(uint *)0xb5f & 0x80) == 0) {
    iVar7 = 0x80;
    do {
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pbVar3 = pbVar9;
      pbVar9 = pbVar9 + 1;
    } while (*pbVar3 != 0);
    if ((((*(uint *)(pbVar9 + -3) | 0x2020) != 0x6578) ||
        (bVar11 = (*(uint *)(pbVar9 + -5) | 0x2000) < 0x652e,
        (*(uint *)(pbVar9 + -5) | 0x2000) != 0x652e)) || (FUN_1926_0350(), bVar11))
    goto LAB_1851_04ca;
    bVar11 = in_BX != -1;
    pcVar10 = DAT_1851_09e2;
    if (in_BX == -1) {
      do {
        pcVar1 = pcVar8;
        pcVar8 = pcVar8 + 1;
        cVar2 = *pcVar1;
        *pcVar10 = cVar2;
        pcVar10 = pcVar10 + 1;
      } while (cVar2 != '\0');
      goto LAB_1851_04ca;
    }
    pcVar4 = (code *)swi(0x21);
    uVar13 = (*pcVar4)();
    if (bVar11) goto LAB_1851_04ca;
  }
  else {
LAB_1851_04ca:
    bVar11 = false;
    unaff_DS = 0x18f0;
    uVar6 = FUN_1926_020f();
    if (bVar11) {
      uVar12 = FUN_1851_0984();
      return uVar12;
    }
    uVar13 = (ulong)uVar6;
  }
  pcVar10 = DAT_1851_09e2;
  pcVar8 = (char *)(uVar13 >> 0x10);
  DAT_1851_09e4 = (undefined2)uVar13;
  DAT_1851_09e2[-1] = DAT_1851_09e2[-1] | 1;
  do {
    pcVar1 = pcVar8;
    pcVar8 = pcVar8 + 1;
    cVar2 = *pcVar1;
    pcVar1 = pcVar10;
    pcVar10 = pcVar10 + 1;
    *pcVar1 = cVar2;
  } while (cVar2 != '\0');
LAB_1851_0520:
  return CONCAT22(in_DX,in_AX);
}
