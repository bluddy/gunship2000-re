/* GS.GS2 25f0:0014 undefined FUN_25f0_0014(void) */
void __cdecl16far FUN_25f0_0014(char param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 unaff_DS;
  
  FUN_10bf_02c0();
  FUN_25f0_005e((int)param_1);
  if (9 < *(int *)0x9820) {
    *(undefined2 *)0x9820 = 9;
  }
  puVar5 = (undefined2 *)(*(int *)0x9820 * 0xf + -0x6876);
  puVar4 = (undefined2 *)&param_1;
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
  *(int *)0x9820 = *(int *)0x9820 + 1;
  return;
}
