/* GS.GS2 239c:005c undefined FUN_239c_005c(void) */
int __cdecl16far FUN_239c_005c(int param_1,int param_2)

{
  int iVar1;
  
  FUN_10bf_02c0();
  if (param_2 <= param_1) {
    return param_1;
  }
  iVar1 = FUN_239c_0086((param_2 - param_1) + 1);
  return iVar1 + param_1;
}
