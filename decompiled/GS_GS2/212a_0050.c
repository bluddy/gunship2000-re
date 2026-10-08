/* GS.GS2 212a:0050 undefined FUN_212a_0050(void) */
undefined2 __cdecl16far FUN_212a_0050(int param_1,int param_2)

{
  undefined2 uVar1;
  
  FUN_10bf_02c0();
  if (param_2 == 0) {
    return 0;
  }
  uVar1 = FUN_10bf_2efc((long)param_1 * 100,param_2,param_2 >> 0xf);
  return uVar1;
}
