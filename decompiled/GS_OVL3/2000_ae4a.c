/* GS.GS2 2000:ae4a undefined FUN_2000_ae4a(void) */
void __cdecl16far FUN_2000_ae4a(int param_1,int param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  char local_88 [6];
  undefined1 uStack_82;
  int iStack_36;
  uint uStack_34;
  int iStack_32;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined2 local_2c;
  char cStack_29;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  int iStack_14;
  int iStack_12;
  int iStack_10;
  char *local_e;
  
  func_0x00000eb0();
  puVar5 = &local_2c;
  puVar4 = (undefined2 *)(param_1 * 0x29 + -0x45bd);
  for (iVar3 = 0x14; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
  func_0x00012e3e();
  iStack_32 = param_1 * 0x50;
  uStack_2e = 0x4f;
  uStack_30 = 0x88;
  if (param_2 == 1) {
    local_e = (char *)0xe;
    iStack_10 = iStack_32 + 0x34;
    iStack_12 = 0;
    iStack_14 = 0x1163;
    uStack_16 = 0xaea7;
    func_0x0000dc32();
  }
  else if (param_2 == 0) {
    local_e = (char *)0x0;
    iStack_12 = 0;
    iStack_14 = 0x1163;
    uStack_16 = 0xaec4;
    iStack_10 = iStack_32;
    func_0x0000da72();
  }
  uVar6 = 0xc87;
  func_0x0000c980();
  if (param_2 == 0) {
    local_e = (char *)0x3;
    iVar3 = iStack_32 + 4;
    iStack_12 = 0x880;
    iStack_14 = 0xc87;
    uStack_16 = 0xaef5;
    iStack_10 = iVar3;
    func_0x0000c8c0();
    func_0x0000c928();
    local_e = (char *)0xaf0b;
    func_0x0000ca12();
    func_0x0000ca50();
    local_e = (char *)0x20;
    iStack_10 = 0x30;
    uStack_34 = (uint)cStack_29;
    iStack_12 = (int)uStack_34 % 6 << 5;
    iStack_14 = ((int)uStack_34 / 6) * 0x30;
    uStack_16 = 0x8a4;
    uStack_18 = 0xc87;
    uStack_1a = 0xaf47;
    func_0x00016658();
    local_e = (char *)0xb;
    iStack_12 = 0x880;
    iStack_14 = 0x1658;
    uVar6 = 0xd02;
    uStack_16 = 0xaf5d;
    iStack_10 = iVar3;
    func_0x0000d116();
  }
  if (param_2 < 2) {
    uVar7 = uVar6;
    if (((*(char *)0x9bc6 != '\0') && (*(char *)0x9bc8 == '\0')) && (*(char *)0x9bc2 == param_1)) {
      local_e = (char *)0x1;
      uVar7 = 0x106a;
      iStack_12 = 0xaf9b;
      iStack_10 = uVar6;
      func_0x0001077a();
    }
    uVar6 = 0xbf;
    iStack_10 = 0xafac;
    local_e = (char *)uVar7;
    func_0x0000382a();
    if ((*(byte *)(param_1 + -0x4456) & 0x14) != 0) {
      uStack_82 = 1;
    }
    for (uStack_34 = 0; (int)uStack_34 < (int)*(char *)0x9bc6; uStack_34 = uStack_34 + 1) {
      if ((*(char *)(uStack_34 + -0x6438) != '\0') && (*(char *)(uStack_34 + -0x643e) == param_1)) {
        local_88[*(char *)(uStack_34 + -0x6438)] = '\x01';
      }
    }
    local_e = local_88;
    iStack_10 = 0xbf;
    iStack_12 = 0xb006;
    FUN_2000_b404();
  }
  local_e = (char *)0x2c;
  iStack_10 = iStack_32 + 4;
  iStack_12 = 0x880;
  uStack_16 = 0xb020;
  iStack_14 = uVar6;
  func_0x0000c8c0();
  if (((*(int *)0xb60f < 1) || ((int)*(char *)0x9bc6 < *(int *)0xb60f)) ||
     (*(char *)(*(int *)0xb60f + -0x643f) != param_1)) {
    func_0x0000c928();
  }
  else {
    func_0x0000c928();
  }
  local_e = (char *)0xb064;
  func_0x0000ca66();
  func_0x0000c9c8();
  local_e = (char *)0xc87;
  iStack_10 = 0xb098;
  func_0x0000ca66();
  iStack_36 = (int)*(char *)(param_1 * 0x24 + -0x44f4);
  uStack_34 = func_0x00015bac();
  if (((int)uStack_34 < 0) || (0x62 < (int)uStack_34)) {
    local_e = (char *)0x1581;
    iStack_10 = 0xb0ee;
    func_0x000032d0();
  }
  else {
    local_e = local_88;
    iStack_10 = 0x1581;
    iStack_12 = 0xb0d8;
    func_0x00003d8c();
  }
  if (uStack_34 == 6) {
    for (uStack_34 = 0; local_88[uStack_34] != '\0'; uStack_34 = uStack_34 + 1) {
      if (local_88[uStack_34] == ' ') {
        local_88[uStack_34] = '\0';
        break;
      }
    }
  }
  local_e = (char *)0xb129;
  func_0x0000ca66();
  if (param_2 == 0) {
    local_e = (char *)0xb13e;
    func_0x0000ca12();
    func_0x0000c928();
    func_0x0000ca50();
    local_e = (char *)0x46;
    iStack_10 = iStack_32 + 4;
    iStack_12 = 0x880;
    iStack_14 = 0xc87;
    uStack_16 = 0xb172;
    func_0x00016e72();
    local_e = (char *)0x1658;
    iStack_10 = 0xb180;
    func_0x0000c9a6();
    local_e = (char *)0xb18c;
    func_0x0000ca12();
    uStack_34 = (uint)*(byte *)(param_1 + -0x4452);
    func_0x0000ca66();
    local_e = (char *)0xc87;
    iStack_10 = 0xb1ba;
    func_0x000032d0();
    local_e = (char *)0xbf;
    iStack_10 = 0xb1cb;
    func_0x0000c93a();
    func_0x0000ca66();
    uStack_34 = (uint)*(byte *)(param_1 + -0x444e);
    func_0x0000ca66();
    local_e = (char *)0xc87;
    iStack_10 = 0xb204;
    func_0x000032d0();
    local_e = (char *)0xbf;
    iStack_10 = 0xb215;
    func_0x0000c93a();
    func_0x0000ca66();
    uStack_34 = (uint)*(byte *)(param_1 + -0x444a);
    func_0x0000ca66();
    local_e = (char *)0xc87;
    iStack_10 = 0xb24e;
    func_0x000032d0();
    local_e = (char *)0xbf;
    iStack_10 = 0xb25f;
    func_0x0000c93a();
    func_0x0000cd22();
    func_0x0000c928();
    if ((*(byte *)(param_1 + -0x4456) & 0x10) == 0) {
      if ((*(byte *)(param_1 + -0x4456) & 8) == 0) {
        func_0x0000ca66();
        if ((*(byte *)(param_1 + -0x4456) & 4) != 0) {
          func_0x0000ca66();
        }
        if ((*(byte *)(param_1 + -0x4456) & 0x20) != 0) {
          func_0x0000ca66();
        }
      }
      else {
        func_0x0000ca66();
      }
    }
    else {
      func_0x0000ca66();
    }
    if (*(char *)0x9bc6 != '\0') {
      local_e = (char *)0xc87;
      iStack_10 = 0xb2e6;
      FUN_2000_b36e();
      if (local_88[0] != '\0') {
        func_0x0000c928();
        local_e = (char *)0xb303;
        func_0x0000ca12();
        func_0x0000ca50();
        local_e = (char *)0x67;
        iStack_10 = iStack_32 + 4;
        iStack_12 = 0x880;
        iStack_14 = 0xc87;
        uStack_16 = 0xb32d;
        func_0x00016e72();
        func_0x0000c928();
        local_e = (char *)0xb343;
        func_0x0000ca12();
        func_0x0000ca50();
      }
    }
    local_e = (char *)(param_1 * 0x29 + -0x52b2);
    iStack_10 = 0xc87;
    iStack_12 = 0xb367;
    FUN_2000_b404();
  }
  return;
}
