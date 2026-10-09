/* GS.GS2 3000:7cea undefined FUN_3000_7cea(void) */
undefined2 __cdecl16far FUN_3000_7cea(int *param_1,int *param_2)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  undefined4 uVar6;
  int iVar7;
  
  func_0x00000eb0();
  *(int *)0xb8e2 = param_2[3];
  *(undefined2 *)0xb8dc = 2;
  uVar6 = func_0x0000eeb2(0xbf,*(undefined2 *)0xb8d4,*(undefined2 *)0xb8d6,0x12);
  *(undefined2 *)0xb8d4 = (int)uVar6;
  *(undefined2 *)0xb8d6 = (int)((ulong)uVar6 >> 0x10);
  uVar4 = (undefined2)((ulong)*(undefined4 *)0xb860 >> 0x10);
  iVar2 = (int)*(undefined4 *)0xb860;
  iVar2 = func_0x00007b50(0xdea,param_1[3] / 0x18,param_1[4] / -0x12 + 0x3f,*param_2 / 0x18,
                          param_2[1] / -0x12 + 0x3f,*(undefined2 *)(iVar2 + *param_1 * 0x27 + 0x23),
                          *(undefined2 *)(iVar2 + *param_1 * 0x27 + 0x25));
  if (iVar2 == 0) {
    FUN_3000_12b0(*(undefined2 *)0xa68,*(undefined2 *)0xa6a);
  }
  else {
    FUN_3000_12b0(*(undefined2 *)0xa64,*(undefined2 *)0xa66);
  }
  iVar7 = *(int *)0xb8dc;
  param_2[2] = iVar7;
  uVar6 = func_0x0000eeb2(0x65c,param_2[4],param_2[5],iVar7 * 9);
  param_2[4] = (int)uVar6;
  param_2[5] = (int)((ulong)uVar6 >> 0x10);
  for (iVar7 = 0; iVar7 < *(int *)0xb8dc; iVar7 = iVar7 + 1) {
    uVar5 = (undefined2)((ulong)*(undefined4 *)(param_2 + 4) >> 0x10);
    puVar3 = (undefined2 *)(iVar7 * 9 + *(int *)0xb8d4);
    uVar4 = *(undefined2 *)0xb8d6;
    puVar1 = (undefined2 *)((int)*(undefined4 *)(param_2 + 4) + iVar7 * 9);
    *puVar1 = *puVar3;
    puVar1[1] = puVar3[1];
    puVar1[2] = puVar3[2];
    puVar1[3] = puVar3[3];
    *(undefined1 *)(puVar1 + 4) = *(undefined1 *)(puVar3 + 4);
  }
  if (iVar2 == 0) {
    return 0xffff;
  }
  return 0;
}
