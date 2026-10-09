/* GS.GS2 2000:c04c undefined FUN_2000_c04c(void) */
void __cdecl16far FUN_2000_c04c(int param_1)

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
  undefined2 local_26 [2];
  undefined2 uStack_22;
  undefined2 uStack_1e;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  int iStack_14;
  int iStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  
  func_0x00000eb0();
  if ((*(int *)0xb832 == 2) || (*(int *)0xb832 == 5)) {
    uStack_a = 0xbf;
    uStack_c = 0xc06f;
    iVar3 = func_0x00014e66();
    if (iVar3 < 0) {
      return;
    }
  }
  else if (*(int *)0xb832 == 4) {
    uStack_a = 0xbf;
    uStack_c = 0xc08b;
    iVar3 = func_0x00014e66();
    if (iVar3 < 0) {
      return;
    }
  }
  else {
    uStack_a = 0xbf;
    uStack_c = 0xc0a0;
    iVar3 = func_0x00014e66();
    if (iVar3 < 0) {
      return;
    }
  }
  uVar6 = 0x14e6;
  if (*(char *)0xad1b == '\x04') {
    uStack_a = 0;
    uStack_c = 0x14e6;
    uVar6 = 0;
    uStack_e = 0xc0d5;
    func_0x000003da();
  }
  if ((*(int *)0xb832 == 0) || (uVar7 = uVar6, *(int *)0xb832 == 1)) {
    uStack_a = 0xc6;
    uStack_c = *(undefined2 *)0xb832;
    uStack_e = 1;
    uVar7 = 0x106a;
    iStack_12 = 0xc0f6;
    uStack_10 = uVar6;
    func_0x0001077a();
  }
  if (((*(int *)0xb832 == 2) || (*(int *)0xb832 == 4)) || (*(int *)0xb832 == 5)) {
    *(undefined2 *)0x98e6 = 0x93;
    *(undefined2 *)0x98e8 = 0x4a;
  }
  else {
    *(undefined2 *)0x98e6 = 0x7e;
    *(undefined2 *)0x98e8 = 0x23;
  }
  uStack_c = 0xc12f;
  uStack_a = uVar7;
  func_0x0000d6ac();
  uStack_a = 0xd02;
  uStack_c = 0xc139;
  func_0x0000d6ac();
  uStack_a = 0;
  uStack_c = 0x892;
  uStack_e = 0x5a;
  uStack_10 = 0x7d;
  iStack_12 = *(int *)0x98e8 + -0xf;
  iStack_14 = *(int *)0x98e6 + -0x49;
  uStack_16 = 0x880;
  uStack_18 = 0xd02;
  uStack_1a = 0xc15d;
  func_0x00016658();
  uStack_a = 0x1658;
  uStack_c = 0xc166;
  FUN_2000_c464();
  uStack_a = 0xc16d;
  FUN_2000_c450();
  uStack_a = 0x1658;
  uStack_c = 0xc174;
  puVar4 = (undefined2 *)func_0x00000b20();
  puVar5 = local_26;
  for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  uStack_a = uStack_1e;
  uStack_c = 0xbb;
  uStack_e = uStack_22;
  uStack_10 = 10;
  iStack_12 = 0x880;
  iStack_14 = 0x6f;
  uStack_16 = 0xc198;
  func_0x0000c8c0();
  uStack_a = 0xc87;
  uStack_c = 0xc1a2;
  func_0x0000c980();
  uStack_a = 0xc87;
  uStack_c = 0xc1ac;
  func_0x0000c928();
  uStack_a = 0xc87;
  uStack_c = 0xc1b9;
  func_0x0001a9e2();
  if (param_1 != 0) {
    uStack_a = 0xc1c6;
    FUN_2000_c322();
  }
  *(undefined1 *)0x98e5 = *(undefined1 *)0xb60f;
  uStack_a = 0x7a4;
  uStack_c = 0x1bff;
  uStack_e = 0x460;
  uStack_10 = 0x1a79;
  iStack_12 = 0xc1dd;
  func_0x000156c4();
  *(undefined2 *)0xb60f = 2;
  uStack_a = 0xc1eb;
  func_0x0001534e();
  return;
}
