/* GS.GS2 106f:011c undefined FUN_106f_011c(void) */
undefined2 __cdecl16far FUN_106f_011c(int param_1,int param_2)

{
  int iVar1;
  undefined2 unaff_DS;
  int iStack_4;
  
  FUN_10bf_02c0();
  iStack_4 = *(int *)0x79f4;
  do {
    iStack_4 = iStack_4 + -1;
    if (iStack_4 < 0) break;
    iVar1 = iStack_4 * 0x24;
  } while ((((param_1 < *(int *)(iVar1 + 0x76de)) ||
            (*(int *)(iVar1 + 0x76de) + *(int *)(iVar1 + 0x76e2) + -1 < param_1)) ||
           (param_2 < *(int *)(iVar1 + 0x76e0))) ||
          (*(int *)(iVar1 + 0x76e0) + *(int *)(iVar1 + 0x76e4) + -1 < param_2));
  return *(undefined2 *)(iStack_4 * 0x24 + 0x76dc);
}
