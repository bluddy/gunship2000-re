/* GS2.GS2 12a2:0256 undefined FUN_12a2_0256(void) */
void __cdecl16near FUN_12a2_0256(undefined2 param_1)

{
  code *pcVar1;
  undefined2 unaff_DS;
  
  if (*(int *)0x3256 != 0) {
    (*(code *)*(undefined2 *)0x3254)(0x12a2);
  }
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if (*(char *)0x3210 != '\0') {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
  }
  return;
}
