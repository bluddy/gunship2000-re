/* GS.GS2 10bf:42d0 undefined FUN_10bf_42d0(void) */
void __cdecl16near FUN_10bf_42d0(void)

{
  byte bVar1;
  byte in_CH;
  undefined2 unaff_DS;
  undefined1 in_ZF;
  
  while( true ) {
    bVar1 = FUN_10bf_430a();
    if ((bool)in_ZF) {
      return;
    }
    if (bVar1 != 0x2e) break;
    if ((in_CH & 0x10) != 0) {
      return;
    }
    *(int *)0x6ee6 = *(int *)0x6ee6 + 1;
    in_CH = in_CH | 0x10;
    in_ZF = in_CH == 0;
  }
  if (bVar1 < 0x30) {
    return;
  }
  if (9 < (byte)(bVar1 - 0x30)) {
    return;
  }
  if ((in_CH & 0x10) != 0) {
    *(int *)0x6eea = *(int *)0x6eea + -1;
  }
  *(int *)0x6ee8 = *(int *)0x6ee8 + 1;
  return;
}
