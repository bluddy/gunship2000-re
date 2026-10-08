/* GS.GS2 27d1:06c3 undefined FUN_27d1_06c3(void) */
void __cdecl16near FUN_27d1_06c3(void)

{
  int iVar1;
  uint uVar2;
  undefined1 uVar3;
  
  uVar2 = 0;
  iVar1 = DAT_27d1_0d2d;
  do {
    if (uVar2 <= DAT_27d1_0d35) {
      uVar2 = DAT_27d1_0d35;
    }
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  uVar3 = 0xff7f < uVar2;
  DAT_27d1_0768 = uVar2 + 0x80;
  do {
    FUN_27d1_0740();
  } while (!(bool)uVar3);
  DAT_27d1_076a = uVar2 + 0x80;
  return;
}
