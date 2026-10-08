/* GS.GS2 27d1:0a6d undefined FUN_27d1_0a6d(void) */
int __cdecl16far FUN_27d1_0a6d(undefined2 *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint extraout_DX;
  int in_BX;
  int *piVar5;
  
  DAT_27d1_0b72 = *param_1;
  iVar3 = param_2 + -2;
  uVar4 = (uint)DAT_27d1_0d04;
  DAT_27d1_0d04 = 0;
  piVar2 = (undefined2 *)param_1 + 1;
  while (piVar5 = piVar2, iVar3 != 0) {
    piVar2 = piVar5 + 1;
    iVar3 = iVar3 + -2;
    FUN_27d1_025c();
    FUN_27d1_067b();
    uVar4 = extraout_DX;
    if ((*(byte *)(in_BX + 7) & 8) != 0) {
      piVar5 = piVar5 + 2;
      iVar1 = *piVar2;
      iVar3 = iVar3 + -2;
      *(int *)(*(int *)(in_BX + 2) + 10) = iVar1;
      piVar2 = piVar5;
      if (iVar1 == 0) {
        *(byte *)(in_BX + 7) = *(byte *)(in_BX + 7) & 0xef;
      }
      else {
        *(byte *)(in_BX + 7) = *(byte *)(in_BX + 7) | 0x10;
      }
    }
  }
  DAT_27d1_0d04 = (char)uVar4;
  return param_2;
}
