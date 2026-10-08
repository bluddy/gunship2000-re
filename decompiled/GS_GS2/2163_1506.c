/* GS.GS2 2163:1506 undefined FUN_2163_1506(void) */
undefined2 __cdecl16far FUN_2163_1506(int param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined2 uStack_4;
  
  FUN_10bf_02c0();
  iVar1 = *(int *)(param_1 * 0x3e + -0x46fc);
  if ((iVar1 == 2) || (iVar1 == 1)) {
    uStack_4 = 1;
  }
  else if (iVar1 == 4) {
    uStack_4 = 2;
  }
  else {
    uStack_4 = 0;
  }
  return uStack_4;
}
