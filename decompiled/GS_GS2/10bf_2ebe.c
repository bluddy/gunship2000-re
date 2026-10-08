/* GS.GS2 10bf:2ebe undefined FUN_10bf_2ebe(void) */
undefined2 __cdecl16far FUN_10bf_2ebe(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return 0;
}
