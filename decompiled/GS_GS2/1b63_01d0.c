/* GS.GS2 1b63:01d0 undefined FUN_1b63_01d0(void) */
void __cdecl16far FUN_1b63_01d0(int param_1)

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
  iStack_12 = *(int *)0x820c;
  do {
    iStack_12 = iStack_12 + -1;
    if (iStack_12 < 0) {
      uStack_a = 0;
      puStack_c = &local_10;
      uStack_e = 0x10bf;
      local_10 = 0xb85d;
      FUN_10bf_2c3a();
      local_10 = CONCAT11(local_10._1_1_,0xff);
      puVar5 = (undefined2 *)0x820e;
      puVar4 = &local_10;
      for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
        puVar2 = puVar5;
        puVar5 = puVar5 + 1;
        puVar1 = puVar4;
        puVar4 = puVar4 + 1;
        *puVar2 = *puVar1;
      }
      *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
      return;
    }
  } while (*(char *)(iStack_12 * 0xd + 0x7a68) != param_1);
  puVar4 = (undefined2 *)(iStack_12 * 0xd + 0x7a68);
  puVar5 = (undefined2 *)0x820e;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
  return;
}
