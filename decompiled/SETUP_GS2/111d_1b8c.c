/* SETUP.GS2 111d:1b8c undefined FUN_111d_1b8c(void) */
void __cdecl16near FUN_111d_1b8c(void)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  uint in_CX;
  uint uVar4;
  int in_BX;
  uint *unaff_SI;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  undefined2 unaff_DS;
  bool bVar8;
  
  bVar2 = false;
  if (in_CX + 1 != 0) {
    in_CX = in_CX + 1 & 0xfffe;
  }
  puVar5 = unaff_SI + -1;
  uVar1 = *puVar5;
  uVar4 = uVar1 & 0xfffe;
  *puVar5 = uVar4;
  uVar3 = uVar4;
  puVar6 = unaff_SI;
  while (uVar4 < in_CX) {
    puVar7 = (uint *)((int)puVar6 + uVar3);
    if (CARRY2((uint)puVar6,uVar3)) {
      return;
    }
    uVar3 = *puVar7;
    if ((uVar3 & 1) == 0) {
      if ((uVar3 != 0xfffe) || ((*(byte *)(in_BX + 2) & 1) == 0)) goto LAB_111d_1c34;
      if (CARRY2((uint)(unaff_SI + 1),in_CX)) {
        bVar2 = true;
        in_CX = -(int)(unaff_SI + 1);
      }
      *puVar5 = *puVar5 + 1;
      bVar8 = puVar5 < (uint *)*(undefined2 *)(in_BX + 8);
      if (bVar8) {
        *(undefined2 *)(in_BX + 8) = puVar5;
      }
      while (FUN_111d_15f8(), bVar8) {
        bVar2 = true;
        if (in_CX < 0x10) goto LAB_111d_1c34;
        uVar3 = (uint)((in_CX & 1) != 0);
        bVar8 = CARRY2(in_CX >> 1,uVar3);
        in_CX = (in_CX >> 1) + uVar3;
      }
      *puVar5 = *puVar5 - 1;
      uVar3 = uVar4;
      puVar6 = unaff_SI;
    }
    else {
      uVar4 = uVar4 + uVar3 + 1;
      *puVar5 = uVar4;
      uVar3 = uVar3 - 1;
      puVar6 = puVar7 + 1;
    }
  }
  if (uVar4 == in_CX) {
    puVar7 = (uint *)((int)unaff_SI + in_CX);
  }
  else {
    puVar7 = puVar5;
    if (!bVar2) {
      *puVar5 = in_CX;
      puVar7 = (uint *)((int)unaff_SI + in_CX);
      if (CARRY2((uint)unaff_SI,in_CX)) {
        return;
      }
      *puVar7 = (uVar4 - in_CX) - 1;
    }
  }
LAB_111d_1c34:
  *puVar5 = *puVar5 & 0xfffe;
  *puVar5 = *puVar5 | uVar1 & 1;
  if ((puVar5 < (uint *)*(undefined2 *)(in_BX + 8)) && ((uint *)*(undefined2 *)(in_BX + 8) < puVar7)
     ) {
    *(undefined2 *)(in_BX + 8) = puVar5;
  }
  return;
}
