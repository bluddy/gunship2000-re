/* GS.GS2 106f:0430 undefined FUN_106f_0430(void) */
void __cdecl16far FUN_106f_0430(int param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 unaff_DS;
  int iStack_28;
  undefined2 local_26 [11];
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 *puStack_c;
  undefined2 uStack_a;
  
  FUN_10bf_02c0();
  iStack_28 = *(int *)0x79f4;
  do {
    iStack_28 = iStack_28 + -1;
    if (iStack_28 < 0) {
      uStack_a = 0;
      puStack_c = local_26;
      uStack_e = 0x10bf;
      uStack_10 = 0xb71;
      FUN_10bf_2c3a();
      local_26[0] = 0xffff;
      puVar5 = (undefined2 *)0x79f6;
      puVar4 = local_26;
      for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
        puVar2 = puVar5;
        puVar5 = puVar5 + 1;
        puVar1 = puVar4;
        puVar4 = puVar4 + 1;
        *puVar2 = *puVar1;
      }
      return;
    }
  } while (*(int *)(iStack_28 * 0x24 + 0x76dc) != param_1);
  puVar4 = (undefined2 *)(iStack_28 * 0x24 + 0x76dc);
  puVar5 = (undefined2 *)0x79f6;
  for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  return;
}
