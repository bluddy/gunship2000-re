/* GS.GS2 2092:0282 undefined FUN_2092_0282(void) */
undefined2 __cdecl16far FUN_2092_0282(undefined2 param_1)

{
  undefined2 unaff_DS;
  
  FUN_10bf_02c0();
  if (*(int *)0x917e != 0 || *(int *)0x917c != 0) {
    (*(code *)*(undefined2 *)0x917c)(0x10bf,*(undefined2 *)0x917a,param_1);
  }
  return param_1;
}
