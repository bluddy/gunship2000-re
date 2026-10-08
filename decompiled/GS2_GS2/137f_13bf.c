/* GS2.GS2 137f:13bf undefined FUN_137f_13bf(void) */
void __cdecl16near FUN_137f_13bf(void)

{
  int *piVar1;
  int iVar2;
  int unaff_SI;
  int *unaff_DI;
  int *piVar3;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined4 uVar4;
  
  iVar2 = *(int *)*(undefined4 *)(unaff_SI + 0xe);
  piVar3 = unaff_DI + 1;
  *unaff_DI = *(int *)*(undefined4 *)(unaff_SI + 0xe);
  do {
    uVar4 = FUN_137f_1497();
    *piVar3 = (int)uVar4;
    piVar3[1] = (int)((ulong)uVar4 >> 0x10);
    uVar4 = FUN_137f_1497();
    piVar3[2] = (int)uVar4;
    piVar3[3] = (int)((ulong)uVar4 >> 0x10);
    uVar4 = FUN_137f_1497();
    piVar1 = piVar3 + 5;
    piVar3[4] = (int)uVar4;
    piVar3 = piVar3 + 6;
    *piVar1 = (int)((ulong)uVar4 >> 0x10);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}
