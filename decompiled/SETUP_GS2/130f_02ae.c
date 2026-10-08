/* SETUP.GS2 130f:02ae undefined FUN_130f_02ae(void) */
void __cdecl16far FUN_130f_02ae(void)

{
  undefined2 uVar1;
  int iVar2;
  int *piVar3;
  undefined2 unaff_DS;
  
  FUN_111d_02c6();
  if (*(int *)0xd76 != 0) {
    iVar2 = *(int *)0xd76 * 10 + *(int *)0xd6c;
    piVar3 = (int *)(iVar2 + -10);
    if (*piVar3 != 0) {
      iVar2 = *(int *)(iVar2 + -4);
      thunk_FUN_111d_1532();
      piVar3 = (int *)*(undefined2 *)(iVar2 + 8);
      thunk_FUN_111d_1532();
    }
    *piVar3 = 0;
    *(int *)0xd76 = *(int *)0xd76 + -1;
    uVar1 = thunk_FUN_111d_1b1e(*(undefined2 *)0xd6c,*(int *)0xd76 * 10);
    *(undefined2 *)0xd6c = uVar1;
  }
  return;
}
