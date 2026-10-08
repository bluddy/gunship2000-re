/* GS.GS2 2163:1c56 undefined FUN_2163_1c56(void) */
undefined2 __cdecl16far FUN_2163_1c56(void)

{
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  char acStack_c [6];
  int iStack_6;
  int iVar1;
  
  iStack_6 = 0x3291;
  FUN_10bf_02c0();
  for (iVar1 = 0; iVar1 < *(char *)0xe282; iVar1 = iVar1 + 1) {
    acStack_c[iVar1] = *(char *)(iVar1 + -0x6c26);
  }
  iVar1 = 0;
  do {
    if (*(char *)0xe282 <= iVar1) {
      return 1;
    }
    for (iStack_6 = 0; iStack_6 < *(char *)0xe282; iStack_6 = iStack_6 + 1) {
      if (*(char *)(iVar1 * 0x24 + -0x4518) == acStack_c[iStack_6]) {
        acStack_c[iStack_6] = -1;
        break;
      }
    }
    if (*(char *)0xe282 == iStack_6) {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while( true );
}
