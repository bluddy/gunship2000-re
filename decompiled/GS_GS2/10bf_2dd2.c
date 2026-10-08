/* GS.GS2 10bf:2dd2 undefined FUN_10bf_2dd2(void) */
undefined2 __cdecl16far FUN_10bf_2dd2(undefined2 param_1,undefined2 param_2)

{
  undefined2 uVar1;
  int unaff_BP;
  undefined2 unaff_SS;
  
  LOCK();
  uVar1 = *(undefined2 *)(unaff_BP + 0x12);
  *(undefined2 *)(unaff_BP + 0x12) = param_2;
  UNLOCK();
  LOCK();
  *(undefined2 *)(unaff_BP + 0x10) = param_1;
  UNLOCK();
  return uVar1;
}
