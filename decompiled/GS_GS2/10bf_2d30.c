/* GS.GS2 10bf:2d30 undefined FUN_10bf_2d30(void) */
uint __cdecl16far FUN_10bf_2d30(void)

{
  uint uVar1;
  undefined2 unaff_DS;
  long lVar2;
  
  lVar2 = FUN_10bf_2f96(*(undefined2 *)0x6ba0,*(undefined2 *)0x6ba2,0x43fd,3);
  uVar1 = (uint)((ulong)(lVar2 + 0x269ec3) >> 0x10);
  *(undefined2 *)0x6ba0 = (int)(lVar2 + 0x269ec3);
  *(uint *)0x6ba2 = uVar1;
  return uVar1 & 0x7fff;
}
