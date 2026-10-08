/* GS.GS2 212a:0000 undefined FUN_212a_0000(void) */
void __cdecl16far FUN_212a_0000(int param_1)

{
  int iVar1;
  uint uVar2;
  
  FUN_10bf_02c0();
  while (iVar1 = param_1 + -1, param_1 != 0) {
    do {
      uVar2 = FUN_10bf_2a30(0x3da);
    } while ((uVar2 & 8) == 0);
    do {
      uVar2 = FUN_10bf_2a30(0x3da);
      param_1 = iVar1;
    } while ((uVar2 & 8) != 0);
  }
  return;
}
