/* GS2.GS2 2000:d66e undefined FUN_2000_d66e(void) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_2000_d66e(int param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((param_1 == 0) && (bVar2 = _DAT_0000_51a4 == 0x10e1, _DAT_0000_51a4 = 0x10e1, bVar2)) {
    _DAT_0000_51a4 = 0x13e1;
  }
  pcVar1 = (code *)swi(0x10);
  (*pcVar1)();
  return;
}
