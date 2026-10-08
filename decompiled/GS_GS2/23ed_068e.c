/* GS.GS2 23ed:068e undefined FUN_23ed_068e(void) */
void __cdecl16far FUN_23ed_068e(int param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 local_26;
  int iStack_24;
  undefined2 uStack_22;
  int iStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  int iStack_14;
  undefined2 uStack_12;
  int iStack_10;
  int iStack_e;
  int iStack_c;
  int iStack_a;
  
  FUN_10bf_02c0();
  puVar5 = (undefined2 *)0xacb6;
  puVar4 = (undefined2 *)(param_1 * 0x122 + -0x5222);
  for (iVar3 = 0x91; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  iStack_a = 0x10bf;
  iStack_c = 0x4587;
  puVar5 = (undefined2 *)FUN_106f_0430();
  puVar4 = &local_26;
  for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar4;
    puVar4 = puVar4 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  iStack_a = uStack_1e;
  iStack_c = iStack_20 + -0x37;
  iStack_e = uStack_22;
  iStack_10 = iStack_24 + 0x37;
  uStack_12 = 0x880;
  iStack_14 = 0x106f;
  uStack_16 = 0x45b4;
  FUN_1c87_0050();
  iStack_a = iStack_24;
  iStack_c = 0x880;
  iStack_e = uStack_1e;
  iStack_10 = iStack_20;
  uStack_12 = uStack_22;
  iStack_14 = iStack_24;
  uStack_16 = 0x8a4;
  uStack_18 = 0x1c87;
  uStack_1a = 0x45d4;
  thunk_EXT_FUN_0000_0000();
  iStack_a = 0x2658;
  iStack_c = 0x45de;
  FUN_1c87_0110();
  iStack_a = 0x1c87;
  iStack_c = 0x45e8;
  FUN_1c87_00b8();
  iStack_a = 0x1c63;
  iStack_c = 0x1c87;
  iStack_e = 0x45f6;
  FUN_1c87_01f6();
  iStack_a = 0;
  iStack_c = 0x1c87;
  iStack_e = 0x4602;
  FUN_1c87_01a2();
  iStack_a = 0x1c68;
  iStack_c = 0x1c87;
  iStack_e = 0x4610;
  FUN_1c87_01f6();
  iStack_a = 0x1c87;
  iStack_c = 0x461a;
  FUN_1c87_0110();
  iStack_a = 0x1c87;
  iStack_c = 0x4624;
  FUN_1c87_0158();
  iStack_a = 0;
  iStack_c = 0x1c87;
  iStack_e = 0x4630;
  FUN_1c87_01a2();
  iStack_a = *(undefined2 *)0xad28;
  iStack_c = *(undefined2 *)0xad1e;
  iStack_e = *(undefined2 *)0xad1c;
  iStack_10 = *(undefined2 *)0xad22;
  uStack_12 = *(undefined2 *)0xad20;
  iStack_14 = 0x1c6d;
  uStack_16 = 0x1c87;
  uStack_18 = 0x4653;
  FUN_1c87_01f6();
  iStack_a = 100;
  iStack_c = *(undefined2 *)0xad26;
  iStack_e = *(undefined2 *)0xad24;
  iStack_10 = 0x1c87;
  uStack_12 = 0x4667;
  iStack_a = FUN_10bf_2fc8();
  iStack_c = 0x1c79;
  iStack_e = 0x10bf;
  iStack_10 = 0x4681;
  FUN_1c87_01f6();
  if ((*(char *)0xad05 == '\0') || (*(char *)0xad0c != '\x01')) {
    iStack_a = 100;
    iStack_c = *(undefined2 *)0xad26;
    iStack_e = *(undefined2 *)0xad24;
    iStack_10 = 0x1c87;
    uVar6 = 0x10bf;
    uStack_12 = 0x46b1;
    iStack_a = FUN_10bf_2efc();
    if (iStack_a != 0) {
      iStack_c = 0x1ca3;
      iStack_e = 0x10bf;
      uVar6 = 0x1c87;
      iStack_10 = 0x46cf;
      FUN_1c87_01f6();
    }
  }
  else {
    iStack_a = 0x1c87;
    uVar6 = 0x1c87;
    iStack_c = 0x469a;
    FUN_1c87_01e0();
  }
  iStack_a = 0;
  iStack_e = 0x46db;
  iStack_c = uVar6;
  FUN_1c87_01a2();
  iStack_a = 0x46e2;
  FUN_23ed_0e00();
  iStack_a = 0;
  iStack_c = 1;
  iStack_e = (int)*(char *)0xad09;
  iStack_10 = 0;
  uStack_12 = 0x1c87;
  iStack_14 = 0x46f4;
  FUN_206a_01c4();
  iStack_a = 0xfffe;
  iStack_c = 1;
  iStack_e = (int)*(char *)0xad0a;
  iStack_10 = 1;
  uStack_12 = 0x206a;
  iStack_14 = 0x4709;
  FUN_206a_01c4();
  iStack_a = 0x206a;
  iStack_c = 0x4713;
  FUN_23ed_0882();
  return;
}
