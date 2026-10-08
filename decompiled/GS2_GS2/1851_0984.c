/* GS2.GS2 1851:0984 undefined FUN_1851_0984(void) */
void FUN_1851_0984(void)

{
  uint *unaff_SI;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  FUN_1851_09aa();
  *(undefined2 *)0x99e = *(undefined2 *)0x9e2;
  *(undefined2 *)0x9a0 = *(undefined2 *)0x0;
                    /* WARNING: Could not recover jumptable at 0x00018ea7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*unaff_SI)();
  return;
}
