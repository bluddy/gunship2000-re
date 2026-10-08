/* GS.GS2 10bf:58f2 undefined FUN_10bf_58f2(void) */
void __cdecl16far
FUN_10bf_58f2(undefined2 param_1,undefined2 param_2,int param_3,undefined2 param_4,
             undefined2 param_5)

{
  if ((param_3 == 0x65) || (param_3 == 0x45)) {
    FUN_10bf_55d8(param_1,param_2,param_4,param_5);
  }
  else {
    if (param_3 != 0x66) {
      FUN_10bf_5840(param_1,param_2,param_4,param_5);
      return;
    }
    FUN_10bf_5726(param_1,param_2,param_4);
  }
  return;
}
