/* GS.GS2 165c:2f80 undefined FUN_165c_2f80(void) */
void __cdecl16far FUN_165c_2f80(void)

{
  int iVar1;
  undefined2 unaff_DS;
  int iStack_10;
  undefined2 **local_e;
  undefined2 uStack_c;
  
  FUN_10bf_02c0();
  uStack_c = 0x10bf;
  local_e = (undefined2 **)0x9558;
  iVar1 = FUN_10bf_06dc();
  if (iVar1 == 0) {
    return;
  }
  uStack_c = 0x12;
  local_e = (undefined2 **)0xa260;
  FUN_10bf_0828();
  uStack_c = 10;
  local_e = (undefined2 **)0xaca8;
  FUN_10bf_0828();
  uStack_c = 0xa20;
  local_e = (undefined2 **)0xa280;
  FUN_10bf_0828();
  uStack_c = 1;
  local_e = (undefined2 **)0xad1a;
  FUN_10bf_0828();
  uStack_c = 0x14;
  local_e = (undefined2 **)0xa248;
  FUN_10bf_0828();
  uStack_c = 1;
  local_e = (undefined2 **)0xad0e;
  FUN_10bf_0828();
  uStack_c = 0x136;
  local_e = (undefined2 **)0xb8e4;
  FUN_10bf_0828();
  uStack_c = 0x50;
  local_e = (undefined2 **)0xb86c;
  FUN_10bf_0828();
  uStack_c = 2;
  local_e = (undefined2 **)0xb8dc;
  FUN_10bf_0828();
  iStack_10 = 0;
  while (iStack_10 < *(int *)0xb8dc) {
    unaff_DS = *(undefined2 *)(iStack_10 * 9 + *(int *)0xb8d4 + 6);
    uStack_c = 9;
    local_e = &local_e;
    FUN_10bf_0828();
    iStack_10 = 0x10c0;
  }
  uStack_c = 5;
  local_e = (undefined2 **)0xb5d0;
  FUN_10bf_0828();
  uStack_c = 0x19;
  local_e = (undefined2 **)0xb5d6;
  FUN_10bf_0828();
  uStack_c = 0x967c;
  FUN_2163_1b7a();
  uStack_c = 0x9687;
  FUN_10bf_05f6();
  return;
}
