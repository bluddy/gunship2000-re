/* GS.GS2 3000:25f0 undefined FUN_3000_25f0(void) */
void __cdecl16far FUN_3000_25f0(void)

{
  int *piVar1;
  undefined1 **ppuVar2;
  undefined2 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined2 *puVar6;
  int iVar7;
  int unaff_SI;
  int *piVar8;
  int iVar9;
  undefined1 **ppuVar10;
  undefined2 uVar11;
  undefined1 *puVar12;
  int unaff_SS;
  undefined2 unaff_DS;
  int iStack_12;
  undefined1 *local_e;
  undefined1 *puStack_c;
  undefined2 uStack_a;
  
  puVar12 = (undefined1 *)0xbf;
  func_0x00000eb0();
  piVar5 = (int *)(*(int *)0xc018 * 0xb + -0x4362);
  ppuVar10 = &local_e;
  piVar8 = piVar5;
  for (iVar7 = 5; iVar7 != 0; iVar7 = iVar7 + -1) {
    ppuVar2 = ppuVar10;
    ppuVar10 = ppuVar10 + 1;
    piVar1 = piVar8;
    piVar8 = piVar8 + 1;
    *ppuVar2 = (undefined1 *)*piVar1;
  }
  *(char *)ppuVar10 = (char)*piVar8;
  iVar9 = *piVar5 * 0x27;
  uVar11 = (undefined2)((ulong)*(undefined4 *)0xb860 >> 0x10);
  iVar7 = (int)*(undefined4 *)0xb860;
  uVar4 = *(uint *)(iVar7 + iVar9 + 0x23);
  if ((((uVar4 & 0x1000) != 0) || ((uVar4 & 0x200) != 0)) ||
     ((uVar4 == 0 && (*(int *)(iVar7 + iVar9 + 0x25) == 0x1000)))) {
    for (iStack_12 = 0; iStack_12 < *(int *)0xc018; iStack_12 = iStack_12 + 1) {
      if ((*(int *)(iStack_12 * 0xb + -0x435c) == unaff_SS) &&
         (*(int *)(iStack_12 * 0xb + -0x435a) == unaff_SI)) {
        uStack_a = *(undefined2 *)0xa50;
        puStack_c = (undefined1 *)0xbf;
        local_e = (undefined1 *)0x2691;
        FUN_3000_12b0();
        uStack_a = 0xbf;
        puStack_c = (undefined1 *)0x269b;
        FUN_3000_2808();
        unaff_SS = iStack_12;
      }
    }
    if (((*(int *)0xc4f6 != 9999) && (unaff_SS == *(int *)0xc4f6)) && (unaff_SI == *(int *)0xc4f8))
    {
      uStack_a = *(undefined2 *)0xa50;
      puStack_c = (undefined1 *)0xbf;
      local_e = (undefined1 *)0x26cd;
      FUN_3000_12b0();
      uStack_a = 0xc368;
      puStack_c = (undefined1 *)0xc4f0;
      local_e = (undefined1 *)0xbf;
      FUN_3000_2b4c();
      puVar12 = (undefined1 *)0x1da4;
      uStack_a = 0x26e4;
      func_0x0001fb9c();
      uStack_a = 0x26e8;
      FUN_3000_6cfc();
      uStack_a = 0x1da4;
      puStack_c = (undefined1 *)0x26f0;
      FUN_3000_2808();
      puVar6 = (undefined2 *)(*(int *)0xc018 * 0xb + -0x4362);
      ppuVar10 = &local_e;
      for (iVar7 = 5; iVar7 != 0; iVar7 = iVar7 + -1) {
        puVar3 = puVar6;
        puVar6 = puVar6 + 1;
        ppuVar2 = ppuVar10;
        ppuVar10 = ppuVar10 + 1;
        *puVar3 = *ppuVar2;
      }
      *(undefined1 *)puVar6 = *(undefined1 *)ppuVar10;
      uStack_a = 0x1da4;
      puStack_c = (undefined1 *)0x271a;
      FUN_3000_14fc();
      *(undefined2 *)0xc01c = 0x26dc;
      unaff_SS = 0x26dc;
      uStack_a = 0x1da4;
      puStack_c = (undefined1 *)0x2728;
      FUN_3000_2290();
    }
    if (((*(int *)0xc50a != 9999) && (unaff_SS == *(int *)0xc50a)) && (unaff_SI == *(int *)0xc50c))
    {
      uStack_a = *(undefined2 *)0xa50;
      local_e = (undefined1 *)0x2758;
      puStack_c = puVar12;
      FUN_3000_12b0();
      uStack_a = 0xbc70;
      puStack_c = (undefined1 *)0xc504;
      local_e = puVar12;
      FUN_3000_2b4c();
      puVar12 = (undefined1 *)0x1da4;
      uStack_a = 0x276f;
      func_0x0001fb9c();
      uStack_a = 0x2773;
      FUN_3000_6cfc();
      uStack_a = 0x1da4;
      puStack_c = (undefined1 *)0x277b;
      FUN_3000_2808();
      puVar6 = (undefined2 *)(*(int *)0xc018 * 0xb + -0x4362);
      ppuVar10 = &local_e;
      for (iVar7 = 5; iVar7 != 0; iVar7 = iVar7 + -1) {
        puVar3 = puVar6;
        puVar6 = puVar6 + 1;
        ppuVar2 = ppuVar10;
        ppuVar10 = ppuVar10 + 1;
        *puVar3 = *ppuVar2;
      }
      *(undefined1 *)puVar6 = *(undefined1 *)ppuVar10;
      uStack_a = 0x1da4;
      puStack_c = (undefined1 *)0x27a5;
      FUN_3000_14fc();
      *(undefined2 *)0xc01c = 0x2767;
      uStack_a = 0x1da4;
      puStack_c = (undefined1 *)0x27b3;
      FUN_3000_2290();
    }
  }
  uStack_a = puStack_c;
  local_e = (undefined1 *)0x27bf;
  puStack_c = puVar12;
  iVar7 = FUN_3000_24c4();
  if (iVar7 != 0) {
    puStack_c = (undefined1 *)0xffff;
    local_e = &stack0xfffc;
    FUN_3000_2464();
    puVar6 = (undefined2 *)(*(int *)0xc018 * 0xb + -0x4362);
    *(int *)0xc018 = *(int *)0xc018 + 1;
    ppuVar10 = &local_e;
    for (iVar7 = 5; iVar7 != 0; iVar7 = iVar7 + -1) {
      puVar3 = puVar6;
      puVar6 = puVar6 + 1;
      ppuVar2 = ppuVar10;
      ppuVar10 = ppuVar10 + 1;
      *puVar3 = *ppuVar2;
    }
    *(undefined1 *)puVar6 = *(undefined1 *)ppuVar10;
    return;
  }
  return;
}
