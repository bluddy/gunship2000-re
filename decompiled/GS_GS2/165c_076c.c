/* GS.GS2 165c:076c undefined FUN_165c_076c(void) */
void __cdecl16far FUN_165c_076c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_DS;
  int iStack_6;
  
  FUN_10bf_02c0();
  iStack_6 = *(int *)0xb830 + -1;
  while (iStack_6 != 0) {
    iStack_6 = 4;
    iVar1 = FUN_10bf_2af0(param_1,*(undefined2 *)0xde);
    if (iVar1 == 0) break;
    iStack_6 = 3;
  }
  iVar1 = *(int *)(iStack_6 * 2 + 0xde);
  iVar2 = FUN_10bf_2234();
  do {
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) break;
  } while (*(char *)(*(int *)(iVar1 * 2 + 0xde) + iVar2) != *(char *)(param_1 + 4));
  *(int *)0xb8d0 = iVar2;
  *(int *)0xb8ce = iVar1;
  return;
}
