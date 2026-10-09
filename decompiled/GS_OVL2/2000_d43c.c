/* GS.GS2 2000:d43c undefined FUN_2000_d43c(void) */
void __cdecl16far FUN_2000_d43c(undefined2 param_1)

{
  int iVar1;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 local_18 [6];
  int local_12;
  undefined2 local_10;
  undefined2 uStack_e;
  int *piStack_c;
  undefined2 uStack_a;
  undefined2 local_8;
  int iStack_6;
  
  iStack_6 = 0xd447;
  func_0x00000eb0();
  iStack_6 = param_1;
  local_8 = 1;
  uStack_a = 2;
  piStack_c = &local_12;
  uStack_e = 0xbf;
  local_10 = 0xd458;
  func_0x0000131a();
  iStack_6 = param_1;
  local_8 = 1;
  uStack_a = 5;
  piStack_c = &local_10;
  uStack_e = 0xbf;
  local_10 = 0xd46b;
  func_0x0000131a();
  iStack_6 = param_1;
  local_8 = 1;
  uStack_a = 5;
  piStack_c = (int *)local_18;
  uStack_e = 0xbf;
  local_10 = 0xd47e;
  func_0x0000131a();
  iStack_6 = param_1;
  local_8 = 1;
  uStack_a = 5;
  piStack_c = &local_8;
  uStack_e = 0xbf;
  local_10 = 0xd491;
  func_0x0000131a();
  iStack_6 = param_1;
  local_8 = 1;
  uStack_a = 0x12;
  piStack_c = (int *)0xa260;
  uStack_e = 0xbf;
  local_10 = 0xd4a3;
  func_0x0000131a();
  *(int *)0xb832 = (int)*(char *)0xa26d;
  iStack_6 = param_1;
  local_8 = 0xbf;
  uStack_a = 0xd4b5;
  func_0x000096ce();
  local_8 = 0x65c;
  for (local_12 = 0; local_12 < *(char *)0xe282; local_12 = local_12 + 1) {
    *(undefined1 *)(local_12 * 0x24 + -0x4518) = *(undefined1 *)((int)&local_8 + local_12);
    iVar1 = local_12 * 0x29;
    *(undefined1 *)(iVar1 + -0x45e6) = (char)local_12;
    *(undefined1 *)(iVar1 + -0x45e5) = *(undefined1 *)((int)&local_10 + local_12);
    *(undefined1 *)(iVar1 + -0x45e4) = local_18[local_12];
    iStack_6 = local_12;
    uStack_a = 0xd4f6;
    func_0x00012474();
    local_8 = 0x1163;
  }
  return;
}
