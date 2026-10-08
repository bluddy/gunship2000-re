/* GS.GS2 1d02:0d46 undefined FUN_1d02_0d46(void) */
void __cdecl16far FUN_1d02_0d46(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int iStack_312;
  int iStack_310;
  int iStack_30e;
  int iStack_30c;
  undefined1 local_308 [762];
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined1 *puStack_a;
  int iStack_8;
  undefined1 *puStack_6;
  
  puStack_6 = (undefined1 *)0xdd71;
  FUN_10bf_02c0();
  puStack_6 = (undefined1 *)0x306;
  iStack_8 = 0;
  puStack_a = local_308;
  uStack_c = 0x10bf;
  uStack_e = 0xdd81;
  FUN_10bf_2c3a();
  puStack_6 = (undefined1 *)0x6;
  iStack_8 = param_1;
  puStack_a = local_308;
  uStack_c = 0x10bf;
  uStack_e = 0xdd93;
  FUN_10bf_2c0e();
  iStack_312 = 0;
  uVar2 = 0x10bf;
  iStack_30c = param_3;
  if (param_4 != 0) {
    iStack_30c = param_2;
  }
  while( true ) {
    for (iStack_30e = 6; iStack_30e < 0x306; iStack_30e = iStack_30e + 1) {
      local_308[iStack_30e] = (char)((uint)(*(char *)(param_1 + iStack_30e) * iStack_30c) >> 8);
    }
    iStack_8 = uVar2;
    if (*(int *)0x859e == 0) {
      puStack_6 = local_308;
      puStack_a = (undefined1 *)0xddea;
      FUN_1d02_0e34();
    }
    else {
      puStack_6 = local_308;
      uVar2 = 0x2658;
      puStack_a = (undefined1 *)0xddfa;
      thunk_EXT_FUN_0000_0000();
    }
    if (param_3 == iStack_30c) break;
    if (iStack_312 == 0) {
      iStack_312 = *(int *)0x859e * param_4;
      iVar1 = iStack_312;
      if (iStack_312 == 0) {
        iVar1 = 0xff;
      }
      iStack_310 = (param_3 - param_2) / iVar1;
    }
    iStack_312 = iStack_312 + -1;
    if (iStack_312 < 1) {
      iStack_30c = param_3;
    }
    else {
      iStack_30c = iStack_30c + iStack_310;
    }
  }
  return;
}
