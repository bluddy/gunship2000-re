/* GS.GS2 10bf:2e26 undefined FUN_10bf_2e26(void) */
undefined2 __cdecl16far FUN_10bf_2e26(void)

{
  code *pcVar1;
  undefined2 in_BX;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return in_BX;
}
