/* GS.GS2 10bf:2ee2 undefined FUN_10bf_2ee2(void) */
void FUN_10bf_2ee2(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 *param_4)

{
  code *pcVar1;
  undefined2 unaff_DS;
  undefined1 in_CF;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if ((bool)in_CF) {
    *param_4 = param_2;
  }
  FUN_10bf_05a8();
  return;
}
