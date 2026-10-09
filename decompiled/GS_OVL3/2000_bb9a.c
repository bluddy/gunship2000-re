/* GS.GS2 2000:bb9a undefined FUN_2000_bb9a(void) */
void __cdecl16far FUN_2000_bb9a(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 local_26;
  undefined2 uStack_24;
  int iStack_22;
  int iStack_20;
  int iStack_1e;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  int iStack_12;
  int iStack_10;
  int iStack_e;
  undefined2 uStack_c;
  int iStack_a;
  
  func_0x00000eb0();
  iStack_a = 0xbf;
  uStack_c = 0xbbb0;
  iVar3 = func_0x00014e66();
  if (iVar3 < 0) {
    return;
  }
  *(undefined1 *)0x9bcd = 0;
  *(undefined1 *)0x9bce = 0;
  iStack_a = 0x14e6;
  uStack_c = 0xbbcb;
  func_0x0000dd4a();
  iStack_a = 0xd02;
  uStack_c = 0xbbd7;
  func_0x0000d5d0();
  iStack_a = 0x2f4;
  uStack_c = 0x1bb6;
  iStack_e = 0x1f8;
  iStack_10 = 0xd02;
  iStack_12 = 0xbbeb;
  func_0x000156c4();
  iStack_a = 0x14e6;
  uStack_c = 0xbbf5;
  puVar4 = (undefined2 *)func_0x00000b20();
  puVar5 = &local_26;
  for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  iStack_a = 0x6f;
  uStack_c = 0xbc0d;
  func_0x0001cbbe();
  iStack_a = 3;
  uStack_c = 0x5144;
  iStack_e = 0x1c4b;
  iStack_10 = 0xbc1c;
  func_0x000156ea();
  iStack_a = 0xac;
  uStack_c = 200;
  iStack_e = 0;
  iStack_10 = 0;
  iStack_12 = 5;
  uStack_14 = 0x8a4;
  uStack_16 = 0x14e6;
  uStack_18 = 0xbc35;
  func_0x0000dc6e();
  iStack_a = 0xd02;
  uStack_c = 0xbc3f;
  func_0x0000d6ac();
  iStack_a = 0xac;
  uStack_c = 200;
  iStack_e = 0;
  iStack_10 = 0;
  iStack_12 = 0x8a4;
  uStack_14 = 0xd02;
  uStack_16 = 0xbc56;
  func_0x0000c8c0();
  iStack_a = 0xc87;
  uStack_c = 0xbc60;
  func_0x0000c980();
  iStack_a = 0xc87;
  uStack_c = 0xbc6a;
  func_0x0000c928();
  if (*(char *)0x9bcc == '\0') {
    iStack_a = 0xc87;
    uVar6 = 0x1c4b;
    uStack_c = 0xbc7d;
    func_0x0001c8be();
  }
  else {
    iStack_a = 0xc87;
    uVar6 = 0xc87;
    uStack_c = 0xbc8a;
    func_0x0000ca66();
  }
  iStack_a = 0x140 - iStack_20;
  uStack_c = 0x892;
  iStack_e = iStack_1e + 0x28;
  iStack_10 = iStack_20;
  iStack_12 = iStack_22;
  uStack_14 = uStack_24;
  uStack_16 = 0x880;
  uStack_1a = 0xbcb1;
  uStack_18 = uVar6;
  func_0x00016658();
  iStack_a = uStack_24;
  uStack_c = 0;
  iStack_e = 0;
  iStack_10 = 0x1658;
  iStack_12 = 0xbcc9;
  func_0x0001077a();
  iStack_12 = (uint)*(byte *)0x9bcd + iStack_22 + -2;
  iStack_a = uStack_24;
  uStack_c = 0x86e;
  iStack_e = iStack_1e + 4;
  iStack_10 = iStack_20;
  uStack_14 = uStack_24;
  uStack_16 = 0x880;
  uStack_18 = 0x106a;
  uStack_1a = 0xbcf3;
  func_0x00016658();
  iStack_a = 0xbcfb;
  func_0x0001540e();
  iStack_a = 0x14e6;
  uStack_c = 0xbd02;
  func_0x0000dd2e();
  return;
}
