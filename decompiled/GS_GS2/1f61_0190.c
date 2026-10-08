/* GS.GS2 1f61:0190 undefined FUN_1f61_0190(void) */
undefined2 __cdecl16far FUN_1f61_0190(void)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined2 unaff_DS;
  undefined2 local_6;
  undefined2 *puStack_4;
  
  puStack_4 = (undefined2 *)0x1f61;
  local_6 = 0xf7ab;
  FUN_10bf_02c0();
  puStack_4 = (undefined2 *)0x0;
  local_6 = *(undefined2 *)(*(int *)0x8644 * 4 + -0x7994);
  FUN_10bf_24ea(*(undefined2 *)0x864a,*(undefined2 *)(*(int *)0x8644 * 4 + -0x7996));
  puStack_4 = &local_6;
  local_6 = 0x10bf;
  FUN_1f61_05dc();
  puStack_4 = (undefined2 *)*(undefined2 *)0x864a;
  local_6 = 4;
  FUN_10bf_0828(&local_6,1);
  iVar6 = *(int *)0x8644 * 4;
  uVar3 = *(uint *)(iVar6 + -0x796c);
  iVar4 = *(int *)(iVar6 + -0x796a);
  uVar5 = uVar3 + 8;
  puVar1 = (uint *)(iVar6 + -0x7970);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar5;
  *(int *)(iVar6 + -0x796e) =
       *(int *)(iVar6 + -0x796e) + iVar4 + (uint)(0xfff7 < uVar3) + (uint)CARRY2(uVar2,uVar5);
  puStack_4 = (undefined2 *)0x0;
  local_6 = *(undefined2 *)0x86be;
  FUN_10bf_24ea(*(undefined2 *)0x864a,*(undefined2 *)0x86bc);
  iVar4 = *(int *)0x8644;
  *(int *)0x8644 = *(int *)0x8644 + -1;
  return *(undefined2 *)(iVar4 * 4 + -0x796c);
}
