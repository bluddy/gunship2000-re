/* GS.GS2 1bca:09bc undefined FUN_1bca_09bc(void) */
undefined2 __cdecl16far FUN_1bca_09bc(void)

{
  uint uVar1;
  undefined2 uStack_6;
  undefined2 uStack_4;
  
  FUN_10bf_02c0();
  uStack_4 = 0;
  uVar1 = uRam0000046c + 0x14;
  uStack_6 = uRam0000046e + (0xffeb < uRam0000046c);
  while( true ) {
    if ((uStack_6 < uRam0000046e) || ((uStack_6 <= uRam0000046e && (uVar1 <= uRam0000046c)))) break;
    uStack_6 = 0xc6a4;
    FUN_1bca_09a8();
    uStack_4 = 0x10c0;
  }
  return uStack_4;
}
