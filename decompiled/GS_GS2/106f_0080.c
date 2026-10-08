/* GS.GS2 106f:0080 undefined FUN_106f_0080(void) */
void __cdecl16far FUN_106f_0080(undefined2 param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 unaff_DS;
  
  FUN_10bf_02c0();
  FUN_106f_00c0(param_1);
  if (0x15 < *(int *)0x79f4) {
    *(undefined2 *)0x79f4 = 0x15;
  }
  puVar5 = (undefined2 *)(*(int *)0x79f4 * 0x24 + 0x76dc);
  puVar4 = &param_1;
  for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  *(int *)0x79f4 = *(int *)0x79f4 + 1;
  return;
}
