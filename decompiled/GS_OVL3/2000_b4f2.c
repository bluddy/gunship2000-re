/* GS.GS2 2000:b4f2 undefined FUN_2000_b4f2(void) */
void __cdecl16far FUN_2000_b4f2(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined2 uVar5;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int iStackY_30;
  int iStackY_2e;
  int iVar6;
  int iStack_2a;
  undefined2 uStack_28;
  int local_26;
  int iStack_24;
  int iStack_22;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined1 uStack_1a;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  int iStack_10;
  undefined2 uStack_e;
  int *piStack_c;
  int iStack_a;
  uint uStack_8;
  
  uVar5 = 0xbf;
  func_0x00000eb0();
  iVar6 = 0;
  iStackY_2e = 0x89;
  uStack_28 = 0x13f;
  iStack_2a = 0x36;
  if (param_1 == 1) {
    uStack_8 = 0;
    iStack_a = 0x22;
    piStack_c = (int *)0xe1;
    uStack_e = 0x8b;
    iStack_10 = 2;
    uStack_12 = 0;
    uStack_14 = 0xbf;
    uVar5 = 0xd02;
    uStack_16 = 0xb52c;
    func_0x0000dc32();
  }
  else if (param_1 == 0) {
    uStack_8 = 0;
    iStack_a = 0x36;
    piStack_c = (int *)0x13f;
    uStack_e = 0x89;
    iStack_10 = 0;
    uStack_12 = 0;
    uStack_14 = 0xbf;
    uVar5 = 0xd02;
    uStack_16 = 0xb54d;
    func_0x0000da72();
  }
  uStack_8 = 0xffff;
  iStack_a = iStack_2a;
  piStack_c = (int *)uStack_28;
  uStack_e = 0x89;
  uStack_12 = 0x880;
  uStack_16 = 0xb566;
  uStack_14 = uVar5;
  iStack_10 = iVar6;
  func_0x0000c8c0();
  uStack_8 = 3;
  iStack_a = 0xc87;
  piStack_c = (int *)0xb570;
  func_0x0000c980();
  uStack_8 = 2;
  iStack_a = 0xc87;
  piStack_c = (int *)0xb57a;
  func_0x0000c928();
  uStack_8 = 4;
  iStack_a = 0xb;
  piStack_c = (int *)0xc87;
  uStack_e = 0xb586;
  func_0x0000ca12();
  uStack_8 = 0x50f5;
  iStack_a = 0xc87;
  piStack_c = (int *)0xb591;
  func_0x0000ca50();
  uStack_8 = 2;
  uStack_e = 0x93;
  piStack_c = (int *)(iVar6 + 0x6f);
  iStack_10 = iVar6 + 0xb;
  uStack_12 = 0x880;
  uStack_14 = 0xc87;
  uVar5 = 0x1658;
  uStack_16 = 0xb5b4;
  iStack_a = uStack_e;
  func_0x00016e72();
  if (param_1 == 0) {
    uStack_8 = 0x1658;
    iStack_a = 0xb5c2;
    func_0x000006f2();
    uStack_8 = 0x24;
    iStack_a = 0;
    piStack_c = &local_26;
    uStack_e = 0x6f;
    iStack_10 = -0x4a31;
    func_0x0000382a();
    iStack_24 = iVar6 + 3;
    iStack_22 = 0x92;
    uStack_20 = 1;
    uStack_1e = 0x25;
    local_26 = 0;
    uStack_1c = 0;
    uStack_1a = 0;
    piVar4 = &iStack_2a;
    piVar3 = &local_26;
    for (iVar6 = 0x12; iVar6 != 0; iVar6 = iVar6 + -1) {
      piVar2 = piVar4;
      piVar4 = piVar4 + 1;
      piVar1 = piVar3;
      piVar3 = piVar3 + 1;
      *piVar2 = *piVar1;
    }
    iVar6 = 0xbf;
    uVar5 = 0x6f;
    iStackY_2e = -0x49f2;
    func_0x00000770(0xbf);
  }
  if (*(char *)0x9bc6 == '\0') {
    uStack_8 = 0;
    iStack_a = 0xffff;
    uStack_e = 0xb620;
    piStack_c = (int *)uVar5;
    FUN_2000_b9a2();
  }
  for (iStackY_30 = 0; uStack_e = uVar5, iStackY_30 < *(char *)0x9bc6; iStackY_30 = iStackY_30 + 1)
  {
    if (param_1 == 0) {
      uStack_8 = 0x24;
      iStack_a = 0;
      piStack_c = &local_26;
      iStack_10 = -0x49b4;
      func_0x0000382a();
      local_26 = iStackY_30 + 1;
      iStack_24 = iVar6 + 3;
      iStack_22 = iStackY_30 * 7 + iStackY_2e + 9;
      uStack_1e = 7;
      uStack_20 = 1;
      uStack_1c = 1;
      uStack_1a = 0;
      piVar4 = &iStack_2a;
      piVar3 = &local_26;
      for (iVar6 = 0x12; iVar6 != 0; iVar6 = iVar6 + -1) {
        piVar2 = piVar4;
        piVar4 = piVar4 + 1;
        piVar1 = piVar3;
        piVar3 = piVar3 + 1;
        *piVar2 = *piVar1;
      }
      iVar6 = 0xbf;
      uVar5 = 0x6f;
      iStackY_2e = -0x4965;
      func_0x00000770(0xbf);
    }
    uStack_8 = (uint)(*(int *)0xb60f - iStackY_30 == 1);
    iStack_a = iStackY_30;
    uStack_e = 0xb6b6;
    piStack_c = (int *)uVar5;
    FUN_2000_b9a2();
  }
  if (param_1 == 0) {
    uStack_8 = 0x24;
    iStack_a = 0;
    piStack_c = &local_26;
    iStack_10 = 0xb6d2;
    func_0x0000382a();
    local_26 = iStackY_30 + 1;
    iStack_24 = iVar6 + 3;
    iStack_22 = iStackY_2e + 0x24;
    uStack_1e = 10;
    uStack_20 = 1;
    uStack_1c = 1;
    uStack_1a = 0;
    piVar4 = &iStack_2a;
    piVar3 = &local_26;
    for (iVar6 = 0x12; iVar6 != 0; iVar6 = iVar6 + -1) {
      piVar2 = piVar4;
      piVar4 = piVar4 + 1;
      piVar1 = piVar3;
      piVar3 = piVar3 + 1;
      *piVar2 = *piVar1;
    }
    func_0x00000770(0xbf);
    uStack_8 = 0;
    iStack_a = 0;
    piStack_c = (int *)0x6f;
    uStack_e = 0xb71f;
    FUN_2000_bad2();
    uStack_8 = 0x8d;
    iStack_a = 0xe6;
    piStack_c = (int *)(int)*(char *)0xad09;
    uStack_e = 2;
    iStack_10 = 0x6f;
    uStack_12 = 0xb734;
    func_0x0001077a();
    uStack_8 = 0xffff;
    iStack_a = 6;
    piStack_c = (int *)0x7a;
    uStack_e = 0xb6;
    iStack_10 = 0xc3;
    uStack_12 = 0x880;
    uStack_14 = 0x106a;
    uStack_16 = 0xb74b;
    func_0x0000c8c0();
    uStack_8 = 2;
    iStack_a = 0xc87;
    piStack_c = (int *)0xb755;
    func_0x0000c928();
    uStack_8 = 0xacea;
    iStack_a = 0xc87;
    piStack_c = (int *)0xb760;
    func_0x0000c8aa();
  }
  return;
}
