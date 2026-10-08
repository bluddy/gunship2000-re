/* GS2.GS2 12a2:0c28 undefined FUN_12a2_0c28(void) */
void FUN_12a2_0c28(void)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  undefined1 uVar3;
  undefined2 in_stack_00000000;
  undefined2 *in_stack_0000000c;
  
  uVar3 = *(uint *)0x3244 < 0xd6d6;
  if (*(uint *)0x3244 == 0xd6d6) {
    (*(code *)*(undefined2 *)0x3246)();
  }
  pcVar1 = (code *)swi(0x21);
  uVar2 = (*pcVar1)();
  if (!(bool)uVar3) {
    *in_stack_0000000c = uVar2;
  }
  FUN_12a2_0504();
  return;
}
