/* GS2.GS2 137f:0672 undefined FUN_137f_0672(void) */
uint __cdecl16near FUN_137f_0672(void)

{
  byte bVar1;
  uint in_AX;
  int iVar2;
  uint uVar3;
  int in_BX;
  int *piVar4;
  int iVar5;
  int unaff_SI;
  undefined2 unaff_DI;
  undefined2 unaff_DS;
  undefined2 uVar6;
  undefined2 uVar7;
  
  bVar1 = (char)in_AX + 1;
  uVar3 = (uint)bVar1;
  if (bVar1 == 0) {
    if (*(int *)(unaff_SI + 0x1c) != 0) {
      iVar5 = in_BX * 2;
      iVar2 = *(int *)(iVar5 + 0x188);
      if (iVar2 != 0) {
        *(undefined2 *)(iVar5 + 0x188) = 0;
        do {
          FUN_137f_2f3a();
          iVar2 = *(int *)(iVar2 + 0x208);
        } while (iVar2 != 0);
      }
      piVar4 = (int *)(iVar5 + *(int *)(unaff_SI + 0x1c));
      iVar2 = *piVar4;
      if (iVar2 != 0) {
        piVar4 = (int *)((int)piVar4 + iVar2);
        do {
          FUN_137f_2f3a(piVar4,unaff_SI,unaff_DI);
          piVar4 = piVar4 + 1;
        } while (*piVar4 != 0);
      }
      uVar7 = *(undefined2 *)0x10a;
      uVar6 = *(undefined2 *)0x10c;
      *(undefined2 *)0x10c = 0x14a;
      uVar3 = FUN_137f_3038(uVar6,uVar7,unaff_SI,unaff_DI);
      *(undefined2 *)0x10c = uVar6;
      *(undefined2 *)0x10a = uVar7;
    }
    return uVar3;
  }
  if (-1 < *(char *)(*(int *)0x10c + in_AX)) {
    FUN_137f_0672();
    FUN_137f_0816();
    FUN_137f_0672();
    return in_AX;
  }
  FUN_137f_0672();
  piVar4 = (int *)(*(int *)(unaff_SI + 0x12) + in_AX * 2);
  if (*(int *)((int)piVar4 + *piVar4) == 0) {
    FUN_137f_0816();
  }
  FUN_137f_0672();
  return in_AX;
}
