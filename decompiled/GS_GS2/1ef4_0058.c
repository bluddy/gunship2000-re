/* GS.GS2 1ef4:0058 undefined FUN_1ef4_0058(void) */
undefined2 __cdecl16far FUN_1ef4_0058(undefined2 *param_1,undefined2 *param_2)

{
  code *pcVar1;
  undefined2 uVar2;
  uint uVar3;
  int in_CX;
  undefined2 extraout_DX;
  undefined2 unaff_DS;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0x1ef4;
  FUN_10bf_02c0();
  if ((*(byte *)0x8c8 & 1) == 0) {
    iVar4 = 0;
    iVar5 = 0;
    *(undefined2 *)0xbc4c = 0;
  }
  else {
    *(undefined2 *)0xbc58 = 3;
    if (*(char *)0xe287 == '\x02') {
      uVar2 = FUN_23ed_00fc(0xbc4e,0xbc50);
      *(undefined2 *)0xbc4c = uVar2;
      *(int *)0x8624 = *(int *)0x8624 + *(int *)0xbc4e;
      *(int *)0x8626 = *(int *)0x8626 + *(int *)0xbc50;
      FUN_1ef4_034e();
      if (param_1 != (undefined2 *)0x0) {
        *param_1 = *(undefined2 *)0x8624;
      }
      if (param_2 != (undefined2 *)0x0) {
        *param_2 = *(undefined2 *)0x8626;
      }
      return *(undefined2 *)0xbc4c;
    }
    uVar2 = 0xf002;
    FUN_1ef4_03ba();
    iVar6 = *(int *)0x8636 - *(int *)0x862e;
    *(undefined2 *)0x862a = 3;
    *(undefined2 *)0x8628 = 3;
    in_CX = *(int *)0xbc4e;
    if (in_CX < *(int *)0x8634) {
      in_CX = -(in_CX - *(int *)0x8634);
      FUN_10bf_4c3f();
      FUN_10bf_4c3f();
      FUN_10bf_5026();
      iVar6 = 0x10bf;
      FUN_10bf_4fb0(0x10bf);
      uVar2 = 0x10bf;
      FUN_10bf_4f98(0x10bf);
      iVar5 = FUN_10bf_4e05();
      *(int *)0x8628 = iVar5;
      if (iVar5 < 0) {
        *(undefined2 *)0x8628 = 0;
      }
    }
    if (*(int *)0x8634 < *(int *)0xbc4e) {
      FUN_10bf_4c3f(uVar2,iVar6);
      FUN_10bf_4c3f();
      FUN_10bf_5026();
      FUN_10bf_4fb0(0x10bf);
      FUN_10bf_4ff8(0x10bf);
      iVar5 = FUN_10bf_4e05();
      *(int *)0x8628 = iVar5;
      if (7 < iVar5) {
        *(undefined2 *)0x8628 = 7;
      }
    }
    if (*(int *)0xbc50 < *(int *)0x8636) {
      FUN_10bf_4c3f(uVar2,iVar6);
      FUN_10bf_4c3f();
      FUN_10bf_5026();
      FUN_10bf_4fb0(0x10bf);
      FUN_10bf_4f98(0x10bf);
      iVar5 = FUN_10bf_4e05();
      *(int *)0x862a = iVar5;
      if (iVar5 < 0) {
        *(undefined2 *)0x862a = 0;
      }
    }
    if (*(int *)0x8636 < *(int *)0xbc50) {
      FUN_10bf_4c3f(uVar2,iVar6);
      FUN_10bf_4c3f();
      FUN_10bf_5026();
      FUN_10bf_4fb0(0x10bf);
      FUN_10bf_4ff8(0x10bf);
      iVar5 = FUN_10bf_4e05();
      *(int *)0x862a = iVar5;
      if (7 < iVar5) {
        *(undefined2 *)0x862a = 7;
      }
    }
    iVar5 = *(int *)(*(int *)0x8628 * 2 + 0x8ca);
    iVar4 = *(int *)(*(int *)0x862a * 2 + 0x8ca);
  }
  if ((*(byte *)0x8c8 & 2) != 0) {
    pcVar1 = (code *)swi(0x33);
    (*pcVar1)(iVar6);
    *(int *)0x863c = in_CX;
    *(undefined2 *)0x863e = extraout_DX;
    pcVar1 = (code *)swi(0x33);
    uVar3 = (*pcVar1)();
    *(uint *)0xbc4c = *(uint *)0xbc4c | uVar3;
    iVar5 = iVar5 + *(int *)0x863c;
    iVar4 = iVar4 + *(int *)0x863e;
  }
  iVar6 = iVar5;
  if (*(char *)0xe287 == '\x01') {
    FUN_23ed_0078(*(undefined2 *)0xbc4c,iVar5,iVar4);
    iVar4 = iVar5;
  }
  *(int *)0x8624 = *(int *)0x8624 + iVar6;
  *(int *)0x8626 = *(int *)0x8626 + iVar4;
  FUN_1ef4_034e();
  if (param_1 != (undefined2 *)0x0) {
    *param_1 = *(undefined2 *)0x8624;
  }
  if (param_2 != (undefined2 *)0x0) {
    *param_2 = *(undefined2 *)0x8626;
  }
  return *(undefined2 *)0xbc4c;
}
