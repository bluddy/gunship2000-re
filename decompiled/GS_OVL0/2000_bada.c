/* GS.GS2 2000:bada undefined FUN_2000_bada(void) */
/* WARNING: Type propagation algorithm not settling */

void __cdecl16far FUN_2000_bada(void)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int unaff_DI;
  undefined2 uVar7;
  int iVar8;
  int iVar9;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  long lVar10;
  undefined4 uVar11;
  int local_98 [24];
  uint local_68 [12];
  int aiStack_50 [6];
  uint local_44 [12];
  uint local_2c [12];
  int iStack_14;
  int iStack_12;
  int iStack_10;
  int iStack_e;
  uint *local_c;
  undefined4 uStack_a;
  
  uVar7 = 0xbf;
  func_0x00000eb0();
  iStack_e = (int)*(char *)0xad07;
  iStack_14 = (int)*(char *)0xad08;
  if ((*(char *)0xad05 == '\0') || (iStack_14 + iStack_e == 0)) goto LAB_2000_bb7f;
  if (iStack_14 + iStack_e < 2) {
LAB_2000_bb30:
    bVar3 = false;
  }
  else {
    uStack_a._2_2_ = (uint **)(iStack_e - iStack_14);
    uStack_a._0_2_ = (int *)0xbf;
    local_c = (uint *)0xbb15;
    iVar4 = func_0x000038b8();
    iVar9 = iStack_14;
    if (iStack_e < iStack_14) {
      iVar9 = iStack_e;
    }
    if (iVar4 <= iVar9) goto LAB_2000_bb30;
    bVar3 = true;
  }
  if (iStack_14 < iStack_e) {
    uStack_a._2_2_ = (uint **)0x2003;
  }
  else {
    uStack_a._2_2_ = (uint **)0x2009;
  }
  if (bVar3) {
    uStack_a._0_2_ = (int *)0x2011;
  }
  else {
    uStack_a._0_2_ = (int *)0x2017;
  }
  if (*(char *)0xad1b == '\x04') {
    local_c = (uint *)0x2018;
  }
  else {
    local_c = (uint *)0x2021;
  }
  iStack_e = 0x202b;
  iStack_10 = 0xbf;
  uVar7 = 0xc87;
  iStack_12 = 0xbb7c;
  func_0x0000ca66();
LAB_2000_bb7f:
  uStack_a._2_2_ = (uint **)0x205b;
  local_c = (uint *)0xbb87;
  uStack_a._0_2_ = (int *)uVar7;
  func_0x0000ca50();
  iVar9 = 0xc87;
  for (iStack_10 = 0; iStack_10 < 6; iStack_10 = iStack_10 + 1) {
    if (*(char *)(iStack_10 * 0x122 + -0x51cc) == '\x01') {
      aiStack_50[iStack_10] = 8;
      iVar4 = iStack_10;
      local_44[iStack_10 * 2 + 1] = 0;
      local_44[iVar4 * 2] = 0;
      for (iStack_12 = 0; iStack_12 < 8; iStack_12 = iStack_12 + 1) {
        if ((*(char *)(iStack_12 + iStack_10 * 0x122 + -0x51fe) != '\0') &&
           (iStack_12 < aiStack_50[iStack_10])) {
          aiStack_50[iStack_10] = iStack_12;
        }
        iVar4 = iStack_10;
        uVar5 = (int)*(char *)(iStack_12 + iStack_10 * 0x122 + -0x51fe) *
                (int)*(char *)(iStack_12 + 0x21b2);
        puVar1 = local_44 + iStack_10 * 2;
        uVar2 = *puVar1;
        *puVar1 = *puVar1 + uVar5;
        local_44[iVar4 * 2 + 1] =
             local_44[iVar4 * 2 + 1] + ((int)uVar5 >> 0xf) + (uint)CARRY2(uVar2,uVar5);
      }
      uStack_a._2_2_ = (uint **)0x0;
      uStack_a._0_2_ = (int *)0x64;
      iVar6 = iStack_10 * 0x122;
      local_c = (uint *)*(undefined2 *)(iVar6 + -0x51b2);
      iStack_e = *(undefined2 *)(iVar6 + -0x51b4);
      iVar8 = 0xbf;
      iStack_12 = 0xbc4e;
      iStack_10 = iVar9;
      lVar10 = func_0x00003bb8();
      iVar9 = iStack_10;
      local_68[iStack_10 * 2] = (uint)lVar10;
      local_68[iVar9 * 2 + 1] = (uint)((ulong)lVar10 >> 0x10);
      iVar4 = iStack_10;
      if (lVar10 == 0) {
        local_2c[iStack_10 * 2 + 1] = 0;
        local_2c[iVar4 * 2] = 0;
      }
      else {
        local_c = (uint *)*(undefined2 *)(iVar6 + -0x51ae);
        iStack_e = *(undefined2 *)(iVar6 + -0x51b0);
        iStack_10 = 0xbf;
        iVar8 = 0xbf;
        iStack_12 = 0xbc71;
        uStack_a = lVar10;
        uVar11 = func_0x00003aec();
        local_2c[iVar9 * 2] = (uint)uVar11;
        local_2c[iVar9 * 2 + 1] = (uint)((ulong)uVar11 >> 0x10);
      }
    }
    else {
      aiStack_50[iStack_10] = 1;
      iVar4 = iStack_10;
      local_44[iStack_10 * 2] = 1;
      local_44[iVar4 * 2 + 1] = 0;
      local_68[iVar4 * 2] = 1;
      local_68[iVar4 * 2 + 1] = 0;
      local_2c[iVar4 * 2] = 1;
      local_2c[iVar4 * 2 + 1] = 0;
      iVar8 = iVar9;
    }
    iVar9 = iVar8;
  }
  uStack_a._2_2_ = (uint **)((int)&uStack_a + 2);
  uStack_a._0_2_ = local_98;
  local_c = local_44;
  iStack_10 = 0xbc9d;
  iStack_e = iVar9;
  FUN_2000_be5a();
  uStack_a._2_2_ = &local_c;
  uStack_a._0_2_ = (int *)&stack0xfffc;
  local_c = local_68;
  iStack_10 = 0xbcb0;
  iStack_e = iVar9;
  FUN_2000_be5a();
  uStack_a._2_2_ = (uint **)(local_98 + 1);
  uStack_a._0_2_ = local_98 + 2;
  local_c = local_2c;
  iStack_10 = -0x433b;
  iStack_e = iVar9;
  FUN_2000_be5a();
  if ((*(int *)0xad26 < 1) && ((*(int *)0xad26 < 0 || (*(uint *)0xad24 < 4)))) {
    local_98[1] = 0;
    local_98[2] = 0;
    if (*(char *)0xad0a < '\x06') {
      local_c = (uint *)0x0;
      unaff_DI = 0;
    }
  }
  if (((local_98[0] != 0) || (unaff_DI != 0)) || (local_98[2] != 0)) {
    iStack_10 = 0;
    uStack_a._2_2_ = (uint **)0x20e2;
    local_c = (uint *)0xbd13;
    uStack_a._0_2_ = (int *)iVar9;
    func_0x0000ca50();
    if (local_98[0] != 0) {
      if (local_98[0] == 0) {
        uStack_a._2_2_ = (uint **)0x213e;
      }
      else {
        uStack_a._2_2_ = (uint **)0x2132;
      }
      uStack_a._0_2_ = (int *)0x2144;
      local_c = (uint *)0xc87;
      iStack_e = 0xbd30;
      func_0x0000ca66();
      iStack_10 = 1;
    }
    if ((unaff_DI != 0) || (local_c != (uint *)0x0)) {
      if (unaff_DI == 0) {
        uStack_a._2_2_ = (uint **)0x2157;
      }
      else {
        uStack_a._2_2_ = (uint **)0x2152;
      }
      if (iStack_10 == 0) {
        uStack_a._0_2_ = (int *)0x2164;
      }
      else if (local_98[2] == 0) {
        uStack_a._0_2_ = (int *)0x215f;
      }
      else {
        uStack_a._0_2_ = (int *)0x215d;
      }
      local_c = (uint *)0x2165;
      iStack_e = 0xc87;
      iStack_10 = -0x4288;
      func_0x0000ca66();
      iStack_10 = iStack_10 + 1;
    }
    if (local_98[2] != 0) {
      if (local_98[2] == 0) {
        uStack_a._2_2_ = (uint **)0x217e;
      }
      else {
        uStack_a._2_2_ = (uint **)0x2177;
      }
      if (iStack_10 == 0) {
        uStack_a._0_2_ = (int *)0x218d;
      }
      else {
        uStack_a._0_2_ = (int *)0x2188;
      }
      local_c = (uint *)0x218e;
      iStack_e = 0xc87;
      iStack_10 = -0x4258;
      func_0x0000ca66();
    }
    if (*(char *)0xad0a < '\x05') {
      uStack_a._2_2_ = (uint **)0x2194;
    }
    else {
      uStack_a._2_2_ = (uint **)0x219b;
    }
    uStack_a._0_2_ = (int *)0x21aa;
    local_c = (uint *)0xc87;
    iVar9 = 0xc87;
    iStack_e = -0x423c;
    func_0x0000ca66();
  }
  uStack_a._0_2_ = (int *)0xbdcc;
  uStack_a._2_2_ = (uint **)iVar9;
  func_0x0000cd22();
  *(undefined2 *)0x9884 = 0;
  if (*(char *)0xad0a < '\x05') {
    *(undefined1 *)0x9886 = 0;
    *(undefined2 *)0x9884 = 1;
    *(undefined1 *)0x9887 = 1;
    *(undefined2 *)0x9884 = 2;
    return;
  }
  if (*(char *)0xad05 != '\0') {
    *(undefined1 *)(*(int *)0x9884 + -0x677a) = 0;
    *(int *)0x9884 = *(int *)0x9884 + 1;
    iVar9 = *(int *)0x9884;
    *(undefined1 *)(iVar9 + -0x677a) = 4;
    *(int *)0x9884 = iVar9 + 1;
    return;
  }
  *(undefined1 *)(*(int *)0x9884 + -0x677a) = 0;
  *(int *)0x9884 = *(int *)0x9884 + 1;
  iVar9 = *(int *)0x9884;
  *(undefined1 *)(iVar9 + -0x677a) = 1;
  *(int *)0x9884 = iVar9 + 1;
  *(undefined1 *)(iVar9 + -0x6779) = 3;
  *(int *)0x9884 = iVar9 + 2;
  *(undefined1 *)(iVar9 + -0x6778) = 4;
  *(int *)0x9884 = iVar9 + 3;
  *(undefined1 *)(iVar9 + -0x6777) = 2;
  *(int *)0x9884 = iVar9 + 4;
  return;
}
