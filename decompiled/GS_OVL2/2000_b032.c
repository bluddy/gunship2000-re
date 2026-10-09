/* GS.GS2 2000:b032 undefined FUN_2000_b032(void) */
void __cdecl16far FUN_2000_b032(int param_1)

{
  int iVar1;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 **local_f2 [21];
  undefined1 local_c8 [82];
  undefined1 local_76 [42];
  int iStack_4c;
  undefined2 **local_4a [12];
  undefined2 uStack_32;
  undefined2 uStack_30;
  undefined1 *puStack_2e;
  undefined2 uStack_2c;
  undefined1 *puStack_2a;
  undefined2 **ppuStack_28;
  undefined2 **ppuStack_26;
  undefined2 uStack_24;
  undefined2 uStack_22;
  uint uStack_20;
  int iStack_1e;
  undefined2 ***pppuStack_1c;
  undefined2 **ppuStack_1a;
  undefined2 ****local_18;
  undefined2 **ppuStack_16;
  int iStack_14;
  int iStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  int iStack_c;
  int iStack_a;
  undefined2 uStack_8;
  undefined2 uStack_6;
  
  uStack_6 = 0xb03d;
  func_0x00000eb0();
  uStack_6 = 0;
  uStack_8 = 0x8000;
  iVar1 = param_1 * 0x3e;
  iStack_c = *(uint *)(iVar1 + -0x46f2) + 0x4000;
  iStack_a = *(int *)(iVar1 + -0x46f0) + (uint)(0xbfff < *(uint *)(iVar1 + -0x46f2));
  uStack_e = 0xbf;
  uStack_10 = 0xb05e;
  pppuStack_1c = (undefined2 ***)func_0x00003aec();
  uStack_e = 0;
  uStack_10 = 0x8000;
  iStack_14 = *(uint *)(iVar1 + -0x46ee) + 0x4000;
  iStack_12 = *(int *)(iVar1 + -0x46ec) + (uint)(0xbfff < *(uint *)(iVar1 + -0x46ee));
  ppuStack_16 = (undefined2 **)0xbf;
  local_18 = (undefined2 ****)0xb07b;
  iStack_1e = func_0x00003aec();
  ppuStack_16 = (undefined2 **)param_1;
  local_18 = (undefined2 ****)0xbf;
  ppuStack_1a = (undefined2 **)0xb086;
  func_0x00008d7e();
  ppuStack_16 = (undefined2 **)iStack_1e;
  local_18 = (undefined2 ****)pppuStack_1c;
  ppuStack_1a = (undefined2 **)0x36e1;
  pppuStack_1c = local_4a;
  iStack_1e = 0x65c;
  uStack_20 = 0xb09e;
  func_0x000032d0();
  uStack_20 = *(int *)(param_1 * 2 + -0x5358);
  ppuStack_16 = (undefined2 **)(uint)*(byte *)(uStack_20 + -0x4794);
  local_18 = (undefined2 ****)local_f2;
  ppuStack_1a = (undefined2 **)0xbf;
  pppuStack_1c = (undefined2 ***)0xb0be;
  func_0x0000733c();
  iStack_4c = 0;
  while (*(uint *)((int)*(undefined4 *)0xb860 + (uint)*(byte *)(uStack_20 + -0x4794) * 0x27 + 0x19)
         != (uint)*(byte *)(iStack_4c * 8 + (int)*(undefined4 *)0xb85c)) {
    iStack_4c = iStack_4c + 1;
  }
  if (*(char *)((int)*(undefined4 *)0xb85c + iStack_4c * 8 + 2) == '\x02') {
    for (iStack_4c = 0; iStack_4c < 0xc; iStack_4c = iStack_4c + 1) {
      *(undefined1 *)((int)local_f2 + iStack_4c) =
           *(undefined1 *)(iStack_4c + uStack_20 * 0x20 + -0x5d71);
    }
  }
  if (*(int *)(param_1 * 0x3e + -0x46e4) != 0 || *(int *)(param_1 * 0x3e + -0x46e6) != 0) {
    ppuStack_16 = (undefined2 **)0x65c;
    local_18 = (undefined2 ****)0xb15e;
    func_0x00005828();
    iStack_1e = 0xbf;
    uStack_20 = 0xb168;
    func_0x00005945();
    iStack_1e = 0xbf;
    uStack_20 = 0xb189;
    func_0x00005828();
    ppuStack_26 = (undefined2 **)0xbf;
    ppuStack_28 = (undefined2 **)0xb193;
    func_0x00005945();
    ppuStack_26 = (undefined2 **)0xbf;
    ppuStack_28 = (undefined2 **)0xb198;
    func_0x00006072();
    ppuStack_16 = (undefined2 **)0xbf;
    local_18 = (undefined2 ****)0xb1a2;
    func_0x000057a8();
    ppuStack_16 = (undefined2 **)0xbf;
    local_18 = (undefined2 ****)0xb1ab;
    func_0x00005ba0();
    ppuStack_16 = (undefined2 **)0xbf;
    local_18 = (undefined2 ****)0xb1b4;
    func_0x00005ba0();
    ppuStack_16 = (undefined2 **)0xbf;
    local_18 = (undefined2 ****)0xb1b9;
    ppuStack_16 = (undefined2 **)func_0x000059f5();
    local_18 = &local_18;
    ppuStack_1a = (undefined2 **)0xbf;
    pppuStack_1c = (undefined2 ***)0xb1c3;
    func_0x00011320();
    ppuStack_16 = local_4a;
    local_18 = &local_18;
    ppuStack_1a = local_f2;
    pppuStack_1c = (undefined2 ***)0x36eb;
    iStack_1e = 0x112a;
    uStack_20 = 0xb1db;
    func_0x0000ca66();
    return;
  }
  if (ppuStack_1a == (undefined2 **)0x3) {
    ppuStack_16 = local_f2;
    local_18 = (undefined2 ****)0x372e;
    ppuStack_1a = (undefined2 **)local_76;
    pppuStack_1c = (undefined2 ***)0x65c;
    iStack_1e = 0xb1f9;
    func_0x000032d0();
    ppuStack_16 = (undefined2 **)local_76;
    local_18 = (undefined2 ****)local_4a;
    ppuStack_1a = (undefined2 **)0x3732;
    pppuStack_1c = (undefined2 ***)0xbf;
    iStack_1e = 0xb20c;
    func_0x0000ca66();
    return;
  }
  if ((param_1 == 2) && (ppuStack_1a == (undefined2 **)0x2)) {
    ppuStack_16 = (undefined2 **)0x0;
    local_18 = (undefined2 ****)0x8000;
    ppuStack_1a = (undefined2 **)*(undefined2 *)0xb914;
    pppuStack_1c = (undefined2 ***)*(undefined2 *)0xb912;
    iStack_1e = 0x65c;
    uStack_20 = 0xb236;
    func_0x00003aec();
    iStack_1e = 0;
    uStack_20 = 0x8000;
    uStack_22 = *(undefined2 *)0xb910;
    uStack_24 = *(undefined2 *)0xb90e;
    ppuStack_26 = (undefined2 **)0xbf;
    ppuStack_28 = (undefined2 **)0xb24b;
    pppuStack_1c = (undefined2 ***)func_0x00003aec();
    if ((int)pppuStack_1c < 3) {
      uStack_20 = 2;
    }
    else if ((int)pppuStack_1c < 0xe) {
      if (iStack_1e < 3) {
        uStack_20 = 1;
      }
      else {
        uStack_20 = 3;
      }
    }
    else {
      uStack_20 = 0;
    }
    if ((uStack_20 & 1) == 0) {
      pppuStack_1c = (undefined2 ***)iStack_1e;
    }
    ppuStack_26 = (undefined2 **)((int)pppuStack_1c + 2);
    ppuStack_28 = (undefined2 **)((int)pppuStack_1c + -2);
    puStack_2a = (undefined1 *)*(undefined2 *)(uStack_20 * 2 + 0x38f0);
    uStack_2c = 0x3762;
    puStack_2e = local_76;
    uStack_30 = 0xbf;
    uStack_32 = 0xb2a9;
    func_0x000032d0();
    ppuStack_26 = local_f2;
    ppuStack_28 = (undefined2 **)0x3772;
    puStack_2a = local_c8;
    uStack_2c = 0xbf;
    puStack_2e = (undefined1 *)0xb2be;
    func_0x000032d0();
    ppuStack_26 = (undefined2 **)local_c8;
    ppuStack_28 = local_4a;
    puStack_2a = local_76;
    uStack_2c = 0x3776;
    puStack_2e = (undefined1 *)0xbf;
    uStack_30 = 0xb2d6;
    func_0x0000ca66();
    return;
  }
  if (ppuStack_1a == (undefined2 **)0x7) {
    ppuStack_16 = local_4a;
    local_18 = (undefined2 ****)0x37be;
    ppuStack_1a = (undefined2 **)0x65c;
    pppuStack_1c = (undefined2 ***)0xb2ee;
    func_0x0000ca66();
    return;
  }
  if (ppuStack_1a != (undefined2 **)0x1) {
    if (ppuStack_1a == (undefined2 **)0x6) {
      ppuStack_16 = local_4a;
      local_18 = (undefined2 ****)0x3857;
      ppuStack_1a = (undefined2 **)local_76;
      pppuStack_1c = (undefined2 ***)0x65c;
      iStack_1e = 0xb328;
      func_0x000032d0();
      ppuStack_16 = (undefined2 **)local_76;
      local_18 = (undefined2 ****)local_f2;
      ppuStack_1a = (undefined2 **)0x385b;
      pppuStack_1c = (undefined2 ***)0xbf;
      iStack_1e = 0xb33c;
      func_0x0000ca66();
    }
    else if (ppuStack_1a == (undefined2 **)0x4) {
      ppuStack_16 = local_f2;
      local_18 = (undefined2 ****)0x388f;
      ppuStack_1a = (undefined2 **)local_76;
      pppuStack_1c = (undefined2 ***)0x65c;
      iStack_1e = 0xb359;
      func_0x000032d0();
      ppuStack_16 = (undefined2 **)local_76;
      local_18 = (undefined2 ****)local_4a;
      ppuStack_1a = (undefined2 **)0x3893;
      pppuStack_1c = (undefined2 ***)0xbf;
      iStack_1e = 0xb36c;
      func_0x0000ca66();
    }
    else if (ppuStack_1a == (undefined2 **)0x5) {
      ppuStack_16 = local_4a;
      local_18 = (undefined2 ****)0x38ba;
      ppuStack_1a = (undefined2 **)local_76;
      pppuStack_1c = (undefined2 ***)0x65c;
      iStack_1e = 0xb388;
      func_0x000032d0();
      ppuStack_16 = (undefined2 **)local_76;
      local_18 = (undefined2 ****)local_f2;
      ppuStack_1a = (undefined2 **)0x38be;
      pppuStack_1c = (undefined2 ***)0xbf;
      iStack_1e = 0xb39c;
      func_0x0000ca66();
    }
    else {
      ppuStack_16 = (undefined2 **)0x38e2;
      local_18 = (undefined2 ****)0x65c;
      ppuStack_1a = (undefined2 **)0xb3aa;
      func_0x0000ca66();
    }
    return;
  }
  ppuStack_16 = local_4a;
  local_18 = (undefined2 ****)local_f2;
  ppuStack_1a = (undefined2 **)0x3817;
  pppuStack_1c = (undefined2 ***)0x65c;
  iStack_1e = 0xb30b;
  func_0x0000ca66();
  return;
}
