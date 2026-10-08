/* GS.GS2 106f:017a undefined FUN_106f_017a(void) */
undefined2 __cdecl16far FUN_106f_017a(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_DS;
  int iStack_4;
  
  FUN_10bf_02c0();
  iStack_4 = *(int *)0x79f4;
  do {
    iVar1 = iStack_4;
    iStack_4 = iVar1 + -1;
    if (iStack_4 < 0) break;
    iVar2 = iStack_4 * 0x24;
  } while ((((param_1 < *(int *)(iVar2 + 0x76de)) ||
            (*(int *)(iVar2 + 0x76de) + *(int *)(iVar2 + 0x76e2) + -1 < param_1)) ||
           (param_2 < *(int *)(iVar2 + 0x76e0))) ||
          (*(int *)(iVar2 + 0x76e0) + *(int *)(iVar2 + 0x76e4) + -1 < param_2));
  if (param_3 != 0x148) {
    if (param_3 < 0x149) {
      if (param_3 != 9) {
        if (param_3 == 0x10f) {
          iVar1 = iVar1 + -2;
        }
        else {
          iVar1 = iStack_4;
          if (param_3 == 0x147) {
            iStack_4 = 0;
            iVar1 = iStack_4;
          }
        }
      }
      goto LAB_106f_024e;
    }
    if ((param_3 != 0x14b) && (param_3 != 0x14d)) {
      if (param_3 == 0x14f) {
        iVar1 = *(int *)0x79f4;
        do {
          iVar1 = iVar1 + -1;
          if (iVar1 < 1) break;
        } while (*(int *)(iVar1 * 0x24 + 0x76e6) == 0);
        goto LAB_106f_024e;
      }
      iVar1 = iStack_4;
      if (param_3 != 0x150) goto LAB_106f_024e;
    }
  }
  iVar1 = FUN_106f_02bc(param_3);
LAB_106f_024e:
  iStack_4 = iVar1;
  if (iStack_4 < 0) {
    iStack_4 = *(int *)0x79f4 + -1;
  }
  iVar1 = iStack_4;
  if (*(int *)0x79f4 <= iStack_4) {
    iStack_4 = 0;
    iVar1 = iStack_4;
  }
  do {
    if (*(int *)(iStack_4 * 0x24 + 0x76e6) != 0) {
      return *(undefined2 *)(iStack_4 * 0x24 + 0x76dc);
    }
    if (param_3 == 0x10f) {
      iStack_4 = iStack_4 + -1;
      if (iStack_4 < 0) {
        iStack_4 = *(int *)0x79f4 + -1;
      }
    }
    else {
      iStack_4 = iStack_4 + 1;
      if (*(int *)0x79f4 <= iStack_4) {
        iStack_4 = 0;
      }
    }
  } while (iVar1 != iStack_4);
  return 0xffff;
}
