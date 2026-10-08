/* GS.GS2 23ed:0cd0 undefined FUN_23ed_0cd0(void) */
void __cdecl16far FUN_23ed_0cd0(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 local_26;
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  
  FUN_10bf_02c0();
  uStack_a = 0x10bf;
  uStack_c = 0x4bb4;
  puVar3 = (undefined2 *)FUN_106f_0430();
  puVar5 = &local_26;
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar3;
    puVar3 = puVar3 + 1;
    *puVar2 = *puVar1;
  }
  uStack_a = uStack_24;
  uStack_c = 0x86e;
  uStack_e = uStack_1e;
  uStack_10 = uStack_20;
  uStack_12 = uStack_22;
  uStack_14 = uStack_24;
  uStack_16 = 0x880;
  uStack_18 = 0x106f;
  uStack_1a = 0x4be0;
  thunk_EXT_FUN_0000_0000();
  return;
}
