/* GS.GS2 2581:0606 undefined FUN_2581_0606(void) */
void __cdecl16far FUN_2581_0606(int param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 uVar6;
  undefined2 unaff_DS;
  int iStack_100;
  undefined1 local_fe [238];
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 *puStack_c;
  
  FUN_10bf_02c0();
  iStack_100 = 0;
  while( true ) {
    if (*(int *)0xb836 <= iStack_100) {
      puStack_c = (undefined2 *)local_fe;
      uStack_e = 0x10bf;
      uStack_10 = 0x5e75;
      FUN_10bf_2c3a();
      local_fe[0] = 0xff;
      puVar5 = (undefined2 *)0x968e;
      puVar4 = (undefined2 *)local_fe;
      for (iVar3 = 0x7e; iVar3 != 0; iVar3 = iVar3 + -1) {
        puVar2 = puVar5;
        puVar5 = puVar5 + 1;
        puVar1 = puVar4;
        puVar4 = puVar4 + 1;
        *puVar2 = *puVar1;
      }
      return;
    }
    uVar6 = (undefined2)((ulong)*(undefined4 *)0xb83a >> 0x10);
    iVar3 = (int)*(undefined4 *)0xb83a;
    if (*(char *)(iStack_100 * 0xfc + iVar3) == param_1) break;
    iStack_100 = iStack_100 + 1;
  }
  puVar4 = (undefined2 *)(iVar3 + iStack_100 * 0xfc);
  puVar5 = (undefined2 *)0x968e;
  for (iVar3 = 0x7e; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  return;
}
