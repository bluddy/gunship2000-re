/* GS.GS2 1b1d:0190 undefined FUN_1b1d_0190(void) */
void __cdecl16far FUN_1b1d_0190(void)

{
  undefined2 unaff_DS;
  undefined1 local_10 [4];
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined1 *puStack_8;
  int iStack_6;
  undefined1 *puStack_4;
  
  puStack_4 = (undefined1 *)0x1b1d;
  iStack_6 = 0xb36b;
  FUN_10bf_02c0();
  puStack_4 = (undefined1 *)0x9;
  iStack_6 = (int)*(char *)0xad04;
  puStack_8 = local_10;
  uStack_a = 0x10bf;
  uStack_c = 0xb37a;
  FUN_1b1d_0314();
  puStack_4 = local_10;
  iStack_6 = 0x10bf;
  puStack_8 = (undefined1 *)0xb386;
  FUN_165c_2f80();
  *(undefined1 *)0xad05 = 2;
  return;
}
