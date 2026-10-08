/* GS.GS2 10bf:523e undefined FUN_10bf_523e(void) */
undefined2 __cdecl16near FUN_10bf_523e(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  int iVar5;
  undefined2 in_BX;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  iVar5 = *(int *)(unaff_BP + 8);
  iVar1 = *(int *)(unaff_BP + 6);
  *(int *)(unaff_BP + 6) = *(int *)(unaff_BP + 6) + iVar5;
  uVar4 = FUN_10bf_40b6();
  iVar2 = *(int *)(unaff_BP + 6);
  iVar3 = *(int *)(unaff_BP + 8);
  *(int *)0x70aa = iVar5;
  *(int *)0x70ac = (iVar1 - iVar2) + iVar3;
  *(undefined2 *)0x70ae = uVar4;
  *(undefined2 *)0x70b0 = in_BX;
  return 0x70aa;
}
