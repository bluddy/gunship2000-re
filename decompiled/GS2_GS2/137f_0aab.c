/* GS2.GS2 137f:0aab undefined FUN_137f_0aab(void) */
void __cdecl16near FUN_137f_0aab(void)

{
  byte bVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined2 uVar9;
  int in_BX;
  undefined2 uVar10;
  int iVar11;
  int iVar12;
  int unaff_DI;
  undefined2 unaff_DS;
  undefined4 uVar13;
  
  *(undefined2 *)0x106 = *(undefined2 *)(unaff_DI + 1);
  iVar3 = FUN_137f_1c1a();
  if (iVar3 == 0) {
    return;
  }
  FUN_137f_204e();
  uVar4 = *(uint *)(in_BX + 0xc) & 0xff;
  bVar1 = *(byte *)(uVar4 + 0x2a8);
  *(byte *)(uVar4 + 0x2a8) = *(byte *)(uVar4 + 0x2a8) | 2;
  iVar11 = uVar4 * 4;
  if (((bVar1 & 1) == 0) || ((bVar1 & 2) == 0)) {
    iVar12 = *(int *)(in_BX + 10);
    iVar7 = -(int)(CONCAT22((int)(char)((uint)*(undefined2 *)(in_BX + 6) >> 8),
                            CONCAT11((char)*(undefined2 *)(in_BX + 6),*(undefined1 *)(in_BX + 5))) /
                  (long)iVar12);
    iVar8 = iVar7 + *(int *)0x100;
    pcVar2 = (code *)swi(4);
    if (SCARRY2(iVar7,*(int *)0x100)) {
      iVar8 = (*pcVar2)();
    }
    *(int *)0x104 = iVar8;
    *(int *)(iVar11 + 0x33c) = iVar8;
    iVar12 = (int)(CONCAT22((int)(char)((uint)*(undefined2 *)(in_BX + 2) >> 8),
                            CONCAT11((char)*(undefined2 *)(in_BX + 2),*(undefined1 *)(in_BX + 1))) /
                  (long)iVar12);
    iVar7 = iVar12 + *(int *)0xfe;
    pcVar2 = (code *)swi(4);
    if (SCARRY2(iVar12,*(int *)0xfe)) {
      iVar7 = (*pcVar2)();
    }
    *(int *)0x102 = iVar7;
    *(int *)(iVar11 + 0x33a) = iVar7;
  }
  else {
    *(undefined2 *)0x102 = *(undefined2 *)(iVar11 + 0x33a);
    *(undefined2 *)0x104 = *(undefined2 *)(iVar11 + 0x33c);
  }
  do {
    uVar4 = *(uint *)(in_BX + 0xc) >> 8;
    *(int *)0x108 = uVar4 << 1;
    if (uVar4 == 0) {
LAB_137f_0ba8:
      uVar5 = *(uint *)(in_BX + 0x1a);
      *(undefined1 *)(uVar4 + 0x272) = (char)uVar5;
      uVar5 = uVar5 & 0xff;
      bVar1 = *(byte *)(uVar5 + 0x2a8);
      *(byte *)(uVar5 + 0x2a8) = *(byte *)(uVar5 + 0x2a8) | 2;
      iVar12 = uVar5 * 4;
      iVar11 = in_BX;
      if (((bVar1 & 1) == 0) || ((bVar1 & 2) == 0)) {
        iVar8 = *(int *)(in_BX + 0x18);
        iVar6 = -(int)(CONCAT22((int)(char)((uint)*(undefined2 *)(in_BX + 0x14) >> 8),
                                CONCAT11((char)*(undefined2 *)(in_BX + 0x14),
                                         *(undefined1 *)(in_BX + 0x13))) / (long)iVar8);
        iVar7 = iVar6 + *(int *)0x100;
        pcVar2 = (code *)swi(4);
        if (SCARRY2(iVar6,*(int *)0x100)) {
          iVar7 = (*pcVar2)();
        }
        *(int *)(iVar12 + 0x33c) = iVar7;
        iVar6 = (int)(CONCAT22((int)(char)((uint)*(undefined2 *)(in_BX + 0x10) >> 8),
                               CONCAT11((char)*(undefined2 *)(in_BX + 0x10),
                                        *(undefined1 *)(in_BX + 0xf))) / (long)iVar8);
        iVar8 = iVar6 + *(int *)0xfe;
        pcVar2 = (code *)swi(4);
        if (SCARRY2(iVar6,*(int *)0xfe)) {
          iVar8 = (*pcVar2)();
        }
        *(int *)(iVar12 + 0x33a) = iVar8;
      }
      else {
        iVar8 = *(int *)(iVar12 + 0x33a);
        iVar7 = *(int *)(iVar12 + 0x33c);
      }
      iVar12 = *(int *)0x108;
      *(int *)0x102 = iVar8;
      *(int *)0x104 = iVar7;
      uVar13 = FUN_137f_003c();
      *(undefined2 *)(iVar12 + 0x370) = (int)uVar13;
      *(undefined2 *)(iVar12 + 0x372) = (int)((ulong)uVar13 >> 0x10);
      in_BX = iVar11;
    }
    else {
      *(int *)0x108 = (uVar4 * 8 + *(int *)0x108) * 2;
      bVar1 = *(byte *)(uVar4 + 0x2a8);
      *(byte *)(uVar4 + 0x2a8) = *(byte *)(uVar4 + 0x2a8) | 4;
      if ((bVar1 & 4) == 0) goto LAB_137f_0ba8;
      iVar12 = *(int *)0x108;
      uVar10 = *(undefined2 *)(iVar12 + 0x380);
      uVar9 = *(undefined2 *)(iVar12 + 0x382);
      if (*(char *)(uVar4 + 0x272) == *(char *)(in_BX + 0x1a)) {
        uVar10 = *(undefined2 *)(iVar12 + 0x37c);
        uVar9 = *(undefined2 *)(iVar12 + 0x37e);
      }
      *(undefined2 *)0x102 = uVar10;
      *(undefined2 *)0x104 = uVar9;
    }
    iVar11 = FUN_137f_2065();
    if (iVar11 != 0) {
      FUN_137f_2165(*(undefined2 *)(iVar12 + 0x374),*(undefined2 *)(iVar12 + 0x376),
                    *(undefined2 *)(iVar12 + 0x378),*(undefined2 *)(iVar12 + 0x37a));
    }
    in_BX = in_BX + 0xe;
    iVar3 = iVar3 + -1;
    if (iVar3 == 0) {
      thunk_EXT_FUN_0000_0000(0x137f);
      return;
    }
  } while( true );
}
