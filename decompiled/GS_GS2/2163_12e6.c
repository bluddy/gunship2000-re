/* GS.GS2 2163:12e6 undefined FUN_2163_12e6(void) */
/* WARNING: Removing unreachable block (ram,0x0002297c) */

void __cdecl16far FUN_2163_12e6(void)

{
  undefined2 unaff_DS;
  undefined1 auStack_5e [2];
  undefined1 local_5c [78];
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined1 *puStack_a;
  int iVar1;
  undefined1 *puStack_4;
  
  FUN_10bf_02c0();
  puStack_a = (undefined1 *)0x0;
  for (iVar1 = 0; iVar1 < 4; iVar1 = iVar1 + 1) {
    if (-1 < *(char *)(iVar1 + -0x6c34)) {
      puStack_a = (undefined1 *)((int)puStack_a + 1);
    }
  }
  if (puStack_a != (undefined1 *)0x0) {
    FUN_1c87_01f6();
    puStack_a = (undefined1 *)0x2988;
    FUN_1c87_01f6();
    puStack_4 = local_5c;
    puStack_a = (undefined1 *)0x2997;
    FUN_1c87_01f6();
    for (iVar1 = 0; iVar1 < (int)puStack_4; iVar1 = iVar1 + 1) {
      puStack_a = local_5c;
      uStack_c = 0x1c87;
      uStack_e = 0x29cf;
      FUN_10bf_319c();
      puStack_4 = local_5c;
      iVar1 = 0x10bf;
      puStack_a = (undefined1 *)0x29de;
      FUN_1c87_01f6();
      if ((int)auStack_5e < 0x10c0) {
        if (puStack_4 == (undefined1 *)0x10c1) {
          puStack_4 = (undefined1 *)0x194d;
          iVar1 = 0x2a0b;
          FUN_1c87_01f6();
        }
      }
      else {
        puStack_4 = (undefined1 *)0x194a;
        iVar1 = 0x29f3;
        FUN_1c87_01f6();
      }
    }
    FUN_1c87_01f6();
    for (iVar1 = 0; iVar1 < (int)puStack_a; iVar1 = iVar1 + 1) {
      puStack_a = local_5c;
      uStack_c = 0x1c87;
      uStack_e = 0x2a4f;
      FUN_10bf_319c();
      iVar1 = 0x10bf;
      puStack_a = (undefined1 *)0x2a5e;
      FUN_1c87_01f6();
      if ((int)puStack_a + -2 < 0x10c0) {
        if (puStack_a == (undefined1 *)0x10c1) {
          iVar1 = 0x2a8b;
          FUN_1c87_01f6();
        }
      }
      else {
        iVar1 = 0x2a73;
        FUN_1c87_01f6();
      }
    }
    FUN_1c87_01f6();
  }
  return;
}
