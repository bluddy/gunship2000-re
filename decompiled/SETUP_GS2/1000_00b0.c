/* SETUP.GS2 1000:00b0 undefined FUN_1000_00b0(void) */
void __cdecl16far FUN_1000_00b0(void)

{
  int iVar1;
  uint uVar2;
  undefined2 unaff_DS;
  
  FUN_111d_02c6();
  iVar1 = FUN_111d_06e2(0x663,0x660);
  if (iVar1 != 0) {
    uVar2 = (uint)*(byte *)(iVar1 + 7);
    iVar1 = FUN_111d_1a98(uVar2);
    if (iVar1 == 0x26) {
      FUN_111d_05fc(uVar2);
      FUN_1000_02f4();
    }
    else {
      FUN_111d_05fc(uVar2);
    }
  }
  *(undefined1 *)0x1d64 = 0;
  return;
}
