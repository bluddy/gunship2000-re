/* GS.GS2 2000:ab70 undefined FUN_2000_ab70(void) */
void __cdecl16far FUN_2000_ab70(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int iStack_28;
  undefined2 local_26;
  undefined2 uStack_24;
  int iStack_22;
  undefined2 uStack_20;
  int iStack_1e;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  int iStack_c;
  int iStack_a;
  
  func_0x00000eb0();
  iStack_a = 0xbf;
  iStack_c = 0xab85;
  iVar3 = func_0x00014e66();
  if (iVar3 < 0) {
    return;
  }
  iStack_a = 0x14e6;
  iStack_c = 0xab97;
  func_0x0000dd4a();
  iStack_a = 0xd02;
  iStack_c = 0xaba2;
  func_0x0000d5d0();
  iStack_a = 1;
  iStack_c = 0xd02;
  uStack_e = 0xabae;
  func_0x000165e8();
  *(undefined2 *)0xb60f = 1;
  for (iStack_28 = 0; iStack_28 < 4; iStack_28 = iStack_28 + 1) {
    iStack_a = iStack_28;
    iStack_c = 0x1658;
    uStack_e = 0xabd0;
    FUN_2000_ae4a();
  }
  iStack_a = 0x1658;
  iStack_c = 0xabdc;
  FUN_2000_b4f2();
  iStack_a = 0x1658;
  uVar6 = 0x6f;
  iStack_c = 0xabe6;
  puVar4 = (undefined2 *)func_0x00000b20();
  puVar5 = &local_26;
  for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  if (*(int *)0x8c8 != 0) {
    iStack_a = uStack_20;
    iStack_c = iStack_22;
    uStack_e = uStack_24;
    uStack_10 = 0x6f;
    uVar6 = 0xef4;
    uStack_12 = 0xac0d;
    func_0x0000ef70();
  }
  iStack_c = 0xac19;
  iStack_a = uVar6;
  puVar4 = (undefined2 *)func_0x00000b20();
  puVar5 = &local_26;
  for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  *(undefined2 *)0xb60b = uStack_24;
  *(int *)0xb60d = iStack_1e / 2 + iStack_22 + -1;
  iStack_a = 0x6f;
  iStack_c = 0xac44;
  func_0x000157e2();
  iStack_a = 0;
  iStack_c = 8;
  uStack_e = 0x14e6;
  uStack_10 = 0xac52;
  func_0x000157f4();
  iStack_a = 3;
  iStack_c = 0x4ff2;
  uStack_e = 0x14e6;
  uStack_10 = 0xac61;
  func_0x000156ea();
  iStack_a = 0;
  iStack_c = 0x1ab5;
  uStack_e = 0xfea;
  uStack_10 = 0x14e6;
  uStack_12 = 0xac73;
  func_0x000156c4();
  iStack_a = 0xac7b;
  func_0x0001534e();
  iStack_a = 0x14e6;
  iStack_c = 0xac82;
  func_0x0000dd2e();
  return;
}
