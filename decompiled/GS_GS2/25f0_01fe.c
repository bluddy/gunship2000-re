/* GS.GS2 25f0:01fe undefined FUN_25f0_01fe(void) */
void __cdecl16far FUN_25f0_01fe(int param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  int iVar2;
  
  FUN_10bf_02c0();
  iVar2 = 0;
  while( true ) {
    if (*(int *)0x9820 <= iVar2) {
      return;
    }
    iVar1 = iVar2 * 0xf;
    if (*(char *)(iVar1 + -0x6876) == param_1) break;
    iVar2 = iVar2 + 1;
  }
  if (*(int *)(iVar1 + -0x6869) != 0) {
    thunk_EXT_FUN_0000_0000
              (0x10bf,0x892,*(undefined2 *)(iVar1 + -0x6875),*(undefined2 *)(iVar1 + -0x6873),
               *(undefined2 *)(iVar1 + -0x6871),*(undefined2 *)(iVar1 + -0x686f),0x880,
               *(undefined2 *)(iVar1 + -0x686d),*(undefined2 *)(iVar1 + -0x686b),iVar1 + -0x6876);
    FUN_2658_04e2(0x892,*(undefined2 *)(iVar1 + -0x6875),*(undefined2 *)(iVar1 + -0x6873),
                  *(undefined2 *)(iVar1 + -0x6871),*(undefined2 *)(iVar1 + -0x686f),0);
    FUN_2658_0131(0x2658,0x892,*(undefined2 *)(iVar1 + -0x6875),*(undefined2 *)(iVar1 + -0x6873),
                  *(undefined2 *)(iVar1 + -0x6869));
    FUN_212a_003c(*(undefined2 *)(iVar1 + -0x6869));
    *(undefined2 *)(iVar1 + -0x6869) = 0;
  }
  return;
}
