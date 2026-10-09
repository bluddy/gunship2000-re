/* GS2.GS2 1000:eb24 undefined FUN_1000_eb24(void) */
int __cdecl16far FUN_1000_eb24(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_SS;
  
  iVar3 = 0;
  iVar1 = param_1 * 5;
  if ((((*(uint *)(iVar1 + 0x2d31) < 0x1000) && (*(uint *)(iVar1 + 0x2d33) < 0x2000)) &&
      (iVar1 = (int)*(char *)(iVar1 + 0x2d30), (*(byte *)(iVar1 * 0xe + 0x642) & 7) == 2)) &&
     ((iVar3 = iVar1 + 1, *(byte *)0x593c != param_2 &&
      ((*(byte *)(iVar1 * 0x18 + 0x2582) & 0x70) != 0)))) {
    iVar3 = 0;
  }
  if (iVar3 == 0) {
    iVar1 = 0;
    do {
      param_1 = (byte)((char)param_1 + 1) & 7;
      if (((*(byte *)0x593c == param_2) ||
          (((DAT_2000_7d89 == 0 || (*(char *)(param_1 * 5 + 0x2d30) - DAT_2000_7d89 != -1)) &&
           ((*(byte *)(*(char *)(param_1 * 5 + 0x2d30) * 0x18 + 0x2582) & 0x70) == 0)))) &&
         (((iVar2 = param_1 * 5, *(uint *)(iVar2 + 0x2d31) < 0x1000 &&
           (*(uint *)(iVar2 + 0x2d33) < 0x2000)) &&
          ((*(byte *)(*(char *)(iVar2 + 0x2d30) * 0xe + 0x642) & 7) == 2)))) {
        iVar3 = *(char *)(param_1 * 5 + 0x2d30) + 1;
        break;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 8);
  }
  if ((*(byte *)0x593c == param_2) && (iVar3 != 0)) {
    if ((*(byte *)(iVar3 * 0xe + 0x635) & 0x10) != 0) {
      iVar1 = 0;
      do {
        param_1 = (byte)((char)param_1 + 1) & 7;
        iVar2 = param_1 * 5;
        if (((*(uint *)(iVar2 + 0x2d31) < 0x1000) && (*(uint *)(iVar2 + 0x2d33) < 0x2000)) &&
           ((iVar2 = *(char *)(iVar2 + 0x2d30) * 0xe, (*(byte *)(iVar2 + 0x642) & 7) == 2 &&
            ((*(byte *)(iVar2 + 0x643) & 0x10) == 0)))) {
          iVar3 = *(char *)(param_1 * 5 + 0x2d30) + 1;
          break;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < 8);
    }
    DAT_2000_7d85 = (byte)((char)param_1 + 1) & 7;
  }
  return iVar3;
}
