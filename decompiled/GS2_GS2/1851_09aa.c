/* GS2.GS2 1851:09aa undefined FUN_1851_09aa(void) */
void __cdecl16near FUN_1851_09aa(void)

{
  char *in_BX;
  char *pcVar1;
  
  DAT_1851_099a = in_BX;
  do {
    pcVar1 = in_BX;
    in_BX = pcVar1 + 1;
  } while (*in_BX != '\0');
  DAT_1851_099c = pcVar1 + 2;
  return;
}
