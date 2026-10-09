/* GS.GS2 2000:b82c undefined FUN_2000_b82c(void) */
void __cdecl16far FUN_2000_b82c(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int iStack_30;
  int local_2e;
  int in_stack_0000ffd4;
  int aiStack_2a [2];
  int local_26;
  int iStack_24;
  int iStack_22;
  undefined2 uStack_20;
  int iStack_1e;
  undefined2 uStack_1c;
  undefined1 uStack_1a;
  undefined2 uStack_12;
  undefined2 uStack_10;
  int iStack_e;
  int *piStack_c;
  undefined1 *puStack_a;
  
  func_0x00000eb0();
  puStack_a = (undefined1 *)0xbf;
  piStack_c = (int *)0xb83f;
  FUN_2000_b742();
  puStack_a = (undefined1 *)0xb846;
  FUN_2000_bada();
  puStack_a = &stack0xffd4;
  piStack_c = (int *)0xbf;
  iStack_e = 0xb853;
  func_0x0000cf8e();
  aiStack_2a[0] = *(int *)0x9884 * 10;
  puStack_a = (undefined1 *)0xb86a;
  func_0x000006f2();
  puStack_a = (undefined1 *)0x0;
  piStack_c = &local_26;
  iStack_e = 0x6f;
  uStack_10 = 0xb877;
  func_0x0000382a();
  iStack_24 = in_stack_0000ffd4 + 0x14;
  iStack_22 = local_2e;
  uStack_20 = 0x50;
  iStack_1e = aiStack_2a[0];
  local_26 = 0;
  uStack_1c = 0;
  uStack_1a = 0;
  piVar3 = aiStack_2a;
  piVar5 = &local_26;
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    piVar2 = piVar3;
    piVar3 = piVar3 + 1;
    piVar1 = piVar5;
    piVar5 = piVar5 + 1;
    *piVar2 = *piVar1;
  }
  iVar4 = 0xbf;
  local_2e = -0x474c;
  func_0x00000770();
  for (iStack_30 = 0; iStack_30 < *(int *)0x9884; iStack_30 = iStack_30 + 1) {
    local_26 = iStack_30 + 1;
    iStack_24 = iVar4;
    iStack_22 = iStack_30 * 10 + local_2e;
    uStack_20 = 0x50;
    iStack_1e = 10;
    uStack_1c = 1;
    uStack_1a = 0;
    piVar3 = aiStack_2a;
    piVar5 = &local_26;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
      piVar2 = piVar3;
      piVar3 = piVar3 + 1;
      piVar1 = piVar5;
      piVar5 = piVar5 + 1;
      *piVar2 = *piVar1;
    }
    iVar4 = 0x6f;
    local_2e = -0x46ed;
    func_0x00000770();
  }
  puStack_a = (undefined1 *)0x6f;
  uVar6 = 0x6f;
  piStack_c = (int *)0xb91f;
  piVar3 = (int *)func_0x00000b20();
  piVar5 = &local_26;
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    piVar2 = piVar5;
    piVar5 = piVar5 + 1;
    piVar1 = piVar3;
    piVar3 = piVar3 + 1;
    *piVar2 = *piVar1;
  }
  if (*(int *)0x8c8 != 0) {
    puStack_a = (undefined1 *)uStack_20;
    piStack_c = (int *)iStack_22;
    iStack_e = iStack_24;
    uStack_10 = 0x6f;
    uVar6 = 0xef4;
    uStack_12 = 0xb946;
    func_0x0000ef70();
  }
  iStack_30 = 0;
  do {
    if (*(int *)0x9884 <= iStack_30) {
LAB_2000_b972:
      piStack_c = (int *)0xb978;
      puStack_a = (undefined1 *)uVar6;
      FUN_2000_b994();
      puStack_a = (undefined1 *)0x3;
      piStack_c = (int *)0x1feb;
      uStack_10 = 0xb987;
      iStack_e = uVar6;
      func_0x000156ea();
      puStack_a = (undefined1 *)0xb98f;
      func_0x0001534e();
      return;
    }
    if (*(char *)(iStack_30 + -0x677a) == *(char *)0xad1b) {
      *(int *)0xb60f = iStack_30 + 1;
      goto LAB_2000_b972;
    }
    iStack_30 = iStack_30 + 1;
  } while( true );
}
