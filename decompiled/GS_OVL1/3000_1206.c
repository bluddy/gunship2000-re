/* GS.GS2 3000:1206 undefined FUN_3000_1206(void) */
void __cdecl16far FUN_3000_1206(void)

{
  int iVar1;
  undefined2 unaff_DS;
  int iVar2;
  
  func_0x00000eb0();
  for (iVar2 = 0; iVar2 < 0xb; iVar2 = iVar2 + 1) {
    iVar1 = iVar2 * 10;
    FUN_3000_1346((int)*(char *)(iVar1 + 0x2b98),2,*(int *)(iVar1 + 0x2b99) + -1,
                  *(undefined2 *)(iVar1 + 0x2b9b),0);
    if (*(char *)(iVar1 + 0x2b98) < '\0') {
      FUN_3000_12b0(*(undefined2 *)0xa2c,*(undefined2 *)0xa2e);
    }
  }
  return;
}
