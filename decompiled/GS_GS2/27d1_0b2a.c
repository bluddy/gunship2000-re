/* GS.GS2 27d1:0b2a undefined FUN_27d1_0b2a(void) */
void FUN_27d1_0b2a(void)

{
  uint *unaff_SI;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  FUN_27d1_0b50();
  *(undefined2 *)0xb44 = *(undefined2 *)0xb9e;
  *(undefined2 *)0xb46 = *(undefined2 *)0x0;
                    /* WARNING: Could not recover jumptable at 0x0002884d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*unaff_SI)();
  return;
}
