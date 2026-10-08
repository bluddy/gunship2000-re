/* GS.GS2 28d4:0099 undefined FUN_28d4_0099(void) */
undefined2 __cdecl16far FUN_28d4_0099(void)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined2 *puVar3;
  int *piVar4;
  code *pcVar5;
  int iVar6;
  int *piVar7;
  byte bVar8;
  char cVar9;
  undefined2 in_AX;
  uint uVar10;
  undefined2 uVar11;
  char extraout_AH;
  char extraout_AH_00;
  char extraout_AH_01;
  uint uVar12;
  byte extraout_AH_02;
  char extraout_AH_03;
  int iVar13;
  uint in_CX;
  uint extraout_DX;
  int extraout_DX_00;
  undefined2 extraout_DX_01;
  uint *in_BX;
  code *pcVar14;
  uint uVar15;
  uint uVar16;
  byte *pbVar17;
  byte *pbVar18;
  undefined2 *puVar19;
  uint unaff_ES;
  undefined1 uVar20;
  bool bVar21;
  undefined1 uVar22;
  undefined4 uVar23;
  uint uVar24;
  uint uVar25;
  
  DAT_28d4_002c = FUN_28d4_1510();
  DAT_28d4_0007 = 0;
  DAT_28d4_0095 = (uint *)CONCAT22(unaff_ES,in_BX);
  DAT_28d4_006e = DAT_28d4_002c * 8;
  in_BX = in_BX + 1;
  uVar24 = *DAT_28d4_0095;
  uVar20 = false;
  uVar22 = uVar24 == 0;
  if ((bool)uVar22) {
    DAT_28d4_0007 = 0;
    DAT_28d4_002a = in_CX;
    return in_AX;
  }
  uVar12 = uVar24 & 0xff00;
  DAT_28d4_002a = in_CX;
  DAT_28d4_005e = uVar24;
  uVar24 = unaff_ES;
  uVar16 = unaff_ES;
  uVar10 = FUN_28d4_1294(unaff_ES,in_BX,unaff_ES);
  if ((bool)uVar20) {
LAB_28d4_0100:
    pcVar5 = (code *)swi(0x21);
    (*pcVar5)();
    pbVar18 = (byte *)0xa;
    pbVar17 = (byte *)0x1e;
    in_CX = 8;
    do {
      if (in_CX == 0) break;
      in_CX = in_CX - 1;
      pbVar2 = pbVar18;
      pbVar18 = pbVar18 + 1;
      pbVar1 = pbVar17;
      pbVar17 = pbVar17 + 1;
      uVar20 = *pbVar1 < *pbVar2;
      uVar22 = *pbVar1 == *pbVar2;
    } while ((bool)uVar22);
    if (!(bool)uVar22) goto LAB_28d4_0120;
    pcVar5 = (code *)swi(0x67);
    uVar11 = (*pcVar5)();
    if ((char)((uint)uVar11 >> 8) != '\0') {
      uVar11 = FUN_28d4_0be1();
      return uVar11;
    }
    uVar20 = (byte)uVar11 < 0x32;
    if ((bool)uVar20) goto LAB_28d4_0120;
    pcVar5 = (code *)swi(0x67);
    (*pcVar5)();
    uVar20 = 0;
    if (extraout_AH != '\0') goto LAB_28d4_0120;
    pcVar5 = (code *)swi(0x67);
    DAT_28d4_0044 = uVar12;
    (*pcVar5)();
    if (extraout_AH_00 != '\0') {
      uVar11 = FUN_28d4_0be1();
      return uVar11;
    }
    in_CX = 4;
    DAT_28d4_0032 = uVar12 << 4;
    uVar20 = 0;
    if (DAT_28d4_0032 != 0) {
      uVar12 = 0;
      pcVar5 = (code *)swi(0x67);
      (*pcVar5)();
      uVar20 = 0;
      if (extraout_AH_01 == '\0') {
        pcVar5 = (code *)swi(0x67);
        (*pcVar5)();
      }
      else {
        DAT_28d4_0032 = 0;
      }
    }
  }
  else {
    uVar20 = 0;
    uVar22 = (uVar10 & 1) == 0;
    if ((bool)uVar22) goto LAB_28d4_0100;
    uVar20 = 0;
    uVar22 = uVar12 == 0;
    if (!(bool)uVar22) goto LAB_28d4_0100;
LAB_28d4_0120:
    DAT_28d4_0032 = 0;
  }
  pcVar14 = (code *)(uVar12 & 0xff00);
  uVar12 = FUN_28d4_1294(uVar24,in_BX,uVar16);
  if ((((bool)uVar20) || ((uVar12 & 1) == 0)) || (pcVar14 != (code *)0x0)) {
    pcVar5 = (code *)swi(0x21);
    bVar8 = (*pcVar5)();
    if (bVar8 < 3) goto LAB_28d4_01ba;
    pcVar5 = (code *)swi(0x2f);
    cVar9 = (*pcVar5)();
    if (cVar9 != -0x80) goto LAB_28d4_01ba;
    pcVar5 = (code *)swi(0x2f);
    (*pcVar5)();
    uVar24 = 0x28d4;
    uVar11 = 0x8ef4;
    DAT_28d4_007a = pcVar14;
    DAT_28d4_007c = unaff_ES;
    (*pcVar14)(0x28d4,in_CX);
    if (extraout_AH_02 < 2) goto LAB_28d4_01ba;
    if (DAT_28d4_0032 != 0) {
      uVar11 = 4;
      pcVar5 = (code *)swi(0x67);
      (*pcVar5)();
      uVar24 = extraout_DX;
    }
    uVar12 = 0;
    uVar16 = (*DAT_28d4_007a)(0x28d4,uVar11);
    if (DAT_28d4_0032 != 0) {
      pcVar5 = (code *)swi(0x67);
      uVar24 = uVar16;
      (*pcVar5)();
      uVar16 = uVar12;
    }
    DAT_28d4_0034 = uVar16;
    DAT_28d4_0036 = (*DAT_28d4_007a)(0x28d4);
    if (DAT_28d4_0034 != 0) {
      iVar13 = (*DAT_28d4_007a)(0x28d4);
      if (iVar13 == 0) {
        DAT_28d4_0034 = 0;
        DAT_28d4_0036 = 0;
      }
      else {
        (*DAT_28d4_007a)(0x28d4);
      }
    }
  }
  else {
LAB_28d4_01ba:
    DAT_28d4_0034 = 0;
    DAT_28d4_0036 = 0;
  }
  if (DAT_28d4_0008 == '\0') {
    FUN_28d4_0cd6();
    FUN_28d4_0d20();
    FUN_28d4_0ce9();
    uVar12 = DAT_28d4_002a;
    iVar13 = -1;
    pcVar5 = (code *)swi(0x21);
    (*pcVar5)();
    DAT_28d4_0028 = uVar12 + iVar13;
    if (DAT_28d4_0028 == *(int *)0x2) {
      uVar12 = (DAT_28d4_0028 - extraout_DX_00) - 1;
    }
    else {
      pcVar5 = (code *)swi(0x21);
      (*pcVar5)();
      DAT_28d4_0009 = '\x01';
      uVar12 = 0xffff;
      pcVar5 = (code *)swi(0x21);
      (*pcVar5)();
    }
  }
  else {
    uVar12 = 0xffff;
    pcVar5 = (code *)swi(0x21);
    (*pcVar5)();
  }
  uVar15 = 0;
  uVar16 = DAT_28d4_002a;
  DAT_28d4_0030 = uVar12;
  uVar11 = DAT_28d4_0036;
  uVar10 = DAT_28d4_0034;
  uVar25 = DAT_28d4_0032;
  DAT_28d4_002e = FUN_28d4_0e05();
  FUN_28d4_0575();
  if (uVar16 == 0) {
    uVar24 = (int)((uVar15 & 0xfffe) * 0x400 - DAT_28d4_006e) >> 1;
    if ((int)uVar24 < 1) {
      DAT_28d4_0030 = uVar12;
      DAT_28d4_0032 = uVar25;
      DAT_28d4_0034 = uVar10;
      DAT_28d4_0036 = uVar11;
      return in_AX;
    }
    if (uVar24 <= uVar15 >> 1) {
      DAT_28d4_0030 = uVar12;
      DAT_28d4_0032 = uVar25;
      DAT_28d4_0034 = uVar10;
      DAT_28d4_0036 = uVar11;
      return in_AX;
    }
    uVar24 = (uint)((ulong)DAT_28d4_0095 >> 0x10);
    uVar16 = DAT_28d4_002a;
    DAT_28d4_0030 = uVar12;
    DAT_28d4_0032 = uVar25;
    DAT_28d4_0034 = uVar10;
    DAT_28d4_0036 = uVar11;
    DAT_28d4_002e = FUN_28d4_0e05();
    FUN_28d4_0575();
    if (uVar16 == 0) {
      return in_AX;
    }
  }
  uVar12 = uVar16 + DAT_28d4_002e >> 1;
  DAT_28d4_0060 = uVar12;
  if (DAT_28d4_0082 == '\0') {
    uVar24 = 0x28d4;
    FUN_28d4_1535();
    FUN_28d4_1535();
    DAT_28d4_0082 = -1;
  }
  DAT_28d4_0062 = 0;
  uVar16 = DAT_28d4_0034;
  if (DAT_28d4_0032 != 0) {
    uVar12 = DAT_28d4_0032 >> 1;
    if (DAT_28d4_002e != 0) {
      uVar12 = uVar12 + 7;
    }
    DAT_28d4_0038 = uVar12 & 0xfff8;
    uVar12 = 3;
    pcVar5 = (code *)swi(0x67);
    (*pcVar5)();
    if (extraout_AH_03 != '\0') {
      uVar11 = FUN_28d4_0be1();
      return uVar11;
    }
    DAT_28d4_003a = 0x3e;
    DAT_28d4_003c = 0x28d4;
    DAT_28d4_000a = 0xff;
    DAT_28d4_0062 = DAT_28d4_0062 + DAT_28d4_0038;
    uVar16 = DAT_28d4_0034;
    DAT_28d4_003e = extraout_DX_01;
  }
  while (DAT_28d4_0034 = uVar16, DAT_28d4_0034 != 0) {
    uVar16 = DAT_28d4_0034 + DAT_28d4_002e >> 1;
    DAT_28d4_0046 = uVar16;
    uVar23 = (*(code *)*(undefined2 *)0x7a)(0x28d4,uVar12);
    if ((int)uVar23 == 1) {
      DAT_28d4_000b = 0xff;
      DAT_28d4_0048 = 0x4c;
      DAT_28d4_004a = 0x28d4;
      DAT_28d4_0062 = DAT_28d4_0062 + DAT_28d4_0046;
      DAT_28d4_004c = (int)((ulong)uVar23 >> 0x10);
      break;
    }
    uVar10 = (*(code *)*(undefined2 *)0x7a)(0x28d4,uVar12,uVar16,(int)uVar23);
    uVar16 = uVar10 & 0xfffe;
    if (DAT_28d4_0034 <= (uVar10 & 0xfffe)) {
      uVar11 = FUN_28d4_0bf8();
      return uVar11;
    }
  }
  uVar24 = DAT_28d4_002a;
  if (DAT_28d4_0030 != 0) {
    uVar12 = DAT_28d4_0030;
    if (DAT_28d4_002e != 0) {
      uVar12 = DAT_28d4_0030 + 0x7f;
    }
    DAT_28d4_0052 = uVar12 >> 7;
    bVar21 = false;
    if ((DAT_28d4_0008 == '\0') && (bVar21 = false, DAT_28d4_0009 == '\0')) {
      uVar12 = (DAT_28d4_0028 + DAT_28d4_0052 * -0x80) - 1;
      bVar21 = uVar12 < DAT_28d4_002a;
      iVar13 = uVar12 - DAT_28d4_002a;
      pcVar5 = (code *)swi(0x21);
      (*pcVar5)();
      if (bVar21) {
        uVar11 = FUN_28d4_0c0f();
        return uVar11;
      }
      bVar21 = iVar13 + DAT_28d4_002a < *(uint *)0x2;
      if (bVar21) {
        *(uint *)0x2 = iVar13 + DAT_28d4_002a;
      }
    }
    pcVar5 = (code *)swi(0x21);
    uVar11 = (*pcVar5)();
    if (bVar21) {
      uVar11 = FUN_28d4_0c0f();
      return uVar11;
    }
    DAT_28d4_000c = 0xff;
    DAT_28d4_0054 = 0x58;
    DAT_28d4_0056 = 0x28d4;
    DAT_28d4_0062 = DAT_28d4_0062 + DAT_28d4_0052;
    DAT_28d4_0058 = uVar11;
  }
  FUN_28d4_0591();
  if (DAT_28d4_0052 < DAT_28d4_0066) {
    if (DAT_28d4_0038 < DAT_28d4_0066) goto LAB_28d4_0501;
    DAT_28d4_000d = 0x45;
  }
  else {
    DAT_28d4_000d = 0x43;
  }
  if (DAT_28d4_0062 - DAT_28d4_0066 != 0 && (int)DAT_28d4_0066 <= DAT_28d4_0062) {
    DAT_28d4_0072 = 0;
    DAT_28d4_0074 = 0;
    DAT_28d4_0060 = DAT_28d4_0062 - DAT_28d4_0066;
    FUN_28d4_05de();
    uVar11 = DAT_28d4_006a;
    puVar19 = DAT_28d4_006c;
    for (uVar24 = DAT_28d4_006e >> 1; uVar24 != 0; uVar24 = uVar24 - 1) {
      puVar3 = puVar19;
      puVar19 = puVar19 + 1;
      *puVar3 = 0;
    }
    iVar13 = 2;
    DAT_28d4_0076 = 1;
    piVar7 = DAT_28d4_0070;
    iVar6 = DAT_28d4_0060;
    while (iVar6 = iVar6 + -1, iVar6 != 0) {
      piVar4 = piVar7;
      piVar7 = piVar7 + 1;
      *piVar4 = iVar13;
      iVar13 = iVar13 + 1;
    }
    *piVar7 = 0;
    DAT_28d4_0064 = DAT_28d4_0060;
    DAT_28d4_0007 = 0xff;
    FUN_28d4_070c();
    return in_AX;
  }
LAB_28d4_0501:
  FUN_28d4_0665();
  return in_AX;
}
