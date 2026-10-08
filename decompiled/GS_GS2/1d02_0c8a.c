/* GS.GS2 1d02:0c8a undefined FUN_1d02_0c8a(void) */
void __cdecl16far
FUN_1d02_0c8a(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             int param_5)

{
  int iVar1;
  undefined2 unaff_DS;
  
  FUN_10bf_02c0();
  iVar1 = 2 - (uint)(param_5 == 0);
  FUN_1d02_0a52(iVar1,param_1,param_2,param_3,10,iVar1);
  FUN_1c87_01c6();
  iVar1 = -1;
  FUN_1c87_0050(0x880,param_1,param_2,param_3,6);
  FUN_1c87_00b8(*(undefined1 *)(iVar1 * 0xc + -0x7a57));
  FUN_1c87_0110(3);
  FUN_1c87_003a(param_4);
  FUN_1c87_0498();
  return;
}
