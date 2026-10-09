/* GS.GS2 2000:c59a undefined FUN_2000_c59a(void) */
void __cdecl16far FUN_2000_c59a(void)

{
  byte bVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  char cVar4;
  undefined2 *puVar5;
  uint uVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int local_5e;
  int local_5c;
  uint uStack_5a;
  char local_58;
  undefined2 local_50;
  undefined2 uStack_4e;
  undefined1 local_2c [18];
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  int iStack_e;
  int iStack_c;
  int *piStack_a;
  
  func_0x00000eb0();
  piStack_a = (int *)0xbf;
  iStack_c = 0xc5af;
  FUN_2000_cbbe();
  *(char *)0x9bdb = local_58;
  if (local_58 == '\0') {
    piStack_a = (int *)0x1;
    iStack_c = 0xbf;
    iStack_e = 0xc5d6;
    func_0x0000d628();
  }
  else {
    piStack_a = (int *)0x1;
    iStack_c = 0xbf;
    iStack_e = 0xc5c6;
    func_0x0000d628();
  }
  piStack_a = (int *)0x3;
  iStack_c = 0x525a;
  iStack_e = 0xd02;
  uStack_10 = 0xc5e5;
  func_0x000156ea();
  piStack_a = (int *)0x14e6;
  iStack_c = 0xc5ef;
  puVar5 = (undefined2 *)func_0x00000b20();
  puVar8 = &local_50;
  for (iVar7 = 0x12; iVar7 != 0; iVar7 = iVar7 + -1) {
    puVar3 = puVar8;
    puVar8 = puVar8 + 1;
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar3 = *puVar2;
  }
  piStack_a = (int *)uStack_4e;
  iStack_c = (int)*(char *)0xad09;
  iStack_e = 0;
  uStack_10 = 0x6f;
  uStack_12 = 0xc610;
  func_0x0001077a();
  piStack_a = (int *)0xac;
  iStack_c = 0x70;
  iStack_e = 0;
  uStack_10 = 0;
  uStack_12 = 4;
  uStack_14 = 0x8a4;
  uStack_16 = 0x106a;
  uStack_18 = 0xc628;
  func_0x0000dc6e();
  piStack_a = (int *)0xd02;
  iStack_c = 0xc632;
  func_0x0000d6ac();
  piStack_a = (int *)0x6;
  iStack_c = 0x45;
  iStack_e = 0x55;
  uStack_10 = 0xb9;
  uStack_12 = 0x880;
  uStack_14 = 0xd02;
  uStack_16 = 0xc648;
  func_0x0000c8c0();
  piStack_a = (int *)0xc87;
  iStack_c = 0xc652;
  func_0x0000c980();
  piStack_a = (int *)0xc87;
  iStack_c = 0xc65c;
  func_0x0000c928();
  piStack_a = (int *)local_2c;
  iStack_c = 0xc87;
  iStack_e = 0xc66b;
  func_0x000162f4();
  piStack_a = (int *)0x1627;
  iStack_c = 0xc677;
  func_0x0000c8aa();
  piStack_a = (int *)0xac;
  iStack_c = 0x70;
  iStack_e = 0;
  uStack_10 = 0;
  uStack_12 = 0x8a4;
  uStack_14 = 0xc87;
  uStack_16 = 0xc68d;
  func_0x0000c8c0();
  piStack_a = (int *)0xc87;
  iStack_c = 0xc697;
  func_0x0000c980();
  piStack_a = (int *)0xc87;
  iStack_c = 0xc6a1;
  func_0x0000c928();
  piStack_a = (int *)0xc87;
  iStack_c = 0xc6ac;
  FUN_2000_c8be();
  piStack_a = (int *)0xc87;
  iStack_c = 0xc6b6;
  func_0x0000d6ac();
  piStack_a = (int *)0x2;
  iStack_c = 0xd02;
  uVar9 = 0xd02;
  iStack_e = 0xc6c3;
  func_0x0000d628();
  if (*(char *)0x9bdb != '\0') {
    piStack_a = (int *)0x55;
    iStack_c = 1;
    iStack_e = 0xd02;
    uVar9 = 0x15f0;
    uStack_10 = 0xc6d8;
    func_0x00015fca();
  }
  if ((*(char *)0xad0a != '\0') && ((*(byte *)0xad0b & 3) == 0)) {
    *(byte *)0xad0b = *(byte *)0xad0b | 1;
  }
  bVar1 = *(byte *)0xad0b;
  uStack_5a = (uint)((char)(*(byte *)0xad0b & 0xc) >> 2);
  if (uStack_5a != (bVar1 & 3)) {
    cVar4 = *(char *)0x9bde;
    *(char *)0x9bde = *(char *)0x9bde + '\x01';
    uVar10 = uVar9;
    if (cVar4 != '\0') {
      uVar10 = 0xc87;
      piStack_a = (int *)0xc718;
      func_0x0000cd22();
    }
    piStack_a = (int *)*(undefined2 *)((bVar1 & 3) * 2 + 0x5582);
    iStack_c = 0x527b;
    uVar9 = 0xc87;
    uStack_10 = 0xc72d;
    iStack_e = uVar10;
    func_0x0000ca66();
  }
  piStack_a = (int *)0x0;
  iStack_c = 0;
  uStack_10 = 0xc73a;
  iStack_e = uVar9;
  FUN_2000_cd28();
  if ((*(byte *)0xbb9c & 3) != 0) {
    piStack_a = (int *)0xc748;
    cVar4 = FUN_2000_ca4e();
    *(char *)0x9bdd = cVar4;
    if (cVar4 != '\0') {
      cVar4 = *(char *)0x9bde;
      *(char *)0x9bde = *(char *)0x9bde + '\x01';
      uVar10 = uVar9;
      if (cVar4 != '\0') {
        uVar10 = 0xc87;
        piStack_a = (int *)0xc75f;
        func_0x0000cd22();
      }
      piStack_a = (int *)0x52cb;
      uVar9 = 0xc87;
      iStack_e = 0xc773;
      iStack_c = uVar10;
      func_0x0000ca66();
      *(undefined1 *)0xad0a = *(undefined1 *)0x9bdd;
      uVar10 = *(undefined2 *)0xad2a;
      *(undefined2 *)0xad30 = *(undefined2 *)0xad28;
      *(undefined2 *)0xad32 = uVar10;
    }
  }
  *(int *)0xad0f = *(int *)0xad0f - *(int *)0x9be2;
  piStack_a = &local_5c;
  iStack_e = 0xc79e;
  iStack_c = uVar9;
  func_0x0000cf8e();
  uVar6 = *(uint *)&SUB_0000_bba0 / 0x168;
  if (((0x1e < uVar6) && (*(char *)0x9be0 == '\0')) && (*(char *)0x9bdc != '\0')) {
    cVar4 = *(char *)0x9bde;
    *(char *)0x9bde = *(char *)0x9bde + '\x01';
    if (cVar4 != '\0') {
      piStack_a = (int *)0xc7d1;
      func_0x0000cd22();
    }
    if (uVar6 < 0x28) {
      piStack_a = (int *)0xc87;
      iStack_c = 0xc7df;
      func_0x0000ca66();
    }
    else if (uVar6 < 0x32) {
      piStack_a = (int *)0xc87;
      iStack_c = 0xc7f2;
      func_0x0000ca66();
    }
    else if (uVar6 < 0x3c) {
      piStack_a = (int *)0xc87;
      iStack_c = 0xc806;
      func_0x0000ca66();
    }
    else {
      piStack_a = (int *)0xc87;
      iStack_c = 0xc814;
      func_0x0000ca66();
    }
  }
  uVar9 = 0xc87;
  if ((local_5c == 0) && (local_5e == 0)) {
    uVar9 = 0x1a79;
    piStack_a = (int *)0xc828;
    iVar7 = func_0x0001ab4c();
    if (iVar7 == 0) {
      cVar4 = *(char *)0x9bde;
      *(char *)0x9bde = *(char *)0x9bde + '\x01';
      if (cVar4 != '\0') {
        uVar9 = 0xc87;
        piStack_a = (int *)0xc83c;
        func_0x0000cd22();
      }
      piStack_a = (int *)uVar9;
      if (*(char *)0x9bdc == '\0') {
        uVar9 = 0xc87;
        iStack_c = 0xc858;
        func_0x0000ca66();
      }
      else {
        uVar9 = 0xc87;
        iStack_c = 0xc84b;
        func_0x0000ca66();
      }
    }
  }
  piStack_a = &local_5c;
  iStack_e = 0xc868;
  iStack_c = uVar9;
  func_0x0000cf8e();
  if ((local_5c != 0) || (local_5e != 0)) {
    piStack_a = (int *)(local_5e + 0x10);
    iStack_c = 0x78;
    iStack_e = 0xa6 - local_5e;
    uStack_10 = 6;
    uStack_12 = 4;
    uStack_14 = 0xc87;
    uStack_16 = 0xc892;
    func_0x0000da72();
    piStack_a = (int *)0xa;
    iStack_c = 0x880;
    iStack_e = local_5e + 8;
    uStack_10 = 0x70;
    uStack_12 = 0;
    uStack_14 = 0;
    uStack_16 = 0x8a4;
    uStack_18 = 0xd02;
    uStack_1a = 0xc8b6;
    func_0x00016658();
  }
  return;
}
