/* GS.GS2 1f61:04ca undefined FUN_1f61_04ca(void) */
undefined2 __cdecl16far FUN_1f61_04ca(undefined2 param_1)

{
  undefined2 uVar1;
  int iVar2;
  int in_DX;
  undefined2 local_6;
  undefined2 *puStack_4;
  
  puStack_4 = (undefined2 *)0x1f61;
  local_6 = 0xfae5;
  FUN_10bf_02c0();
  do {
    puStack_4 = &local_6;
    local_6 = 0x10bf;
    uVar1 = FUN_1f61_0428();
    if (in_DX < 0) {
      return uVar1;
    }
    puStack_4 = (undefined2 *)0x4;
    local_6 = param_1;
    iVar2 = FUN_10bf_2278(&local_6);
  } while (iVar2 != 0);
  return 0x10bf;
}
