/* GS.GS2 10bf:2d58 undefined FUN_10bf_2d58(void) */
void __cdecl16far FUN_10bf_2d58(void)

{
  code *pcVar1;
  undefined2 unaff_DS;
  
  if (*(int *)0x714e == -0x292a) {
    (*(code *)*(undefined2 *)0x7150)();
  }
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}
