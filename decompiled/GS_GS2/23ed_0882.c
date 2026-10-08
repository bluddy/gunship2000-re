/* GS.GS2 23ed:0882 undefined FUN_23ed_0882(void) */
void __cdecl16far FUN_23ed_0882(int param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 local_3e [12];
  int iStack_32;
  int iStack_30;
  int iStack_2e;
  int iStack_2c;
  int iStack_2a;
  int iStack_28;
  undefined2 local_26;
  int iStack_24;
  int iStack_22;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  int iStack_e;
  undefined1 *puStack_c;
  undefined1 *puStack_a;
  
  FUN_10bf_02c0();
  puStack_a = (undefined1 *)0x10bf;
  puStack_c = (undefined1 *)0x4766;
  puVar3 = (undefined2 *)FUN_106f_0430();
  puVar5 = &local_26;
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar3;
    puVar3 = puVar3 + 1;
    *puVar2 = *puVar1;
  }
  iStack_2c = iStack_24 + 0x7e;
  iStack_2e = iStack_22 + 9;
  puStack_a = (undefined1 *)0x5;
  puStack_c = (undefined1 *)0x140;
  iStack_e = iStack_22 + 0x18;
  uStack_10 = 0;
  uStack_12 = 0x880;
  uStack_14 = 0x106f;
  uStack_16 = 0x479c;
  FUN_1c87_0050();
  puStack_a = (undefined1 *)0x1c87;
  puStack_c = (undefined1 *)0x47a6;
  FUN_1c87_0110();
  puStack_a = (undefined1 *)0x1c87;
  uVar6 = 0x1c87;
  puStack_c = (undefined1 *)0x47b0;
  FUN_1c87_00b8();
  iStack_32 = 0;
  for (iStack_28 = 0; iStack_28 < 9; iStack_28 = iStack_28 + 1) {
    uStack_10 = uVar6;
    if (iStack_28 == 8) {
      iStack_2c = iStack_24 + 0xeb;
      iStack_2e = iStack_2e + -6;
      iStack_30 = -*(int *)0xad82;
      if (iStack_30 != 0) {
        iStack_2a = 0x14;
        puStack_c = (undefined1 *)0x0;
        iStack_e = 6;
        uStack_12 = 0x47f8;
        puStack_a = (undefined1 *)iStack_2c;
        FUN_206a_00da();
        uVar6 = 0x206a;
      }
    }
    else {
      iStack_30 = (int)*(char *)(param_1 + iStack_28);
      if (iStack_30 == 0) {
        iStack_2a = 0;
      }
      else {
        iStack_2a = (int)*(char *)(iStack_28 + 0x1a82);
        puStack_a = (undefined1 *)iStack_2c;
        puStack_c = (undefined1 *)iStack_28;
        iStack_e = 3;
        uStack_12 = 0x4824;
        FUN_206a_00da();
        uVar6 = 0x206a;
      }
    }
    if (1 < iStack_30) {
      puStack_a = (undefined1 *)0x1cb8;
      puStack_c = local_3e;
      uStack_10 = 0x4844;
      iStack_e = uVar6;
      FUN_10bf_26e0();
      puStack_a = local_3e;
      puStack_c = (undefined1 *)0x10bf;
      iStack_e = 0x4852;
      iVar4 = FUN_1c87_04e8();
      puStack_a = (undefined1 *)(-(iVar4 - iStack_2a) / 2 + iStack_2c);
      puStack_c = (undefined1 *)0x1c87;
      iStack_e = 0x4868;
      FUN_1c87_01a2();
      puStack_a = (undefined1 *)0x1c87;
      uVar6 = 0x1c87;
      puStack_c = (undefined1 *)0x4874;
      FUN_1c87_01e0();
    }
    iStack_2c = iStack_2c + iStack_2a + 1;
    iStack_32 = iStack_32 + 1;
  }
  return;
}
