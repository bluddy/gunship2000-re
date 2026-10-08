/* GS.GS2 1c87:0050 undefined FUN_1c87_0050(void) */
void __cdecl16far
FUN_1c87_0050(undefined2 param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  undefined2 unaff_DS;
  
  FUN_10bf_02c0();
  *(int *)0x856c = param_5;
  *(undefined2 *)0x8560 = param_1;
  *(int *)0x8562 = param_2;
  *(int *)0x8574 = param_2;
  *(int *)0x8564 = param_3;
  *(int *)0x8576 = param_3;
  *(int *)0x856a = param_4;
  *(int *)0x8566 = param_2 + param_4 + -1;
  *(int *)0x8568 = param_3 + param_5 + -1;
  *(undefined1 *)0x855e = 0;
  if (-1 < param_6) {
    FUN_2658_04e2(param_1,*(undefined2 *)0x8562,*(undefined2 *)0x8564,param_4,param_5,param_6);
  }
  return;
}
