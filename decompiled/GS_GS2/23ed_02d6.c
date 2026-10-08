/* GS.GS2 23ed:02d6 undefined FUN_23ed_02d6(void) */
void __cdecl16far FUN_23ed_02d6(undefined1 *param_1,int param_2)

{
  undefined2 unaff_DS;
  undefined1 local_12 [2];
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined1 *puStack_c;
  undefined2 uStack_a;
  undefined1 *puStack_8;
  undefined1 *puStack_6;
  
  puStack_6 = (undefined1 *)0x41b1;
  FUN_10bf_02c0();
  *param_1 = 0;
  for (puStack_8 = (undefined1 *)0x0; (int)puStack_8 < 8; puStack_8 = puStack_8 + 1) {
    puStack_6 = (undefined1 *)(int)(char)puStack_8[param_2];
    if (0 < (int)puStack_6) {
      puStack_8 = (undefined1 *)*(undefined2 *)((int)puStack_8 * 2 + *(int *)0x1a8c);
      if ((int)puStack_6 < 2) {
        uStack_a = 0x1c1c;
      }
      else {
        uStack_a = 0x1c16;
      }
      puStack_c = local_12;
      uStack_e = 0x10bf;
      uStack_10 = 0x4203;
      FUN_10bf_26e0();
      puStack_6 = local_12;
      puStack_8 = param_1;
      uStack_a = 0x10bf;
      puStack_c = (undefined1 *)0x4212;
      FUN_10bf_2196();
    }
  }
  return;
}
