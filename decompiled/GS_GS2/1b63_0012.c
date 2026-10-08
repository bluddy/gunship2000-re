/* GS.GS2 1b63:0012 undefined FUN_1b63_0012(void) */
void __cdecl16far FUN_1b63_0012(char param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 unaff_DS;
  
  FUN_10bf_02c0();
  if (param_1 != -1) {
    FUN_1b63_0066((int)param_1);
  }
  if (0x95 < *(int *)0x820c) {
    *(undefined2 *)0x820c = 0x95;
  }
  puVar5 = (undefined2 *)(*(int *)0x820c * 0xd + 0x7a68);
  puVar4 = (undefined2 *)&param_1;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
  *(int *)0x820c = *(int *)0x820c + 1;
  return;
}
