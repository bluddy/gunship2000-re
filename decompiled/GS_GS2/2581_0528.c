/* GS.GS2 2581:0528 undefined FUN_2581_0528(void) */
int __cdecl16far FUN_2581_0528(int param_1)

{
  undefined2 unaff_DS;
  undefined2 uStack_4;
  
  FUN_10bf_02c0();
  uStack_4 = 0;
  while( true ) {
    if (*(int *)0x9680 <= uStack_4) {
      return -1;
    }
    if (*(char *)(uStack_4 * 5 + -0x6a7c) == param_1) break;
    uStack_4 = uStack_4 + 1;
  }
  return uStack_4;
}
