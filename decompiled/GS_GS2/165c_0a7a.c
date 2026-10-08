/* GS.GS2 165c:0a7a undefined FUN_165c_0a7a(void) */
undefined2 __cdecl16far FUN_165c_0a7a(int *param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  undefined2 uStackY_c;
  int iVar4;
  int iVar5;
  
  FUN_10bf_02c0();
  iVar1 = FUN_165c_0b44(*param_1,*param_2,param_3,param_4);
  if (iVar1 != 0) {
    return 0xffff;
  }
  iVar1 = 1;
  do {
    if (0x1d < iVar1) {
      return 0;
    }
    iVar2 = *param_1 + iVar1;
    uStackY_c = *param_2 + iVar1;
    for (iVar5 = 0; iVar5 < 4; iVar5 = iVar5 + 1) {
      for (iVar4 = 0; iVar1 * 2 - iVar4 != 0 && iVar4 <= iVar1 * 2; iVar4 = iVar4 + 1) {
        iVar4 = uStackY_c;
        iVar1 = param_3;
        iVar5 = param_4;
        iVar3 = FUN_165c_0b44();
        if (iVar3 != 0) {
          *param_1 = iVar2;
          *param_2 = 0x10bf;
          return 0xffff;
        }
        iVar2 = iVar2 + *(char *)(iVar5 + 0x114);
        uStackY_c = *(char *)(iVar5 + 0x118) + 0x10bf;
      }
    }
    iVar1 = iVar1 + 1;
  } while( true );
}
