/* GS.GS2 1f61:029a undefined FUN_1f61_029a(void) */
undefined2 __cdecl16far FUN_1f61_029a(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_DS;
  undefined2 uVar3;
  undefined2 uVar4;
  
  FUN_10bf_02c0();
  *(undefined2 *)0x86c6 = 0;
  *(undefined2 *)0x86c4 = 0;
  if (*(int *)0x86c2 != 0 || *(int *)0x86c0 != 0) {
    if (((*(int *)0x8692 < 0) || (*(int *)0x8656 <= *(int *)0x8692)) ||
       (iVar2 = FUN_10bf_3218(param_1), iVar2 != 0)) {
      for (iVar2 = 0; iVar2 < *(int *)0x8656; iVar2 = iVar2 + 1) {
        iVar1 = FUN_10bf_3218(param_1);
        if (iVar1 == 0) {
          uVar3 = (undefined2)((ulong)*(undefined4 *)0x86c0 >> 0x10);
          iVar1 = (int)*(undefined4 *)0x86c0;
          uVar4 = *(undefined2 *)(iVar1 + iVar2 * 0x18 + 0x16);
          *(undefined2 *)0x86c4 = *(undefined2 *)(iVar1 + iVar2 * 0x18 + 0x14);
          *(undefined2 *)0x86c6 = uVar4;
        }
      }
    }
    else {
      uVar3 = (undefined2)((ulong)*(undefined4 *)0x86c0 >> 0x10);
      iVar2 = (int)*(undefined4 *)0x86c0;
      uVar4 = *(undefined2 *)(iVar2 + *(int *)0x8692 * 0x18 + 0x16);
      *(undefined2 *)0x86c4 = *(undefined2 *)(iVar2 + *(int *)0x8692 * 0x18 + 0x14);
      *(undefined2 *)0x86c6 = uVar4;
    }
  }
  if (*(int *)0x86c6 == 0 && *(int *)0x86c4 == 0) {
    iVar2 = FUN_10bf_06dc(param_1,0x9bc);
    *(int *)0x864a = iVar2;
    if (iVar2 == 0) {
      return 0xffff;
    }
  }
  else {
    *(undefined2 *)0x864a = *(undefined2 *)0x8668;
  }
  FUN_10bf_24ea(*(undefined2 *)0x864a,*(undefined2 *)0x86c4,*(undefined2 *)0x86c6,0);
  FUN_10bf_072a(param_2,1,4,*(undefined2 *)0x864a);
  iVar2 = FUN_10bf_2278(param_2,0x9bf,4);
  if (iVar2 == 0) {
    FUN_1f61_050e();
    uVar4 = *(undefined2 *)0x864a;
    uVar3 = 4;
    FUN_10bf_072a(param_2,1);
    *(undefined2 *)0x8694 = uVar3;
    *(undefined2 *)0x8696 = uVar4;
    *(undefined2 *)0x86bc = 0xc;
    *(undefined2 *)0x86be = 0;
    *(undefined2 *)0x8646 = 0xc;
    *(undefined2 *)0x8648 = 0;
    *(undefined2 *)0x8644 = 0;
    return 0;
  }
  return 0xffff;
}
