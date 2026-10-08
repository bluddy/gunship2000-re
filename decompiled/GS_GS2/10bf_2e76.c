/* GS.GS2 10bf:2e76 undefined FUN_10bf_2e76(void) */
void FUN_10bf_2e76(void)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  undefined1 in_CF;
  undefined2 *in_stack_00000008;
  
  pcVar1 = (code *)swi(0x21);
  uVar2 = (*pcVar1)();
  if (!(bool)in_CF) {
    *in_stack_00000008 = uVar2;
  }
  FUN_10bf_05a8();
  return;
}
