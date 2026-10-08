/* GS.GS2 1dea:0334 undefined FUN_1dea_0334(void) */
void __cdecl16far FUN_1dea_0334(void)

{
  undefined2 unaff_DS;
  
  FUN_10bf_02c0();
  FUN_1d02_05de();
  FUN_1d02_0d2a(0);
  FUN_1000_0000();
  FUN_1d02_0608(1,*(undefined2 *)(*(int *)0xb832 * 2 + 0x84a));
  if (*(int *)0xb832 == 5) {
    FUN_2581_0686(1);
  }
  FUN_1d02_05b0(*(undefined2 *)(*(int *)0xb832 * 2 + 0x84a));
  FUN_24e6_0864(0x3de,0x1dea,0,0);
  FUN_24e6_05ae();
  FUN_24e6_088a(0x847,3,7);
  FUN_1d02_0d0e(1);
  *(undefined2 *)0x8614 = 0;
  while( true ) {
    FUN_24e6_07aa();
    if (*(int *)0xb611 != 0x110) break;
    FUN_1dea_0ebe();
  }
  return;
}
