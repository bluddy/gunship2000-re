/* GS.GS2 28d4:15d9 undefined FUN_28d4_15d9(void) */
void FUN_28d4_15d9(void)

{
  DAT_28d4_1604 = DAT_28d4_1676;
  DAT_28d4_1606 = DAT_28d4_1678;
  DAT_28d4_1608 = 0;
                    /* WARNING: Could not recover jumptable at 0x0002a33f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)DAT_28d4_148b)();
  return;
}
