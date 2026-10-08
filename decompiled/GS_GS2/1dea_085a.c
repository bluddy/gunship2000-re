/* GS.GS2 1dea:085a undefined FUN_1dea_085a(void) */
void __cdecl16far FUN_1dea_085a(void)

{
  undefined2 unaff_DS;
  int iVar1;
  
  FUN_10bf_02c0();
  if (*(char *)0xad1b == '\0') {
    *(byte *)0xbb9c = *(byte *)0xbb9c & 0xcb;
    for (iVar1 = 0; iVar1 < 4; iVar1 = iVar1 + 1) {
      *(byte *)(iVar1 + -0x4456) = *(byte *)(iVar1 + -0x4456) & 0xcb;
    }
    return;
  }
  FUN_27d1_0f14(0x10bf);
  return;
}
