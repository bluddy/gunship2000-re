/* GS.GS2 1d02:0072 undefined FUN_1d02_0072(void) */
void __cdecl16far FUN_1d02_0072(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  int iVar4;
  
  uVar2 = 0x10bf;
  FUN_10bf_02c0();
  for (iVar4 = 0; iVar4 < 4; iVar4 = iVar4 + 1) {
    *(undefined1 *)(iVar4 * 10 + -0x43f8) = 0;
  }
  for (iVar4 = 1; iVar4 < 5; iVar4 = iVar4 + 1) {
    uVar3 = 0x2658;
    iVar1 = thunk_EXT_FUN_0000_0000(uVar2);
    *(int *)(iVar4 * 2 + -0x43d2) = iVar1;
    if (iVar1 == 0) {
      FUN_10bf_01d5(0xfffd);
      iVar4 = 0x44f;
      uVar3 = 0x24de;
      FUN_24de_005e();
    }
    iVar4 = *(int *)(iVar4 * 2 + -0x43d2);
    uVar2 = 0x2658;
    thunk_EXT_FUN_0000_0000(uVar3,iVar4);
  }
  return;
}
