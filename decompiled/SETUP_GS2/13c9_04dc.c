/* SETUP.GS2 13c9:04dc undefined FUN_13c9_04dc(void) */
int __cdecl16far FUN_13c9_04dc(int param_1,int param_2,int param_3)

{
  undefined2 unaff_DS;
  int iStack_6;
  int iVar1;
  
  FUN_111d_02c6();
  iVar1 = 0;
  while( true ) {
    if ((int)(uint)*(byte *)(param_1 + 3) <= iVar1) {
      return param_3;
    }
    if (param_2 == 0) {
      if (iVar1 < (int)((uint)*(byte *)(param_1 + 3) - param_3)) {
        iStack_6 = iVar1 + param_3;
      }
      else {
        iStack_6 = ((uint)*(byte *)(param_1 + 3) - iVar1) + -1;
      }
    }
    else {
      iStack_6 = iVar1;
      if (iVar1 < param_3) {
        iStack_6 = param_3 - iVar1;
      }
      iStack_6 = iStack_6 + -1;
    }
    if (*(char *)(iStack_6 * 0x11 + *(int *)(param_1 + 9) + 4) != '\0') break;
    iVar1 = iVar1 + 1;
  }
  return iStack_6;
}
