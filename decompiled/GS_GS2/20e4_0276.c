/* GS.GS2 20e4:0276 undefined FUN_20e4_0276(void) */
undefined2 __cdecl16far FUN_20e4_0276(int param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  int local_2e;
  int iStack_2c;
  int local_2a [12];
  undefined1 local_12 [4];
  undefined2 uStack_e;
  undefined2 uStack_c;
  int *piStack_a;
  undefined2 uStack_8;
  undefined2 *puStack_6;
  undefined1 *puStack_4;
  
  puStack_4 = (undefined1 *)0x20e4;
  puStack_6 = (undefined2 *)0x10c1;
  FUN_10bf_02c0();
  if ((*(int *)0x91fe <= param_1) && (param_1 <= *(int *)0x9180)) {
    for (iStack_2c = 0; iStack_2c < 4; iStack_2c = iStack_2c + 1) {
      puStack_4 = (undefined1 *)(iStack_2c * 10 + -0x43f7);
      puStack_6 = (undefined2 *)local_12;
      uStack_8 = 0x10bf;
      piStack_a = (int *)0x10fa;
      FUN_10bf_21d6();
      puStack_4 = (undefined1 *)0xc82;
      puStack_6 = (undefined2 *)local_12;
      uStack_8 = 0x10bf;
      piStack_a = (int *)0x1109;
      FUN_10bf_2196();
      puStack_4 = (undefined1 *)param_1;
      puStack_6 = (undefined2 *)local_12;
      uStack_8 = 0x10bf;
      piStack_a = (int *)0x1117;
      iVar1 = FUN_20e4_03aa();
      if (iVar1 != 0) {
        return 1;
      }
    }
  }
  puStack_4 = (undefined1 *)0xc87;
  puStack_6 = (undefined2 *)0xc8a;
  uStack_8 = 0x10bf;
  piStack_a = (int *)0x1131;
  puStack_4 = (undefined1 *)FUN_10bf_06dc();
  if (puStack_4 != (undefined1 *)0x0) {
    puStack_6 = (undefined2 *)0x1;
    uStack_8 = 2;
    piStack_a = &local_2e;
    uStack_c = 0x10bf;
    uStack_e = 0x1149;
    iVar1 = FUN_10bf_072a();
    if (iVar1 == 1) {
      for (iStack_2c = 0; iStack_2c < local_2e; iStack_2c = iStack_2c + 1) {
        puStack_6 = (undefined2 *)0x1;
        uStack_8 = 0x18;
        piStack_a = local_2a;
        uStack_c = 0x10bf;
        uStack_e = 0x1171;
        iVar1 = FUN_10bf_072a();
        if (iVar1 != 1) break;
        puStack_4 = (undefined1 *)param_1;
        puStack_6 = local_2a;
        uStack_8 = 0x10bf;
        piStack_a = (int *)0x1185;
        iVar1 = FUN_20e4_03aa();
        if (iVar1 != 0) {
          puStack_6 = (undefined2 *)0x10bf;
          uStack_8 = 0x1194;
          FUN_10bf_05f6();
          return 1;
        }
      }
    }
    puStack_6 = (undefined2 *)0x10bf;
    uStack_8 = 0x11a6;
    FUN_10bf_05f6();
  }
  puStack_4 = local_12;
  puStack_6 = (undefined2 *)0xc95;
  uStack_8 = 0x10bf;
  piStack_a = (int *)0x11b5;
  iVar1 = FUN_1f61_06ac();
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    puStack_4 = (undefined1 *)param_1;
    puStack_6 = (undefined2 *)local_12;
    uStack_8 = 0x1f61;
    piStack_a = (int *)0x11c7;
    iVar1 = FUN_20e4_03aa();
    if (iVar1 != 0) break;
    puStack_4 = local_12;
    puStack_6 = (undefined2 *)0x1f61;
    uStack_8 = 0x11dd;
    iVar1 = FUN_1f61_077e();
  }
  return 1;
}
