/* GS2.GS2 137f:2f3a undefined FUN_137f_2f3a(void) */
void __cdecl16near FUN_137f_2f3a(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *in_BX;
  undefined2 unaff_DS;
  
  if (*in_BX != 0) {
    *in_BX = 0;
    iVar1 = in_BX[4] + (int)in_BX;
    in_BX[4] = iVar1;
    if (*(int *)(iVar1 + 0xc) != 0) {
      *(undefined2 *)(iVar1 + 0xc) = 0;
      *(int *)(iVar1 + 0xe) = *(int *)(iVar1 + 0xe) + iVar1;
      *(undefined2 *)(iVar1 + 0x10) = unaff_DS;
      *(int *)(iVar1 + 0x12) = *(int *)(iVar1 + 0x12) + iVar1;
      *(undefined2 *)(iVar1 + 0x14) = *(undefined2 *)(*(int *)(iVar1 + 0x14) * 2 + 0x1c8e);
    }
  }
  *(int *)0x1cb8 = (*(int *)0x1cad + in_BX[1]) - *(int *)0x1ca7;
  *(int *)0x1cba = in_BX[2] - *(int *)0x1ca9;
  uVar2 = (*(int *)0x1caf + in_BX[3]) - *(int *)0x1cab;
  *(uint *)0x1cbc = uVar2;
  uVar3 = (int)*(uint *)0x1cb8 >> 0xf;
  iVar1 = in_BX[4];
  if ((*(uint *)0x1c9c <=
       ((*(uint *)0x1cb8 ^ uVar3) - uVar3 >> 1) +
       ((uVar2 ^ (int)uVar2 >> 0xf) - ((int)uVar2 >> 0xf) >> 1) >> (*(byte *)0x44 & 0x1f)) &&
     (iVar1 = in_BX[5], iVar1 == 0)) {
    return;
  }
  *(int *)0x1ca5 = iVar1;
  if (*(int *)(iVar1 + 0x16) != 0) {
    *(int *)(iVar1 + 0x22) = -*(int *)0x1cbc;
    *(int *)(iVar1 + 0x20) = -*(int *)0x1cba;
    *(int *)(iVar1 + 0x1e) = -*(int *)0x1cb8;
  }
  FUN_137f_1423();
  iVar1 = *(int *)0x1ca5;
  uVar2 = *(int *)(iVar1 + 10) + *(int *)(iVar1 + 0xc);
  if (uVar2 < *(uint *)0x1ca0) {
    iVar4 = *(int *)(iVar1 + 2);
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    if (iVar4 <= (int)uVar2) {
      iVar4 = *(int *)(iVar1 + 6);
      if (iVar4 < 0) {
        iVar4 = -iVar4;
      }
      if (iVar4 <= (int)uVar2 >> 1) {
        *(int *)(DAT_137f_2888 + 0x288a) = iVar1;
        DAT_137f_2888 = DAT_137f_2888 + 2;
      }
    }
  }
  return;
}
