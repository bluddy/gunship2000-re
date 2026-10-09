/* GS.GS2 2000:e3dc undefined FUN_2000_e3dc(void) */
undefined2 __cdecl16far
FUN_2000_e3dc(undefined2 param_1,undefined2 param_2,undefined2 *param_3,undefined2 *param_4,
             int param_5)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 local_e;
  undefined2 uStack_c;
  undefined2 *puStack_a;
  undefined2 *puStack_8;
  
  func_0x00000eb0();
  puStack_8 = (undefined2 *)param_5;
  puStack_a = (undefined2 *)0xbf;
  uStack_c = 0xe3f1;
  puStack_8 = (undefined2 *)func_0x00024684();
  puStack_a = (undefined2 *)param_5;
  uStack_c = 0x92;
  local_e = 2;
  iVar3 = func_0x000244ce(0x20f4);
  if (iVar3 == 0) {
    return 0;
  }
  puVar5 = &local_e;
  puVar4 = (undefined2 *)(*(int *)0xc018 * 0xb + -0x4362);
  for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
  *param_3 = *(undefined2 *)(*(int *)0xc358 + 1);
  *param_4 = *(undefined2 *)(*(int *)0xc358 + 3);
  puStack_8 = param_4;
  puStack_a = param_3;
  uStack_c = param_2;
  local_e = param_1;
  func_0x000210a4(0x20f4);
  puStack_8 = (undefined2 *)0x20f4;
  puStack_a = (undefined2 *)0xe458;
  FUN_2000_fb9c();
  puStack_8 = (undefined2 *)0x20f4;
  puStack_a = (undefined2 *)0xe45c;
  FUN_2000_fc5e();
  puStack_8 = (undefined2 *)0x20f4;
  puStack_a = (undefined2 *)0xe461;
  func_0x00026cfc();
  *(int *)0xc01c = param_5 + 1;
  puStack_8 = param_4;
  puVar4 = (undefined2 *)(*(int *)0xc018 * 0xb + -0x4362);
  puVar5 = &local_e;
  for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar4;
    puVar4 = puVar4 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  *(undefined1 *)puVar4 = *(undefined1 *)puVar5;
  puStack_8 = (undefined2 *)*(undefined2 *)0xc018;
  puStack_a = (undefined2 *)0x20f4;
  uStack_c = 0xe493;
  func_0x00022290();
  puStack_8 = param_4;
  puStack_a = param_3;
  uStack_c = param_2;
  local_e = param_1;
  func_0x0002388c(0x20f4);
  return 0xffff;
}
