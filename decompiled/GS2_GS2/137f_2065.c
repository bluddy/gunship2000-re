/* GS2.GS2 137f:2065 undefined FUN_137f_2065(void) */
int __cdecl16near FUN_137f_2065(void)

{
  int iVar1;
  int iVar2;
  int in_AX;
  int in_DX;
  int *in_BX;
  undefined2 unaff_DS;
  
  if (in_AX == 0) {
    if (-1 < in_DX) {
      FUN_137f_2109();
    }
    return 0;
  }
  iVar1 = *in_BX;
  if (iVar1 == in_BX[4]) {
    iVar1 = in_BX[2];
    if (iVar1 == in_BX[6]) {
      return in_AX;
    }
    if ((iVar1 != *(int *)0xea) && (iVar1 != *(int *)0xec)) {
      return in_AX;
    }
    FUN_137f_2109();
    return in_AX;
  }
  iVar2 = in_BX[2];
  if (iVar2 == in_BX[6]) {
    if ((iVar1 != *(int *)0xea) && (iVar1 != *(int *)0xec)) {
      return in_AX;
    }
    FUN_137f_2109();
    return in_AX;
  }
  if ((iVar1 == *(int *)0xea) || (iVar1 == *(int *)0xec)) {
    FUN_137f_2109();
  }
  if ((iVar2 != *(int *)0xea) && (iVar2 != *(int *)0xec)) {
    return in_AX;
  }
  FUN_137f_2109();
  return in_AX;
}
