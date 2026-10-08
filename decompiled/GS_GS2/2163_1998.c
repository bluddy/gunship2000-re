/* GS.GS2 2163:1998 undefined FUN_2163_1998(void) */
void __cdecl16far FUN_2163_1998(undefined2 param_1,int param_2)

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
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  int iStack_14;
  int iStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  int iStack_a;
  
  FUN_10bf_02c0();
  iStack_a = 0x10bf;
  uStack_c = 0x2fdf;
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
    iStack_12 = iStack_22 + 0xb;
    iStack_14 = iStack_24 + 0x29;
    uStack_c = 0x86e;
    uStack_e = 0x20;
    uStack_10 = 0x3e;
    uStack_16 = 0x880;
    uStack_18 = 0x106f;
    uStack_1a = 0x3013;
    iStack_a = iStack_14;
    thunk_EXT_FUN_0000_0000();
    return;
  }
  iStack_12 = iStack_22 + 0xb;
  iStack_14 = iStack_24 + 3;
  uStack_c = 0x86e;
  uStack_e = 0x20;
  uStack_10 = 0x3e;
  uStack_16 = 0x880;
  uStack_18 = 0x106f;
  uStack_1a = 0x3039;
  iStack_a = iStack_14;
  thunk_EXT_FUN_0000_0000();
  return;
}
