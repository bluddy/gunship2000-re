/* GS.GS2 10bf:2d88 undefined FUN_10bf_2d88(void) */
void FUN_10bf_2d88(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  FUN_10bf_05a0();
  return;
}
