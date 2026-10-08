/* GS.GS2 20e4:03aa undefined FUN_20e4_03aa(void) */
undefined2 __cdecl16far FUN_20e4_03aa(int param_1,int param_2)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined2 local_c;
  undefined2 uStack_a;
  undefined2 *puStack_8;
  int iStack_6;
  int iStack_4;
  
  iStack_4 = 0x20e4;
  iStack_6 = 0x11f5;
  FUN_10bf_02c0();
  iStack_4 = 4;
  iStack_6 = 0xc9f;
  puStack_8 = (undefined2 *)param_1;
  uStack_a = 0x10bf;
  local_c = 0x1202;
  iVar1 = FUN_10bf_2278();
  if (iVar1 == 0) {
    iStack_4 = 4;
    iStack_6 = 0xca4;
    puStack_8 = (undefined2 *)(param_1 + 8);
    uStack_a = 0x10bf;
    local_c = 0x121d;
    iVar1 = FUN_10bf_2278();
    if (iVar1 == 0) {
      *(int *)0x91fe = *(char *)(param_1 + 4) * 10 + (int)*(char *)(param_1 + 5) + -0x210;
      *(int *)0x9180 = *(char *)(param_1 + 6) * 10 + (int)*(char *)(param_1 + 7) + -0x210;
      *(undefined1 *)(param_1 + 0xc) = 0;
      if ((*(int *)0x91fe <= param_2) && (param_2 <= *(int *)0x9180)) {
        iStack_4 = 8;
        iStack_6 = param_1;
        puStack_8 = &local_c;
        uStack_a = 0x10bf;
        local_c = 0x1281;
        FUN_10bf_2250();
        iStack_4 = param_1;
        iStack_6 = 4;
        puStack_8 = (undefined2 *)0x10bf;
        uStack_a = 0x1292;
        FUN_1d02_0608();
        return 1;
      }
    }
  }
  return 0;
}
