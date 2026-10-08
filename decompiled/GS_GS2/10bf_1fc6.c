/* GS.GS2 10bf:1fc6 undefined thunk_FUN_10bf_1ff3(void) */
undefined2 __cdecl16far thunk_FUN_10bf_1ff3(uint param_1)

{
  undefined2 uVar1;
  bool bVar2;
  
  bVar2 = param_1 < 0xffe8;
  if (param_1 < 0xffe9) {
    uVar1 = FUN_10bf_201c();
    if (!bVar2) {
      return uVar1;
    }
    FUN_10bf_2098();
    if ((!bVar2) && (uVar1 = FUN_10bf_201c(), !bVar2)) {
      return uVar1;
    }
  }
  return 0;
}
