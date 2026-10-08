/* GS2.GS2 1926:03b9 undefined FUN_1926_03b9(void) */
void __cdecl16near FUN_1926_03b9(void)

{
  code *pcVar1;
  undefined2 extraout_DX;
  
  FUN_1926_03cd();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)(extraout_DX);
  return;
}
