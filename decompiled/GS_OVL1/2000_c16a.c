/* GS.GS2 2000:c16a undefined FUN_2000_c16a(void) */
void __cdecl16far FUN_2000_c16a(void)

{
  byte *pbVar1;
  undefined2 *puVar2;
  int *piVar3;
  undefined2 *puVar4;
  undefined2 uVar5;
  long lVar6;
  undefined1 uVar7;
  int *piVar8;
  int *piVar9;
  undefined2 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int unaff_SI;
  undefined2 *puVar18;
  undefined2 *puVar19;
  int *piVar20;
  int *piVar21;
  byte *pbVar22;
  undefined2 uVar23;
  undefined2 unaff_DS;
  undefined4 uVar24;
  char cVar25;
  undefined1 uVar26;
  int iVar27;
  int iStack_c;
  
  func_0x00000eb0();
  cVar25 = '\t';
  for (iVar27 = 0; iVar27 < 5; iVar27 = iVar27 + 1) {
    puVar19 = (undefined2 *)(iVar27 * 0x3e + -0x471c);
    puVar18 = (undefined2 *)0x276c;
    for (iVar16 = 0x1f; iVar16 != 0; iVar16 = iVar16 + -1) {
      puVar4 = puVar19;
      puVar19 = puVar19 + 1;
      puVar2 = puVar18;
      puVar18 = puVar18 + 1;
      *puVar4 = *puVar2;
    }
  }
  if (*(char *)0xe28c != '\x02') {
    puVar18 = (undefined2 *)(*(int *)0xc018 * 0xb + -0x4362);
    *(int *)0xc018 = *(int *)0xc018 + 1;
    puVar19 = (undefined2 *)0xc4d2;
    for (iVar27 = 5; iVar27 != 0; iVar27 = iVar27 + -1) {
      puVar4 = puVar18;
      puVar18 = puVar18 + 1;
      puVar2 = puVar19;
      puVar19 = puVar19 + 1;
      *puVar4 = *puVar2;
    }
    *(undefined1 *)puVar18 = *(undefined1 *)puVar19;
    cVar25 = '\t';
    unaff_SI = func_0x00023aee();
  }
  if (*(int *)0xc4e6 != 9999) {
    puVar18 = (undefined2 *)(*(int *)0xc018 * 0xb + -0x4362);
    *(int *)0xc018 = *(int *)0xc018 + 1;
    puVar19 = (undefined2 *)0xc4e0;
    for (iVar27 = 5; iVar27 != 0; iVar27 = iVar27 + -1) {
      puVar4 = puVar18;
      puVar18 = puVar18 + 1;
      puVar2 = puVar19;
      puVar19 = puVar19 + 1;
      *puVar4 = *puVar2;
    }
    *(undefined1 *)puVar18 = *(undefined1 *)puVar19;
    func_0x00023aee();
  }
  puVar18 = (undefined2 *)(*(int *)0xc018 * 0xb + -0x4362);
  *(int *)0xc018 = *(int *)0xc018 + 1;
  puVar19 = (undefined2 *)0xc4f0;
  for (iVar27 = 5; iVar27 != 0; iVar27 = iVar27 + -1) {
    puVar4 = puVar18;
    puVar18 = puVar18 + 1;
    puVar2 = puVar19;
    puVar19 = puVar19 + 1;
    *puVar4 = *puVar2;
  }
  *(undefined1 *)puVar18 = *(undefined1 *)puVar19;
  iVar27 = func_0x00023aee();
  puVar18 = (undefined2 *)(*(int *)0xc018 * 0xb + -0x4362);
  *(int *)0xc018 = *(int *)0xc018 + 1;
  puVar19 = (undefined2 *)0xc504;
  for (iVar16 = 5; iVar16 != 0; iVar16 = iVar16 + -1) {
    puVar4 = puVar18;
    puVar18 = puVar18 + 1;
    puVar2 = puVar19;
    puVar19 = puVar19 + 1;
    *puVar4 = *puVar2;
  }
  *(undefined1 *)puVar18 = *(undefined1 *)puVar19;
  piVar8 = (int *)func_0x00023aee();
  for (iVar16 = 0; iVar16 < *(int *)0xc018; iVar16 = iVar16 + 1) {
    iVar15 = iVar16 * 0xb;
    *(undefined1 *)((*(int *)(iVar15 + -0x435a) / 0x12) * 0x40 + *(int *)(iVar15 + -0x435c) / 0x18)
         = *(undefined1 *)(iVar15 + -0x4358);
  }
  piVar9 = (int *)(int)cVar25;
  for (iVar16 = 0; iVar16 < *(int *)0xc018; iVar16 = iVar16 + 1) {
    piVar8 = (int *)(iVar16 * 0xb);
    puVar18 = (undefined2 *)(piVar8[-0x21af] * 0x20 + *(int *)0xb868);
    uVar10 = *(undefined2 *)0xb86a;
    puVar19 = (undefined2 *)((int)piVar9 * 0x20 + -0x5d80);
    for (iVar15 = 0x10; iVar15 != 0; iVar15 = iVar15 + -1) {
      puVar4 = puVar19;
      puVar19 = puVar19 + 1;
      puVar2 = puVar18;
      puVar18 = puVar18 + 1;
      *puVar4 = *puVar2;
    }
    uVar10 = (undefined2)((ulong)*(undefined4 *)0xb860 >> 0x10);
    piVar21 = piVar9;
    if ((*(byte *)((int)*(undefined4 *)0xb860 + piVar8[-0x21b1] * 0x27 + 0x24) & 2) == 0) {
      iVar15 = iVar16 * 0xb;
      if ((*(byte *)(*(int *)0xb860 + *(int *)(iVar15 + -0x4362) * 0x27 + 0x25) & 0x10) == 0) {
        piVar8 = (int *)(*(int *)(iVar16 * 0xb + -0x435a) / -0x12 + 0x3f);
        func_0x00007802();
        piVar21 = piVar9;
      }
      else {
        lVar6 = (long)*(int *)(iVar15 + -0x435c) * 0x155;
        iVar11 = (int)lVar6;
        *(int *)0xa27c = iVar11 + -1;
        *(int *)0xa27e = (int)((ulong)lVar6 >> 0x10) - (uint)(iVar11 == 0);
        lVar6 = (long)*(int *)(iVar15 + -0x435a) * -0x1c7 + 0x7ffff;
        *(undefined2 *)0xaca0 = (int)lVar6;
        *(undefined2 *)0xaca2 = (int)((ulong)lVar6 >> 0x10);
      }
    }
    else {
      func_0x000273ae();
      piVar8 = piVar9;
    }
    iVar11 = *(int *)(iVar16 * 0xb + -0x4360) * 8 + *(int *)0xb85c;
    uVar10 = *(undefined2 *)0xb85e;
    uVar17 = *(uint *)(iVar11 + 4);
    uVar14 = *(uint *)0xa27c;
    iVar15 = *(int *)0xa27e;
    iVar12 = (int)piVar21 * 0x20;
    *(int *)(iVar12 + -0x5d7e) = uVar17 + *(uint *)0xa27c;
    *(int *)(iVar12 + -0x5d7c) = ((int)uVar17 >> 0xf) + iVar15 + (uint)CARRY2(uVar17,uVar14);
    uVar17 = *(uint *)(iVar11 + 6);
    uVar14 = *(uint *)0xaca0;
    iVar15 = *(int *)0xaca2;
    *(int *)(iVar12 + -0x5d7a) = uVar17 + *(uint *)0xaca0;
    *(int *)(iVar12 + -0x5d78) = ((int)uVar17 >> 0xf) + iVar15 + (uint)CARRY2(uVar17,uVar14);
    iVar11 = *(int *)(iVar16 * 0xb + -0x4362) * 0x27;
    uVar10 = (undefined2)((ulong)*(undefined4 *)0xb860 >> 0x10);
    iVar15 = (int)*(undefined4 *)0xb860;
    if ((*(int *)(iVar15 + iVar11 + 0x23) == 0) && (*(int *)(iVar15 + iVar11 + 0x25) == 0x1000)) {
      piVar8 = (int *)(iVar12 + -0x5d7a);
      FUN_2000_c0a4();
    }
    if ((*(byte *)((int)*(undefined4 *)0xb860 + *(int *)(iVar16 * 0xb + -0x4362) * 0x27 + 0x24) &
        0x40) != 0) {
      *(undefined1 *)((int)piVar21 * 0x20 + -0x5d76) = 0x17;
    }
    iVar15 = *(int *)(iVar16 * 0xb + -0x4360) * 8 + *(int *)0xb85c;
    uVar10 = *(undefined2 *)0xb85e;
    *(undefined1 *)((int)piVar21 * 0x20 + -0x5d75) = *(undefined1 *)(iVar15 + 3);
    *(undefined1 *)(piVar21 + -0x23ca) = *(undefined1 *)(iVar16 * 0xb + -0x4362);
    piVar9 = (int *)((int)piVar21 + 1);
    if (*(char *)(iVar15 + 2) == '\x01') {
      iVar15 = 1;
      while (piVar21 = (int *)(iVar16 * 0xb + -0x4360),
            *(char *)((*piVar21 + iVar15) * 8 + (int)*(undefined4 *)0xb85c) == -1) {
        iVar11 = func_0x00023a48();
        puVar18 = (undefined2 *)(iVar11 * 0x20 + *(int *)0xb868);
        uVar10 = *(undefined2 *)0xb86a;
        iVar12 = (int)piVar9 * 0x20;
        puVar19 = (undefined2 *)(iVar12 + -0x5d80);
        for (iVar11 = 0x10; iVar11 != 0; iVar11 = iVar11 + -1) {
          puVar4 = puVar19;
          puVar19 = puVar19 + 1;
          puVar2 = puVar18;
          puVar18 = puVar18 + 1;
          *puVar4 = *puVar2;
        }
        *(undefined1 *)(piVar9 + -0x23ca) = *(undefined1 *)((int)piVar9 + -0x4795);
        iVar13 = (*piVar21 + iVar15) * 8 + *(int *)0xb85c;
        uVar10 = *(undefined2 *)0xb85e;
        uVar17 = *(uint *)(iVar13 + 4);
        uVar14 = *(uint *)0xa27c;
        iVar11 = *(int *)0xa27e;
        *(int *)(iVar12 + -0x5d7e) = uVar17 + *(uint *)0xa27c;
        *(int *)(iVar12 + -0x5d7c) = ((int)uVar17 >> 0xf) + iVar11 + (uint)CARRY2(uVar17,uVar14);
        uVar17 = *(uint *)(iVar13 + 6);
        uVar14 = *(uint *)0xaca0;
        iVar11 = *(int *)0xaca2;
        *(int *)(iVar12 + -0x5d7a) = uVar17 + *(uint *)0xaca0;
        *(int *)(iVar12 + -0x5d78) = ((int)uVar17 >> 0xf) + iVar11 + (uint)CARRY2(uVar17,uVar14);
        *(undefined1 *)(iVar12 + -0x5d75) = *(undefined1 *)(iVar13 + 3);
        piVar9 = (int *)((int)piVar9 + 1);
        iVar15 = iVar15 + 1;
        piVar8 = piVar21;
      }
    }
  }
  if (*(int *)0xbc7d == 2) {
    iVar16 = 0;
    while (piVar21 = piVar9,
          *(uint *)((int)*(undefined4 *)0xb860 +
                    (uint)*(byte *)((int)piVar9 + (-0x4794 - (int)piVar8)) * 0x27 + 0x19) !=
          (uint)*(byte *)(iVar16 * 8 + (int)*(undefined4 *)0xb85c)) {
      iVar16 = iVar16 + 1;
    }
    for (; (int)piVar9 - (int)piVar8 < (int)piVar21; piVar21 = (int *)((int)piVar21 + -1)) {
      *(undefined1 *)(piVar21 + -0x23ca) = *(undefined1 *)((int)piVar21 + -0x4795);
      piVar8 = (int *)((int)piVar21 * 0x20);
      piVar20 = piVar8 + -0x2ed0;
      pbVar22 = (byte *)(piVar8 + -0x2ec0);
      for (iVar15 = 0x10; iVar15 != 0; iVar15 = iVar15 + -1) {
        pbVar1 = pbVar22;
        pbVar22 = pbVar22 + 2;
        piVar3 = piVar20;
        piVar20 = piVar20 + 1;
        *(int *)pbVar1 = *piVar3;
      }
      pbVar1 = (byte *)(piVar8 + -0x2ec0);
      *pbVar1 = *pbVar1 | 1;
      iVar11 = (iVar16 - (int)piVar9) * 8 + (int)piVar21 * 0x108 + *(int *)0xb85c;
      uVar10 = *(undefined2 *)0xb85e;
      iVar15 = *(int *)(iVar11 + -4);
      piVar8[-0x2ebf] = iVar15;
      piVar8[-0x2ebe] = iVar15 >> 0xf;
      iVar15 = *(int *)(iVar11 + -2);
      piVar8[-0x2ebd] = iVar15;
      piVar8[-0x2ebc] = iVar15 >> 0xf;
    }
    iVar15 = (int)piVar21 * 0x20;
    puVar19 = (undefined2 *)(iVar15 + -0x5d80);
    puVar18 = (undefined2 *)0x2734;
    for (iVar16 = 0x10; iVar16 != 0; iVar16 = iVar16 + -1) {
      puVar4 = puVar19;
      puVar19 = puVar19 + 1;
      puVar2 = puVar18;
      puVar18 = puVar18 + 1;
      *puVar4 = *puVar2;
    }
    if (*(int *)0xc375 == 2) {
      uVar10 = 3;
    }
    else {
      uVar10 = 2;
    }
    *(undefined2 *)(iVar15 + -0x5d7a) = uVar10;
    *(undefined2 *)(iVar15 + -0x5d78) = 0;
    piVar9 = (int *)((int)piVar9 + 1);
    piVar8 = (int *)((int)piVar8 + 1);
  }
  piVar21 = piVar9;
  if (*(int *)0xc375 == 2) {
    for (; (int)piVar9 - (int)piVar8 < (int)piVar21; piVar21 = (int *)((int)piVar21 + -1)) {
      *(undefined1 *)(piVar21 + -0x23ca) = *(undefined1 *)((int)piVar21 + -0x4795);
      puVar19 = (undefined2 *)((int)piVar21 * 0x20 + -0x5d80);
      puVar18 = (undefined2 *)((int)piVar21 * 0x20 + -0x5da0);
      for (iVar16 = 0x10; iVar16 != 0; iVar16 = iVar16 + -1) {
        puVar4 = puVar19;
        puVar19 = puVar19 + 1;
        puVar2 = puVar18;
        puVar18 = puVar18 + 1;
        *puVar4 = *puVar2;
      }
    }
    iVar16 = 0;
    while (*(uint *)((int)*(undefined4 *)0xb860 +
                     (uint)*(byte *)((int)piVar9 + (-iVar27 - (int)piVar8) + -0x4794) * 0x27 + 0x19)
           != (uint)*(byte *)(iVar16 * 8 + (int)*(undefined4 *)0xb85c)) {
      iVar16 = iVar16 + 1;
    }
    for (iVar15 = (int)piVar9 - (int)piVar8; (int)piVar9 + (-iVar27 - (int)piVar8) < iVar15;
        iVar15 = iVar15 + -1) {
      *(undefined1 *)(iVar15 + -0x4794) = *(undefined1 *)(iVar15 + -0x4795);
      piVar8 = (int *)(iVar15 * 0x20);
      piVar21 = piVar8 + -0x2ed0;
      pbVar22 = (byte *)(piVar8 + -0x2ec0);
      for (iVar11 = 0x10; iVar11 != 0; iVar11 = iVar11 + -1) {
        pbVar1 = pbVar22;
        pbVar22 = pbVar22 + 2;
        piVar3 = piVar21;
        piVar21 = piVar21 + 1;
        *(int *)pbVar1 = *piVar3;
      }
      pbVar1 = (byte *)(piVar8 + -0x2ec0);
      *pbVar1 = *pbVar1 | 1;
      iVar12 = ((iVar16 - (int)piVar9) + iVar15 * 0x21 + iVar27) * 8 + *(int *)0xb85c;
      uVar10 = *(undefined2 *)0xb85e;
      iVar11 = *(int *)(iVar12 + -4);
      piVar8[-0x2ebf] = iVar11;
      piVar8[-0x2ebe] = iVar11 >> 0xf;
      iVar11 = *(int *)(iVar12 + -2);
      piVar8[-0x2ebd] = iVar11;
      piVar8[-0x2ebc] = iVar11 >> 0xf;
    }
    iVar15 = iVar15 * 0x20;
    puVar19 = (undefined2 *)(iVar15 + -0x5d80);
    puVar18 = (undefined2 *)0x2734;
    for (iVar16 = 0x10; iVar16 != 0; iVar16 = iVar16 + -1) {
      puVar4 = puVar19;
      puVar19 = puVar19 + 1;
      puVar2 = puVar18;
      puVar18 = puVar18 + 1;
      *puVar4 = *puVar2;
    }
    *(undefined2 *)(iVar15 + -0x5d7a) = 2;
    *(undefined2 *)(iVar15 + -0x5d78) = 0;
    piVar9 = (int *)((int)piVar9 + 1);
    iVar27 = iVar27 + 1;
  }
  *(int *)0xb9be = (int)*(char *)(*(int *)0xbc7d + 0x2754);
  iStack_c = (int)piVar9 - (int)piVar8;
  while (piVar8 != (int *)0x0) {
    pbVar1 = (byte *)((iStack_c + (int)piVar8 + -1) * 0x20 + -0x5d80);
    *pbVar1 = *pbVar1 | 0x20;
    piVar8 = (int *)((int)piVar8 + -1);
  }
  func_0x00023aee();
  func_0x00008e46();
  if ((*(byte *)((int)*(undefined4 *)0xb860 + *(int *)0xc504 * 0x27 + 0x24) & 0x40) != 0) {
    *(undefined1 *)(iStack_c * 0x20 + -0x5d76) = 7;
  }
  if (*(int *)0xbc7d == 6) {
    func_0x00002dc6();
  }
  if ((*(int *)0xbc7d == 0) || (*(int *)0xbc7d == 4)) {
    if (*(byte *)(iStack_c * 0x20 + -0x5d76) < 0x10) {
      iVar16 = func_0x00023aee();
      if (iVar16 == 1) {
        func_0x00003674();
        func_0x00002dc6();
      }
    }
    else {
      *(undefined1 *)(iStack_c * 0x20 + -0x5d76) = 7;
    }
  }
  *(int *)0xb980 = (int)*(char *)(*(int *)0xc375 + 0x2754);
  iStack_c = iStack_c - iVar27;
  while (iVar27 != 0) {
    pbVar1 = (byte *)((iStack_c + iVar27 + -1) * 0x20 + -0x5d80);
    *pbVar1 = *pbVar1 | 0x10;
    iVar27 = iVar27 + -1;
  }
  func_0x00023aee();
  iVar27 = iStack_c;
  func_0x00008e46();
  if ((*(byte *)((int)*(undefined4 *)0xb860 + *(int *)0xc4f0 * 0x27 + 0x24) & 0x40) != 0) {
    *(undefined1 *)(iVar27 * 0x20 + -0x5d76) = 7;
  }
  if (*(int *)0xc375 == 6) {
    iStack_c = 0x65c;
    func_0x00002dc6();
  }
  if ((*(int *)0xc375 == 0) || (*(int *)0xc375 == 4)) {
    if (*(byte *)(iVar27 * 0x20 + -0x5d76) < 0x10) {
      iStack_c = -0x370d;
      iVar16 = func_0x00023aee();
      if (iVar16 == 1) {
        func_0x00003674();
        iStack_c = 0xbf;
        func_0x00002dc6();
      }
    }
    else {
      *(undefined1 *)(iVar27 * 0x20 + -0x5d76) = 7;
    }
  }
  if (*(int *)0xc4e6 == 9999) {
    uVar10 = 0;
  }
  else {
    uVar10 = 0xffff;
  }
  *(undefined2 *)0xb942 = uVar10;
  if (*(int *)0xc4e6 != 9999) {
    iVar27 = iVar27 - iStack_c;
    while (iStack_c != 0) {
      pbVar1 = (byte *)((iVar27 + iStack_c + -1) * 0x20 + -0x5d80);
      *pbVar1 = *pbVar1 | 0x80;
      iStack_c = iStack_c + -1;
    }
    iVar16 = iVar27 * 0x20;
    uVar10 = *(undefined2 *)(iVar16 + -0x5d7c);
    *(undefined2 *)0xa254 = *(undefined2 *)(iVar16 + -0x5d7e);
    *(undefined2 *)0xa256 = uVar10;
    uVar10 = *(undefined2 *)(iVar16 + -0x5d78);
    *(undefined2 *)0xa258 = *(undefined2 *)(iVar16 + -0x5d7a);
    *(undefined2 *)0xa25a = uVar10;
    func_0x00023aee();
    func_0x00008e46();
  }
  *(undefined2 *)0xb904 = 0xffff;
  if (*(char *)0xe28c == '\x02') {
    uVar10 = FUN_2000_abf6();
    *(undefined2 *)0xc4d2 = uVar10;
    func_0x00008e46();
    iVar16 = (int)((long)*(int *)0xc4d8 * 0x155);
    iVar15 = iVar16 + -1;
    iVar16 = (int)((ulong)((long)*(int *)0xc4d8 * 0x155) >> 0x10) - (uint)(iVar16 == 0);
    *(int *)0xa282 = iVar15;
    *(int *)0xa284 = iVar16;
    *(int *)0xa260 = iVar15;
    *(int *)0xa262 = iVar16;
    *(int *)0xb906 = iVar15;
    *(int *)0xb908 = iVar16;
    *(int *)0xb90e = iVar15;
    *(int *)0xb910 = iVar16;
    lVar6 = (long)*(int *)0xc4da * -0x1c7 + 0x7ffff;
    uVar10 = (undefined2)lVar6;
    uVar23 = (undefined2)((ulong)lVar6 >> 0x10);
    *(undefined2 *)0xa286 = uVar10;
    *(undefined2 *)0xa288 = uVar23;
    *(undefined2 *)0xa264 = uVar10;
    *(undefined2 *)0xa266 = uVar23;
    *(undefined2 *)0xb90a = uVar10;
    *(undefined2 *)0xb90c = uVar23;
    *(undefined2 *)0xb912 = uVar10;
    *(undefined2 *)0xb914 = uVar23;
  }
  else {
    func_0x00023aee();
    iVar27 = iVar27 - unaff_SI;
    func_0x00008e46();
    iVar16 = iVar27 * 0x20;
    uVar10 = *(undefined2 *)(iVar16 + -0x5d7e);
    uVar23 = *(undefined2 *)(iVar16 + -0x5d7c);
    *(undefined2 *)0xa282 = uVar10;
    *(undefined2 *)0xa284 = uVar23;
    *(undefined2 *)0xa260 = uVar10;
    *(undefined2 *)0xa262 = uVar23;
    *(undefined2 *)0xb906 = uVar10;
    *(undefined2 *)0xb908 = uVar23;
    *(undefined2 *)0xb90e = uVar10;
    *(undefined2 *)0xb910 = uVar23;
    uVar10 = *(undefined2 *)(iVar16 + -0x5d7a);
    uVar23 = *(undefined2 *)(iVar16 + -0x5d78);
    *(undefined2 *)0xa286 = uVar10;
    *(undefined2 *)0xa288 = uVar23;
    *(undefined2 *)0xa264 = uVar10;
    *(undefined2 *)0xa266 = uVar23;
    *(undefined2 *)0xb90a = uVar10;
    *(undefined2 *)0xb90c = uVar23;
    *(undefined2 *)0xb912 = uVar10;
    *(undefined2 *)0xb914 = uVar23;
  }
  if (*(int *)0xc516 == 9999) {
    *(undefined1 *)0xa270 = 0;
  }
  else {
    uVar17 = *(int *)0xc4d8 / 0x18 >> 0xf;
    iVar11 = ((int)((*(int *)0xc4d8 / 0x18 ^ uVar17) - uVar17) >> 2 ^ uVar17) - uVar17;
    uVar17 = *(int *)0xc4da / -0x12 >> 0xf;
    iVar12 = (((int)((*(int *)0xc4da / -0x12 ^ uVar17) - uVar17) >> 2 ^ uVar17) - uVar17) + 0xf;
    iVar16 = iVar12;
    iVar15 = iVar11;
    if ((iVar11 < 8) && (iVar13 = func_0x000038b8(), iVar15 < iVar13)) {
      iVar11 = 0;
    }
    else if ((iVar15 < 8) || (iVar13 = func_0x000038b8(), iVar13 <= 0x10 - iVar15)) {
      if (iVar16 < 8) {
        iVar12 = 0;
      }
      else {
        iVar12 = 0x10;
      }
    }
    else {
      iVar11 = 0x10;
    }
    func_0x000038b8();
    func_0x000038b8();
    if ((*(uint *)((int)*(undefined4 *)0xb860 + *(int *)0xc510 * 0x27 + 0x25) & 0x200) == 0) {
      *(undefined1 *)0xa270 = 2;
      if (*(char *)((int)*(undefined4 *)0xb85c + *(int *)0xc512 * 8 + 1) == '\0') {
        uVar7 = 0x16;
      }
      else {
        uVar7 = 0x17;
      }
      uVar26 = 0x18;
      iVar27 = func_0x00023a48();
      puVar19 = (undefined2 *)(iVar27 * 0x20 + *(int *)0xb868);
      uVar10 = *(undefined2 *)0xb86a;
      puVar18 = (undefined2 *)0xac60;
      for (iVar27 = 0x10; iVar27 != 0; iVar27 = iVar27 + -1) {
        puVar4 = puVar18;
        puVar18 = puVar18 + 1;
        puVar2 = puVar19;
        puVar19 = puVar19 + 1;
        *puVar4 = *puVar2;
      }
      *(undefined1 *)0xb8bb = *(undefined1 *)0xc510;
      uVar17 = iVar11 * 4;
      if ((int)uVar17 < 1) {
        uVar17 = 1;
      }
      if (0x3e < (int)uVar17) {
        uVar17 = 0x3e;
      }
      uVar14 = uVar17 & 0xff;
      *(int *)0xac62 = uVar14 << 0xd;
      *(uint *)0xac64 =
           (((((int)(char)(uVar17 >> 8) << 1 | (uint)((char)uVar17 < '\0')) << 1 |
             (uint)((int)(uVar14 << 9) < 0)) << 1 | (uint)((int)(uVar14 << 10) < 0)) << 1 |
           (uint)((int)(uVar14 << 0xb) < 0)) << 1 | (uint)((int)(uVar14 << 0xc) < 0);
      uVar17 = iVar12 * 4;
      if ((int)uVar17 < 1) {
        uVar17 = 1;
      }
      if (0x3e < (int)uVar17) {
        uVar17 = 0x3e;
      }
      uVar14 = uVar17 & 0xff;
      *(int *)0xac66 = uVar14 << 0xd;
      *(uint *)0xac68 =
           (((((int)(char)(uVar17 >> 8) << 1 | (uint)((char)uVar17 < '\0')) << 1 |
             (uint)((int)(uVar14 << 9) < 0)) << 1 | (uint)((int)(uVar14 << 10) < 0)) << 1 |
           (uint)((int)(uVar14 << 0xb) < 0)) << 1 | (uint)((int)(uVar14 << 0xc) < 0);
      *(undefined1 *)0xa26e = uVar7;
      *(undefined1 *)0xa26f = uVar26;
      *(undefined1 *)0xac6b = *(undefined1 *)((int)*(undefined4 *)0xb85c + *(int *)0xc512 * 8 + 3);
    }
    else {
      *(undefined1 *)0xa270 = 1;
      uVar7 = func_0x00013a1c();
      *(undefined1 *)0xa26e = uVar7;
      *(undefined1 *)0xa26f = 0;
      do {
        do {
          func_0x00003920();
          uVar24 = func_0x00003bb8();
          iVar27 = iVar27 * 0x20;
          uVar17 = *(uint *)(iVar27 + -0x5d7e);
          uVar14 = (uint)uVar24 + *(uint *)(iVar27 + -0x5d7e);
          iVar16 = *(int *)(iVar27 + -0x5d7c);
          *(int *)0xa27c = uVar14 + 0x8000;
          *(int *)0xa27e =
               ((int)((ulong)uVar24 >> 0x10) + iVar16 + (uint)CARRY2((uint)uVar24,uVar17)) -
               (uint)(uVar14 < 0x8000);
          func_0x00003920();
          uVar24 = func_0x00003bb8(0xbf);
          uVar17 = *(uint *)(iVar27 + -0x5d7a);
          uVar14 = (uint)uVar24 + *(uint *)(iVar27 + -0x5d7a);
          iVar27 = *(int *)(iVar27 + -0x5d78);
          *(int *)0xaca0 = uVar14 + 0x8000;
          *(int *)0xaca2 =
               ((int)((ulong)uVar24 >> 0x10) + iVar27 + (uint)CARRY2((uint)uVar24,uVar17)) -
               (uint)(uVar14 < 0x8000);
          iVar27 = 0;
          iVar16 = func_0x00003aec(0xbf,*(undefined2 *)0xa27c,*(undefined2 *)0xa27e,0x2000,0);
          iVar15 = func_0x00003aec(0xbf,*(undefined2 *)0xaca0,*(undefined2 *)0xaca2,0x2000,0);
        } while ((*(byte *)(iVar16 + iVar15 * 0x40) & 0x80) != 0);
        iVar16 = func_0x00008a00();
      } while (((1 < iVar16) || (iVar16 = func_0x00008a00(), iVar16 < 0)) ||
              (iVar16 = *(int *)0xa27c, iVar15 = func_0x0000894a(), iVar15 <= iVar16));
      func_0x00003aec();
      uVar10 = func_0x00003aec(0xbf,*(undefined2 *)0xa27c);
      func_0x00007802(0xbf,*(undefined2 *)0xc510,uVar10);
      for (iVar27 = 0; iVar27 < 3; iVar27 = iVar27 + 1) {
        iVar16 = func_0x00023a48();
        puVar18 = (undefined2 *)(iVar16 * 0x20 + *(int *)0xb868);
        uVar10 = *(undefined2 *)0xb86a;
        iVar15 = iVar27 * 0x20;
        puVar19 = (undefined2 *)(iVar15 + -0x53e0);
        for (iVar16 = 0x10; iVar16 != 0; iVar16 = iVar16 + -1) {
          puVar4 = puVar19;
          puVar19 = puVar19 + 1;
          puVar2 = puVar18;
          puVar18 = puVar18 + 1;
          *puVar4 = *puVar2;
        }
        *(undefined1 *)(iVar27 + -0x4747) = *(undefined1 *)0xc510;
        iVar11 = (iVar27 + *(int *)0xc512) * 8 + *(int *)0xb85c;
        uVar10 = *(undefined2 *)0xb85e;
        uVar17 = *(uint *)(iVar11 + 4);
        uVar14 = *(uint *)0xa27c;
        iVar16 = *(int *)0xa27e;
        *(int *)(iVar15 + -0x53de) = uVar17 + *(uint *)0xa27c;
        *(int *)(iVar15 + -0x53dc) = ((int)uVar17 >> 0xf) + iVar16 + (uint)CARRY2(uVar17,uVar14);
        uVar17 = *(uint *)(iVar11 + 6);
        uVar14 = *(uint *)0xaca0;
        iVar16 = *(int *)0xaca2;
        *(int *)(iVar15 + -0x53da) = uVar17 + *(uint *)0xaca0;
        *(int *)(iVar15 + -0x53d8) = ((int)uVar17 >> 0xf) + iVar16 + (uint)CARRY2(uVar17,uVar14);
        *(undefined1 *)(iVar15 + -0x53d5) =
             *(undefined1 *)((int)*(undefined4 *)0xb85c + *(int *)0xc512 * 8 + 3);
      }
    }
  }
  if (*(int *)0xc375 < 2) {
    iVar27 = *(int *)0xc368;
    iVar16 = (int)((long)iVar27 * 0x155);
    *(int *)0xb98a = iVar16 + -1;
    *(int *)0xb98c = (int)((ulong)((long)iVar27 * 0x155) >> 0x10) - (uint)(iVar16 == 0);
    lVar6 = (long)*(int *)0xc36a * -0x1c7 + 0x7ffff;
    *(undefined2 *)0xb98e = (int)lVar6;
    *(undefined2 *)0xb990 = (int)((ulong)lVar6 >> 0x10);
  }
  else if (*(int *)0xc375 == 2) {
    iVar27 = *(int *)0xc36c * 9 + *(int *)0xc370;
    uVar10 = *(undefined2 *)0xc372;
    uVar23 = *(undefined2 *)(iVar27 + -7);
    *(undefined2 *)0xb996 = *(undefined2 *)(iVar27 + -9);
    *(undefined2 *)0xb998 = uVar23;
    uVar23 = *(undefined2 *)(iVar27 + -3);
    *(undefined2 *)0xb99a = *(undefined2 *)(iVar27 + -5);
    *(undefined2 *)0xb99c = uVar23;
    iVar27 = *(int *)0xc370;
    uVar23 = *(undefined2 *)(iVar27 + 0x12);
    uVar5 = *(undefined2 *)(iVar27 + 0x14);
    *(undefined2 *)0xb982 = uVar23;
    *(undefined2 *)0xb984 = uVar5;
    *(undefined2 *)0xb98a = uVar23;
    *(undefined2 *)0xb98c = uVar5;
    uVar23 = *(undefined2 *)(iVar27 + 0x16);
    uVar10 = *(undefined2 *)(iVar27 + 0x18);
    *(undefined2 *)0xb986 = uVar23;
    *(undefined2 *)0xb988 = uVar10;
    *(undefined2 *)0xb98e = uVar23;
    *(undefined2 *)0xb990 = uVar10;
  }
  if (*(int *)0xbc7d < 2) {
    iVar27 = *(int *)0xbc70;
    iVar16 = (int)((long)iVar27 * 0x155);
    *(int *)0xb9c8 = iVar16 + -1;
    *(int *)0xb9ca = (int)((ulong)((long)iVar27 * 0x155) >> 0x10) - (uint)(iVar16 == 0);
    lVar6 = (long)*(int *)0xbc72 * -0x1c7 + 0x7ffff;
    *(undefined2 *)0xb9cc = (int)lVar6;
    *(undefined2 *)0xb9ce = (int)((ulong)lVar6 >> 0x10);
  }
  else if (*(int *)0xbc7d == 2) {
    iVar27 = *(int *)0xbc74 * 9 + *(int *)0xbc78;
    uVar10 = *(undefined2 *)0xbc7a;
    uVar23 = *(undefined2 *)(iVar27 + -7);
    *(undefined2 *)0xb9d4 = *(undefined2 *)(iVar27 + -9);
    *(undefined2 *)0xb9d6 = uVar23;
    uVar23 = *(undefined2 *)(iVar27 + -3);
    *(undefined2 *)0xb9d8 = *(undefined2 *)(iVar27 + -5);
    *(undefined2 *)0xb9da = uVar23;
    iVar27 = *(int *)0xbc78;
    uVar23 = *(undefined2 *)(iVar27 + 0x12);
    uVar5 = *(undefined2 *)(iVar27 + 0x14);
    *(undefined2 *)0xb9c0 = uVar23;
    *(undefined2 *)0xb9c2 = uVar5;
    *(undefined2 *)0xb9c8 = uVar23;
    *(undefined2 *)0xb9ca = uVar5;
    uVar23 = *(undefined2 *)(iVar27 + 0x16);
    uVar10 = *(undefined2 *)(iVar27 + 0x18);
    *(undefined2 *)0xb9c4 = uVar23;
    *(undefined2 *)0xb9c6 = uVar10;
    *(undefined2 *)0xb9cc = uVar23;
    *(undefined2 *)0xb9ce = uVar10;
  }
  *(undefined2 *)0xb8dc = 0;
  *(undefined2 *)0xb8e2 = 0;
  func_0x00007624();
  *(int *)0xb8e2 = *(int *)0xb8e2 + 1;
  func_0x00007624();
  *(int *)0xb8e2 = *(int *)0xb8e2 + 1;
  if (*(int *)0xc375 == 2) {
    uVar24 = func_0x0000eeb2();
    *(undefined2 *)0xb8d4 = (int)uVar24;
    *(undefined2 *)0xb8d6 = (int)((ulong)uVar24 >> 0x10);
    for (iVar27 = 0; iVar27 < *(int *)0xc36c + -2; iVar27 = iVar27 + 1) {
      iVar16 = iVar27 * 9 + *(int *)0xc370;
      uVar10 = *(undefined2 *)0xc372;
      uVar23 = (undefined2)((ulong)*(undefined4 *)0xb8d4 >> 0x10);
      puVar19 = (undefined2 *)((iVar27 + *(int *)0xb8dc) * 9 + (int)*(undefined4 *)0xb8d4);
      *puVar19 = *(undefined2 *)(iVar16 + 0x12);
      puVar19[1] = *(undefined2 *)(iVar16 + 0x14);
      puVar19[2] = *(undefined2 *)(iVar16 + 0x16);
      puVar19[3] = *(undefined2 *)(iVar16 + 0x18);
      *(undefined1 *)(puVar19 + 4) = *(undefined1 *)(iVar16 + 0x1a);
    }
    *(int *)0xb8dc = *(int *)0xb8dc + iVar27;
    *(int *)0xb8e2 = *(int *)0xb8e2 + 1;
  }
  if (*(int *)0xbc7d == 2) {
    uVar24 = func_0x0000eeb2();
    *(undefined2 *)0xb8d4 = (int)uVar24;
    *(undefined2 *)0xb8d6 = (int)((ulong)uVar24 >> 0x10);
    for (iVar27 = 0; iVar27 < *(int *)0xbc74 + -2; iVar27 = iVar27 + 1) {
      iVar16 = iVar27 * 9 + *(int *)0xbc78;
      uVar10 = *(undefined2 *)0xbc7a;
      uVar23 = (undefined2)((ulong)*(undefined4 *)0xb8d4 >> 0x10);
      puVar19 = (undefined2 *)((iVar27 + *(int *)0xb8dc) * 9 + (int)*(undefined4 *)0xb8d4);
      *puVar19 = *(undefined2 *)(iVar16 + 0x12);
      puVar19[1] = *(undefined2 *)(iVar16 + 0x14);
      puVar19[2] = *(undefined2 *)(iVar16 + 0x16);
      puVar19[3] = *(undefined2 *)(iVar16 + 0x18);
      *(undefined1 *)(puVar19 + 4) = *(undefined1 *)(iVar16 + 0x1a);
    }
    *(int *)0xb8dc = *(int *)0xb8dc + iVar27;
    *(int *)0xb8e2 = *(int *)0xb8e2 + 1;
  }
  *(undefined1 *)0xbc60 = *(undefined1 *)0xe278;
  *(uint *)0xa248 =
       *(uint *)0xa248 ^ ((byte)((*(char *)0xe28c == '\x02') << 3 ^ *(byte *)0xa249) & 8) << 8;
  for (iVar27 = 0; iVar27 < 6; iVar27 = iVar27 + 1) {
    *(undefined1 *)(iVar27 + -0x5db6) = *(undefined1 *)(iVar27 + -0x47c1);
  }
  if ((*(uint *)((int)*(undefined4 *)0xb860 + *(int *)0xc4d2 * 0x27 + 0x25) & 0x4000) == 0) {
    *(int *)0xb832 = (int)*(char *)(*(int *)0xb8ce + 0x2760);
  }
  else {
    if (*(int *)0xb8ce == 2) {
      uVar10 = 5;
    }
    else {
      uVar10 = 2;
    }
    *(undefined2 *)0xb832 = uVar10;
  }
  *(undefined1 *)0xa26d = *(undefined1 *)0xb832;
  func_0x00018b52();
  *(undefined2 *)0xaca4 = 0x50;
  return;
}
