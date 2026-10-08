/* GS.GS2 10bf:2e95 undefined FUN_10bf_2e95(void) */
void FUN_10bf_2e95(void)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  undefined1 uVar3;
  undefined2 in_stack_00000000;
  undefined2 *in_stack_0000000c;
  
  uVar3 = *(uint *)0x714e < 0xd6d6;
  if (*(uint *)0x714e == 0xd6d6) {
    (*(code *)*(undefined2 *)0x7150)();
  }
  pcVar1 = (code *)swi(0x21);
  uVar2 = (*pcVar1)();
  if (!(bool)uVar3) {
    *in_stack_0000000c = uVar2;
  }
  FUN_10bf_05a8();
  return;
}
