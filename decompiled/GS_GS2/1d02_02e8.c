/* GS.GS2 1d02:02e8 undefined FUN_1d02_02e8(void) */
undefined2 __cdecl16far FUN_1d02_02e8(void)

{
  undefined2 uVar1;
  int iVar2;
  
  FUN_10bf_02c0();
  thunk_EXT_FUN_0000_0000(0x10bf);
  thunk_EXT_FUN_0000_0000(0x2658,0x880,0x50,0x4b,0xa0,0x50,0x28,0xa0);
  uVar1 = thunk_EXT_FUN_0000_0000(0x2658,1,0x50,0x4b,0xa0,0x28);
  thunk_EXT_FUN_0000_0000(0x2658);
  FUN_1d02_0236(0x474);
  FUN_1f32_00a6();
  FUN_1f32_000a();
  FUN_2658_0131(0x1f32,0x880,0x50,0x4b,uVar1);
  FUN_212a_003c(uVar1);
  iVar2 = 0x4b;
  thunk_EXT_FUN_0000_0000(0x212a,0x880,0x50,0x4b,0xa0,0x28,0x86e,0x50,0x4b);
  if ((iVar2 == 0x59) || (iVar2 == 0x79)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
