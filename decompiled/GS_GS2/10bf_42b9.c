/* GS.GS2 10bf:42b9 undefined FUN_10bf_42b9(void) */
void __cdecl16near FUN_10bf_42b9(void)

{
  byte bVar1;
  char cVar2;
  undefined2 unaff_DS;
  undefined1 in_ZF;
  
  bVar1 = FUN_10bf_430a();
  if ((!(bool)in_ZF) && (cVar2 = bVar1 - 0x30, 0x2f < bVar1)) {
    if ('\t' < cVar2) {
      cVar2 = bVar1 - 0x37;
    }
    if (cVar2 < *(char *)0x6eec) {
      *(int *)0x6ee8 = *(int *)0x6ee8 + 1;
      return;
    }
  }
  return;
}
