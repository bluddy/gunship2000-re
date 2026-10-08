/* GS.GS2 1bca:034c undefined FUN_1bca_034c(void) */
void __cdecl16far FUN_1bca_034c(void)

{
  undefined2 uVar1;
  int iVar2;
  int *piVar3;
  undefined2 unaff_DS;
  
  FUN_10bf_02c0();
  if (*(int *)0x8244 != 0) {
    iVar2 = *(int *)0x8244 * 10 + *(int *)0x823a;
    piVar3 = (int *)(iVar2 + -10);
    if (*piVar3 != 0) {
      iVar2 = *(int *)(iVar2 + -4);
      thunk_FUN_10bf_1fd2();
      piVar3 = (int *)*(undefined2 *)(iVar2 + 8);
      thunk_FUN_10bf_1fd2();
    }
    *piVar3 = 0;
    *(int *)0x8244 = *(int *)0x8244 + -1;
    uVar1 = thunk_FUN_10bf_27fe(*(undefined2 *)0x823a,*(int *)0x8244 * 10);
    *(undefined2 *)0x823a = uVar1;
  }
  return;
}
