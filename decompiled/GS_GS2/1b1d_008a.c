/* GS.GS2 1b1d:008a undefined FUN_1b1d_008a(void) */
void __cdecl16far FUN_1b1d_008a(int param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  
  FUN_10bf_02c0();
  iVar1 = FUN_24e6_0006(*(undefined2 *)(param_1 * 2 + 700));
  if (iVar1 < 0) {
    return;
  }
  FUN_1d02_0d2a(1);
  FUN_24e6_088a(0x2c0,3,7);
  FUN_24e6_0864(0x332,0x1b1d,0x3d6,0x1b1d);
  FUN_24e6_05ae();
  FUN_1d02_05b0(*(undefined2 *)(param_1 * 2 + 700));
  FUN_1d02_0d0e(1);
  return;
}
