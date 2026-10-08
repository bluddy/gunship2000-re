/* GS.GS2 10bf:0c3e undefined FUN_10bf_0c3e(void) */
undefined2 __cdecl16near FUN_10bf_0c3e(int *param_1)

{
  undefined2 uVar1;
  int iVar2;
  int *piVar3;
  undefined2 unaff_DS;
  
  piVar3 = (int *)0x6a04;
  if ((((param_1 == (int *)0x68ca) || (piVar3 = (int *)0x6a06, param_1 == (int *)0x68d2)) ||
      (piVar3 = (int *)0x6a08, param_1 == (int *)0x68e2)) &&
     (((*(byte *)(param_1 + 3) & 0xc) == 0 && ((*(byte *)(param_1 + 0x50) & 1) == 0)))) {
    iVar2 = *piVar3;
    if (iVar2 == 0) {
      iVar2 = thunk_FUN_10bf_1ff3(0x200);
      if (iVar2 == 0) goto LAB_10bf_0cab;
      *piVar3 = iVar2;
    }
    param_1[2] = iVar2;
    *param_1 = iVar2;
    param_1[1] = 0x200;
    param_1[0x51] = 0x200;
    *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 2;
    *(byte *)(param_1 + 0x50) = 0x11;
    uVar1 = 1;
  }
  else {
LAB_10bf_0cab:
    uVar1 = 0;
  }
  return uVar1;
}
