/* GS.GS2 2000:dc9c undefined FUN_2000_dc9c(void) */
void __cdecl16far FUN_2000_dc9c(int *param_1,int *param_2,int param_3,undefined2 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined2 uVar8;
  int iVar9;
  undefined2 unaff_DS;
  int iStackY_1c;
  int iStackY_1a;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  iVar9 = 0xbf;
  func_0x00000eb0();
  iStackY_1c = 4;
  iStackY_1a = 8;
  iVar2 = *(int *)0xc4d8 / 0x18;
  iVar3 = *(int *)0xc4da / -0x12 + 0x3f;
  if (param_1 == (int *)0x0) {
    iStackY_1a = 0x40;
    iVar13 = 0x20;
    iVar10 = 0x20;
    iVar14 = 0x20;
    iVar11 = 0x20;
  }
  else {
    iVar14 = param_1[3] / 0x18;
    iVar13 = param_1[4] / -0x12 + 0x3f;
    if (*(int *)((int)param_2 + 0xd) % 2 == 0) {
      iStackY_1a = 6;
    }
    uVar8 = (undefined2)((ulong)*(undefined4 *)0xb860 >> 0x10);
    iVar9 = (int)*(undefined4 *)0xb860;
    if ((*(uint *)(iVar9 + *param_1 * 0x27 + 0x25) & 0x20) != 0 ||
        (*(uint *)(iVar9 + *param_1 * 0x27 + 0x23) & 0x400) != 0) {
      iStackY_1a = iStackY_1a << 1;
    }
    if ((*param_2 == 9999) || (*(int *)((int)param_2 + 0xd) != 2)) {
      iVar10 = iVar13;
      iVar11 = iVar14;
      if (1 < param_3) {
        if (param_3 < 4) {
          iVar9 = iVar14 + (iVar3 - iVar13);
          iVar3 = iVar13 + (iVar9 - iVar2);
          iVar2 = iVar9;
        }
        iVar10 = iVar3;
        iVar11 = iVar2;
        if (param_3 % 2 != 0) {
          iStackY_1c = -4;
        }
      }
    }
    else {
      iStackY_1c = 4;
      iVar10 = param_2[1] / 0x12;
      iVar11 = *param_2 / 0x18;
    }
    iVar9 = 0x65c;
    iVar3 = func_0x000072ee(0xbf,iVar14,iVar13,iVar11,iVar10);
    if (iVar3 != 0) {
      iVar11 = ((iVar11 - iVar14) * iStackY_1c) / iVar3 + iVar14;
      iVar10 = ((iVar10 - iVar13) * iStackY_1c) / iVar3 + iVar13;
    }
  }
  iVar3 = 0;
  do {
    do {
      do {
        func_0x0000970e(iVar9,iVar11,iVar10,iVar3 % (int)*(char *)0x2909 + iStackY_1a,iVar13,iVar14)
        ;
        iVar3 = 0;
        iVar11 = *(int *)0xa27c;
        func_0x00003aec(0x65c,iVar11,*(undefined2 *)0xa27e,0x2000);
        iVar10 = *(int *)0xaca2;
        iVar2 = *(int *)0xaca0;
        iVar9 = 0xbf;
        iStackY_1a = -0x21b3;
        iVar4 = func_0x00003aec(0xbf,iVar2,iVar10,0x2000,0);
      } while ((*(byte *)((int)*(undefined4 *)0xb860 + *(int *)0xa276 * 0x27 + 0x24) & 0xc0) != 0);
      iVar9 = 0x65c;
      iVar12 = -0x2191;
      iVar11 = iVar2;
      iVar7 = iVar13;
      iVar5 = func_0x000072ee(0xbf,iVar2,iVar4,iVar14);
      iVar3 = iVar13;
      iVar13 = iVar7;
    } while (iVar5 <= iVar12);
    iVar11 = *(int *)0xc4d8 / 0x18;
    iVar9 = 0x65c;
    iVar3 = iVar4;
    iVar5 = func_0x000072ee(0x65c,iVar11,*(int *)0xc4da / 0x12,iVar2);
    iVar13 = iVar7;
  } while ((iVar5 < 0xd) ||
          ((param_3 == 0 &&
           ((uVar8 = (undefined2)((ulong)*(undefined4 *)0xb860 >> 0x10),
            iVar7 = (int)*(undefined4 *)0xb860,
            (*(uint *)(iVar7 + *(int *)0xa276 * 0x27 + 0x25) & 0x8020) != 0 ||
            (*(uint *)(iVar7 + *(int *)0xa276 * 0x27 + 0x23) & 0x1400) != 0 ||
            ((*(byte *)((*(byte *)(iVar2 + iVar4 * -0x40 + 0xfc0) & 0x3f) +
                       (int)*(undefined4 *)0xb854) & 4) != 0))))));
  iVar3 = *(int *)0xa276 * 0x27 + *(int *)0xb860;
  uVar8 = *(undefined2 *)0xb862;
  if ((*(byte *)(iVar3 + 0x24) & 0x10) == 0) {
    iVar3 = *(int *)0xc018;
    *(int *)(iVar3 * 0xb + -0x435c) = iVar2 * 0x18 + 0xc;
    *(int *)(iVar3 * 0xb + -0x435a) = iVar4 * -0x12 + 0x477;
  }
  else {
    iVar9 = func_0x00003aec(0x65c,*(undefined2 *)(iVar3 + 0x1b),*(undefined2 *)(iVar3 + 0x1d),0x155,
                            0);
    iVar2 = *(int *)0xc018;
    *(int *)(iVar2 * 0xb + -0x435c) = iVar9 + -1;
    iVar9 = 0xbf;
    iVar3 = func_0x00003aec(0xbf,*(undefined2 *)(iVar3 + 0x1f),*(undefined2 *)(iVar3 + 0x21),0xfe39,
                            0xffff);
    *(int *)(iVar2 * 0xb + -0x435a) = iVar3 + 0x47f;
  }
  if (param_3 == 0) {
    iVar3 = 0;
    while (uVar8 = (undefined2)((ulong)*(undefined4 *)0xb860 >> 0x10),
          iVar2 = (int)*(undefined4 *)0xb860,
          *(int *)(iVar2 + iVar3 * 0x27 + 0x25) != 0 || *(int *)(iVar2 + iVar3 * 0x27 + 0x23) != 0)
    {
      iVar3 = iVar3 + 1;
    }
    *(int *)0xa276 = iVar3;
  }
  *(undefined2 *)(*(int *)0xc018 * 0xb + -0x4362) = *(undefined2 *)0xa276;
  iVar3 = 0;
  while (*(uint *)((int)*(undefined4 *)0xb860 + *(int *)0xa276 * 0x27 + 0x19) !=
         (uint)*(byte *)(iVar3 * 8 + (int)*(undefined4 *)0xb85c)) {
    iVar3 = iVar3 + 1;
  }
  *(int *)(*(int *)0xc018 * 0xb + -0x4360) = iVar3;
  iVar3 = 1;
  while (*(char *)((*(int *)(*(int *)0xc018 * 0xb + -0x4360) + iVar3) * 8 +
                  (int)*(undefined4 *)0xb85c) == -1) {
    iVar3 = iVar3 + 1;
  }
  iVar3 = func_0x00003920();
  piVar1 = (int *)(*(int *)0xc018 * 0xb + -0x4360);
  *piVar1 = *piVar1 + iVar3 % iVar9;
  iVar3 = *(int *)0xc018;
  uVar8 = func_0x00023a48(0xbf,*(undefined2 *)(iVar3 * 0xb + -0x4360));
  *(undefined2 *)(iVar3 * 0xb + -0x435e) = uVar8;
  uVar6 = func_0x00024288(0x20f4,param_4,*(undefined2 *)(*(int *)0xc018 * 0xb + -0x4360));
  if (uVar6 < 0x9d42) {
    func_0x000225f0(0x20f4);
    func_0x00024080(0x20f4,param_4);
  }
  return;
}
