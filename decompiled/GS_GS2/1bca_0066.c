/* GS.GS2 1bca:0066 undefined FUN_1bca_0066(void) */
undefined2 __cdecl16far FUN_1bca_0066(void)

{
  int iVar1;
  undefined2 uVar2;
  
  FUN_10bf_02c0();
  iVar1 = FUN_10bf_1be6(0x41a,0x8000);
  if (-1 < iVar1) {
    uVar2 = 0x26;
    FUN_10bf_1d88(0x10bf,iVar1,0xbbe2,0x26);
    FUN_10bf_1b32(0x10bf,uVar2);
    return 0;
  }
  return 1;
}
