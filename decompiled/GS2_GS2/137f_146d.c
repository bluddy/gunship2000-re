/* GS2.GS2 137f:146d undefined FUN_137f_146d(void) */
void __cdecl16near FUN_137f_146d(void)

{
  uint *puVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint *in_BX;
  int *unaff_SI;
  uint *puVar6;
  int *unaff_DI;
  int *piVar7;
  undefined2 unaff_DS;
  
  iVar5 = *unaff_SI;
  *unaff_DI = iVar5;
  piVar7 = unaff_DI + 1;
  puVar6 = (uint *)(unaff_SI + 1);
  *unaff_DI = *unaff_SI;
  do {
    uVar2 = *puVar6;
    uVar4 = *in_BX;
    *piVar7 = uVar2 + *in_BX;
    piVar7[1] = puVar6[1] + in_BX[1] + (uint)CARRY2(uVar2,uVar4);
    uVar2 = puVar6[2];
    uVar4 = in_BX[2];
    piVar7[2] = uVar2 + in_BX[2];
    piVar7[3] = puVar6[3] + in_BX[3] + (uint)CARRY2(uVar2,uVar4);
    puVar1 = puVar6 + 5;
    uVar2 = puVar6[4];
    uVar4 = in_BX[4];
    piVar3 = piVar7 + 5;
    piVar7[4] = uVar2 + in_BX[4];
    puVar6 = puVar6 + 6;
    piVar7 = piVar7 + 6;
    *piVar3 = *puVar1 + in_BX[5] + (uint)CARRY2(uVar2,uVar4);
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return;
}
