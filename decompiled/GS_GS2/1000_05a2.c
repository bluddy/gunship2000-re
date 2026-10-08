/* GS.GS2 1000:05a2 undefined FUN_1000_05a2(void) */
void __cdecl16far FUN_1000_05a2(int param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 unaff_DS;
  int iStack_2a;
  undefined2 local_28 [12];
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined1 *puStack_c;
  undefined2 uStack_a;
  
  FUN_10bf_02c0();
  iStack_2a = *(int *)0x76b0;
  do {
    iStack_2a = iStack_2a + -1;
    if (iStack_2a < 0) {
      uStack_a = 0;
      puStack_c = (undefined1 *)local_28;
      uStack_e = 0x10bf;
      uStack_10 = 0x5f5;
      FUN_10bf_2c3a();
      local_28[0]._0_1_ = 0xff;
      puVar5 = (undefined2 *)0x76b6;
      puVar4 = local_28;
      for (iVar3 = 0x13; iVar3 != 0; iVar3 = iVar3 + -1) {
        puVar2 = puVar5;
        puVar5 = puVar5 + 1;
        puVar1 = puVar4;
        puVar4 = puVar4 + 1;
        *puVar2 = *puVar1;
      }
      return;
    }
  } while (*(char *)(iStack_2a * 0x26 + 0x7476) != param_1);
  puVar4 = (undefined2 *)(iStack_2a * 0x26 + 0x7476);
  puVar5 = (undefined2 *)0x76b6;
  for (iVar3 = 0x13; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  return;
}
