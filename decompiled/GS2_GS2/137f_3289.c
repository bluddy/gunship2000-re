/* GS2.GS2 137f:3289 undefined FUN_137f_3289(void) */
void __cdecl16far FUN_137f_3289(uint *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  byte bVar3;
  byte bVar4;
  byte *in_BX;
  int *piVar5;
  undefined2 unaff_ES;
  undefined2 uVar6;
  undefined2 unaff_DS;
  
  FUN_137f_2b6c();
  *(int *)0x1cb1 = (*param_1 & 0x1fff) - 0x1000;
  *(uint *)0x1cb3 = param_1[4];
  *(int *)0x1cb5 = (param_1[2] & 0x1fff) - 0x1000;
  *(int *)0x1ca7 = (*param_2 - *param_1) + *(int *)0x1cb1;
  *(int *)0x1ca9 = param_2[4];
  *(int *)0x1cab = (param_2[2] - param_1[2]) + *(int *)0x1cb5;
  piVar2 = (int *)*(undefined4 *)((uint)*in_BX * 4 + 0x44f4);
  uVar6 = (undefined2)((ulong)piVar2 >> 0x10);
  piVar5 = (int *)piVar2;
  while( true ) {
    while( true ) {
      iVar1 = *piVar5;
      if (iVar1 == 0) {
        return;
      }
      if ((piVar5[1] == 0) || (piVar5[1] <= *(int *)0x1ca9)) break;
      piVar5 = piVar5 + iVar1 * 2 + 6;
    }
    piVar5 = piVar5 + 2;
    bVar3 = FUN_137f_0cd0(iVar1);
    bVar4 = bVar3 & 1;
    if ((bVar3 & 1) != 0) break;
    bVar3 = FUN_137f_0cd0();
    piVar5 = piVar5 + 4;
    if (((bVar3 & 1) == 0) && (bVar4 != 0)) {
      return;
    }
  }
  return;
}
