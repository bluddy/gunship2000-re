/* GS.GS2 10bf:01d5 undefined FUN_10bf_01d5(void) */
void __cdecl16far FUN_10bf_01d5(void)

{
  code *pcVar1;
  undefined2 unaff_DS;
  
  FUN_10bf_0285();
  FUN_10bf_0285();
  if (*(int *)0x714e == -0x292a) {
    (*(code *)*(undefined2 *)0x7154)();
  }
  FUN_10bf_0285();
  FUN_10bf_0285();
  FUN_10bf_02e4();
  FUN_10bf_0258();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}
