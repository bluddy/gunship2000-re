/* GS.GS2 2000:eb6c undefined FUN_2000_eb6c(void) */
undefined2 __cdecl16far FUN_2000_eb6c(void)

{
  undefined2 unaff_DS;
  int iVar1;
  
  func_0x00000eb0();
  if ((-1 < *(char *)0x9a56) && (0 < *(int *)0x9a69)) {
    return 0;
  }
  iVar1 = 0;
  while( true ) {
    if (2 < iVar1) {
      return 1;
    }
    if (*(int *)(iVar1 * 2 + -0x65a0) != 0) break;
    iVar1 = iVar1 + 1;
  }
  return 0;
}
