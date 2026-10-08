/* GS.GS2 1d02:0608 undefined FUN_1d02_0608(void) */
void __cdecl16far FUN_1d02_0608(int param_1,int param_2)

{
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int iStack_14;
  undefined1 local_12 [4];
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined1 *puStack_a;
  int iStack_8;
  undefined1 *puStack_6;
  
  puStack_6 = (undefined1 *)0xd633;
  FUN_10bf_02c0();
  if (param_1 != 0) {
    for (iStack_14 = 0;
        ((iStack_14 < 8 && (*(char *)(iStack_14 + param_2) != '\0')) &&
        (*(char *)(iStack_14 + param_2) != '.')); iStack_14 = iStack_14 + 1) {
    }
    puStack_6 = (undefined1 *)iStack_14;
    iStack_8 = param_2;
    puStack_a = local_12;
    uStack_c = 0x10bf;
    uStack_e = 0xd66f;
    FUN_10bf_2250();
    local_12[iStack_14] = 0;
    puStack_6 = local_12;
    iStack_8 = param_1 + -1;
    puStack_a = (undefined1 *)0x10bf;
    uStack_c = 0xd686;
    FUN_1d02_06bc();
    return;
  }
  puStack_6 = local_12;
  iStack_8 = param_2;
  puStack_a = (undefined1 *)0x10bf;
  uStack_c = 0xd697;
  FUN_1d02_08a6();
  puStack_6 = local_12;
  iStack_8 = param_1;
  puStack_a = (undefined1 *)0x10bf;
  uStack_c = 0xd6a6;
  FUN_2741_0256();
  return;
}
