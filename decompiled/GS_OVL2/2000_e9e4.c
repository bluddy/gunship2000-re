/* GS.GS2 2000:e9e4 undefined FUN_2000_e9e4(void) */
void __cdecl16far FUN_2000_e9e4(code *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 auStack_2a [2];
  undefined2 local_26;
  undefined2 uStack_24;
  int iStack_22;
  undefined2 uStack_20;
  int iStack_1e;
  undefined2 uStack_1c;
  undefined1 uStack_1a;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 *puStack_c;
  undefined2 uStack_a;
  
  func_0x00000eb0();
  *(undefined2 *)0x9baa = 0;
  *(undefined2 *)0x9ba8 = 0;
  *(undefined2 *)0x9bac = 0x43;
  uStack_a = 0xb9;
  puStack_c = (undefined2 *)0x56;
  *(undefined2 *)0x9ba2 = 0;
  *(undefined2 *)0x9bb0 = 0;
  uStack_e = 0;
  *(undefined2 *)0x9bae = 0xe5;
  uStack_10 = 0xe5;
  uStack_12 = 0x880;
  uStack_14 = 0xbf;
  uStack_16 = 0xea1c;
  func_0x0000c8c0();
  uStack_a = 0xea24;
  func_0x000006f2();
  uStack_a = 0xea29;
  func_0x000102bc();
  uStack_a = 0;
  puStack_c = &local_26;
  uStack_e = 0x102b;
  uStack_10 = 0xea36;
  func_0x0000382a();
  uStack_24 = *(undefined2 *)0x9bae;
  iStack_22 = *(int *)0x9bb0;
  uStack_20 = 1;
  iStack_1e = *(int *)0x9bac;
  local_26 = 0;
  uStack_1c = 0;
  uStack_1a = 0;
  puVar3 = auStack_2a;
  puVar5 = &local_26;
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar3;
    puVar3 = puVar3 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  uVar6 = 0x6f;
  func_0x00000770(0xbf);
  uStack_a = 0xea76;
  (*param_1)();
  if (*(int *)0x9ba2 == 0) {
    return;
  }
  if (*(int *)0x8c8 != 0) {
    uStack_a = 1;
    puStack_c = (undefined2 *)*(undefined2 *)0x9bb0;
    uStack_e = *(undefined2 *)0x9bae;
    uStack_10 = 0x6f;
    uVar6 = 0xef4;
    uStack_12 = 0xea9c;
    func_0x0000ef70();
  }
  puStack_c = (undefined2 *)0xeaa8;
  uStack_a = uVar6;
  puVar3 = (undefined2 *)func_0x00000b20();
  puVar5 = &local_26;
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar3;
    puVar3 = puVar3 + 1;
    *puVar2 = *puVar1;
  }
  *(undefined2 *)0xb60b = uStack_24;
  *(int *)0xb60d = iStack_1e / 2 + iStack_22 + -1;
  uStack_a = 0x6f;
  puStack_c = (undefined2 *)0xead3;
  func_0x000157e2();
  uStack_a = 0;
  puStack_c = (undefined2 *)0x8;
  uStack_e = 0x14e6;
  uStack_10 = 0xeae1;
  func_0x000157f4();
  if (*(int *)0x98fa < 0x65) {
    if (*(int *)0x9a71 == 0) {
      uStack_a = 3;
      puStack_c = (undefined2 *)0x4060;
      uStack_e = 0x14e6;
      uStack_10 = 0xeafe;
      func_0x000156ea();
    }
    else {
      if (*(int *)0x98fc == 0) {
        uStack_a = 0xeb0f;
        iVar4 = FUN_2000_eb6c();
        if (iVar4 != 0) {
          uStack_a = 3;
          puStack_c = (undefined2 *)0x4083;
          uStack_e = 0x14e6;
          uStack_10 = 0xeb1f;
          func_0x000156ea();
          goto LAB_2000_eb45;
        }
      }
      uStack_a = 3;
      puStack_c = (undefined2 *)0x40a8;
      uStack_e = 0x14e6;
      uStack_10 = 0xeb30;
      func_0x000156ea();
    }
  }
  else {
    uStack_a = 3;
    puStack_c = (undefined2 *)0x40dc;
    uStack_e = 0x14e6;
    uStack_10 = 0xeb42;
    func_0x000156ea();
  }
LAB_2000_eb45:
  uStack_a = 0xeb4a;
  func_0x0001534e();
  uStack_a = 0x14e6;
  puStack_c = (undefined2 *)0xeb57;
  FUN_2000_ee54();
  if (*(int *)0x9baa != 0 || *(int *)0x9ba8 != 0) {
    uStack_a = 0xeb67;
    (*(code *)*(undefined2 *)0x9ba8)();
  }
  return;
}
