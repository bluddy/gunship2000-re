/* SETUP.GS2 111d:025e undefined FUN_111d_025e(void) */
void __cdecl16near FUN_111d_025e(undefined2 param_1)

{
  code *pcVar1;
  undefined2 unaff_DS;
  
  if (*(int *)0xba8 != 0) {
    (*(code *)*(undefined2 *)0xba6)(0x111d);
  }
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if (*(char *)0x9a0 != '\0') {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
  }
  return;
}
