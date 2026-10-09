/* GS.GS2 2000:d9fc undefined FUN_2000_d9fc(void) */
/* WARNING: Removing unreachable block (ram,0x0002db52) */

void __cdecl16far FUN_2000_d9fc(void)

{
  uint *puVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  long lVar4;
  long lVar5;
  uint uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  
  func_0x00000eb0();
  uVar11 = 0;
  uVar9 = 0xbf;
  for (iVar10 = 0; iVar10 < *(char *)0xe282 + -1; iVar10 = iVar10 + 1) {
    uVar3 = uVar9;
    if (((*(byte *)(iVar10 + -0x4456) & 0x20) == 0) || ((*(byte *)(iVar10 + -0x4456) & 0x80) == 0))
    {
      if ((*(byte *)(iVar10 + -0x4456) & 0x20) != 0) {
        uVar11 = 100;
        uVar3 = 0x139c;
        iVar2 = func_0x00013a46(uVar9);
        if (0x3b < iVar2) {
          *(byte *)(iVar10 + -0x4456) = *(byte *)(iVar10 + -0x4456) & 0xdf;
          *(byte *)(iVar10 + -0x4456) = *(byte *)(iVar10 + -0x4456) | 8;
        }
      }
    }
    else {
      *(byte *)(iVar10 + -0x4456) = *(byte *)(iVar10 + -0x4456) & 0x7f;
    }
    if ((*(byte *)(iVar10 + -0x4456) & 0x18) != 0) {
      uVar11 = uVar11 + 1;
    }
    uVar9 = uVar3;
  }
  uVar6 = 0;
  for (iVar10 = 0; iVar10 < *(char *)0xe282 + -1; iVar10 = iVar10 + 1) {
    if (((*(byte *)(iVar10 + -0x4456) & 0x38) == 0) &&
       (*(char *)(iVar10 * 0x24 + -0x44f4) == '\x05')) {
      uVar6 = uVar6 + 1;
    }
  }
  if (uVar6 == 0) {
    *(undefined2 *)0x9bec = 0xffff;
    uVar3 = uVar9;
    uVar6 = uVar11;
  }
  else {
    uVar3 = 0x139c;
    iVar2 = func_0x00013a46(uVar9);
    for (iVar10 = 0; iVar10 < *(char *)0xe282 + -1; iVar10 = iVar10 + 1) {
      iVar12 = iVar2;
      if ((((*(byte *)(iVar10 + -0x4456) & 0x18) == 0) &&
          (*(char *)(iVar10 * 0x24 + -0x44f4) == '\x05')) && (iVar12 = iVar2 + -1, iVar2 == 0)) {
        *(int *)0x9bec = iVar10;
        break;
      }
      iVar2 = iVar12;
    }
  }
  if (((*(byte *)0xbb9c & 0x90) == 0) && ((*(byte *)0xbb9c & 0x40) == 0)) {
    func_0x000038c6(uVar3,*(uint *)0xbba2 - *(uint *)0xa260,
                    (*(int *)0xbba4 - *(int *)0xa262) - (uint)(*(uint *)0xbba2 < *(uint *)0xa260));
    uVar6 = 0;
    uVar3 = 0xbf;
    uVar9 = 0xdb42;
    lVar4 = func_0x000038c6(0xbf,*(uint *)0xbba6 - *(uint *)0xa264,
                            (*(int *)0xbba8 - *(int *)0xa266) -
                            (uint)(*(uint *)0xbba6 < *(uint *)0xa264),0x8000);
    if (CONCAT22(uVar3,uVar9) < lVar4) {
      uVar8 = 0xbf;
      uVar7 = 0xdb79;
      lVar4 = func_0x00003aec(0xbf,uVar9,uVar3,2,0);
      lVar4 = lVar4 + CONCAT22(uVar8,uVar7);
    }
    else {
      lVar5 = func_0x00003aec(0xbf,lVar4,2,0);
      lVar4 = lVar4 + lVar5;
    }
    iVar2 = 0xbf;
    iVar10 = func_0x00003aec(0xbf,lVar4);
    iVar10 = ((iVar2 + 10) * 2 - iVar10) * 5;
    if (iVar10 < 10) {
      iVar10 = 10;
    }
    iVar2 = func_0x00013a46(0xbf,100);
    if (iVar10 < iVar2) {
      *(byte *)0xbb9c = *(byte *)0xbb9c & 0x9f;
      *(byte *)0xbb9c = *(byte *)0xbb9c | 8;
    }
  }
  else {
    *(byte *)0xbb9c = *(byte *)0xbb9c & 0x9f;
  }
  puVar1 = (uint *)0xad59;
  uVar11 = *puVar1;
  *puVar1 = *puVar1 + uVar6;
  *(int *)0xad5b = *(int *)0xad5b + ((int)uVar6 >> 0xf) + (uint)CARRY2(uVar11,uVar6);
  return;
}
