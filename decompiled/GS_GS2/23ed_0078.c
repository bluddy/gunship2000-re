/* GS.GS2 23ed:0078 undefined FUN_23ed_0078(void) */
void __cdecl16far FUN_23ed_0078(int param_1,int param_2,int param_3)

{
  undefined2 unaff_DS;
  
  FUN_10bf_02c0();
  if ((param_3 == 0 && param_2 == 0) && param_1 == 0) {
    *(int *)0x9542 = *(int *)0x9542 + 1;
    return;
  }
  FUN_23ed_0184();
  FUN_10bf_06f2(*(undefined2 *)0x953a,0x1be8,param_1,param_2,param_3);
  return;
}
