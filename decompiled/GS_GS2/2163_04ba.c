/* GS.GS2 2163:04ba undefined FUN_2163_04ba(void) */
undefined2 __cdecl16far FUN_2163_04ba(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  undefined2 uStack_8;
  undefined2 uStack_6;
  
  iVar2 = 0x10bf;
  FUN_10bf_02c0();
  uStack_6 = 0;
  while( true ) {
    if (2 < uStack_6) {
      uStack_6 = 0;
      do {
        if (3 < uStack_6) {
          return 0;
        }
        for (uStack_8 = 0; uStack_8 < 3; uStack_8 = uStack_8 + 1) {
          iVar3 = iVar2;
          if (0 < *(int *)((param_1 * 0x12 + uStack_8) * 2 + -0x450c)) {
            uStack_6 = (int)*(char *)(uStack_8 + param_1 * 0x24 + -0x4515);
            iVar3 = 0x2634;
            iVar1 = FUN_2634_0204();
            uStack_8 = iVar2;
            if (*(char *)(uStack_6 + -0x6c34) == iVar1) {
              return 1;
            }
          }
          iVar2 = iVar3;
        }
        uStack_6 = uStack_6 + 1;
      } while( true );
    }
    if (*(char *)(param_1 * 0x24 + -0x4518) == *(char *)(uStack_6 + -0x6c30)) break;
    uStack_6 = uStack_6 + 1;
  }
  return 1;
}
