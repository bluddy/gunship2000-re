/* GS.GS2 2658:0724 undefined FUN_2658_0724(void) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_2658_0724(void)

{
  long lVar1;
  ulong uVar2;
  undefined2 uVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  undefined2 unaff_DS;
  undefined1 uVar14;
  ulong uVar15;
  undefined2 uVar16;
  
  uVar3 = uRam00000002;
  uVar16 = _SUB_0000_0000;
  uVar14 = 1;
  _SUB_0000_0000 = 0x8d1;
  uRam00000002 = 0x2658;
  uVar6 = *(uint *)0x64cc;
  uVar12 = *(uint *)0x64ce;
  uVar13 = *(uint *)0x64d2;
  uVar4 = FUN_2658_08b0();
  *(undefined1 *)0x6800 = uVar4;
  uVar15 = FUN_2658_08b0();
  _SUB_0000_0000 = uVar16;
  uVar2 = uVar15 >> 0x10;
  uVar7 = uVar6;
  if ((bool)uVar14) {
    if (*(char *)0x6800 == '\0') goto LAB_2658_0746;
    LOCK();
    bVar11 = *(byte *)0x6800;
    *(byte *)0x6800 = (byte)uVar15;
    uVar15 = CONCAT22(uVar13,(uint)bVar11);
    UNLOCK();
    *(uint *)0x64cc = uVar12;
    *(uint *)0x64d0 = uVar13;
    uVar7 = uVar12;
    uVar12 = uVar6;
    uVar13 = (uint)uVar2;
  }
  uVar6 = (uint)(uVar15 >> 0x10);
  if ((*(byte *)0x6800 & (byte)uVar15) != 0) {
    uRam00000002 = uVar3;
    return;
  }
  uVar8 = uVar12 - uVar7;
  if (SBORROW2(uVar12,uVar7)) {
    uVar8 = uVar8 >> 1 | (uint)(uVar7 <= uVar12) << 0xf;
    *(uint *)0x6801 = uVar8;
    *(int *)0x6805 = (int)uVar8 >> 1;
    if (SBORROW2(uVar13,uVar6)) {
      uVar8 = uVar13 - uVar6 >> 1 | (uint)(uVar6 <= uVar13) << 0xf;
    }
    else {
      uVar8 = (int)(uVar13 - uVar6) >> 1;
    }
  }
  else {
    *(uint *)0x6801 = uVar8;
    *(int *)0x6805 = (int)uVar8 >> 1;
    uVar8 = uVar13 - uVar6;
    if (SBORROW2(uVar13,uVar6)) {
      uVar8 = uVar8 >> 1 | (uint)(uVar6 <= uVar13) << 0xf;
      *(int *)0x6801 = *(int *)0x6801 >> 1;
      *(int *)0x6805 = *(int *)0x6805 >> 1;
    }
  }
  *(uint *)0x6803 = uVar8;
  *(int *)0x6807 = (int)uVar8 >> 1;
  do {
    uVar6 = uVar7;
    uVar8 = (uint)(uVar15 >> 0x10);
    if ((uVar15 & 9) == 0) {
LAB_2658_084d:
      iVar5 = *(int *)0x680b;
      if ((int)uVar13 <= iVar5) {
LAB_2658_0855:
        iVar5 = 0;
      }
      lVar1 = (long)(int)(iVar5 - uVar8) * (long)*(int *)0x6801;
      iVar10 = (int)(lVar1 / (long)*(int *)0x6803);
      iVar9 = (int)(lVar1 % (long)*(int *)0x6803);
      bVar11 = (byte)((ulong)lVar1 >> 0x18);
      if ((char)(bVar11 ^ *(byte *)0x6804) < '\0') {
        iVar9 = -iVar9;
        iVar10 = iVar10 + -1;
      }
      if (-1 < (int)((uint)(byte)((byte)((uint)(iVar9 - *(int *)0x6807) >> 8) ^ bVar11) << 8)) {
        iVar10 = iVar10 + 1;
      }
      iVar10 = iVar10 + uVar6;
      if (iVar10 < 0) {
        uRam00000002 = uVar3;
        return;
      }
      if (*(int *)0x6809 < iVar10) {
        uRam00000002 = uVar3;
        return;
      }
    }
    else {
      iVar10 = 0;
      if (-1 < (int)uVar12) {
        iVar10 = *(int *)0x6809;
      }
      lVar1 = (long)(int)(iVar10 - uVar6) * (long)*(int *)0x6803;
      iVar5 = (int)(lVar1 / (long)*(int *)0x6801);
      iVar9 = (int)(lVar1 % (long)*(int *)0x6801);
      bVar11 = (byte)((ulong)lVar1 >> 0x18);
      if ((char)(bVar11 ^ *(byte *)0x6802) < '\0') {
        iVar9 = -iVar9;
        iVar5 = iVar5 + -1;
      }
      if (-1 < (int)((uint)(byte)((byte)((uint)(iVar9 - *(int *)0x6805) >> 8) ^ bVar11) << 8)) {
        iVar5 = iVar5 + 1;
      }
      iVar5 = iVar5 + uVar8;
      if (iVar5 < 0) goto LAB_2658_0855;
      if (*(int *)0x680b < iVar5) goto LAB_2658_084d;
    }
    if (*(char *)0x6800 == '\0') break;
    *(int *)0x64d0 = iVar5;
    *(int *)0x64cc = iVar10;
    uVar15 = CONCAT22(uVar13,(uint)*(byte *)0x6800);
    *(undefined1 *)0x6800 = 0;
    uVar7 = uVar12;
    uVar12 = uVar6;
    uVar13 = uVar8;
  } while( true );
  *(int *)0x64d2 = iVar5;
  *(int *)0x64ce = iVar10;
LAB_2658_0746:
  uRam00000002 = uVar3;
  thunk_EXT_FUN_0000_0000(0x2658);
  return;
}
