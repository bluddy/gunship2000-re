/* GS2.GS2 17e0:021a undefined FUN_17e0_021a(void) */
void __cdecl16far
FUN_17e0_021a(int param_1,uint param_2,char *param_3,undefined2 param_4,uint param_5)

{
  char *pcVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  undefined1 uVar6;
  uint uVar7;
  char cVar8;
  char cVar9;
  uint uVar10;
  char *pcVar11;
  char *pcVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined2 unaff_SS;
  bool bVar17;
  
  if ((param_5 & 0x700) != 0) {
    if ((param_5 & 0x100) != 0) {
      FUN_17e0_00de(param_1,param_3);
    }
    if ((param_5 & 0x200) != 0) {
      iVar4 = FUN_17e0_0128(param_3,param_5);
      param_1 = ((uint)((DAT_17e0_0017 - iVar4) - DAT_17e0_0013) >> 1) + DAT_17e0_0013;
    }
  }
  if (((param_5 & 0x1800) != 0) && ((param_5 & 0x800) != 0)) {
    uVar5 = FUN_17e0_0128(param_3,param_5);
    param_1 = (param_1 - (uVar5 >> 1)) + 1;
  }
  uVar2 = *(undefined2 *)0x18cc;
  do {
    puVar13 = (undefined1 *)(param_1 + param_2 * 0x100 + (param_2 * 0x100 >> 2));
    DAT_17e0_000c = 1;
    while( true ) {
      uVar3 = DAT_17e0_0008;
      pcVar1 = param_3;
      param_3 = param_3 + 1;
      cVar8 = *pcVar1;
      if (cVar8 == '\0') {
        return;
      }
      if (cVar8 == '\n') break;
      uVar10 = 5;
      uVar5 = (uint)*(byte *)0x3;
      if ((*(byte *)0x0 & 2) != 0) {
        if ((param_5 & 2) != 0) {
          uVar5 = (uint)*(byte *)(ulong)((byte)(cVar8 - *(char *)0x1) + 5);
        }
        uVar10 = (uint)(byte)((*(char *)0x2 - *(char *)0x1) + 6);
      }
      iVar4 = ((uint)(byte)(((byte)(*(char *)0x3 - 1U) >> 3) + 1) * (uint)*(byte *)0x4 & 0xff) *
              (uint)(byte)(cVar8 - *(char *)0x1);
      pcVar11 = (char *)(uVar10 + iVar4);
      if ((param_5 & 4) != 0) {
        iVar4 = FUN_17e0_0061();
        puVar13 = puVar13 + iVar4;
      }
      puVar16 = puVar13;
      if ((param_5 & 0xf0) != 0) {
        puVar14 = puVar13;
        if ((param_5 & 0x20) != 0) {
          puVar14 = puVar13 + 1;
        }
        if ((param_5 & 0x10) != 0) {
          puVar14 = puVar14 + 0x140;
        }
        iVar4 = CONCAT11(DAT_17e0_000a._1_1_,(char)iVar4);
        uVar10 = (uint)*(byte *)0x4;
        pcVar12 = pcVar11;
        puVar15 = puVar14;
        do {
          do {
            uVar7 = uVar10;
            if ((uVar7 & 0x700) == 0) {
              iVar4 = CONCAT11((char)((uint)iVar4 >> 8),*pcVar12);
              pcVar12 = pcVar12 + 1;
            }
            cVar8 = (char)iVar4;
            uVar6 = (undefined1)((uint)iVar4 >> 8);
            iVar4 = CONCAT11(uVar6,cVar8 << 1);
            if (cVar8 < '\0') {
              *puVar14 = uVar6;
            }
            puVar14 = puVar14 + 1;
            cVar8 = (char)(uVar7 >> 8) + '\x01';
            uVar10 = CONCAT11(cVar8,(char)uVar7);
          } while (cVar8 != *(char *)0x3);
          puVar14 = puVar15 + 0x140;
          uVar10 = (uVar7 & 0xff) - 1;
          puVar15 = puVar14;
        } while (uVar10 != 0);
        if ((param_5 & 0x80) != 0) {
          puVar16 = puVar13 + 0x140;
        }
        if ((param_5 & 0x40) != 0) {
          puVar16 = puVar16 + 1;
        }
      }
      uVar6 = (undefined1)DAT_17e0_000a;
      cVar8 = (char)iVar4;
      uVar10 = (uint)*(byte *)0x4;
      puVar14 = puVar16;
      do {
        do {
          uVar7 = uVar10;
          if ((uVar7 & 0x700) == 0) {
            cVar8 = *pcVar11;
            pcVar11 = pcVar11 + 1;
          }
          bVar17 = cVar8 < '\0';
          cVar8 = cVar8 << 1;
          if (bVar17) {
            *puVar16 = uVar6;
          }
          puVar16 = puVar16 + 1;
          cVar9 = (char)(uVar7 >> 8) + '\x01';
          uVar10 = CONCAT11(cVar9,(char)uVar7);
        } while (cVar9 != *(char *)0x3);
        puVar16 = puVar14 + 0x140;
        uVar10 = (uVar7 & 0xff) - 1;
        puVar14 = puVar16;
      } while (uVar10 != 0);
      puVar13 = puVar13 + uVar5;
    }
    param_2 = (uint)(byte)((char)param_2 + *(char *)0x4);
    param_1 = DAT_17e0_0013;
    if ((param_5 & 0xf0) != 0) {
      param_2 = param_2 + 1;
    }
  } while( true );
}
