/* GS.GS2 1000:039e undefined FUN_1000_039e(void) */
void __cdecl16far FUN_1000_039e(char param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 unaff_DS;
  
  FUN_10bf_02c0();
  FUN_1000_0544((int)param_1);
  puVar5 = (undefined2 *)(*(int *)0x76b2 * 0x12 + 0x742e);
  puVar4 = (undefined2 *)&param_1;
  for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  if (*(int *)0x76b2 < 3) {
    *(int *)0x76b2 = *(int *)0x76b2 + 1;
  }
  return;
}
