/* GS.GS2 10bf:4f50 undefined FUN_10bf_4f50(void) */
void __cdecl16far FUN_10bf_4f50(void)

{
  int in_BX;
  int unaff_DI;
  undefined2 unaff_DS;
  
  LOCK();
  *(int *)(unaff_DI + -4) = unaff_DI;
  UNLOCK();
  *(undefined1 **)0x70a8 = &stack0xfffe;
  (*(code *)*(undefined2 *)(in_BX + 0x7082))();
  return;
}
