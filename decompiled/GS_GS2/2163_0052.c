/* GS.GS2 2163:0052 undefined FUN_2163_0052(void) */
void __cdecl16far FUN_2163_0052(void)

{
  int iVar1;
  undefined2 unaff_DS;
  
  FUN_10bf_02c0();
  iVar1 = FUN_24e6_0006(0x101a);
  if (iVar1 < 0) {
    return;
  }
  FUN_1d02_068c(1);
  thunk_EXT_FUN_0000_0000(0x1d02,1,0);
  for (iVar1 = 0; iVar1 < 5; iVar1 = iVar1 + 1) {
    FUN_2163_173a(iVar1 * 0x24 + -0x4518);
    iVar1 = 0;
    FUN_2163_0900(0);
  }
  *(undefined1 *)0x93d4 = 0;
  *(undefined1 *)0x93d9 = 0;
  *(int *)0xb60f = *(char *)0x93d6 + 1;
  FUN_2163_06e8(0);
  FUN_2163_05a2(0);
  FUN_2163_1a10(0,0);
  FUN_24e6_0864(0x182e,0x2163,0x18f0,0x2163);
  FUN_2163_1a8c(0);
  FUN_24e6_04ee();
  return;
}
