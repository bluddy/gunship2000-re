/* GS.GS2 27d1:04e4 undefined FUN_27d1_04e4(void) */
undefined4 __cdecl16near FUN_27d1_04e4(void)

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
  bool bVar12;
  undefined4 uVar13;
  ulong uVar14;
  
  pbVar9 = unaff_SI + 1;
  pcVar8 = in_DX;
  if (*(int *)0xb9e != 0) {
    in_BX = *(int *)0xba0;
    if (pbVar9 == (byte *)*(undefined2 *)0xb9e) goto LAB_27d1_05ef;
    pcVar4 = (code *)swi(0x21);
    (*pcVar4)();
    pcVar8 = extraout_DX;
  }
  *(undefined2 *)0xb9e = pbVar9;
  bVar11 = false;
  if ((*unaff_SI & 1) != 0) {
    pcVar4 = (code *)swi(0x21);
    uVar5 = (*pcVar4)();
    if (bVar11) {
      uVar13 = FUN_27d1_0b2a();
      return uVar13;
    }
    *(undefined2 *)0xba0 = uVar5;
    goto LAB_27d1_05ef;
  }
  if ((*(uint *)0xd21 & 0x80) == 0) {
    iVar7 = 0x80;
    do {
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pbVar3 = pbVar9;
      pbVar9 = pbVar9 + 1;
    } while (*pbVar3 != 0);
    if (((*(uint *)(pbVar9 + -3) | 0x2020) != 0x6578) ||
       (bVar11 = (*(uint *)(pbVar9 + -5) | 0x2000) < 0x652e,
       (*(uint *)(pbVar9 + -5) | 0x2000) != 0x652e)) goto LAB_27d1_058d;
    DAT_27d1_0d09 = DAT_27d1_0b9e;
    FUN_28d4_1884();
    if (bVar11) goto LAB_27d1_058d;
    bVar11 = in_BX != -1;
    pcVar10 = DAT_27d1_0b9e;
    if (in_BX == -1) {
      do {
        pcVar1 = pcVar8;
        pcVar8 = pcVar8 + 1;
        cVar2 = *pcVar1;
        *pcVar10 = cVar2;
        pcVar10 = pcVar10 + 1;
      } while (cVar2 != '\0');
      goto LAB_27d1_058d;
    }
    pcVar4 = (code *)swi(0x21);
    uVar14 = (*pcVar4)();
    if (bVar11) goto LAB_27d1_058d;
  }
  else {
LAB_27d1_058d:
    bVar11 = false;
    unaff_DS = 0x288c;
    bVar12 = false;
    uVar6 = FUN_28d4_173e();
    if (bVar11) {
      uVar13 = FUN_27d1_0b2a();
      return uVar13;
    }
    if (!bVar12) {
      DAT_27d1_0d09 = DAT_27d1_0b9e;
    }
    uVar14 = (ulong)uVar6;
  }
  pcVar10 = DAT_27d1_0b9e;
  pcVar8 = (char *)(uVar14 >> 0x10);
  DAT_27d1_0ba0 = (undefined2)uVar14;
  DAT_27d1_0b9e[-1] = DAT_27d1_0b9e[-1] | 1;
  do {
    pcVar1 = pcVar8;
    pcVar8 = pcVar8 + 1;
    cVar2 = *pcVar1;
    pcVar1 = pcVar10;
    pcVar10 = pcVar10 + 1;
    *pcVar1 = cVar2;
  } while (cVar2 != '\0');
LAB_27d1_05ef:
  return CONCAT22(in_DX,in_AX);
}
