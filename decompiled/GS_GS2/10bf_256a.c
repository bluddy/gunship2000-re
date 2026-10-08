/* GS.GS2 10bf:256a undefined FUN_10bf_256a(void) */
int __cdecl16far FUN_10bf_256a(int *param_1)

{
  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  undefined2 unaff_DS;
  long lVar4;
  long lVar5;
  int iStack_e;
  int iStack_a;
  int iStack_6;
  
  uVar1 = (uint)*(byte *)((int)param_1 + 7);
  if (param_1[1] < 0) {
    param_1[1] = 0;
  }
  lVar4 = FUN_10bf_1b52(0x10bf,uVar1,0,0,1);
  iStack_6 = (int)lVar4;
  if (lVar4 < 0) {
LAB_10bf_25b0:
    iStack_a = -1;
  }
  else {
    if (((*(byte *)(param_1 + 3) & 8) == 0) && ((*(byte *)(param_1 + 0x50) & 1) == 0)) {
      return iStack_6 - param_1[1];
    }
    iStack_a = *param_1 - param_1[2];
    if ((*(byte *)(param_1 + 3) & 3) == 0) {
      if ((*(byte *)(param_1 + 3) & 0x80) == 0) {
        *(undefined2 *)0x6864 = 0x16;
        goto LAB_10bf_25b0;
      }
    }
    else if ((*(byte *)(uVar1 + 0x6873) & 0x80) != 0) {
      for (pcVar3 = (char *)param_1[2]; pcVar3 < (char *)*param_1; pcVar3 = pcVar3 + 1) {
        if (*pcVar3 == '\n') {
          iStack_a = iStack_a + 1;
        }
      }
    }
    if (lVar4 != 0) {
      if ((*(byte *)(param_1 + 3) & 1) != 0) {
        if (param_1[1] == 0) {
          iStack_a = 0;
        }
        else {
          iStack_e = (*param_1 - param_1[2]) + param_1[1];
          if ((*(byte *)(uVar1 + 0x6873) & 0x80) != 0) {
            lVar5 = FUN_10bf_1b52(0x10bf,uVar1,0,0,2);
            if (lVar5 == lVar4) {
              pcVar2 = (char *)(iStack_e + param_1[2]);
              for (pcVar3 = (char *)param_1[2]; pcVar3 < pcVar2; pcVar3 = pcVar3 + 1) {
                if (*pcVar3 == '\n') {
                  iStack_e = iStack_e + 1;
                }
              }
              if ((*(byte *)(param_1 + 0x50) & 0x20) != 0) {
                iStack_e = iStack_e + 1;
              }
            }
            else {
              FUN_10bf_1b52(0x10bf,uVar1,lVar4,0);
              iStack_e = param_1[0x51];
              if ((*(byte *)(uVar1 + 0x6873) & 4) != 0) {
                iStack_e = iStack_e + 1;
              }
            }
          }
          iStack_6 = iStack_6 - iStack_e;
        }
      }
      iStack_a = iStack_6 + iStack_a;
    }
  }
  return iStack_a;
}
