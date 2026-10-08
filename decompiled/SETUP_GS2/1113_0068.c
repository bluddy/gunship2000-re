/* SETUP.GS2 1113:0068 undefined FUN_1113_0068(void) */
undefined2 __cdecl16far FUN_1113_0068(void)

{
  int iVar1;
  undefined2 uVar2;
  
  FUN_111d_02c6();
  iVar1 = FUN_111d_1146(0x918,0x8000);
  if (-1 < iVar1) {
    uVar2 = 0x26;
    FUN_111d_12e8(0x111d,iVar1,0x1d32,0x26);
    FUN_111d_1092(0x111d,uVar2);
    return 0;
  }
  return 1;
}
