/* GS.GS2 1dea:0232 undefined FUN_1dea_0232(void) */
void __cdecl16far FUN_1dea_0232(void)

{
  byte *pbVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  int iVar4;
  
  FUN_10bf_02c0();
  thunk_EXT_FUN_0000_0000(0x10bf,0);
  FUN_1d02_02d0();
  FUN_1d02_051c();
  FUN_1c6b_0014();
  FUN_27d1_0e7e(0x1c6b);
  FUN_1dea_0f8a();
  uVar3 = 0x10bf;
  FUN_10bf_30d2(*(undefined2 *)0x9f18,*(undefined2 *)0x9f1a,*(int *)0x9f18 + 10,
                *(undefined2 *)0x9f1a,10);
  for (iVar4 = 0; iVar4 < 0x14; iVar4 = iVar4 + 1) {
    pbVar1 = (byte *)((int)*(undefined4 *)0x9f18 + iVar4);
    *pbVar1 = *pbVar1 ^ 0xdd;
  }
  iVar4 = 0;
  do {
    if (5 < iVar4) {
LAB_1dea_02d2:
      if ((*(char *)0x860f != '\0') || (*(char *)0x861d != '\0')) {
        FUN_27d1_0e74(uVar3);
        uVar3 = 0x27d1;
        FUN_27d1_0e6a(0x27d1);
      }
      if (*(char *)0x861e != '\0') {
        FUN_27d1_0e60(uVar3,(int)*(char *)0x8618);
        FUN_1dea_0564();
        return;
      }
      if (*(char *)0x861d != '\0') {
        FUN_1dea_0c0e();
        return;
      }
      FUN_1dea_0400();
      FUN_20bc_0020(0x81a);
      FUN_27d1_0e4c(0x20bc,(int)*(char *)0x8618);
      return;
    }
    iVar2 = (int)*(char *)((int)*(undefined4 *)0x9f18 + 4 + iVar4);
    if ((iVar2 != 0) && ((iVar2 < 0x30 || (0x39 < iVar2)))) {
      uVar3 = 0x27d1;
      FUN_27d1_0e56(0x10bf,iVar2);
      goto LAB_1dea_02d2;
    }
    iVar4 = iVar4 + 1;
  } while( true );
}
