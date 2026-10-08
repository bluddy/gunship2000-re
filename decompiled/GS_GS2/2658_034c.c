/* GS.GS2 2658:034c undefined FUN_2658_034c(void) */
/* WARNING: Unable to track spacebase fully for stack */

int __cdecl16far FUN_2658_034c(undefined2 param_1,undefined2 param_2)

{
  code *pcVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  undefined2 unaff_DS;
  undefined1 in_CF;
  bool bVar6;
  
  *(undefined2 *)0x63a6 = param_1;
  *(undefined2 *)0x63a8 = param_2;
  uVar5 = 0xffff;
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if (!(bool)in_CF) {
    iVar2 = FUN_2658_0410();
    return iVar2;
  }
  bVar6 = uVar5 < 0x100;
  *(int *)0x63ac = uVar5 - 0x100;
  pcVar1 = (code *)swi(0x21);
  uVar3 = (*pcVar1)();
  if (bVar6) {
    iVar2 = FUN_2658_0410();
    return iVar2;
  }
  *(undefined2 *)0x63ae = uVar3;
  *(undefined2 *)0x63b0 = uVar3;
  *(BADSPACEBASE **)0x63aa = register0x00000010;
  pcVar1 = (code *)swi(0x21);
  iVar4 = (*pcVar1)();
  iVar2 = DAT_3b38_63ae;
  if (bVar6) {
    if (iVar4 == 2) {
      iVar2 = FUN_2658_0410();
      return iVar2;
    }
    if (iVar4 == 8) {
      iVar2 = FUN_2658_0410();
      return iVar2;
    }
    iVar2 = FUN_2658_0410();
    return iVar2;
  }
  iVar4 = *(int *)0x2a + ((*(uint *)0x2c + 0xf >> 1 | (uint)(0xfff0 < *(uint *)0x2c) << 0xf) >> 3);
  *(undefined2 *)(DAT_3b38_63aa + -2) = 0x6968;
  FUN_2658_043f();
  uVar5 = (iVar4 - iVar2) + 8;
  bVar6 = uVar5 < DAT_3b38_63ac;
  if (DAT_3b38_63ac < uVar5) {
    iVar2 = FUN_2658_0410();
    return iVar2;
  }
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if (bVar6) {
    iVar2 = FUN_2658_0410();
    return iVar2;
  }
  return iVar2;
}
