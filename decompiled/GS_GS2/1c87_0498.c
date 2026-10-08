/* GS.GS2 1c87:0498 undefined FUN_1c87_0498(void) */
void __cdecl16far FUN_1c87_0498(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 unaff_DS;
  
  FUN_10bf_02c0();
  puVar5 = (undefined2 *)0x8560;
  puVar4 = (undefined2 *)0x8580;
  for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  return;
}
