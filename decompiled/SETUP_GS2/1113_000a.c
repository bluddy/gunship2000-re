/* SETUP.GS2 1113:000a undefined FUN_1113_000a(void) */
undefined2 __cdecl16far FUN_1113_000a(void)

{
  int iVar1;
  undefined2 uVar2;
  
  FUN_111d_02c6();
  iVar1 = FUN_111d_1146(0x904,0x8201);
  if (iVar1 < 1) {
    iVar1 = FUN_111d_1146(0x90e,0x8101,0x80);
  }
  if (iVar1 < 1) {
    return 1;
  }
  uVar2 = 0x26;
  FUN_111d_13d2(0x111d,iVar1,0x1d32,0x26);
  FUN_111d_1092(0x111d,uVar2);
  return 0;
}
