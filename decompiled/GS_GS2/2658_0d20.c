/* GS.GS2 2658:0d20 undefined FUN_2658_0d20(void) */
void __cdecl16far FUN_2658_0d20(undefined2 param_1,undefined2 param_2)

{
  code *pcVar1;
  undefined2 unaff_DS;
  
  *(undefined2 *)0x680e = param_1;
  *(undefined2 *)0x6810 = param_2;
  if (*(char *)0x681d != '\0') {
    pcVar1 = (code *)swi(0x33);
    (*pcVar1)();
  }
  return;
}
