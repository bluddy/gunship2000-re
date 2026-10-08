/* GS.GS2 27d1:0b50 undefined FUN_27d1_0b50(void) */
void __cdecl16near FUN_27d1_0b50(void)

{
  char *in_BX;
  char *pcVar1;
  
  DAT_27d1_0b40 = in_BX;
  do {
    pcVar1 = in_BX;
    in_BX = pcVar1 + 1;
  } while (*in_BX != '\0');
  DAT_27d1_0b42 = pcVar1 + 2;
  return;
}
