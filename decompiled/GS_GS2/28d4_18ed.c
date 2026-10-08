/* GS.GS2 28d4:18ed undefined FUN_28d4_18ed(void) */
void __cdecl16near FUN_28d4_18ed(void)

{
  code *pcVar1;
  undefined2 extraout_DX;
  
  FUN_28d4_1901();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)(extraout_DX);
  return;
}
