/* GS.GS2 2163:0900 undefined FUN_2163_0900(void) */
void __cdecl16far FUN_2163_0900(int param_1,int param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 local_26;
  int iStack_24;
  int iStack_22;
  int iStack_20;
  int iStack_1e;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  int iStack_14;
  int iStack_12;
  int iStack_10;
  int iStack_e;
  int iStack_c;
  int iStack_a;
  
  uVar6 = 0x10bf;
  FUN_10bf_02c0();
  if (param_2 != 0) {
    uVar6 = 0x2351;
    iStack_a = 0x1f48;
    FUN_2351_00d2();
  }
  iStack_c = 0x1f4f;
  iStack_a = uVar6;
  FUN_2163_180e();
  iStack_c = 0x1f5f;
  iStack_a = uVar6;
  puVar3 = (undefined2 *)FUN_106f_0430();
  puVar5 = &local_26;
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar3;
    puVar3 = puVar3 + 1;
    *puVar2 = *puVar1;
  }
  iStack_a = -((uint)(param_1 < 3) - iStack_1e);
  iVar4 = -((uint)(param_1 % 3 < 2) - iStack_20);
  iStack_e = iStack_22;
  iStack_10 = iStack_24;
  iStack_12 = 0;
  iStack_14 = 0x106f;
  uStack_16 = 0x1faf;
  iStack_c = iVar4;
  FUN_1d02_0a52();
  iStack_a = 7;
  iStack_c = iVar4 + -6;
  iStack_e = iStack_22 + 3;
  iVar4 = iStack_24 + 3;
  iStack_12 = 0x880;
  iStack_14 = 0x1d02;
  uStack_16 = 0x1fd3;
  iStack_10 = iVar4;
  FUN_1c87_0050();
  iStack_a = 0x1c87;
  iStack_c = 0x1fdd;
  FUN_1c87_0110();
  iStack_a = 0x1c87;
  iStack_c = 0x1fe7;
  FUN_1c87_00b8();
  iStack_a = 2;
  iStack_c = 0x1c87;
  iStack_e = 0x1ff3;
  FUN_1c87_01a2();
  iStack_a = 0x1c87;
  iStack_c = 0x1ffe;
  FUN_1c87_01e0();
  iStack_a = 0x1c87;
  iStack_c = 0x2012;
  FUN_1c87_01e0();
  iStack_a = 0;
  iStack_c = iStack_22 + 0xb;
  iStack_10 = (int)*(char *)(param_1 * 0x29 + -0x45e3);
  iStack_12 = 0x1c87;
  iStack_14 = 0x2030;
  iStack_e = iVar4;
  FUN_2163_0a5c();
  iStack_a = iStack_24 + 0x29;
  iStack_c = param_1;
  iStack_e = 0x1c87;
  iStack_10 = 0x2042;
  FUN_2163_0ab0();
  iStack_a = iStack_24 + 4;
  iStack_c = param_1;
  iStack_e = 0x1c87;
  iStack_10 = 0x205a;
  FUN_2163_0af8();
  if (param_2 != 0) {
    iStack_a = 0x2068;
    FUN_2351_00ec();
    iStack_a = iStack_24;
    iStack_c = 0x86e;
    iStack_e = iStack_1e;
    iStack_10 = iStack_20;
    iStack_12 = iStack_22;
    iStack_14 = iStack_24;
    uStack_16 = 0x880;
    uStack_18 = 0x2351;
    uStack_1a = 0x2085;
    thunk_EXT_FUN_0000_0000();
  }
  return;
}
