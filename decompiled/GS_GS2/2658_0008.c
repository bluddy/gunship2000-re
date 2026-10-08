/* GS.GS2 2658:0008 undefined FUN_2658_0008(void) */
void FUN_2658_0008(undefined2 param_1,undefined2 param_2)

{
  char *pcVar1;
  undefined2 unaff_DS;
  undefined2 in_stack_00000000;
  
  if (*(char *)0x63a1 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x00026596. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uRam00026599 = in_stack_00000000;
    (*(code *)(ulong)uRam00026580)();
    return;
  }
  *(undefined1 *)0x63a0 = 1;
  uRam000265b2 = in_stack_00000000;
  *(undefined2 *)0x63a2 = param_1;
  *(undefined2 *)0x63a4 = param_2;
  (*(code *)*(undefined2 *)0x0)();
  while( true ) {
    pcVar1 = (char *)0x63a0;
    *pcVar1 = *pcVar1 + -1;
    if (*pcVar1 == '\0') break;
    FUN_2658_0e0c();
  }
                    /* WARNING: Could not recover jumptable at 0x000265bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*(uint *)0x63a2)();
  return;
}
