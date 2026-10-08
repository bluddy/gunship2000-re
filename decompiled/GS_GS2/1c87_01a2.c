/* GS.GS2 1c87:01a2 undefined FUN_1c87_01a2(void) */
void __cdecl16far FUN_1c87_01a2(int param_1,int param_2)

{
  undefined2 unaff_DS;
  
  FUN_10bf_02c0();
  *(int *)0x8574 = param_1 + *(int *)0x8562;
  *(int *)0x8576 = *(int *)0x8564 + param_2;
  FUN_1c87_052c();
  return;
}
