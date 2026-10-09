/* GS.GS2 2000:ec0a undefined FUN_2000_ec0a(void) */
undefined2 __cdecl16far FUN_2000_ec0a(void)

{
  undefined2 unaff_DS;
  int iVar1;
  
  func_0x00000eb0();
  iVar1 = 0;
  while ((*(byte *)((int)*(undefined4 *)0xb860 + iVar1 * 0x27 + 0x23) & 0x40) == 0) {
    iVar1 = iVar1 + 1;
  }
  *(int *)0xc394 = iVar1;
  iVar1 = 0;
  while ((uint)*(byte *)(iVar1 * 8 + (int)*(undefined4 *)0xb85c) !=
         *(uint *)((int)*(undefined4 *)0xb860 + *(int *)0xc394 * 0x27 + 0x19)) {
    iVar1 = iVar1 + 1;
  }
  *(int *)0xc392 = iVar1;
  iVar1 = func_0x00027b8c(0xbf,iVar1);
  if (iVar1 != 0) {
    iVar1 = func_0x000224c4(0x20f4,*(undefined2 *)0xc392,0xffff);
    if (iVar1 != 0) {
      iVar1 = *(int *)0xc018;
      *(undefined2 *)(iVar1 * 0xb + -0x4362) = *(undefined2 *)0xc394;
      *(undefined2 *)(iVar1 * 0xb + -0x4360) = *(undefined2 *)0xc392;
      return 0xffff;
    }
  }
  return 0;
}
