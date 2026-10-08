/* SETUP.GS2 111d:1553 undefined FUN_111d_1553(void) */
undefined2 __cdecl16far FUN_111d_1553(uint param_1)

{
  undefined2 uVar1;
  bool bVar2;
  
  bVar2 = param_1 < 0xffe8;
  if (param_1 < 0xffe9) {
    uVar1 = FUN_111d_157c();
    if (!bVar2) {
      return uVar1;
    }
    FUN_111d_15f8();
    if ((!bVar2) && (uVar1 = FUN_111d_157c(), !bVar2)) {
      return uVar1;
    }
  }
  return 0;
}
