/* GS.GS2 1ef4:034e undefined FUN_1ef4_034e(void) */
void __cdecl16far FUN_1ef4_034e(void)

{
  int iVar1;
  undefined2 unaff_DS;
  
  FUN_10bf_02c0();
  iVar1 = *(int *)0x8624;
  if (iVar1 < *(int *)0x8620) {
    iVar1 = *(int *)0x8620;
    *(int *)0x8624 = iVar1;
  }
  if (*(int *)0x8622 < iVar1) {
    *(undefined2 *)0x8624 = *(undefined2 *)0x8622;
  }
  iVar1 = *(int *)0x8626;
  if (iVar1 < *(int *)0x863a) {
    iVar1 = *(int *)0x863a;
    *(int *)0x8626 = iVar1;
  }
  if (*(int *)0x8638 < iVar1) {
    *(undefined2 *)0x8626 = *(undefined2 *)0x8638;
  }
  return;
}
