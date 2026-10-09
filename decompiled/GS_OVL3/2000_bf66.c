/* GS.GS2 2000:bf66 undefined FUN_2000_bf66(void) */
void __cdecl16far FUN_2000_bf66(int param_1,int param_2,undefined1 param_3,undefined1 param_4)

{
  undefined1 uVar1;
  undefined2 unaff_DS;
  
  func_0x00000eb0();
  *(undefined1 *)0x9bd2 = (undefined1)param_1;
  if ((param_1 == 0) || (param_2 != 0)) {
    *(undefined1 *)0x9bd6 = 0;
  }
  else {
    *(undefined1 *)0x9bd6 = 1;
  }
  if ((param_1 == 0) || (param_2 == 0)) {
    *(undefined1 *)0x9bd4 = 0;
  }
  else {
    *(undefined1 *)0x9bd4 = 1;
  }
  *(undefined1 *)0x9bd7 = param_3;
  *(undefined1 *)0x9bd3 = param_4;
  uVar1 = FUN_2000_bfca();
  *(undefined1 *)0x9bd8 = uVar1;
  FUN_2000_c028();
  FUN_2000_c14e();
  func_0x0000d2f0(0xbf);
  return;
}
