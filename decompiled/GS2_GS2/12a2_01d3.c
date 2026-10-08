/* GS2.GS2 12a2:01d3 undefined FUN_12a2_01d3(void) */
void __cdecl16far FUN_12a2_01d3(void)

{
  code *pcVar1;
  undefined2 unaff_DS;
  
  FUN_12a2_0283();
  FUN_12a2_0283();
  if (*(int *)0x3244 == -0x292a) {
    (*(code *)*(undefined2 *)0x324a)();
  }
  FUN_12a2_0283();
  FUN_12a2_0283();
  FUN_12a2_02be();
  FUN_12a2_0256();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}
