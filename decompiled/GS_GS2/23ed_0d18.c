/* GS.GS2 23ed:0d18 undefined FUN_23ed_0d18(void) */
void __cdecl16far FUN_23ed_0d18(int param_1,int param_2)

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
  iStack_c = 0x4c00;
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
    iStack_a = -1 - ((uint)(param_1 % 3 == 2) - iStack_1e);
    iStack_c = -1 - ((uint)(2 < param_1) - iStack_20);
    iStack_e = iStack_22 + 1;
    iStack_10 = iStack_24 + 1;
    iStack_12 = 0x880;
    iStack_14 = 0x106f;
    uStack_16 = 0x4c59;
    FUN_2658_04e2();
    return;
  }
  iStack_a = iStack_24;
  iStack_c = 0x880;
  iStack_e = iStack_1e;
  iStack_10 = iStack_20;
  iStack_12 = iStack_22;
  iStack_14 = iStack_24;
  uStack_16 = 0x8a4;
  uStack_18 = 0x106f;
  uStack_1a = 0x4c7d;
  thunk_EXT_FUN_0000_0000();
  return;
}
