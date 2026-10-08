/* GS.GS2 2092:0194 undefined FUN_2092_0194(void) */
undefined2 __cdecl16far FUN_2092_0194(undefined2 *param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  undefined2 local_6;
  undefined2 uStack_4;
  
  uStack_4 = 0x2092;
  local_6 = 0xabf;
  FUN_10bf_02c0();
  if (param_1._2_2_ == 0 && (undefined2 *)param_1 == (undefined2 *)0x0) {
    uStack_4 = 2;
    local_6 = 0x10bf;
    uVar1 = FUN_2092_0282();
    return uVar1;
  }
  uStack_4 = param_3;
  local_6 = param_2;
  uVar1 = FUN_2092_0024(&local_6);
  *param_1 = uStack_4;
  return uVar1;
}
