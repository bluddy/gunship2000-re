/* GS.GS2 2163:1924 undefined FUN_2163_1924(void) */
void __cdecl16far FUN_2163_1924(undefined2 param_1,int param_2)

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
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  int iStack_10;
  int iStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  
  FUN_10bf_02c0();
  uStack_a = 0x10bf;
  uStack_c = 0x2f6b;
  puVar3 = (undefined2 *)FUN_106f_0430();
  puVar5 = &local_26;
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar3;
    puVar3 = puVar3 + 1;
    *puVar2 = *puVar1;
  }
  if (param_2 != 0) {
    uStack_a = 0x20;
    uStack_c = 0x3e;
    iStack_e = iStack_22 + 0xb;
    iStack_10 = iStack_24 + 0x29;
    uStack_12 = 0x880;
    uStack_14 = 0x106f;
    uStack_16 = 0x2f9d;
    FUN_1d02_00f6();
    return;
  }
  uStack_a = 0x20;
  uStack_c = 0x25;
  iStack_e = iStack_22 + 0xb;
  iStack_10 = iStack_24 + 3;
  uStack_12 = 0x880;
  uStack_14 = 0x106f;
  uStack_16 = 0x2fc1;
  FUN_1d02_00f6();
  return;
}
