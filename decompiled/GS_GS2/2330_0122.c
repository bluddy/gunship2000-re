/* GS.GS2 2330:0122 undefined FUN_2330_0122(void) */
void __cdecl16far FUN_2330_0122(int param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int iStack_28;
  undefined2 local_26 [6];
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  
  FUN_10bf_02c0();
  for (iStack_28 = 0; iStack_28 < *(int *)0x94ee; iStack_28 = iStack_28 + 1) {
    iVar3 = iStack_28 * 9;
    if (*(char *)(iVar3 + -0x6c20) == param_1) {
      uStack_c = 0x345d;
      puVar4 = (undefined2 *)FUN_106f_0430();
      puVar6 = local_26;
      for (iVar5 = 0x12; iVar5 != 0; iVar5 = iVar5 + -1) {
        puVar2 = puVar6;
        puVar6 = puVar6 + 1;
        puVar1 = puVar4;
        puVar4 = puVar4 + 1;
        *puVar2 = *puVar1;
      }
      uStack_c = 0x880;
      uStack_e = *(undefined2 *)(iVar3 + -0x6c19);
      uStack_10 = *(undefined2 *)(iVar3 + -0x6c1b);
      uStack_12 = *(undefined2 *)(iVar3 + -0x6c1d);
      uStack_14 = *(undefined2 *)(iVar3 + -0x6c1f);
      uStack_16 = 0x892;
      uStack_18 = 0x106f;
      uStack_1a = 0x3497;
      thunk_EXT_FUN_0000_0000();
    }
  }
  return;
}
