/* GS.GS2 23ed:09b8 undefined FUN_23ed_09b8(void) */
void __cdecl16far FUN_23ed_09b8(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 uVar7;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uStack_30;
  undefined2 local_26;
  int iStack_24;
  int iStack_22;
  int iStack_20;
  int iStack_1e;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  int iStack_12;
  int iStack_10;
  int iStack_e;
  int iStack_c;
  int iStack_a;
  
  FUN_10bf_02c0();
  iStack_a = 0x489a;
  FUN_2351_01fe();
  iStack_a = 0;
  iStack_c = 0xacb6;
  iStack_e = 0x2351;
  iStack_10 = 0x48ae;
  FUN_10bf_2c3a();
  *(undefined1 *)0xad04 = *(undefined1 *)(*(char *)0xe281 * 0x122 + -0x51d4);
  *(undefined1 *)0xad1a = 1;
  iStack_a = 0x48c9;
  FUN_23ed_0c88();
  iStack_a = 0x48cd;
  FUN_23ed_0cd0();
  iStack_a = 0x10bf;
  iStack_c = 0x48d3;
  FUN_23ed_0c0a();
  iStack_a = 0x10bf;
  iStack_c = 0x48dd;
  puVar3 = (undefined2 *)FUN_106f_0430();
  puVar6 = &local_26;
  for (iVar5 = 0x12; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar1 = puVar3;
    puVar3 = puVar3 + 1;
    *puVar2 = *puVar1;
  }
  iStack_a = 0x106f;
  iStack_c = 0x48f3;
  FUN_1c87_0110();
  iStack_a = 0x1c87;
  iStack_c = 0x48fd;
  FUN_1c87_00b8();
  uVar7 = 0x1c87;
  do {
    if (*(char *)0xacb6 != '\0') {
      iStack_c = 0x493c;
      iStack_a = uVar7;
      FUN_23ed_0c0a();
      iStack_a = iStack_22 + 10;
      iStack_c = iStack_24;
      iStack_10 = 0x4950;
      iStack_e = uVar7;
      iVar5 = FUN_23ed_0b26();
      if (iVar5 < 0) {
        return;
      }
      iStack_c = 0x4964;
      iStack_a = uVar7;
      FUN_23ed_0c0a();
      iStack_c = 0x496e;
      iStack_a = uVar7;
      FUN_1c87_0110();
      iStack_a = 0x1c87;
      iStack_c = 0x4978;
      FUN_1c87_00b8();
      uVar7 = 0x1c87;
      do {
        if (*(char *)0xacea != '\0') {
          uStack_30 = (undefined1)iVar5;
          *(undefined1 *)0xad09 = uStack_30;
          iStack_a = 0xacb6;
          iStack_e = 0x49c7;
          iStack_c = uVar7;
          FUN_2627_0000();
          *(undefined1 *)0xad0c = 1;
          puVar6 = (undefined2 *)(*(char *)0xe281 * 0x122 + -0x5222);
          puVar3 = (undefined2 *)0xacb6;
          for (iVar5 = 0x91; iVar5 != 0; iVar5 = iVar5 + -1) {
            puVar2 = puVar6;
            puVar6 = puVar6 + 1;
            puVar1 = puVar3;
            puVar3 = puVar3 + 1;
            *puVar2 = *puVar1;
          }
          return;
        }
        iStack_a = 0x19;
        iStack_c = 8;
        iStack_e = iStack_20 + -0x37;
        iStack_10 = iStack_22 + iStack_1e + -10;
        iStack_12 = iStack_24 + 2;
        uStack_14 = 0xacea;
        uStack_18 = 0x49a7;
        uStack_16 = uVar7;
        iVar4 = FUN_27d1_0f5a();
        uVar7 = 0x27d1;
      } while (iVar4 != 0x1b);
      return;
    }
    iStack_a = 0x23;
    iStack_c = 8;
    iStack_e = iStack_20 + -0x37;
    iStack_10 = iStack_22 + 2;
    iStack_12 = iStack_24 + 2;
    uStack_14 = 0xacb6;
    uStack_18 = 0x4928;
    uStack_16 = uVar7;
    iVar5 = FUN_27d1_0f5a();
    uVar7 = 0x27d1;
  } while (iVar5 != 0x1b);
  return;
}
