/* GS.GS2 3000:61f4 undefined FUN_3000_61f4(void) */
void __cdecl16far FUN_3000_61f4(void)

{
  code *pcVar1;
  
  func_0x00000eb0();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}
