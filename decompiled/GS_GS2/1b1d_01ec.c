/* GS.GS2 1b1d:01ec undefined FUN_1b1d_01ec(void) */
undefined2 __cdecl16far FUN_1b1d_01ec(void)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  FUN_10bf_02c0();
  if ((*(char *)0xad1b == '\x04') &&
     ((*(char *)0xad06 <= *(char *)0xad07 || (*(char *)0xad06 <= *(char *)0xad08)))) {
    if (*(char *)0xad08 < *(char *)0xad07) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0xffff;
    }
    return uVar1;
  }
  return 0;
}
