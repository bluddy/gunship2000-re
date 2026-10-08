/* GS.GS2 1f61:053c undefined FUN_1f61_053c(void) */
void __cdecl16far FUN_1f61_053c(undefined2 param_1,undefined2 param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined2 unaff_DS;
  
  FUN_10bf_02c0();
  uVar3 = FUN_10bf_072a(param_1,1,param_2,*(undefined2 *)0x864a);
  puVar1 = (uint *)0x86bc;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar3;
  *(int *)0x86be = *(int *)0x86be + (uint)CARRY2(uVar2,uVar3);
  return;
}
