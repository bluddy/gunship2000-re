/* GS.GS2 25f0:02ac undefined FUN_25f0_02ac(void) */
void __cdecl16far FUN_25f0_02ac(int param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 unaff_DS;
  int iStack_14;
  undefined2 local_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined1 *puStack_c;
  undefined2 uStack_a;
  
  FUN_10bf_02c0();
  iStack_14 = *(int *)0x9820;
  do {
    iStack_14 = iStack_14 + -1;
    if (iStack_14 < 0) {
      uStack_a = 0;
      puStack_c = (undefined1 *)&local_12;
      uStack_e = 0x10bf;
      uStack_10 = 0x6205;
      FUN_10bf_2c3a();
      local_12._0_1_ = 0xff;
      puVar5 = (undefined2 *)0x9822;
      puVar4 = &local_12;
      for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
        puVar2 = puVar5;
        puVar5 = puVar5 + 1;
        puVar1 = puVar4;
        puVar4 = puVar4 + 1;
        *puVar2 = *puVar1;
      }
      *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
      return;
    }
  } while (*(char *)(iStack_14 * 0xf + -0x6876) != param_1);
  puVar4 = (undefined2 *)(iStack_14 * 0xf + -0x6876);
  puVar5 = (undefined2 *)0x9822;
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
  return;
}
