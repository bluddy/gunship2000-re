/* SETUP.GS2 1386:007c undefined FUN_1386_007c(void) */
void __cdecl16far FUN_1386_007c(void)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  FUN_111d_02c6();
  if (*(int *)0xd84 != 0) {
    FUN_130f_03b6();
    *(int *)0xd84 = *(int *)0xd84 + -1;
    uVar1 = thunk_FUN_111d_1b1e(*(undefined2 *)0x1f7c,*(int *)0xd84 * 0xc);
    *(undefined2 *)0x1f7c = uVar1;
  }
  return;
}
