/* GS.GS2 23ed:00b0 undefined FUN_23ed_00b0(void) */
void __cdecl16far FUN_23ed_00b0(int param_1)

{
  undefined2 unaff_DS;
  
  FUN_10bf_02c0();
  if (param_1 == 0) {
    *(int *)0x9542 = *(int *)0x9542 + 1;
    return;
  }
  FUN_23ed_0184();
  FUN_10bf_06f2(*(undefined2 *)0x953a,0x1bf4,param_1);
  return;
}
