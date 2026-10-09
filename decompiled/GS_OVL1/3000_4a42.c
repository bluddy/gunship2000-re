/* GS.GS2 3000:4a42 undefined FUN_3000_4a42(void) */
undefined2 __cdecl16far FUN_3000_4a42(char param_1,char *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined2 unaff_DS;
  int iVar10;
  undefined2 uVar11;
  int local_16;
  undefined2 uStack_14;
  int iStack_12;
  undefined2 uStack_10;
  int *piStack_e;
  int iStack_c;
  uint uStack_a;
  int *piStack_8;
  int iVar12;
  int iVar13;
  
  func_0x00000eb0();
  iVar9 = *(int *)(param_1 * 8 + -0x3c6e);
  iVar12 = 0x1e;
  iVar13 = 0;
  piStack_8 = (int *)0x3;
  uStack_a = 0x3b;
  iStack_c = 0x95;
  piStack_e = (int *)0x8b;
  uStack_10 = 0xa9;
  iStack_12 = 0x880;
  uStack_14 = 0xbf;
  local_16 = 0x4a92;
  func_0x0000d116();
  piStack_8 = (int *)0x9;
  uStack_a = 0x39;
  iStack_c = 0x93;
  piStack_e = (int *)0x8c;
  uStack_10 = 0xaa;
  iStack_12 = 0x880;
  uStack_14 = 0xd02;
  local_16 = 0x4aaa;
  func_0x0000d116();
  piStack_8 = (int *)0x1;
  uStack_a = 0x37;
  iStack_c = 0x91;
  piStack_e = (int *)0x8d;
  uStack_10 = 0xab;
  iStack_12 = 0x880;
  uStack_14 = 0xd02;
  local_16 = 0x4ac7;
  func_0x00016a62();
  if ((*(byte *)((int)*(undefined4 *)0xb860 + *(int *)(param_1 * 8 + -0x3c6c) * 0x27 + 0x25) & 0x80)
      == 0) {
    iVar7 = iVar9 * 8 + *(int *)0xb85c;
    uVar11 = *(undefined2 *)0xb85e;
    bVar5 = *(byte *)(iVar7 + 1);
    bVar1 = *(byte *)((int)*(undefined4 *)0xa278 + (uint)bVar5 * 0x1b + 1);
    bVar1 = (bVar1 - 9 & -(bVar1 < 9)) + 9;
    if (*(char *)(iVar7 + 2) == '\x01') {
      if ((bVar5 == 0xcd) || (bVar5 == 0x93)) {
        iVar12 = 0x3c;
        uStack_a = 100;
        iVar13 = 1;
      }
      else if (*(char *)((int)*(undefined4 *)0xa278 +
                         (uint)*(byte *)(*(int *)0xb85c + iVar9 * 8 + 1) * 0x1b + 1) == '\x05') {
        iVar12 = 0x78;
        uStack_a = 200;
        iVar13 = 2;
      }
      else {
        uVar11 = (undefined2)((ulong)*(undefined4 *)0xb85c >> 0x10);
        iVar7 = (int)*(undefined4 *)0xb85c;
        if (*(char *)(iVar7 + iVar9 * 8 + 1) == '@') {
          iVar12 = 0x1e0;
          uStack_a = 800;
          iVar13 = 4;
        }
        else if (*(char *)((int)*(undefined4 *)0xa278 +
                           (uint)*(byte *)(iVar7 + iVar9 * 8 + 1) * 0x1b + 1) == '\b') {
          iVar12 = 0x3c;
          uStack_a = 100;
          iVar13 = 1;
        }
      }
      iVar7 = 0;
      iVar3 = 0;
      iVar10 = 0;
      do {
        uVar11 = (undefined2)((ulong)*(undefined4 *)0xb85c >> 0x10);
        iVar4 = *(int *)((int)*(undefined4 *)0xb85c + (iVar7 + iVar9) * 8 + 6);
        iVar2 = iVar4;
        if (iVar10 < iVar4) {
          iVar2 = iVar10;
        }
        if (iVar4 < iVar3) {
          iVar4 = iVar3;
        }
        iVar7 = iVar7 + 1;
        iVar8 = *(int *)0xb85c;
        iVar3 = iVar4;
        iVar10 = iVar2;
      } while (*(char *)((iVar7 + iVar9) * 8 + iVar8) == -1);
      iVar3 = (iVar2 + iVar4) / 2;
      iVar7 = 0;
      do {
        iVar8 = (iVar7 + iVar9) * 8 + iVar8;
        bVar5 = *(byte *)((int)*(undefined4 *)0xa278 + (uint)*(byte *)(iVar8 + 1) * 0x1b + 1);
        bVar5 = (bVar5 - 9 & -(bVar5 < 9)) + 9;
        if ((bVar5 < 9) || (*(char *)(iVar8 + 3) != '\0')) {
          iStack_12 = 0;
        }
        else {
          iStack_12 = 4;
        }
        piStack_8 = (int *)0x0;
        iVar7 = (iVar7 + iVar9) * 8 + *(int *)0xb85c;
        uStack_a = (iVar3 - *(int *)(iVar7 + 6)) / (int)uStack_a + iStack_c;
        iStack_c = *(int *)(iVar7 + 4) / iVar12;
        iVar7 = (uint)bVar5 * 0xc;
        piStack_e = (int *)*(undefined2 *)(iVar7 + 0x2ade);
        uStack_10 = *(undefined2 *)(iVar7 + 0x2adc);
        iStack_12 = *(int *)(iVar7 + 0x2ada) + iStack_12;
        uStack_14 = *(undefined2 *)(iVar7 + 0x2ad8);
        local_16 = 1;
        iVar10 = 2;
        iVar3 = 0x1658;
        FUN_3000_20d6(0xffff);
        iVar7 = iVar10 + 1;
        uVar11 = (undefined2)((ulong)*(undefined4 *)0xb85c >> 0x10);
        iVar8 = (int)*(undefined4 *)0xb85c;
      } while (*(char *)((iVar7 + iVar9) * 8 + iVar8) == -1);
      if (iVar10 < *param_2) {
        *param_2 = '\0';
      }
      iVar9 = iVar9 + *param_2;
      iVar7 = iVar9 * 8 + *(int *)0xb85c;
      uVar11 = *(undefined2 *)0xb85e;
      bVar5 = *(byte *)((int)*(undefined4 *)0xa278 + (uint)*(byte *)(iVar7 + 1) * 0x1b + 1);
      bVar5 = (bVar5 - 9 & -(bVar5 < 9)) + 9;
      if ((bVar5 < 9) || (*(char *)(iVar7 + 3) != '\0')) {
        iVar7 = 0;
      }
      else {
        iVar7 = 4;
      }
      piStack_8 = (int *)0x0;
      iVar10 = iVar9 * 8 + *(int *)0xb85c;
      uStack_a = (iVar3 - *(int *)(iVar10 + 6)) / (int)uStack_a + iStack_c;
      iStack_c = *(int *)(iVar10 + 4) / iVar12;
      iVar12 = (uint)bVar5 * 0xc;
      piStack_e = (int *)*(undefined2 *)(iVar12 + 0x2ade);
      uStack_10 = *(undefined2 *)(iVar12 + 0x2adc);
      iStack_12 = *(int *)(iVar12 + 0x2ada) + iVar7 + 0x10;
      uStack_14 = *(undefined2 *)(iVar12 + 0x2ad8);
      local_16 = 1;
      uVar11 = 2;
      FUN_3000_20d6(0xffff,2);
    }
    else {
      if ((bVar1 < 9) || (*(char *)(*(int *)0xb85c + iVar9 * 8 + 3) != '\0')) {
        iStack_12 = 0;
      }
      else {
        iStack_12 = 4;
      }
      *param_2 = '\0';
      piStack_8 = (int *)0x0;
      uStack_a = iStack_c;
      iStack_c = 0;
      iVar12 = (uint)bVar1 * 0xc;
      piStack_e = (int *)*(undefined2 *)(iVar12 + 0x2ade);
      uStack_10 = *(undefined2 *)(iVar12 + 0x2adc);
      iStack_12 = *(int *)(iVar12 + 0x2ada) + iStack_12;
      uStack_14 = *(undefined2 *)(iVar12 + 0x2ad8);
      local_16 = 1;
      uVar11 = 2;
      FUN_3000_20d6(0xffff,2);
    }
    piStack_8 = (int *)0x8f;
    uStack_a = 0xae;
    iStack_c = 0x1658;
    piStack_e = (int *)0x4e39;
    func_0x0000c9f6();
    iVar12 = param_1 * 8;
    piStack_8 = (int *)*(undefined2 *)(iVar12 + -0x3c70);
    uStack_a = *(undefined2 *)(iVar12 + -0x3c72);
    piStack_e = (int *)0x2db9;
    uStack_10 = 0xc87;
    iStack_12 = 0x4e5a;
    iStack_c = uVar11;
    func_0x0000ca66();
    iVar7 = *(int *)(iVar12 + -0x3c6c) * 0x27;
    uVar11 = (undefined2)((ulong)*(undefined4 *)0xb860 >> 0x10);
    iVar12 = (int)*(undefined4 *)0xb860;
    if ((*(int *)(iVar12 + iVar7 + 0x23) == 0) && (*(int *)(iVar12 + iVar7 + 0x25) == 0x1000)) {
      piStack_8 = (int *)*(undefined2 *)0x9be;
      uStack_a = *(undefined2 *)0x9bc;
      iStack_c = 0x2dc1;
      piStack_e = (int *)0xc87;
      uStack_10 = 0x4e8b;
      func_0x0000ca66();
    }
    uVar11 = 0xc87;
    if ((*(char *)0x2a17 != '\0') &&
       ((*(byte *)((int)*(undefined4 *)0xb860 + *(int *)(param_1 * 8 + -0x3c6c) * 0x27 + 0x23) &
        0x20) == 0)) {
      piStack_8 = (int *)(uint)*(byte *)((int)*(undefined4 *)0xb85c + iVar9 * 8 + 1);
      uStack_a = 0xc87;
      uVar11 = 0x1da4;
      iStack_c = 0x4ec4;
      func_0x0001da82();
    }
    if (iVar13 != 0) {
      piStack_8 = (int *)0x95;
      uStack_a = 0xae;
      piStack_e = (int *)0x4ed8;
      iStack_c = uVar11;
      func_0x0000c9f6();
      piStack_8 = (int *)*(undefined2 *)0x9a6;
      uStack_a = *(undefined2 *)0x9a4;
      iStack_c = iVar13 + 1;
      piStack_e = (int *)0x2dc4;
      uStack_10 = 0xc87;
      uVar11 = 0xc87;
      iStack_12 = 0x4ef6;
      func_0x0000ca66();
    }
    piStack_8 = (int *)0xb0;
    uStack_a = 0xae;
    piStack_e = (int *)0x4f04;
    iStack_c = uVar11;
    func_0x0000c9f6();
    iVar9 = iVar9 * 8;
    piStack_8 = (int *)*(undefined2 *)0xa27a;
    uStack_a = (uint)*(byte *)((int)*(undefined4 *)0xb85c + iVar9 + 1) * 0x1b + *(int *)0xa278 + 2;
    iStack_c = *param_2 + 1;
    piStack_e = (int *)*(undefined2 *)0x9aa;
    uStack_10 = *(undefined2 *)0x9a8;
    iStack_12 = 0x2dcd;
    uStack_14 = 0xc87;
    local_16 = 0x4f41;
    func_0x0000ca66();
    piStack_8 = (int *)0xb7;
    uStack_a = 0xae;
    iStack_c = 0xc87;
    piStack_e = (int *)0x4f4f;
    func_0x0000c9f6();
    piStack_8 = (int *)*(undefined2 *)0xa274;
    uStack_a = (uint)(*(byte *)((int)*(undefined4 *)0xb85c + iVar9 + 3) >> 4) * 0x1b +
               *(int *)0xa272 + 1;
    iStack_c = *(undefined2 *)0x9ae;
    piStack_e = (int *)*(undefined2 *)0x9ac;
    uStack_10 = 0x2dd7;
    iStack_12 = 0xc87;
    uStack_14 = 0x4f82;
    func_0x0000ca66();
    bVar5 = *(byte *)((int)*(undefined4 *)0xb85c + iVar9 + 3);
    if (bVar5 >> 4 != (bVar5 & 0xf)) {
      piStack_8 = (int *)0xbd;
      uStack_a = 0xae;
      iStack_c = 0xc87;
      piStack_e = (int *)0x4fa4;
      func_0x0000c9f6();
      piStack_8 = (int *)*(undefined2 *)0xa274;
      uStack_a = (uint)(*(byte *)((int)*(undefined4 *)0xb85c + iVar9 + 3) & 0xf) * 0x1b +
                 *(int *)0xa272 + 1;
      iStack_c = *(undefined2 *)0x9b2;
      piStack_e = (int *)*(undefined2 *)0x9b0;
      uStack_10 = 0x2ddc;
      iStack_12 = 0xc87;
      uStack_14 = 0x4fd6;
      func_0x0000ca66();
    }
    piStack_8 = (int *)0xf;
    uStack_a = 0xc87;
    iStack_c = 0x4fe0;
    func_0x0000c928();
    piStack_8 = (int *)0x9c;
    uStack_a = 0xae;
    iStack_c = 0xc87;
    piStack_e = (int *)0x4fee;
    func_0x0000c9f6();
    iVar9 = *(int *)(param_1 * 8 + -0x3c6c) * 0x27 + *(int *)0xb860;
    uVar11 = *(undefined2 *)0xb862;
    if ((*(byte *)(iVar9 + 0x24) & 0x10) == 0) {
      iVar9 = *(int *)(param_1 * 8 + -0x3c6c) * 0x27;
      if ((*(uint *)(*(int *)0xb860 + iVar9 + 0x25) & 0x820) != 0 ||
          (*(uint *)(*(int *)0xb860 + iVar9 + 0x23) & 0x380) != 0) {
        piStack_8 = (int *)*(undefined2 *)0x9ba;
        uStack_a = *(undefined2 *)0x9b8;
        iStack_c = 0x2df4;
        piStack_e = (int *)0xc87;
        uStack_10 = 0x5233;
        func_0x0000ca66();
      }
      uVar11 = 0xc87;
      piStack_8 = (int *)0xc87;
      uStack_a = 0x523a;
      FUN_3000_1008();
    }
    else {
      uVar6 = -(uint)(0xf < *(uint *)(iVar9 + 0x1f)) - *(int *)(iVar9 + 0x21);
      iVar12 = CONCAT11(-((int)uVar6 < 0),(char)(uVar6 >> 8));
      piStack_8 = (int *)(((((((CONCAT11((char)uVar6,(char)(0xf - *(uint *)(iVar9 + 0x1f) >> 8)) >>
                                1 | (uint)((uVar6 & 0x100) != 0) << 0xf) >> 1 |
                              (uint)((iVar12 >> 1 & 1U) != 0) << 0xf) >> 1 |
                             (uint)((iVar12 >> 2 & 1U) != 0) << 0xf) >> 1 |
                            (uint)((iVar12 >> 3 & 1U) != 0) << 0xf) >> 1 |
                           (uint)((iVar12 >> 4 & 1U) != 0) << 0xf) >> 1 |
                          (uint)((iVar12 >> 5 & 1U) != 0) << 0xf) >> 1 |
                         (uint)((iVar12 >> 6 & 1U) != 0) << 0xf);
      uStack_a = 0xc87;
      iStack_c = 0x5051;
      piStack_8 = (int *)func_0x000038b8();
      uVar6 = *(uint *)(iVar9 + 0x1d);
      iVar12 = CONCAT11(-((int)uVar6 < 0),(char)(uVar6 >> 8));
      uStack_a = ((((((CONCAT11((char)uVar6,(char)((uint)*(undefined2 *)(iVar9 + 0x1b) >> 8)) >> 1 |
                      (uint)((uVar6 & 0x100) != 0) << 0xf) >> 1 |
                     (uint)((iVar12 >> 1 & 1U) != 0) << 0xf) >> 1 |
                    (uint)((iVar12 >> 2 & 1U) != 0) << 0xf) >> 1 |
                   (uint)((iVar12 >> 3 & 1U) != 0) << 0xf) >> 1 |
                  (uint)((iVar12 >> 4 & 1U) != 0) << 0xf) >> 1 |
                 (uint)((iVar12 >> 5 & 1U) != 0) << 0xf) >> 1 |
                 (uint)((iVar12 >> 6 & 1U) != 0) << 0xf;
      iStack_c = 0x2de1;
      piStack_e = &local_16;
      uStack_10 = 0xbf;
      iStack_12 = 0x5093;
      func_0x000032d0();
      piStack_8 = &local_16;
      uStack_a = *(undefined2 *)0x9b6;
      iStack_c = *(undefined2 *)0x9b4;
      piStack_e = (int *)0x2def;
      uStack_10 = 0xbf;
      iStack_12 = 0x50b0;
      func_0x0000ca66();
      piStack_8 = (int *)0x3;
      uStack_a = 0x47;
      iStack_c = 0x5f;
      piStack_e = (int *)0x45;
      uStack_10 = 0xc4;
      iStack_12 = 0x892;
      uStack_14 = 0xc87;
      local_16 = 0x50c6;
      func_0x0000d116();
      piStack_8 = (int *)0x9;
      uStack_a = 0x45;
      iStack_c = 0x5d;
      piStack_e = (int *)0x46;
      uStack_10 = 0xc5;
      iStack_12 = 0x892;
      uStack_14 = 0xd02;
      local_16 = 0x50dc;
      func_0x0000d116();
      piStack_8 = (int *)0x1;
      uStack_a = 0x43;
      iStack_c = 0x5b;
      piStack_e = (int *)0x47;
      uStack_10 = 0xc6;
      iStack_12 = 0x892;
      uStack_14 = 0xd02;
      local_16 = 0x50f2;
      func_0x00016a62();
      piStack_8 = (int *)0x48;
      uStack_a = 199;
      iStack_c = 0x892;
      piStack_e = (int *)*(undefined2 *)0xc35c;
      uStack_10 = *(undefined2 *)0xc35a;
      iStack_12 = 0;
      uStack_14 = 0xe7;
      local_16 = 0x892;
      func_0x00016658(0x1658);
      piStack_8 = (int *)0xe;
      uStack_a = 3;
      iStack_c = 3;
      piStack_e = (int *)0xffff;
      uStack_10 = 0xe07e;
      iVar9 = *(int *)(param_1 * 8 + -0x3c6c) * 0x27 + *(int *)0xb860;
      uVar11 = *(undefined2 *)0xb862;
      iStack_12 = *(undefined2 *)(iVar9 + 0x21);
      uStack_14 = *(undefined2 *)(iVar9 + 0x1f);
      local_16 = 0x1658;
      local_16 = func_0x00003aec();
      local_16 = local_16 + 0x88;
      func_0x00003aec(0xbf,*(undefined2 *)(iVar9 + 0x1b),*(undefined2 *)(iVar9 + 0x1d),0x1703,0);
      func_0x0000d116();
      func_0x00016658(0xd02,0x892,0xc4,0x45,0x5f,0x47,0x86e,0xc4,0x45);
      func_0x00016658(0x1658,0x880,0,0,0x140,0x45,0x86e,0,0);
      func_0x00016658(0x1658,0x880,0,0x45,0xc4,0x83,0x86e,0,0x45);
      func_0x00016658(0x1658,0x880,0xc4,0x8c,0x7c,0x3c,0x86e,0xc4,0x8c);
      uVar11 = 0x1658;
      func_0x00016658(0x1658,0x880,0x123,0x45,0x1d,0x37,0x86e,0x123,0x45);
      piStack_8 = (int *)0x1658;
      uStack_a = 0x51f6;
      FUN_3000_10f2();
    }
    piStack_8 = (int *)0xa;
    iStack_c = 0x5241;
    uStack_a = uVar11;
    uVar11 = func_0x0000c928();
    return uVar11;
  }
  piStack_8 = (int *)0xf;
  uStack_a = 0x1658;
  iStack_c = 0x4ae1;
  func_0x0000c928();
  piStack_8 = (int *)0xa6;
  uStack_a = 0xd7;
  iStack_c = 0xc87;
  piStack_e = (int *)0x4aef;
  func_0x0000c9f6();
  piStack_8 = (int *)*(undefined2 *)0x9a2;
  uStack_a = *(undefined2 *)0x9a0;
  iStack_c = 0x2db6;
  piStack_e = (int *)0xc87;
  uStack_10 = 0x4b08;
  func_0x0000ca66();
  piStack_8 = (int *)0xa;
  uStack_a = 0xc87;
  iStack_c = 0x4b12;
  func_0x0000c928();
  piStack_8 = (int *)0xc87;
  uStack_a = 0x4b19;
  FUN_3000_1008();
  return 0;
}
