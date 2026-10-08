/* GS.GS2 2163:07d8 undefined FUN_2163_07d8(void) */
undefined2 __cdecl16far FUN_2163_07d8(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 local_54 [18];
  int iStack_30;
  undefined2 local_2e [17];
  
  FUN_10bf_02c0();
  iStack_30 = (int)*(char *)0x93d7;
  if (iStack_30 == *(char *)0x93d6) {
    *(undefined1 *)0x93d4 = 0;
    return 1;
  }
  if (*(char *)0x93d4 == '\x01') {
    iVar9 = iStack_30 * 0x29;
    uVar3 = *(undefined2 *)(iVar9 + -0x52d0);
    uVar4 = *(undefined2 *)(iVar9 + -0x52ce);
    iVar10 = *(char *)0x93d6 * 0x29;
    uVar5 = *(undefined2 *)(iVar10 + -0x52d0);
    uVar6 = *(undefined2 *)(iVar10 + -0x52ce);
    puVar7 = (undefined2 *)(iVar9 + -0x52f5);
    puVar12 = local_2e;
    puVar11 = puVar7;
    for (iVar8 = 0x14; iVar8 != 0; iVar8 = iVar8 + -1) {
      puVar2 = puVar12;
      puVar12 = puVar12 + 1;
      puVar1 = puVar11;
      puVar11 = puVar11 + 1;
      *puVar2 = *puVar1;
    }
    *(undefined1 *)puVar12 = *(undefined1 *)puVar11;
    puVar11 = (undefined2 *)(iVar10 + -0x52f5);
    puVar12 = puVar11;
    for (iVar8 = 0x14; iVar8 != 0; iVar8 = iVar8 + -1) {
      puVar2 = puVar7;
      puVar7 = puVar7 + 1;
      puVar1 = puVar12;
      puVar12 = puVar12 + 1;
      *puVar2 = *puVar1;
    }
    *(undefined1 *)puVar7 = *(undefined1 *)puVar12;
    puVar12 = local_2e;
    for (iVar8 = 0x14; iVar8 != 0; iVar8 = iVar8 + -1) {
      puVar2 = puVar11;
      puVar11 = puVar11 + 1;
      puVar1 = puVar12;
      puVar12 = puVar12 + 1;
      *puVar2 = *puVar1;
    }
    *(undefined1 *)puVar11 = *(undefined1 *)puVar12;
    *(undefined2 *)(iVar9 + -0x52d0) = uVar3;
    *(undefined2 *)(iVar9 + -0x52ce) = uVar4;
    *(undefined2 *)(iVar10 + -0x52d0) = uVar5;
    *(undefined2 *)(iVar10 + -0x52ce) = uVar6;
    FUN_2163_0e44();
    FUN_2163_0e44();
  }
  else {
    puVar7 = (undefined2 *)(*(char *)0x93d7 * 0x24 + -0x4518);
    puVar12 = local_54;
    puVar11 = puVar7;
    for (iVar8 = 0x12; iVar8 != 0; iVar8 = iVar8 + -1) {
      puVar2 = puVar12;
      puVar12 = puVar12 + 1;
      puVar1 = puVar11;
      puVar11 = puVar11 + 1;
      *puVar2 = *puVar1;
    }
    if (*(char *)0x93d9 == '\0') {
      puVar12 = (undefined2 *)(*(char *)0x93d6 * 0x24 + -0x4518);
      for (iVar8 = 0x12; iVar8 != 0; iVar8 = iVar8 + -1) {
        puVar2 = puVar7;
        puVar7 = puVar7 + 1;
        puVar1 = puVar12;
        puVar12 = puVar12 + 1;
        *puVar2 = *puVar1;
      }
    }
    puVar11 = (undefined2 *)(*(char *)0x93d6 * 0x24 + -0x4518);
    puVar12 = local_54;
    for (iVar8 = 0x12; iVar8 != 0; iVar8 = iVar8 + -1) {
      puVar2 = puVar11;
      puVar11 = puVar11 + 1;
      puVar1 = puVar12;
      puVar12 = puVar12 + 1;
      *puVar2 = *puVar1;
    }
  }
  *(undefined1 *)0x93d4 = 0;
  *(undefined1 *)0x93d9 = 0;
  return 1;
}
