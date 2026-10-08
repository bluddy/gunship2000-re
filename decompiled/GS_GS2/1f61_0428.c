/* GS.GS2 1f61:0428 undefined FUN_1f61_0428(void) */
uint __cdecl16far FUN_1f61_0428(undefined2 param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined2 unaff_DS;
  
  FUN_10bf_02c0();
  iVar5 = *(int *)0x8696 + (uint)(0xfff3 < *(uint *)0x8694);
  if ((iVar5 <= *(int *)0x86be) &&
     ((iVar5 < *(int *)0x86be || (*(uint *)0x8694 + 0xc <= *(uint *)0x86bc)))) {
    return 0xffff;
  }
  uVar3 = *(uint *)0x8646;
  iVar5 = *(int *)0x8648;
  *(uint *)0x86bc = uVar3;
  *(int *)0x86be = iVar5;
  iVar5 = iVar5 + *(int *)0x86c6 + (uint)CARRY2(uVar3,*(uint *)0x86c4);
  FUN_10bf_24ea(*(undefined2 *)0x864a,uVar3 + *(uint *)0x86c4,iVar5,0);
  uVar3 = FUN_10bf_072a(param_1,1,4,*(undefined2 *)0x864a);
  if (uVar3 < 4) {
    return 0xffff;
  }
  puVar1 = (uint *)0x86bc;
  uVar3 = *puVar1;
  *puVar1 = *puVar1 + 4;
  *(int *)0x86be = *(int *)0x86be + (uint)(0xfffb < uVar3);
  uVar4 = FUN_1f61_050e();
  uVar3 = *(uint *)0x86bc;
  iVar2 = *(int *)0x86be;
  *(int *)0x8646 = uVar3 + uVar4;
  *(int *)0x8648 = iVar2 + iVar5 + (uint)CARRY2(uVar3,uVar4);
  return uVar4;
}
