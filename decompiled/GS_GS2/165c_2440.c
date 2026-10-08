/* GS.GS2 165c:2440 undefined FUN_165c_2440(void) */
void __cdecl16far FUN_165c_2440(undefined2 param_1)

{
  undefined2 unaff_DS;
  undefined2 local_a;
  undefined2 uStack_8;
  undefined2 **local_6;
  undefined2 *puStack_4;
  
  puStack_4 = (undefined2 *)0x165c;
  local_6 = (undefined2 **)0x8a0b;
  FUN_10bf_02c0();
  puStack_4 = &local_a;
  local_6 = &local_6;
  uStack_8 = param_1;
  local_a = 0x10bf;
  FUN_165c_26c4();
  puStack_4 = (undefined2 *)0x0;
  local_6 = (undefined2 **)0x8000;
  local_a = FUN_10bf_2efc();
  local_6 = (undefined2 **)0x0;
  uStack_8 = 0x8000;
  puStack_4 = (undefined2 *)local_a;
  local_6 = (undefined2 **)FUN_10bf_2efc(0);
  uStack_8 = 0;
  local_a = 0x8000;
  uStack_8 = FUN_10bf_2efc(*(undefined2 *)0xaca0,*(undefined2 *)0xaca2);
  local_a = 0;
  local_a = FUN_10bf_2efc(*(undefined2 *)0xa27c,*(undefined2 *)0xa27e,0x8000);
  FUN_165c_0d2e();
  return;
}
