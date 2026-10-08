/* GS.GS2 10bf:0258 undefined FUN_10bf_0258(void) */
void __cdecl16near FUN_10bf_0258(undefined2 param_1)

{
  code *pcVar1;
  undefined2 unaff_DS;
  
  if (*(int *)0x7160 != 0) {
    (*(code *)*(undefined2 *)0x715e)(0x10bf);
  }
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if (*(char *)0x6894 != '\0') {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
  }
  return;
}
