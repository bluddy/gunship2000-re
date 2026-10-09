/* GS2.GS2 2000:e356 undefined FUN_2000_e356(void) */
void __cdecl16far FUN_2000_e356(int param_1,uint param_2,uint param_3)

{
  char *pcVar1;
  undefined2 uVar2;
  char *pcVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  undefined1 *puVar13;
  undefined2 unaff_DS;
  bool bVar14;
  
  uVar2 = *(undefined2 *)0x18cc;
  out(0x3ce,0x205);
  out(0x3ce,8);
  pcVar12 = (char *)0x34;
  if (param_2 == 0x8000) {
    pcVar12 = (char *)0x14fc;
  }
  uVar9 = param_1 + 0xe000U >> 8;
  pcVar10 = (char *)(uVar9 + 0x1621);
  iVar8 = uVar9 - 0x7f;
  if (uVar9 < 0x7f) {
    iVar8 = 0;
  }
  iVar6 = 0x10;
  do {
    iVar7 = 0x81 - iVar8;
    bVar4 = 0x80;
    pcVar3 = pcVar10;
    do {
      pcVar11 = pcVar3;
      if (*pcVar11 != '\0') {
        out(0x3cf,bVar4);
        *pcVar12 = *pcVar11;
      }
      bVar14 = (bool)(bVar4 & 1);
      bVar4 = bVar4 >> 1 | bVar14 << 7;
      if (bVar14) {
        pcVar12 = pcVar12 + 1;
      }
      iVar7 = iVar7 + -1;
      pcVar3 = pcVar11 + 1;
    } while (iVar7 != 0);
    if (iVar8 != 0) {
      pcVar11 = pcVar11 + -0xff;
      iVar7 = iVar8;
      do {
        pcVar1 = pcVar11;
        pcVar11 = pcVar11 + 1;
        if (*pcVar1 != '\0') {
          out(0x3cf,bVar4);
          *pcVar12 = *pcVar1;
        }
        bVar14 = (bool)(bVar4 & 1);
        bVar4 = bVar4 >> 1 | bVar14 << 7;
        if (bVar14) {
          pcVar12 = pcVar12 + 1;
        }
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    pcVar10 = pcVar10 + 0x100;
    pcVar12 = pcVar12 + 0x18;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  out(0x3cf,0x80);
  puVar13 = (undefined1 *)0x64;
  iVar8 = 0xc;
  do {
    *puVar13 = 2;
    puVar13 = puVar13 + 0x28;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  if (param_2 != 0x8000) {
    pcVar12 = (char *)0x29ab;
    pcVar10 = (char *)0x2d0;
    iVar8 = 0x41;
    do {
      iVar6 = 0x10;
      bVar4 = 0x40;
      do {
        pcVar1 = pcVar12;
        pcVar12 = pcVar12 + 1;
        if (*pcVar1 != '\0') {
          out(0x3cf,bVar4);
          *pcVar10 = *pcVar1;
        }
        bVar14 = (bool)(bVar4 & 1);
        bVar4 = bVar4 >> 1 | bVar14 << 7;
        if (bVar14) {
          pcVar10 = pcVar10 + 1;
        }
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      pcVar10 = pcVar10 + 0x26;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    uVar9 = 0;
    pcVar12 = (char *)0x3e6;
    if ((param_2 <= param_3) && (uVar9 = param_3 - param_2 >> 2, 0x40 < uVar9)) {
      uVar9 = 0x40;
    }
    pcVar10 = (char *)((-param_2 >> 1 & 0x1e) * 3 + 0x2721);
    bVar4 = 0x80;
    iVar8 = 0x40 - uVar9;
    if (iVar8 != 0 && uVar9 < 0x41) {
      do {
        iVar6 = 6;
        do {
          pcVar1 = pcVar10;
          pcVar10 = pcVar10 + 1;
          if (*pcVar1 != '\0') {
            out(0x3cf,bVar4);
            *pcVar12 = *pcVar1;
          }
          bVar5 = bVar4 >> 1;
          bVar4 = bVar5 | bVar4 << 7;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        bVar4 = (byte)(bVar4 >> 1 | bVar5 << 7) >> 1 | (bVar4 >> 1) << 7;
        pcVar12 = pcVar12 + 0x28;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    for (; uVar9 != 0; uVar9 = uVar9 - 1) {
      iVar8 = 6;
      do {
        pcVar1 = pcVar10;
        pcVar10 = pcVar10 + 1;
        if (*pcVar1 != '\0') {
          out(0x3cf,bVar4);
          *pcVar12 = *pcVar1;
        }
        bVar5 = bVar4 >> 1;
        bVar4 = bVar5 | bVar4 << 7;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      out(0x3cf,bVar4);
      *pcVar12 = '\f';
      bVar5 = bVar4 >> 1 | bVar5 << 7;
      out(0x3cf,bVar5);
      *pcVar12 = '\x04';
      bVar4 = bVar5 >> 1 | (bVar4 >> 1) << 7;
      pcVar12 = pcVar12 + 0x28;
    }
    pcVar12 = (char *)0x2901;
    pcVar10 = (char *)0x667;
    iVar8 = 0x20;
    do {
      iVar6 = 5;
      bVar4 = 0x80;
      do {
        pcVar1 = pcVar12;
        pcVar12 = pcVar12 + 1;
        if (*pcVar1 != '\0') {
          out(0x3cf,bVar4);
          *pcVar10 = *pcVar1;
        }
        bVar4 = bVar4 >> 1 | bVar4 << 7;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      pcVar10 = pcVar10 + 0x28;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    return;
  }
  return;
}
