/* GS.GS2 1f61:060e undefined FUN_1f61_060e(void) */
int __cdecl16far FUN_1f61_060e(undefined2 param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 in_DX;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 unaff_DS;
  int iStack_1c;
  undefined2 local_1a [4];
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 *puStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  int iStack_8;
  
  FUN_10bf_02c0();
  iStack_8 = 0x10bf;
  uStack_a = 0xfc2f;
  FUN_1f61_0962();
  iStack_8 = 0x9c4;
  uStack_a = param_1;
  uStack_c = 0x10bf;
  puStack_e = (undefined2 *)0xfc3a;
  iStack_8 = FUN_10bf_06dc();
  *(int *)0x8668 = iStack_8;
  if (iStack_8 == 0) {
    return iStack_8;
  }
  uStack_a = 1;
  uStack_c = 2;
  puStack_e = (undefined2 *)0x8656;
  uStack_10 = 0x10bf;
  uStack_12 = 0xfc55;
  iVar4 = FUN_10bf_072a();
  if (iVar4 == 0) {
    return 0;
  }
  iStack_8 = *(int *)0x8656 * 0x18;
  uStack_a = 0x10bf;
  uStack_c = 0xfc72;
  uVar5 = FUN_1dea_1048();
  *(undefined2 *)0x86c0 = uVar5;
  *(undefined2 *)0x86c2 = in_DX;
  uStack_10 = 0x1dea;
  for (iStack_1c = 0; iStack_1c < *(int *)0x8656; iStack_1c = iStack_1c + 1) {
    iStack_8 = *(undefined2 *)0x8668;
    uStack_a = 1;
    uStack_c = 0x18;
    puStack_e = local_1a;
    uStack_12 = 0xfca0;
    FUN_10bf_072a();
    uVar3 = *(undefined4 *)0x86c0;
    puVar7 = (undefined2 *)(iStack_1c * 0x18 + (int)uVar3);
    puVar6 = local_1a;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar2 = puVar7;
      puVar7 = puVar7 + 1;
      puVar1 = puVar6;
      puVar6 = puVar6 + 1;
      *puVar2 = *puVar1;
    }
    uStack_10 = 0x10bf;
  }
  return *(int *)0x8656;
}
