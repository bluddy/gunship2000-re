/* GS.GS2 1000:0362 undefined FUN_1000_0362(void) */
void __cdecl16far FUN_1000_0362(int param_1,int param_2)

{
  undefined2 unaff_DS;
  undefined2 uStack_4;
  
  FUN_10bf_02c0();
  for (uStack_4 = 0; uStack_4 < *(int *)0x76b0; uStack_4 = uStack_4 + 1) {
    if (*(char *)(uStack_4 * 0x26 + 0x7476) == param_1) {
      *(bool *)(uStack_4 * 0x26 + 0x7487) = param_2 == 0;
    }
  }
  return;
}
