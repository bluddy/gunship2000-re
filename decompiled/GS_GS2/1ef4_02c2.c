/* GS.GS2 1ef4:02c2 undefined FUN_1ef4_02c2(void) */
undefined2 __cdecl16far FUN_1ef4_02c2(undefined2 *param_1,undefined2 *param_2,int param_3)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  FUN_10bf_02c0();
  if (param_3 == 1) {
    uVar1 = 3;
  }
  else {
    uVar1 = 0xf;
  }
  *(undefined2 *)0xbc58 = uVar1;
  FUN_1ef4_03ba();
  if (param_1 != (undefined2 *)0x0) {
    *param_1 = *(undefined2 *)0xbc4e;
  }
  if (param_2 != (undefined2 *)0x0) {
    *param_2 = *(undefined2 *)0xbc50;
  }
  return *(undefined2 *)0xbc4c;
}
