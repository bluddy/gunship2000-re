/* GS.GS2 27d1:0b4a undefined FUN_27d1_0b4a(void) */
void FUN_27d1_0b4a(void)

{
  uint *unaff_SI;
  undefined2 unaff_ES;
  
  FUN_27d1_0b50();
                    /* WARNING: Could not recover jumptable at 0x0002885d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*unaff_SI)();
  return;
}
