/* GS.GS2 2000:ce20 undefined FUN_2000_ce20(void) */
void __cdecl16far FUN_2000_ce20(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 local_7e [42];
  int iStack_54;
  int iStack_52;
  int iStack_50;
  int iStack_4e;
  int iStack_4c;
  undefined2 local_4a;
  int iStack_48;
  int iStack_46;
  int iStack_44;
  int iStack_42;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  undefined2 auStack_2a [2];
  undefined2 local_26;
  int iStack_24;
  int iStack_22;
  int iStack_20;
  int iStack_1e;
  undefined2 uStack_1c;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  int iStack_10;
  int iStack_e;
  undefined1 *puStack_c;
  int iStack_a;
  
  func_0x00000eb0();
  iStack_a = 0xbf;
  puStack_c = (undefined1 *)0xce34;
  puVar3 = (undefined2 *)func_0x00000b20();
  puVar5 = &local_26;
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar3;
    puVar3 = puVar3 + 1;
    *puVar2 = *puVar1;
  }
  iStack_4c = iStack_24 + -4;
  iStack_4e = iStack_22 + -4;
  iStack_a = 0x6f;
  puStack_c = (undefined1 *)0xce5c;
  puVar3 = (undefined2 *)func_0x00000b20();
  puVar5 = &local_26;
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar3;
    puVar3 = puVar3 + 1;
    *puVar2 = *puVar1;
  }
  iStack_a = 0x6f;
  puStack_c = (undefined1 *)0xce72;
  puVar3 = (undefined2 *)func_0x00000b20();
  puVar5 = &local_4a;
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar3;
    puVar3 = puVar3 + 1;
    *puVar2 = *puVar1;
  }
  iStack_a = (iStack_22 - iStack_4e) + iStack_1e + 4;
  puStack_c = (undefined1 *)(iStack_20 + 8);
  iStack_e = iStack_4e;
  iStack_10 = iStack_4c;
  uStack_12 = 8;
  uStack_14 = 0x6f;
  uVar6 = 0xd02;
  uStack_16 = 0xcea4;
  func_0x0000da72();
  for (iStack_50 = 1;
      (iStack_50 < 0xd &&
      (iStack_54 = *(char *)0x98ab + iStack_50 + -1, iStack_54 < *(char *)0x98aa));
      iStack_50 = iStack_50 + 1) {
    uVar7 = 0x6f;
    puStack_c = (undefined1 *)0xceda;
    iStack_a = uVar6;
    puVar3 = (undefined2 *)func_0x00000b20();
    puVar5 = &local_26;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar2 = puVar5;
      puVar5 = puVar5 + 1;
      puVar1 = puVar3;
      puVar3 = puVar3 + 1;
      *puVar2 = *puVar1;
    }
    if ((int)*(char *)((int)*(undefined4 *)0x98a6 + iStack_54 * 0x29 + 0x22) !=
        (-(uint)(*(char *)0x988e == '\0') & 6) + 4) {
      iStack_a = iStack_1e / 3 + iStack_22;
      puStack_c = (undefined1 *)(iStack_24 + -2);
      iStack_e = 0x880;
      iStack_10 = 0x6f;
      uVar7 = 0x1658;
      uStack_12 = 0xcf24;
      func_0x00016eb7();
    }
    puStack_c = (undefined1 *)0xcf2e;
    iStack_a = uVar7;
    func_0x0000c980();
    iStack_a = 0xc87;
    puStack_c = (undefined1 *)0xcf49;
    func_0x0000c928();
    iStack_a = iStack_1e;
    puStack_c = (undefined1 *)iStack_20;
    iStack_e = iStack_22;
    iStack_10 = iStack_24;
    uStack_12 = 0x880;
    uStack_14 = 0xc87;
    uStack_16 = 0xcf62;
    func_0x0000c8c0();
    iVar4 = iStack_54 * 0x29;
    iStack_a = iVar4 + *(int *)0x98a6 + 0xd;
    puStack_c = (undefined1 *)0x24a5;
    iStack_e = 0xc87;
    iStack_10 = -0x307e;
    func_0x0000ca66();
    if (*(char *)0x9892 == iStack_54) {
      iStack_a = iStack_42;
      puStack_c = (undefined1 *)iStack_44;
      iStack_e = iStack_46;
      iStack_10 = iStack_48;
      uStack_12 = 6;
      uStack_14 = 0xc87;
      uStack_16 = 0xcfa6;
      func_0x0000da72();
      iStack_a = 0xd02;
      puStack_c = (undefined1 *)0xcfb0;
      func_0x0000c980();
      iStack_a = iStack_42 + -8;
      puStack_c = (undefined1 *)(iStack_44 + -8);
      iStack_e = iStack_46 + 3;
      iStack_10 = iStack_48 + 4;
      uStack_12 = 0x880;
      uStack_14 = 0xc87;
      uStack_16 = 0xcfd9;
      func_0x0000c8c0();
      if (*(char *)0x988e == '\0') {
        iStack_a = 0xc87;
        puStack_c = (undefined1 *)0xcfeb;
        func_0x0000c8aa();
        iStack_a = 0x24b8;
        puStack_c = local_7e;
        iStack_e = 0xc87;
        iStack_10 = 0xd002;
        func_0x000032d0();
        iStack_a = 0xbf;
        puStack_c = (undefined1 *)0xd00e;
        func_0x0000c8aa();
        iStack_a = 0xc87;
        puStack_c = (undefined1 *)0xd018;
        func_0x0000c9c8();
        iStack_a = 0xc87;
        puStack_c = (undefined1 *)0xd023;
        func_0x0000c8aa();
        iStack_52 = *(int *)((int)*(undefined4 *)0x98a6 + iVar4 + 0x25);
        if (iStack_52 == 0x7fff) {
          iStack_52 = 0;
        }
        iStack_a = 0x24cb;
        puStack_c = local_7e;
        iStack_e = 0xc87;
        iStack_10 = -0x2fb6;
        func_0x000032d0();
        iStack_a = 0xbf;
        puStack_c = (undefined1 *)0xd056;
        func_0x0000c8aa();
      }
      iStack_a = 0xc87;
      puStack_c = (undefined1 *)0xd060;
      func_0x0000c980();
    }
    uVar6 = 0xc87;
  }
  for (; iStack_50 < 0xd; iStack_50 = iStack_50 + 1) {
    puStack_c = (undefined1 *)0xd079;
    iStack_a = uVar6;
    puVar3 = (undefined2 *)func_0x00000b20();
    puVar5 = &local_26;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar2 = puVar5;
      puVar5 = puVar5 + 1;
      puVar1 = puVar3;
      puVar3 = puVar3 + 1;
      *puVar2 = *puVar1;
    }
    uStack_1c = 0;
    puVar3 = auStack_2a;
    puVar5 = &local_26;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar2 = puVar3;
      puVar3 = puVar3 + 1;
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar2 = *puVar1;
    }
    uStack_2c = 0x6f;
    uVar6 = 0x6f;
    uStack_2e = 0xd09f;
    func_0x00000770();
  }
  return;
}
