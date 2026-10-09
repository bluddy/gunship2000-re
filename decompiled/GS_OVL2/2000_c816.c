/* GS.GS2 2000:c816 undefined FUN_2000_c816(void) */
bool __cdecl16far FUN_2000_c816(void)

{
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int iStack_12;
  int iStack_10;
  int iStack_e;
  int aiStack_c [4];
  
  aiStack_c[3] = 0xc821;
  func_0x00000eb0();
  if (*(char *)0xe282 < '\x05') {
    return false;
  }
  iStack_12 = 0;
  for (iStack_e = 0; iStack_e < 5; iStack_e = iStack_e + 1) {
    for (iStack_10 = 0;
        (iStack_10 < iStack_12 &&
        ((int)*(char *)(iStack_e * 0x24 + -0x4518) != aiStack_c[iStack_10]));
        iStack_10 = iStack_10 + 1) {
    }
    if (iStack_12 == iStack_10) {
      aiStack_c[iStack_12] = (int)*(char *)(iStack_e * 0x24 + -0x4518);
      iStack_12 = iStack_12 + 1;
    }
  }
  return 3 < iStack_12;
}
