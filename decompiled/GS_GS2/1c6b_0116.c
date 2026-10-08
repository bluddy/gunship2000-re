/* GS.GS2 1c6b:0116 undefined FUN_1c6b_0116(void) */
void __cdecl16far FUN_1c6b_0116(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int iStack_128;
  undefined2 local_124 [137];
  undefined2 uStack_12;
  undefined2 uStack_10;
  int iStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  
  FUN_10bf_02c0();
  puVar3 = (undefined2 *)(*(char *)0xe281 * 0x122 + -0x5222);
  puVar5 = (undefined2 *)0xacb6;
  puVar6 = puVar3;
  for (iVar4 = 0x91; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  if (*(char *)0xe281 != '\0') {
    puVar5 = local_124;
    puVar6 = puVar3;
    for (iVar4 = 0x91; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar2 = puVar5;
      puVar5 = puVar5 + 1;
      puVar1 = puVar6;
      puVar6 = puVar6 + 1;
      *puVar2 = *puVar1;
    }
    puVar5 = (undefined2 *)0xadde;
    for (iVar4 = 0x91; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar2 = puVar3;
      puVar3 = puVar3 + 1;
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar2 = *puVar1;
    }
    *(undefined1 *)0xe281 = 0;
    puVar6 = (undefined2 *)0xadde;
    puVar5 = local_124;
    for (iVar4 = 0x91; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar2 = puVar6;
      puVar6 = puVar6 + 1;
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar2 = *puVar1;
    }
  }
  uStack_a = 0x1a6c;
  uStack_c = 0x10bf;
  iStack_e = -0x37d2;
  iVar4 = FUN_10bf_06dc();
  if (iVar4 != 0) {
    for (iStack_128 = 0; iStack_128 < 7; iStack_128 = iStack_128 + 1) {
      uStack_a = 1;
      uStack_c = 0x122;
      iStack_e = iStack_128 * 0x122 + -0x5222;
      uStack_10 = 0x10bf;
      uStack_12 = 0xc865;
      FUN_10bf_0828();
    }
    uStack_a = 0x10bf;
    uStack_c = 0xc873;
    FUN_10bf_05f6();
  }
  return;
}
