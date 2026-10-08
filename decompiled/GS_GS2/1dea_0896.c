/* GS.GS2 1dea:0896 undefined FUN_1dea_0896(void) */
/* WARNING: Removing unreachable block (ram,0x0001e98b) */

void __cdecl16far FUN_1dea_0896(int param_1)

{
  uint *puVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 unaff_DS;
  bool bVar6;
  undefined4 uVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  uint uVar13;
  undefined2 uVar14;
  undefined2 uVar15;
  
  FUN_10bf_02c0();
  *(undefined1 *)0x861c = 0;
  *(undefined1 *)0x8612 = 0;
  uVar9 = (*(byte *)0xa249 & 4) >> 2;
  *(undefined2 *)0xbc40 = *(undefined2 *)0xbb9e;
  for (uVar13 = 0; (int)uVar13 < 0x50; uVar13 = uVar13 + 1) {
    if ((*(char *)((int)uVar13 / 2 + -0x4446) >> (-((uVar13 & 1) != 0) & 4U) & 0xfU) == 7) {
      *(int *)0xbb9e = *(int *)0xbb9e - *(int *)(uVar13 * 0x20 + -0x5d65) / 2;
    }
  }
  *(undefined2 *)0xbc42 = *(undefined2 *)0xbb9e;
  *(int *)0xbb9e =
       *(int *)0xbb9e +
       ((uint)((*(byte *)0xbb9c & 1) != 0) * 2 + (uint)((*(byte *)0xbb9c & 2) != 0)) * 0x32;
  *(undefined2 *)0xbc44 = *(undefined2 *)0xbb9e;
  iVar3 = FUN_27d1_0f28(0x10bf);
  if ((iVar3 == 0) &&
     (((0x31 < *(int *)0xbb9e && ((*(byte *)0xbb9c & 3) != 0)) ||
      (iVar3 = FUN_27d1_0f1e(0x27d1), iVar3 != 0)))) {
    *(undefined1 *)0x8612 = 1;
  }
  else {
    *(undefined1 *)0x8612 = 0;
  }
  uVar13 = 0x27d1;
  *(undefined1 *)0x8610 = 0;
  for (iVar3 = 0; iVar3 < *(char *)0xe282 + -1; iVar3 = iVar3 + 1) {
    *(char *)0x8610 = *(char *)0x8610 + ('\x01' - ((*(byte *)(iVar3 + -0x4456) & 0x18) == 0));
  }
  if ((*(byte *)0xa249 & 0xe0) == 0x80) {
    if (*(char *)0x8612 != '\0') {
      uVar13 = 0x1b1d;
      iVar3 = FUN_1b1d_023e();
      if (0x1d < iVar3) {
        *(char *)0xad07 = *(char *)0xad07 + '\x01';
        if ((param_1 == 0) && (iVar3 = FUN_1b1d_01ec(), 0 < iVar3)) {
          *(int *)0xbb9e = *(int *)0xbb9e + 100;
        }
        uVar13 = 0x1b1d;
        goto LAB_1dea_09cc;
      }
    }
    *(char *)0xad08 = *(char *)0xad08 + '\x01';
  }
LAB_1dea_09cc:
  *(undefined1 *)0xace9 = 0;
  uVar10 = *(uint *)0xbb9e;
  iVar3 = (int)uVar10 >> 0xf;
  if ((uVar9 == 0) && ((*(byte *)0xbb9c & 3) != 0)) {
    iVar4 = FUN_2581_039c((int)*(char *)0xbae8);
    iVar4 = (int)*(char *)((int)*(undefined4 *)0xb83a + iVar4 * 0xfc + 6);
    if (0 < iVar4) {
      iVar4 = iVar4 << 1;
    }
    if (((*(byte *)0xbb9c & 0x80) != 0) || (iVar4 < 0)) {
      uVar13 = uVar13 + iVar4;
    }
    for (iVar4 = 0; iVar4 < 4; iVar4 = iVar4 + 1) {
      iVar4 = (int)*(char *)(iVar4 * 0x24 + -0x44f4);
      uVar13 = 0x2581;
      iVar5 = FUN_2581_039c();
      iVar5 = (int)*(char *)((int)*(undefined4 *)0xb83a + iVar5 * 0xfc + 6);
      if (((*(byte *)(iVar4 + -0x4456) & 0x80) != 0) || (iVar5 < 0)) {
        uVar13 = uVar13 + iVar5;
      }
    }
    if ((*(byte *)0xa248 & 3) == 0) {
      uVar13 = 0;
    }
    else if ((*(byte *)0xa248 & 3) == 1) {
      uVar13 = (int)uVar13 / 2;
    }
    bVar6 = CARRY2(uVar10,uVar13);
    uVar10 = uVar10 + uVar13;
    iVar3 = iVar3 + ((int)uVar13 >> 0xf) + (uint)bVar6;
  }
  if (*(char *)0xa271 != '\0') {
    bVar6 = 0xffcd < uVar10;
    uVar10 = uVar10 + 0x32;
    iVar3 = iVar3 + (uint)bVar6;
  }
  *(uint *)0xbc44 = uVar10;
  *(undefined2 *)0xbc48 = 100;
  uVar14 = 0;
  uVar11 = 10;
  uVar7 = FUN_10bf_2f96(*(int *)0xa268,*(int *)0xa268 >> 0xf,uVar10,iVar3);
  iVar3 = -0x1692;
  lVar8 = FUN_10bf_2efc(uVar7,uVar11,uVar14);
  *(undefined2 *)0xbc46 = (int)lVar8;
  if (0x6270 < *(uint *)0xbba0) {
    *(undefined2 *)0xbba0 = 0x6270;
  }
  if ((0 < lVar8) && (0x2a2f < *(uint *)0xbba0)) {
    uVar15 = 0;
    uVar12 = 0x3840;
    uVar7 = FUN_10bf_2f96(*(int *)0xbba0 + -0x2a30,0,0xffce,0xffff);
    uVar11 = (undefined2)uVar7;
    uVar14 = 0x10bf;
    iVar3 = FUN_10bf_2efc(uVar7,uVar12,uVar15);
    iVar3 = iVar3 + 100;
    *(int *)0xbc48 = iVar3;
    uVar15 = 0;
    uVar12 = 100;
    uVar7 = FUN_10bf_2f96(iVar3,iVar3 >> 0xf,uVar14,uVar11);
    iVar3 = -0x1629;
    lVar8 = FUN_10bf_2efc(uVar7,uVar12,uVar15);
  }
  iVar4 = (int)((ulong)lVar8 >> 0x10);
  uVar13 = (uint)lVar8;
  *(undefined2 *)0xbc4a = 0;
  if (iVar3 == 0) {
    *(uint *)0xad20 = uVar13;
    *(int *)0xad22 = iVar4;
    *(uint *)0xbc4a = uVar13;
    puVar1 = (uint *)0xad28;
    uVar9 = *puVar1;
    *puVar1 = *puVar1 + uVar13;
    *(int *)0xad2a = *(int *)0xad2a + iVar4 + (uint)CARRY2(uVar9,uVar13);
    if (*(int *)0xad0f < 3000) {
      *(int *)0xad0f = *(int *)0xad0f + (uint)((*(byte *)0xbb9c & 0x80) == 0) * 200;
    }
    if (*(int *)0xad0f < 3000) {
      *(int *)0xad0f = *(int *)0xad0f + (uint)((*(byte *)0xbb9c & 3) == 0) * 200;
    }
    if ((*(int *)0xad1e <= *(int *)0xad22) &&
       ((*(int *)0xad1e < *(int *)0xad22 || (*(uint *)0xad1c < *(uint *)0xad20)))) {
      uVar11 = *(undefined2 *)0xad22;
      *(undefined2 *)0xad1c = *(undefined2 *)0xad20;
      *(undefined2 *)0xad1e = uVar11;
    }
    puVar1 = (uint *)0xad24;
    uVar13 = *puVar1;
    *puVar1 = *puVar1 + 1;
    *(int *)0xad26 = *(int *)0xad26 + (uint)(0xfffe < uVar13);
  }
  uVar2 = FUN_27d1_0f3c(0x10bf);
  *(undefined1 *)0x861b = uVar2;
  if (iVar3 == 0) {
    iVar3 = FUN_27d1_0f32(0x27d1);
    if ((*(char *)0x8612 != '\0') &&
       ((((iVar3 == 0 || (iVar3 = FUN_1b1d_01ec(), 0 < iVar3)) || (*(char *)0x861b == '\v')) ||
        (iVar3 = FUN_1dea_0fa4(0), iVar3 != 0)))) {
      *(undefined1 *)0x861c = 1;
      return;
    }
    *(undefined1 *)0x861c = 0;
  }
  return;
}
