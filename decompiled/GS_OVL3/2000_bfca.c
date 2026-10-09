/* GS.GS2 2000:bfca undefined FUN_2000_bfca(void) */
int __cdecl16far FUN_2000_bfca(void)

{
  undefined2 unaff_DS;
  undefined2 uStack_6;
  int iVar1;
  
  func_0x00000eb0();
  iVar1 = 0;
  for (uStack_6 = 0; (int)uStack_6 < 0x50; uStack_6 = uStack_6 + 1) {
    if ((*(int *)(uStack_6 * 0x20 + -0x5d65) < 0) &&
       ((*(char *)((int)uStack_6 / 2 + -0x4446) >> (-((uStack_6 & 1) != 0) & 4U) & 0xfU) == 1)) {
      iVar1 = iVar1 + 1;
    }
  }
  return iVar1;
}
