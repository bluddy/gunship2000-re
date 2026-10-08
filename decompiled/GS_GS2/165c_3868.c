/* GS.GS2 165c:3868 undefined FUN_165c_3868(void) */
/* WARNING: Type propagation algorithm not settling */

void __cdecl16far FUN_165c_3868(void)

{
  byte *pbVar1;
  int *piVar2;
  int *piVar3;
  byte bVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined2 extraout_DX;
  undefined2 uVar12;
  int *piVar13;
  undefined2 ******ppppppuVar14;
  undefined2 uVar15;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined4 uVar16;
  int local_b6 [5];
  undefined1 uStack_ac;
  int iStack_96;
  int iStack_42;
  int iStack_40;
  int local_3e;
  int iStack_3a;
  int iStack_38;
  int local_34;
  int local_30;
  int iStack_2c;
  uint uStack_2a;
  int local_28;
  int iStack_24;
  uint uStack_22;
  int iStack_1e;
  undefined2 ******local_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 local_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 ******ppppppuStack_10;
  undefined2 *******local_e;
  
  ppppppuVar14 = (undefined2 ******)0x10bf;
  FUN_10bf_02c0();
  *(undefined2 *)0x7a38 = 0;
  *(undefined2 *)0x7a36 = 0;
  *(undefined1 *)0x7a3a = 0;
  *(undefined1 *)0x7a34 = 0;
  if (*(int *)0xb8dc != 0) {
    *(undefined2 *)0xb8dc = 0;
    ppppppuVar14 = (undefined2 ******)0x1dea;
    local_e = (undefined2 *******)0x9e5f;
    FUN_1dea_1086();
  }
  *(undefined2 *)0xb8dc = 0;
  *(undefined2 *)0xb8e2 = 0;
  ppppppuStack_10 = (undefined2 ******)0x9e76;
  local_e = (undefined2 *******)ppppppuVar14;
  FUN_10bf_2c3a();
  local_e = (undefined2 *******)0x10bf;
  ppppppuStack_10 = (undefined2 ******)0x9e85;
  FUN_10bf_2c3a();
  local_e = (undefined2 *******)0x10bf;
  ppppppuStack_10 = (undefined2 ******)0x9e9c;
  FUN_10bf_2250();
  local_e = &local_e;
  ppppppuStack_10 = (undefined2 ******)0x10bf;
  uStack_12 = 0x9eb4;
  FUN_10bf_26e0();
  if (*(char *)0xad1b != '\0') {
    *(undefined1 *)0xad12 = *(undefined1 *)0xad11;
    *(undefined1 *)0xad11 = *(undefined1 *)0xb8d0;
  }
  *(undefined1 *)0xad0e = *(undefined1 *)0xb83e;
  iStack_40 = 0;
  iStack_24 = 0;
  iStack_3a = 0;
  iStack_96 = 0;
  *(undefined2 *)0xaca4 = 0;
  *(undefined1 *)0xe27e = 0;
  *(undefined1 *)0xe280 = 0;
  iVar7 = FUN_239c_0086();
  *(uint *)0xa248 = *(uint *)0xa248 ^ ((iVar7 == 0 ^ *(byte *)0xa249) & 1) << 8;
  iVar7 = FUN_239c_0086();
  *(uint *)0xa248 = *(uint *)0xa248 ^ ((byte)((0x28 < iVar7) << 1 ^ *(byte *)0xa249) & 2) << 8;
  bVar4 = FUN_239c_0086();
  *(int *)0xa250 = (uint)bVar4 << 8;
  ppppppuStack_10 = (undefined2 ******)FUN_239c_0008();
  iStack_2c = 0;
  while (ppppppuStack_10 =
              (undefined2 ******)((int)ppppppuStack_10 - (int)*(char *)(iStack_2c * 2 + 0x28a)),
        0 < (int)ppppppuStack_10) {
    iStack_2c = iStack_2c + 1;
  }
  *(int *)0xa252 = (int)*(char *)(iStack_2c * 2 + 0x28b);
  *(byte *)0xa249 = *(byte *)0xa249 & 0xf7;
  ppppppuStack_10 = (undefined2 ******)FUN_239c_0008();
  iStack_2c = 0;
  while (ppppppuStack_10 =
              (undefined2 ******)((int)ppppppuStack_10 - (int)*(char *)(iStack_2c * 2 + 0x2a6)),
        0 < (int)ppppppuStack_10) {
    iStack_2c = iStack_2c + 1;
  }
  cVar5 = FUN_239c_0086();
  *(char *)0xa26a =
       *(char *)(*(int *)0xb8ce * 0x36 + ((*(uint *)0xa248 & 0x200) >> 9) + -0x49d3) +
       *(char *)(iStack_2c * 2 + 0x2a7) + cVar5;
  uVar6 = FUN_239c_0086();
  *(undefined1 *)0xa26b = uVar6;
  iStack_2c = FUN_239c_0086();
  *(char *)0xa26c = (*(char *)0xa26b <= iStack_2c) + (char)iStack_2c;
  FUN_27d1_0e42();
  iStack_2c = FUN_239c_0086();
  *(undefined1 *)0xe27f = 0;
  if ((*(char *)0xad1b == '\x04') || (*(char *)0xad1b == '\x03')) {
    if (*(int *)0xb8ce == 0) {
      if (iStack_2c < 10) {
        *(undefined1 *)0xe27f = 2;
      }
      else if (iStack_2c < 0x1e) {
        *(undefined1 *)0xe27f = 1;
      }
    }
    else if (iStack_2c < 0xf) {
      *(undefined1 *)0xe27f = 1;
    }
  }
  if (*(int *)0xb8d2 == 0) {
    *(undefined2 *)0xb980 = 0;
    *(undefined2 *)0xb9be = 0;
    *(undefined2 *)0xb9fc = 0;
  }
  else {
    FUN_165c_2cce();
  }
  local_e = (undefined2 *******)0x20;
  ppppppuStack_10 = (undefined2 ******)0x239c;
  uStack_12 = 0xa083;
  iVar7 = FUN_165c_1f8e();
  if (iVar7 < 0) {
    *(undefined2 *)0xb980 = 2;
  }
  uVar15 = 0x239c;
  iVar7 = FUN_239c_0086();
  if (iVar7 != 0) {
    *(undefined2 *)0xb9fc = 0;
  }
  if (*(int *)0xb980 == 2) {
    *(byte *)0xa249 = *(byte *)0xa249 | 8;
    *(undefined2 *)0xb9fc = 0;
  }
  if ((*(int *)0xb9be == 4) || (*(int *)0xb9be == 6)) {
    *(undefined2 *)0xb9fc = 0;
  }
  if ((*(char *)0xad1b == '\x04') && (*(char *)0xad08 < *(char *)0xad07)) {
    iStack_1e = 0xb;
  }
  else {
    iStack_1e = 9;
  }
  *(undefined1 *)0x7a64 = 0x40;
  *(undefined2 *)0x7a5e = 0;
  *(undefined2 *)0x7a5c = 0;
  *(undefined2 *)0x7a62 = 0;
  *(undefined2 *)0x7a60 = 0;
  FUN_165c_1064();
  *(int *)0xb8e2 = *(int *)0xb8e2 + 1;
  FUN_165c_1064();
  *(int *)0xb8e2 = *(int *)0xb8e2 + 1;
  *(undefined1 *)0x7a26 = 0;
  cVar5 = *(char *)0xe282;
  *(int *)0xaca4 = (int)cVar5;
  if (cVar5 == '\x05') {
    piVar8 = (int *)FUN_165c_10d6();
    piVar13 = local_b6;
    for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
      piVar3 = piVar13;
      piVar13 = piVar13 + 1;
      piVar2 = piVar8;
      piVar8 = piVar8 + 1;
      *piVar3 = *piVar2;
    }
    if (local_b6[0] == -1) {
      piVar8 = (int *)FUN_165c_10d6();
      piVar13 = local_b6;
      for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
        piVar3 = piVar13;
        piVar13 = piVar13 + 1;
        piVar2 = piVar8;
        piVar8 = piVar8 + 1;
        *piVar3 = *piVar2;
      }
    }
    uStack_ac = 0x1b;
    for (iStack_2c = 0; iStack_2c < 4; iStack_2c = iStack_2c + 1) {
      piVar8 = (int *)(*(int *)0xaca4 * 0x20 + -0x5d80);
      *(int *)0xaca4 = *(int *)0xaca4 + 1;
      piVar13 = local_b6;
      for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
        piVar3 = piVar8;
        piVar8 = piVar8 + 1;
        piVar2 = piVar13;
        piVar13 = piVar13 + 1;
        *piVar3 = *piVar2;
      }
    }
  }
  FUN_165c_21aa();
  *(undefined1 *)0x7a26 = 2;
  bVar4 = *(byte *)0xa249;
  *(int *)0xb904 = 2 - (uint)((bVar4 & 8) == 0);
  iStack_3a = *(int *)0xaca4;
  if ((bVar4 & 8) == 0) {
    local_e = (undefined2 *******)0x20;
    ppppppuStack_10 = (undefined2 ******)0x239c;
    uStack_12 = 0xa337;
    FUN_165c_1f8e();
    if (*(char *)0x7a3a != '\0') {
      return;
    }
    if (*(char *)0x7a34 != '\0') {
      return;
    }
    FUN_165c_1ad4();
  }
  else {
    do {
      local_e = (undefined2 *******)0x20;
      uStack_12 = 0xa1ca;
      ppppppuStack_10 = (undefined2 ******)uVar15;
      FUN_165c_1f8e();
      if (*(char *)0x7a3a != '\0') {
        return;
      }
      if (*(char *)0x7a34 != '\0') {
        return;
      }
      if (*(int *)0xa27e == 0 && *(int *)0xa27c == 0) {
        uVar15 = 0x239c;
        local_e = (undefined2 *******)0xa1f0;
        uVar9 = FUN_239c_005c();
        uVar11 = uVar9 & 0xff;
        *(int *)0xa27c = uVar11 << 0xf;
        *(uint *)0xa27e =
             (((((((int)(char)(uVar9 >> 8) << 1 | (uint)((char)uVar9 < '\0')) << 1 |
                 (uint)((int)(uVar11 << 9) < 0)) << 1 | (uint)((int)(uVar11 << 10) < 0)) << 1 |
               (uint)((int)(uVar11 << 0xb) < 0)) << 1 | (uint)((int)(uVar11 << 0xc) < 0)) << 1 |
             (uint)((int)(uVar11 << 0xd) < 0)) << 1 | (uint)((int)(uVar11 << 0xe) < 0);
      }
      if (*(int *)0xaca2 == 0 && *(int *)0xaca0 == 0) {
        uVar15 = 0x239c;
        local_e = (undefined2 *******)0xa231;
        uVar9 = FUN_239c_005c();
        uVar11 = uVar9 & 0xff;
        *(int *)0xaca0 = uVar11 << 0xf;
        *(uint *)0xaca2 =
             (((((((int)(char)(uVar9 >> 8) << 1 | (uint)((char)uVar9 < '\0')) << 1 |
                 (uint)((int)(uVar11 << 9) < 0)) << 1 | (uint)((int)(uVar11 << 10) < 0)) << 1 |
               (uint)((int)(uVar11 << 0xb) < 0)) << 1 | (uint)((int)(uVar11 << 0xc) < 0)) << 1 |
             (uint)((int)(uVar11 << 0xd) < 0)) << 1 | (uint)((int)(uVar11 << 0xe) < 0);
      }
      iVar7 = 0;
      local_e = (undefined2 *******)*(undefined2 *)0xa27c;
      uStack_12 = 0xa277;
      ppppppuStack_10 = (undefined2 ******)uVar15;
      iVar10 = FUN_10bf_2efc();
      local_e = (undefined2 *******)*(undefined2 *)0xaca0;
      ppppppuStack_10 = (undefined2 ******)0x10bf;
      uVar15 = 0x10bf;
      uStack_12 = 0xa28e;
      uStack_22 = iVar10;
      uStack_2a = FUN_10bf_2efc();
      for (iStack_2c = iVar10 + -1; iStack_2c <= (int)(uStack_22 + 1); iStack_2c = iStack_2c + 1) {
        for (iStack_38 = uStack_2a + -1; iStack_38 <= (int)(uStack_2a + 1);
            iStack_38 = iStack_38 + 1) {
          if ((*(byte *)((*(byte *)(iStack_2c + iStack_38 * -0x40 + 0xfc0) & 0x3f) +
                        (int)*(undefined4 *)0xb854) & 0x40) != 0) {
            iVar7 = iVar7 + 1;
          }
        }
      }
    } while (iVar7 != 0);
    iVar7 = iStack_3a * 0x20;
    local_e = (undefined2 *******)0x10bf;
    uVar15 = 0x10bf;
    ppppppuStack_10 = (undefined2 ******)0xa307;
    FUN_10bf_2c3a();
    uVar12 = *(undefined2 *)0xa27e;
    *(undefined2 *)(iVar7 + -0x5d7e) = *(undefined2 *)0xa27c;
    *(undefined2 *)(iVar7 + -0x5d7c) = uVar12;
    uVar12 = *(undefined2 *)0xaca2;
    *(undefined2 *)(iVar7 + -0x5d7a) = *(undefined2 *)0xaca0;
    *(undefined2 *)(iVar7 + -0x5d78) = uVar12;
  }
  local_e = (undefined2 *******)0x0;
  uStack_12 = 0xa364;
  ppppppuStack_10 = (undefined2 ******)uVar15;
  FUN_165c_2886();
  uVar12 = *(undefined2 *)0xa27e;
  *(undefined2 *)0xa260 = *(undefined2 *)0xa27c;
  *(undefined2 *)0xa262 = uVar12;
  uVar12 = *(undefined2 *)0xaca2;
  *(undefined2 *)0xa264 = *(undefined2 *)0xaca0;
  *(undefined2 *)0xa266 = uVar12;
  if ((*(byte *)0xa249 & 8) != 0) {
    *(undefined2 *)0xa280 = 0;
    iVar7 = iStack_3a * 0x20;
    uVar12 = *(undefined2 *)(iVar7 + -0x5d7c);
    *(undefined2 *)0xa282 = *(undefined2 *)(iVar7 + -0x5d7e);
    *(undefined2 *)0xa284 = uVar12;
    uVar12 = *(undefined2 *)(iVar7 + -0x5d78);
    *(undefined2 *)0xa286 = *(undefined2 *)(iVar7 + -0x5d7a);
    *(undefined2 *)0xa288 = uVar12;
    iStack_96 = iStack_3a;
    iStack_3a = 0;
  }
  if ((*(uint *)((int)*(undefined4 *)0xb860 + (uint)*(byte *)(iStack_3a + -0x4794) * 0x27 + 0x25) &
      0x4000) != 0) {
    if (*(int *)0xb832 == 4) {
      *(undefined2 *)0xb832 = 5;
    }
    else {
      *(undefined2 *)0xb832 = 2;
    }
  }
  *(undefined1 *)0xa26d = *(undefined1 *)0xb832;
  if (*(char *)0xad1b == '\0') {
LAB_165c_3e49:
    *(undefined1 *)0xa270 = 0;
  }
  else {
    uVar15 = 0x239c;
    iVar7 = FUN_239c_0086();
    if (iVar7 != 0) goto LAB_165c_3e49;
    uVar15 = 0x239c;
    iVar7 = FUN_239c_0086();
    if (iVar7 < 0x3c) {
      cVar5 = '\x02';
    }
    else {
      cVar5 = '\x01';
    }
    *(char *)0xa270 = cVar5;
    if ((cVar5 == '\x01') &&
       ((((*(byte *)0xa249 & 8) != 0 || (*(int *)0xb832 == 2)) || (*(int *)0xb832 == 5)))) {
      *(undefined1 *)0xa270 = 2;
    }
  }
  if (*(char *)0xa270 == '\x02') {
    *(undefined1 *)0xe277 = *(undefined1 *)0xaca4;
    local_e = (undefined2 *******)0x0;
    uStack_12 = 0xa461;
    ppppppuStack_10 = (undefined2 ******)uVar15;
    FUN_165c_1f8e();
    FUN_165c_1ad4();
    if (*(char *)(*(int *)0xaca4 * 0x20 + -0x5d94) == '\0') {
      uVar6 = 0x16;
    }
    else {
      uVar6 = 0x17;
    }
    *(undefined1 *)0xa26e = uVar6;
    *(undefined1 *)0xa26f = 0x18;
  }
  iVar7 = iStack_3a * 0x20;
  local_e = (undefined2 *******)*(undefined2 *)(iVar7 + -0x5d7e);
  uStack_12 = 0xa4b2;
  ppppppuStack_10 = (undefined2 ******)uVar15;
  uStack_22 = FUN_10bf_2efc();
  *(uint *)0xaddc = uStack_22;
  local_e = (undefined2 *******)*(int *)(iVar7 + -0x5d7a);
  ppppppuStack_10 = (undefined2 ******)0x10bf;
  uStack_12 = 0xa4ca;
  uStack_2a = FUN_10bf_2efc();
  *(uint *)0xb5cc = uStack_2a;
  if (((int)uStack_22 < 8) && (iVar7 = FUN_10bf_2cc8(), (int)uStack_22 < iVar7)) {
    *(undefined2 *)0xaddc = 0;
  }
  else if (((int)uStack_22 < 8) || (iVar7 = FUN_10bf_2cc8(), iVar7 <= (int)(0x10 - uStack_22))) {
    if ((int)uStack_2a < 8) {
      *(undefined2 *)0xb5cc = 0;
    }
    else {
      *(undefined2 *)0xb5cc = 0x10;
    }
  }
  else {
    *(undefined2 *)0xaddc = 0x10;
  }
  iVar7 = FUN_10bf_2cc8();
  ppppppuVar14 = (undefined2 ******)0x10bf;
  iVar10 = FUN_10bf_2cc8();
  *(int *)0xb5ce = iVar7 + iVar10;
  if (*(char *)0xa270 == '\x02') {
    uVar11 = (int)(8U - *(int *)0xb5cc) >> 0xf;
    uStack_2a = *(int *)0xb5cc * 4 +
                (((int)((8U - *(int *)0xb5cc ^ uVar11) - uVar11) >> 3 ^ uVar11) - uVar11);
    iVar7 = *(int *)0xaddc;
    uVar11 = (int)(8U - *(int *)0xaddc) >> 0xf;
    uStack_22 = (((int)((8U - *(int *)0xaddc ^ uVar11) - uVar11) >> 3 ^ uVar11) - uVar11) +
                *(int *)0xaddc * 4;
    uVar11 = uStack_22 & 0xff;
    iVar10 = (uint)*(byte *)0xe277 * 0x20;
    *(int *)(iVar10 + -0x5d7e) = uVar11 * 0x2000 - (uint)(iVar7 == 0x10);
    *(int *)(iVar10 + -0x5d7c) =
         ((((((int)(char)(uStack_22 >> 8) << 1 | (uint)((char)uStack_22 < '\0')) << 1 |
            (uint)((int)(uVar11 << 9) < 0)) << 1 | (uint)((int)(uVar11 << 10) < 0)) << 1 |
          (uint)((int)(uVar11 << 0xb) < 0)) << 1 | (uint)((int)(uVar11 << 0xc) < 0)) -
         (uint)(uVar11 * 0x2000 < (uint)(iVar7 == 0x10));
    iVar7 = *(int *)0xb5cc;
    uVar11 = uStack_2a & 0xff;
    *(int *)(iVar10 + -0x5d7a) = uVar11 * 0x2000 - (uint)(iVar7 == 0x10);
    *(int *)(iVar10 + -0x5d78) =
         ((((((int)(char)(uStack_2a >> 8) << 1 | (uint)((char)uStack_2a < '\0')) << 1 |
            (uint)((int)(uVar11 << 9) < 0)) << 1 | (uint)((int)(uVar11 << 10) < 0)) << 1 |
          (uint)((int)(uVar11 << 0xb) < 0)) << 1 | (uint)((int)(uVar11 << 0xc) < 0)) -
         (uint)(uVar11 * 0x2000 < (uint)(iVar7 == 0x10));
  }
  if ((*(char *)0xad1b == '\x01') || (*(char *)0xa270 == '\x01')) {
    if (*(char *)0xe282 == '\x01') {
      iStack_2c = 9;
    }
    else {
      iStack_2c = 1;
    }
    iStack_2c = iStack_2c + *(int *)0xaca4;
    if (*(char *)0xa270 == '\x01') {
      *(undefined1 *)0xe277 = *(undefined1 *)0xaca4;
      do {
        do {
          local_e = (undefined2 *******)0x0;
          ppppppuStack_10 = (undefined2 ******)0x10bf;
          uStack_12 = 0xa66e;
          FUN_165c_1f8e();
          if (*(char *)0x7a3a != '\0') {
            return;
          }
          if (*(char *)0x7a34 != '\0') {
            return;
          }
          iVar7 = FUN_165c_2440();
        } while ((1 < iVar7) || (iVar7 = FUN_165c_2440(), iVar7 < 0));
        local_e = (undefined2 *******)0xa6ab;
        iVar7 = FUN_165c_238a();
      } while (iVar7 <= *(int *)0xb5ce);
      FUN_165c_1ad4();
      ppppppuVar14 = (undefined2 ******)0x239c;
      local_e = (undefined2 *******)0xa6c5;
      uVar6 = FUN_239c_005c();
      *(undefined1 *)0xa26e = uVar6;
    }
    while (*(int *)0xaca4 < iStack_2c) {
      for (iStack_38 = 0; iStack_38 < 100; iStack_38 = iStack_38 + 1) {
        local_e = (undefined2 *******)0x0;
        uStack_12 = 0xa6f2;
        ppppppuStack_10 = ppppppuVar14;
        FUN_165c_1f8e();
        if (*(char *)0x7a3a != '\0') {
          return;
        }
        if (*(char *)0x7a34 != '\0') {
          return;
        }
        iVar7 = FUN_165c_2440();
        if ((iVar7 < 2) && (iVar7 = FUN_165c_2440(), -1 < iVar7)) {
          local_e = (undefined2 *******)0xa72f;
          iVar7 = FUN_165c_238a();
          if (*(int *)0xb5ce < iVar7) break;
        }
      }
      if (iStack_38 < 100) {
        FUN_165c_1ad4();
      }
      else {
        iStack_2c = 0;
      }
    }
  }
  iStack_2c = iStack_3a;
  if ((*(byte *)0xa249 & 8) != 0) {
    iStack_2c = iStack_96;
  }
  for (; iStack_2c < *(int *)0xaca4; iStack_2c = iStack_2c + 1) {
    if (0 < *(int *)(iStack_2c * 0x20 + -0x5d65)) {
      piVar2 = (int *)(iStack_2c * 0x20 + -0x5d65);
      *piVar2 = -*piVar2;
    }
  }
  *(undefined1 *)0x7a26 = 3;
  if (*(int *)0xb980 != 0) {
    iStack_24 = *(int *)0xaca4;
    do {
      do {
        do {
          if (*(char *)0xad1b == '\0') {
            local_e = (undefined2 *******)0x1;
            uStack_12 = 0xa7af;
            ppppppuStack_10 = ppppppuVar14;
            FUN_165c_1f8e();
            if (*(char *)0x7a3a != '\0') {
              return;
            }
            cVar5 = *(char *)0x7a34;
          }
          else {
            local_e = (undefined2 *******)*(undefined2 *)(*(int *)0xb980 * 4 + 0x1ba6);
            uStack_12 = 0xa818;
            ppppppuStack_10 = ppppppuVar14;
            FUN_165c_1f8e();
            if (*(char *)0x7a3a != '\0') {
              return;
            }
            cVar5 = *(char *)0x7a34;
          }
          if (cVar5 != '\0') {
            return;
          }
        } while (((*(byte *)0xa249 & 8) != 0) &&
                (uVar15 = (undefined2)((ulong)*(undefined4 *)0xb860 >> 0x10),
                iVar7 = (int)*(undefined4 *)0xb860,
                (*(uint *)(iVar7 + *(int *)0xa276 * 0x27 + 0x25) & 0x20) != 0 ||
                (*(uint *)(iVar7 + *(int *)0xa276 * 0x27 + 0x23) & 0x380) != 0));
        if (*(char *)0xad1b == '\0') goto LAB_165c_42d2;
        iVar7 = FUN_165c_2440();
      } while ((iVar7 < 5) || (iVar7 = FUN_165c_2440(), iStack_1e < iVar7));
      local_e = (undefined2 *******)0xa882;
      iVar7 = FUN_165c_238a();
    } while (iVar7 < *(int *)0xb5ce);
LAB_165c_42d2:
    FUN_165c_1ad4();
    iStack_38 = *(int *)0xaca4 - iStack_24;
    if (-1 < *(char *)0xe279) {
      iStack_24 = (int)*(char *)0xe279;
      iStack_2c = iStack_24;
      while ((uint)*(byte *)(iStack_2c + -0x4794) == *(uint *)0xa276) {
        pbVar1 = (byte *)(iStack_2c * 0x20 + -0x5d80);
        *pbVar1 = *pbVar1 | 0x10;
        iStack_2c = iStack_2c + 1;
      }
      iStack_38 = iStack_2c - iStack_24;
    }
    local_e = (undefined2 *******)0x2;
    uStack_12 = 0xa8e4;
    ppppppuStack_10 = ppppppuVar14;
    FUN_165c_2886();
    if (*(char *)0xe279 < '\0') {
      iStack_2c = iStack_24;
      while ((iStack_2c < *(int *)0xaca4 &&
             (pbVar1 = (byte *)(iStack_2c * 0x20 + -0x5d80), *pbVar1 = *pbVar1 | 0x10,
             *(int *)0xb980 != 2))) {
        iStack_2c = iStack_2c + 1;
      }
    }
  }
  *(undefined1 *)0x7a26 = 4;
  if (*(int *)0xb9be != 0) {
    iStack_40 = *(int *)0xaca4;
    do {
      do {
        do {
          local_e = (undefined2 *******)*(undefined2 *)(*(int *)0xb9be * 4 + 0x1ba6);
          uStack_12 = 0xa980;
          ppppppuStack_10 = ppppppuVar14;
          FUN_165c_1f8e();
          if (*(char *)0x7a3a != '\0') {
            return;
          }
          if (*(char *)0x7a34 != '\0') {
            return;
          }
        } while ((uint)*(byte *)(iStack_24 + -0x4794) == *(uint *)0xa276);
        if ((*(char *)0xad1b == '\0') && (iVar7 = FUN_165c_2440(), 0 < iVar7)) goto LAB_165c_444c;
        iVar7 = FUN_165c_2440();
      } while ((iVar7 < 6) ||
              ((iVar7 = FUN_165c_2440(), iStack_1e < iVar7 ||
               (iVar7 = FUN_165c_2440(),
               iVar7 < (int)((-(uint)(*(char *)0xad1b == '\0') & 0xfffd) + 4)))));
      local_e = (undefined2 *******)0xa9fd;
      iVar7 = FUN_165c_238a();
    } while (iVar7 < *(int *)0xb5ce);
LAB_165c_444c:
    FUN_165c_1ad4();
    iStack_38 = *(int *)0xaca4 - iStack_40;
    if (-1 < *(char *)0xe279) {
      iStack_40 = (int)*(char *)0xe279;
      iStack_2c = iStack_40;
      while ((uint)*(byte *)(iStack_2c + -0x4794) == *(uint *)0xa276) {
        pbVar1 = (byte *)(iStack_2c * 0x20 + -0x5d80);
        *pbVar1 = *pbVar1 | 0x20;
        iStack_2c = iStack_2c + 1;
      }
      iStack_38 = iStack_2c - iStack_40;
    }
    local_e = (undefined2 *******)0x3;
    uStack_12 = 0xaa5e;
    ppppppuStack_10 = ppppppuVar14;
    FUN_165c_2886();
    if (*(char *)0xe279 < '\0') {
      iStack_2c = iStack_40;
      while ((iStack_2c < *(int *)0xaca4 &&
             (pbVar1 = (byte *)(iStack_2c * 0x20 + -0x5d80), *pbVar1 = *pbVar1 | 0x20,
             *(int *)0xb9be != 2))) {
        iStack_2c = iStack_2c + 1;
      }
    }
  }
  *(undefined1 *)0x7a26 = 5;
  if (*(int *)0xb9fc != 0) {
    iStack_42 = *(int *)0xaca4;
    do {
      do {
        do {
          local_e = (undefined2 *******)*(undefined2 *)(*(int *)0xb9fc * 4 + 0x1ba6);
          uStack_12 = 0xaac0;
          ppppppuStack_10 = ppppppuVar14;
          FUN_165c_1f8e();
          if (*(char *)0x7a3a != '\0') {
            return;
          }
          if (*(char *)0x7a34 != '\0') {
            return;
          }
        } while (((uint)*(byte *)(iStack_24 + -0x4794) == *(uint *)0xa276) ||
                ((uint)*(byte *)(iStack_40 + -0x4794) == *(uint *)0xa276));
        if ((*(char *)0xad1b == '\0') && (iVar7 = FUN_165c_2440(), 0 < iVar7)) goto LAB_165c_45ac;
        iVar7 = FUN_165c_2440();
      } while ((((iVar7 < 6) || (iVar7 = FUN_165c_2440(), iStack_1e < iVar7)) ||
               (iVar7 = FUN_165c_2440(),
               iVar7 < (int)((-(uint)(*(char *)0xad1b == '\0') & 0xfffd) + 4))) ||
              (iVar7 = FUN_165c_2440(), iVar7 < 2));
      local_e = (undefined2 *******)0xab5c;
      iVar7 = FUN_165c_238a();
    } while (iVar7 < *(int *)0xb5ce);
LAB_165c_45ac:
    FUN_165c_1ad4();
    iStack_38 = *(int *)0xaca4 - iStack_42;
    if (-1 < *(char *)0xe279) {
      iStack_42 = (int)*(char *)0xe279;
      iStack_2c = iStack_42;
      while ((uint)*(byte *)(iStack_2c + -0x4794) == *(uint *)0xa276) {
        pbVar1 = (byte *)(iStack_2c * 0x20 + -0x5d80);
        *pbVar1 = *pbVar1 | 0x40;
        iStack_2c = iStack_2c + 1;
      }
      iStack_38 = iStack_2c - iStack_42;
    }
    local_e = (undefined2 *******)0x4;
    uStack_12 = 0xabbe;
    ppppppuStack_10 = ppppppuVar14;
    FUN_165c_2886();
    if (*(char *)0xe279 < '\0') {
      iStack_2c = iStack_42;
      while ((iStack_2c < *(int *)0xaca4 &&
             (pbVar1 = (byte *)(iStack_2c * 0x20 + -0x5d80), *pbVar1 = *pbVar1 | 0x40,
             *(int *)0xb9fc != 2))) {
        iStack_2c = iStack_2c + 1;
      }
    }
  }
  *(undefined1 *)0x7a26 = 2;
  *(undefined2 *)0xb942 = 0;
  if (((*(char *)0xad1b != '\0') && ((*(byte *)0xa249 & 8) == 0)) &&
     ((*(int *)0xb832 != 2 && (*(int *)0xb832 != 5)))) {
    ppppppuVar14 = (undefined2 ******)0x239c;
    iVar7 = FUN_239c_0086();
    if (2 < iVar7) goto LAB_165c_4784;
  }
  *(undefined2 *)0xb942 = 1;
  iStack_96 = *(int *)0xaca4;
  do {
    do {
      local_e = (undefined2 *******)0x40;
      uStack_12 = 0xac44;
      ppppppuStack_10 = ppppppuVar14;
      FUN_165c_1f8e();
      if (*(char *)0x7a3a != '\0') {
        return;
      }
      if (*(char *)0x7a34 != '\0') {
        return;
      }
      if (*(char *)0xad1b == '\0') goto LAB_165c_4708;
      iVar7 = FUN_165c_2440();
    } while (((iVar7 < 6) ||
             (((iVar7 = FUN_165c_2440(), 5 < iVar7 && (iVar7 = FUN_165c_2440(), 5 < iVar7)) ||
              (iVar7 = FUN_165c_2440(), iVar7 < 2)))) || (iVar7 = FUN_165c_2440(), iVar7 < 2));
    local_e = (undefined2 *******)0xacb9;
    iVar7 = FUN_165c_238a();
  } while (iVar7 < *(int *)0xb5ce);
LAB_165c_4708:
  FUN_165c_1ad4();
  iStack_2c = iStack_96;
  while ((uint)*(byte *)(iStack_2c + -0x4794) == *(uint *)0xa276) {
    pbVar1 = (byte *)(iStack_2c * 0x20 + -0x5d80);
    *pbVar1 = *pbVar1 | 0x80;
    iStack_2c = iStack_2c + 1;
  }
  ppppppuStack_10 = (undefined2 ******)0xad00;
  local_e = (undefined2 *******)ppppppuVar14;
  FUN_165c_26c4();
  local_e = (undefined2 *******)0x1;
  uStack_12 = 0xad19;
  ppppppuStack_10 = ppppppuVar14;
  FUN_165c_2886();
  for (iStack_2c = iStack_96; iStack_2c < *(int *)0xaca4; iStack_2c = iStack_2c + 1) {
    if (0 < *(int *)(iStack_2c * 0x20 + -0x5d65)) {
      piVar2 = (int *)(iStack_2c * 0x20 + -0x5d65);
      *piVar2 = -*piVar2;
    }
  }
LAB_165c_4784:
  *(undefined1 *)0x7a26 = 9;
  if (*(char *)0xad1b != '\0') {
    if ((*(int *)0xb980 != 0) && (*(int *)0xaca4 < 0x50)) {
      ppppppuStack_10 = (undefined2 ******)0xad76;
      local_e = (undefined2 *******)ppppppuVar14;
      FUN_165c_26c4();
      ppppppuStack_10 = (undefined2 ******)0xad88;
      local_e = (undefined2 *******)ppppppuVar14;
      FUN_165c_26c4();
      iVar7 = iStack_3a * 0x20;
      local_e = (undefined2 *******)(*(int *)(iVar7 + -0x5d7e) + local_28);
      uStack_12 = 0xadac;
      ppppppuStack_10 = ppppppuVar14;
      uVar16 = FUN_10bf_2efc();
      *(undefined2 *)0xa27c = (int)uVar16;
      *(undefined2 *)0xa27e = (int)((ulong)uVar16 >> 0x10);
      local_e = (undefined2 *******)(*(int *)(iVar7 + -0x5d7a) + local_30);
      ppppppuStack_10 = (undefined2 ******)0x10bf;
      ppppppuVar14 = (undefined2 ******)0x10bf;
      uStack_12 = 0xadcc;
      uVar16 = FUN_10bf_2efc();
      *(undefined2 *)0xaca0 = (int)uVar16;
      *(undefined2 *)0xaca2 = (int)((ulong)uVar16 >> 0x10);
      iVar7 = FUN_165c_2440();
      if (3 < iVar7) {
        local_e = (undefined2 *******)*(undefined2 *)0xa27c;
        ppppppuStack_10 = (undefined2 ******)0x10bf;
        uStack_12 = 0xadf4;
        uStack_22 = FUN_10bf_2efc();
        local_e = (undefined2 *******)*(int *)0xaca0;
        ppppppuStack_10 = (undefined2 ******)0x10bf;
        ppppppuVar14 = (undefined2 ******)0x10bf;
        uStack_12 = 0xae09;
        uStack_2a = FUN_10bf_2efc();
        for (iStack_2c = 0; iStack_2c < 100; iStack_2c = iStack_2c + 1) {
          local_e = (undefined2 *******)0x0;
          ppppppuStack_10 = (undefined2 ******)0x10bf;
          uStack_12 = 0xae2a;
          FUN_165c_1f8e();
          if (*(char *)0x7a3a != '\0') {
            return;
          }
          if (*(char *)0x7a34 != '\0') {
            return;
          }
          local_e = (undefined2 *******)0xae48;
          iVar7 = FUN_165c_238a();
          if (iVar7 < 2) {
            FUN_165c_1ad4();
            break;
          }
        }
      }
    }
    if ((*(int *)0xb9be != 0) && (*(int *)0xaca4 < 0x50)) {
      iVar7 = iStack_3a * 0x20;
      local_e = (undefined2 *******)(*(int *)(iVar7 + -0x5d7e) + local_34);
      uStack_12 = 0xae8d;
      ppppppuStack_10 = ppppppuVar14;
      uVar16 = FUN_10bf_2efc();
      *(undefined2 *)0xa27c = (int)uVar16;
      *(undefined2 *)0xa27e = (int)((ulong)uVar16 >> 0x10);
      local_e = (undefined2 *******)(*(int *)(iVar7 + -0x5d7a) + local_3e);
      ppppppuStack_10 = (undefined2 ******)0x10bf;
      ppppppuVar14 = (undefined2 ******)0x10bf;
      uStack_12 = 0xaead;
      uVar16 = FUN_10bf_2efc();
      *(undefined2 *)0xaca0 = (int)uVar16;
      *(undefined2 *)0xaca2 = (int)((ulong)uVar16 >> 0x10);
      iVar7 = FUN_165c_2440();
      if (3 < iVar7) {
        local_e = (undefined2 *******)*(undefined2 *)0xa27c;
        ppppppuStack_10 = (undefined2 ******)0x10bf;
        uStack_12 = 0xaed5;
        uStack_22 = FUN_10bf_2efc();
        local_e = (undefined2 *******)*(int *)0xaca0;
        ppppppuStack_10 = (undefined2 ******)0x10bf;
        ppppppuVar14 = (undefined2 ******)0x10bf;
        uStack_12 = 0xaeea;
        uStack_2a = FUN_10bf_2efc();
        for (iStack_2c = 0; iStack_2c < 100; iStack_2c = iStack_2c + 1) {
          local_e = (undefined2 *******)0x0;
          ppppppuStack_10 = (undefined2 ******)0x10bf;
          uStack_12 = 0xaf0a;
          FUN_165c_1f8e();
          if (*(char *)0x7a3a != '\0') {
            return;
          }
          if (*(char *)0x7a34 != '\0') {
            return;
          }
          local_e = (undefined2 *******)0xaf28;
          iVar7 = FUN_165c_238a();
          if (iVar7 < 2) {
            FUN_165c_1ad4();
            break;
          }
        }
      }
    }
    if (((*(int *)0xb980 != 0) && (*(int *)0xb9be != 0)) && (*(int *)0xaca4 < 0x50)) {
      local_e = (undefined2 *******)(local_34 + local_28);
      uStack_12 = 0xaf6d;
      ppppppuStack_10 = ppppppuVar14;
      uVar16 = FUN_10bf_2efc();
      *(undefined2 *)0xa27c = (int)uVar16;
      *(undefined2 *)0xa27e = (int)((ulong)uVar16 >> 0x10);
      local_e = (undefined2 *******)(local_3e + local_30);
      ppppppuStack_10 = (undefined2 ******)0x10bf;
      ppppppuVar14 = (undefined2 ******)0x10bf;
      uStack_12 = 0xaf8b;
      uVar16 = FUN_10bf_2efc();
      *(undefined2 *)0xaca0 = (int)uVar16;
      *(undefined2 *)0xaca2 = (int)((ulong)uVar16 >> 0x10);
      iVar7 = FUN_165c_2440();
      if (3 < iVar7) {
        local_e = (undefined2 *******)*(undefined2 *)0xa27c;
        ppppppuStack_10 = (undefined2 ******)0x10bf;
        uStack_12 = 0xafb6;
        uStack_22 = FUN_10bf_2efc();
        local_e = (undefined2 *******)*(int *)0xaca0;
        ppppppuStack_10 = (undefined2 ******)0x10bf;
        ppppppuVar14 = (undefined2 ******)0x10bf;
        uStack_12 = 0xafcb;
        uStack_2a = FUN_10bf_2efc();
        for (iStack_2c = 0; iStack_2c < 100; iStack_2c = iStack_2c + 1) {
          local_e = (undefined2 *******)0x0;
          ppppppuStack_10 = (undefined2 ******)0x10bf;
          uStack_12 = 0xafec;
          FUN_165c_1f8e();
          if ((*(char *)0x7a3a != '\0') || (*(char *)0x7a34 != '\0')) {
            return;
          }
          iVar7 = FUN_165c_2440();
          if (iVar7 < 2) break;
          local_e = (undefined2 *******)0xb01e;
          iVar7 = FUN_165c_238a();
          if (iVar7 == 0) {
            FUN_165c_1ad4();
            break;
          }
        }
      }
    }
  }
  FUN_165c_37e0();
  while( true ) {
    if (0x4f < *(int *)0xaca4) {
      uVar15 = 0x1dea;
      local_e = (undefined2 *******)0xb10f;
      FUN_1dea_1086();
      *(undefined2 *)0x7a2a = 0;
      *(undefined2 *)0x7a28 = 0;
      if (*(int *)0xb9fc != 0) {
        local_e = (undefined2 *******)0x1dea;
        ppppppuStack_10 = (undefined2 ******)0xb12f;
        FUN_165c_26c4();
        local_e = (undefined2 *******)local_1c;
        ppppppuStack_10 = (undefined2 ******)uStack_14;
        uStack_12 = local_16;
        iVar7 = iStack_3a * 0x20;
        uStack_14 = *(undefined2 *)(iVar7 + -0x5d78);
        local_16 = *(undefined2 *)(iVar7 + -0x5d7a);
        uStack_18 = *(undefined2 *)(iVar7 + -0x5d7c);
        uStack_1a = *(undefined2 *)(iVar7 + -0x5d7e);
        local_1c = (undefined2 ******)0x1dea;
        iStack_1e = -0x4ea3;
        local_e = (undefined2 *******)FUN_165c_0cb2();
        ppppppuStack_10 = (undefined2 ******)0x1dea;
        uStack_12 = 0xb167;
        FUN_10bf_2f96();
        FUN_10bf_4c38();
        FUN_10bf_4fb0();
        uVar15 = 0x10bf;
        uVar12 = extraout_DX;
        local_16 = FUN_10bf_4e05();
        *(undefined2 *)0xb9d2 = local_16;
        uStack_14 = uVar12;
      }
      local_e = (undefined2 *******)0xb5d6;
      uStack_12 = 0xb1ae;
      ppppppuStack_10 = (undefined2 ******)uVar15;
      FUN_10bf_319c();
      iStack_3a = iStack_3a * 0x20;
      uVar15 = *(undefined2 *)(iStack_3a + -0x5d7c);
      *(undefined2 *)0xa282 = *(undefined2 *)(iStack_3a + -0x5d7e);
      *(undefined2 *)0xa284 = uVar15;
      uVar15 = *(undefined2 *)(iStack_3a + -0x5d78);
      *(undefined2 *)0xa286 = *(undefined2 *)(iStack_3a + -0x5d7a);
      *(undefined2 *)0xa288 = uVar15;
      return;
    }
    *(undefined1 *)0x7a26 = 6;
    ppppppuStack_10 = (undefined2 ******)0xb04d;
    local_e = (undefined2 *******)ppppppuVar14;
    FUN_165c_352c();
    if ((*(char *)0x7a3a != '\0') || (*(char *)0x7a34 != '\0')) break;
    if (*(int *)0xaca4 < 0x50) {
      *(undefined1 *)0x7a26 = 7;
      ppppppuStack_10 = (undefined2 ******)0xb07a;
      local_e = (undefined2 *******)ppppppuVar14;
      FUN_165c_352c();
      if ((*(char *)0x7a3a != '\0') || (*(char *)0x7a34 != '\0')) {
        return;
      }
    }
    ppppppuVar14 = (undefined2 ******)0x239c;
    iVar7 = FUN_239c_0086();
    if (((iVar7 != 0) && (*(int *)0xb9fc != 0)) && (*(int *)0xaca4 < 0x50)) {
      *(undefined1 *)0x7a26 = 8;
      local_e = (undefined2 *******)0x239c;
      ppppppuStack_10 = (undefined2 ******)0xb0bd;
      FUN_165c_352c();
      if ((*(char *)0x7a3a != '\0') || (*(char *)0x7a34 != '\0')) {
        return;
      }
    }
    if (*(int *)0xaca4 < 0x50) {
      *(undefined1 *)0x7a26 = 10;
      local_e = (undefined2 *******)0x239c;
      ppppppuStack_10 = (undefined2 ******)0xb0e9;
      FUN_165c_352c();
      if ((*(char *)0x7a3a != '\0') || (*(char *)0x7a34 != '\0')) {
        return;
      }
    }
  }
  return;
}
