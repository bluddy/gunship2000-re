/* GS.GS2 27d1:025c undefined FUN_27d1_025c(void) */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

int __cdecl16far FUN_27d1_025c(void)

{
  code *pcVar1;
  int in_AX;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint *in_BX;
  uint *puVar7;
  undefined2 *puVar8;
  uint uVar9;
  int unaff_ES;
  undefined1 uVar10;
  bool bVar11;
  undefined4 uVar12;
  int iStack_18;
  
  if (in_AX == -1) {
    return -1;
  }
  uVar2 = FUN_27d1_067b();
  DAT_27d1_0b9c = in_BX;
  if ((in_BX[4] == 0) || ((*(byte *)((int)in_BX + 7) & 2) != 0)) {
    uVar10 = false;
    goto LAB_27d1_04bf;
  }
  if ((DAT_27d1_0d0f & 1) != 0) {
    FUN_28d4_1446();
    iVar3 = FUN_27d1_0b4a();
    return iVar3;
  }
  puVar7 = (uint *)0xd33;
  iVar3 = DAT_27d1_0d2d;
  do {
    bVar11 = false;
    if ((*(byte *)((int)puVar7 + 7) & 2) != 0) {
      uVar4 = *puVar7 - *in_BX;
      if (*puVar7 < *in_BX) {
        bVar11 = -uVar4 < puVar7[4];
      }
      else {
        bVar11 = uVar4 < in_BX[4];
      }
    }
    if (bVar11) {
      bVar11 = iVar3 != DAT_27d1_0d2d;
      iStack_18 = 0x27d1;
      FUN_27d1_01f2(uVar2);
      if (bVar11) {
        FUN_28d4_1446();
        FUN_28d4_1446();
        iVar3 = FUN_27d1_0b4a();
        return iVar3;
      }
    }
    puVar7 = puVar7 + 9;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if ((DAT_27d1_0b96 == '\0') || (bVar11 = false, (*(byte *)((int)in_BX + 7) & 0xc) == 0)) {
LAB_27d1_0333:
    iVar3 = -0x7faf;
    FUN_27d1_04e4();
    iVar5 = (in_BX[5] + 3 >> 2) + in_BX[2];
    puVar7 = (uint *)in_BX[1];
    if ((*(byte *)((int)in_BX + 7) & 8) != 0) {
      puVar7 = (uint *)*puVar7;
      iVar3 = iVar5;
    }
    if ((int)puVar7 + 1U == DAT_27d1_0d09) {
      iStack_18 = iVar5;
      iVar3 = unaff_ES;
    }
    pcVar1 = (code *)swi(0x21);
    uVar2 = DAT_27d1_0ba0;
    (*pcVar1)();
    uVar4 = DAT_27d1_0b9c[8];
    if ((*(byte *)((int)DAT_27d1_0b9c + 7) & 0x20) == 0) {
      uVar9 = -((iVar5 - 1U & 0x7f) - 0xfff);
      while (uVar4 != 0) {
        if (uVar9 < uVar4) {
          uVar4 = uVar9;
        }
        bVar11 = false;
        pcVar1 = (code *)swi(0x21);
        (*pcVar1)(uVar4);
        if (bVar11) goto LAB_27d1_03f8;
        uVar9 = 0xf80;
        uVar4 = iStack_18 - iVar3;
      }
      FUN_27d1_068b();
    }
    else {
      iVar3 = func_0x00000000(0x27d1,*DAT_27d1_0b9c,DAT_27d1_0b9c[4],uVar2);
      if (iVar3 != 0) {
LAB_27d1_03f8:
        iVar3 = FUN_27d1_0b2a();
        return iVar3;
      }
    }
    uVar4 = DAT_27d1_0b9c[5];
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    while (uVar4 != 0) {
      uVar9 = uVar4;
      if (0x58 < uVar4) {
        uVar9 = 0x58;
      }
      uVar4 = uVar4 - uVar9;
      bVar11 = (int)(uVar9 << 1) < 0;
      iVar3 = uVar9 << 2;
      pcVar1 = (code *)swi(0x21);
      uVar12 = (*pcVar1)();
      puVar8 = (undefined2 *)((ulong)uVar12 >> 0x10);
      if ((bVar11) || ((int)uVar12 != iVar3)) goto LAB_27d1_03f8;
      uVar6 = DAT_27d1_0b98 + 0x10;
      do {
        if (!CARRY2(uVar6,puVar8[1])) {
          *(int *)*puVar8 = *(int *)*puVar8 + uVar6;
        }
        puVar8 = puVar8 + 2;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
  else {
    iStack_18 = 0x27d1;
    FUN_28d4_0738();
    if (bVar11) goto LAB_27d1_0333;
  }
  *(byte *)((int)DAT_27d1_0b9c + 7) = *(byte *)((int)DAT_27d1_0b9c + 7) | 2;
  uVar10 = 0;
  FUN_27d1_01f0();
LAB_27d1_04bf:
  if (((!(bool)uVar10) && (DAT_27d1_0d04 != '\0')) && (DAT_27d1_0b9c[6] != 0xffff)) {
    FUN_27d1_025c();
  }
  return in_AX;
}
