/* GS.GS2 2741:089e undefined FUN_2741_089e(void) */
undefined2 __cdecl16far FUN_2741_089e(undefined2 *param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  param_2 = param_2 + param_1[1];
  param_3 = param_3 + param_1[2];
  if (((((int)param_1[1] <= param_2) && (param_2 <= (int)param_1[3])) &&
      ((int)param_1[2] <= param_3)) && (param_3 <= (int)param_1[4])) {
    uVar1 = thunk_EXT_FUN_0000_0000(0x2741,*param_1,param_2,param_3);
    return uVar1;
  }
  return 0xffff;
}
