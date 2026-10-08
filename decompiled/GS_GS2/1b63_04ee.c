/* GS.GS2 1b63:04ee undefined FUN_1b63_04ee(void) */
void __cdecl16far FUN_1b63_04ee(int param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 uVar6;
  undefined2 unaff_DS;
  int iStack_12;
  undefined2 local_10;
  undefined2 uStack_e;
  undefined2 *puStack_c;
  
  FUN_10bf_02c0();
  iStack_12 = *(int *)0x8206;
  do {
    iStack_12 = iStack_12 + -1;
    if (iStack_12 < 0) {
      puStack_c = &local_10;
      uStack_e = 0x10bf;
      local_10 = 0xbb81;
      FUN_10bf_2c3a();
      local_10 = CONCAT11(local_10._1_1_,0xff);
      puVar5 = (undefined2 *)0x821c;
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
    uVar6 = (undefined2)((ulong)*(undefined4 *)0x8208 >> 0x10);
    iVar3 = (int)*(undefined4 *)0x8208;
  } while (*(char *)(iStack_12 * 0xe + iVar3) != param_1);
  puVar4 = (undefined2 *)(iVar3 + iStack_12 * 0xe);
  puVar5 = (undefined2 *)0x821c;
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  return;
}
