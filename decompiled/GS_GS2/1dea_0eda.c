/* GS.GS2 1dea:0eda undefined FUN_1dea_0eda(void) */
void __cdecl16far FUN_1dea_0eda(void)

{
  byte *pbVar1;
  undefined2 unaff_DS;
  int iVar2;
  
  FUN_10bf_02c0();
  for (iVar2 = 0; iVar2 < 0x14; iVar2 = iVar2 + 1) {
    pbVar1 = (byte *)((int)*(undefined4 *)0x9f18 + iVar2);
    *pbVar1 = *pbVar1 ^ 0x42;
  }
  FUN_2741_0702();
  if (*(char *)0x861a != '\0') {
    *(undefined1 *)0x861a = 0;
    thunk_EXT_FUN_0000_0000(0x2741);
  }
  if (*(char *)0xe287 != '\0') {
    FUN_23ed_0146();
  }
  if (*(char *)0x8611 == '\0') {
    FUN_24de_0008();
  }
  FUN_2000_006c();
  return;
}
