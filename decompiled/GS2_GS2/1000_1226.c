/* GS2.GS2 1000:1226 undefined FUN_1000_1226(void) */
void __cdecl16far FUN_1000_1226(void)

{
  byte *pbVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  undefined2 uVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  uint uVar13;
  undefined2 unaff_DS;
  byte *pbStack_8;
  int iStack_6;
  
  iStack_6 = 0;
  pbStack_8 = (byte *)0x2582;
  do {
    if ((((*(int *)0xab9 - iStack_6 != 1) && (bVar4 = *pbStack_8, (bVar4 & 0x60) == 0)) &&
        (bVar4 != 0x1c)) && (bVar4 != 0x1d)) {
      pbVar10 = pbStack_8 + 0xe;
      puVar11 = (undefined2 *)0x35d6;
      for (iVar9 = 5; iVar9 != 0; iVar9 = iVar9 + -1) {
        puVar2 = puVar11;
        puVar11 = puVar11 + 1;
        pbVar1 = pbVar10;
        pbVar10 = pbVar10 + 2;
        *puVar2 = *(undefined2 *)pbVar1;
      }
      *(uint *)0x3584 = (uint)pbStack_8;
      puVar12 = (undefined2 *)0x35b7;
      puVar11 = (undefined2 *)0x3b98;
      for (iVar9 = 5; iVar9 != 0; iVar9 = iVar9 + -1) {
        puVar3 = puVar12;
        puVar12 = puVar12 + 1;
        puVar2 = puVar11;
        puVar11 = puVar11 + 1;
        *puVar3 = *puVar2;
      }
      if ((*(uint *)0x3be4 & 0x100) == 0) {
        *(char *)0x35ae = (-((*(uint *)0x3be4 & 0x200) == 0) & 0x10U) + 0x30;
      }
      else {
        *(undefined1 *)0x35ae = 0x20;
      }
      do {
        uVar13 = *(uint *)0x35dc;
        uVar5 = *(uint *)0x35bd;
        uVar6 = ((((*(uint *)0x35da >> 1 | (uint)((uVar13 & 1) != 0) << 0xf) >> 1 |
                  (uint)(((int)uVar13 >> 1 & 1U) != 0) << 0xf) >> 1 |
                 (uint)(((int)uVar13 >> 2 & 1U) != 0) << 0xf) >> 1 |
                (uint)(((int)uVar13 >> 3 & 1U) != 0) << 0xf) -
                ((((*(uint *)0x35bb >> 1 | (uint)((uVar5 & 1) != 0) << 0xf) >> 1 |
                  (uint)(((int)uVar5 >> 1 & 1U) != 0) << 0xf) >> 1 |
                 (uint)(((int)uVar5 >> 2 & 1U) != 0) << 0xf) >> 1 |
                (uint)(((int)uVar5 >> 3 & 1U) != 0) << 0xf);
        uVar13 = *(uint *)0x35d8;
        uVar5 = *(uint *)0x35b9;
        uVar13 = ((((*(uint *)0x35d6 >> 1 | (uint)((uVar13 & 1) != 0) << 0xf) >> 1 |
                   (uint)(((int)uVar13 >> 1 & 1U) != 0) << 0xf) >> 1 |
                  (uint)(((int)uVar13 >> 2 & 1U) != 0) << 0xf) >> 1 |
                 (uint)(((int)uVar13 >> 3 & 1U) != 0) << 0xf) -
                 ((((*(uint *)0x35b7 >> 1 | (uint)((uVar5 & 1) != 0) << 0xf) >> 1 |
                   (uint)(((int)uVar5 >> 1 & 1U) != 0) << 0xf) >> 1 |
                  (uint)(((int)uVar5 >> 2 & 1U) != 0) << 0xf) >> 1 |
                 (uint)(((int)uVar5 >> 3 & 1U) != 0) << 0xf);
        uVar7 = FUN_137f_2814(-uVar13,uVar6);
        *(undefined2 *)0x35b3 = uVar7;
        iVar8 = (uVar6 ^ (int)uVar6 >> 0xf) - ((int)uVar6 >> 0xf);
        iVar9 = (uVar13 ^ (int)uVar13 >> 0xf) - ((int)uVar13 >> 0xf);
        if (iVar9 < iVar8) {
          iVar8 = iVar9 / 2 + iVar8;
        }
        else {
          iVar8 = iVar8 / 2 + iVar9;
        }
        uVar7 = FUN_137f_2814((*(int *)0x35de - *(int *)0x35bf) + 0x20 >> 4,iVar8);
        *(undefined2 *)0x35b1 = uVar7;
        if (iVar8 < 0x400) {
          *(int *)0x46 = iVar8 >> 1;
        }
        else {
          *(undefined2 *)0x46 = 0x400;
        }
        FUN_1000_13c6(iStack_6,0x35ae,0x35d6,*(undefined2 *)0x3584);
      } while (*(char *)0x35ae != '\0');
    }
    iStack_6 = iStack_6 + 1;
    pbStack_8 = pbStack_8 + 0x18;
  } while (pbStack_8 < (byte *)0x2d02);
  return;
}
