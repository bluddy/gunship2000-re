/* GS2.GS2 2000:bb78 undefined FUN_2000_bb78(void) */
void __cdecl16far FUN_2000_bb78(void)

{
  code *pcVar1;
  
  if (iRam000000cc != 0 || iRam000000ce != 0) {
    pcVar1 = (code *)swi(0x33);
    (*pcVar1)();
  }
  return;
}
