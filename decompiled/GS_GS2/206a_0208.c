/* GS.GS2 206a:0208 undefined FUN_206a_0208(void) */
void __cdecl16far FUN_206a_0208(int param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 unaff_DS;
  int iStack_12;
  undefined2 local_10;
  undefined2 uStack_e;
  undefined2 *puStack_c;
  undefined2 uStack_a;
  
  FUN_10bf_02c0();
  iStack_12 = *(int *)0x916a;
  do {
    iStack_12 = iStack_12 + -1;
    if (iStack_12 < 0) {
      uStack_a = 0;
      puStack_c = &local_10;
      uStack_e = 0x10bf;
      local_10 = 0x905;
      FUN_10bf_2c3a();
      local_10 = CONCAT11(local_10._1_1_,0xff);
      puVar5 = (undefined2 *)0x916c;
      puVar4 = &local_10;
      for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
        puVar2 = puVar5;
        puVar5 = puVar5 + 1;
        puVar1 = puVar4;
        puVar4 = puVar4 + 1;
        *puVar2 = *puVar1;
      }
      return;
    }
  } while (*(char *)(iStack_12 * 0xe + -0x703a) != param_1);
  puVar4 = (undefined2 *)(iStack_12 * 0xe + -0x703a);
  puVar5 = (undefined2 *)0x916c;
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  return;
}
