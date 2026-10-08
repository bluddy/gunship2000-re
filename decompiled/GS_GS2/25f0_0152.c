/* GS.GS2 25f0:0152 undefined FUN_25f0_0152(void) */
void __cdecl16far FUN_25f0_0152(int param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  int iVar3;
  
  FUN_10bf_02c0();
  iVar3 = 0;
  while( true ) {
    if (*(int *)0x9820 <= iVar3) {
      return;
    }
    iVar1 = iVar3 * 0xf;
    if (*(char *)(iVar1 + -0x6876) == param_1) break;
    iVar3 = iVar3 + 1;
  }
  thunk_EXT_FUN_0000_0000(0x10bf,iVar1 + -0x6876);
  uVar2 = thunk_EXT_FUN_0000_0000
                    (0x2658,2,*(undefined2 *)(iVar1 + -0x6875),*(undefined2 *)(iVar1 + -0x6873),
                     *(undefined2 *)(iVar1 + -0x6871),*(undefined2 *)(iVar1 + -0x686f));
  *(undefined2 *)(iVar1 + -0x6869) = uVar2;
  thunk_EXT_FUN_0000_0000(0x2658);
  thunk_EXT_FUN_0000_0000
            (0x2658,0x880,param_2,param_3,*(undefined2 *)(iVar1 + -0x6871),
             *(undefined2 *)(iVar1 + -0x686f),0x892,*(undefined2 *)(iVar1 + -0x6875),
             *(undefined2 *)(iVar1 + -0x6873));
  FUN_2658_0131(0x2658,0x880,param_2,param_3,*(undefined2 *)(iVar1 + -0x6869));
  *(undefined2 *)(iVar1 + -0x686d) = param_2;
  *(undefined2 *)(iVar1 + -0x686b) = param_3;
  return;
}
