/* GS.GS2 2000:ccb2 undefined FUN_2000_ccb2(void) */
void __cdecl16far FUN_2000_ccb2(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  int *piVar6;
  undefined2 uVar7;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int iVar8;
  int iStack_2a;
  int iStack_28;
  undefined2 local_26 [2];
  int iStack_22;
  int iStack_1e;
  uint uStack_1c;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  int iStack_e;
  undefined2 uStack_c;
  int iStack_a;
  
  func_0x00000eb0();
  iStack_a = *(undefined2 *)0x988c;
  uStack_c = *(undefined2 *)0x9890;
  iStack_e = *(undefined2 *)0x9896;
  uStack_10 = *(undefined2 *)0x9894;
  uStack_12 = 6;
  uStack_14 = 0xbf;
  uVar7 = 0xd02;
  uStack_16 = 0xccd8;
  func_0x0000da72();
  if (*(char *)0x98aa < '\r') {
    for (iStack_2a = 0xd; iStack_2a < 0xf; iStack_2a = iStack_2a + 1) {
      uStack_c = 0xccfb;
      iStack_a = uVar7;
      puVar3 = (undefined2 *)func_0x00000b20();
      puVar5 = local_26;
      for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
        puVar2 = puVar5;
        puVar5 = puVar5 + 1;
        puVar1 = puVar3;
        puVar3 = puVar3 + 1;
        *puVar2 = *puVar1;
      }
      uStack_1c = 0;
      piVar6 = &iStack_2a;
      puVar5 = local_26;
      for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
        puVar2 = piVar6;
        piVar6 = piVar6 + 1;
        puVar1 = puVar5;
        puVar5 = puVar5 + 1;
        *puVar2 = *puVar1;
      }
      uVar7 = 0x6f;
      func_0x00000770(0x6f);
    }
    return;
  }
  if (*(char *)0x98aa + -0xc < (int)*(char *)0x98ab) {
    *(char *)0x98ab = *(char *)0x98aa + -0xc;
  }
  iStack_28 = ((int)*(char *)0x98ab * *(int *)0x988c) / (int)*(char *)0x98aa;
  iStack_a = (*(int *)0x988c * 0xc) / (int)*(char *)0x98aa;
  uStack_c = *(undefined2 *)0x9890;
  iStack_e = iStack_28 + *(int *)0x9896;
  uStack_10 = *(undefined2 *)0x9894;
  uStack_12 = 1;
  uStack_14 = 0xd02;
  uStack_16 = 0xcd86;
  func_0x0000da72();
  iStack_a = 0xd02;
  uStack_c = 0xcd90;
  puVar3 = (undefined2 *)func_0x00000b20();
  puVar5 = local_26;
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar3;
    puVar3 = puVar3 + 1;
    *puVar2 = *puVar1;
  }
  iStack_1e = iStack_28;
  uStack_1c = (uint)(0 < iStack_28);
  piVar6 = &iStack_2a;
  puVar5 = local_26;
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = piVar6;
    piVar6 = piVar6 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  iVar8 = 0x6f;
  func_0x00000770();
  iStack_a = 0x6f;
  uStack_c = 0xcdcf;
  puVar3 = (undefined2 *)func_0x00000b20();
  puVar5 = local_26;
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar3;
    puVar3 = puVar3 + 1;
    *puVar2 = *puVar1;
  }
  iStack_22 = iVar8 + *(int *)0x9896 + iStack_28;
  iStack_1e = (*(int *)0x988c - (iStack_22 - *(int *)0x9896)) + -1;
  uStack_1c = (uint)(0 < iStack_1e);
  piVar6 = &iStack_2a;
  puVar5 = local_26;
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = piVar6;
    piVar6 = piVar6 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  func_0x00000770(0x6f);
  return;
}
