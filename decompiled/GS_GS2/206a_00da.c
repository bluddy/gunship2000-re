/* GS.GS2 206a:00da undefined FUN_206a_00da(void) */
void __cdecl16far FUN_206a_00da(int param_1,int param_2,undefined2 param_3,int param_4)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  int iVar3;
  
  uVar2 = 0x10bf;
  FUN_10bf_02c0();
  for (iVar3 = 0; iVar3 < *(int *)0x916a; iVar3 = iVar3 + 1) {
    iVar1 = iVar3 * 0xe;
    if (*(char *)(iVar1 + -0x703a) == param_1) {
      if (*(char *)(iVar1 + -0x7039) == '\0') {
        iVar3 = param_4;
        thunk_EXT_FUN_0000_0000
                  (uVar2,0x892,
                   (param_2 / *(int *)(iVar1 + -0x7030)) * *(int *)(iVar1 + -0x7034) +
                   *(int *)(iVar1 + -0x7038),
                   (param_2 % *(int *)(iVar1 + -0x7030)) * *(int *)(iVar1 + -0x7032) +
                   *(int *)(iVar1 + -0x7036),*(undefined2 *)(iVar1 + -0x7034),
                   *(undefined2 *)(iVar1 + -0x7032),0x880,param_3);
        uVar2 = 0x2658;
      }
      else {
        thunk_EXT_FUN_0000_0000(uVar2);
        iVar3 = thunk_EXT_FUN_0000_0000
                          (0x2658,2,(param_2 / *(int *)(iVar1 + -0x7030)) *
                                    *(int *)(iVar1 + -0x7034) + *(int *)(iVar1 + -0x7038),
                           (param_2 % *(int *)(iVar1 + -0x7030)) * *(int *)(iVar1 + -0x7032) +
                           *(int *)(iVar1 + -0x7036),*(undefined2 *)(iVar1 + -0x7034),
                           *(undefined2 *)(iVar1 + -0x7032));
        thunk_EXT_FUN_0000_0000(0x2658);
        FUN_2658_0131(0x2658,0x880,param_3,param_4,iVar3);
        FUN_212a_003c();
        uVar2 = 0x212a;
      }
    }
  }
  return;
}
