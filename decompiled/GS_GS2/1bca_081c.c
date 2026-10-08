/* GS.GS2 1bca:081c undefined FUN_1bca_081c(void) */
void __cdecl16far FUN_1bca_081c(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 unaff_DS;
  
  FUN_10bf_02c0();
  *(undefined2 *)0x8558 = param_1;
  *(undefined2 *)0x855a = param_2;
  *(undefined2 *)0x855c = param_3;
  FUN_10bf_2c3a(0x8252,0,0x306);
  FUN_10bf_2c0e(0x8252,*(undefined2 *)0x8558,6);
  FUN_1bca_09bc();
  return;
}
