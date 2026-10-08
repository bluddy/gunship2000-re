/* GS.GS2 206a:0018 undefined FUN_206a_0018(void) */
void __cdecl16far FUN_206a_0018(char param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 unaff_DS;
  
  FUN_10bf_02c0();
  FUN_206a_0066((int)param_1);
  if (0x1d < *(int *)0x916a) {
    *(undefined2 *)0x916a = 0x1d;
  }
  puVar5 = (undefined2 *)(*(int *)0x916a * 0xe + -0x703a);
  puVar4 = (undefined2 *)&param_1;
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  *(int *)0x916a = *(int *)0x916a + 1;
  return;
}
