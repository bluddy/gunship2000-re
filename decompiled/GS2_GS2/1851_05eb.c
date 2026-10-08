/* GS2.GS2 1851:05eb undefined FUN_1851_05eb(void) */
void __cdecl16near FUN_1851_05eb(void)

{
  int iVar1;
  uint uVar2;
  undefined1 uVar3;
  
  uVar2 = 0;
  iVar1 = DAT_1851_0b6b;
  do {
    if (uVar2 <= DAT_1851_0b73) {
      uVar2 = DAT_1851_0b73;
    }
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  uVar3 = 0xff7f < uVar2;
  DAT_1851_0690 = uVar2 + 0x80;
  do {
    FUN_1851_0668();
  } while (!(bool)uVar3);
  DAT_1851_0692 = uVar2 + 0x80;
  return;
}
