/* GS.GS2 165c:0d2e undefined FUN_165c_0d2e(void) */
int __cdecl16far FUN_165c_0d2e(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  FUN_10bf_02c0();
  FUN_10bf_2cc8(param_3 - param_1);
  param_4 = param_4 - param_2;
  iVar1 = FUN_10bf_2cc8();
  if (param_4 < iVar1) {
    param_4 = param_4 / 2 + iVar1;
  }
  else {
    param_4 = iVar1 / 2 + param_4;
  }
  return param_4;
}
