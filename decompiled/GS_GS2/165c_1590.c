/* GS.GS2 165c:1590 undefined FUN_165c_1590(void) */
undefined2 __cdecl16far
FUN_165c_1590(int param_1,int param_2,int param_3,int param_4,undefined2 param_5,uint param_6)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined2 uVar10;
  undefined2 unaff_DS;
  bool bVar11;
  int iStack_26;
  int iStack_24;
  int iStack_22;
  int iStack_20;
  int iStack_1c;
  int iStack_1a;
  int local_c;
  int iStack_a;
  int iStack_8;
  int *piStack_6;
  
  piStack_6 = (int *)0x7b5b;
  FUN_10bf_02c0();
  bVar11 = (param_6 & 0x20) != 0;
  if (param_1 < param_3) {
    iVar3 = 1;
  }
  else {
    iVar3 = -1;
  }
  if (param_2 < param_4) {
    iVar4 = 1;
  }
  else {
    iVar4 = -1;
  }
  piStack_6 = (int *)(param_3 - param_1);
  iStack_8 = 0x10bf;
  iStack_a = 0x7bb2;
  iVar5 = FUN_10bf_2cc8();
  iVar6 = iVar5 + 1;
  piStack_6 = (int *)(param_4 - param_2);
  iStack_8 = 0x10bf;
  iStack_a = 0x7bc5;
  iVar7 = FUN_10bf_2cc8();
  iVar8 = iVar7 + 1;
  uVar10 = (undefined2)((ulong)((long)iVar8 * (long)iVar6) >> 0x10);
  piStack_6 = (int *)((long)iVar8 * (long)iVar6);
  iStack_8 = 0x10bf;
  iStack_a = 0x7bd5;
  iVar9 = FUN_1dea_1048();
  for (iStack_22 = 0; iStack_22 < iVar8; iStack_22 = iStack_22 + 1) {
    for (iStack_1c = 0; iStack_1c < iVar6; iStack_1c = iStack_1c + 1) {
      bVar1 = *(byte *)((*(byte *)(iVar3 * iStack_1c + (iStack_22 * iVar4 + param_2) * -0x40 +
                                   param_1 + 0xfc0) & 0x3f) + (int)*(undefined4 *)0xb854);
      if (((param_6 & 0x800) != 0) ||
         (((!bVar11 || ((bVar1 & 2) != 0)) && ((bVar11 || ((bVar1 & 8) != 0)))))) {
        *(undefined1 *)(iVar6 * iStack_22 + iVar9 + iStack_1c) = 0;
      }
      else {
        *(undefined1 *)(iVar6 * iStack_22 + iVar9 + iStack_1c) = 1;
      }
    }
  }
  local_c = iVar6;
  iStack_a = iVar8;
  iStack_8 = iVar9;
  piStack_6 = (int *)uVar10;
  FUN_165c_1582();
  iStack_22 = 0;
  iStack_1c = 0;
  iStack_20 = 0;
  iStack_1a = 0;
  local_c = param_1;
  piStack_6 = &local_c;
  iStack_8 = 0x1dea;
  iStack_a = 0x7ccb;
  FUN_165c_0fea();
  do {
    iVar4 = iStack_1c;
    iVar3 = iStack_22;
    if ((iVar5 <= iStack_1c) && (iVar7 <= iStack_22)) {
      local_c = iStack_1c * 0x7c9a + param_1;
      piStack_6 = &local_c;
      iStack_8 = 0x1dea;
      iStack_a = 0x7e2e;
      FUN_165c_0fea();
      iStack_a = 0x1dea;
      local_c = 0x7e3c;
      iStack_8 = iVar9;
      piStack_6 = (int *)uVar10;
      FUN_1dea_1086();
      return 0;
    }
    if ((iStack_1c < iVar5) && (*(char *)(iVar9 + iStack_22 * iVar6 + iStack_1c + 1) == '\0')) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    if ((iStack_22 < iVar7) && (*(char *)((iStack_22 + 1) * iVar6 + iVar9 + iStack_1c) == '\0')) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar11) && (bVar2)) {
      iStack_a = 0x1dea;
      local_c = 0x7d58;
      iStack_8 = iVar9;
      piStack_6 = (int *)uVar10;
      FUN_1dea_1086();
      return 1;
    }
    if (((iVar8 - iStack_22 < iVar6 - iStack_1c) && (!bVar11)) || (bVar2)) {
      iStack_1c = iStack_1c + 1;
    }
    else {
      iStack_22 = iStack_22 + 1;
    }
    for (iStack_24 = iStack_1a; iStack_24 <= iStack_1c; iStack_24 = iStack_24 + 1) {
      for (iStack_26 = iStack_20; iStack_26 <= iStack_22; iStack_26 = iStack_26 + 1) {
        if (*(char *)(iStack_26 * iVar6 + iVar9 + iStack_24) != '\0') {
          iStack_1a = iVar4;
          local_c = iVar4 * 0x7c9a + param_1;
          iStack_20 = iVar3;
          piStack_6 = &local_c;
          iStack_8 = 0x1dea;
          iStack_a = 0x7df5;
          FUN_165c_0fea();
          break;
        }
      }
    }
  } while( true );
}
