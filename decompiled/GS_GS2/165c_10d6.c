/* GS.GS2 165c:10d6 undefined FUN_165c_10d6(void) */
void __cdecl16far FUN_165c_10d6(char param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 unaff_DS;
  undefined2 local_24 [10];
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 *puStack_c;
  int iVar6;
  
  FUN_10bf_02c0();
  iVar6 = 0;
  while( true ) {
    if (*(int *)0xb8cc <= iVar6) {
      puStack_c = local_24;
      uStack_e = 0x10bf;
      uStack_10 = 0x76f3;
      FUN_10bf_2c3a();
      local_24[0] = 0xffff;
      puVar5 = (undefined2 *)0x7a3c;
      puVar4 = local_24;
      for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
        puVar2 = puVar5;
        puVar5 = puVar5 + 1;
        puVar1 = puVar4;
        puVar4 = puVar4 + 1;
        *puVar2 = *puVar1;
      }
      return;
    }
    puVar4 = (undefined2 *)(iVar6 * 0x20 + *(int *)0xb868);
    uVar3 = *(undefined2 *)0xb86a;
    if (*(char *)(puVar4 + 6) == param_1) break;
    iVar6 = iVar6 + 1;
  }
  puVar5 = (undefined2 *)0x7a3c;
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  return;
}
