/* GS.GS2 206a:01c4 undefined FUN_206a_01c4(void) */
void __cdecl16far
FUN_206a_01c4(undefined2 param_1,undefined2 param_2,undefined2 param_3,int param_4)

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
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  int iStack_a;
  
  FUN_10bf_02c0();
  iStack_a = 0x10bf;
  uStack_c = 0x879;
  puVar3 = (undefined2 *)FUN_106f_0430();
  puVar5 = &local_26;
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar3;
    puVar3 = puVar3 + 1;
    *puVar2 = *puVar1;
  }
  iStack_a = iStack_24 + param_4;
  uStack_c = param_2;
  uStack_e = param_1;
  uStack_10 = 0x106f;
  uStack_12 = 0x8a0;
  FUN_206a_00da();
  return;
}
