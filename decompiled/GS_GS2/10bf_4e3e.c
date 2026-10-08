/* GS.GS2 10bf:4e3e undefined FUN_10bf_4e3e(void) */
void __cdecl16far FUN_10bf_4e3e(void)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined2 unaff_DS;
  
  iVar1 = *(int *)0x6ea8;
  uVar3 = (uint)*(byte *)(iVar1 + -2);
  if ((*(byte *)(uVar3 + iVar1) & 0x7f) == 0) {
    if (*(byte *)(iVar1 + -2) == 3) {
      bVar2 = *(byte *)(uVar3 + iVar1 + -1) & 0x80;
    }
    else {
      bVar2 = *(byte *)(uVar3 + iVar1 + -1) & 0xf0;
    }
    if (bVar2 == 0) {
      return;
    }
  }
  if ((*(byte *)(uVar3 + iVar1) & 0x80) != 0) {
    return;
  }
  return;
}
