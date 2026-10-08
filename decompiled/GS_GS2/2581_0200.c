/* GS.GS2 2581:0200 undefined FUN_2581_0200(void) */
undefined2 __cdecl16far FUN_2581_0200(undefined2 param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  int in_DX;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 local_3c [7];
  undefined2 local_2e;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  int iStack_24;
  undefined1 local_22 [8];
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 local_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 *puStack_c;
  undefined2 *puStack_a;
  undefined2 *puStack_8;
  
  FUN_10bf_02c0();
  puStack_8 = (undefined2 *)param_1;
  puStack_a = (undefined2 *)0x1e05;
  puStack_c = &local_14;
  uStack_e = 0x10bf;
  uStack_10 = 0x5a2c;
  FUN_10bf_26e0();
  puStack_8 = (undefined2 *)&stack0xfffa;
  puStack_a = &local_14;
  puStack_c = (undefined2 *)0x10bf;
  uStack_e = 0x5a3c;
  iVar3 = FUN_1f61_029a();
  if (-1 < iVar3) {
    puStack_8 = (undefined2 *)0x4;
    puStack_a = (undefined2 *)0x1e13;
    puStack_c = (undefined2 *)&stack0xfffa;
    uStack_e = 0x1f61;
    uStack_10 = 0x5a51;
    iVar3 = FUN_10bf_2278();
    if (iVar3 == 0) {
      puStack_8 = (undefined2 *)0x10bf;
      puStack_a = (undefined2 *)0x5a64;
      FUN_2581_03e0();
      puStack_8 = (undefined2 *)0x10bf;
      uVar6 = 0x1b63;
      puStack_a = (undefined2 *)0x5a69;
      FUN_1b63_0004();
      while( true ) {
        puStack_8 = (undefined2 *)&stack0xfffa;
        puStack_c = (undefined2 *)0x5a72;
        puStack_a = (undefined2 *)uVar6;
        uStack_28 = FUN_1f61_0428();
        if (in_DX < 0) break;
        puStack_8 = (undefined2 *)0x4;
        puStack_a = (undefined2 *)0x1e18;
        puStack_c = (undefined2 *)&stack0xfffa;
        uStack_e = 0x1f61;
        uStack_10 = 0x5a94;
        puStack_a = (undefined2 *)FUN_10bf_2278();
        if (puStack_a == (undefined2 *)0x0) {
          puStack_8 = (undefined2 *)0x5;
          puStack_c = &local_2e;
          uStack_e = 0x10bf;
          uStack_10 = 0x5aa7;
          FUN_10bf_2c3a();
          puStack_8 = (undefined2 *)uStack_28;
          puStack_a = &local_2e;
          puStack_c = (undefined2 *)0x10bf;
          uVar6 = 0x1f61;
          uStack_e = 0x5ab6;
          FUN_1f61_053c();
          puStack_8 = (undefined2 *)uStack_2a;
          puStack_a = (undefined2 *)uStack_2c;
          puStack_c = (undefined2 *)local_2e;
          uStack_e = 0x1f61;
          uStack_10 = 0x5ac6;
          FUN_2581_03ee();
        }
        else {
          puStack_8 = (undefined2 *)0x4;
          puStack_a = (undefined2 *)0x1e1d;
          puStack_c = (undefined2 *)&stack0xfffa;
          uStack_e = 0x10bf;
          uVar6 = 0x10bf;
          uStack_10 = 0x5ada;
          puStack_a = (undefined2 *)FUN_10bf_2278();
          if (puStack_a == (undefined2 *)0x0) {
            puStack_8 = (undefined2 *)0xd;
            puStack_c = local_3c;
            uStack_e = 0x10bf;
            uStack_10 = 0x5aed;
            FUN_10bf_2c3a();
            puStack_8 = (undefined2 *)uStack_28;
            puStack_a = local_3c;
            puStack_c = (undefined2 *)0x10bf;
            uStack_e = 0x5afc;
            FUN_1f61_053c();
            puVar5 = &local_14;
            puVar4 = local_3c;
            for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
              puVar2 = puVar5;
              puVar5 = puVar5 + 1;
              puVar1 = puVar4;
              puVar4 = puVar4 + 1;
              *puVar2 = *puVar1;
            }
            uVar6 = 0x1b63;
            uStack_18 = 0x5b13;
            FUN_1b63_0012();
          }
        }
      }
      puStack_8 = (undefined2 *)0x1f61;
      puStack_a = (undefined2 *)0x5b1f;
      FUN_1f61_040a();
      iStack_24 = *(int *)0xb832;
      if (iStack_24 == 5) {
        iStack_24 = 2;
      }
      puStack_8 = (undefined2 *)iStack_24;
      puStack_a = (undefined2 *)0x1e22;
      puStack_c = (undefined2 *)local_22;
      uStack_e = 0x1f61;
      uStack_10 = 0x5b3e;
      FUN_10bf_26e0();
      puStack_8 = (undefined2 *)local_22;
      puStack_a = (undefined2 *)0x1;
      puStack_c = (undefined2 *)0x10bf;
      uStack_e = 0x5b4c;
      FUN_1d02_0608();
      puStack_8 = &local_14;
      puStack_a = (undefined2 *)0x3;
      puStack_c = (undefined2 *)0x1d02;
      uStack_e = 0x5b5e;
      FUN_1d02_0608();
      if ((*(int *)0xb832 == 4) || (*(int *)0xb832 == 5)) {
        puStack_8 = (undefined2 *)0x3;
        puStack_a = (undefined2 *)0x1d02;
        puStack_c = (undefined2 *)0x5b75;
        FUN_2581_0686();
      }
      puStack_8 = (undefined2 *)0x0;
      puStack_a = (undefined2 *)0x0;
      puStack_c = (undefined2 *)0x0;
      uStack_e = 0x1d02;
      uStack_10 = 0x5b83;
      FUN_1b63_00da();
      puStack_8 = (undefined2 *)0x0;
      puStack_a = (undefined2 *)0x0;
      puStack_c = (undefined2 *)0x8a4;
      uStack_e = 0x72;
      uStack_10 = 0xdb;
      uStack_12 = 0;
      local_14 = 0;
      uStack_18 = 0x1b63;
      uStack_1a = 0x5b9e;
      thunk_EXT_FUN_0000_0000();
      return 0;
    }
  }
  return 0xffff;
}
