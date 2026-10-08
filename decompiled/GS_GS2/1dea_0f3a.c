/* GS.GS2 1dea:0f3a undefined FUN_1dea_0f3a(void) */
uint __cdecl16far FUN_1dea_0f3a(int param_1)

{
  undefined1 extraout_AH;
  uint uVar1;
  undefined2 unaff_DS;
  
  FUN_10bf_02c0();
  uVar1 = CONCAT11(extraout_AH,*(undefined1 *)0xbbe4) & 0xff60;
  if (((byte)uVar1 < 0x40) && (param_1 == 0x1d)) {
    return 0;
  }
  uVar1 = CONCAT11((char)(uVar1 >> 8),*(undefined1 *)0xbbe4) & 0xff60;
  if (((byte)uVar1 < 0x20) && ((param_1 == 2 || ((0x18 < param_1 && (param_1 < 0x21)))))) {
    return 0;
  }
  if (*(int *)0x9f02 != 0x4e) {
    uVar1 = thunk_EXT_FUN_0000_0000(0x10bf,param_1);
  }
  return uVar1;
}
