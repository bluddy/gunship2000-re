/* GS2.GS2 2000:15f4 undefined FUN_2000_15f4(void) */
void __cdecl16far FUN_2000_15f4(uint param_1,uint param_2,uint param_3,int param_4)

{
  char *pcVar1;
  int *piVar2;
  uint *puVar3;
  undefined2 *puVar4;
  uint *puVar5;
  undefined2 *puVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  undefined2 *puVar16;
  undefined2 *puVar17;
  uint *puVar18;
  undefined2 unaff_CS;
  undefined2 unaff_DS;
  int iStack_8;
  
  uVar8 = *(undefined2 *)0x336c;
  iVar14 = param_1 * 0x1a;
  *(undefined1 *)(iVar14 + 4) = 0x83;
  *(undefined1 *)(iVar14 + 6) = (undefined1)param_3;
  *(undefined1 *)(iVar14 + 7) = (undefined1)param_4;
  if (*(byte *)0x593c == param_3) {
    uVar9 = (int)*(uint *)0xe2 >> 0xf;
    iVar14 = (*(uint *)0xe2 ^ uVar9) - uVar9;
  }
  else {
    iVar14 = *(int *)(param_3 * 0x18 + 0x2588);
  }
  uVar8 = *(undefined2 *)0x336c;
  *(int *)(param_1 * 0x1a + 8) = iVar14 + 0x32;
  if ((*(byte *)(param_1 * 0x1a + 2) & 3) != 0) {
    iVar14 = param_1 * 0x1a;
    if ((*(byte *)(iVar14 + 2) & 3) != 1) {
      uVar9 = (int)*(uint *)0xe2 >> 0xf;
      iVar15 = param_1 * 0x1a;
      *(int *)(iVar15 + 8) = ((*(uint *)0xe2 ^ uVar9) - uVar9) + 0x32;
      iVar10 = param_3 * 0x18;
      puVar11 = (uint *)(iVar10 + 0x2590);
      puVar18 = (uint *)(iVar15 + 0x12);
      for (iVar14 = 5; iVar14 != 0; iVar14 = iVar14 + -1) {
        puVar5 = puVar18;
        puVar18 = puVar18 + 1;
        puVar3 = puVar11;
        puVar11 = puVar11 + 1;
        *puVar5 = *puVar3;
      }
      uVar8 = *(undefined2 *)0x336c;
      *(undefined2 *)(iVar15 + 0xc) = *(undefined2 *)(iVar10 + 0x258a);
      *(undefined2 *)(iVar15 + 0xe) = *(undefined2 *)(iVar10 + 0x258c);
      *(undefined2 *)(iVar15 + 0x10) = *(undefined2 *)(iVar10 + 0x258e);
      if (param_4 != 0) {
        uVar9 = *(uint *)(iVar15 + 0x14);
        iVar14 = param_4 * 0x18;
        uVar13 = *(uint *)(iVar14 + 0x2592);
        uVar12 = ((((*(uint *)(iVar14 + 0x2590) >> 1 | (uint)((uVar13 & 1) != 0) << 0xf) >> 1 |
                   (uint)(((int)uVar13 >> 1 & 1U) != 0) << 0xf) >> 1 |
                  (uint)(((int)uVar13 >> 2 & 1U) != 0) << 0xf) >> 1 |
                 (uint)(((int)uVar13 >> 3 & 1U) != 0) << 0xf) -
                 ((((*(uint *)(iVar15 + 0x12) >> 1 | (uint)((uVar9 & 1) != 0) << 0xf) >> 1 |
                   (uint)(((int)uVar9 >> 1 & 1U) != 0) << 0xf) >> 1 |
                  (uint)(((int)uVar9 >> 2 & 1U) != 0) << 0xf) >> 1 |
                 (uint)(((int)uVar9 >> 3 & 1U) != 0) << 0xf);
        uVar9 = *(uint *)(iVar14 + 0x2596);
        uVar13 = *(uint *)(iVar15 + 0x18);
        uVar9 = ((((*(uint *)(iVar14 + 0x2594) >> 1 | (uint)((uVar9 & 1) != 0) << 0xf) >> 1 |
                  (uint)(((int)uVar9 >> 1 & 1U) != 0) << 0xf) >> 1 |
                 (uint)(((int)uVar9 >> 2 & 1U) != 0) << 0xf) >> 1 |
                (uint)(((int)uVar9 >> 3 & 1U) != 0) << 0xf) -
                ((((*(uint *)(iVar15 + 0x16) >> 1 | (uint)((uVar13 & 1) != 0) << 0xf) >> 1 |
                  (uint)(((int)uVar13 >> 1 & 1U) != 0) << 0xf) >> 1 |
                 (uint)(((int)uVar13 >> 2 & 1U) != 0) << 0xf) >> 1 |
                (uint)(((int)uVar13 >> 3 & 1U) != 0) << 0xf);
        iVar14 = func_0x00006004();
        uVar13 = (int)uVar12 >> 0xf;
        iVar10 = (uVar12 ^ uVar13) - uVar13;
        uVar13 = (int)uVar9 >> 0xf;
        iVar15 = (uVar9 ^ uVar13) - uVar13;
        if (iVar10 < iVar15) {
          iVar10 = iVar10 >> 1;
        }
        else {
          iVar15 = iVar15 >> 1;
        }
        uVar8 = *(undefined2 *)0x336c;
        uVar9 = *(int *)(param_1 * 0x1a + 0xe) - iVar14;
        uVar13 = (int)uVar9 >> 0xf;
        if ((uVar9 ^ uVar13) - uVar13 < 0x4000) {
          *(int *)(param_1 * 0x1a + 0xe) = iVar14;
        }
        else if (iVar14 < 0) {
          piVar2 = (int *)(param_1 * 0x1a + 0xe);
          *piVar2 = *piVar2 + -0x4000;
        }
        else {
          pcVar1 = (char *)(param_1 * 0x1a + 0xf);
          *pcVar1 = *pcVar1 + '@';
        }
        unaff_CS = 0x37f;
        iVar14 = func_0x00006004(0x37f,(*(int *)(param_4 * 0x18 + 0x2598) -
                                       *(int *)(param_1 * 0x1a + 0x1a)) + 0x20 >> 4,iVar15 + iVar10)
        ;
        uVar8 = *(undefined2 *)0x336c;
        uVar9 = *(int *)(param_1 * 0x1a + 0xc) - iVar14;
        uVar13 = (int)uVar9 >> 0xf;
        if ((uVar9 ^ uVar13) - uVar13 < 0x1000) {
          if ((*(byte *)0x593c == param_3) && (*(int *)0xb0b != 1)) {
            iVar14 = (iVar14 + -0x80) * 2;
          }
          *(int *)(param_1 * 0x1a + 0xc) = iVar14;
        }
        else if (iVar14 < 0) {
          piVar2 = (int *)(param_1 * 0x1a + 0xc);
          *piVar2 = *piVar2 + -0x1000;
        }
        else {
          pcVar1 = (char *)(param_1 * 0x1a + 0xd);
          *pcVar1 = *pcVar1 + '\x10';
        }
      }
      func_0x0000445c(unaff_CS,param_1 * 0x1a + 0x12,0x272d,param_1 * 0x1a + 0xc,0x272d,
                      (*(byte *)0xda & 3) << 6);
      puVar17 = (undefined2 *)(param_1 * 0x26 + 0x3684);
      puVar16 = (undefined2 *)0x0;
      for (iVar14 = 0x13; iVar14 != 0; iVar14 = iVar14 + -1) {
        puVar6 = puVar17;
        puVar17 = puVar17 + 1;
        puVar4 = puVar16;
        puVar16 = puVar16 + 1;
        *puVar6 = *puVar4;
      }
      *(int *)(param_1 * 0x26 + 0x36a8) = param_1 * 6 + 0x35f4;
      return;
    }
    puVar16 = (undefined2 *)(param_3 * 0x18 + 0x2590);
    puVar17 = (undefined2 *)(iVar14 + 0x12);
    for (iVar10 = 5; iVar10 != 0; iVar10 = iVar10 + -1) {
      puVar6 = puVar17;
      puVar17 = puVar17 + 1;
      puVar4 = puVar16;
      puVar16 = puVar16 + 1;
      *puVar6 = *puVar4;
    }
    if ((*(byte *)(iVar14 + 3) & 0x10) == 0) {
      *(undefined2 *)(param_1 * 0x1a + 10) = 1;
    }
    else {
      *(undefined2 *)(iVar14 + 10) = *(undefined2 *)0xac1;
    }
    if ((param_2 & 3) == 0) {
      puVar17 = (undefined2 *)(param_1 * 0x26 + 0x3684);
      puVar16 = (undefined2 *)0x0;
      for (iVar14 = 0x13; iVar14 != 0; iVar14 = iVar14 + -1) {
        puVar6 = puVar17;
        puVar17 = puVar17 + 1;
        puVar4 = puVar16;
        puVar16 = puVar16 + 1;
        *puVar6 = *puVar4;
      }
    }
    else {
      if (param_2 == 3) {
        if ((((param_1 & 1) == 0) && (*(char *)0x601 == '\0')) || (*(char *)0x606 != '\0')) {
          *(undefined2 *)0xab1 = 0xffc0;
        }
        else {
          *(undefined2 *)0xab1 = 0x40;
        }
      }
      else {
        *(int *)0xab1 = (-(uint)((param_2 & 1) == 0) & 0xff80) + 0x40;
      }
      uVar13 = func_0x00005f66();
      uVar8 = *(undefined2 *)0x336c;
      iVar14 = param_1 * 0x1a;
      puVar3 = (uint *)(iVar14 + 0x12);
      uVar9 = *puVar3;
      *puVar3 = *puVar3 + uVar13;
      *(int *)(iVar14 + 0x14) =
           *(int *)(iVar14 + 0x14) + ((int)uVar13 >> 0xf) + (uint)CARRY2(uVar9,uVar13);
      *(int *)(iVar14 + 0x1a) = *(int *)(iVar14 + 0x1a) + 0x10;
      unaff_CS = 0x37f;
      uVar13 = func_0x00005f7e(0x37f,*(undefined2 *)(param_3 * 0x18 + 0x258c),*(undefined2 *)0xab1);
      uVar8 = *(undefined2 *)0x336c;
      puVar3 = (uint *)(iVar14 + 0x16);
      uVar9 = *puVar3;
      *puVar3 = *puVar3 + uVar13;
      *(int *)(iVar14 + 0x18) =
           *(int *)(iVar14 + 0x18) + ((int)uVar13 >> 0xf) + (uint)CARRY2(uVar9,uVar13);
      if ((*(byte *)(iVar14 + 3) & 0x10) == 0) {
        puVar17 = (undefined2 *)(param_1 * 0x26 + 0x3684);
        puVar16 = (undefined2 *)0x0;
      }
      else if (*(int *)0xac1 == 4) {
        puVar17 = (undefined2 *)(param_1 * 0x26 + 0x3684);
        puVar16 = (undefined2 *)0x72;
      }
      else if (*(int *)0xac1 == 2) {
        puVar17 = (undefined2 *)(param_1 * 0x26 + 0x3684);
        puVar16 = (undefined2 *)0x4c;
      }
      else {
        puVar17 = (undefined2 *)(param_1 * 0x26 + 0x3684);
        puVar16 = (undefined2 *)0x26;
      }
      for (iVar14 = 0x13; iVar14 != 0; iVar14 = iVar14 + -1) {
        puVar6 = puVar17;
        puVar17 = puVar17 + 1;
        puVar4 = puVar16;
        puVar16 = puVar16 + 1;
        *puVar6 = *puVar4;
      }
    }
    *(int *)(param_1 * 0x26 + 0x36a8) = param_1 * 6 + 0x35f4;
    if ((param_4 != 0) && ((*(byte *)0x593c != param_3 || (*(int *)0xb0b == 1)))) {
      uVar8 = *(undefined2 *)0x3364;
      iVar14 = param_3 * 0x18;
      iVar10 = param_4 * 0x18;
      uVar9 = func_0x000056d6(unaff_CS,*(undefined2 *)(iVar10 + 0x2590),
                              *(undefined2 *)(iVar10 + 0x2592),*(undefined2 *)(iVar14 + 0x2590),
                              *(undefined2 *)(iVar14 + 0x2592));
      uVar8 = *(undefined2 *)0x3364;
      uVar13 = func_0x000056d6(0x37f,*(undefined2 *)(iVar10 + 0x2594),
                               *(undefined2 *)(iVar10 + 0x2596),*(undefined2 *)(iVar14 + 0x2594),
                               *(undefined2 *)(iVar14 + 0x2596));
      uVar8 = func_0x00006004(0x37f,-uVar9,uVar13);
      *(undefined2 *)(param_1 * 0x1a + 0xe) = uVar8;
      iVar14 = (uVar9 ^ (int)uVar9 >> 0xf) - ((int)uVar9 >> 0xf);
      iVar10 = (uVar13 ^ (int)uVar13 >> 0xf) - ((int)uVar13 >> 0xf);
      if (iVar14 < iVar10) {
        iVar14 = iVar14 >> 1;
      }
      else {
        iVar10 = iVar10 >> 1;
      }
      uVar8 = func_0x00006004(0x37f,(*(int *)(param_4 * 0x18 + 0x2598) -
                                    *(int *)(param_3 * 0x18 + 0x2598)) + 0x20,iVar10 + iVar14);
      *(undefined2 *)(param_1 * 0x1a + 0xc) = uVar8;
      return;
    }
    uVar8 = *(undefined2 *)0x336c;
    iVar10 = param_1 * 0x1a;
    *(undefined1 *)(iVar10 + 7) = 0;
    iVar14 = param_3 * 0x18;
    *(undefined2 *)(iVar10 + 0xc) = *(undefined2 *)(iVar14 + 0x258a);
    *(undefined2 *)(iVar10 + 0xe) = *(undefined2 *)(iVar14 + 0x258c);
    *(undefined2 *)(iVar10 + 0x10) = *(undefined2 *)(iVar14 + 0x258e);
    return;
  }
  if (param_2 == 3) {
    if ((((param_1 & 1) == 0) && (*(char *)0x601 == '\0')) || (*(char *)0x606 != '\0')) {
      *(undefined2 *)0xab1 = 0xffc0;
    }
    else {
      *(undefined2 *)0xab1 = 0x40;
    }
  }
  else {
    *(int *)0xab1 = (-(uint)((param_2 & 1) == 0) & 0xff80) + 0x40;
  }
  iVar10 = param_3 * 0x18;
  uVar13 = func_0x00005f66();
  uVar9 = *(uint *)(iVar10 + 0x2590);
  iVar14 = *(int *)(iVar10 + 0x2592);
  uVar8 = *(undefined2 *)0x336c;
  iVar15 = param_1 * 0x1a;
  *(int *)(iVar15 + 0x12) = uVar13 + *(uint *)(iVar10 + 0x2590);
  *(int *)(iVar15 + 0x14) = ((int)uVar13 >> 0xf) + iVar14 + (uint)CARRY2(uVar13,uVar9);
  *(int *)(iVar15 + 0x1a) = *(int *)(iVar10 + 0x2598) + 0x10;
  uVar13 = func_0x00005f7e(0x37f,*(undefined2 *)(iVar10 + 0x258c),*(undefined2 *)0xab1);
  uVar8 = *(undefined2 *)0x3364;
  uVar9 = *(uint *)(iVar10 + 0x2594);
  iVar14 = *(int *)(iVar10 + 0x2596);
  uVar7 = *(undefined2 *)0x336c;
  *(int *)(iVar15 + 0x16) = uVar13 + *(uint *)(iVar10 + 0x2594);
  *(int *)(iVar15 + 0x18) = ((int)uVar13 >> 0xf) + iVar14 + (uint)CARRY2(uVar13,uVar9);
  *(undefined2 *)(iVar15 + 0xc) = *(undefined2 *)(iVar10 + 0x258a);
  *(undefined2 *)(iVar15 + 0xe) = *(undefined2 *)(iVar10 + 0x258c);
  *(undefined2 *)(iVar15 + 0x10) = *(undefined2 *)(iVar10 + 0x258e);
  puVar17 = (undefined2 *)(param_1 * 0x26 + 0x3684);
  puVar16 = (undefined2 *)0x26;
  for (iVar14 = 0x13; iVar14 != 0; iVar14 = iVar14 + -1) {
    puVar6 = puVar17;
    puVar17 = puVar17 + 1;
    puVar4 = puVar16;
    puVar16 = puVar16 + 1;
    *puVar6 = *puVar4;
  }
  *(int *)(param_1 * 0x26 + 0x36a8) = param_1 * 6 + 0x35f4;
  if (*(byte *)0x593c == param_3) {
    if (((*(uint *)(iVar15 + 2) & 0x80) == 0) || ((*(uint *)(iVar15 + 2) & 0x200) == 0)) {
      if ((*(byte *)(param_1 * 0x1a + 2) & 0x40) == 0) {
        if (*(int *)0xb0b != 1) {
          *(undefined1 *)(param_1 * 0x1a + 7) = 0;
        }
      }
      else if ((param_4 == 0) || ((*(byte *)(param_4 * 0xe + 0x645) & 0x20) == 0)) {
        *(undefined1 *)(param_1 * 0x1a + 7) = 0;
        for (iStack_8 = 0; iStack_8 < 0x50; iStack_8 = iStack_8 + 1) {
          if ((((*(char *)(iStack_8 * 0x18 + 0x2583) == '\x01') &&
               (uVar8 = *(undefined2 *)0x3370, (*(byte *)(iStack_8 * 0xe + 0x643) & 0x70) == 0)) &&
              ((*(byte *)(iStack_8 * 0xe + 0x642) & 7) == 2)) &&
             ((*(byte *)(iStack_8 * 0xe + 0x645) & 0x20) != 0)) goto LAB_2000_182e;
        }
      }
    }
    else if ((param_4 == 0) || (1 < *(byte *)(param_4 * 0xe + 0x643))) {
      *(undefined1 *)(param_1 * 0x1a + 7) = 0;
      for (iStack_8 = 0; iStack_8 < 0x50; iStack_8 = iStack_8 + 1) {
        if (((*(char *)(iStack_8 * 0x18 + 0x2583) == '\x01') &&
            (uVar8 = *(undefined2 *)0x3370, (*(byte *)(iStack_8 * 0xe + 0x643) & 0x70) == 0)) &&
           (((*(byte *)(iStack_8 * 0xe + 0x642) & 7) == 2 && (*(byte *)(iStack_8 * 0xe + 0x643) < 2)
            ))) goto LAB_2000_182e;
      }
    }
  }
LAB_2000_18fe:
  if (*(char *)(param_1 * 0x1a + 7) != '\0') {
    return;
  }
  *(undefined2 *)(param_1 * 0x1a + 10) = 0;
  return;
LAB_2000_182e:
  *(undefined1 *)(param_1 * 0x1a + 7) = (undefined1)iStack_8;
  goto LAB_2000_18fe;
}
