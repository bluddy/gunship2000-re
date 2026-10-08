/* GS2.GS2 12a2:0c10 undefined FUN_12a2_0c10(void) */
void FUN_12a2_0c10(void)

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
  FUN_12a2_0504();
  return;
}
