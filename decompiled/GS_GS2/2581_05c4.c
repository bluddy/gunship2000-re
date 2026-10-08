/* GS.GS2 2581:05c4 undefined FUN_2581_05c4(void) */
undefined2 __cdecl16far FUN_2581_05c4(int param_1)

{
  undefined2 unaff_DS;
  int iVar1;
  
  FUN_10bf_02c0();
  iVar1 = 0;
  while( true ) {
    if (*(int *)0xb836 <= iVar1) {
      return 0;
    }
    if (*(char *)(iVar1 * 0xfc + (int)*(undefined4 *)0xb83a) == param_1) break;
    iVar1 = iVar1 + 1;
  }
  return 1;
}
