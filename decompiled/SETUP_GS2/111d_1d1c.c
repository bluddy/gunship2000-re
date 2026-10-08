/* SETUP.GS2 111d:1d1c undefined FUN_111d_1d1c(void) */
void FUN_111d_1d1c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  FUN_111d_05a6();
  return;
}
