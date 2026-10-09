/* GS.GS2 3000:1030 undefined FUN_3000_1030(void) */
void __cdecl16far FUN_3000_1030(void)

{
  code *pcVar1;
  
  func_0x00000eb0();
  pcVar1 = (code *)swi(0x10);
  (*pcVar1)();
  return;
}
