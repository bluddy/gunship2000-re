/* GS.GS2 1000:0328 undefined FUN_1000_0328(void) */
int __cdecl16far FUN_1000_0328(int param_1)

{
  undefined2 unaff_DS;
  undefined2 uStack_4;
  
  FUN_10bf_02c0();
  uStack_4 = 0;
  while( true ) {
    if (*(int *)0x76b0 <= uStack_4) {
      return 0;
    }
    if (*(char *)(uStack_4 * 0x26 + 0x7476) == param_1) break;
    uStack_4 = uStack_4 + 1;
  }
  return (int)*(char *)(uStack_4 * 0x26 + 0x7487);
}
