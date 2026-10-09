/* GS.GS2 2000:e1dc undefined FUN_2000_e1dc(void) */
undefined2 __cdecl16far FUN_2000_e1dc(undefined2 param_1)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  undefined2 **local_8;
  undefined1 *local_6;
  
  local_6 = (undefined1 *)0xe1e7;
  func_0x00000eb0();
  local_6 = &stack0xfffc;
  local_8 = &local_8;
  uVar1 = func_0x0000362e(0xbf,param_1,0x6374);
  func_0x0000332a(0xbf,uVar1);
  if ((int)local_6 < 0x50) {
    local_6 = local_6 + 100;
  }
  local_6 = local_6 + 0x76c;
  local_8 = (undefined2 **)*(undefined2 *)(((int)local_8 + -1) * 2 + 0x6388);
  func_0x000032d0(0xbf,param_1,0x637d);
  return param_1;
}
