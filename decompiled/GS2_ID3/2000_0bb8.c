/* GS2.GS2 2000:0bb8 undefined FUN_2000_0bb8(void) */
int __cdecl16far FUN_2000_0bb8(uint param_1)

{
  char *pcVar1;
  byte *pbVar2;
  int *piVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 uVar6;
  byte bVar7;
  undefined1 uVar8;
  uint uVar9;
  byte *pbVar10;
  char *pcVar11;
  undefined1 *puVar12;
  uint uVar13;
  byte *pbVar14;
  char *pcVar15;
  undefined1 *puVar16;
  int iVar17;
  undefined2 *puVar18;
  undefined2 *puVar19;
  undefined2 unaff_CS;
  undefined2 uVar20;
  undefined2 unaff_DS;
  undefined4 uStack_10;
  uint uStack_c;
  uint uStack_a;
  uint uStack_8;
  uint uStack_6;
  
  if (((*(byte *)0x3be5 & 4) != 0) || (*(char *)(param_1 * 0xc + 0x609) != '\0')) {
    return 0;
  }
  if ((*(byte *)0x3be4 & 3) == 0) {
    unaff_CS = 0x37f;
    bVar7 = func_0x00005828();
    if (bVar7 < 0x4c) {
      return 0;
    }
  }
  uVar20 = unaff_CS;
  if ((*(byte *)0x3be4 & 3) == 1) {
    uVar20 = 0x37f;
    bVar7 = func_0x00005828(unaff_CS);
    if (bVar7 < 0x26) {
      return 0;
    }
  }
  do {
    uVar9 = func_0x00005828(uVar20);
    uStack_8 = 0;
    while ((uStack_8 < 10 && (*(uint *)(uStack_8 * 2 + 0xb0d) <= (uVar9 & 0xff)))) {
      uStack_8 = uStack_8 + 1;
    }
    if ((uStack_8 < *(uint *)0xb21) &&
       ((bVar7 = *(byte *)(param_1 * 0x1e) & 7, bVar7 == 0 || (bVar7 == 1)))) {
      uVar9 = func_0x00005828(0x37f);
      uStack_8 = 0;
      while ((uStack_8 < 10 && (*(uint *)(uStack_8 * 2 + 0xb0d) <= (uVar9 & 0xff)))) {
        uStack_8 = uStack_8 + 1;
      }
    }
    uVar20 = 0x37f;
    bVar7 = *(byte *)(param_1 * 0x1e) & 7;
    if ((((bVar7 == 5) || (bVar7 == 6)) &&
        (uVar9 = param_1 * 0xc + 0x5fe, uVar13 = param_1 * 0xc + 0x604, uVar13 - uVar9 == uStack_8))
       && (uVar9 <= uVar13)) {
      uStack_8 = 10;
    }
    bVar7 = *(byte *)(param_1 * 0x1e) & 7;
    if (((bVar7 == 5) || (bVar7 == 3)) &&
       ((uVar9 = param_1 * 0xc + 0x5fe, uVar13 = param_1 * 0xc + 0x607, uVar13 - uVar9 == uStack_8
        && (uVar9 <= uVar13)))) {
      uStack_8 = 10;
    }
    uVar6 = *(undefined2 *)0x3348;
  } while (((*(byte *)(param_1 * 0xc + uStack_8 + 0x5fe) & 3) == 2) ||
          ((*(byte *)0x593c != param_1 && (uStack_8 == 10))));
  iVar17 = param_1 * 0xc + uStack_8;
  pcVar1 = (char *)(iVar17 + 0x5fe);
  *pcVar1 = *pcVar1 + '\x01';
  if (*(char *)(iVar17 + 0x5fe) == '\x02') {
    uStack_6 = 0;
    for (uStack_a = 0; uStack_a < 10; uStack_a = uStack_a + 1) {
      if (*(char *)(param_1 * 0xc + uStack_a + 0x5fe) != '\0') {
        uStack_6 = uStack_6 + 1;
        bVar7 = *(byte *)(param_1 * 0x1e) & 7;
        if ((bVar7 == 0) || (bVar7 == 1)) {
          uStack_c = 5;
        }
        else {
          uStack_c = 4;
        }
        if (uStack_c < uStack_6) {
          *(undefined1 *)(param_1 * 0xc + 0x609) = 1;
          break;
        }
      }
    }
  }
  uVar9 = (uint)*(byte *)0x593c;
  if (uVar9 != param_1) {
    pcVar11 = (char *)(param_1 * 0xc + 0x5fe);
    pcVar15 = (char *)(param_1 * 0xc + 0x603);
    uStack_10 = (byte *)CONCAT22(0x272d,pcVar15);
    if (((int)pcVar15 - (int)pcVar11 == uStack_8) && (pcVar11 <= pcVar15)) {
      pbVar2 = (byte *)(param_1 * 0x1e + 0x17);
      *pbVar2 = *pbVar2 & 0xfe;
      if (*uStack_10 == '\x02') {
        if (*(char *)(param_1 * 0x18 + 0x2584) != '\0') {
          *(undefined1 *)(param_1 * 0x18 + 0x2584) = 0;
        }
        puVar18 = (undefined2 *)(param_1 * 0x26 + 0x1682);
        puVar19 = (undefined2 *)(param_1 * 0x26 + 0x460a);
        for (iVar17 = 0x13; iVar17 != 0; iVar17 = iVar17 + -1) {
          puVar5 = puVar19;
          puVar19 = puVar19 + 1;
          puVar4 = puVar18;
          puVar18 = puVar18 + 1;
          *puVar5 = *puVar4;
        }
        uVar20 = *(undefined2 *)0x3364;
        iVar17 = param_1 * 0x18;
        *(undefined1 *)(iVar17 + 0x2582) = 0x1c;
        *(undefined2 *)(iVar17 + 0x2586) = 0xff9c;
        *(undefined1 *)(iVar17 + 0x2583) = 0;
        *(undefined1 *)(param_1 * 0x46 + 0x489) = 0;
      }
    }
    else {
      uVar20 = *(undefined2 *)0x3348;
      iVar17 = param_1 * 0xc;
      if ((*(char *)(iVar17 + 0x602) == '\x02') ||
         ((*(char *)(iVar17 + 0x607) == '\x02' || (*(char *)(iVar17 + 0x600) == '\x02')))) {
        bVar7 = func_0x00005828(0x37f);
        if (*(byte *)(uStack_8 * 0x1e + 0x1d) < (bVar7 & 0x7f)) {
          uVar8 = 2;
        }
        else {
          uVar8 = 1;
        }
        *(undefined1 *)(param_1 * 0xc + 0x609) = uVar8;
      }
      else if (*(char *)(param_1 * 0xc + 0x605) == '\x02') {
        *(undefined1 *)(param_1 * 0xc + 0x609) = 2;
      }
    }
    func_0x000104e4(0x37f,4,param_1,0);
    goto LAB_2000_12ba;
  }
  if (uStack_8 == 0) {
    if ((*(byte *)(uVar9 * 0xc + 0x5fe) & 3) == 2) {
      pbVar2 = (byte *)(uVar9 * 0xc + 0x5fe);
      *pbVar2 = *pbVar2 | 0xf0;
      *(undefined2 *)0xadd = 0;
      *(undefined2 *)0xadb = 0;
    }
    else {
      bVar7 = func_0x00005828(0x37f);
      pbVar2 = (byte *)(param_1 * 0xc + 0x5fe);
      *pbVar2 = *pbVar2 | (byte)(0x80 >> (bVar7 & 3));
    }
  }
  else {
    pbVar10 = (byte *)(uVar9 * 0xc + 0x5fe);
    pbVar14 = (byte *)(uVar9 * 0xc + 0x5ff);
    uStack_10 = (byte *)CONCAT22(0x272d,pbVar14);
    if (((int)pbVar14 - (int)pbVar10 == uStack_8) && (pbVar10 <= pbVar14)) {
      if ((*uStack_10 & 3) == 2) {
        *uStack_10 = *uStack_10 | 0xc0;
      }
      else {
        bVar7 = func_0x00005828(0x37f);
        pbVar2 = (byte *)(param_1 * 0xc + 0x5ff);
        *pbVar2 = *pbVar2 | (byte)(0x80 >> (bVar7 & 1));
      }
    }
    else {
      uVar9 = param_1 * 0xc + 0x5fe;
      uVar13 = param_1 * 0xc + 0x608;
      if ((uVar13 - uVar9 == uStack_8) && (uVar9 <= uVar13)) {
        if (*(int *)0xb03 == 0 && *(int *)0xb05 == 0) {
          uVar9 = func_0x00005828(0x37f);
          *(int *)0xb03 = (uVar9 & 0xff) + 0x20;
          uVar9 = func_0x00005828(0x37f);
          *(int *)0xb05 = (uVar9 & 0x1f) + 0x28;
        }
        else if (*(int *)0xb07 == 0 && *(int *)0xb09 == 0) {
          uVar9 = func_0x00005828(0x37f);
          *(int *)0xb07 = (uVar9 & 0xff) + 0x20;
          uVar9 = func_0x00005828(0x37f);
          *(int *)0xb09 = (uVar9 & 0x1f) + 0x28;
        }
      }
      else {
        pbVar10 = (byte *)(param_1 * 0xc + 0x5fe);
        pbVar14 = (byte *)(param_1 * 0xc + 0x602);
        uStack_10 = (byte *)CONCAT22(0x272d,pbVar14);
        if (((int)pbVar14 - (int)pbVar10 == uStack_8) && (pbVar10 <= pbVar14)) {
          if ((*uStack_10 & 3) == 2) {
            *(undefined2 *)0xae3 = 0;
            bVar7 = *(byte *)(param_1 * 0x1e) & 7;
            if ((bVar7 == 5) || (bVar7 == 3)) {
              *(undefined1 *)(param_1 * 0xc + 0x609) = 1;
              uStack_8 = 0xb;
            }
            else if ((*(byte *)(param_1 * 0xc + 0x607) & 3) == 2) {
              *(undefined1 *)(param_1 * 0xc + 0x609) = 1;
            }
          }
          else {
            *(int *)0xae3 = *(int *)0xae3 >> 1;
          }
        }
        else {
          iVar17 = param_1 * 0xc;
          pbVar10 = (byte *)(iVar17 + 0x607);
          uStack_10 = (byte *)CONCAT22(0x272d,pbVar10);
          if (((int)pbVar10 - (iVar17 + 0x5fe) == uStack_8) && ((byte *)(iVar17 + 0x5fe) <= pbVar10)
             ) {
            if ((*uStack_10 & 3) == 2) {
              *(undefined2 *)0xae5 = 0;
              uVar20 = *(undefined2 *)0x3348;
              if ((*(byte *)(iVar17 + 0x602) & 3) == 2) {
LAB_2000_1078:
                *(undefined1 *)(param_1 * 0xc + 0x609) = 1;
              }
            }
            else {
              *(int *)0xae5 = *(int *)0xae5 >> 1;
            }
          }
          else {
            pbVar10 = (byte *)(param_1 * 0xc + 0x5fe);
            pbVar14 = (byte *)(param_1 * 0xc + 0x600);
            uStack_10 = (byte *)CONCAT22(0x272d,pbVar14);
            if (((int)pbVar14 - (int)pbVar10 == uStack_8) && (pbVar10 <= pbVar14)) {
              if ((*uStack_10 & 3) == 2) {
                uVar20 = *(undefined2 *)0x3348;
                goto LAB_2000_1078;
              }
            }
            else {
              pbVar10 = (byte *)(param_1 * 0xc + 0x5fe);
              pbVar14 = (byte *)(param_1 * 0xc + 0x603);
              uStack_10 = (byte *)CONCAT22(0x272d,pbVar14);
              if (((int)pbVar14 - (int)pbVar10 == uStack_8) &&
                 ((pbVar10 <= pbVar14 &&
                  (pbVar2 = (byte *)(param_1 * 0x1e + 0x17), *pbVar2 = *pbVar2 & 0xfe,
                  (*uStack_10 & 3) == 2)))) {
                *(undefined1 *)0x266 = 0x10;
                *(undefined2 *)0x2d0c = 4;
              }
            }
          }
        }
      }
    }
  }
  if (((((*(byte *)0xde & 0x80) != 0) && (*(int *)0x2d0c == 0)) && (2 < *(int *)0xae7)) &&
     (*(char *)(param_1 * 0xc + 0x609) != '\0')) {
    func_0x0000844b(0x37f,0x3d);
    *(byte *)0xde = *(byte *)0xde ^ 0x80;
  }
LAB_2000_12ba:
  puVar12 = (undefined1 *)(param_1 * 0xc + 0x5fe);
  puVar16 = (undefined1 *)(param_1 * 0xc + 0x601);
  uStack_10 = (byte *)CONCAT22(0x272d,puVar16);
  if (((int)puVar16 - (int)puVar12 == uStack_8) && (puVar12 <= puVar16)) {
    *uStack_10 = 2;
    for (uStack_a = 0; uStack_a < 4; uStack_a = uStack_a + 1) {
      uVar20 = *(undefined2 *)0x334c;
      iVar17 = param_1 * 0x1e + uStack_a;
      if ((*(char *)(iVar17 + 1) != '\0') && (bVar7 = *(byte *)(iVar17 + 0xd), (bVar7 & 2) != 0)) {
        iVar17 = *(int *)((param_1 * 0xf + uStack_a) * 2 + 5);
        if ((bVar7 == 2) || ((*(char *)(param_1 * 0xc + 0x606) != '\0' && ((bVar7 & 2) != 0)))) {
          uVar20 = *(undefined2 *)0x334c;
          *(undefined2 *)((param_1 * 0xf + uStack_a) * 2 + 5) = 0;
          if (*(byte *)0x593c == param_1) {
            *(int *)0x63a = *(int *)0x63a - *(int *)(*(char *)(uStack_a + 1) * 0x18 + 0xf3);
          }
        }
        else if (*(char *)(param_1 * 0x1e + uStack_a + 0xd) == '\x03') {
          piVar3 = (int *)((param_1 * 0xf + uStack_a) * 2 + 5);
          *piVar3 = *piVar3 >> 1;
        }
        uVar9 = iVar17 - *(int *)((param_1 * 0xf + uStack_a) * 2 + 5);
        if (*(byte *)0x593c == param_1) {
          iVar17 = *(char *)(uStack_a + 1) * 0x18;
          uVar13 = *(uint *)(iVar17 + 0xe6);
          if (((uVar13 & 1) == 0) || ((uVar13 & 0x1000) != 0)) {
            iVar17 = *(int *)(*(char *)(uStack_a + 1) * 0x18 + 0xf1) * uVar9;
          }
          else {
            iVar17 = *(int *)(iVar17 + 0xf1) * (uVar9 / 0x14);
          }
          *(int *)0x63a = *(int *)0x63a - iVar17;
        }
      }
    }
  }
  else {
    puVar12 = (undefined1 *)(param_1 * 0xc + 0x5fe);
    puVar16 = (undefined1 *)(param_1 * 0xc + 0x606);
    uStack_10 = (byte *)CONCAT22(0x272d,puVar16);
    if (((int)puVar16 - (int)puVar12 == uStack_8) && (puVar12 <= puVar16)) {
      *uStack_10 = 2;
      for (uStack_a = 0; uStack_a < 4; uStack_a = uStack_a + 1) {
        uVar20 = *(undefined2 *)0x334c;
        iVar17 = param_1 * 0x1e + uStack_a;
        if ((*(char *)(iVar17 + 1) != '\0') && (bVar7 = *(byte *)(iVar17 + 0xd), (bVar7 & 1) != 0))
        {
          iVar17 = *(int *)((param_1 * 0xf + uStack_a) * 2 + 5);
          if ((bVar7 == 1) || ((*(char *)(param_1 * 0xc + 0x601) != '\0' && ((bVar7 & 1) != 0)))) {
            uVar20 = *(undefined2 *)0x334c;
            *(undefined2 *)((param_1 * 0xf + uStack_a) * 2 + 5) = 0;
            if (*(byte *)0x593c == param_1) {
              *(int *)0x63a = *(int *)0x63a - *(int *)(*(char *)(uStack_a + 1) * 0x18 + 0xf3);
            }
          }
          else if (*(char *)(param_1 * 0x1e + uStack_a + 0xd) == '\x03') {
            piVar3 = (int *)((param_1 * 0xf + uStack_a) * 2 + 5);
            *piVar3 = *piVar3 >> 1;
          }
          uVar9 = iVar17 - *(int *)((param_1 * 0xf + uStack_a) * 2 + 5);
          if (*(byte *)0x593c == param_1) {
            iVar17 = *(char *)(uStack_a + 1) * 0x18;
            uVar13 = *(uint *)(iVar17 + 0xe6);
            if (((uVar13 & 1) == 0) || ((uVar13 & 0x1000) != 0)) {
              iVar17 = *(int *)(*(char *)(uStack_a + 1) * 0x18 + 0xf1) * uVar9;
            }
            else {
              iVar17 = *(int *)(iVar17 + 0xf1) * (uVar9 / 0x14);
            }
            *(int *)0x63a = *(int *)0x63a - iVar17;
          }
        }
      }
    }
  }
  return uStack_8 + 1;
}
