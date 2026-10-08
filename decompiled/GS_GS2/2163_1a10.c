/* GS.GS2 2163:1a10 undefined FUN_2163_1a10(void) */
void __cdecl16far FUN_2163_1a10(undefined2 param_1,int param_2)

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
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  int iStack_14;
  int iStack_12;
  int iStack_10;
  int iStack_e;
  undefined2 uStack_c;
  int iStack_a;
  
  uVar6 = 0x10bf;
  FUN_10bf_02c0();
  if (param_2 != 0) {
    uVar6 = 0x2351;
    iStack_a = 0x3058;
    FUN_2351_00d2();
  }
  uStack_c = 0x305f;
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
  iStack_a = *(undefined2 *)0x1018;
  uStack_c = 0x52;
  iStack_e = iStack_22 + 3;
  iStack_10 = iStack_24 + 3;
  iStack_12 = 0x106f;
  iStack_14 = 0x308a;
  FUN_1d02_0c8a();
  if (param_2 != 0) {
    iStack_a = 0x3098;
    FUN_2351_00ec();
    iStack_a = iStack_24;
    uStack_c = 0x86e;
    iStack_e = uStack_1e;
    iStack_10 = uStack_20;
    iStack_12 = iStack_22;
    iStack_14 = iStack_24;
    uStack_16 = 0x880;
    uStack_18 = 0x2351;
    uStack_1a = 0x30b5;
    thunk_EXT_FUN_0000_0000();
  }
  return;
}
