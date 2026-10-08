/* GS.GS2 1f61:00fc undefined FUN_1f61_00fc(void) */
void __cdecl16far FUN_1f61_00fc(undefined2 param_1,undefined2 param_2)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined2 unaff_DS;
  
  FUN_10bf_02c0();
  uVar5 = FUN_10bf_0828(param_1,1,param_2,*(undefined2 *)0x864a);
  puVar1 = (uint *)0x86bc;
  uVar3 = *puVar1;
  *puVar1 = *puVar1 + uVar5;
  *(int *)0x86be = *(int *)0x86be + (uint)CARRY2(uVar3,uVar5);
  iVar4 = *(int *)0x8644;
  puVar1 = (uint *)(iVar4 * 4 + -0x796c);
  uVar3 = *puVar1;
  *puVar1 = *puVar1 + uVar5;
  piVar2 = (int *)(iVar4 * 4 + -0x796a);
  *piVar2 = *piVar2 + (uint)CARRY2(uVar3,uVar5);
  return;
}
