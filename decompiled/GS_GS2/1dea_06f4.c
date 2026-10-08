/* GS.GS2 1dea:06f4 undefined FUN_1dea_06f4(void) */
/* WARNING: Removing unreachable block (ram,0x0001e5b2) */

undefined2 __cdecl16far FUN_1dea_06f4(void)

{
  int iVar1;
  undefined2 unaff_DS;
  long lVar2;
  
  FUN_10bf_02c0();
  lVar2 = FUN_10bf_2fc8(*(undefined2 *)0xad24,*(undefined2 *)0xad26,100,0);
  if (lVar2 < 0x32) {
    return 0;
  }
  if ((*(char *)0xad1b == '\x04') && (iVar1 = FUN_1b1d_01ec(), iVar1 == 0)) {
    return 0;
  }
  return 1;
}
