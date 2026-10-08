/* GS.GS2 1d02:08a6 undefined FUN_1d02_08a6(void) */
void __cdecl16far FUN_1d02_08a6(int param_1,undefined2 param_2)

{
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 local_e;
  undefined2 uStack_c;
  undefined2 *puStack_a;
  int iStack_8;
  undefined2 *puStack_6;
  int iVar1;
  
  puStack_6 = (undefined2 *)0xd8d1;
  FUN_10bf_02c0();
  for (iVar1 = 0;
      ((iVar1 < 8 && (*(char *)(iVar1 + param_1) != '\0')) && (*(char *)(iVar1 + param_1) != '.'));
      iVar1 = iVar1 + 1) {
  }
  iStack_8 = param_1;
  puStack_a = &local_e;
  uStack_c = 0x10bf;
  local_e = 0xd907;
  puStack_6 = (undefined2 *)iVar1;
  FUN_10bf_2250();
  *(undefined1 *)((int)&local_e + iVar1) = 0;
  puStack_6 = &local_e;
  iStack_8 = 0x7cd;
  puStack_a = (undefined2 *)param_2;
  uStack_c = 0x10bf;
  local_e = 0xd920;
  FUN_10bf_26e0();
  return;
}
