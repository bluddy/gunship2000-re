/* GS.GS2 2000:b514 undefined FUN_2000_b514(void) */
void __cdecl16far FUN_2000_b514(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 local_58 [42];
  int iStack_2e;
  int iStack_2c;
  int iStack_2a;
  undefined2 uStack_28;
  int local_26;
  int iStack_24;
  int iStack_22;
  undefined2 uStack_20;
  int iStack_1e;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  int iStack_14;
  int iStack_12;
  int iStack_10;
  int iStack_e;
  undefined2 uStack_c;
  undefined1 *puStack_a;
  
  uVar6 = 0xbf;
  func_0x00000eb0();
  if (param_1 != 0) {
    uVar6 = 0x1351;
    puStack_a = (undefined1 *)0xb52c;
    func_0x000135e2();
  }
  puStack_a = (undefined1 *)*(undefined2 *)0x98c0;
  uStack_c = *(undefined2 *)0x98be;
  iStack_e = *(undefined2 *)0x98bc;
  iStack_10 = *(int *)0x98ba;
  if (param_1 == 0) {
    iStack_12 = 0x8a4;
  }
  else {
    iStack_12 = 0x880;
  }
  uStack_16 = 0xb553;
  iStack_14 = uVar6;
  func_0x0000c8c0();
  puStack_a = (undefined1 *)0xc87;
  uStack_c = 0xb55d;
  func_0x0000c980();
  for (iStack_2e = 0; iStack_2e < *(char *)0x98dc; iStack_2e = iStack_2e + 1) {
    puStack_a = (undefined1 *)0xc87;
    uStack_c = 0xb583;
    piVar3 = (int *)func_0x00000b20();
    piVar5 = &local_26;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
      piVar2 = piVar5;
      piVar5 = piVar5 + 1;
      piVar1 = piVar3;
      piVar3 = piVar3 + 1;
      *piVar2 = *piVar1;
    }
    if (iStack_2e == 0) {
      iStack_2a = iStack_24;
      iStack_2c = iStack_22;
    }
    if (local_26 < 0) break;
    if (*(int *)0xb60f - iStack_2e == 5) {
      uStack_28 = 9;
    }
    else {
      uStack_28 = 0;
    }
    puStack_a = (undefined1 *)0x8;
    uStack_c = 8;
    iStack_e = iStack_22;
    iStack_10 = iStack_24;
    if (param_1 == 0) {
      iStack_12 = 0x8a4;
    }
    else {
      iStack_12 = 0x880;
    }
    iStack_14 = 0x6f;
    uStack_16 = 0xb5e1;
    func_0x0000d116();
    puStack_a = (undefined1 *)(iStack_24 + 0xc);
    uStack_c = 0xd02;
    iStack_e = 0xb5f5;
    func_0x0000c9f6();
    puStack_a = (undefined1 *)0xc87;
    uStack_c = 0xb600;
    func_0x0000c928();
    puStack_a = local_58;
    uStack_c = 0xc87;
    iStack_e = 0xb60e;
    FUN_2000_b654();
    puStack_a = (undefined1 *)0xc87;
    uStack_c = 0xb61a;
    func_0x0000ca66();
  }
  if (param_1 != 0) {
    puStack_a = (undefined1 *)0xb62b;
    func_0x000135fc();
    puStack_a = (undefined1 *)iStack_2a;
    uStack_c = 0x86e;
    iStack_e = iStack_22 + iStack_1e;
    iStack_10 = uStack_20;
    iStack_12 = iStack_2c;
    iStack_14 = iStack_2a;
    uStack_16 = 0x880;
    uStack_18 = 0x1351;
    uStack_1a = 0xb64c;
    func_0x00016658();
  }
  return;
}
