/* GS.GS2 2741:05a2 undefined FUN_2741_05a2(void) */
undefined2 __cdecl16far
FUN_2741_05a2(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 unaff_DS;
  
  *(undefined2 *)0x9c38 = param_1;
  *(undefined2 *)0x9c3a = param_4;
  *(undefined2 *)0xc86c = *(undefined2 *)0x64c8;
  *(undefined2 *)0xc528 = 0x600;
  *(undefined2 *)0xc52a = 0x2741;
  FUN_2658_0a8e();
  FUN_2658_0ad6(param_3,param_4,*(undefined2 *)0x9c42);
  return *(undefined2 *)0x9c42;
}
