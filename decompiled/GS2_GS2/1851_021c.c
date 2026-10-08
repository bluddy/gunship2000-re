/* GS2.GS2 1851:021c undefined FUN_1851_021c(void) */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

int __cdecl16far FUN_1851_021c(void)

{
  code *pcVar1;
  int in_AX;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *in_BX;
  uint *puVar7;
  undefined2 *puVar8;
  undefined1 uVar9;
  bool bVar10;
  undefined4 uVar11;
  int iStack_18;
  
  if (in_AX == -1) {
    return -1;
  }
  uVar2 = FUN_1851_05a3();
  DAT_1851_09e0 = in_BX;
  if ((in_BX[4] == 0) || ((*(byte *)((int)in_BX + 7) & 2) != 0)) {
    uVar9 = false;
    goto LAB_1851_0404;
  }
  puVar7 = (uint *)0xb71;
  iVar4 = DAT_1851_0b6b;
  do {
    bVar10 = false;
    if ((*(byte *)((int)puVar7 + 7) & 2) != 0) {
      uVar3 = *puVar7 - *in_BX;
      if (*puVar7 < *in_BX) {
        bVar10 = -uVar3 < puVar7[4];
      }
      else {
        bVar10 = uVar3 < in_BX[4];
      }
    }
    if (bVar10) {
      bVar10 = iVar4 != DAT_1851_0b6b;
      iStack_18 = 0x1851;
      FUN_1851_01b2(uVar2);
      if (bVar10) {
        FUN_1926_000b();
        FUN_1926_000b();
        iVar4 = FUN_1851_09a4();
        return iVar4;
      }
    }
    puVar7 = puVar7 + 9;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  if ((DAT_1851_09db == '\0') || (bVar10 = false, (*(byte *)((int)in_BX + 7) & 0xc) == 0)) {
LAB_1851_02c8:
    iVar4 = -0x781a;
    FUN_1851_0429();
    uVar3 = in_BX[5];
    uVar6 = in_BX[2];
    pcVar1 = (code *)swi(0x21);
    uVar2 = DAT_1851_09e4;
    (*pcVar1)();
    uVar5 = DAT_1851_09e0[8];
    if ((*(byte *)((int)DAT_1851_09e0 + 7) & 0x20) == 0) {
      uVar3 = -((((uVar3 + 3 >> 2) + uVar6) - 1 & 0x7f) - 0xfff);
      while (uVar5 != 0) {
        if (uVar3 < uVar5) {
          uVar5 = uVar3;
        }
        bVar10 = false;
        pcVar1 = (code *)swi(0x21);
        (*pcVar1)(uVar5);
        if (bVar10) goto LAB_1851_0368;
        uVar3 = 0xf80;
        uVar5 = iStack_18 - iVar4;
      }
      FUN_1851_05b3();
    }
    else {
      iVar4 = func_0x00000000(0x1851,*DAT_1851_09e0,DAT_1851_09e0[4],uVar2);
      if (iVar4 != 0) {
LAB_1851_0368:
        iVar4 = FUN_1851_0984();
        return iVar4;
      }
    }
    uVar3 = DAT_1851_09e0[5];
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    while (uVar3 != 0) {
      uVar6 = uVar3;
      if (0x58 < uVar3) {
        uVar6 = 0x58;
      }
      uVar3 = uVar3 - uVar6;
      bVar10 = (int)(uVar6 << 1) < 0;
      iVar4 = uVar6 << 2;
      pcVar1 = (code *)swi(0x21);
      uVar11 = (*pcVar1)();
      puVar8 = (undefined2 *)((ulong)uVar11 >> 0x10);
      if ((bVar10) || ((int)uVar11 != iVar4)) goto LAB_1851_0368;
      uVar5 = DAT_1851_09de + 0x10;
      do {
        if (!CARRY2(uVar5,puVar8[1])) {
          *(int *)*puVar8 = *(int *)*puVar8 + uVar5;
        }
        puVar8 = puVar8 + 2;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
  }
  else {
    iStack_18 = 0x1851;
    FUN_1851_0d59();
    if (bVar10) goto LAB_1851_02c8;
  }
  *(byte *)((int)DAT_1851_09e0 + 7) = *(byte *)((int)DAT_1851_09e0 + 7) | 2;
  uVar9 = 0;
  FUN_1851_01b0();
LAB_1851_0404:
  if (((!(bool)uVar9) && (DAT_1851_0b48 != '\0')) && (DAT_1851_09e0[6] != 0xffff)) {
    FUN_1851_021c();
  }
  return in_AX;
}
