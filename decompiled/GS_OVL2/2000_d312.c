/* GS.GS2 2000:d312 undefined FUN_2000_d312(void) */
int __cdecl16far FUN_2000_d312(undefined2 param_1)

{
  int iVar1;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 local_18 [6];
  int iStack_12;
  int local_10;
  undefined2 local_e;
  int *piStack_c;
  undefined2 uStack_a;
  undefined2 local_8;
  undefined2 uStack_6;
  
  uStack_6 = 0xd31d;
  func_0x00000eb0();
  uStack_6 = param_1;
  local_8 = 2;
  uStack_a = 1;
  piStack_c = &local_10;
  local_e = 0xbf;
  local_10 = -0x2cad;
  iStack_12 = func_0x00001418();
  for (local_10 = 0; iVar1 = local_10, local_10 < *(char *)0xe282; local_10 = local_10 + 1) {
    *(undefined1 *)((int)&local_e + local_10) = *(undefined1 *)(local_10 * 0x29 + -0x45e5);
    local_18[local_10] = *(undefined1 *)(local_10 * 0x29 + -0x45e4);
    *(undefined1 *)((int)&local_8 + iVar1) = *(undefined1 *)(iVar1 * 0x24 + -0x4518);
  }
  uStack_6 = param_1;
  local_8 = 5;
  uStack_a = 1;
  piStack_c = &local_e;
  local_e = 0xbf;
  local_10 = -0x2c62;
  iVar1 = func_0x00001418();
  iStack_12 = iStack_12 + iVar1;
  uStack_6 = param_1;
  local_8 = 5;
  uStack_a = 1;
  piStack_c = (int *)local_18;
  local_e = 0xbf;
  local_10 = -0x2c4c;
  iVar1 = func_0x00001418();
  iStack_12 = iStack_12 + iVar1;
  uStack_6 = param_1;
  local_8 = 5;
  uStack_a = 1;
  piStack_c = &local_8;
  local_e = 0xbf;
  local_10 = -0x2c36;
  iVar1 = func_0x00001418();
  iStack_12 = iStack_12 + iVar1;
  *(undefined1 *)0xa26d = *(undefined1 *)0xb832;
  uStack_6 = param_1;
  local_8 = 0x12;
  uStack_a = 1;
  piStack_c = (int *)0xa260;
  local_e = 0xbf;
  local_10 = -0x2c1b;
  iVar1 = func_0x00001418();
  iStack_12 = iStack_12 + iVar1;
  uStack_6 = param_1;
  local_8 = 0xbf;
  uStack_a = 0xd3f3;
  func_0x0000968e();
  return iStack_12 + 0x50;
}
