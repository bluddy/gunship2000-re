/* GS.GS2 202b:001a undefined FUN_202b_001a(void) */
void __cdecl16far FUN_202b_001a(char param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 unaff_DS;
  
  FUN_10bf_02c0();
  FUN_202b_005c((int)param_1);
  if (0x27 < *(int *)0x8fc4) {
    *(undefined2 *)0x8fc4 = 0x27;
  }
  puVar5 = (undefined2 *)(*(int *)0x8fc4 * 0x38 + -0x78fc);
  puVar4 = (undefined2 *)&param_1;
  for (iVar3 = 0x1c; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  *(int *)0x8fc4 = *(int *)0x8fc4 + 1;
  return;
}
