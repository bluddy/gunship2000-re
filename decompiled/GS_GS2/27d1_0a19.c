/* GS.GS2 27d1:0a19 undefined FUN_27d1_0a19(void) */
undefined2 __cdecl16far FUN_27d1_0a19(undefined2 *param_1)

{
  int *piVar1;
  undefined2 in_AX;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined2 uVar7;
  
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  *param_1 = DAT_27d1_0b72;
  iVar2 = DAT_27d1_0d2d + -1;
  iVar3 = 0;
  iVar4 = 0xd33;
  piVar5 = (undefined2 *)param_1 + 1;
  do {
    piVar6 = piVar5;
    if ((*(byte *)(iVar4 + 7) & 2) != 0) {
      piVar6 = piVar5 + 1;
      *piVar5 = iVar3;
      if ((*(byte *)(iVar4 + 7) & 8) != 0) {
        piVar1 = piVar6;
        piVar6 = piVar5 + 2;
        *piVar1 = *(int *)(*(int *)(iVar4 + 2) + 10);
      }
    }
    iVar4 = iVar4 + 0x12;
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + -1;
    piVar5 = piVar6;
  } while (iVar2 != 0);
  return in_AX;
}
