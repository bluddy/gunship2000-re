/* GS.GS2 3000:28d8 undefined FUN_3000_28d8(void) */
undefined2 __cdecl16far
FUN_3000_28d8(undefined2 param_1,undefined2 param_2,int *param_3,int param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  undefined2 uVar9;
  undefined2 unaff_DS;
  
  func_0x00000eb0();
  if (*(int *)(param_4 + 0xd) % 2 == 0) {
    piVar4 = (int *)(*(int *)0xc500 * 0xb + -0x4362);
    piVar8 = piVar4;
    piVar7 = param_3;
    for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
      piVar2 = piVar7;
      piVar7 = piVar7 + 1;
      piVar1 = piVar8;
      piVar8 = piVar8 + 1;
      *piVar2 = *piVar1;
    }
    *(char *)piVar7 = (char)*piVar8;
    iVar5 = *(int *)0xc018;
    piVar7 = (int *)(iVar5 * 0xb + -0x436d);
    piVar8 = piVar7;
    for (iVar6 = 5; iVar6 != 0; iVar6 = iVar6 + -1) {
      piVar2 = piVar4;
      piVar4 = piVar4 + 1;
      piVar1 = piVar8;
      piVar8 = piVar8 + 1;
      *piVar2 = *piVar1;
    }
    *(char *)piVar4 = (char)*piVar8;
    piVar8 = (int *)(iVar5 * 0xb + -0x4362);
    for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
      piVar2 = piVar7;
      piVar7 = piVar7 + 1;
      piVar1 = piVar8;
      piVar8 = piVar8 + 1;
      *piVar2 = *piVar1;
    }
    *(char *)piVar7 = (char)*piVar8;
    *(int *)0xc018 = *(int *)0xc018 + -1;
    FUN_3000_12b0(*(undefined2 *)0xa88,*(undefined2 *)0xa8a);
  }
  else {
    piVar8 = (int *)(*(int *)0xc018 * 0xb + -0x4362);
    piVar7 = param_3;
    for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
      piVar2 = piVar7;
      piVar7 = piVar7 + 1;
      piVar1 = piVar8;
      piVar8 = piVar8 + 1;
      *piVar2 = *piVar1;
    }
    *(char *)piVar7 = (char)*piVar8;
    FUN_3000_2464(param_3 + 5,param_3[3],param_3[4],0xffff);
    if (*(int *)(param_4 + 0xd) == 1) {
      if ((*(byte *)((*(byte *)(param_3 + 5) & 0x3f) + (int)*(undefined4 *)0xb854) & 2) == 0) {
        iVar5 = 0;
        while( true ) {
          uVar9 = (undefined2)((ulong)*(undefined4 *)0xb860 >> 0x10);
          iVar6 = (int)*(undefined4 *)0xb860;
          if ((*(byte *)(iVar6 + iVar5 * 0x27 + 0x23) & 0x10) != 0) break;
          iVar5 = iVar5 + 1;
        }
        do {
          iVar5 = iVar5 + 1;
        } while ((*(byte *)(iVar6 + iVar5 * 0x27 + 0x23) & 0x10) == 0);
      }
      else {
        iVar5 = 0;
        while (((uVar3 = *(uint *)((int)*(undefined4 *)0xb860 + iVar5 * 0x27 + 0x23),
                (uVar3 & 0x10) == 0 || ((uVar3 & 0x400) == 0)) || ((uVar3 & 0x2000) == 0))) {
          iVar5 = iVar5 + 1;
        }
      }
      *param_3 = iVar5;
      iVar6 = 0;
      while (*(uint *)((int)*(undefined4 *)0xb860 + iVar5 * 0x27 + 0x19) !=
             (uint)*(byte *)(iVar6 * 8 + (int)*(undefined4 *)0xb85c)) {
        iVar6 = iVar6 + 1;
      }
      *param_3 = iVar5;
      param_3[1] = iVar6;
    }
    iVar5 = FUN_3000_3a48(param_3[1]);
    param_3[2] = iVar5;
    FUN_3000_24c4(param_3[1],1);
    FUN_3000_1206();
    FUN_3000_12b0(*(undefined2 *)0xa84,*(undefined2 *)0xa86);
  }
  func_0x0001bfce(0xbf,param_3,param_1,param_2);
  if (*(int *)(param_4 + 0xd) < 3) {
    FUN_3000_6cfc();
    if ((*(int *)(param_4 + 0xd) == 2) &&
       ((*(byte *)((int)*(undefined4 *)0xb860 + *param_3 * 0x27 + 0x24) & 2) != 0)) {
      FUN_3000_73ae(param_3,param_4,0);
      FUN_3000_12b0(*(undefined2 *)0xa5c,*(undefined2 *)0xa5e);
    }
    else {
      *(int *)0xc01c = param_5 + 0xf;
      FUN_3000_2290(param_5 + 0xf);
      if (*(int *)(param_4 + 0xd) == 2) {
        FUN_3000_12b0(*(undefined2 *)0xa60,*(undefined2 *)0xa62);
      }
      else {
        FUN_3000_12b0(*(undefined2 *)0xa58,*(undefined2 *)0xa5a);
      }
    }
    FUN_3000_19cc();
    return 0;
  }
  return 0xffff;
}
