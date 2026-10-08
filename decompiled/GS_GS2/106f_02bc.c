/* GS.GS2 106f:02bc undefined FUN_106f_02bc(void) */
int __cdecl16far FUN_106f_02bc(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined2 unaff_DS;
  int iStackY_18;
  int iStackY_12;
  int iStackY_10;
  
  FUN_10bf_02c0();
  iStackY_18 = param_1;
  param_1 = param_1 * 0x24;
  iVar1 = *(int *)(param_1 + 0x76e2);
  iVar2 = *(int *)(param_1 + 0x76de);
  iVar3 = *(int *)(param_1 + 0x76e4) / 2 + *(int *)(param_1 + 0x76e0);
  for (iStackY_10 = 0; iStackY_10 < *(int *)0x79f4; iStackY_10 = iStackY_10 + 1) {
    iVar6 = iStackY_10 * 0x24;
    if (*(int *)(iVar6 + 0x76e6) != 0) {
      iVar5 = (*(int *)(iVar6 + 0x76e2) / 2 + *(int *)(iVar6 + 0x76de)) - (iVar1 / 2 + iVar2);
      iVar6 = (*(int *)(iVar6 + 0x76e4) / 2 + *(int *)(iVar6 + 0x76e0)) - iVar3;
      iStackY_12 = -1;
      if (param_2 == 0x148) {
        if ((iVar6 < 0) && (iVar3 = iVar5, iVar4 = FUN_10bf_2cc8(), iVar4 < -iVar6)) {
          iStackY_12 = iStackY_10;
        }
      }
      else if (param_2 == 0x14b) {
        if ((iVar5 < 0) && (iVar3 = iVar6, iVar4 = FUN_10bf_2cc8(), iVar4 <= -iVar5)) {
          iStackY_12 = iStackY_10;
        }
      }
      else if (param_2 == 0x14d) {
        if ((0 < iVar5) && (iVar3 = iVar6, iVar4 = FUN_10bf_2cc8(), iVar4 <= iVar5)) {
          iStackY_12 = iStackY_10;
        }
      }
      else if (((param_2 == 0x150) && (0 < iVar6)) &&
              (iVar3 = iVar5, iVar4 = FUN_10bf_2cc8(), iVar4 < iVar6)) {
        iStackY_12 = iStackY_10;
      }
      if (iStackY_12 == iStackY_10) {
        iVar5 = FUN_10bf_2cc8(iVar5);
        iVar4 = FUN_10bf_2cc8();
        iVar3 = iVar6;
        if (iVar5 + iVar4 < 0x10bf) {
          iStackY_18 = iStackY_10;
        }
      }
    }
  }
  return iStackY_18;
}
