/* GS.GS2 1f61:008e undefined FUN_1f61_008e(void) */
void __cdecl16far FUN_1f61_008e(undefined2 param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 unaff_DS;
  
  FUN_10bf_02c0();
  *(int *)0x8644 = *(int *)0x8644 + 1;
  FUN_10bf_0828(param_1,1,4,*(undefined2 *)0x864a);
  puVar1 = (uint *)0x86bc;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + 4;
  *(int *)0x86be = *(int *)0x86be + (uint)(0xfffb < uVar2);
  uVar3 = *(undefined2 *)0x86be;
  iVar4 = *(int *)0x8644;
  *(undefined2 *)(iVar4 * 4 + -0x7996) = *(undefined2 *)0x86bc;
  *(undefined2 *)(iVar4 * 4 + -0x7994) = uVar3;
  FUN_10bf_24ea(*(undefined2 *)0x864a,4,0,1);
  puVar1 = (uint *)0x86bc;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + 4;
  *(int *)0x86be = *(int *)0x86be + (uint)(0xfffb < uVar2);
  iVar4 = *(int *)0x8644;
  *(undefined2 *)(iVar4 * 4 + -0x796a) = 0;
  *(undefined2 *)(iVar4 * 4 + -0x796c) = 0;
  return;
}
