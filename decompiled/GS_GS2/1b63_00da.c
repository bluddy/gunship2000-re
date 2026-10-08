/* GS.GS2 1b63:00da undefined FUN_1b63_00da(void) */
void __cdecl16far FUN_1b63_00da(int param_1,undefined2 param_2,int param_3)

{
  undefined2 unaff_DS;
  undefined2 uStack_4;
  
  FUN_10bf_02c0();
  uStack_4 = 0;
  while( true ) {
    if (*(int *)0x820c <= uStack_4) {
      return;
    }
    if (*(char *)(uStack_4 * 0xd + 0x7a68) == param_1) break;
    uStack_4 = uStack_4 + 1;
  }
  FUN_1b63_024c(uStack_4 * 0xd + 0x7a68,param_2);
  while ((uStack_4 = param_3 + 1, uStack_4 < *(int *)0x820c &&
         (*(char *)(uStack_4 * 0xd + 0x7a68) == -1))) {
    FUN_1b63_024c(uStack_4 * 0xd + 0x7a68,param_2);
  }
  return;
}
