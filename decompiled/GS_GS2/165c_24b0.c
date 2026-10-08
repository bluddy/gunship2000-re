/* GS.GS2 165c:24b0 undefined FUN_165c_24b0(void) */
void __cdecl16far FUN_165c_24b0(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined2 unaff_DS;
  undefined2 uStackY_1a;
  undefined2 uStackY_18;
  undefined2 uStackY_16;
  undefined2 uStackY_14;
  undefined2 uStackY_12;
  undefined2 uStackY_10;
  undefined2 uStackY_e;
  uint uVar6;
  int iVar7;
  
  FUN_10bf_02c0();
  param_1 = param_1 * 0x3e;
  uVar6 = *(uint *)(param_1 + -0x46f2);
  iVar7 = *(int *)(param_1 + -0x46f0);
  uStackY_e = *(uint *)(param_1 + -0x46ee);
  iVar5 = *(int *)(param_1 + -0x46ec);
  uVar1 = *(uint *)(param_1 + -0x46e6);
  iVar2 = *(int *)(param_1 + -0x46e4);
  uVar3 = *(uint *)(param_1 + -0x46e2);
  iVar4 = *(int *)(param_1 + -0x46e0);
  uStackY_12 = uVar1;
  uStackY_10 = iVar2;
  if ((iVar2 <= iVar7) && ((iVar2 < iVar7 || (uVar1 < uVar6)))) {
    uStackY_12 = uVar6;
    uStackY_10 = iVar7;
    uVar6 = uVar1;
    iVar7 = iVar2;
  }
  uStackY_16 = uVar3;
  uStackY_14 = iVar4;
  if ((iVar4 <= iVar5) && ((iVar4 < iVar5 || (uVar3 < uStackY_e)))) {
    uStackY_16 = uStackY_e;
    uStackY_14 = iVar5;
    uStackY_e = uVar3;
    iVar5 = iVar4;
  }
  uVar1 = *(uint *)0xa27c;
  iVar2 = *(int *)0xa27e;
  if ((iVar7 < iVar2) || ((iVar7 <= iVar2 && (uVar6 <= uVar1)))) {
    if ((iVar2 < uStackY_10) || ((iVar2 <= uStackY_10 && (uVar1 <= uStackY_12)))) {
      uStackY_18 = 0;
    }
    else {
      iVar5 = uVar1 - uStackY_12;
      uStackY_e = 0x10bf;
      uStackY_18 = FUN_10bf_2efc(iVar5,(iVar2 - uStackY_10) - (uint)(uVar1 < uStackY_12),0x8000,0);
    }
  }
  else {
    iVar5 = uVar6 - uVar1;
    uStackY_e = 0x10bf;
    uStackY_18 = FUN_10bf_2efc(iVar5,(-0x8000 - iVar2) - (uint)(uVar6 < uVar1),0x8000,0);
  }
  uVar6 = *(uint *)0xaca0;
  iVar7 = *(int *)0xaca2;
  if ((iVar5 < iVar7) || ((iVar5 <= iVar7 && (uStackY_e <= uVar6)))) {
    if ((iVar7 < uStackY_14) || ((iVar7 <= uStackY_14 && (uVar6 <= uStackY_16)))) {
      uStackY_1a = 0;
    }
    else {
      uStackY_1a = FUN_10bf_2efc(uVar6 - uStackY_16,
                                 (iVar7 - uStackY_14) - (uint)(uVar6 < uStackY_16),0x8000,0);
    }
  }
  else {
    uStackY_1a = FUN_10bf_2efc(uStackY_e - uVar6,(iVar5 - iVar7) - (uint)(uStackY_e < uVar6),0x8000,
                               0);
  }
  FUN_165c_0d2e(uStackY_18,uStackY_1a,0,0);
  return;
}
