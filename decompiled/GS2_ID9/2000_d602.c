/* GS2.GS2 2000:d602 undefined FUN_2000_d602(void) */
void __cdecl16far FUN_2000_d602(void)

{
  code *pcVar1;
  byte bVar2;
  
  do {
    bVar2 = in(0x3da);
  } while ((bVar2 & 8) == 0);
  pcVar1 = (code *)swi(0x10);
  (*pcVar1)();
  return;
}
