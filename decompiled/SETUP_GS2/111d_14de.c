/* SETUP.GS2 111d:14de undefined FUN_111d_14de(void) */
void FUN_111d_14de(void)

{
  code *pcVar1;
  int unaff_BP;
  undefined2 unaff_SS;
  
  if (*(int *)(unaff_BP + 10) != 0) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    FUN_111d_05bb();
    return;
  }
  FUN_111d_05bb();
  return;
}
