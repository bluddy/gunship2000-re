/* GS.GS2 1b1d:023e undefined FUN_1b1d_023e(void) */
int __cdecl16far FUN_1b1d_023e(void)

{
  undefined2 unaff_DS;
  undefined2 uStack_34;
  undefined2 uStack_8;
  undefined2 uStack_6;
  undefined2 uStack_4;
  
  FUN_10bf_02c0();
  if (((*(byte *)0xbb9c & 1) != 0) && ((*(byte *)0xbb9c & 2) != 0)) {
    return 200;
  }
  uStack_6 = 0;
  uStack_34 = 0;
  for (uStack_8 = 0; (int)uStack_8 < 0x50; uStack_8 = uStack_8 + 1) {
    if (((*(byte *)(uStack_8 * 0x20 + -0x5d76) < 0x10) &&
        (*(char *)(uStack_8 * 0x20 + -0x5d75) != '\0')) ||
       ((*(byte *)(uStack_8 * 0x20 + -0x5d80) & 0x70) != 0)) {
      uStack_34 = uStack_34 + 1;
      if ((*(char *)((int)uStack_8 / 2 + -0x4446) >> (-((uStack_8 & 1) != 0) & 4U) & 0xfU) != 0) {
        uStack_6 = uStack_6 + 1;
      }
    }
  }
  uStack_4 = 100;
  if (uStack_34 != 0) {
    uStack_4 = (uStack_6 * 100) / uStack_34;
  }
  return uStack_4;
}
