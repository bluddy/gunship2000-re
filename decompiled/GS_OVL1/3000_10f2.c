/* GS.GS2 3000:10f2 undefined FUN_3000_10f2(void) */
void __cdecl16far FUN_3000_10f2(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined2 unaff_DS;
  
  func_0x00000eb0();
  iVar1 = *(int *)0xc358;
  iVar2 = *(int *)(iVar1 + 1) - *(int *)(iVar1 + 9);
  iVar4 = *(int *)(iVar1 + 3) - *(int *)(iVar1 + 0xb);
  iVar5 = -iVar4;
  if (0 < iVar4) {
    iVar5 = 0;
  }
  iVar3 = -iVar2;
  if (0 < iVar2) {
    iVar3 = 0;
  }
  iVar7 = -(iVar4 + -200);
  if (-*(int *)(iVar1 + 7) != iVar4 + -200 && *(int *)(iVar1 + 7) <= iVar7) {
    iVar7 = *(int *)(iVar1 + 7);
  }
  iVar6 = -(iVar2 + -0x140);
  if (-*(int *)(iVar1 + 5) != iVar2 + -0x140 && *(int *)(iVar1 + 5) <= iVar6) {
    iVar6 = *(int *)(iVar1 + 5);
  }
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  FUN_3000_20d6(0,0,2,iVar2,iVar4,iVar6,iVar7,iVar3,iVar5,0);
  FUN_3000_20d6(0xffff,2,0,*(undefined2 *)0xc37e,*(undefined2 *)0xc380,
                *(undefined2 *)(*(int *)0xc358 + 5),*(undefined2 *)(*(int *)0xc358 + 7),0,iVar5);
  return;
}
