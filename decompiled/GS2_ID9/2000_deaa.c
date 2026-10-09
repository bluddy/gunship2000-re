/* GS2.GS2 2000:deaa undefined FUN_2000_deaa(void) */
void __cdecl16far FUN_2000_deaa(int param_1,uint param_2,uint param_3)

{
  char *pcVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  undefined1 *puVar10;
  char *pcVar11;
  undefined2 unaff_DS;
  
  uVar2 = *(undefined2 *)0x18cc;
  pcVar9 = (char *)0x1a0;
  if (param_2 == 0x8000) {
    pcVar9 = (char *)0xa7e0;
  }
  uVar6 = param_1 + 0xe000U >> 8;
  pcVar7 = (char *)(uVar6 + 0x16e1);
  iVar5 = uVar6 - 0x7f;
  if (uVar6 < 0x7f) {
    iVar5 = 0;
  }
  iVar3 = 0x10;
  do {
    iVar4 = 0x81 - iVar5;
    pcVar11 = pcVar7;
    do {
      pcVar8 = pcVar11;
      if (*pcVar8 != '\0') {
        *pcVar9 = *pcVar8;
      }
      pcVar9 = pcVar9 + 1;
      iVar4 = iVar4 + -1;
      pcVar11 = pcVar8 + 1;
    } while (iVar4 != 0);
    if (iVar5 != 0) {
      pcVar8 = pcVar8 + -0xff;
      iVar4 = iVar5;
      do {
        pcVar1 = pcVar8;
        pcVar8 = pcVar8 + 1;
        if (*pcVar1 != '\0') {
          *pcVar9 = *pcVar1;
        }
        pcVar9 = pcVar9 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    pcVar7 = pcVar7 + 0x100;
    pcVar9 = pcVar9 + 0xbf;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if (param_2 != 0x8000) {
    puVar10 = (undefined1 *)0x320;
    iVar5 = 0xc;
    do {
      *puVar10 = 0x15;
      puVar10 = puVar10 + 0x140;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    pcVar9 = (char *)0x2961;
    pcVar7 = (char *)0x1682;
    iVar5 = 0x41;
    do {
      iVar3 = 0x10;
      do {
        pcVar11 = pcVar7;
        pcVar1 = pcVar9;
        pcVar9 = pcVar9 + 1;
        if (*pcVar1 != '\0') {
          *pcVar11 = *pcVar1;
        }
        iVar3 = iVar3 + -1;
        pcVar7 = pcVar11 + 1;
      } while (iVar3 != 0);
      pcVar7 = pcVar11 + 0x131;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    pcVar9 = (char *)0x1f2c;
    uVar6 = 0;
    if ((param_2 <= param_3) && (uVar6 = param_3 - param_2 >> 2, 0x40 < uVar6)) {
      uVar6 = 0x40;
    }
    pcVar7 = (char *)((-param_2 >> 1 & 0x1e) * 3 + 0x26e1);
    iVar5 = 0x40 - uVar6;
    if (iVar5 != 0 && uVar6 < 0x41) {
      do {
        iVar3 = 6;
        do {
          pcVar11 = pcVar9;
          pcVar1 = pcVar7;
          pcVar7 = pcVar7 + 1;
          if (*pcVar1 != '\0') {
            *pcVar11 = *pcVar1;
          }
          iVar3 = iVar3 + -1;
          pcVar9 = pcVar11 + 1;
        } while (iVar3 != 0);
        pcVar9 = pcVar11 + 0x13b;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      iVar5 = 6;
      do {
        pcVar11 = pcVar9;
        pcVar1 = pcVar7;
        pcVar7 = pcVar7 + 1;
        if (*pcVar1 != '\0') {
          *pcVar11 = *pcVar1;
        }
        iVar5 = iVar5 + -1;
        pcVar9 = pcVar11 + 1;
      } while (iVar5 != 0);
      pcVar1 = pcVar11 + 1;
      pcVar1[0] = '\f';
      pcVar1[1] = '\x04';
      pcVar9 = pcVar11 + 0x13b;
    }
    pcVar9 = (char *)0x28c1;
    pcVar7 = (char *)0x3334;
    iVar5 = 0x20;
    do {
      iVar3 = 5;
      do {
        pcVar11 = pcVar7;
        pcVar1 = pcVar9;
        pcVar9 = pcVar9 + 1;
        if (*pcVar1 != '\0') {
          *pcVar11 = *pcVar1;
        }
        iVar3 = iVar3 + -1;
        pcVar7 = pcVar11 + 1;
      } while (iVar3 != 0);
      pcVar7 = pcVar11 + 0x13c;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    return;
  }
  return;
}
