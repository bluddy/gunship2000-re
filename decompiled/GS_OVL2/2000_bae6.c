/* GS.GS2 2000:bae6 undefined FUN_2000_bae6(void) */
int __cdecl16far FUN_2000_bae6(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  func_0x00000eb0();
  func_0x000038b8(0xbf,param_3 - param_1);
  param_4 = param_4 - param_2;
  iVar1 = func_0x000038b8(0xbf);
  if (param_4 < iVar1) {
    param_4 = param_4 / 2 + iVar1;
  }
  else {
    param_4 = iVar1 / 2 + param_4;
  }
  return param_4;
}
