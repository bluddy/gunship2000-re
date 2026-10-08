/* GS.GS2 2741:06ca undefined FUN_2741_06ca(void) */
undefined2 __cdecl16far FUN_2741_06ca(undefined2 param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined2 local_4;
  
  iVar1 = FUN_10bf_2e76(0x2741,param_1,0x8000,&local_4);
  if (iVar1 != 0) {
    return 0;
  }
  *(undefined2 *)0x64ca = local_4;
  *(undefined2 *)0x9c3c = 0;
  return 1;
}
