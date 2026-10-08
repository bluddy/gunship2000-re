/* GS.GS2 23ed:0c0a undefined FUN_23ed_0c0a(void) */
void __cdecl16far FUN_23ed_0c0a(int param_1)

{
  undefined2 unaff_DS;
  undefined1 local_7c [112];
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined1 *puStack_8;
  undefined1 *puStack_6;
  undefined2 uStack_4;
  
  uStack_4 = 0x23ed;
  puStack_6 = (undefined1 *)0x4ae5;
  FUN_10bf_02c0();
  if ((param_1 == 0) && ('\x01' < *(char *)(*(char *)0xe281 * 0x122 + -0x51cc))) {
    param_1 = 1;
  }
  uStack_4 = *(undefined2 *)(param_1 * 2 + 0x1da2);
  puStack_6 = local_7c;
  puStack_8 = (undefined1 *)0x10bf;
  uStack_a = 0x4b0f;
  FUN_10bf_21d6();
  if (param_1 < 2) {
    uStack_4 = 0x1d59;
    puStack_6 = local_7c;
    puStack_8 = (undefined1 *)0x10bf;
    uStack_a = 0x4b24;
    FUN_10bf_2196();
  }
  else {
    uStack_4 = 0x1d7c;
    puStack_6 = local_7c;
    puStack_8 = (undefined1 *)0x10bf;
    uStack_a = 0x4b36;
    FUN_10bf_2196();
  }
  uStack_4 = 0x1d90;
  puStack_6 = local_7c;
  puStack_8 = (undefined1 *)0x10bf;
  uStack_a = 0x4b45;
  FUN_10bf_2196();
  uStack_4 = 7;
  puStack_6 = (undefined1 *)0x3;
  puStack_8 = local_7c;
  uStack_a = 0x10bf;
  uStack_c = 0x4b55;
  FUN_24e6_088a();
  return;
}
