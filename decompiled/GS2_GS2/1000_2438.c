/* GS2.GS2 1000:2438 undefined FUN_1000_2438(void) */
/* WARNING: Control flow encountered bad instruction data */

uint * __cdecl16far FUN_1000_2438(uint *param_1,int param_2,uint *param_3,undefined1 *param_4)

{
  byte *pbVar1;
  uint *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  uint *puVar5;
  byte bVar6;
  char cVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  uint *in_AX;
  undefined1 *puVar10;
  byte *pbVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  uint in_DX;
  char *pcVar15;
  int iVar16;
  uint *puVar17;
  undefined2 *puVar18;
  uint *puVar19;
  undefined2 *puVar20;
  uint uVar21;
  int iVar22;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar23;
  bool bVar24;
  uint auStack_14 [3];
  uint uStack_e;
  undefined4 uStack_c;
  byte *pbStack_8;
  int iStack_6;
  uint *puStack_4;
  
  iStack_6 = 1;
  puStack_4 = (uint *)0x3;
  uStack_e = (int)param_1 * 0x46;
  pcVar15 = (char *)(uStack_e + 0x489);
  uVar8 = *(undefined2 *)0x329c;
  uStack_c = (char *)CONCAT22(uVar8,pcVar15);
  if (*pcVar15 == '\0') {
    return in_AX;
  }
  if (param_2 == 0x2004) {
    if (*(char *)(uStack_e + 0x489) == '\x01') {
      return (uint *)0x372d;
    }
    *(undefined2 *)(uStack_e + 0x48e) = 1;
    *(undefined2 *)(uStack_e + 0x490) = 3;
    *(undefined1 *)(uStack_e + 0x489) = 5;
    *(undefined1 *)(uStack_e + 0x488) = 0;
    *(undefined2 *)(uStack_e + 0x498) = 0;
    *(undefined2 *)(uStack_e + 0x496) = 0;
    *(undefined2 *)(uStack_e + 0x494) = 0;
    *(undefined2 *)(uStack_e + 0x492) = 0;
    *(undefined2 *)(uStack_e + 0x4a2) = 0;
    *(undefined2 *)(uStack_e + 0x4a0) = 0;
    *(undefined2 *)(uStack_e + 0x49e) = 0;
    *(undefined2 *)(uStack_e + 0x49c) = 0;
    *(undefined2 *)(uStack_e + 0x4ac) = 0;
    *(undefined2 *)(uStack_e + 0x4aa) = 0;
    *(undefined2 *)(uStack_e + 0x4a8) = 0;
    *(undefined2 *)(uStack_e + 0x4a6) = 0;
    *(undefined1 *)((int)param_1 * 0x18 + 0x2583) = 0;
    *(undefined1 *)((int)param_1 * 0x18 + 0x2582) = 0x25;
    return (uint *)0x372d;
  }
  if (param_2 < 0x2005) {
    if (param_2 != 0x1117) {
      if (param_2 == 0x1e01) {
        *(int *)(uStack_e + 0x48e) = *(int *)(uStack_e + 0x48e) + 1;
        if (3 < *(int *)(uStack_e + 0x48e)) {
          *(undefined2 *)(uStack_e + 0x48e) = 1;
        }
      }
      else {
        if ((uint *)(param_2 + -0x1f13) != (uint *)0x0) {
          return (uint *)(param_2 + -0x1f13);
        }
        *(int *)(uStack_e + 0x490) = *(int *)(uStack_e + 0x490) + 1;
        if (3 < *(int *)(uStack_e + 0x490)) {
          *(undefined2 *)(uStack_e + 0x490) = 1;
        }
      }
      return (uint *)0x372d;
    }
    *(byte *)(uStack_e + 0x48c) = *(byte *)(uStack_e + 0x48c) ^ 1;
    *(undefined1 *)((int)param_1 * 0x18 + 0x2585) = 0;
    iVar13 = (int)param_1 + 1;
    if (4 < iVar13) {
      return (uint *)0x0;
    }
    puVar10 = (undefined1 *)(iVar13 * 0x18 + 0x2585);
    pbVar11 = (byte *)(iVar13 * 0x46 + 0x48c);
    do {
      if ((pbVar11[-3] == 1) && ((uint *)(int)(char)pbVar11[1] == param_1)) {
        *pbVar11 = *pbVar11 ^ 1;
        *puVar10 = 0;
      }
      puVar10 = puVar10 + 0x18;
      pbVar11 = pbVar11 + 0x46;
    } while (pbVar11 < (byte *)0x5ea);
    return (uint *)0x506a;
  }
  if (param_2 == 0x2207) {
    if (*pcVar15 == '\x01') {
      return (uint *)0x0;
    }
    uVar8 = *(undefined2 *)0x329c;
    if (*(char *)(*(char *)(uStack_e + 0x48d) * 0x46 + 0x489) == '\0') {
      return (uint *)(int)*(char *)(uStack_e + 0x48d);
    }
    *(undefined2 *)(uStack_e + 0x48e) = 1;
    *(undefined2 *)(uStack_e + 0x490) = 3;
    *uStack_c = '\x04';
    uVar8 = *(undefined2 *)0x329c;
    *(undefined1 *)(uStack_e + 0x488) = 0;
    *(undefined2 *)(uStack_e + 0x498) = 0;
    *(undefined2 *)(uStack_e + 0x496) = 0;
    *(undefined2 *)(uStack_e + 0x494) = 0;
    *(undefined2 *)(uStack_e + 0x492) = 0;
    *(undefined2 *)(uStack_e + 0x4a2) = 0;
    *(undefined2 *)(uStack_e + 0x4a0) = 0;
    *(undefined2 *)(uStack_e + 0x49e) = 0;
    *(undefined2 *)(uStack_e + 0x49c) = 0;
    *(undefined2 *)(uStack_e + 0x4ac) = 0;
    *(undefined2 *)(uStack_e + 0x4aa) = 0;
    *(undefined2 *)(uStack_e + 0x4a8) = 0;
    *(undefined2 *)(uStack_e + 0x4a6) = 0;
    *(undefined1 *)((int)param_1 * 0x18 + 0x2582) = 0x24;
    return (uint *)0x0;
  }
  if (param_2 == 0x2308) {
    if (*(char *)(uStack_e + 0x489) == '\x02') {
      if (*(char *)(uStack_e + 0x48a) != '\0') {
        cVar7 = *(char *)(uStack_e + 0x48a);
        *(char *)(uStack_e + 0x489) = cVar7;
        uVar12 = (int)cVar7 - 1;
        if (uVar12 < 8) {
          iVar13 = uVar12 * 2;
          bVar24 = (int)uVar12 < 0 != iVar13 < 0;
          uVar21 = uStack_e;
          puVar14 = param_1;
          switch(uVar12) {
          case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case 1:
            *(char *)((int)param_1 + 7) = *(char *)((int)param_1 + 7) + (char)(in_DX >> 8);
            if (param_1 != (uint *)0x0) {
              FUN_1851_0429();
            }
            if ((undefined2 *)puRam00037e33 != (undefined2 *)0x0 || puRam00037e33._2_2_ != 0) {
              *puRam00037e33 = uRam00037e1b;
            }
            puVar14 = puRam00037e1d;
            puVar17 = (uint *)((uint)(uint *)puRam00037e37 | puRam00037e37._2_2_);
            if ((uint *)((uint)(uint *)puRam00037e37 | puRam00037e37._2_2_) != (uint *)0x0) {
              *puRam00037e37 = (uint)puRam00037e1d;
              puVar17 = puVar14;
            }
            return puVar17;
          case 2:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case 3:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case 5:
            do {
              if (bVar24 == iVar13 < 0) {
                iRam00037316 = 0x400;
              }
              else {
                iRam00037316 = (int)puStack_4 >> 1;
              }
              puVar14 = (uint *)FUN_1000_13c6(iStack_6,0x35ae,0x35d6,pbRam0003a854);
              pbVar11 = pbStack_8;
              if (cRam0003a87e == '\0') {
                do {
                  while( true ) {
                    pbStack_8 = pbVar11;
                    iStack_6 = iStack_6 + 1;
                    pbVar11 = pbStack_8 + 0x18;
                    if ((byte *)0x2d01 < pbVar11) {
                      return puVar14;
                    }
                    iVar13 = (*(int *)0xab9 - iStack_6) + -1;
                    if (iVar13 != 0) break;
                    puVar14 = (uint *)0x0;
                  }
                  bVar6 = *pbVar11;
                  puVar14 = (uint *)CONCAT11((char)((uint)iVar13 >> 8),bVar6);
                } while ((((bVar6 & 0x60) != 0) || (bVar6 == 0x1c)) || (bVar6 == 0x1d));
                pbStack_8 = pbStack_8 + 0x26;
                puVar18 = (undefined2 *)0x35d6;
                for (iVar13 = 5; iVar13 != 0; iVar13 = iVar13 + -1) {
                  puVar3 = puVar18;
                  puVar18 = puVar18 + 1;
                  pbVar1 = pbStack_8;
                  pbStack_8 = pbStack_8 + 2;
                  *puVar3 = *(undefined2 *)pbVar1;
                }
                puVar20 = (undefined2 *)0x35b7;
                puVar18 = (undefined2 *)0x3b98;
                pbRam0003a854 = pbVar11;
                for (iVar13 = 5; iVar13 != 0; iVar13 = iVar13 + -1) {
                  puVar4 = puVar20;
                  puVar20 = puVar20 + 1;
                  puVar3 = puVar18;
                  puVar18 = puVar18 + 1;
                  *puVar4 = *puVar3;
                }
                pcVar15 = (char *)*(undefined2 *)0x3be4;
                uStack_c = (char *)CONCAT22(uStack_c._2_2_,pcVar15);
                pbStack_8 = pbVar11;
                if (((uint)pcVar15 & 0x100) == 0) {
                  cRam0003a87e = (-(((uint)pcVar15 & 0x200) == 0) & 0x10U) + 0x30;
                }
                else {
                  cRam0003a87e = ' ';
                }
              }
              uVar12 = ((((uRam0003a8aa >> 1 | (uint)((uRam0003a8ac & 1) != 0) << 0xf) >> 1 |
                         (uint)(((int)uRam0003a8ac >> 1 & 1U) != 0) << 0xf) >> 1 |
                        (uint)(((int)uRam0003a8ac >> 2 & 1U) != 0) << 0xf) >> 1 |
                       (uint)(((int)uRam0003a8ac >> 3 & 1U) != 0) << 0xf) -
                       ((((uRam0003a88b >> 1 | (uint)((uRam0003a88d & 1) != 0) << 0xf) >> 1 |
                         (uint)(((int)uRam0003a88d >> 1 & 1U) != 0) << 0xf) >> 1 |
                        (uint)(((int)uRam0003a88d >> 2 & 1U) != 0) << 0xf) >> 1 |
                       (uint)(((int)uRam0003a88d >> 3 & 1U) != 0) << 0xf);
              uVar21 = ((((uRam0003a8a6 >> 1 | (uint)((uRam0003a8a8 & 1) != 0) << 0xf) >> 1 |
                         (uint)(((int)uRam0003a8a8 >> 1 & 1U) != 0) << 0xf) >> 1 |
                        (uint)(((int)uRam0003a8a8 >> 2 & 1U) != 0) << 0xf) >> 1 |
                       (uint)(((int)uRam0003a8a8 >> 3 & 1U) != 0) << 0xf) -
                       ((((uRam0003a887 >> 1 | (uint)((uRam0003a889 & 1) != 0) << 0xf) >> 1 |
                         (uint)(((int)uRam0003a889 >> 1 & 1U) != 0) << 0xf) >> 1 |
                        (uint)(((int)uRam0003a889 >> 2 & 1U) != 0) << 0xf) >> 1 |
                       (uint)(((int)uRam0003a889 >> 3 & 1U) != 0) << 0xf);
              uRam0003a883 = FUN_137f_2814(-uVar21,uVar12);
              iVar13 = (uVar12 ^ (int)uVar12 >> 0xf) - ((int)uVar12 >> 0xf);
              iVar16 = (uVar21 ^ (int)uVar21 >> 0xf) - ((int)uVar21 >> 0xf);
              if (iVar16 < iVar13) {
                puStack_4 = (uint *)(iVar16 / 2 + iVar13);
              }
              else {
                puStack_4 = (uint *)(iVar13 / 2 + iVar16);
              }
              uRam0003a881 = FUN_137f_2814((iRam0003a8ae - iRam0003a88f) + 0x20 >> 4,puStack_4);
              bVar24 = SBORROW2((int)puStack_4,0x400);
              iVar13 = (int)puStack_4 + -0x400;
            } while( true );
          case 6:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case 7:
            uVar12 = 0;
            iVar13 = iRam00037e3b;
            do {
              if (uVar12 <= uRam00037e43) {
                uVar12 = uRam00037e43;
              }
              iVar13 = iVar13 + -1;
            } while (iVar13 != 0);
            uVar23 = 0xff7f < uVar12;
            iRam00037960 = uVar12 + 0x80;
            do {
              puVar14 = (uint *)FUN_1851_0668();
            } while (!(bool)uVar23);
            iRam00037962 = uVar12 + 0x80;
            return puVar14;
          }
          while( true ) {
            uVar12 = param_3[3];
            uVar12 = ((((uVar21 >> 1 | (uint)((in_DX & 1) != 0) << 0xf) >> 1 |
                       (uint)(((int)in_DX >> 1 & 1U) != 0) << 0xf) >> 1 |
                      (uint)(((int)in_DX >> 2 & 1U) != 0) << 0xf) >> 1 |
                     (uint)(((int)in_DX >> 3 & 1U) != 0) << 0xf) -
                     ((((param_3[2] >> 1 | (uint)((uVar12 & 1) != 0) << 0xf) >> 1 |
                       (uint)(((int)uVar12 >> 1 & 1U) != 0) << 0xf) >> 1 |
                      (uint)(((int)uVar12 >> 2 & 1U) != 0) << 0xf) >> 1 |
                     (uint)(((int)uVar12 >> 3 & 1U) != 0) << 0xf);
            uVar21 = (int)uVar12 >> 0xf;
            puStack_4 = (uint *)((uVar12 ^ uVar21) - uVar21);
            uVar12 = puVar14[1];
            uVar21 = param_3[1];
            uVar12 = ((((*puVar14 >> 1 | (uint)((uVar12 & 1) != 0) << 0xf) >> 1 |
                       (uint)(((int)uVar12 >> 1 & 1U) != 0) << 0xf) >> 1 |
                      (uint)(((int)uVar12 >> 2 & 1U) != 0) << 0xf) >> 1 |
                     (uint)(((int)uVar12 >> 3 & 1U) != 0) << 0xf) -
                     ((((*param_3 >> 1 | (uint)((uVar21 & 1) != 0) << 0xf) >> 1 |
                       (uint)(((int)uVar21 >> 1 & 1U) != 0) << 0xf) >> 1 |
                      (uint)(((int)uVar21 >> 2 & 1U) != 0) << 0xf) >> 1 |
                     (uint)(((int)uVar21 >> 3 & 1U) != 0) << 0xf);
            uVar21 = (int)uVar12 >> 0xf;
            iStack_6 = (uVar12 ^ uVar21) - uVar21;
            if (iStack_6 < (int)puStack_4) {
              pbStack_8 = (byte *)((iStack_6 >> 1) + (int)puStack_4);
            }
            else {
              pbStack_8 = (byte *)(((int)puStack_4 >> 1) + iStack_6);
            }
            if (0x1000 < pbStack_8) break;
            if (pbStack_8 < (iRam00037316 >> 3) + 8U) {
              *(undefined1 *)0x2308 = 0;
              *(undefined2 *)0x2309 = 1;
              iVar13 = (int)param_1 * 0xe;
              *(byte *)(iVar13 + 0x642) = *(byte *)(iVar13 + 0x642) & 0xfa | 2;
              *(byte *)(iVar13 + 0x642) = *(char *)0x593c << 3 ^ 2;
              *(undefined1 *)(iVar13 + 0x643) = *param_4;
              *(undefined2 *)(iVar13 + 0x646) = *(undefined2 *)(param_4 + 10);
              uVar12 = param_3[1];
              *(uint *)(iVar13 + 0x648) = *param_3;
              *(uint *)(iVar13 + 0x64a) = uVar12;
              uVar12 = param_3[3];
              *(uint *)(iVar13 + 0x64c) = param_3[2];
              *(uint *)(iVar13 + 0x64e) = uVar12;
              return (uint *)0x1;
            }
            iVar13 = FUN_137f_3289(0x2311,auStack_14);
            if (iRam000395e9 < iVar13) break;
            iVar13 = uStack_c._2_2_ + 1;
            uStack_c = (char *)CONCAT22(iVar13,(char *)uStack_c);
            if (7 < iVar13) {
              return (uint *)0xffff;
            }
            if (cRam000395d8 == '\0') goto LAB_1000_14dc;
            cRam000395d8 = cRam000395d8 + -1;
            puVar14 = (uint *)0x2311;
            puVar17 = auStack_14;
            puVar19 = puVar14;
            for (iVar13 = 5; iVar13 != 0; iVar13 = iVar13 + -1) {
              puVar5 = puVar17;
              puVar17 = puVar17 + 1;
              puVar2 = puVar19;
              puVar19 = puVar19 + 1;
              *puVar5 = *puVar2;
            }
            FUN_137f_0c6c(0x2311,0x372d,0x230b,0x372d,iRam00037316);
            uVar21 = uRam000395e5;
            in_DX = uRam000395e7;
          }
          cRam000395d8 = '\0';
LAB_1000_14dc:
          uRam000395d9 = 0;
          if ((*(byte *)((int)param_1 * 0xe + 0x642) & 7) == 2) {
            *(byte *)((int)param_1 * 0xe + 0x642) = *(byte *)((int)param_1 * 0xe + 0x642) & 0xf9 | 1
            ;
          }
          return (uint *)0x0;
        }
      }
    }
    else {
      *(undefined1 *)(uStack_e + 0x48a) = *(undefined1 *)(uStack_e + 0x489);
      *(undefined1 *)(uStack_e + 0x489) = 2;
      *(undefined1 *)((int)param_1 * 0x18 + 0x2582) = 0x20;
    }
    *(undefined1 *)((int)param_1 * 0x18 + 0x2583) = 0;
    return (uint *)0x372d;
  }
  if (param_2 == 0x260c) {
    *pcVar15 = '\x06';
    uVar8 = *(undefined2 *)0x329c;
    *(undefined1 *)(uStack_e + 0x488) = 0;
    *(undefined2 *)(uStack_e + 0x498) = 0;
    *(undefined2 *)(uStack_e + 0x496) = 0;
    *(undefined2 *)(uStack_e + 0x494) = 0;
    *(undefined2 *)(uStack_e + 0x492) = 0;
    *(undefined2 *)(uStack_e + 0x4a2) = 0;
    *(undefined2 *)(uStack_e + 0x4a0) = 0;
    *(undefined2 *)(uStack_e + 0x49e) = 0;
    *(undefined2 *)(uStack_e + 0x49c) = 0;
    *(undefined2 *)(uStack_e + 0x4ac) = 0;
    *(undefined2 *)(uStack_e + 0x4aa) = 0;
    *(undefined2 *)(uStack_e + 0x4a8) = 0;
    *(undefined2 *)(uStack_e + 0x4a6) = 0;
    *(undefined1 *)((int)param_1 * 0x18 + 0x2582) = 0x26;
    return (uint *)0x0;
  }
  if ((uint *)(param_2 + -0x3002) != (uint *)0x0) {
    return (uint *)(param_2 + -0x3002);
  }
  *(undefined1 *)(uStack_e + 0x488) = 1;
  uVar8 = *(undefined2 *)0x329e;
  if (*(int *)0x15aa != 0) {
    if ((*(int *)(uStack_e + 0x492) == *(int *)0x1576) &&
       (*(int *)(uStack_e + 0x494) == *(int *)0x1578)) {
      uVar8 = *(undefined2 *)0x15b6;
      uVar9 = *(undefined2 *)0x329c;
      *(undefined2 *)(uStack_e + 0x492) = *(undefined2 *)0x15b4;
      *(undefined2 *)(uStack_e + 0x494) = uVar8;
      iVar13 = *(int *)0x15b8;
      iVar16 = *(int *)0x15ba;
      goto LAB_1000_28a8;
    }
  }
  iVar16 = (int)param_1 * 0x20;
  iVar13 = *(int *)(iVar16 + 0xb50);
  if ((iVar13 < 0) || ((iVar13 < 1 && (*(uint *)(iVar16 + 0xb4e) < 0x401)))) {
    iVar13 = *(char *)(uStack_e + 0x48d) * 0x20;
    uVar8 = *(undefined2 *)(iVar13 + 0xb50);
    uVar9 = *(undefined2 *)0x329c;
    *(undefined2 *)(uStack_e + 0x492) = *(undefined2 *)(iVar13 + 0xb4e);
    *(undefined2 *)(uStack_e + 0x494) = uVar8;
    iVar22 = *(char *)(uStack_e + 0x48d) * 0x20;
    uVar8 = *(undefined2 *)0x32a6;
    uVar12 = *(uint *)(iVar22 + 0xb52);
    iVar13 = uVar12 + *(uint *)(iVar16 + 0xb52);
    iVar16 = *(int *)(iVar22 + 0xb54) + *(int *)(iVar16 + 0xb54) +
             (uint)CARRY2(uVar12,*(uint *)(iVar16 + 0xb52));
  }
  else {
    uVar8 = *(undefined2 *)0x329c;
    *(uint *)(uStack_e + 0x492) = *(uint *)(iVar16 + 0xb4e);
    *(int *)(uStack_e + 0x494) = iVar13;
    iVar13 = *(int *)(iVar16 + 0xb52);
    iVar16 = *(int *)(iVar16 + 0xb54);
  }
LAB_1000_28a8:
  uVar8 = *(undefined2 *)0x329c;
  *(int *)(uStack_e + 0x496) = iVar13;
  *(int *)(uStack_e + 0x498) = iVar16;
  *(undefined2 *)(uStack_e + 0x4a2) = 0;
  *(undefined2 *)(uStack_e + 0x4a0) = 0;
  *(undefined2 *)(uStack_e + 0x49e) = 0;
  *(undefined2 *)(uStack_e + 0x49c) = 0;
  *(undefined2 *)(uStack_e + 0x4ac) = 0;
  *(undefined2 *)(uStack_e + 0x4aa) = 0;
  *(undefined2 *)(uStack_e + 0x4a8) = 0;
  *(undefined2 *)(uStack_e + 0x4a6) = 0;
  puVar14 = (uint *)(uint)*(byte *)0x593c;
  if (puVar14 != param_1) {
    *(undefined2 *)(uStack_e + 0x48e) = 1;
    *(undefined2 *)(uStack_e + 0x490) = 3;
    *uStack_c = '\b';
    uVar8 = *(undefined2 *)0x3296;
    *(undefined1 *)((int)param_1 * 0x18 + 0x2583) = 0;
    *(undefined1 *)((int)param_1 * 0x18 + 0x2582) = 0x22;
    pbVar1 = (byte *)((int)param_1 * 0xe + 0x642);
    *pbVar1 = *pbVar1 & 0xf8;
    puStack_4 = (uint *)(uStack_e + 0x4b0);
    iStack_6 = 3;
    do {
      puVar14 = puStack_4 + -0xf;
      puVar17 = puVar14;
      puVar19 = puStack_4;
      for (iVar13 = 5; iVar13 != 0; iVar13 = iVar13 + -1) {
        puVar5 = puVar19;
        puVar19 = puVar19 + 1;
        puVar2 = puVar17;
        puVar17 = puVar17 + 1;
        *puVar5 = *puVar2;
      }
      puStack_4 = puStack_4 + 5;
      iStack_6 = iStack_6 + -1;
    } while (iStack_6 != 0);
    if ((*uStack_c == '\b') && ((*(byte *)0x3be5 & 8) != 0)) {
      puVar14 = (uint *)*(int *)0x1576;
      uVar8 = *(undefined2 *)0x329c;
      if (((uint *)*(undefined2 *)(uStack_e + 0x492) == puVar14) &&
         (*(int *)(uStack_e + 0x494) == *(int *)0x1578)) {
        puVar17 = (uint *)(uStack_e + 0x4b0);
        if ((*(int *)(uStack_e + 0x4b2) < 1) &&
           ((*(int *)(uStack_e + 0x4b2) < 0 || (*puVar17 < 0x8000)))) {
          *(undefined2 *)(uStack_e + 0x4b2) = 0;
          *puVar17 = 0;
          return (uint *)0x0;
        }
        if ((6 < *(int *)(uStack_e + 0x4b2)) &&
           ((7 < *(int *)(uStack_e + 0x4b2) || (0x8000 < *puVar17)))) {
          *puVar17 = 0;
          *(undefined2 *)(uStack_e + 0x4b2) = 8;
          return puVar14;
        }
        puVar18 = (undefined2 *)(uStack_e + 0x4b8);
        uVar8 = *(undefined2 *)0x329c;
        puVar14 = (uint *)*puVar18;
        bVar24 = -1 < (int)puVar14 >> 0xf;
        if (((int)puVar14 < 0 && bVar24) || ((bVar24 && ((uint *)0x7fff < puVar14)))) {
          puVar14 = (uint *)*puVar18;
          if ((int)puVar14 >> 0xf < 7) {
            return puVar14;
          }
          if (((int)puVar14 >> 0xf < 8) && (puVar14 < (uint *)0x8001)) {
            return puVar14;
          }
        }
        *puVar18 = 0;
      }
    }
  }
  return puVar14;
}
