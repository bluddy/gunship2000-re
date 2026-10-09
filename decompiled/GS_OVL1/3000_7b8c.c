/* GS.GS2 3000:7b8c undefined FUN_3000_7b8c(void) */
undefined2 __cdecl16far FUN_3000_7b8c(void)

{
  uint uVar1;
  undefined2 unaff_DS;
  undefined1 local_1ce [452];
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined1 *puStack_6;
  
  puStack_6 = (undefined1 *)0x7b97;
  func_0x00000eb0();
  puStack_6 = (undefined1 *)0xbf;
  uStack_8 = 0x7ba0;
  FUN_3000_4080();
  puStack_6 = local_1ce;
  uStack_8 = 0xbf;
  uStack_a = 0x7baf;
  uVar1 = FUN_3000_4288();
  if (uVar1 < 0x9d42) {
    return 0xffff;
  }
  puStack_6 = (undefined1 *)*(undefined2 *)0x9dc;
  uStack_8 = 0xbf;
  uStack_a = 0x7bce;
  FUN_3000_12b0();
  return 0;
}
