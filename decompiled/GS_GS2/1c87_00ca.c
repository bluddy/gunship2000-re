/* GS.GS2 1c87:00ca undefined FUN_1c87_00ca(void) */
void __cdecl16far FUN_1c87_00ca(undefined2 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined2 unaff_DS;
  
  FUN_10bf_02c0();
  iVar1 = FUN_1c87_04e8(param_1);
  if (param_2 == 0) {
    *(int *)0x8574 = *(int *)0x8562 + param_3;
  }
  else {
    *(int *)0x8574 = (*(int *)0x8562 - iVar1) + param_3 + 1;
  }
  FUN_1c87_052c();
  FUN_1c87_0578(param_1,0);
  return;
}
