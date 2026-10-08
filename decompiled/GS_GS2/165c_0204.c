/* GS.GS2 165c:0204 undefined FUN_165c_0204(void) */
void __cdecl16far FUN_165c_0204(void)

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
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  int iStack_10;
  int iStack_e;
  int iStack_c;
  int iStack_a;
  
  FUN_10bf_02c0();
  iStack_a = 0x10bf;
  iStack_c = 0x67d8;
  puVar3 = (undefined2 *)FUN_106f_0430();
  puVar5 = &local_26;
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar3;
    puVar3 = puVar3 + 1;
    *puVar2 = *puVar1;
  }
  iStack_a = iStack_1e + -6;
  iStack_c = iStack_20 + -6;
  iStack_e = iStack_22 + 3;
  iStack_10 = iStack_24 + 3;
  uStack_12 = 0x880;
  uStack_14 = 0x106f;
  uStack_16 = 0x680d;
  FUN_1c87_0050();
  iStack_a = 0x1c87;
  iStack_c = 0x6817;
  FUN_1c87_0110();
  iStack_a = 0x1c87;
  iStack_c = 0x6821;
  FUN_1c87_00b8();
  iStack_a = 10;
  iStack_c = 0x32;
  iStack_e = 0x1c87;
  iStack_10 = 0x682f;
  FUN_1c87_0136();
  return;
}
