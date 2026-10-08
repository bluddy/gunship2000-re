/* GS.GS2 106f:04a0 undefined FUN_106f_04a0(void) */
undefined2 __cdecl16far FUN_106f_04a0(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined2 unaff_DS;
  int iStack_4;
  
  FUN_10bf_02c0();
  iStack_4 = *(int *)0x79f4;
  do {
    iStack_4 = iStack_4 + -1;
    if (iStack_4 < 0) {
      return 0;
    }
    iVar1 = iStack_4 * 0x24;
  } while (*(int *)(iVar1 + 0x76dc) != param_3);
  if ((((*(int *)(iVar1 + 0x76de) <= param_1) &&
       (param_1 <= *(int *)(iVar1 + 0x76de) + *(int *)(iVar1 + 0x76e2) + -1)) &&
      (*(int *)(iVar1 + 0x76e0) <= param_2)) &&
     (param_2 <= *(int *)(iVar1 + 0x76e0) + *(int *)(iVar1 + 0x76e4) + -1)) {
    return 1;
  }
  return 0;
}
