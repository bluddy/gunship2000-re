/* GS.GS2 10bf:1f7e undefined FUN_10bf_1f7e(void) */
void FUN_10bf_1f7e(void)

{
  code *pcVar1;
  int unaff_BP;
  undefined2 unaff_SS;
  
  if (*(int *)(unaff_BP + 10) != 0) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    FUN_10bf_05b5();
    return;
  }
  FUN_10bf_05b5();
  return;
}
