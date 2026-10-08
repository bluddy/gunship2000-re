/* GS.GS2 23ed:034c undefined FUN_23ed_034c(void) */
void __cdecl16far FUN_23ed_034c(void)

{
  int iVar1;
  undefined2 unaff_DS;
  uint uVar2;
  
  FUN_10bf_02c0();
  iVar1 = FUN_24e6_0006(0x1c20);
  if (iVar1 < 0) {
    return;
  }
  FUN_1d02_068c(3);
  FUN_1d02_058a(0x880,0x8a4);
  iVar1 = 0;
  while (iVar1 < 6) {
    uVar2 = (uint)(iVar1 == 0);
    FUN_23ed_052c(uVar2);
    iVar1 = uVar2 + 1;
  }
  *(undefined1 *)0xe281 = 0;
  FUN_23ed_0c0a(0);
  FUN_24e6_04ee();
  return;
}
