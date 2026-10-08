/* GS.GS2 28d4:0c1f undefined FUN_28d4_0c1f(void) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_28d4_0c1f(void)

{
  undefined2 in_DX;
  undefined2 unaff_SI;
  int unaff_DI;
  
  DAT_28d4_0cbe = DAT_28d4_0d36;
  DAT_28d4_0cc0 = DAT_28d4_0d38;
  DAT_28d4_0cc4 = DAT_28d4_0d3a;
  DAT_28d4_0cc8 = DAT_28d4_0d3c;
  DAT_28d4_0cc2 = in_DX;
  DAT_28d4_0cc6 = unaff_SI;
  FUN_28d4_1446();
  FUN_28d4_1446();
  if (unaff_DI == 0) {
    DAT_28d4_0cca = 0;
  }
  else {
    DAT_28d4_0cca = DAT_28d4_0d4a;
    DAT_28d4_0cce = _DAT_28d4_0d4c;
    DAT_28d4_0cd2 = DAT_28d4_0d48;
    DAT_28d4_0cd4 = 0;
    DAT_28d4_0ccc = unaff_DI;
    DAT_28d4_0cd0 = in_DX;
  }
                    /* WARNING: Could not recover jumptable at 0x000299f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*DAT_28d4_0cba)();
  return;
}
