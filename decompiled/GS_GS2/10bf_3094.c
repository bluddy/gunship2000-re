/* GS.GS2 10bf:3094 undefined FUN_10bf_3094(void) */
void __stdcall16far FUN_10bf_3094(undefined2 *param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 unaff_DS;
  undefined4 uVar1;
  
  uVar1 = FUN_10bf_2f96(*param_1,param_1[1],param_2,param_3);
  *param_1 = (int)uVar1;
  param_1[1] = (int)((ulong)uVar1 >> 0x10);
  return;
}
