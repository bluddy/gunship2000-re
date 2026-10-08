/* GS.GS2 10bf:2ed4 undefined FUN_10bf_2ed4(void) */
void FUN_10bf_2ed4(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  FUN_10bf_05a8();
  return;
}
