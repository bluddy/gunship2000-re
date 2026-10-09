/* GS.GS2 2000:aa16 undefined FUN_2000_aa16(void) */
void __cdecl16far FUN_2000_aa16(int param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 uVar6;
  undefined2 unaff_DS;
  undefined1 local_ac [82];
  undefined1 local_5a [40];
  undefined2 uStack_32;
  undefined2 uStack_30;
  undefined1 *puStack_2e;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined1 *puStack_28;
  int iStack_26;
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined2 uStack_20;
  undefined1 *puStack_1e;
  int iStack_1c;
  undefined2 uStack_1a;
  undefined1 *puStack_18;
  int iStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined1 *puStack_10;
  int iStack_e;
  undefined1 *puStack_c;
  undefined1 *puStack_a;
  
  func_0x00000eb0();
  puStack_a = (undefined1 *)0xbf;
  puStack_c = (undefined1 *)0xaa2a;
  puVar3 = (undefined2 *)func_0x00000b20();
  puVar5 = (undefined2 *)0x98b8;
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar3;
    puVar3 = puVar3 + 1;
    *puVar2 = *puVar1;
  }
  puStack_a = (undefined1 *)*(undefined2 *)0x98c0;
  puStack_c = (undefined1 *)(*(int *)0x98be + -0x14);
  iStack_e = *(undefined2 *)0x98bc;
  puStack_10 = (undefined1 *)*(undefined2 *)0x98ba;
  uStack_12 = 0x8a4;
  uStack_14 = 0x6f;
  iStack_16 = 0xaa58;
  func_0x0000c8c0();
  puStack_a = (undefined1 *)0xc87;
  puStack_c = (undefined1 *)0xaa62;
  func_0x0000c980();
  puStack_a = (undefined1 *)0xc87;
  puStack_c = (undefined1 *)0xaa6c;
  func_0x0000c928();
  puStack_a = (undefined1 *)0x14;
  puStack_c = (undefined1 *)0x32;
  iStack_e = 0xc87;
  puStack_10 = (undefined1 *)0xaa7a;
  func_0x0000c9a6();
  puStack_a = (undefined1 *)0xc87;
  puStack_c = (undefined1 *)0xaa84;
  FUN_2000_a9e2();
  if (param_1 == 0) {
    if (*(char *)0xad1b == '\0') {
      puStack_a = (undefined1 *)0xc87;
      puStack_c = (undefined1 *)0xaa9f;
      func_0x0000ca66();
    }
    else {
      puStack_a = (undefined1 *)0x335f;
      puStack_c = (undefined1 *)0xc87;
      iStack_e = 0xaaaf;
      func_0x0000ca66();
    }
    puStack_a = local_5a;
    puStack_c = (undefined1 *)0xc87;
    iStack_e = 0xaabe;
    func_0x000162f4();
    puStack_a = local_5a;
    puStack_c = (undefined1 *)*(undefined2 *)(*(char *)0xad0a * 2 + *(int *)0x1a92);
    iStack_e = 0x3370;
    puStack_10 = (undefined1 *)0x1627;
    uStack_12 = 0xaade;
    func_0x0000ca66();
    puStack_a = (undefined1 *)0x3390;
    puStack_c = local_5a;
    iStack_e = 0xc87;
    puStack_10 = (undefined1 *)0xaaf2;
    func_0x000032d0();
    puStack_a = (undefined1 *)0x3395;
    puStack_c = (undefined1 *)0xbf;
    iStack_e = 0xab01;
    func_0x0000ca66();
    puStack_a = (undefined1 *)0x33a8;
    puStack_c = (undefined1 *)0xc87;
    iStack_e = 0xab18;
    func_0x0000ca66();
    if (*(char *)0xad1b == '\x04') {
      puStack_a = (undefined1 *)0xc87;
      puStack_c = (undefined1 *)0xab2d;
      func_0x0000ca66();
      if ((int)*(char *)0xad08 + (int)*(char *)0xad07 == 0) {
        puStack_a = (undefined1 *)0xc87;
        puStack_c = (undefined1 *)0xab46;
        func_0x0000ca66();
      }
      else if ((int)*(char *)0xad06 - (int)*(char *)0xad08 == 1) {
        puStack_a = (undefined1 *)0xc87;
        puStack_c = (undefined1 *)0xab65;
        func_0x0000ca66();
      }
      else {
        puStack_a = (undefined1 *)0x34a2;
        puStack_c = (undefined1 *)0xc87;
        iStack_e = 0xaba3;
        func_0x0000ca66();
      }
    }
    if (*(int *)0xb980 != 0) {
      puStack_a = (undefined1 *)0xc87;
      puStack_c = (undefined1 *)0xabb5;
      func_0x0000ca66();
      puStack_a = (undefined1 *)0xc87;
      puStack_c = (undefined1 *)0xabbe;
      FUN_2000_b032();
    }
    if (*(int *)0xb9be != 0) {
      puStack_a = (undefined1 *)0xc87;
      puStack_c = (undefined1 *)0xabd0;
      func_0x0000ca66();
      puStack_a = (undefined1 *)0xc87;
      puStack_c = (undefined1 *)0xabd9;
      FUN_2000_b032();
    }
    puStack_a = (undefined1 *)0x8000;
    iStack_e = *(uint *)0xa286 + 0x4000;
    puStack_c = (undefined1 *)(*(int *)0xa288 + (uint)(0xbfff < *(uint *)0xa286));
    puStack_10 = (undefined1 *)0xc87;
    uStack_12 = 0xabf5;
    puStack_10 = (undefined1 *)func_0x00003aec();
    uStack_12 = 0;
    uStack_14 = 0x8000;
    puStack_18 = (undefined1 *)(*(uint *)0xa282 + 0x4000);
    iStack_16 = *(int *)0xa284 + (uint)(0xbfff < *(uint *)0xa282);
    uStack_1a = 0xbf;
    iStack_1c = 0xac0f;
    uStack_1a = func_0x00003aec();
    iStack_1c = 0x34d1;
    puStack_1e = local_ac;
    uStack_20 = 0xbf;
    uStack_22 = 0xac1d;
    func_0x000032d0();
    puStack_18 = local_ac;
    uStack_1a = 0x34db;
    iStack_1c = 0xbf;
    puStack_1e = (undefined1 *)0xac2d;
    func_0x0000ca66();
    if (*(int *)0xb942 != 0) {
      puStack_18 = (undefined1 *)0x0;
      uStack_1a = 0x8000;
      puStack_1e = (undefined1 *)(*(uint *)0xb950 + 0x4000);
      iStack_1c = *(int *)0xb952 + (uint)(0xbfff < *(uint *)0xb950);
      uStack_20 = 0xc87;
      uStack_22 = 0xac50;
      uStack_20 = func_0x00003aec();
      uStack_22 = 0;
      uStack_24 = 0x8000;
      puStack_28 = (undefined1 *)(*(uint *)0xb94c + 0x4000);
      iStack_26 = *(int *)0xb94e + (uint)(0xbfff < *(uint *)0xb94c);
      uStack_2a = 0xbf;
      uStack_2c = 0xac6a;
      uStack_2a = func_0x00003aec();
      uStack_2c = 0x34eb;
      puStack_2e = local_ac;
      uStack_30 = 0xbf;
      uStack_32 = 0xac78;
      func_0x000032d0();
      puStack_28 = local_ac;
      uStack_2a = 0x34f5;
      uStack_2c = 0xbf;
      puStack_2e = (undefined1 *)0xac88;
      func_0x0000ca66();
    }
    return;
  }
  puStack_a = (undefined1 *)0x3513;
  puStack_c = (undefined1 *)0xc87;
  iStack_e = 0xacc8;
  func_0x0000ca66();
  puStack_a = local_5a;
  puStack_c = (undefined1 *)0xc87;
  uVar6 = 0x112a;
  iStack_e = 0xacd8;
  func_0x00011320();
  if (*(int *)0xa252 != 0) {
    puStack_a = local_5a;
    puStack_c = (undefined1 *)0x112a;
    iStack_e = 0xad08;
    func_0x00005d19();
    puStack_c = (undefined1 *)0xbf;
    iStack_e = 0xad11;
    func_0x00005ba0();
    puStack_c = (undefined1 *)0xbf;
    iStack_e = 0xad16;
    puStack_c = (undefined1 *)func_0x000059f5();
    iStack_e = 0x352f;
    puStack_10 = local_ac;
    uStack_12 = 0xbf;
    uStack_14 = 0xad24;
    func_0x000032d0();
    puStack_a = (undefined1 *)0xbf;
    uVar6 = 0xc87;
    puStack_c = (undefined1 *)0xad31;
    func_0x0000ca66();
  }
  puStack_c = (undefined1 *)0xad3b;
  puStack_a = (undefined1 *)uVar6;
  func_0x00013a46();
  puStack_a = (undefined1 *)0x3577;
  puStack_c = local_ac;
  iStack_e = 0x139c;
  puStack_10 = (undefined1 *)0xad71;
  func_0x000032d0();
  puStack_a = (undefined1 *)0xbf;
  puStack_c = (undefined1 *)0xad7e;
  func_0x0000ca66();
  puStack_a = (undefined1 *)0x3591;
  puStack_c = local_ac;
  iStack_e = 0xc87;
  puStack_10 = (undefined1 *)0xad93;
  func_0x000032d0();
  puStack_a = (undefined1 *)0x3597;
  puStack_c = (undefined1 *)0xbf;
  iStack_e = 0xada3;
  func_0x0000ca66();
  if (*(char *)0xa270 != '\0') {
    puStack_a = (undefined1 *)0xc87;
    puStack_c = (undefined1 *)0xadb6;
    func_0x00009276();
    puStack_a = (undefined1 *)0x35b3;
    puStack_c = (undefined1 *)0x65c;
    iStack_e = 0xadc5;
    func_0x0000ca66();
  }
  puStack_a = (undefined1 *)0xadcc;
  FUN_2000_add0();
  return;
}
