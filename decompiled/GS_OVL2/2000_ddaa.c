/* GS.GS2 2000:ddaa undefined FUN_2000_ddaa(void) */
void __cdecl16far FUN_2000_ddaa(void)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_DS;
  int iStackY_12;
  
  func_0x00000eb0();
  FUN_2000_eda8();
  for (iStackY_12 = 0; iStackY_12 <= *(int *)0xb838; iStackY_12 = iStackY_12 + 1) {
    iVar1 = func_0x00015bac();
    if ((-1 < iVar1) && (iVar2 = func_0x00012b00(), iVar2 != 0)) {
      iVar2 = iVar1 * 0xfc + *(int *)0xb83a;
      if (*(char *)0xad0a < *(char *)(iVar2 + 5)) {
        iStackY_12 = 0x1163;
        FUN_2000_ec42(iVar2 + 0x26);
      }
      else {
        iStackY_12 = 0x1163;
        FUN_2000_ec42(iVar1 * 0xfc + *(int *)0xb83a + 0x26);
      }
    }
  }
  FUN_2000_ee40();
  FUN_2000_ef58();
  return;
}
