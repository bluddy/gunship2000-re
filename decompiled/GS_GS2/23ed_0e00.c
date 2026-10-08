/* GS.GS2 23ed:0e00 undefined FUN_23ed_0e00(void) */
void __cdecl16far FUN_23ed_0e00(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  int iStack_5c;
  undefined1 local_5a [74];
  undefined2 uStack_10;
  int iStack_e;
  undefined1 *puStack_c;
  undefined1 *puStack_a;
  int iStack_8;
  int iVar4;
  
  FUN_10bf_02c0();
  iVar4 = 0;
  iStack_5c = 0;
  puStack_a = (undefined1 *)0x10bf;
  for (iStack_8 = 0; iStack_8 < 4; iStack_8 = iStack_8 + 1) {
    iStack_8 = *(int *)(*(char *)(iStack_8 * 0x29 + -0x52aa) * 2 + *(int *)0x1a90);
    puStack_c = (undefined1 *)0x4d0b;
    iVar1 = FUN_1c87_04e8();
    if (iStack_5c < iVar1) {
      iStack_5c = iVar1;
    }
    puStack_a = (undefined1 *)0x1c87;
  }
  iVar1 = (int)puStack_a;
  for (iStack_8 = 0; iStack_8 < 4; iStack_8 = iStack_8 + 1) {
    iStack_8 = iStack_8 * 0x29 + -0x52cc;
    puStack_c = (undefined1 *)0x4d3a;
    puStack_a = (undefined1 *)iVar1;
    iVar1 = FUN_1c87_04e8();
    if (iVar4 < iVar1) {
      iVar4 = iVar1;
    }
    iVar1 = 0x1c87;
  }
  for (iStack_8 = 0; iStack_8 < 4; iStack_8 = iStack_8 + 1) {
    iVar2 = iStack_8 * 0x29;
    iVar3 = iVar1;
    if (*(char *)(iVar2 + -0x52aa) != '\0') {
      iStack_8 = iVar2 + -0x52b2;
      puStack_a = local_5a;
      iStack_e = 0x4d7a;
      puStack_c = (undefined1 *)iVar1;
      FUN_23ed_02d6();
      iStack_8 = 0;
      puStack_a = (undefined1 *)0x0;
      puStack_c = (undefined1 *)*(undefined2 *)(*(char *)(iVar2 + -0x52aa) * 2 + *(int *)0x1a90);
      uStack_10 = 0x4d95;
      iStack_e = iVar1;
      FUN_1c87_00ca();
      iStack_8 = iStack_5c + 4;
      puStack_a = (undefined1 *)0x0;
      puStack_c = (undefined1 *)(iVar2 + -0x52cc);
      iStack_e = 0x1c87;
      uStack_10 = 0x4dab;
      FUN_1c87_00ca();
      iStack_8 = (0xb4 - iVar4) - iStack_5c;
      puStack_a = local_5a;
      puStack_c = (undefined1 *)0x1c87;
      iStack_e = 0x4dc1;
      FUN_1c87_073a();
      iStack_8 = iVar4 + iStack_5c + 0xc;
      puStack_a = (undefined1 *)0x0;
      puStack_c = local_5a;
      iStack_e = 0x1c87;
      iVar3 = 0x1c87;
      uStack_10 = 0x4dd9;
      FUN_1c87_00ca();
    }
    iVar1 = 0x1c87;
    puStack_a = (undefined1 *)0x4de1;
    iStack_8 = iVar3;
    FUN_1c87_04b2();
  }
  return;
}
