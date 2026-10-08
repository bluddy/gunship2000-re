/* GS2.GS2 1851:01b2 undefined FUN_1851_01b2(void) */
undefined2 __cdecl16far FUN_1851_01b2(void)

{
  undefined2 *puVar1;
  undefined2 in_AX;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *unaff_SI;
  undefined2 *puVar6;
  undefined2 unaff_DS;
  
  if ((*(byte *)((int)unaff_SI + 7) & 0x10) != 0) {
    return in_AX;
  }
  if ((*(char *)0x9db != '\0') && ((*(byte *)((int)unaff_SI + 7) & 0xc) != 0)) {
    FUN_1851_0d59();
  }
  *(byte *)((int)unaff_SI + 7) = *(byte *)((int)unaff_SI + 7) & 0xfd;
  if ((*(uint *)0xb5f & 0x100) != 0) {
    iVar2 = *unaff_SI;
    uVar4 = unaff_SI[4];
    do {
      uVar5 = 0x1000;
      if (uVar4 < 0x1000) {
        uVar5 = uVar4;
      }
      puVar6 = (undefined2 *)0x0;
      for (iVar3 = uVar5 << 3; iVar3 != 0; iVar3 = iVar3 + -1) {
        puVar1 = puVar6;
        puVar6 = puVar6 + 1;
        *puVar1 = 0x8e8e;
      }
      iVar2 = iVar2 + uVar5;
      uVar4 = uVar4 - uVar5;
    } while (uVar4 != 0);
  }
  return in_AX;
}
