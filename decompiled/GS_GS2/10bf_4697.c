/* GS.GS2 10bf:4697 undefined FUN_10bf_4697(void) */
void __cdecl16near FUN_10bf_4697(void)

{
  uint uVar1;
  int iVar2;
  uint unaff_DI;
  
  iVar2 = 0x45e3;
  if ((int)unaff_DI < 0) {
    iVar2 = 0x463d;
    unaff_DI = -unaff_DI;
  }
  iVar2 = iVar2 + -10;
  while (iVar2 = iVar2 + 10, unaff_DI != 0) {
    uVar1 = unaff_DI & 1;
    unaff_DI = unaff_DI >> 1;
    if (uVar1 != 0) {
      FUN_10bf_4531(unaff_DI,iVar2);
    }
  }
  return;
}
