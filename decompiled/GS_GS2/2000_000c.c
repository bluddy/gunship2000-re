/* GS.GS2 2000:000c undefined FUN_2000_000c(void) */
void __cdecl16far FUN_2000_000c(void)

{
  undefined2 uVar1;
  undefined2 in_DX;
  undefined2 unaff_DS;
  
  FUN_10bf_02c0();
  DAT_0000_0417 = DAT_0000_0417 & 0xdf;
  *(undefined1 *)0x86f5 = 0;
  *(undefined2 *)0x86fc = 0;
  *(undefined2 *)0x86fa = 0;
  *(undefined1 *)0xe286 = 0;
  *(undefined1 *)0xe285 = 0;
  *(undefined1 *)0xe284 = 0;
  *(undefined1 *)0x86f8 = 0;
  *(undefined1 *)0x86f7 = 0;
  *(undefined1 *)0x86f9 = 0;
  *(undefined1 *)0x86f4 = 0;
  *(undefined1 *)0x86f6 = 0;
  *(undefined1 *)0x86fe = 0;
  uVar1 = FUN_10bf_2e26(9);
  *(undefined2 *)0x8700 = uVar1;
  *(undefined2 *)0x8702 = in_DX;
  FUN_10bf_2ebe(9,0x98,0x2000);
  return;
}
