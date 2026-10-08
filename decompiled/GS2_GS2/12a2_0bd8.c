/* GS2.GS2 12a2:0bd8 undefined FUN_12a2_0bd8(void) */
void __cdecl16far FUN_12a2_0bd8(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  FUN_12a2_0504();
  return;
}
