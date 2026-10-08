/* GS2.GS2 137f:2275 undefined FUN_137f_2275(void) */
void __cdecl16near FUN_137f_2275(uint param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined2 unaff_DS;
  
  uVar1 = param_1 >> 3;
  iVar2 = (param_2 - param_1) - uVar1;
  if (*(int *)0xec < iVar2) {
    return;
  }
  if ((int)(iVar2 + param_1 * 2 + uVar1) < *(int *)0xea) {
    return;
  }
  iVar2 = param_3 - param_1;
  if (*(int *)0xf0 <= iVar2) {
    return;
  }
  if (iVar2 < *(int *)0xee) {
    if ((int)(iVar2 + param_1 * 2) < *(int *)0xee) {
      return;
    }
    iVar2 = *(int *)0xee;
  }
  *(int *)0x196a = iVar2;
  iVar7 = param_1 * -2 + 3;
  iVar2 = 0;
  do {
    while( true ) {
      iVar5 = iVar2;
      iVar2 = (param_2 - param_1) - uVar1;
      if (iVar2 < *(int *)0xea) {
        iVar2 = *(int *)0xea;
      }
      iVar3 = param_2 + param_1 + uVar1;
      if (*(int *)0xec < iVar3) {
        iVar3 = *(int *)0xec;
      }
      if (*(int *)0xee <= param_3 - iVar5) {
        iVar4 = (param_3 - iVar5) * 4;
        *(int *)(iVar4 + 0x196c) = iVar2;
        *(int *)(iVar4 + 0x196e) = iVar3;
      }
      if (param_3 + iVar5 <= *(int *)0xf0) {
        iVar4 = (param_3 + iVar5) * 4;
        *(int *)(iVar4 + 0x196c) = iVar2;
        *(int *)(iVar4 + 0x196e) = iVar3;
      }
      if (iVar7 < 0) break;
      iVar2 = (param_2 - iVar5) - uVar1;
      if (iVar2 < *(int *)0xea) {
        iVar2 = *(int *)0xea;
      }
      iVar3 = param_2 + iVar5 + uVar1;
      if (*(int *)0xec < iVar3) {
        iVar3 = *(int *)0xec;
      }
      if (*(int *)0xee <= (int)(param_3 - param_1)) {
        iVar4 = (param_3 - param_1) * 4;
        *(int *)(iVar4 + 0x196c) = iVar2;
        *(int *)(iVar4 + 0x196e) = iVar3;
      }
      if ((int)(param_3 + param_1) <= *(int *)0xf0) {
        iVar4 = (param_3 + param_1) * 4;
        *(int *)(iVar4 + 0x196c) = iVar2;
        *(int *)(iVar4 + 0x196e) = iVar3;
      }
      iVar7 = iVar7 + (iVar5 - param_1) * 4 + 10;
      param_1 = param_1 - 1;
      iVar2 = iVar5 + 1;
      if ((int)param_1 <= iVar5 + 1) goto LAB_137f_23b7;
    }
    iVar7 = iVar7 + iVar5 * 4 + 6;
    iVar2 = iVar5 + 1;
  } while (iVar5 + 1 < (int)param_1);
LAB_137f_23b7:
  uVar6 = iVar5 + 1;
  if (param_1 == uVar6) {
    iVar2 = (param_2 - param_1) - uVar1;
    if (iVar2 < *(int *)0xea) {
      iVar2 = *(int *)0xea;
    }
    iVar7 = param_2 + param_1 + uVar1;
    if (*(int *)0xec < iVar7) {
      iVar7 = *(int *)0xec;
    }
    if (*(int *)0xee <= (int)(param_3 - uVar6)) {
      iVar5 = (param_3 - uVar6) * 4;
      *(int *)(iVar5 + 0x196c) = iVar2;
      *(int *)(iVar5 + 0x196e) = iVar7;
    }
    if ((int)(param_3 + uVar6) <= *(int *)0xf0) {
      iVar5 = (param_3 + uVar6) * 4;
      *(int *)(iVar5 + 0x196c) = iVar2;
      *(int *)(iVar5 + 0x196e) = iVar7;
    }
    return;
  }
  return;
}
