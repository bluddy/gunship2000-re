/* GS.GS2 2163:05a2 undefined FUN_2163_05a2(void) */
void __cdecl16far FUN_2163_05a2(int param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 uVar7;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 local_26;
  int iStack_24;
  int iStack_22;
  int iStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  int iStack_10;
  int iStack_e;
  int iStack_c;
  int iStack_a;
  
  uVar7 = 0x10bf;
  FUN_10bf_02c0();
  if (param_1 != 0) {
    uVar7 = 0x2351;
    iStack_a = 0x1bea;
    FUN_2351_00d2();
  }
  iVar3 = *(int *)0xb60f + -1;
  iStack_c = 0x1bf8;
  iStack_a = uVar7;
  puVar4 = (undefined2 *)FUN_106f_0430();
  puVar6 = &local_26;
  for (iVar5 = 0x12; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  iStack_a = uStack_1e;
  iStack_c = iStack_20;
  iStack_e = iStack_22;
  iStack_10 = iStack_24;
  uStack_12 = 0;
  uStack_14 = 0x106f;
  uStack_16 = 0x1c1c;
  FUN_1d02_0a52();
  iStack_a = 0x2d;
  iStack_c = iStack_20 + -7;
  iStack_e = iStack_22 + 3;
  iStack_10 = iStack_24 + 4;
  uStack_12 = 0x880;
  uStack_14 = 0x1d02;
  uStack_16 = 0x1c40;
  FUN_1c87_0050();
  iStack_a = 0x1c87;
  iStack_c = 0x1c4a;
  FUN_1c87_0110();
  iStack_a = 0x1c87;
  iStack_c = 0x1c54;
  FUN_1c87_00b8();
  iStack_a = 0xf;
  iStack_c = 0xf;
  iStack_e = 0x1c87;
  iStack_10 = 0x1c62;
  FUN_1c87_0136();
  if ((-1 < iVar3) && (iVar3 < 5)) {
    iStack_a = 0x1c87;
    iStack_c = 0x1c79;
    FUN_1c87_01e0();
    if (0 < iVar3) {
      iStack_a = 0x1c87;
      iStack_c = 0x1c8a;
      FUN_1c87_01f6();
    }
    iStack_a = 0x1c87;
    iStack_c = 0x1c95;
    FUN_1c87_01f6();
    iStack_a = 0x1c87;
    iStack_c = 0x1ca0;
    FUN_1c87_01f6();
    if (((iVar3 == 0) || (iVar3 == 2)) || (iVar3 == 3)) {
      if (iVar3 == 0) {
        iStack_a = 0x10c0;
      }
      else {
        iStack_a = iVar3 * 0x29 + -0x45e2;
      }
      iStack_c = 0x10c9;
      iStack_e = 0x1c87;
      iStack_10 = 0x1ce7;
      FUN_1c87_01f6();
    }
  }
  iStack_a = 0;
  iStack_c = 0x1c87;
  iStack_e = 0x1cf2;
  FUN_2163_1a10();
  iStack_a = 0x1c87;
  iStack_c = 0x1cfb;
  FUN_2163_1a8c();
  if (param_1 != 0) {
    iStack_a = 0x1d09;
    FUN_2351_00ec();
    iStack_a = 0x2351;
    iStack_c = 0x1d11;
    FUN_1c87_000a();
  }
  return;
}
