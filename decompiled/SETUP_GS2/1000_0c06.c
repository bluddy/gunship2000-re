/* SETUP.GS2 1000:0c06 undefined FUN_1000_0c06(void) */
undefined2 __cdecl16far
FUN_1000_0c06(undefined2 *param_1,undefined2 *param_2,uint param_3,byte param_4)

{
  byte bVar1;
  undefined2 unaff_DS;
  
  FUN_111d_02c6();
  *(uint *)0x1d30 = param_3;
  FUN_12f5_000c();
  if (param_1 != (undefined2 *)0x0) {
    if ((param_3 & 3) == 0) {
      *param_1 = *(undefined2 *)0x1f78;
    }
    else {
      *param_1 = *(undefined2 *)0x1f6a;
    }
  }
  if (param_2 != (undefined2 *)0x0) {
    if ((param_3 & 3) == 0) {
      *param_2 = *(undefined2 *)0x1f7a;
    }
    else {
      *param_2 = *(undefined2 *)0x1f6c;
    }
  }
  bVar1 = in(0x201);
  *(uint *)0x1d5c = (uint)((byte)~bVar1 >> 4 & param_4);
  return *(undefined2 *)0x1d5c;
}
