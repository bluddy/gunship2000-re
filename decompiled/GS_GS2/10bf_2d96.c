/* GS.GS2 10bf:2d96 undefined FUN_10bf_2d96(void) */
void FUN_10bf_2d96(undefined2 param_1,undefined2 param_2,undefined2 *param_3)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  undefined1 in_CF;
  
  pcVar1 = (code *)swi(0x21);
  uVar2 = (*pcVar1)();
  if (!(bool)in_CF) {
    param_2 = uVar2;
  }
  *param_3 = param_2;
  FUN_10bf_05a8();
  return;
}
