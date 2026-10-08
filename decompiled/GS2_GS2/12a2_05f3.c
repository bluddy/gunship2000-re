/* GS2.GS2 12a2:05f3 undefined FUN_12a2_05f3(void) */
undefined2 __cdecl16far FUN_12a2_05f3(uint param_1)

{
  undefined2 uVar1;
  bool bVar2;
  
  bVar2 = param_1 < 0xffe8;
  if (param_1 < 0xffe9) {
    uVar1 = FUN_12a2_0716();
    if (!bVar2) {
      return uVar1;
    }
    FUN_12a2_0792();
    if ((!bVar2) && (uVar1 = FUN_12a2_0716(), !bVar2)) {
      return uVar1;
    }
  }
  return 0;
}
