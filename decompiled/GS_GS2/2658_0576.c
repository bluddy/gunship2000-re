/* GS.GS2 2658:0576 undefined FUN_2658_0576(void) */
void __cdecl16near FUN_2658_0576(void)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 unaff_DS;
  
  iVar2 = *(int *)0x67f8;
  if (-1 < iVar2) {
    puVar5 = (undefined2 *)(iVar2 * 2 + 0x64d4);
    iVar3 = (*(int *)0x67fa + 1) - iVar2;
    for (iVar4 = iVar3; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar1 = 0xffff;
    }
    *(undefined2 *)0x67f8 = 0xffff;
    puVar5 = (undefined2 *)(iVar2 * 2 + 0x6664);
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar1 = 0;
    }
    *(undefined2 *)0x67fa = 0;
  }
  return;
}
