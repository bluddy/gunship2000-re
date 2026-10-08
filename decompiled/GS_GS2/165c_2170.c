/* GS.GS2 165c:2170 undefined FUN_165c_2170(void) */
int __cdecl16far FUN_165c_2170(uint param_1)

{
  undefined2 unaff_DS;
  undefined2 uStack_4;
  
  FUN_10bf_02c0();
  uStack_4 = 0;
  while( true ) {
    if (*(int *)0xaca4 <= uStack_4) {
      return -1;
    }
    if (*(byte *)(uStack_4 + -0x4794) == param_1) break;
    uStack_4 = uStack_4 + 1;
  }
  return uStack_4;
}
