/* GS.GS2 10bf:273a undefined FUN_10bf_273a(void) */
void __cdecl16far FUN_10bf_273a(undefined2 param_1,undefined2 param_2)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  *(undefined1 *)0x9e6e = 0x49;
  *(undefined2 *)0x9e6c = param_1;
  *(undefined2 *)0x9e68 = param_1;
  uVar1 = FUN_10bf_2234(param_1);
  *(undefined2 *)0x9e6a = uVar1;
  FUN_10bf_0db8(0x9e68,param_2,&stack0x0008);
  return;
}
