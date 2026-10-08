/* GS.GS2 2163:06e8 undefined FUN_2163_06e8(void) */
void __cdecl16far FUN_2163_06e8(int param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 *puVar5;
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
  
  FUN_10bf_02c0();
  iStack_a = 0x10bf;
  iStack_c = 0x1d2c;
  puVar3 = (undefined2 *)FUN_106f_0430();
  puVar5 = &local_26;
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar3;
    puVar3 = puVar3 + 1;
    *puVar2 = *puVar1;
  }
  iStack_a = iStack_1e;
  iStack_c = iStack_20;
  iStack_e = iStack_22;
  iStack_10 = iStack_24;
  iStack_12 = 0;
  iStack_14 = 0x106f;
  uStack_16 = 0x1d50;
  FUN_1d02_0a52();
  iStack_a = iStack_1e + -6;
  iStack_c = iStack_20 + -6;
  iStack_e = iStack_22 + 3;
  iStack_10 = iStack_24 + 3;
  iStack_12 = 0x880;
  iStack_14 = 0x1d02;
  uStack_16 = 0x1d79;
  FUN_1c87_0050();
  iStack_a = 0x1c87;
  iStack_c = 0x1d83;
  FUN_1c87_0110();
  iStack_a = 0x1c87;
  iStack_c = 0x1d8d;
  FUN_1c87_00b8();
  iStack_a = 0x1c87;
  iStack_c = 0x1d97;
  FUN_1c87_0158();
  iStack_a = 10;
  iStack_c = 0x24;
  iStack_e = 0x1c87;
  iStack_10 = 0x1da5;
  FUN_1c87_0136();
  iStack_a = 0x10ee;
  iStack_c = 0x1c87;
  iStack_e = 0x1db3;
  FUN_1c87_01f6();
  iStack_a = 0x1c87;
  iStack_c = 0x1dbd;
  FUN_1c87_0158();
  iStack_a = 0x1dc5;
  FUN_1c87_04b2();
  iStack_a = 0x1c87;
  iStack_c = 0x1dcc;
  FUN_1c87_0158();
  iStack_a = 0x10ff;
  iStack_c = 0x1c87;
  iStack_e = 0x1dda;
  FUN_1c87_01f6();
  if (param_1 != 0) {
    iStack_a = iStack_24;
    iStack_c = 0x86e;
    iStack_e = iStack_1e;
    iStack_10 = iStack_20;
    iStack_12 = iStack_22;
    iStack_14 = iStack_24;
    uStack_16 = 0x880;
    uStack_18 = 0x1c87;
    uStack_1a = 0x1e00;
    thunk_EXT_FUN_0000_0000();
  }
  return;
}
